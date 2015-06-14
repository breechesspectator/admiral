#include "admiral_macros.h"

#include "\userconfig\admiral\log\behavior.h"
#include "logbook.h"


adm_behavior_fnc_changeAllGroupState = {
    waitUntil {
        {
            TRACE("admiral.behavior",FMT_2("Group '%1' is in '%2' state.",_x,STATE_TEXT_ARRAY select (_x getVariable AS_ARRAY_2("adm_behavior_state", STATE_INIT))));
            [_x] call (adm_behavior_states select (_x getVariable ["adm_behavior_state", STATE_INIT]));
        } foreach ([] call adm_behavior_fnc_getAllGroups);
        sleep 1;
        false;
    };
};

adm_behavior_fnc_stateInit = {
    FUN_ARGS_1(_group);

    _group setVariable ["adm_behavior_state", STATE_MOVING, false];
};

adm_behavior_fnc_stateMoving = {
    FUN_ARGS_1(_group);

    private ["_nextState", "_enemy"];
    _nextState = STATE_MOVING;
    _enemy = (leader _group) findNearestEnemy (leader _group);
    if (!isNull _enemy && {!((vehicle _enemy) isKindOf "Air")}) then {
        _nextState = STATE_ENEMYFOUND;
        _group setVariable ["adm_behavior_enemyPos", getPosATL _enemy, false];
        DEBUG("admiral.behavior",FMT_2("Group '%1' found enemy '%2'!",_group,_enemy));
    };
    _group setVariable ["adm_behavior_state", _nextState, false];
};

adm_behavior_fnc_stateEnemyFound = {
    FUN_ARGS_1(_group);

    DECLARE(_enemyPos) = _group getVariable "adm_behavior_enemyPos";
    if ([_enemyPos, side _group] call adm_behavior_fnc_canCallReinforcement) then {
        [_group, _enemyPos, [side _group, _enemyPos] call adm_behavior_fnc_getEnemyNumbers] call adm_behavior_fnc_callReinforcement;
        [_enemyPos, side _group] call adm_behavior_fnc_addToFoundEnemyArray
    };
    _group setVariable ["adm_behavior_state", STATE_SADENEMY, false];
};

adm_behavior_fnc_stateSeekAndDestroyEnemy = {
    FUN_ARGS_1(_group);

    DECLARE(_sadWp) = [_group, [_group getVariable "adm_behavior_enemyPos", 0], 'SAD', 'AWARE', 'RED'] call adm_common_fnc_createWaypoint;
    _sadWp setWaypointStatements ["true", "[group this] call adm_behavior_fnc_continueMoving;"];
    _group setVariable ["adm_behavior_lastWp", currentWaypoint _group, false];
    _group setVariable ["adm_behavior_state", STATE_COMBAT, false];
    _group setCurrentWaypoint _sadWp;
    DEBUG("admiral.behavior",FMT_1("SAD waypoint was assigned to group '%1'.",_group));
};

adm_behavior_fnc_stateCombat = {
    FUN_ARGS_1(_group);

    DECLARE(_reinfGroup) = _group getVariable "adm_behavior_reinfGroup";
    if (!isNil {_reinfGroup}) then {
        DECLARE(_enemyPos) = _group getVariable "adm_behavior_enemyPos";
        if (!IS_GROUP_ALIVE(_reinfGroup)) then {
            DEBUG("admiral.behavior",FMT_2("Group '%1' tries to call additinal reinforcement, becasue reinforced group '%2' died.",_group,_reinfGroup));
            DECLARE(_enemyNumbers) = [side _group, _enemyPos] call adm_behavior_fnc_getEnemyNumbers;
            _group setVariable ["adm_behavior_reinfGroup", nil];
            [_group, _enemyPos, [ceil random (_enemyNumbers select 0), floor random (_enemyNumbers select 1), floor random (_enemyNumbers select 2)]] call adm_behavior_fnc_callReinforcement;
        } else {
            if (_reinfGroup getVariable "adm_behavior_state" == STATE_MOVING && {leader _group distance _enemyPos > BEHAVIOR_REINF_TURNAROUND_DIST}) then {
                [_group] call adm_behavior_fnc_continueMoving;
                DEBUG("admiral.behavior",FMT_2("Group '%1' returns patrolling, becasue reinforced group '%2' is not in combat.",_group,_reinfGroup));
            };
        };
    };
};

adm_behavior_fnc_continueMoving = {
    FUN_ARGS_1(_group);

    DEBUG("admiral.behavior",FMT_2("Group '%1' is in '%2' state.",_group,STATE_TEXT_ARRAY select (_group getVariable "adm_behavior_state")));
    _group setVariable ["adm_behavior_state", STATE_CONTINUEMOVING, false];
};

adm_behavior_fnc_updateWaypointsAndMoving = {
    FUN_ARGS_1(_group);

    if (_group getVariable "adm_behavior_state" == STATE_CONTINUEMOVING) then {
        _group setCurrentWaypoint [_group, _group getVariable "adm_behavior_lastWp"];
        _group setVariable ["adm_behavior_state", STATE_MOVING, false];
        _group setVariable ["adm_behavior_enemyPos", nil, false];
        _group setVariable ["adm_behavior_reinfGroup", nil, false];
        deleteWaypoint [_group, (count waypoints _group) - 1];
        DEBUG("admiral.behavior",FMT_1("Group '%1' returns patrolling.",_group));
    };
};



adm_behavior_fnc_getEnemyNumbers = {
    FUN_ARGS_2(_side,_enemyPos);

    private ["_enemyNumbers", "_enemyUnits"];
    _enemyNumbers = [1, 0, 0];
    _enemyUnits = [_side] call adm_behavior_getEnemyUnits;
    {
        if (_x distance _enemyPos <= BEHAVIOR_ENEMY_CHECK_RADIUS && {alive _x}) then {
            _enemyNumbers set [0, (_enemyNumbers select 0) + 1];
            if (vehicle _x != _x) then {
                call {
                    if ((vehicle _x) isKindOf "Car") exitWith {_enemyNumbers set [1, (_enemyNumbers select 1) + 1];};
                    if ((vehicle _x) isKindOf "Air") exitWith {_enemyNumbers set [2, (_enemyNumbers select 2) + 1];};
                };
            };
        };
    } foreach _enemyUnits;

    _enemyNumbers;
};

adm_behavior_fnc_canCallReinforcement = {
    FUN_ARGS_2(_enemyPos,_side);

    DECLARE(_canCall) = true;
    {
        if ((_x select 0) + BEHAVIOR_REINF_COOLDOWN > time || {(_x select 1) distance _enemyPos < BEHAVIOR_ENEMY_CHECK_RADIUS}) exitWith {
            _canCall = false;
        };
    } foreach ([_side] call adm_behavior_fnc_getFoundEnemyArray);

    _canCall || {floor random 100 < BEHAVIOR_CANCALL_PERCENT_CHANCE};
};

adm_behavior_fnc_callReinforcement = {
    FUN_ARGS_3(_group,_enemyPos,_enemyNumbers);

    DECLARE(_callNumbers) = [BEHAVIOR_REINF_NUM(_enemyNumbers,1,1,1) + 1, BEHAVIOR_REINF_NUM(_enemyNumbers,3,1,1), BEHAVIOR_REINF_NUM(_enemyNumbers,4,2,1)];
    DEBUG("admiral.behavior",FMT_4("Group '%1' found '%2' number of enemies and tries to call '%3' number of reinforcements at position '%4'.",_group,_enemyNumbers,_callNumbers,_enemyPos));
    [_group, _enemyPos, _callNumbers select 0, adm_behavior_fnc_getAvailableInfGroups] call adm_behavior_fnc_callReinforcementGroups;
    [_group, _enemyPos, _callNumbers select 1, adm_behavior_fnc_getAvailableTechGroups] call adm_behavior_fnc_callReinforcementGroups;
    [_group, _enemyPos, _callNumbers select 2, adm_behavior_fnc_getAvailableArmourGroups] call adm_behavior_fnc_callReinforcementGroups;
};

adm_behavior_fnc_callReinforcementGroups = {
    FUN_ARGS_4(_group,_enemyPos,_count,_groupFunc);

    if (_count > 0) then {
        DECLARE(_groups) = [_enemyPos, _count, [side _group, _enemyPos] call _groupFunc] call adm_behavior_fnc_getReinforcementGroups;
        {
            if ([_x] call adm_behavior_fnc_canReinforce) then {
                _x setVariable ["adm_behavior_enemyPos", _enemyPos, false];
                _x setVariable ["adm_behavior_reinfGroup", _group, false];
                _x setVariable ["adm_behavior_state", STATE_SADENEMY, false];
            };
        } foreach _groups;
    };
};

adm_behavior_fnc_getReinforcementGroups = {
    FUN_ARGS_3(_enemyPos,_numberOfGroups,_groups);

    DECLARE(_reinforcementGroups) = [];
    if (_numberOfGroups > 0) then {
        DECLARE(_closestGroups) = [_groups, {leader _x distance _enemyPos > leader _y distance _enemyPos}] call adm_common_fnc_insertionSort;
        for "_i" from 0 to (_numberOfGroups min (count _closestGroups)) - 1 do {
            PUSH(_reinforcementGroups, _closestGroups select _i);
        };
    };

    _reinforcementGroups;
};

adm_behavior_fnc_canReinforce = {
    FUN_ARGS_1(_group);

    _group getVariable ["adm_behavior_state", STATE_INIT] == STATE_MOVING
        && {!(_x getVariable AS_ARRAY_2("adm_patrol_hasTarget",false))};
};

adm_behavior_fnc_getAllGroups = {
    DECLARE(_patrolGroups) = [];
    FILTER_PUSH_ALL(_patrolGroups, adm_patrol_infGroups, {!(_x getVariable AS_ARRAY_2("adm_patrol_hasTarget",false))});
    FILTER_PUSH_ALL(_patrolGroups, adm_patrol_techGroups, {!(_x getVariable AS_ARRAY_2("adm_patrol_hasTarget",false))});
    FILTER_PUSH_ALL(_patrolGroups, adm_patrol_armourGroups, {!(_x getVariable AS_ARRAY_2("adm_patrol_hasTarget",false))});
    [[_patrolGroups, adm_camp_infGroups, adm_camp_techGroups, adm_camp_armourGroups]] call adm_common_fnc_getAliveGroups;
};

adm_behavior_fnc_getAvailableInfGroups = {
    FUN_ARGS_2(_side,_enemyPos);

    DECLARE(_groups) = [];
    FILTER_PUSH_ALL(_groups, adm_patrol_infGroups, adm_behavior_fnc_isAvailableGroup);
    FILTER_PUSH_ALL(_groups, adm_camp_infGroups, adm_behavior_fnc_isAvailableGroup);
    _groups;
};

adm_behavior_fnc_getAvailableTechGroups = {
    FUN_ARGS_2(_side,_enemyPos);

    DECLARE(_groups) = [];
    FILTER_PUSH_ALL(_groups, adm_patrol_techGroups, adm_behavior_fnc_isAvailableGroup);
    FILTER_PUSH_ALL(_groups, adm_camp_techGroups, adm_behavior_fnc_isAvailableGroup);
    _groups;
};

adm_behavior_fnc_getAvailableArmourGroups = {
    FUN_ARGS_2(_side,_enemyPos);

    DECLARE(_groups) = [];
    FILTER_PUSH_ALL(_groups, adm_patrol_armourGroups, adm_behavior_fnc_isAvailableGroup);
    FILTER_PUSH_ALL(_groups, adm_camp_armourGroups, adm_behavior_fnc_isAvailableGroup);
    _groups;
};

adm_behavior_fnc_isAvailableGroup = {
    [side _x, _side] call adm_common_fnc_isFriendlySide
        && {IS_GROUP_ALIVE(_x)}
        && {leader _x distance _enemyPos <= BEHAVIOR_MAX_REINFORCEMENT_DIST}
        && {[_x] call adm_behavior_fnc_canReinforce};
};

adm_behavior_getEnemyUnits = {
    FUN_ARGS_1(_side);

    DECLARE(_units) = [];
    FILTER_PUSH_ALL(_units, ALL_UNITS, {!(AS_ARRAY_2(side _x, _side) call adm_common_fnc_isFriendlySide)});
    _units;
};

adm_behavior_fnc_addToFoundEnemyArray = {
    FUN_ARGS_2(_enemyPos,_side);

    DECLARE(_sideIndex) = SIDE_ARRAY find _side;
    if (_sideIndex >= 0) then {
        PUSH((adm_behavior_foundEnemies select _sideIndex), AS_ARRAY_2(time,_enemyPos));
    };
};

adm_behavior_fnc_getFoundEnemyArray = {
    FUN_ARGS_1(_side);

    private ["_result", "_sideIndex"];
    _result = [];
    _sideIndex = SIDE_ARRAY find _side;
    if (_sideIndex >= 0) then {
        _result = adm_behavior_foundEnemies select _sideIndex;
    };

    _result;
};

adm_behavior_fnc_initFoundEnemies = {
    adm_behavior_foundEnemies = [];
    {
        PUSH(adm_behavior_foundEnemies,[]);
    } foreach SIDE_ARRAY;
};

adm_behavior_fnc_init = {
    adm_behavior_states = [adm_behavior_fnc_stateInit, adm_behavior_fnc_stateMoving, adm_behavior_fnc_stateEnemyFound, adm_behavior_fnc_stateSeekAndDestroyEnemy, adm_behavior_fnc_stateCombat, adm_behavior_fnc_updateWaypointsAndMoving, {}];
    [] call adm_behavior_fnc_initFoundEnemies;
    [] spawn adm_behavior_fnc_changeAllGroupState;
};
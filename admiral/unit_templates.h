class UnitTemplates {
    class Base {
        side = "civilian";
        camouflage[] = {"woodland", "desert", "snow"};
        infantry[] = {"Hen_random_F", "Cock_random_F", "Goat_random_F", "Sheep_random_F", "Salema_F", "Mackerel_F", "Fin_random_F", "Alsatian_Random_F", "C_Orestes", "C_Nikos"};
        crewmen[] = {"Hen_random_F", "Cock_random_F", "Goat_random_F", "Sheep_random_F", "Salema_F", "Mackerel_F", "Fin_random_F", "Alsatian_Random_F", "C_Orestes", "C_Nikos"};
        pilots[] = {};
        technicals[] = {"C_Van_01_box_F"};
        armour[] = {"C_Van_01_box_F"};
        ah[] = {"C_Van_01_box_F"};
    };

    class NATO_WOODLAND {
        side = "west";
        camouflage[] = {};
        infantry[] = {"B_Soldier_SL_F", "B_soldier_AR_F", "B_Soldier_F", "B_Soldier_AT4_F", "B_HeavyGunner_F", "B_soldier_AR_F", "B_Soldier_AT4_F", "B_soldier_AR_F", "B_Soldier_AT4_F"};
        crewmen[] = {"B_crew_F", "B_engineer_F"};
        pilots[] = {"B_Helipilot_F"};
        technicals[] = {"B_MRAP_01_hmg_F"};
        armour[] = {"B_APC_Wheeled_01_cannon_F", "B_MBT_01_TUSK_F", "B_APC_Tracked_01_rcws_F"};
        ah[] = {"B_Heli_Attack_01_F"};
    };

    class NATO_JUNGLE {
        side = "west";
        camouflage[] = {};
        infantry[] = {"B_T_Soldier_SL_F", "B_T_Soldier_AR_F", "B_T_Soldier_F", "B_T_Soldier_AT4_F", "B_T_Soldier_TL_F", "B_T_Soldier_AR_F", "B_T_Soldier_AT4_F", "B_T_Soldier_AR_F", "B_T_Soldier_AT4_F"};
        crewmen[] = {"B_T_Crew_F", "B_T_Engineer_F"};
        pilots[] = {"B_T_Helipilot_F"};
        technicals[] = {"B_T_LSV_01_armed_F"};
        armour[] = {"B_T_APC_Wheeled_01_cannon_F", "B_T_MBT_01_TUSK_F", "B_APC_Tracked_01_rcws_F"};
        ah[] = {"B_Heli_Attack_01_F"};
    };

    class RHS_USARMY_UCP {
        side = "west";
        camouflage[] = {"woodland"};
        infantry[] = {"rhsusf_army_ucp_teamleader", "rhsusf_army_ucp_autorifleman", "rhsusf_army_ucp_teamleader", "rhsusf_army_ucp_maaws", "rhsusf_army_ucp_machinegunner", "rhsusf_army_ucp_autorifleman", "rhsusf_army_ucp_maaws", "rhsusf_army_ucp_machinegunner", "rhsusf_army_ucp_maaws"};
        crewmen[] = {"rhsusf_army_ucp_crewman", "rhsusf_army_ucp_engineer"};
        pilots[] = {"rhsusf_army_ucp_helipilot"};
        technicals[] = {"rhsusf_m1025_w_m2", "rhsusf_m1025_w_mk19", "rhsusf_m1025_w_m2"};
        armour[] = {"RHS_M2A2_wd", "RHS_M2A3_wd", "RHS_M2A2_wd"};
        ah[] = {"RHS_AH64D_wd"};
    };

    class RHS_USARMY_OCP {
        side = "west";
        camouflage[] = {"desert"};
        infantry[] = {"rhsusf_army_ocp_teamleader", "rhsusf_army_ocp_autorifleman", "rhsusf_army_ocp_teamleader", "rhsusf_army_ocp_maaws", "rhsusf_army_ocp_machinegunner", "rhsusf_army_ocp_autorifleman", "rhsusf_army_ocp_maaws", "rhsusf_army_ocp_machinegunner", "rhsusf_army_ocp_maaws"};
        crewmen[] = {"rhsusf_army_ocp_crewman", "rhsusf_army_ocp_engineer"};
        pilots[] = {"rhsusf_army_ocp_helipilot"};
        technicals[] = {"rhsusf_m1025_d_m2", "rhsusf_m1025_d_mk19", "rhsusf_m1025_d_m2"};
        armour[] = {"RHS_M2A2", "RHS_M2A3", "RHS_M2A2"};
        ah[] = {"RHS_AH64D"};
    };

    // class NATO_CBRN {
    //     side = "west";
    //     camouflage[] = {};
    //     infantry[] = {"skn_b_nbc_sl", "skn_b_nbc_AR", "skn_b_nbc_rf", "skn_b_nbc_AT4", "skn_b_nbc_tl", "skn_b_nbc_AR", "skn_b_nbc_AT4", "skn_b_nbc_AR", "skn_b_nbc_AT4"};
    //     crewmen[] = {"skn_b_nbc_crew", "skn_b_nbc_eng"};
    //     pilots[] = {"skn_b_nbc_crew"};
    //     technicals[] = {"B_MRAP_01_hmg_F"};
    //     armour[] = {"B_APC_Wheeled_01_cannon_F", "B_MBT_01_TUSK_F", "B_APC_Tracked_01_rcws_F"};
    //     ah[] = {"B_Heli_Attack_01_F"};
    // };

    // class MNP_USMC_SN {
    //     side = "west";
    //     camouflage[] = {"snow"};
    //     infantry[] = {"MNP_USMCA_Soldier_O", "MNP_USMCA_Soldier_AR", "MNP_USMCA_Soldier_F", "MNP_USMCA_Soldier_AT", "MNP_USMCA_Soldier_MG", "MNP_USMCA_Soldier_AR", "MNP_USMCA_Soldier_AT", "MNP_USMCA_Soldier_AT"};
    //     crewmen[] = {"MNP_USMCA_Soldier_F", "MNP_USMCA_Soldier_O"};
    //     pilots[] = {"CUP_B_USMC_Pilot"};
    //     technicals[] = {"CUP_B_HMMWV_M2_NATO_T", "CUP_B_HMMWV_MK19_NATO_T", "CUP_B_HMMWV_M2_GPK_NATO_T", "CUP_B_HMMWV_SOV_M2_NATO_T", "CUP_B_HMMWV_SOV_NATO_T"};
    //     armour[] = {"CUP_B_LAV25_USMC", "CUP_B_LAV25_USMC", "CUP_B_AAV_USMC", "CUP_B_M1A1_Woodland_USMC"};
    //     ah[] = {"CUP_B_AH1Z"};
    // };

    // class MNP_US_RAN {
    //     side = "west";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_USR_Soldier_O", "MNP_USR_Soldier_AR", "MNP_USR_Soldier_F", "MNP_USR_Soldier_AT", "MNP_USR_Soldier_MG", "MNP_USR_Soldier_AR", "MNP_USR_Soldier_AT", "MNP_USR_Soldier_AR", "MNP_USR_Soldier_AT"};
    //     crewmen[] = {"MNP_USR_Soldier_F", "MNP_USR_Soldier_O"};
    //     pilots[] = {"B_Helipilot_F"};
    //     technicals[] = {"CUP_B_HMMWV_M2_GPK_USA", "CUP_B_HMMWV_M2_GPK_USA", "CUP_B_HMMWV_SOV_USA", "CUP_B_RG31E_M2_USMC", "CUP_B_RG31_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
    //     armour[] = {"CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M1126_ICV_MK19_Desert_Slat", "CUP_B_M1128_MGS_Desert_Slat", "CUP_B_M2A3Bradley_USA_D", "CUP_B_M2A3Bradley_USA_D", "CUP_B_M1A2_TUSK_MG_DES_US_Army"};
    //     ah[] = {"CUP_B_AH64D_USA"};
    // };

    // class MNP_US_ACU {
    //     side = "west";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_USA_Soldier_O", "MNP_USA_Soldier_AR", "MNP_USA_Soldier_F", "MNP_USA_Soldier_AT", "MNP_USA_Soldier_MG", "MNP_USA_Soldier_AR", "MNP_USA_Soldier_AT", "MNP_USA_Soldier_AR", "MNP_USA_Soldier_AT"};
    //     crewmen[] = {"MNP_USA_Soldier_F", "MNP_USA_Soldier_O"};
    //     pilots[] = {"CUP_B_US_Pilot"};
    //     technicals[] = {"CUP_B_HMMWV_M2_GPK_USA", "CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_MK19_USA", "CUP_B_RG31E_M2_USMC", "CUP_B_RG31_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
    //     armour[] = {"CUP_B_M1126_ICV_M2_Desert", "CUP_B_M1126_ICV_M2_Desert", "CUP_B_M1126_ICV_MK19_Desert", "CUP_B_M1128_MGS_Desert", "CUP_B_M2Bradley_USA_D", "CUP_B_M2Bradley_USA_D", "CUP_B_M1A1_DES_US_Army"};
    //     ah[] = {"CUP_B_AH64D_USA"};
    // };

    // class MNP_US_WD {
    //     side = "west";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_Wood_Soldier_O", "MNP_M81_Soldier_AR", "MNP_Wood_Soldier_F", "MNP_M81_Soldier_AT", "MNP_M81_Soldier_MG", "MNP_M81_Soldier_AR", "MNP_M81_Soldier_AT", "MNP_M81_Soldier_AR", "MNP_M81_Soldier_AT"};
    //     crewmen[] = {"MNP_M81_Soldier_F", "MNP_M81_Soldier_O"};
    //     pilots[] = {"CUP_B_US_Pilot"};
    //     technicals[] = {"CUP_B_HMMWV_M1114_USMC", "CUP_B_HMMWV_M1114_USMC", "CUP_B_HMMWV_M2_USMC", "CUP_B_HMMWV_M2_USMC", "CUP_B_HMMWV_MK19_USMC"};
    //     armour[] = {"CUP_B_M113_USA", "CUP_B_M113_USA", "CUP_B_M2Bradley_USA_W", "CUP_B_M60A3_USMC"};
    //     ah[] = {"CUP_B_AH64D_USA"};
    // };

    // class MNP_US_DE {
    //     side = "west";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_3Co_Soldier_O2", "MNP_3Co_Soldier_AR", "MNP_3Co_Soldier_F2", "MNP_3Co_Soldier_AT", "MNP_3Co_Soldier_MG", "MNP_3Co_Soldier_AR", "MNP_3Co_Soldier_AT", "MNP_3Co_Soldier_AR", "MNP_3Co_Soldier_AT"};
    //     crewmen[] = {"MNP_3Co_Soldier_F", "MNP_3Co_Soldier_O"};
    //     pilots[] = {"CUP_B_US_Pilot"};
    //     technicals[] = {"CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_MK19_USA"};
    //     armour[] = {"CUP_B_M113_USA", "CUP_B_M113_USA", "CUP_B_M2Bradley_USA_D", "CUP_B_M1A1_DES_US_Army"};
    //     ah[] = {"CUP_B_AH64D_USA"};
    // };

    // class MNP_US_SCO {
    //     side = "west";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_Scorpion_Soldier_O", "MNP_Scorpion_Soldier_F", "MNP_Scorpion_Soldier_F", "MNP_Scorpion_Soldier_F", "MNP_Scorpion_Soldier_AT", "NP_Scorpion_Soldier_MG", "MNP_Scorpion_Soldier_AR", "MNP_Scorpion_Soldier_AT", "MNP_Scorpion_Soldier_AR", "MNP_Scorpion_Soldier_AT"};
    //     crewmen[] = {"MNP_Scorpion_Soldier_F", "MNP_Scorpion_Soldier_O"};
    //     pilots[] = {"CUP_B_US_Pilot"};
    //     technicals[] = {"CUP_B_HMMWV_M2_GPK_USA", "CUP_B_HMMWV_M2_GPK_USA", "CUP_B_HMMWV_SOV_USA", "CUP_B_RG31E_M2_USMC", "CUP_B_RG31_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
    //     armour[] = {"CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M1126_ICV_MK19_Desert_Slat", "CUP_B_M1128_MGS_Desert_Slat", "CUP_B_M2A3Bradley_USA_D", "CUP_B_M2A3Bradley_USA_D", "CUP_B_M1A2_TUSK_MG_DES_US_Army"};
    //     ah[] = {"CUP_B_AH64D_USA"};
    // };

    // class MNP_US_RAN_SCO {
    //     side = "west";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_USR_Sco_Soldier_O", "MNP_USR_Sco_Soldier_F", "MNP_USR_Sco_Soldier_F", "MNP_USR_Sco_Soldier_AT", "MNP_USR_Sco_Soldier_MG", "MNP_USR_Sco_Soldier_AR", "MNP_USR_Sco_Soldier_AT", "MNP_USR_Sco_Soldier_AR", "MNP_USR_Sco_Soldier_AT"};
    //     crewmen[] = {"MNP_USR_Sco_Soldier_F", "MNP_USR_Sco_Soldier_O"};
    //     pilots[] = {"B_Helipilot_F"};
    //     technicals[] = {"CUP_B_HMMWV_M2_GPK_USA", "CUP_B_HMMWV_M2_GPK_USA", "CUP_B_HMMWV_SOV_USA", "CUP_B_RG31E_M2_USMC", "CUP_B_RG31_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
    //     armour[] = {"CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M1126_ICV_MK19_Desert_Slat", "CUP_B_M1128_MGS_Desert_Slat", "CUP_B_M2A3Bradley_USA_D", "CUP_B_M2A3Bradley_USA_D", "CUP_B_M1A2_TUSK_MG_DES_US_Army"};
    //     ah[] = {"CUP_B_AH64D_USA"};
    // };

    // class MNP_GE_WD {
    //     side = "west";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_GER_Soldier_S", "MNP_GER_Soldier_AR", "MNP_GER_Soldier_F", "MNP_GER_Soldier_AT", "MNP_GER_Soldier_MG", "MNP_GER_Soldier_AR", "MNP_GER_Soldier_AT", "MNP_GER_Soldier_AR", "MNP_GER_Soldier_AT"};
    //     crewmen[] = {"MNP_GER_Soldier_F", "MNP_GER_Soldier_S"};
    //     pilots[] = {"MNP_GER_Soldier_S"};
    //     technicals[] = {"CUP_B_Dingo_GER_Wdl", "CUP_B_Dingo_GER_Wdl", "CUP_B_Dingo_GL_GER_Wdl"};
    //     armour[] = {"I_MBT_03_cannon_F"};
    //     ah[] = {"B_Heli_Attack_01_F"};
    // };

    // class MNP_GE_DE {
    //     side = "west";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_GER_Soldier_DS", "MNP_GER_Soldier_AR_D", "MNP_GER_Soldier_DF", "MNP_GER_Soldier_AT_D", "MNP_GER_Soldier_MG_D", "MNP_GER_Soldier_AR_D", "MNP_GER_Soldier_AT_D", "MNP_GER_Soldier_AR_D", "MNP_GER_Soldier_AT_D"};
    //     crewmen[] = {"MNP_GER_Soldier_DF", "MNP_GER_Soldier_DS"};
    //     pilots[] = {"MNP_GER_Soldier_DS"};
    //     technicals[] = {"CUP_B_Dingo_GL_GER_Des", "CUP_B_Dingo_GER_Des", "CUP_B_Dingo_GER_Des"};
    //     armour[] = {"I_MBT_03_cannon_F"};
    //     ah[] = {"B_Heli_Attack_01_F"};
    // };

    // class MNP_CA_WD {
    //     side = "west";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_Canada_Soldier_S", "MNP_Canada_Soldier_AR", "MNP_Canada_Soldier_F", "MNP_Canada_Soldier_AT", "MNP_Canada_Soldier_MG", "MNP_Canada_Soldier_AR", "MNP_Canada_Soldier_AT", "MNP_Canada_Soldier_AR", "MNP_Canada_Soldier_AT"};
    //     crewmen[] = {"MNP_Canada_Soldier_F", "MNP_Canada_Soldier_S"};
    //     pilots[] = {"MNP_Canada_Soldier_S"};
    //     technicals[] = {"CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_Mk19_OD_USMC"};
    //     armour[] = {"ARK_M113_CAN", "ARK_LEO2_CAN"};
    //     ah[] = {"CUP_B_UH1Y_GUNSHIP_USMC"};
    // };

    // class MNP_CA_DE {
    //     side = "west";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_Canada_Soldier_DS", "MNP_Canada_Soldier_DAR", "MNP_Canada_Soldier_DF", "MNP_Canada_Soldier_DAT", "MNP_Canada_Soldier_DMG", "MNP_Canada_Soldier_DAR", "MNP_Canada_Soldier_DAT", "MNP_Canada_Soldier_DAR", "MNP_Canada_Soldier_DAT"};
    //     crewmen[] = {"MNP_Canada_Soldier_DF", "MNP_Canada_Soldier_DS"};
    //     pilots[] = {"MNP_Canada_Soldier_DS"};
    //     technicals[] = {"CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_Mk19_OD_USMC"};
    //     armour[] = {"ARK_M113_CAN", "ARK_LEO2_CAN"};
    //     ah[] = {"CUP_B_UH1Y_GUNSHIP_USMC"};
    // };

    // class MNP_AUS {
    //     side = "west";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_AUS_Soldier_S", "MNP_AUS_Soldier_AR", "MNP_AUS_Soldier_F", "MNP_AUS_Soldier_AT", "MNP_AUS_Soldier_MG", "MNP_AUS_Soldier_AR", "MNP_AUS_Soldier_AT", "MNP_AUS_Soldier_AR", "MNP_AUS_Soldier_AT"};
    //     crewmen[] = {"MNP_AUS_Soldier_F", "MNP_AUS_Soldier_S"};
    //     pilots[] = {"MNP_AUS_Soldier_S"};
    //     technicals[] = {"ARK_LR_M2_AUS"};
    //     armour[] = {"ARK_M113_AUS", "ARK_LAV25M240_AUS", "ARK_M1A1_AUS"};
    //     ah[] = {"CUP_B_UH1Y_GUNSHIP_USMC"};
    // };

    // class MNP_AUS_AMCU {
    //     side = "west";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_AMCU_Soldier_F", "MNP_AMCU_Soldier_AR", "MNP_AMCU_Soldier_F", "MNP_AMCU_Soldier_O", "MNP_AMCU_Soldier_AT", "MNP_AMCU_Soldier_MG", "MNP_AMCU_Soldier_AR", "MNP_AMCU_Soldier_AT", "MNP_AMCU_Soldier_AR", "MNP_AMCU_Soldier_AT"};
    //     crewmen[] = {"MNP_AMCU_Soldier_F", "MNP_AMCU_Soldier_O"};
    //     pilots[] = {"MNP_AMCU_Soldier_O"};
    //     technicals[] = {"ARK_LR_M2_AUS"};
    //     armour[] = {"ARK_M113_AUS", "ARK_LAV25M240_AUS", "ARK_M1A1_AUS", "ARK_M1A1_AUS_TUSK"};
    //     ah[] = {"CUP_B_UH1Y_GUNSHIP_USMC"};
    // };

    // class MNP_ROK {
    //     side = "west";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_ROK_Soldier_O", "MNP_ROK_Soldier_AR", "MNP_ROK_Soldier_F", "MNP_ROK_Soldier_AT", "MNP_ROK_Soldier_MG", "MNP_ROK_Soldier_AR", "MNP_ROK_Soldier_AT", "MNP_ROK_Soldier_AR", "MNP_ROK_Soldier_AT"};
    //     crewmen[] = {"MNP_ROK_Soldier_F", "MNP_ROK_Soldier_O"};
    //     pilots[] = {"MNP_ROK_Soldier_F"};
    //     technicals[] = {"CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_MK19_USA"};
    //     armour[] = {"CUP_B_M113_USA", "CUP_B_M113_USA", "CUP_B_M163_USA"};
    //     ah[] = {"CUP_B_AH1Z"};
    // };

    // class MNP_PMC {
    //     side = "west";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_OD_Soldier_O", "MNP_OD_Soldier_AR", "MNP_OD_Soldier_F", "MNP_OD_Soldier_AT", "MNP_OD_Soldier_MG", "MNP_OD_Soldier_AR", "MNP_OD_Soldier_AT", "MNP_OD_Soldier_AR", "MNP_OD_Soldier_AT"};
    //     crewmen[] = {"MNP_OD_Soldier_F", "MNP_OD_Soldier_O"};
    //     pilots[] = {"MNP_OD_Soldier_O"};
    //     technicals[] = {"CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_MK19_USA", "CUP_I_SUV_Armored_ION", "CUP_I_SUV_Armored_ION"};
    //     armour[] = {"CUP_B_M113_USA", "CUP_B_M113_USA", "CUP_I_BMP1_TK_GUE", "CUP_I_BMP1_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_I_Mi24_D_ION"};
    // };

    // class UKR_TTSKO {
    //     side = "west";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_UKR_G", "MNP_UKR_A", "MNP_UKR_A", "MNP_UKR_O", "MNP_UKR_MG", "MNP_UKR_AR", "MNP_UKR_AT", "MNP_UKR_AR", "MNP_UKR_AT"};
    //     crewmen[] = {"MNP_UKR_A", "MNP_UKR_O"};
    //     pilots[] = {"MNP_UKR_O"};
    //     technicals[] = {"CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_MG_CDF", "CUP_B_UAZ_AGS30_CDF", "CUP_B_UAZ_SPG9_CDF"};
    //     armour[] = {"CUP_B_BRDM2_CDF", "CUP_B_BRDM2_CDF", "CUP_B_BRDM2_CDF", "CUP_B_BMP2_CDF", "CUP_B_BMP2_CDF", "CUP_B_T72_CDF", "CUP_B_BTR60_CDF", "CUP_B_BTR60_CDF"};
    //     ah[] = {"CUP_B_Mi24_D_CDF"};
    // };

    // class FIA_GUER {
    //     side = "west";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"B_G_Soldier_SL_F", "B_G_Soldier_AR_F", "B_G_Soldier_lite_F", "B_G_Soldier_RPG7_F", "B_G_Soldier_M_F", "B_G_Soldier_AR_F", "B_G_Soldier_RPG7_F", "B_G_Soldier_AR_F", "B_G_Soldier_RPG7_F"};
    //     crewmen[] = {"B_G_Soldier_F", "B_G_engineer_F"};
    //     pilots[] = {"B_G_Soldier_lite_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU", "B_G_Offroad_01_armed_F", "B_G_Offroad_01_armed_F"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_T34_TK_GUE", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_SLA", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };

    class CSAT_WOODLAND {
        side = "east";
        camouflage[] = {};
        infantry[] = {"O_Soldier_SL_F", "O_Soldier_AR_F", "O_Soldier_lite_F", "O_Soldier_RPG18_F", "O_support_MG_F", "O_Soldier_AR_F", "O_Soldier_RPG18_F", "O_Soldier_AR_F", "O_Soldier_LAT_F"};
        crewmen[] = {"O_crew_F", "O_engineer_F"};
        pilots[] = {"O_Helipilot_F"};
        technicals[] = {"O_MRAP_02_hmg_F", "O_LSV_02_armed_F", "O_LSV_02_armed_F"};
        armour[] = {"O_APC_Tracked_02_cannon_F", "O_MBT_02_cannon_F", "O_APC_Wheeled_02_rcws_F"};
        ah[] = {"O_Heli_Attack_02_F"};
    };

    class CSAT_URBAN {
        side = "east";
        camouflage[] = {};
        infantry[] = {"O_soldierU_SL_F", "O_soldierU_AR_F", "O_soldierU_F", "O_soldierU_RPG18_F", "O_soldierU_M_F", "O_soldierU_AR_F", "O_soldierU_RPG18_F", "O_soldierU_AR_F", "O_soldierU_RPG18_F"};
        crewmen[] = {"O_soldierU_F", "O_engineer_U_F"};
        pilots[] = {"O_soldierU_TL_F"};
        technicals[] = {"O_MRAP_02_hmg_F", "O_LSV_02_armed_F", "O_LSV_02_armed_F"};
        armour[] = {"O_APC_Tracked_02_cannon_F", "O_MBT_02_cannon_F", "O_APC_Wheeled_02_rcws_F"};
        ah[] = {"O_Heli_Attack_02_F"};
    };

    class CSAT_JUNGLE {
        side = "east";
        camouflage[] = {};
        infantry[] = {"O_T_Soldier_SL_F", "O_T_Soldier_AR_F", "O_T_Soldier_TL_F", "O_T_Soldier_RPG18_F", "O_T_Support_MG_F", "O_T_Soldier_AR_F", "O_T_Soldier_RPG18_F", "O_T_Soldier_AR_F", "O_T_Soldier_RPG18_F"};
        crewmen[] = {"O_T_Crew_F", "O_T_Engineer_F"};
        pilots[] = {"O_T_Pilot_F"};
        technicals[] = {"O_T_MRAP_02_hmg_ghex_F", "O_LSV_02_armed_F", "O_LSV_02_armed_F"};
        armour[] = {"O_T_APC_Tracked_02_cannon_ghex_F", "O_T_MBT_02_cannon_ghex_F", "O_T_APC_Wheeled_02_rcws_ghex_F"};
        ah[] = {"O_Heli_Attack_02_F"};
    };

    class RHS_VDV_EMR {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"rhs_vdv_officer", "rhs_vdv_arifleman", "rhs_vdv_sergeant", "rhs_vdv_at", "rhs_vdv_machinegunner", "rhs_vdv_arifleman", "rhs_vdv_at", "rhs_vdv_machinegunner", "rhs_vdv_at"};
        crewmen[] = {"rhs_vdv_crew", "rhs_vdv_engineer"};
        pilots[] = {"rhs_pilot_combat_heli"};
        technicals[] = {"rhs_tigr_sts_vdv", "rhs_tigr_sts_vdv", "rhs_tigr_m_vdv"};
        armour[] = {"rhs_btr60_vdv", "rhs_btr70_vdv", "rhs_btr80_vdv"};
        ah[] = {"RHS_Mi24V_vdv"};
    };

    class RHS_VDV_EMR_DESERT {
        side = "east";
        camouflage[] = {"desert"};
        infantry[] = {"rhs_vdv_des_officer", "rhs_vdv_des_arifleman", "rhs_vdv_des_sergeant", "rhs_vdv_des_at", "rhs_vdv_des_machinegunner", "rhs_vdv_des_arifleman", "rhs_vdv_des_at", "rhs_vdv_des_machinegunner", "rhs_vdv_des_at"};
        crewmen[] = {"rhs_vdv_des_crew", "rhs_vdv_des_engineer"};
        pilots[] = {"rhs_pilot_combat_heli"};
        technicals[] = {"rhs_tigr_sts_vdv", "rhs_tigr_sts_vdv", "rhs_tigr_m_vdv"};
        armour[] = {"rhs_btr60_vdv", "rhs_btr70_vdv", "rhs_btr80_vdv"};
        ah[] = {"RHS_Mi24V_vdv"};
    };

    class RHS_VDV_FLORA {
        side = "east";
        camouflage[] = {"woodland"};
        infantry[] = {"rhs_vdv_flora_officer", "rhs_vdv_flora_machinegunner", "rhs_vdv_flora_sergeant", "rhs_vdv_flora_at", "rhs_vdv_flora_machinegunner", "rhs_vdv_flora_machinegunner", "rhs_vdv_flora_at", "rhs_vdv_flora_machinegunner", "rhs_vdv_flora_at"};
        crewmen[] = {"rhs_vdv_flora_crew", "rhs_vdv_flora_engineer"};
        pilots[] = {"rhs_pilot_combat_heli"};
        technicals[] = {"rhs_tigr_sts_vdv", "rhs_tigr_sts_vdv", "rhs_tigr_m_vdv"};
        armour[] = {"rhs_btr60_vdv", "rhs_btr70_vdv", "rhs_btr80_vdv"};
        ah[] = {"RHS_Mi24V_vdv"};
    };

    // class MNP_OPF_F_SN {
    //     side = "east";
    //     camouflage[] = {"snow"};
    //     infantry[] = {"MNP_RU_Soldier_Arctic_O", "MNP_RU_Soldier_Arctic_AR", "MNP_RU_Soldier_Arctic_F", "MNP_RU_Soldier_Arctic_AT", "MNP_RU_Soldier_Arctic_MG", "MNP_RU_Soldier_Arctic_AR", "MNP_RU_Soldier_Arctic_AT", "MNP_RU_Soldier_Arctic_AR", "MNP_RU_Soldier_Arctic_AT"};
    //     crewmen[] = {"MNP_RU_Soldier_Arctic_F", "MNP_RU_Soldier_Arctic_O"};
    //     pilots[] = {"MNP_RU_Soldier_Arctic_F"};
    //     technicals[] = {"O_MRAP_02_hmg_F", "O_LSV_02_armed_F", "O_LSV_02_armed_F"};
    //     armour[] = {"O_APC_Tracked_02_cannon_F", "O_MBT_02_cannon_F", "O_APC_Wheeled_02_rcws_F"};
    //     ah[] = {"O_Heli_Attack_02_F"};
    // };

    // class MNP_CH_WD {
    //     side = "east";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_CN_Soldier_O", "MNP_CN_Soldier_AR", "MNP_CN_Soldier_F", "MNP_CN_Soldier_RAT", "MNP_CN_Soldier_MG", "MNP_CN_Soldier_AR", "MNP_CN_Soldier_RAT", "MNP_CN_Soldier_AR", "MNP_CN_Soldier_RAT"};
    //     crewmen[] = {"MNP_CN_Soldier_F", "MNP_CN_Soldier_O"};
    //     pilots[] = {"MNP_CN_Soldier_O"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"O_Heli_Light_02_v2_F"};
    // };

    // class MNP_CH_WD2 {
    //     side = "east";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_CN_WD2_Soldier_O", "MNP_CN_WD2_Soldier_F", "MNP_CN_WD2_Soldier_F", "MNP_CN_WD2_Soldier_G", "MNP_CN_WD2_Soldier_MG", "MNP_CN_WD2_Soldier_AR", "MNP_CN_WD2_Soldier_RAT", "MNP_CN_WD2_Soldier_AR", "MNP_CN_WD2_Soldier_RAT"};
    //     crewmen[] = {"MNP_CN_WD2_Soldier_F", "MNP_CN_WD2_Soldier_O"};
    //     pilots[] = {"MNP_CN_WD2_Soldier_O"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"O_Heli_Light_02_v2_F"};
    // };

    // class MNP_CH_DE {
    //     side = "east";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_CD_Soldier_O", "MNP_CD_Soldier_AR", "MNP_CD_Soldier_F", "MNP_CD_Soldier_RAT", "MNP_CD_Soldier_MG", "MNP_CD_Soldier_AR", "MNP_CD_Soldier_RAT", "MNP_CD_Soldier_AR", "MNP_CD_Soldier_RAT"};
    //     crewmen[] = {"MNP_CD_Soldier_F", "MNP_CD_Soldier_O"};
    //     pilots[] = {"MNP_CD_Soldier_O"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"O_Heli_Light_02_v2_F"};
    // };

    // class MNP_CH_MAR {
    //     side = "east";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_CM_Soldier_O", "MNP_CM_Soldier_AR", "MNP_CM_Soldier_F", "MNP_CM_Soldier_RAT", "MNP_CM_Soldier_MG", "MNP_CM_Soldier_AR", "MNP_CM_Soldier_RAT", "MNP_CM_Soldier_AR", "MNP_CM_Soldier_RAT"};
    //     crewmen[] = {"MNP_CM_Soldier_F", "MNP_CM_Soldier_O"};
    //     pilots[] = {"MNP_CM_Soldier_O"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"O_Heli_Light_02_v2_F"};
    // };

    // class MNP_RU_VDV_DE {
    //     side = "east";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_RU_Soldier_O_D", "MNP_RU_Soldier_AR_D", "MNP_RU_Soldier_MEDIUM_D", "MNP_RU_Soldier_AT_D", "MNP_RU_Soldier_MG_D", "MNP_RU_Soldier_AR_D", "MNP_RU_Soldier_AT_D", "MNP_RU_Soldier_AR_D", "MNP_RU_Soldier_AT_D"};
    //     crewmen[] = {"MNP_RU_Soldier_MEDIUM_D", "MNP_RU_Soldier_O_D"};
    //     pilots[] = {"MNP_RU_Soldier_O_D"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_RU", "CUP_O_BTR90_RU", "CUP_O_BMP2_RU", "CUP_O_T72_RU", "CUP_O_T90_RU"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_KOR_OD {
    //     side = "east";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_NK_Soldier_O", "MNP_NK_Soldier_AR", "MNP_NK_Soldier_F", "MNP_NK_Soldier_AT", "MNP_NK_Soldier_MG", "MNP_NK_Soldier_AR", "MNP_NK_Soldier_AT", "MNP_NK_Soldier_AR", "MNP_NK_Soldier_AT"};
    //     crewmen[] = {"MNP_NK_Soldier_F", "MNP_NK_Soldier_O"};
    //     pilots[] = {"MNP_NK_Soldier_O"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_KOR_WD {
    //     side = "east";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_NKC_Soldier_O", "MNP_NKC_Soldier_AR", "MNP_NKC_Soldier_F", "MNP_NKC_Soldier_AT", "MNP_NKC_Soldier_MG", "MNP_NKC_Soldier_AR", "MNP_NKC_Soldier_AT", "MNP_NKC_Soldier_AR", "MNP_NKC_Soldier_AT"};
    //     crewmen[] = {"MNP_NKC_Soldier_F", "MNP_NKC_Soldier_O"};
    //     pilots[] = {"MNP_NKC_Soldier_O"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_RU_AIR {
    //     side = "east";
    //     camouflage[] = {"woodland", "desert", "snow"};
    //     infantry[] = {"MNP_RO3_Soldier_O", "MNP_RO3_Soldier_AR", "MNP_RO3_Soldier_F", "MNP_RO3_Soldier_AT", "MNP_RO3_Soldier_MG", "MNP_RO3_Soldier_AR", "MNP_RO3_Soldier_AT", "MNP_RO3_Soldier_AR", "MNP_RO3_Soldier_AT"};
    //     crewmen[] = {"MNP_RO3_Soldier_F", "MNP_RO3_Soldier_O"};
    //     pilots[] = {"MNP_RO3_Soldier_O"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_O_BMP2_RU", "CUP_O_BMP2_RU", "CUP_I_BMP1_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_I_T55_TK_GUE", "CUP_O_BTR60_RU", "CUP_O_BTR60_RU"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_DPR_SUM {
    //     side = "east";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_DPR_T_Soldier_TL", "MNP_DPR_T_Soldier_F", "MNP_DPR_T_Soldier_F", "MNP_DPR_T_Soldier_GR", "MNP_DPR_T_Soldier_MG", "MNP_DPR_T_Soldier_AR", "MNP_DPR_T_Soldier_AT", "MNP_DPR_T_Soldier_AR", "MNP_DPR_T_Soldier_AT"};
    //     crewmen[] = {"MNP_DPR_T_Soldier_F", "MNP_DPR_T_Soldier_TL"};
    //     pilots[] = {"MNP_DPR_T_Soldier_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_AGS30_CHDKZ", "CUP_O_UAZ_SPG9_CHDKZ"};
    //     armour[] = {"CUP_O_BRDM2_CHDKZ", "CUP_O_BRDM2_CHDKZ", "CUP_O_BRDM2_CHDKZ", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_CHDKZ", "CUP_O_BMP2_CHDKZ", "CUP_O_T72_CHDKZ"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_DPR_AUT {
    //     side = "east";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_DPR_Soldier_TL", "MNP_DPR_Soldier_F", "MNP_DPR_Soldier_F", "MNP_DPR_Soldier_GR", "MNP_DPR_Soldier_MG", "MNP_DPR_Soldier_AT", "MNP_DPR_Soldier_AR", "MNP_DPR_Soldier_AT", "MNP_DPR_Soldier_AR"};
    //     crewmen[] = {"MNP_DPR_Soldier_F", "MNP_DPR_Soldier_TL"};
    //     pilots[] = {"MNP_DPR_Soldier_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_MG_CHDKZ", "CUP_O_UAZ_AGS30_CHDKZ", "CUP_O_UAZ_SPG9_CHDKZ"};
    //     armour[] = {"CUP_O_BRDM2_CHDKZ", "CUP_O_BRDM2_CHDKZ", "CUP_O_BRDM2_CHDKZ", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_CHDKZ", "CUP_O_BMP2_CHDKZ", "CUP_O_T72_CHDKZ"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_IRN_WD {
    //     side = "east";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_IRN_WD_Soldier_TL", "MNP_IRN_WD_Soldier_F", "MNP_IRN_WD_Soldier_F", "MNP_IRN_WD_Soldier_F", "MNP_IRN_WD_Soldier_GR", "MNP_IRN_WD_Soldier_AR", "MNP_IRN_WD_Soldier_AT", "MNP_IRN_WD_Soldier_AR", "MNP_IRN_WD_Soldier_AT"};
    //     crewmen[] = {"MNP_IRN_WD_Soldier_F", "MNP_IRN_WD_Soldier_TL"};
    //     pilots[] = {"MNP_IRN_WD_Soldier_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_Green_RU", "CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_SLA", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_IRN_RG_WD {
    //     side = "east";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_IRN_WD_IRGC_Soldier_O", "MNP_IRN_WD_IRGC_Soldier_F", "MNP_IRN_WD_IRGC_Soldier_F", "MNP_IRN_WD_IRGC_Soldier_F", "MNP_IRN_WD_IRGC_Soldier_MG", "MNP_IRN_WD_IRGC_Soldier_AR", "MNP_IRN_WD_IRGC_Soldier_AT", "MNP_IRN_WD_IRGC_Soldier_AR", "MNP_IRN_WD_IRGC_Soldier_AT"};
    //     crewmen[] = {"MNP_IRN_WD_IRGC_Soldier_F", "MNP_IRN_WD_IRGC_Soldier_O"};
    //     pilots[] = {"MNP_IRN_WD_IRGC_Soldier_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_Green_RU", "CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_I_T55_TK_GUE"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_IRN_DE {
    //     side = "east";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_IRN_DE_Soldier_TL", "MNP_IRN_DE_Soldier_F", "MNP_IRN_DE_Soldier_F", "MNP_IRN_DE_Soldier_GR", "MNP_IRN_DE_Soldier_MG", "MNP_IRN_DE_Soldier_AR", "MNP_IRN_DE_Soldier_AT", "MNP_IRN_DE_Soldier_AR", "MNP_IRN_DE_Soldier_AT"};
    //     crewmen[] = {"MNP_IRN_DE_Soldier_F", "MNP_IRN_DE_Soldier_TL"};
    //     pilots[] = {"MNP_IRN_DE_Soldier_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_RU", "CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    // class MNP_IRN_RG_DE {
    //     side = "east";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_IRN_DE_IRGC_Soldier_O", "MNP_IRN_DE_IRGC_Soldier_F", "MNP_IRN_DE_IRGC_Soldier_F", "MNP_IRN_DE_IRGC_Soldier_G", "MNP_IRN_DE_IRGC_Soldier_MG", "MNP_IRN_DE_IRGC_Soldier_AR", "MNP_IRN_DE_IRGC_Soldier_AT", "MNP_IRN_DE_IRGC_Soldier_AR", "MNP_IRN_DE_IRGC_Soldier_AT"};
    //     crewmen[] = {"MNP_IRN_DE_IRGC_Soldier_F", "MNP_IRN_DE_IRGC_Soldier_O"};
    //     pilots[] = {"MNP_IRN_DE_IRGC_Soldier_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_RU", "CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_I_T55_TK_GUE"};
    //     ah[] = {"CUP_O_Mi24_V_RU"};
    // };

    class AAF_WOODLAND {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"I_Soldier_SL_F", "I_Soldier_AR_F", "I_Soldier_lite_F", "I_Soldier_AT4_F", "I_Soldier_M_F", "I_Soldier_AR_F", "I_Soldier_AT4_F", "I_Soldier_AR_F", "I_Soldier_AT4_F"};
        crewmen[] = {"I_crew_F", "I_engineer_F"};
        pilots[] = {"I_Helipilot_F"};
        technicals[] = {"I_MRAP_03_hmg_F", "CUP_I_LR_MG_AAF", "CUP_I_LR_MG_AAF"};
        armour[] = {"I_APC_tracked_03_cannon_F", "I_APC_Wheeled_03_cannon_F", "CUP_I_M113_AAF", "CUP_I_M113_AAF"};
        ah[] = {"I_Heli_light_03_F"};
    };

    class AAF_CBRN {
        side = "resistance";
        camouflage[] = {};
        infantry[] = {"skn_i_nbc_sl", "skn_i_nbc_AR", "skn_i_nbc_rf", "skn_i_nbc_AT4", "skn_i_nbc_a", "skn_i_nbc_AR", "skn_i_nbc_AT4", "skn_i_nbc_AR", "skn_i_nbc_AT4"};
        crewmen[] = {"skn_i_nbc_crew", "skn_i_nbc_medic"};
        pilots[] = {"skn_i_nbc_crew"};
        technicals[] = {"I_MRAP_03_hmg_F", "CUP_I_LR_MG_AAF", "CUP_I_LR_MG_AAF"};
        armour[] = {"I_APC_tracked_03_cannon_F", "I_APC_Wheeled_03_cannon_F", "CUP_I_M113_AAF", "CUP_I_M113_AAF"};
        ah[] = {"I_Heli_light_03_F"};
    };

    // class MNP_MIL_WD {
    //     side = "resistance";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_Militia_Soldier_O", "MNP_Militia_Soldier_AR", "MNP_Militia_Soldier_F", "MNP_Militia_Soldier_RAT", "MNP_Militia_Soldier_MG", "MNP_Militia_Soldier_AR", "MNP_Militia_Soldier_RAT", "MNP_Militia_Soldier_AR", "MNP_Militia_Soldier_RAT"};
    //     crewmen[] = {"MNP_Militia_Soldier_F", "MNP_Militia_Soldier_O"};
    //     pilots[] = {"MNP_Militia_Soldier_F"};
    //     technicals[] = {"CUP_B_LR_MG_GB_W", "CUP_O_UAZ_MG_CHDKZ", "CUP_I_Datsun_PK", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_CHDKZ", "CUP_I_Ural_ZU23_NAPA"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };

    // class MNP_MIL_DE {
    //     side = "resistance";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_Militia_Soldier_DO", "MNP_Militia_Soldier_DAR", "MNP_Militia_Soldier_DF", "MNP_Militia_Soldier_DRAT", "MNP_Militia_Soldier_DMG", "MNP_Militia_Soldier_DAR", "MNP_Militia_Soldier_DRAT", "MNP_Militia_Soldier_DAR", "MNP_Militia_Soldier_DRAT"};
    //     crewmen[] = {"MNP_Militia_Soldier_DF", "MNP_Militia_Soldier_DO"};
    //     pilots[] = {"MNP_Militia_Soldier_DF"};
    //     technicals[] = {"CUP_B_LR_MG_GB_W", "CUP_O_UAZ_MG_CHDKZ", "CUP_I_Datsun_PK", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_CHDKZ", "CUP_I_Ural_ZU23_NAPA"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };

    // class MNP_NPA_WD {
    //     side = "resistance";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_DPM_Soldier_O", "MNP_DPM_Soldier_AR", "MNP_DPM_Soldier_D", "MNP_DPM_Soldier_AT", "MNP_DPM_Soldier_MG", "MNP_DPM_Soldier_AR", "MNP_DPM_Soldier_AT", "MNP_DPM_Soldier_AR", "MNP_DPM_Soldier_AT"};
    //     crewmen[] = {"MNP_DPM_Soldier_D", "MNP_DPM_Soldier_O"};
    //     pilots[] = {"MNP_DPM_Soldier_D"};
    //     technicals[] = {"CUP_B_LR_MG_GB_W", "CUP_O_UAZ_MG_CHDKZ", "CUP_I_Datsun_PK", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_CHDKZ", "CUP_I_Ural_ZU23_NAPA"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };

    // class MNP_NPA_DE {
    //     side = "resistance";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_SixCo_Soldier_O", "MNP_SixCo_Soldier_AR", "MNP_SixCo_Soldier_D", "MNP_SixCo_Soldier_AT", "MNP_SixCo_Soldier_MG", "MNP_SixCo_Soldier_AR", "MNP_SixCo_Soldier_AT", "MNP_SixCo_Soldier_AR", "MNP_SixCo_Soldier_AT"};
    //     crewmen[] = {"MNP_SixCo_Soldier_D", "MNP_SixCo_Soldier_O"};
    //     pilots[] = {"MNP_SixCo_Soldier_D"};
    //     technicals[] = {"CUP_B_LR_MG_GB_W", "CUP_O_UAZ_MG_CHDKZ", "CUP_I_Datsun_PK", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_CHDKZ", "CUP_I_Ural_ZU23_NAPA"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BTR60_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "UP_O_BMP2_SLA", "CUP_I_T55_TK_GUE", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };

    // class MNP_IRE_WD {
    //     side = "resistance";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_Irish_Soldier_S", "MNP_Irish_Soldier_AR", "MNP_Irish_Soldier_F", "MNP_Irish_Soldier_RAT", "MNP_Irish_Soldier_MG", "MNP_Irish_Soldier_AR", "MNP_Irish_Soldier_RAT", "MNP_Irish_Soldier_AR", "MNP_Irish_Soldier_RAT"};
    //     crewmen[] = {"MNP_Irish_Soldier_F", "MNP_Irish_Soldier_S"};
    //     pilots[] = {"MNP_Irish_Soldier_F"};
    //     technicals[] = {"CUP_B_LR_Special_M2_GB_W", "CUP_B_LR_Special_M2_GB_W", "CUP_B_LR_Special_GMG_GB_W", "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_Mk19_OD_USMC"};
    //     armour[] = {"I_APC_tracked_03_cannon_F", "I_MBT_03_cannon_F"};
    //     ah[] = {"I_Heli_light_03_F"};
    // };

    // class MNP_IRE_DE {
    //     side = "resistance";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_Irish_Soldier_DS", "MNP_Irish_Soldier_DAR", "MNP_Irish_Soldier_D", "MNP_Irish_Soldier_DRAT", "MNP_Irish_Soldier_DMG", "MNP_Irish_Soldier_DAR", "MNP_Irish_Soldier_DRAT", "MNP_Irish_Soldier_DAR", "MNP_Irish_Soldier_DRAT"};
    //     crewmen[] = {"MNP_Irish_Soldier_D", "MNP_Irish_Soldier_DS"};
    //     pilots[] = {"MNP_Irish_Soldier_D"};
    //     technicals[] = {"CUP_B_LR_Special_GMG_GB_D", "CUP_B_LR_Special_M2_GB_D", "CUP_B_LR_Special_M2_GB_D", "CUP_B_RG31E_M2_USMC", "CUP_B_RG31_M2_USMC", "CUP_B_RG31_Mk19_USMC"};
    //     armour[] = {"I_APC_tracked_03_cannon_F", "I_MBT_03_cannon_F"};
    //     ah[] = {"I_Heli_light_03_F"};
    // };

    // class MNP_NZ {
    //     side = "resistance";
    //     camouflage[] = {"woodland", "desert"};
    //     infantry[] = {"MNP_NZ_Soldier_O", "MNP_NZ_Soldier_AR", "MNP_NZ_Soldier_F", "MNP_NZ_Soldier_AT", "MNP_NZ_Soldier_MG", "MNP_NZ_Soldier_AR", "MNP_NZ_Soldier_AT", "MNP_NZ_Soldier_AR", "MNP_NZ_Soldier_AT"};
    //     crewmen[] = {"MNP_NZ_Soldier_F", "MNP_NZ_Soldier_O"};
    //     pilots[] = {"MNP_NZ_Soldier_F"};
    //     technicals[] = {"I_MRAP_03_hmg_F"};
    //     armour[] = {"I_APC_tracked_03_cannon_F", "I_MBT_03_cannon_F"};
    //     ah[] = {"CUP_B_AH1_MR_BAF"};
    // };

    // class MNP_FIN_WD {
    //     side = "resistance";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_FIN_Soldier_O", "MNP_FIN_Soldier_AR", "MNP_FIN_Soldier_F", "MNP_FIN_Soldier_AT", "MNP_FIN_Soldier_MG", "MNP_FIN_Soldier_AR", "MNP_FIN_Soldier_AT", "MNP_FIN_Soldier_AR", "MNP_FIN_Soldier_AT"};
    //     crewmen[] = {"MNP_FIN_Soldier_F", "MNP_FIN_Soldier_O"};
    //     pilots[] = {"MNP_FIN_Soldier_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_SLA", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };

    // class MNP_FIN_SN {
    //     side = "resistance";
    //     camouflage[] = {"snow"};
    //     infantry[] = {"MNP_AFIN_Soldier_O", "MNP_AFIN_Soldier_AR", "MNP_AFIN_Soldier_F", "MNP_AFIN_Soldier_AT", "MNP_AFIN_Soldier_MG", "MNP_AFIN_Soldier_AR", "MNP_AFIN_Soldier_AT", "MNP_AFIN_Soldier_AR", "MNP_AFIN_Soldier_AT"};
    //     crewmen[] = {"MNP_AFIN_Soldier_F", "MNP_AFIN_Soldier_O"};
    //     pilots[] = {"MNP_AFIN_Soldier_F"};
    //     technicals[] = {"CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_MG_RU", "CUP_O_UAZ_AGS30_RU", "CUP_O_UAZ_SPG9_RU"};
    //     armour[] = {"CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_O_BRDM2_SLA", "CUP_I_BMP1_TK_GUE", "CUP_O_BMP2_SLA", "CUP_O_T72_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };

    // class MNP_NOR_WD {
    //     side = "resistance";
    //     camouflage[] = {"woodland"};
    //     infantry[] = {"MNP_NOR_Soldier_O", "MNP_NOR_Soldier_AR", "MNP_NOR_Soldier_F", "MNP_NOR_Soldier_AT", "MNP_NOR_Soldier_MG", "MNP_NOR_Soldier_AR", "MNP_NOR_Soldier_AT", "MNP_NOR_Soldier_AR", "MNP_NOR_Soldier_AT"};
    //     crewmen[] = {"MNP_NOR_Soldier_F", "MNP_NOR_Soldier_O"};
    //     pilots[] = {"MNP_NOR_Soldier_F"};
    //     technicals[] = {"CUP_B_Dingo_GER_Wdl", "CUP_B_Dingo_GER_Wdl", "CUP_B_Dingo_GL_GER_Wdl"};
    //     armour[] = {"CUP_B_M113_USA", "CUP_B_M113_USA", "I_MBT_03_cannon_F"};
    //     ah[] = {"CUP_B_UH1Y_GUNSHIP_USMC"};
    // };

    // class MNP_NOR_DE {
    //     side = "resistance";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"MNP_NOR_D_Soldier_O", "MNP_NOR_D_Soldier_AR", "MNP_NOR_D_Soldier_F", "MNP_NOR_D_Soldier_AT", "MNP_NOR_D_Soldier_MG", "MNP_NOR_D_Soldier_AR", "MNP_NOR_D_Soldier_AT", "MNP_NOR_D_Soldier_AR", "MNP_NOR_D_Soldier_AT"};
    //     crewmen[] = {"MNP_NOR_D_Soldier_F", "MNP_NOR_D_Soldier_O"};
    //     pilots[] = {"MNP_NOR_D_Soldier_F"};
    //     technicals[] = {"CUP_B_Dingo_GL_GER_Des", "CUP_B_Dingo_GER_Des", "CUP_B_Dingo_GER_Des"};
    //     armour[] = {"CUP_B_M113_USA", "CUP_B_M113_USA", "I_MBT_03_cannon_F"};
    //     ah[] = {"CUP_B_UH1Y_GUNSHIP_USMC"};
    // };

    // class SYND_BANDIT {
    //     side = "resistance";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"I_C_Soldier_Bandit_7_F_ARK", "I_C_Soldier_Bandit_3_F_ARK", "I_C_Soldier_Bandit_4_F_ARK", "I_C_Soldier_Bandit_5_F_ARK", "I_C_Soldier_Bandit_2_F_ARK", "I_C_Soldier_Bandit_2_F_ARK", "I_C_Soldier_Bandit_6_F_ARK", "I_C_Soldier_Bandit_6_F_ARK", "I_C_Soldier_Bandit_7_F_ARK"};
    //     crewmen[] = {"I_C_Pilot_F_ARK", "I_C_Pilot_F_ARK"};
    //     pilots[] = {"I_C_Pilot_F_ARK"};
    //     technicals[] = {"CUP_I_Datsun_PK", "CUP_O_UAZ_AGS30_TKA", "CUP_O_LR_MG_TKA", "CUP_O_LR_SPG9_TKA", "CUP_O_UAZ_SPG9_TKA", "CUP_O_UAZ_MG_TKA", "CUP_I_Datsun_PK_TK_Random"};
    //     armour[] = {"CUP_O_BTR60_RU", "CUP_O_BRDM2_SLA", "CUP_O_BMP2_SLA", "CUP_O_T55_SLA", "CUP_I_T34_NAPA", "CUP_O_T55_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };

    // class SYND_REBEL {
    //     side = "resistance";
    //     camouflage[] = {"desert"};
    //     infantry[] = {"I_C_Soldier_Para_2_F_ARK", "I_C_Soldier_Para_2_F_ARK", "I_C_Soldier_Para_1_F_ARK", "I_C_Soldier_Para_1_F_ARK", "I_C_Soldier_Para_6_F_ARK", "I_C_Soldier_Para_1_F_ARK", "I_C_Soldier_Para_1_F_ARK", "I_C_Soldier_Para_7_F_ARK", "I_C_Soldier_Para_4_F_ARK", "I_C_Soldier_Para_4_F_ARK"};
    //     crewmen[] = {"I_C_Helipilot_F_ARK", "I_C_Helipilot_F_ARK"};
    //     pilots[] = {"I_C_Helipilot_F_ARK"};
    //     technicals[] = {"CUP_I_Datsun_PK", "CUP_O_UAZ_AGS30_TKA", "CUP_O_LR_MG_TKA", "CUP_O_LR_SPG9_TKA", "CUP_O_UAZ_SPG9_TKA", "CUP_O_UAZ_MG_TKA", "CUP_I_Datsun_PK_TK_Random"};
    //     armour[] = {"CUP_O_BTR60_RU", "CUP_O_BRDM2_SLA", "CUP_O_BMP2_SLA", "CUP_O_T55_SLA", "CUP_I_T34_NAPA", "CUP_O_T55_SLA"};
    //     ah[] = {"CUP_O_Mi8_SLA_2"};
    // };
};

MythicIsland_Jungle_MapScripts::
	.byte 0


MythicIsland_Jungle_Encounter_Yanma::
# 13 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 14 "data/maps/MythicIsland_Jungle/scripts.pory"
	faceplayer
# 15 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 16 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 17 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_YANMA, 30, ITEM_WIDE_LENS, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SIGNAL_BEAM, MOVE_WING_ATTACK, MOVE_DOUBLE_TEAM, MOVE_DETECT
# 18 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_YANMA, CRY_MODE_ENCOUNTER
# 19 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 20 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 21 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 22 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 23 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 24 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 26 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Yanma_3
# 29 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Yanma_4
# 31 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Yanma_5
# 35 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Yanma_6
# 40 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 41 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 42 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Yanma_1:
# 44 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Yanma_3:
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_4:
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_5:
# 32 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 33 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 34 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_6:
# 36 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 37 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 38 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Yanma_1


MythicIsland_Jungle_Encounter_Liepard::
# 48 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 49 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 50 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 51 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LIEPARD, 35, ITEM_NORMAL_GEM, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_COVET, MOVE_ENCORE, MOVE_NIGHT_SLASH
# 52 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_ENCOUNTER
# 53 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 55 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 56 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 57 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 58 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 59 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 61 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 62 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Liepard_3
# 64 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Liepard_4
# 68 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Liepard_5
# 72 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Liepard_6
# 77 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 78 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 79 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Liepard_1:
# 81 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Liepard_3:
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_4:
# 65 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 66 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 67 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_5:
# 69 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 70 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 71 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_6:
# 73 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 74 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 75 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1


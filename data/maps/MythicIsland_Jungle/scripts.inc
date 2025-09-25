MythicIsland_Jungle_MapScripts::
	.byte 0


MythicIsland_Jungle_Encounter_Yanma::
# 19 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 20 "data/maps/MythicIsland_Jungle/scripts.pory"
	faceplayer
# 21 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 22 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 23 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_YANMA, 30, ITEM_WIDE_LENS, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SIGNAL_BEAM, MOVE_WING_ATTACK, MOVE_DOUBLE_TEAM, MOVE_DETECT
# 24 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_YANMA, CRY_MODE_ENCOUNTER
# 25 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 26 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 27 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 28 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 29 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 30 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Yanma_3
# 35 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Yanma_4
# 37 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Yanma_5
# 41 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Yanma_6
# 46 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 47 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 48 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Yanma_1:
# 50 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Yanma_3:
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_4:
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_5:
# 38 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 39 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 40 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_6:
# 42 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 43 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 44 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Yanma_1


MythicIsland_Jungle_Encounter_Tangela::
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 55 "data/maps/MythicIsland_Jungle/scripts.pory"
	faceplayer
# 56 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 57 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 58 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_TANGELA, 30, ITEM_BIG_ROOT, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_INGRAIN
# 59 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_TANGELA, CRY_MODE_ENCOUNTER
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 61 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 63 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 64 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 65 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Tangela_3
# 70 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Tangela_4
# 72 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Tangela_5
# 76 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Tangela_6
# 81 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_3
# 82 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 4
# 83 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Tangela_1:
# 85 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Tangela_3:
	goto MythicIsland_Jungle_Encounter_Tangela_1

MythicIsland_Jungle_Encounter_Tangela_4:
	goto MythicIsland_Jungle_Encounter_Tangela_1

MythicIsland_Jungle_Encounter_Tangela_5:
# 73 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_3
# 74 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 4
# 75 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Tangela_1

MythicIsland_Jungle_Encounter_Tangela_6:
# 77 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_3
# 78 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 4
# 79 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Tangela_1


MythicIsland_Jungle_Encounter_Liepard::
# 89 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 90 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 91 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 92 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LIEPARD, 35, ITEM_NORMAL_GEM, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_COVET, MOVE_ENCORE, MOVE_NIGHT_SLASH
# 93 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_ENCOUNTER
# 94 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 95 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 96 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 97 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 98 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 99 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 100 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 102 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Liepard_3
# 105 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Liepard_4
# 109 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Liepard_5
# 113 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Liepard_6
# 118 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 119 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 120 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Liepard_1:
# 122 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Liepard_3:
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_4:
# 106 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 107 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 108 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_5:
# 110 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 111 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 112 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_6:
# 114 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 115 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 116 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1


MythicIsland_Jungle_Encounter_Liepard2::
# 126 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 127 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 128 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 129 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LIEPARD, 35, ITEM_NORMAL_GEM, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_COVET, MOVE_ENCORE, MOVE_NIGHT_SLASH
# 130 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_ENCOUNTER
# 131 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 132 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 133 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 134 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 135 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 136 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 137 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 139 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Liepard2_3
# 142 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Liepard2_4
# 146 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Liepard2_5
# 150 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Liepard2_6
# 155 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_4
# 156 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 5
# 157 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Liepard2_1:
# 159 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Liepard2_3:
	goto MythicIsland_Jungle_Encounter_Liepard2_1

MythicIsland_Jungle_Encounter_Liepard2_4:
# 143 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_4
# 144 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 5
# 145 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard2_1

MythicIsland_Jungle_Encounter_Liepard2_5:
# 147 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_4
# 148 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 5
# 149 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard2_1

MythicIsland_Jungle_Encounter_Liepard2_6:
# 151 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_4
# 152 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 5
# 153 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard2_1


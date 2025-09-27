MythicIsland_LakeUpper_MapScripts::
	.byte 0


MythicIsland_LakeUpper_GyaradosMega::
# 7 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 8 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 9 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_GYARADOS_MEGA, 50, ITEM_SALAC_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WATERFALL, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_ICE_FANG
# 10 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	playmoncry SPECIES_GYARADOS_MEGA, CRY_MODE_ENCOUNTER
# 11 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	waitmoncry
# 12 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 13 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	dowildbattle
# 14 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 15 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 16 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_LakeUpper_GyaradosMega_3
# 21 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_LakeUpper_GyaradosMega_4
# 23 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_LakeUpper_GyaradosMega_5
# 27 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_LakeUpper_GyaradosMega_6
# 32 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_LAKE_GYARADOS
# 33 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	removeobject 1
# 34 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_LakeUpper_GyaradosMega_1:
# 36 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	release
	return

MythicIsland_LakeUpper_GyaradosMega_3:
	goto MythicIsland_LakeUpper_GyaradosMega_1

MythicIsland_LakeUpper_GyaradosMega_4:
	goto MythicIsland_LakeUpper_GyaradosMega_1

MythicIsland_LakeUpper_GyaradosMega_5:
# 24 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_LAKE_GYARADOS
# 25 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	removeobject 1
# 26 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_LakeUpper_GyaradosMega_1

MythicIsland_LakeUpper_GyaradosMega_6:
# 28 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_LAKE_GYARADOS
# 29 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	removeobject 1
# 30 "data/maps/MythicIsland_LakeUpper/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_LakeUpper_GyaradosMega_1


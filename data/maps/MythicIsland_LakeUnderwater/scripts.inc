MythicIsland_LakeUnderwater_MapScripts::
	.byte 0


MythicIsland_LakeUnderwater_Dhelmise::
# 7 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	lock
# 8 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	playmoncry SPECIES_DHELMISE, CRY_MODE_NORMAL
# 9 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	waitmoncry
# 10 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 11 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 12 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 13 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_DHELMISE, 45, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_GYRO_BALL, MOVE_PHANTOM_FORCE, MOVE_GIGA_DRAIN, MOVE_WHIRLPOOL
# 14 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	setwilddoubleflag
# 15 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 16 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	dowildbattle
# 17 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 18 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 19 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 20 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 22 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_LakeUnderwater_Dhelmise_2
# 25 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_LakeUnderwater_Dhelmise_3
# 26 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_LakeUnderwater_Dhelmise_3
# 27 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_LakeUnderwater_Dhelmise_3
MythicIsland_LakeUnderwater_Dhelmise_3:
# 29 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_LAKE_DHELMISE
# 30 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	removeobject 1
# 31 "data/maps/MythicIsland_LakeUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_LakeUnderwater_Dhelmise_2:
	return


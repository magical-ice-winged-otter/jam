MythicIsland_Lake_MapScripts::
	.byte 0


MythicIsland_Lake_TreeEntrance::
# 9 "data/maps/MythicIsland_Lake/scripts.pory"
	lock
# 10 "data/maps/MythicIsland_Lake/scripts.pory"
	msgbox MythicIsland_Lake_TreeEntrance_Text_0, MSGBOX_YESNO
# 13 "data/maps/MythicIsland_Lake/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_Lake_TreeEntrance_2
MythicIsland_Lake_TreeEntrance_1:
# 16 "data/maps/MythicIsland_Lake/scripts.pory"
	closemessage
# 17 "data/maps/MythicIsland_Lake/scripts.pory"
	release
	return

MythicIsland_Lake_TreeEntrance_2:
# 14 "data/maps/MythicIsland_Lake/scripts.pory"
	warp MAP_MYTHIC_ISLAND_LAKE_SHOP, 5, 7
	goto MythicIsland_Lake_TreeEntrance_1


MythicIsland_Lake_Totem::
# 22 "data/maps/MythicIsland_Lake/scripts.pory"
	lock
# 23 "data/maps/MythicIsland_Lake/scripts.pory"
	faceplayer
# 24 "data/maps/MythicIsland_Lake/scripts.pory"
	goto_if_unset FLAG_MYTHIC_ISLAND_LAKE_CHIMECHO, MythicIsland_Lake_Totem_2
MythicIsland_Lake_Totem_1:
# 32 "data/maps/MythicIsland_Lake/scripts.pory"
	playse SE_M_HEAL_BELL
# 33 "data/maps/MythicIsland_Lake/scripts.pory"
	waitse
# 34 "data/maps/MythicIsland_Lake/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/MythicIsland_Lake/scripts.pory"
	msgbox MythicIsland_Lake_Totem_Text_1, MSGBOX_YESNO
# 39 "data/maps/MythicIsland_Lake/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_Lake_Totem_5
# 43 "data/maps/MythicIsland_Lake/scripts.pory"
	goto MythicIsland_Lake_Chimecho_End
MythicIsland_Lake_Totem_4:
# 46 "data/maps/MythicIsland_Lake/scripts.pory"
MythicIsland_Lake_ChimechoTeleport:
# 47 "data/maps/MythicIsland_Lake/scripts.pory"
	dynmultipush MythicIsland_Lake_Totem_Text_2, 0
# 49 "data/maps/MythicIsland_Lake/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_BEACH_CHIMECHO, MythicIsland_Lake_Totem_9
MythicIsland_Lake_Totem_8:
# 53 "data/maps/MythicIsland_Lake/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_SUNKEN_SHRINE_CHIMECHO, MythicIsland_Lake_Totem_12
MythicIsland_Lake_Totem_11:
# 56 "data/maps/MythicIsland_Lake/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 58 "data/maps/MythicIsland_Lake/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/MythicIsland_Lake/scripts.pory"
	case 1, MythicIsland_Lake_Totem_16
# 67 "data/maps/MythicIsland_Lake/scripts.pory"
	case 2, MythicIsland_Lake_Totem_17
# 76 "data/maps/MythicIsland_Lake/scripts.pory"
	goto MythicIsland_Lake_Chimecho_End
MythicIsland_Lake_Totem_14:
# 79 "data/maps/MythicIsland_Lake/scripts.pory"
MythicIsland_Lake_Chimecho_End:
# 80 "data/maps/MythicIsland_Lake/scripts.pory"
	closemessage
# 81 "data/maps/MythicIsland_Lake/scripts.pory"
	release
	return

MythicIsland_Lake_Totem_2:
# 25 "data/maps/MythicIsland_Lake/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
# 26 "data/maps/MythicIsland_Lake/scripts.pory"
	waitmoncry
# 27 "data/maps/MythicIsland_Lake/scripts.pory"
	msgbox MythicIsland_Lake_Totem_Text_0
# 30 "data/maps/MythicIsland_Lake/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_LAKE_CHIMECHO
	goto MythicIsland_Lake_Totem_1

MythicIsland_Lake_Totem_5:
# 40 "data/maps/MythicIsland_Lake/scripts.pory"
	goto MythicIsland_Lake_ChimechoTeleport
	goto MythicIsland_Lake_Totem_4

MythicIsland_Lake_Totem_9:
# 50 "data/maps/MythicIsland_Lake/scripts.pory"
	dynmultipush MythicIsland_Lake_Totem_Text_3, 2
	goto MythicIsland_Lake_Totem_8

MythicIsland_Lake_Totem_12:
# 54 "data/maps/MythicIsland_Lake/scripts.pory"
	dynmultipush MythicIsland_Lake_Totem_Text_4, 1
	goto MythicIsland_Lake_Totem_11

MythicIsland_Lake_Totem_16:
# 60 "data/maps/MythicIsland_Lake/scripts.pory"
	closemessage
# 61 "data/maps/MythicIsland_Lake/scripts.pory"
	playse SE_M_PSYBEAM
# 62 "data/maps/MythicIsland_Lake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportSpin
# 63 "data/maps/MythicIsland_Lake/scripts.pory"
	waitmovement 0
# 64 "data/maps/MythicIsland_Lake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportFly
# 65 "data/maps/MythicIsland_Lake/scripts.pory"
	waitmovement 0
# 66 "data/maps/MythicIsland_Lake/scripts.pory"
	warp MAP_MYTHIC_ISLAND_SUNKEN_SHRINE, 13, 62
	goto MythicIsland_Lake_Totem_14

MythicIsland_Lake_Totem_17:
# 68 "data/maps/MythicIsland_Lake/scripts.pory"
	closemessage
# 69 "data/maps/MythicIsland_Lake/scripts.pory"
	playse SE_M_PSYBEAM
# 70 "data/maps/MythicIsland_Lake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportSpin
# 71 "data/maps/MythicIsland_Lake/scripts.pory"
	waitmovement 0
# 72 "data/maps/MythicIsland_Lake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportFly
# 73 "data/maps/MythicIsland_Lake/scripts.pory"
	waitmovement 0
# 74 "data/maps/MythicIsland_Lake/scripts.pory"
	warp MAP_MYTHIC_ISLAND_ISLAND_ENTRANCE, 25, 29
	goto MythicIsland_Lake_Totem_14


MythicIsland_Lake_Rapidash::
# 85 "data/maps/MythicIsland_Lake/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 86 "data/maps/MythicIsland_Lake/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 87 "data/maps/MythicIsland_Lake/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_RAPIDASH_GALAR, 40, ITEM_CUSTAP_BERRY, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PSYCHO_CUT, MOVE_DAZZLING_GLEAM, MOVE_MEGAHORN, MOVE_MORNING_SUN
# 88 "data/maps/MythicIsland_Lake/scripts.pory"
	playmoncry SPECIES_RAPIDASH_GALAR, CRY_MODE_ENCOUNTER
# 89 "data/maps/MythicIsland_Lake/scripts.pory"
	waitmoncry
# 90 "data/maps/MythicIsland_Lake/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 91 "data/maps/MythicIsland_Lake/scripts.pory"
	dowildbattle
# 92 "data/maps/MythicIsland_Lake/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 93 "data/maps/MythicIsland_Lake/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 94 "data/maps/MythicIsland_Lake/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 96 "data/maps/MythicIsland_Lake/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/MythicIsland_Lake/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Lake_Rapidash_3
# 99 "data/maps/MythicIsland_Lake/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Lake_Rapidash_4
# 101 "data/maps/MythicIsland_Lake/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Lake_Rapidash_5
# 105 "data/maps/MythicIsland_Lake/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Lake_Rapidash_6
# 110 "data/maps/MythicIsland_Lake/scripts.pory"
	setflag FLAG_TEMP_2
# 111 "data/maps/MythicIsland_Lake/scripts.pory"
	removeobject 4
# 112 "data/maps/MythicIsland_Lake/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Lake_Rapidash_1:
# 114 "data/maps/MythicIsland_Lake/scripts.pory"
	release
	return

MythicIsland_Lake_Rapidash_3:
	goto MythicIsland_Lake_Rapidash_1

MythicIsland_Lake_Rapidash_4:
	goto MythicIsland_Lake_Rapidash_1

MythicIsland_Lake_Rapidash_5:
# 102 "data/maps/MythicIsland_Lake/scripts.pory"
	setflag FLAG_TEMP_2
# 103 "data/maps/MythicIsland_Lake/scripts.pory"
	removeobject 4
# 104 "data/maps/MythicIsland_Lake/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Lake_Rapidash_1

MythicIsland_Lake_Rapidash_6:
# 106 "data/maps/MythicIsland_Lake/scripts.pory"
	setflag FLAG_TEMP_2
# 107 "data/maps/MythicIsland_Lake/scripts.pory"
	removeobject 4
# 108 "data/maps/MythicIsland_Lake/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Lake_Rapidash_1


MythicIsland_Lake_TreeEntrance_Text_0:
# 11 "data/maps/MythicIsland_Lake/scripts.pory"
	.string "There seems to be an opening in this\n"
	.string "tree. Enter?$"

MythicIsland_Lake_Totem_Text_0:
# 28 "data/maps/MythicIsland_Lake/scripts.pory"
	.string "Chime...$"

MythicIsland_Lake_Totem_Text_1:
# 36 "data/maps/MythicIsland_Lake/scripts.pory"
	.string "> The soothing chime fills your Pokémon\n"
	.string "with restoration.\p"
	.string "Would you like Chimecho to teleport\n"
	.string "you?$"

MythicIsland_Lake_Totem_Text_2:
# 47 "data/maps/MythicIsland_Lake/scripts.pory"
	.string "Cancel$"

MythicIsland_Lake_Totem_Text_3:
# 50 "data/maps/MythicIsland_Lake/scripts.pory"
	.string "Island Entrance$"

MythicIsland_Lake_Totem_Text_4:
# 54 "data/maps/MythicIsland_Lake/scripts.pory"
	.string "Flooded Tunnels$"

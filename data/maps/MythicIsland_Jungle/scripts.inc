MythicIsland_Jungle_MapScripts::
# 40 "data/maps/MythicIsland_Jungle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MythicIsland_Jungle_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 45 "data/maps/MythicIsland_Jungle/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MythicIsland_Jungle_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MythicIsland_Jungle_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 41 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_MEW_FIRST_SIGHTING, MythicIsland_Jungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MythicIsland_Jungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 42 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

MythicIsland_Jungle_MapScripts_MAP_SCRIPT_ON_LOAD:
# 46 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto_if_unset FLAG_MYTHIC_ISLAND_TEMPLE_OPEN, MythicIsland_Jungle_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MythicIsland_Jungle_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 47 "data/maps/MythicIsland_Jungle/scripts.pory"
	setmetatile 28, 43, METATILE_General_RockWall_GrassBase, TRUE
# 48 "data/maps/MythicIsland_Jungle/scripts.pory"
	setmetatile 28, 42, METATILE_General_RockWall_RockBase, TRUE
	return


# 53 "data/maps/MythicIsland_Jungle/scripts.pory"
MewRunAway:
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 54 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 55 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_left
# 56 "data/maps/MythicIsland_Jungle/scripts.pory"
	face_down
	step_end

# 59 "data/maps/MythicIsland_Jungle/scripts.pory"
ChaseMewLeft:
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 60 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_up
# 61 "data/maps/MythicIsland_Jungle/scripts.pory"
	walk_left
# 62 "data/maps/MythicIsland_Jungle/scripts.pory"
	face_up
	step_end

MythicIsland_Jungle_ApproachMewLeft::
# 66 "data/maps/MythicIsland_Jungle/scripts.pory"
	lockall
# 67 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_PIN
# 68 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 69 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 70 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 71 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 72 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 73 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 74 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 75 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, MewRunAway
# 76 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 77 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChaseMewLeft
# 78 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 79 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_M_PSYBEAM
# 80 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, teleportSpin
# 81 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 82 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_M_TELEPORT
# 83 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, teleportFly
# 84 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 85 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_MEW_FIRST_SIGHTING
# 86 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 14
# 87 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 88 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return


MythicIsland_Jungle_ApproachMewRight::
# 92 "data/maps/MythicIsland_Jungle/scripts.pory"
	lockall
# 93 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_PIN
# 94 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 95 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 96 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 97 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 98 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 99 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 100 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 101 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, MewRunAway
# 102 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 103 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 104 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 105 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChaseMewLeft
# 106 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 107 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_M_PSYBEAM
# 108 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, teleportSpin
# 109 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 110 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_M_TELEPORT
# 111 "data/maps/MythicIsland_Jungle/scripts.pory"
	applymovement 14, teleportFly
# 112 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmovement 0
# 113 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_MEW_FIRST_SIGHTING
# 114 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 14
# 115 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 116 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return


MythicIsland_Jungle_KeyHole1::
# 121 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 122 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_THUNDER_PLATE_INSERTED, MythicIsland_Jungle_KeyHole1_2
# 128 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole1_Text_1
# 131 "data/maps/MythicIsland_Jungle/scripts.pory"
	checkitem ITEM_ZAP_PLATE
# 132 "data/maps/MythicIsland_Jungle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_Jungle_KeyHole1_5
MythicIsland_Jungle_KeyHole1_1:
# 150 "data/maps/MythicIsland_Jungle/scripts.pory"
	closemessage
# 151 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_KeyHole1_2:
# 123 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole1_Text_0
	goto MythicIsland_Jungle_KeyHole1_1

MythicIsland_Jungle_KeyHole1_5:
# 133 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole1_Text_2, MSGBOX_YESNO
# 136 "data/maps/MythicIsland_Jungle/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_Jungle_KeyHole1_7
	goto MythicIsland_Jungle_KeyHole1_1

MythicIsland_Jungle_KeyHole1_7:
# 137 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_M_DETECT
# 138 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitse
# 139 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 140 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeitem ITEM_ZAP_PLATE
# 141 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole1_Text_0
# 144 "data/maps/MythicIsland_Jungle/scripts.pory"
	closemessage
# 145 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_THUNDER_PLATE_INSERTED
# 146 "data/maps/MythicIsland_Jungle/scripts.pory"
	call MythicIsland_Jungle_AllKeys
	goto MythicIsland_Jungle_KeyHole1_1


MythicIsland_Jungle_KeyHole2::
# 155 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 156 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_FIRE_PLATE_INSERTED, MythicIsland_Jungle_KeyHole2_2
# 162 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole1_Text_1
# 165 "data/maps/MythicIsland_Jungle/scripts.pory"
	checkitem ITEM_FLAME_PLATE
# 166 "data/maps/MythicIsland_Jungle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_Jungle_KeyHole2_5
MythicIsland_Jungle_KeyHole2_1:
# 184 "data/maps/MythicIsland_Jungle/scripts.pory"
	closemessage
# 185 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_KeyHole2_2:
# 157 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole2_Text_0
	goto MythicIsland_Jungle_KeyHole2_1

MythicIsland_Jungle_KeyHole2_5:
# 167 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole2_Text_1, MSGBOX_YESNO
# 170 "data/maps/MythicIsland_Jungle/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_Jungle_KeyHole2_7
	goto MythicIsland_Jungle_KeyHole2_1

MythicIsland_Jungle_KeyHole2_7:
# 171 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_M_DETECT
# 172 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitse
# 173 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 174 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeitem ITEM_FLAME_PLATE
# 175 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole2_Text_2
# 178 "data/maps/MythicIsland_Jungle/scripts.pory"
	closemessage
# 179 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_FIRE_PLATE_INSERTED
# 180 "data/maps/MythicIsland_Jungle/scripts.pory"
	call MythicIsland_Jungle_AllKeys
	goto MythicIsland_Jungle_KeyHole2_1


MythicIsland_Jungle_KeyHole3::
# 189 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 190 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_WATER_PLATE_INSERTED, MythicIsland_Jungle_KeyHole3_2
# 196 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole1_Text_1
# 199 "data/maps/MythicIsland_Jungle/scripts.pory"
	checkitem ITEM_SPLASH_PLATE
# 200 "data/maps/MythicIsland_Jungle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_Jungle_KeyHole3_5
MythicIsland_Jungle_KeyHole3_1:
# 218 "data/maps/MythicIsland_Jungle/scripts.pory"
	closemessage
# 219 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_KeyHole3_2:
# 191 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole3_Text_0
	goto MythicIsland_Jungle_KeyHole3_1

MythicIsland_Jungle_KeyHole3_5:
# 201 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole3_Text_1, MSGBOX_YESNO
# 204 "data/maps/MythicIsland_Jungle/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_Jungle_KeyHole3_7
	goto MythicIsland_Jungle_KeyHole3_1

MythicIsland_Jungle_KeyHole3_7:
# 205 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_M_DETECT
# 206 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitse
# 207 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 208 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeitem ITEM_SPLASH_PLATE
# 209 "data/maps/MythicIsland_Jungle/scripts.pory"
	msgbox MythicIsland_Jungle_KeyHole3_Text_0
# 212 "data/maps/MythicIsland_Jungle/scripts.pory"
	closemessage
# 213 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WATER_PLATE_INSERTED
# 214 "data/maps/MythicIsland_Jungle/scripts.pory"
	call MythicIsland_Jungle_AllKeys
	goto MythicIsland_Jungle_KeyHole3_1


MythicIsland_Jungle_AllKeys::
# 223 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_WATER_PLATE_INSERTED, MythicIsland_Jungle_AllKeys_4
MythicIsland_Jungle_AllKeys_1:
# 249 "data/maps/MythicIsland_Jungle/scripts.pory"
	closemessage
# 250 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_AllKeys_2:
# 224 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_TEMPLE_OPEN
# 225 "data/maps/MythicIsland_Jungle/scripts.pory"
	lockall
# 226 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_0x8004, 1
# 227 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_0x8005, 1
# 228 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_0x8006, 8
# 229 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_0x8007, 3
# 230 "data/maps/MythicIsland_Jungle/scripts.pory"
	special ShakeCamera
# 231 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitstate
# 232 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 233 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_0x8004, 1
# 234 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_0x8005, 1
# 235 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_0x8006, 16
# 236 "data/maps/MythicIsland_Jungle/scripts.pory"
	setvar VAR_0x8007, 3
# 237 "data/maps/MythicIsland_Jungle/scripts.pory"
	special ShakeCamera
# 238 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitstate
# 239 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 240 "data/maps/MythicIsland_Jungle/scripts.pory"
	playse SE_EFFECTIVE
# 241 "data/maps/MythicIsland_Jungle/scripts.pory"
	setmetatile 28, 43, METATILE_General_CaveEntrance_Bottom, FALSE
# 242 "data/maps/MythicIsland_Jungle/scripts.pory"
	setmetatile 28, 42, METATILE_General_CaveEntrance_Top, TRUE
# 243 "data/maps/MythicIsland_Jungle/scripts.pory"
	special DrawWholeMapView
# 244 "data/maps/MythicIsland_Jungle/scripts.pory"
	delay 30
# 245 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitse
# 246 "data/maps/MythicIsland_Jungle/scripts.pory"
	releaseall
	end

MythicIsland_Jungle_AllKeys_3:
# 223 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_THUNDER_PLATE_INSERTED, MythicIsland_Jungle_AllKeys_2
	goto MythicIsland_Jungle_AllKeys_1

MythicIsland_Jungle_AllKeys_4:
# 223 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_FIRE_PLATE_INSERTED, MythicIsland_Jungle_AllKeys_3
	goto MythicIsland_Jungle_AllKeys_1


MythicIsland_Jungle_Encounter_Yanma::
# 257 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 258 "data/maps/MythicIsland_Jungle/scripts.pory"
	faceplayer
# 259 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 260 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 261 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 262 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_YANMA, 30, ITEM_WIDE_LENS, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SIGNAL_BEAM, MOVE_WING_ATTACK, MOVE_DOUBLE_TEAM, MOVE_DETECT
# 263 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_YANMA, CRY_MODE_ENCOUNTER
# 264 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 265 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 266 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 267 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 268 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 269 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 271 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 272 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Yanma_3
# 274 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Yanma_4
# 276 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Yanma_5
# 280 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Yanma_6
# 285 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 286 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 287 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Yanma_1:
# 289 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Yanma_3:
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_4:
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_5:
# 277 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 278 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 279 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Yanma_1

MythicIsland_Jungle_Encounter_Yanma_6:
# 281 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_1
# 282 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 2
# 283 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Yanma_1


MythicIsland_Jungle_Encounter_Tangela::
# 293 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 294 "data/maps/MythicIsland_Jungle/scripts.pory"
	faceplayer
# 295 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 296 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 297 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 298 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_TANGELA, 30, ITEM_BIG_ROOT, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_INGRAIN
# 299 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_TANGELA, CRY_MODE_ENCOUNTER
# 300 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 301 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 302 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 303 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 304 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 305 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 307 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 308 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Tangela_3
# 310 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Tangela_4
# 312 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Tangela_5
# 316 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Tangela_6
# 321 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_3
# 322 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 4
# 323 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Tangela_1:
# 325 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Tangela_3:
	goto MythicIsland_Jungle_Encounter_Tangela_1

MythicIsland_Jungle_Encounter_Tangela_4:
	goto MythicIsland_Jungle_Encounter_Tangela_1

MythicIsland_Jungle_Encounter_Tangela_5:
# 313 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_3
# 314 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 4
# 315 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Tangela_1

MythicIsland_Jungle_Encounter_Tangela_6:
# 317 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_3
# 318 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 4
# 319 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Tangela_1


MythicIsland_Jungle_Encounter_Togedemaru::
# 329 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 330 "data/maps/MythicIsland_Jungle/scripts.pory"
	faceplayer
# 331 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 332 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 333 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 334 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_TOGEDEMARU, 30, ITEM_ELECTRIC_SEED, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_NUZZLE, MOVE_ZING_ZAP, MOVE_ELECTRIC_TERRAIN, MOVE_SPIKY_SHIELD
# 335 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_TOGEDEMARU, CRY_MODE_ENCOUNTER
# 336 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 337 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 338 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 339 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 340 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 341 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 343 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 344 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Togedemaru_3
# 346 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Togedemaru_4
# 348 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Togedemaru_5
# 352 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Togedemaru_6
# 357 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_5
# 358 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 6
# 359 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Togedemaru_1:
# 361 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Togedemaru_3:
	goto MythicIsland_Jungle_Encounter_Togedemaru_1

MythicIsland_Jungle_Encounter_Togedemaru_4:
	goto MythicIsland_Jungle_Encounter_Togedemaru_1

MythicIsland_Jungle_Encounter_Togedemaru_5:
# 349 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_5
# 350 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 6
# 351 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Togedemaru_1

MythicIsland_Jungle_Encounter_Togedemaru_6:
# 353 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_5
# 354 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 6
# 355 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Togedemaru_1


MythicIsland_Jungle_Encounter_Croconaw::
# 365 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 366 "data/maps/MythicIsland_Jungle/scripts.pory"
	faceplayer
# 367 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 368 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 369 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 370 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_CROCONAW, 30, ITEM_WATER_GEM, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_AQUA_JET
# 371 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_CROCONAW, CRY_MODE_ENCOUNTER
# 372 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 373 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 374 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 375 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 376 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 377 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 379 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 380 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Croconaw_3
# 382 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Croconaw_4
# 384 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Croconaw_5
# 388 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Croconaw_6
# 393 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_7
# 394 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 8
# 395 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Croconaw_1:
# 397 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Croconaw_3:
	goto MythicIsland_Jungle_Encounter_Croconaw_1

MythicIsland_Jungle_Encounter_Croconaw_4:
	goto MythicIsland_Jungle_Encounter_Croconaw_1

MythicIsland_Jungle_Encounter_Croconaw_5:
# 385 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_7
# 386 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 8
# 387 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Croconaw_1

MythicIsland_Jungle_Encounter_Croconaw_6:
# 389 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_7
# 390 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 8
# 391 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Croconaw_1


MythicIsland_Jungle_Encounter_Shieldon::
# 401 "data/maps/MythicIsland_Jungle/scripts.pory"
	lock
# 402 "data/maps/MythicIsland_Jungle/scripts.pory"
	faceplayer
# 403 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 404 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 405 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 406 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SHIELDON, 30, ITEM_ENIGMA_BERRY, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_METAL_BURST, MOVE_ANCIENT_POWER, MOVE_PROTECT, MOVE_SWAGGER
# 407 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_SHIELDON, CRY_MODE_ENCOUNTER
# 408 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 409 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 410 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 411 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 412 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 413 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 415 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 416 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Shieldon_3
# 418 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Shieldon_4
# 420 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Shieldon_5
# 424 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Shieldon_6
# 429 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_8
# 430 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 9
# 431 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Shieldon_1:
# 433 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Shieldon_3:
	goto MythicIsland_Jungle_Encounter_Shieldon_1

MythicIsland_Jungle_Encounter_Shieldon_4:
	goto MythicIsland_Jungle_Encounter_Shieldon_1

MythicIsland_Jungle_Encounter_Shieldon_5:
# 421 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_8
# 422 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 9
# 423 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Shieldon_1

MythicIsland_Jungle_Encounter_Shieldon_6:
# 425 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_8
# 426 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 9
# 427 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Shieldon_1


MythicIsland_Jungle_Encounter_Linoone::
# 439 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 440 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 441 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 442 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LINOONE, 35, ITEM_STARF_BERRY, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CUT, MOVE_PLAY_ROUGH, MOVE_SLASH, MOVE_HONE_CLAWS
# 443 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_ENCOUNTER
# 444 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 445 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 446 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 447 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 448 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 449 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 451 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 452 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Linoone_3
# 454 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Linoone_4
# 458 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Linoone_5
# 462 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Linoone_6
# 467 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_9
# 468 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 10
# 469 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Linoone_1:
# 471 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Linoone_3:
	goto MythicIsland_Jungle_Encounter_Linoone_1

MythicIsland_Jungle_Encounter_Linoone_4:
# 455 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_9
# 456 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 10
# 457 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Linoone_1

MythicIsland_Jungle_Encounter_Linoone_5:
# 459 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_9
# 460 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 10
# 461 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Linoone_1

MythicIsland_Jungle_Encounter_Linoone_6:
# 463 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_9
# 464 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 10
# 465 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Linoone_1


MythicIsland_Jungle_Encounter_Comfey::
# 477 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 478 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 479 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 480 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 481 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_COMFEY, 30, ITEM_GRASSY_SEED, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DRAINING_KISS, MOVE_SYNTHESIS, MOVE_GRASSY_TERRAIN, MOVE_LEECH_SEED
# 482 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_COMFEY, CRY_MODE_ENCOUNTER
# 483 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 484 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 485 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 486 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 487 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 488 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 489 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 491 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 492 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Comfey_3
# 494 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Comfey_4
# 498 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Comfey_5
# 502 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Comfey_6
# 507 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_A
# 508 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 11
# 509 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Comfey_1:
# 511 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Comfey_3:
	goto MythicIsland_Jungle_Encounter_Comfey_1

MythicIsland_Jungle_Encounter_Comfey_4:
# 495 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_A
# 496 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 11
# 497 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Comfey_1

MythicIsland_Jungle_Encounter_Comfey_5:
# 499 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_A
# 500 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 11
# 501 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Comfey_1

MythicIsland_Jungle_Encounter_Comfey_6:
# 503 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_A
# 504 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 11
# 505 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Comfey_1


MythicIsland_Jungle_Encounter_Liepard::
# 515 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 516 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 517 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 518 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 519 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LIEPARD, 35, ITEM_NORMAL_GEM, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_COVET, MOVE_ENCORE, MOVE_NIGHT_SLASH
# 520 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_ENCOUNTER
# 521 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 522 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 523 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 524 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 525 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 526 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 527 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 529 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 530 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Liepard_3
# 532 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Liepard_4
# 536 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Liepard_5
# 540 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Liepard_6
# 545 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 546 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 547 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Liepard_1:
# 549 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Liepard_3:
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_4:
# 533 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 534 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 535 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_5:
# 537 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 538 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 539 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1

MythicIsland_Jungle_Encounter_Liepard_6:
# 541 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_2
# 542 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 3
# 543 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard_1


MythicIsland_Jungle_Encounter_Liepard2::
# 553 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 554 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 555 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 556 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 557 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LIEPARD, 35, ITEM_NORMAL_GEM, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_COVET, MOVE_ENCORE, MOVE_NIGHT_SLASH
# 558 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_ENCOUNTER
# 559 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 560 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 561 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 562 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 563 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 564 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 565 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 567 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 568 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Liepard2_3
# 570 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Liepard2_4
# 574 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Liepard2_5
# 578 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Liepard2_6
# 583 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_4
# 584 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 5
# 585 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Liepard2_1:
# 587 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Liepard2_3:
	goto MythicIsland_Jungle_Encounter_Liepard2_1

MythicIsland_Jungle_Encounter_Liepard2_4:
# 571 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_4
# 572 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 5
# 573 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard2_1

MythicIsland_Jungle_Encounter_Liepard2_5:
# 575 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_4
# 576 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 5
# 577 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard2_1

MythicIsland_Jungle_Encounter_Liepard2_6:
# 579 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_4
# 580 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 5
# 581 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard2_1


MythicIsland_Jungle_Encounter_Liepard3::
# 591 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 592 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 593 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 594 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 595 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LIEPARD, 35, ITEM_NORMAL_GEM, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_COVET, MOVE_ENCORE, MOVE_NIGHT_SLASH
# 596 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_ENCOUNTER
# 597 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 598 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 599 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 600 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 601 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 602 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 603 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 605 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 606 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Liepard3_3
# 608 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Liepard3_4
# 612 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Liepard3_5
# 616 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Liepard3_6
# 621 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_6
# 622 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 7
# 623 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Liepard3_1:
# 625 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Liepard3_3:
	goto MythicIsland_Jungle_Encounter_Liepard3_1

MythicIsland_Jungle_Encounter_Liepard3_4:
# 609 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_6
# 610 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 7
# 611 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard3_1

MythicIsland_Jungle_Encounter_Liepard3_5:
# 613 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_6
# 614 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 7
# 615 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard3_1

MythicIsland_Jungle_Encounter_Liepard3_6:
# 617 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_6
# 618 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 7
# 619 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard3_1


MythicIsland_Jungle_Encounter_Liepard4::
# 629 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 630 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 631 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 632 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 633 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LIEPARD, 35, ITEM_NORMAL_GEM, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_COVET, MOVE_ENCORE, MOVE_NIGHT_SLASH
# 634 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_ENCOUNTER
# 635 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 636 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 637 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 638 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 639 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 640 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 641 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 643 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 644 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Liepard4_3
# 646 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Liepard4_4
# 650 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Liepard4_5
# 654 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Liepard4_6
# 659 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_B
# 660 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 12
# 661 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Liepard4_1:
# 663 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Liepard4_3:
	goto MythicIsland_Jungle_Encounter_Liepard4_1

MythicIsland_Jungle_Encounter_Liepard4_4:
# 647 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_B
# 648 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 12
# 649 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard4_1

MythicIsland_Jungle_Encounter_Liepard4_5:
# 651 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_B
# 652 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 12
# 653 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard4_1

MythicIsland_Jungle_Encounter_Liepard4_6:
# 655 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_B
# 656 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 12
# 657 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard4_1


MythicIsland_Jungle_Encounter_Liepard5::
# 667 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 668 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 669 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 670 "data/maps/MythicIsland_Jungle/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 671 "data/maps/MythicIsland_Jungle/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LIEPARD, 35, ITEM_NORMAL_GEM, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_COVET, MOVE_ENCORE, MOVE_NIGHT_SLASH
# 672 "data/maps/MythicIsland_Jungle/scripts.pory"
	playmoncry SPECIES_LIEPARD, CRY_MODE_ENCOUNTER
# 673 "data/maps/MythicIsland_Jungle/scripts.pory"
	waitmoncry
# 674 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 675 "data/maps/MythicIsland_Jungle/scripts.pory"
	dowildbattle
# 676 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 677 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 678 "data/maps/MythicIsland_Jungle/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 679 "data/maps/MythicIsland_Jungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 681 "data/maps/MythicIsland_Jungle/scripts.pory"
	switch VAR_RESULT
# 682 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Liepard5_3
# 684 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Liepard5_4
# 688 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Liepard5_5
# 692 "data/maps/MythicIsland_Jungle/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Liepard5_6
# 697 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_C
# 698 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 13
# 699 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Liepard5_1:
# 701 "data/maps/MythicIsland_Jungle/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Liepard5_3:
	goto MythicIsland_Jungle_Encounter_Liepard5_1

MythicIsland_Jungle_Encounter_Liepard5_4:
# 685 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_C
# 686 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 13
# 687 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard5_1

MythicIsland_Jungle_Encounter_Liepard5_5:
# 689 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_C
# 690 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 13
# 691 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard5_1

MythicIsland_Jungle_Encounter_Liepard5_6:
# 693 "data/maps/MythicIsland_Jungle/scripts.pory"
	setflag FLAG_TEMP_C
# 694 "data/maps/MythicIsland_Jungle/scripts.pory"
	removeobject 13
# 695 "data/maps/MythicIsland_Jungle/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Liepard5_1


MythicIsland_Jungle_KeyHole1_Text_0:
# 124 "data/maps/MythicIsland_Jungle/scripts.pory"
	.string "The Zap Plate fits perfectly.$"

MythicIsland_Jungle_KeyHole1_Text_1:
# 129 "data/maps/MythicIsland_Jungle/scripts.pory"
	.string "It looks like a stone plate of sorts\n"
	.string "could be placed in here.$"

MythicIsland_Jungle_KeyHole1_Text_2:
# 134 "data/maps/MythicIsland_Jungle/scripts.pory"
	.string "Insert the Zap Plate inside?$"

MythicIsland_Jungle_KeyHole2_Text_0:
# 158 "data/maps/MythicIsland_Jungle/scripts.pory"
	.string "The Flame Plate fits perfectly.$"

MythicIsland_Jungle_KeyHole2_Text_1:
# 168 "data/maps/MythicIsland_Jungle/scripts.pory"
	.string "Insert the Flame Plate inside?$"

MythicIsland_Jungle_KeyHole2_Text_2:
# 176 "data/maps/MythicIsland_Jungle/scripts.pory"
	.string "The Thunder Plate fits perfectly.$"

MythicIsland_Jungle_KeyHole3_Text_0:
# 192 "data/maps/MythicIsland_Jungle/scripts.pory"
	.string "The Splash Plate fits perfectly.$"

MythicIsland_Jungle_KeyHole3_Text_1:
# 202 "data/maps/MythicIsland_Jungle/scripts.pory"
	.string "Insert the Splash Plate inside?$"

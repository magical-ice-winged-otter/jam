MythicIsland_WaterBossRoom_MapScripts::
# 4 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MythicIsland_WaterBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MythicIsland_WaterBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED, MythicIsland_WaterBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MythicIsland_WaterBossRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


# 11 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
MythicIsland_WaterBossRoom_WalkingWake:
# 12 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	walk_in_place_down
# 13 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	delay_16
# 13 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	delay_16
# 14 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	walk_in_place_fast_down
# 15 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	delay_16
# 15 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	delay_16
	step_end

MythicIsland_WaterBossRoom_ApproachBossCenter::
# 19 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 20 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 23 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossCenter_1
# 61 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 62 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 63 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossCenter_1:
# 24 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 25 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 26 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 27 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 28 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 29 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 30 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 31 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 32 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 34 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 35 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 36 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 37 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 38 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 39 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 41 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 42 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 43 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 44 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 46 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossCenter_5
# 49 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossCenter_6
# 50 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossCenter_6
# 51 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossCenter_6
MythicIsland_WaterBossRoom_ApproachBossCenter_6:
# 53 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 54 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 55 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 56 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossCenter_5:
	return


MythicIsland_WaterBossRoom_ApproachBossLeft::
# 70 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 71 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 74 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossLeft_1
# 114 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 115 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 116 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossLeft_1:
# 75 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 76 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 77 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 78 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 79 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 80 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 81 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 82 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 83 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 84 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 85 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 87 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 88 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 89 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 90 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 91 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 92 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 93 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 94 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 95 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 96 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 97 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 99 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossLeft_5
# 102 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossLeft_6
# 103 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossLeft_6
# 104 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossLeft_6
MythicIsland_WaterBossRoom_ApproachBossLeft_6:
# 106 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 107 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 108 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 109 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossLeft_5:
	return


MythicIsland_WaterBossRoom_ApproachBossFarLeft::
# 123 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 124 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 127 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossFarLeft_1
# 169 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 170 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 171 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossFarLeft_1:
# 128 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 129 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 130 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 131 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 132 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 133 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 134 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 135 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 136 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 137 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 138 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 139 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 140 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 142 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 143 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 144 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 145 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 146 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 147 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 148 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 149 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 150 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 151 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 152 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 154 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossFarLeft_5
# 157 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossFarLeft_6
# 158 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossFarLeft_6
# 159 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossFarLeft_6
MythicIsland_WaterBossRoom_ApproachBossFarLeft_6:
# 161 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 162 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 163 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 164 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossFarLeft_5:
	return


MythicIsland_WaterBossRoom_ApproachBossRight::
# 178 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 179 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 182 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossRight_1
# 222 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 223 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 224 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossRight_1:
# 183 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 184 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Left
# 185 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 186 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 187 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 188 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 189 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 190 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 191 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 192 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 193 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 195 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 196 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 197 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 198 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 199 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 200 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 201 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 202 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 203 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 204 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 205 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 207 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossRight_5
# 210 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossRight_6
# 211 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossRight_6
# 212 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossRight_6
MythicIsland_WaterBossRoom_ApproachBossRight_6:
# 214 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 215 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 216 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 217 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossRight_5:
	return


MythicIsland_WaterBossRoom_ApproachBossFarRight::
# 231 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 232 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 235 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossFarRight_1
# 277 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 278 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 279 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossFarRight_1:
# 236 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 237 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 238 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 239 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 240 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 241 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 242 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 243 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 244 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 245 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 246 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 247 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 248 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 250 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 251 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 252 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 253 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 254 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 255 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 256 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 257 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 258 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 259 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 260 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 262 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 263 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossFarRight_5
# 265 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossFarRight_6
# 266 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossFarRight_6
# 267 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossFarRight_6
MythicIsland_WaterBossRoom_ApproachBossFarRight_6:
# 269 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 270 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 271 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 272 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossFarRight_5:
	return


MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0:
# 21 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	.string "> A great beast stands before you. Are\n"
	.string "you fully prepared?$"

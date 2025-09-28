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


MythicIsland_WaterBossRoom_SplashPlate::
# 12 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	finditem ITEM_SPLASH_PLATE
# 13 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 2
	return


# 16 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
MythicIsland_WaterBossRoom_WalkingWake:
# 17 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	walk_in_place_down
# 18 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	delay_16
# 18 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	delay_16
# 19 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	walk_in_place_fast_down
# 20 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	delay_16
# 20 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	delay_16
	step_end

MythicIsland_WaterBossRoom_ApproachBossCenter::
# 24 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 25 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 28 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossCenter_1
# 66 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 67 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 68 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossCenter_1:
# 29 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 30 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 31 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 32 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 33 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 34 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 35 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 36 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 37 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 39 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 40 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 41 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 42 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 43 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 44 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 46 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 47 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 48 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 49 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossCenter_5
# 54 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossCenter_6
# 55 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossCenter_6
# 56 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossCenter_6
MythicIsland_WaterBossRoom_ApproachBossCenter_6:
# 58 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 59 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 60 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 61 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossCenter_5:
	return


MythicIsland_WaterBossRoom_ApproachBossLeft::
# 75 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 76 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 79 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossLeft_1
# 119 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 120 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 121 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossLeft_1:
# 80 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 81 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 82 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 83 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 84 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 85 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 86 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 87 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 88 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 89 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 90 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 93 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 94 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 95 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 96 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 97 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 98 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 99 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 100 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 101 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 102 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 104 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 105 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossLeft_5
# 107 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossLeft_6
# 108 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossLeft_6
# 109 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossLeft_6
MythicIsland_WaterBossRoom_ApproachBossLeft_6:
# 111 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 112 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 113 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 114 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossLeft_5:
	return


MythicIsland_WaterBossRoom_ApproachBossFarLeft::
# 128 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 129 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 132 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossFarLeft_1
# 174 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 175 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 176 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossFarLeft_1:
# 133 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 134 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 135 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 136 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 137 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 138 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 139 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 140 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 141 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 142 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 143 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 144 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 145 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 147 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 148 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 149 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 150 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 151 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 152 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 153 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 154 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 155 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 156 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 157 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 159 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossFarLeft_5
# 162 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossFarLeft_6
# 163 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossFarLeft_6
# 164 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossFarLeft_6
MythicIsland_WaterBossRoom_ApproachBossFarLeft_6:
# 166 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 167 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 168 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 169 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossFarLeft_5:
	return


MythicIsland_WaterBossRoom_ApproachBossRight::
# 183 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 184 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 187 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossRight_1
# 227 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 228 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 229 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossRight_1:
# 188 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 189 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 190 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 191 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 192 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 193 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 194 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 195 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 196 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 197 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 198 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 200 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 201 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 202 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 203 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LEFTOVERS, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 204 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 205 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 206 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 207 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 208 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 209 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 210 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 212 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 213 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossRight_5
# 215 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossRight_6
# 216 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossRight_6
# 217 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossRight_6
MythicIsland_WaterBossRoom_ApproachBossRight_6:
# 219 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 220 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 221 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 222 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossRight_5:
	return


MythicIsland_WaterBossRoom_ApproachBossFarRight::
# 236 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	lock
# 237 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	msgbox MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0, MSGBOX_YESNO
# 240 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_WaterBossRoom_ApproachBossFarRight_1
# 282 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 283 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 284 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
	return

MythicIsland_WaterBossRoom_ApproachBossFarRight_1:
# 241 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	closemessage
# 242 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 243 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 244 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 245 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 246 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 247 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 248 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, MythicIsland_WaterBossRoom_WalkingWake
# 249 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 250 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_NORMAL
# 251 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmoncry
# 252 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFaster
# 253 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	waitmovement 0
# 255 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 256 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 257 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 258 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_WALKING_WAKE, 50, ITEM_LUM_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 0, 31, 31, 31, 31, 31, 0, MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_BREAKING_SWIPE, MOVE_DRAGON_BREATH
# 259 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setwilddoubleflag
# 260 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 261 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	dowildbattle
# 262 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 263 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 264 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 265 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 267 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	switch VAR_RESULT
# 268 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_WaterBossRoom_ApproachBossFarRight_5
# 270 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_WaterBossRoom_ApproachBossFarRight_6
# 271 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_WaterBossRoom_ApproachBossFarRight_6
# 272 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_WaterBossRoom_ApproachBossFarRight_6
MythicIsland_WaterBossRoom_ApproachBossFarRight_6:
# 274 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_WALKING_WAKE_DEFEATED
# 275 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	removeobject 1
# 276 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 277 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	return

MythicIsland_WaterBossRoom_ApproachBossFarRight_5:
	return


MythicIsland_WaterBossRoom_ApproachBossCenter_Text_0:
# 26 "data/maps/MythicIsland_WaterBossRoom/scripts.pory"
	.string "> A great beast stands before you. Are\n"
	.string "you fully prepared?$"

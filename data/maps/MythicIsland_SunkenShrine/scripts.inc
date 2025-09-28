MythicIsland_SunkenShrine_MapScripts::
	.byte 0


MythicIsland_SunkenShrine_OmanyteNPC::
# 44 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	lock
# 45 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	faceplayer
# 46 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_OMANYTE, CRY_MODE_NORMAL
# 47 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	msgbox MythicIsland_SunkenShrine_OmanyteNPC_Text_0
# 52 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	closemessage
# 53 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return


MythicIsland_SunkenShrine_Chimecho::
# 57 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	lock
# 58 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	faceplayer
# 59 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto_if_unset FLAG_MYTHIC_ISLAND_BEACH_CHIMECHO, MythicIsland_SunkenShrine_Chimecho_2
MythicIsland_SunkenShrine_Chimecho_1:
# 67 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playse SE_M_HEAL_BELL
# 68 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitse
# 69 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	special HealPlayerParty
# 70 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	msgbox MythicIsland_SunkenShrine_Chimecho_Text_1, MSGBOX_YESNO
# 74 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_SunkenShrine_Chimecho_5
# 78 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto MythicIsland_SunkenShrine_Chimecho_End
MythicIsland_SunkenShrine_Chimecho_4:
# 81 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
MythicIsland_SunkenShrine_ChimechoTeleport:
# 82 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dynmultipush MythicIsland_SunkenShrine_Chimecho_Text_2, 0
# 84 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_BEACH_CHIMECHO, MythicIsland_SunkenShrine_Chimecho_9
MythicIsland_SunkenShrine_Chimecho_8:
# 88 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_LAKE_CHIMECHO, MythicIsland_SunkenShrine_Chimecho_12
MythicIsland_SunkenShrine_Chimecho_11:
# 93 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 95 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case 1, MythicIsland_SunkenShrine_Chimecho_16
# 104 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case 2, MythicIsland_SunkenShrine_Chimecho_17
# 113 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto MythicIsland_SunkenShrine_Chimecho_End
MythicIsland_SunkenShrine_Chimecho_14:
# 116 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
MythicIsland_SunkenShrine_Chimecho_End:
# 117 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	closemessage
# 118 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_SunkenShrine_Chimecho_2:
# 60 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
# 61 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 62 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	msgbox MythicIsland_SunkenShrine_Chimecho_Text_0
# 65 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_BEACH_CHIMECHO
	goto MythicIsland_SunkenShrine_Chimecho_1

MythicIsland_SunkenShrine_Chimecho_5:
# 75 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto MythicIsland_SunkenShrine_ChimechoTeleport
	goto MythicIsland_SunkenShrine_Chimecho_4

MythicIsland_SunkenShrine_Chimecho_9:
# 85 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dynmultipush MythicIsland_SunkenShrine_Chimecho_Text_3, 1
	goto MythicIsland_SunkenShrine_Chimecho_8

MythicIsland_SunkenShrine_Chimecho_12:
# 89 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dynmultipush MythicIsland_SunkenShrine_Chimecho_Text_4, 2
	goto MythicIsland_SunkenShrine_Chimecho_11

MythicIsland_SunkenShrine_Chimecho_16:
# 97 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	closemessage
# 98 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playse SE_M_PSYBEAM
# 99 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportSpin
# 100 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmovement 0
# 101 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportFly
# 102 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmovement 0
# 103 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	warp MAP_MYTHIC_ISLAND_ISLAND_ENTRANCE, 25, 29
	goto MythicIsland_SunkenShrine_Chimecho_14

MythicIsland_SunkenShrine_Chimecho_17:
# 105 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	closemessage
# 106 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playse SE_M_PSYBEAM
# 107 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportSpin
# 108 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmovement 0
# 109 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportFly
# 110 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmovement 0
# 111 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	warp MAP_MYTHIC_ISLAND_LAKE, 10, 32
	goto MythicIsland_SunkenShrine_Chimecho_14


MythicIsland_Jungle_Encounter_Swampert1::
# 123 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 124 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 125 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 126 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 127 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 128 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 129 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 130 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 131 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 132 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 133 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 134 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 135 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 137 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert1_3
# 140 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert1_4
# 144 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert1_5
# 148 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert1_6
# 153 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 154 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 155 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert1_1:
# 157 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert1_3:
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_4:
# 141 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 142 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 143 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_5:
# 145 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 146 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 147 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_6:
# 149 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 150 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 151 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1


MythicIsland_Jungle_Encounter_Swampert2::
# 161 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 162 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 163 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 164 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 165 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 166 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 167 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 168 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 169 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 170 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 171 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 172 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 173 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 175 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert2_3
# 178 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert2_4
# 182 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert2_5
# 186 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert2_6
# 191 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 192 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 193 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert2_1:
# 195 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert2_3:
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_4:
# 179 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 180 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 181 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_5:
# 183 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 184 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 185 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_6:
# 187 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 188 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 189 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1


MythicIsland_Jungle_Encounter_Swampert3::
# 199 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 200 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 201 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 202 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 203 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 204 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 205 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 206 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 207 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 208 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 209 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 210 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 211 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 213 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 214 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert3_3
# 216 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert3_4
# 220 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert3_5
# 224 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert3_6
# 229 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 230 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 231 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert3_1:
# 233 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert3_3:
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_4:
# 217 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 218 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 219 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_5:
# 221 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 222 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 223 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_6:
# 225 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 226 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 227 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1


MythicIsland_Jungle_Encounter_Swampert4::
# 237 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 238 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 239 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 240 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 241 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 242 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 243 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 244 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 245 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 246 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 247 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 248 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 249 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 251 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 252 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert4_3
# 254 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert4_4
# 258 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert4_5
# 262 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert4_6
# 267 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 268 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 269 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert4_1:
# 271 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert4_3:
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_4:
# 255 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 256 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 257 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_5:
# 259 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 260 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 261 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_6:
# 263 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 264 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 265 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1


MythicIsland_Jungle_Encounter_Swampert5::
# 275 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 276 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 277 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 278 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 279 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 280 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 281 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 282 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 283 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 284 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 285 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 286 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 287 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 289 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 290 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert5_3
# 292 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert5_4
# 296 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert5_5
# 300 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert5_6
# 305 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 306 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 307 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert5_1:
# 309 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert5_3:
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_4:
# 293 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 294 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 295 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_5:
# 297 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 298 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 299 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_6:
# 301 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 302 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 303 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1


MythicIsland_Jungle_Encounter_Swampert6::
# 313 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 314 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 315 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 316 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 317 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 318 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 319 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 320 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 321 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 322 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 323 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 324 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 325 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 327 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert6_3
# 330 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert6_4
# 334 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert6_5
# 338 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert6_6
# 343 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 344 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 345 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert6_1:
# 347 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert6_3:
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_4:
# 331 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 332 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 333 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_5:
# 335 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 336 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 337 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_6:
# 339 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 340 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 341 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1


MythicIsland_Jungle_Encounter_Swampert7::
# 351 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 352 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 353 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 354 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 355 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 356 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 357 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 358 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 359 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 360 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 361 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 362 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 363 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 365 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 366 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert7_3
# 368 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert7_4
# 372 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert7_5
# 376 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert7_6
# 381 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 382 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 383 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert7_1:
# 385 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert7_3:
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_4:
# 369 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 370 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 371 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_5:
# 373 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 374 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 375 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_6:
# 377 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 378 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 379 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1


MythicIsland_Jungle_Encounter_Swampert8::
# 389 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 390 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 391 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 392 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 393 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 394 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 395 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 396 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 397 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 398 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 399 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 400 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 401 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 403 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 404 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert8_3
# 406 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert8_4
# 410 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert8_5
# 414 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert8_6
# 419 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 420 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 421 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert8_1:
# 423 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert8_3:
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_4:
# 407 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 408 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 409 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_5:
# 411 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 412 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 413 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_6:
# 415 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 416 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 417 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1


MythicIsland_Jungle_Encounter_Swampert9::
# 427 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 428 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 429 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 430 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 431 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 432 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 433 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 434 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 435 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 436 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 437 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 438 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 439 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 441 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 442 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert9_3
# 444 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert9_4
# 448 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert9_5
# 452 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert9_6
# 457 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 458 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 459 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert9_1:
# 461 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert9_3:
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_4:
# 445 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 446 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 447 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_5:
# 449 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 450 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 451 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_6:
# 453 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 454 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 455 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1


MythicIsland_Jungle_Encounter_Swampert10::
# 465 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 466 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 467 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 468 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 469 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 470 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 471 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 472 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 473 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 474 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 475 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 476 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 477 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 479 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 480 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert10_3
# 482 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert10_4
# 486 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert10_5
# 490 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert10_6
# 495 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 496 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 497 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert10_1:
# 499 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert10_3:
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_4:
# 483 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 484 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 485 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_5:
# 487 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 488 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 489 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_6:
# 491 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 492 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 493 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1


MythicIsland_Jungle_Encounter_Swampert11::
# 503 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 504 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 505 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 506 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 507 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 508 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 509 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 510 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 511 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 512 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 513 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 514 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 515 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 517 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 518 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert11_3
# 520 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert11_4
# 524 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert11_5
# 528 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert11_6
# 533 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 534 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 535 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert11_1:
# 537 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert11_3:
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_4:
# 521 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 522 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 523 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_5:
# 525 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 526 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 527 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_6:
# 529 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 530 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 531 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1


MythicIsland_Jungle_Encounter_Swampert12::
# 541 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 542 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 543 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 544 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 545 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 546 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 547 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 548 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 549 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 550 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 551 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 552 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 553 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 555 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 556 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert12_3
# 558 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert12_4
# 562 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert12_5
# 566 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert12_6
# 571 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 572 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 573 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert12_1:
# 575 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert12_3:
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_4:
# 559 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 560 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 561 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_5:
# 563 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 564 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 565 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_6:
# 567 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 568 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 569 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1


MythicIsland_Jungle_Encounter_Swampert13::
# 579 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 580 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 581 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 582 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 583 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 584 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 585 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 586 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 587 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 588 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 589 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 590 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 591 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 593 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 594 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert13_3
# 596 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert13_4
# 600 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert13_5
# 604 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert13_6
# 609 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 610 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 611 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert13_1:
# 613 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert13_3:
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_4:
# 597 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 598 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 599 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_5:
# 601 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 602 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 603 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_6:
# 605 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 606 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 607 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert13_1


MythicIsland_SunkenShrine_OmanyteNPC_Text_0:
# 48 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "Underwater scary.\p"
	.string "Find air when hear Tidebringer wrath.\p"
	.string "Fighting Pokémon anger Tidebringer.$"

MythicIsland_SunkenShrine_Chimecho_Text_0:
# 63 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "Chime...$"

MythicIsland_SunkenShrine_Chimecho_Text_1:
# 71 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "> The soothing chime fills your Pokémon\n"
	.string "with restoration.\p"
	.string "Would you like Chimecho to teleport\n"
	.string "you?$"

MythicIsland_SunkenShrine_Chimecho_Text_2:
# 82 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "Cancel$"

MythicIsland_SunkenShrine_Chimecho_Text_3:
# 85 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "Island Entrance$"

MythicIsland_SunkenShrine_Chimecho_Text_4:
# 89 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "Lake$"

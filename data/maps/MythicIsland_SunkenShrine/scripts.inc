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
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 127 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 128 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 129 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 130 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 131 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 132 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 133 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 134 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 136 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 137 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert1_3
# 139 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert1_4
# 143 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert1_5
# 147 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert1_6
# 152 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 153 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 154 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert1_1:
# 156 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert1_3:
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_4:
# 140 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 141 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 142 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_5:
# 144 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 145 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 146 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_6:
# 148 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 149 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 150 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1


MythicIsland_Jungle_Encounter_Swampert2::
# 160 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 161 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 162 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 163 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 164 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 165 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 166 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 167 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 168 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 169 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 170 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 171 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 173 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 174 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert2_3
# 176 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert2_4
# 180 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert2_5
# 184 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert2_6
# 189 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 190 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 191 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert2_1:
# 193 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert2_3:
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_4:
# 177 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 178 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 179 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_5:
# 181 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 182 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 183 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_6:
# 185 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 186 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 187 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1


MythicIsland_Jungle_Encounter_Swampert3::
# 197 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 198 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 199 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 200 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 201 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 202 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 203 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 204 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 205 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 206 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 207 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 208 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 210 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 211 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert3_3
# 213 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert3_4
# 217 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert3_5
# 221 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert3_6
# 226 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 227 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 228 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert3_1:
# 230 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert3_3:
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_4:
# 214 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 215 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 216 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_5:
# 218 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 219 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 220 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_6:
# 222 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 223 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 224 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1


MythicIsland_Jungle_Encounter_Swampert4::
# 234 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 235 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 236 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 237 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 238 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 239 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 240 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 241 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 242 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 243 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 244 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 245 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 247 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 248 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert4_3
# 250 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert4_4
# 254 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert4_5
# 258 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert4_6
# 263 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 264 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 265 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert4_1:
# 267 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert4_3:
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_4:
# 251 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 252 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 253 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_5:
# 255 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 256 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 257 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_6:
# 259 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 260 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 261 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1


MythicIsland_Jungle_Encounter_Swampert5::
# 271 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 272 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 273 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 274 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 275 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 276 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 277 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 278 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 279 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 280 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 281 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 282 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 284 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 285 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert5_3
# 287 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert5_4
# 291 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert5_5
# 295 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert5_6
# 300 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 301 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 302 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert5_1:
# 304 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert5_3:
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_4:
# 288 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 289 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 290 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_5:
# 292 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 293 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 294 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_6:
# 296 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 297 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 298 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1


MythicIsland_Jungle_Encounter_Swampert6::
# 308 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 309 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 310 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 311 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 312 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 313 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 314 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 315 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 316 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 317 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 318 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 319 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 321 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 322 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert6_3
# 324 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert6_4
# 328 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert6_5
# 332 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert6_6
# 337 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 338 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 339 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert6_1:
# 341 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert6_3:
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_4:
# 325 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 326 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 327 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_5:
# 329 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 330 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 331 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_6:
# 333 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 334 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 335 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1


MythicIsland_Jungle_Encounter_Swampert7::
# 345 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 346 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 347 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 348 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 349 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 350 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 351 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 352 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 353 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 354 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 355 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 356 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 358 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 359 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert7_3
# 361 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert7_4
# 365 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert7_5
# 369 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert7_6
# 374 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 375 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 376 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert7_1:
# 378 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert7_3:
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_4:
# 362 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 363 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 364 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_5:
# 366 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 367 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 368 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_6:
# 370 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 371 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 372 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1


MythicIsland_Jungle_Encounter_Swampert8::
# 382 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 383 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 384 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 385 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 386 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 387 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 388 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 389 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 390 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 391 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 392 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 393 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 395 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 396 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert8_3
# 398 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert8_4
# 402 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert8_5
# 406 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert8_6
# 411 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 412 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 413 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert8_1:
# 415 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert8_3:
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_4:
# 399 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 400 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 401 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_5:
# 403 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 404 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 405 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_6:
# 407 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 408 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 409 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1


MythicIsland_Jungle_Encounter_Swampert9::
# 419 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 420 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 421 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 422 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 423 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 424 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 425 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 426 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 427 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 428 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 429 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 430 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 432 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 433 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert9_3
# 435 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert9_4
# 439 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert9_5
# 443 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert9_6
# 448 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 449 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 450 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert9_1:
# 452 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert9_3:
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_4:
# 436 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 437 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 438 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_5:
# 440 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 441 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 442 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_6:
# 444 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 445 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 446 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1


MythicIsland_Jungle_Encounter_Swampert10::
# 456 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 457 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 458 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 459 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 460 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 461 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 462 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 463 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 464 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 465 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 466 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 467 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 469 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 470 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert10_3
# 472 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert10_4
# 476 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert10_5
# 480 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert10_6
# 485 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 486 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 487 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert10_1:
# 489 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert10_3:
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_4:
# 473 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 474 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 475 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_5:
# 477 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 478 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 479 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_6:
# 481 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 482 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 483 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1


MythicIsland_Jungle_Encounter_Swampert11::
# 493 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 494 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 495 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 496 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 497 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 498 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 499 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 500 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 501 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 502 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 503 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 504 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 506 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 507 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert11_3
# 509 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert11_4
# 513 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert11_5
# 517 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert11_6
# 522 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 523 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 524 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert11_1:
# 526 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert11_3:
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_4:
# 510 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 511 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 512 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_5:
# 514 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 515 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 516 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_6:
# 518 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 519 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 520 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1


MythicIsland_Jungle_Encounter_Swampert12::
# 530 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 531 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 532 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 533 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 534 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 535 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 536 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 537 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 538 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 539 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 540 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 541 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 543 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 544 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert12_3
# 546 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert12_4
# 550 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert12_5
# 554 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert12_6
# 559 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 560 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 561 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert12_1:
# 563 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert12_3:
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_4:
# 547 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 548 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 549 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_5:
# 551 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 552 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 553 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_6:
# 555 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 556 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 557 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1


MythicIsland_Jungle_Encounter_Swampert13::
# 567 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 568 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 569 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 570 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 571 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 572 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 573 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 574 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 575 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 576 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 577 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 578 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 580 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 581 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert13_3
# 583 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert13_4
# 587 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert13_5
# 591 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert13_6
# 596 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 597 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 598 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert13_1:
# 600 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert13_3:
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_4:
# 584 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 585 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 586 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_5:
# 588 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 589 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 590 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_6:
# 592 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 593 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 594 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
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

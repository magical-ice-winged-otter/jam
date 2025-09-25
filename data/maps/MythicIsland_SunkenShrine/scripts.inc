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


MythicIsland_SunkenShrine_Totem::
# 56 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	lock
# 57 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto_if_unset FLAG_MYTHIC_ISLAND_SUNKEN_SHRINE_TOTEM_ACTIVE, MythicIsland_SunkenShrine_Totem_2
MythicIsland_SunkenShrine_Totem_1:
# 65 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playse SE_M_HEAL_BELL
# 66 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitse
# 67 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	special HealPlayerParty
# 68 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	msgbox MythicIsland_SunkenShrine_Totem_Text_1, MSGBOX_YESNO
# 72 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_SunkenShrine_Totem_5
# 76 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto MythicIsland_SunkenShrine_Totem_End
MythicIsland_SunkenShrine_Totem_4:
# 79 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
MythicIsland_StatueTeleport_SunkenShrine:
# 80 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dynmultipush MythicIsland_SunkenShrine_Totem_Text_2, 0
# 81 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto_if_set FLAG_MYTHIC_ISLAND_BEACH_TOTEM_ACTIVE, MythicIsland_SunkenShrine_Totem_9
MythicIsland_SunkenShrine_Totem_8:
# 84 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 85 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case 1, MythicIsland_SunkenShrine_Totem_13
# 95 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto MythicIsland_SunkenShrine_Totem_End
MythicIsland_SunkenShrine_Totem_11:
# 98 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
MythicIsland_SunkenShrine_Totem_End:
# 99 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	closemessage
# 100 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_SunkenShrine_Totem_2:
# 58 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playse SE_M_MOONLIGHT
# 59 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitse
# 60 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	msgbox MythicIsland_SunkenShrine_Totem_Text_0
# 63 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_SUNKEN_SHRINE_TOTEM_ACTIVE
	goto MythicIsland_SunkenShrine_Totem_1

MythicIsland_SunkenShrine_Totem_5:
# 73 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto MythicIsland_StatueTeleport_SunkenShrine
	goto MythicIsland_SunkenShrine_Totem_4

MythicIsland_SunkenShrine_Totem_9:
# 82 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dynmultipush MythicIsland_SunkenShrine_Totem_Text_3, 1
	goto MythicIsland_SunkenShrine_Totem_8

MythicIsland_SunkenShrine_Totem_13:
# 87 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	closemessage
# 88 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playse SE_M_PSYBEAM
# 89 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportSpin
# 90 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmovement 0
# 91 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, teleportFly
# 92 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	warp MAP_MYTHIC_ISLAND_ISLAND_ENTRANCE, 25, 29
	goto MythicIsland_SunkenShrine_Totem_11


MythicIsland_Jungle_Encounter_Swampert1::
# 105 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 106 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 107 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 108 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 109 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 110 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 111 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 112 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 113 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 114 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 115 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 116 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 118 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert1_3
# 121 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert1_4
# 125 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert1_5
# 129 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert1_6
# 134 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 135 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 136 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert1_1:
# 138 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert1_3:
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_4:
# 122 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 123 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 124 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_5:
# 126 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 127 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 128 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1

MythicIsland_Jungle_Encounter_Swampert1_6:
# 130 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1
# 131 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 2
# 132 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert1_1


MythicIsland_Jungle_Encounter_Swampert2::
# 142 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 143 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 144 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 145 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 146 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 147 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 148 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 149 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 150 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 151 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 152 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 153 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 155 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert2_3
# 158 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert2_4
# 162 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert2_5
# 166 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert2_6
# 171 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 172 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 173 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert2_1:
# 175 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert2_3:
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_4:
# 159 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 160 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 161 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_5:
# 163 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 164 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 165 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1

MythicIsland_Jungle_Encounter_Swampert2_6:
# 167 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_2
# 168 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 3
# 169 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert2_1


MythicIsland_Jungle_Encounter_Swampert3::
# 179 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 180 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 181 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 182 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 183 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 184 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 185 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 186 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 187 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 188 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 189 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 190 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 192 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 193 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert3_3
# 195 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert3_4
# 199 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert3_5
# 203 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert3_6
# 208 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 209 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 210 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert3_1:
# 212 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert3_3:
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_4:
# 196 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 197 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 198 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_5:
# 200 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 201 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 202 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1

MythicIsland_Jungle_Encounter_Swampert3_6:
# 204 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_3
# 205 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 4
# 206 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert3_1


MythicIsland_Jungle_Encounter_Swampert4::
# 216 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 217 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 218 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 219 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 220 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 221 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 222 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 223 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 224 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 225 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 226 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 227 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 229 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 230 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert4_3
# 232 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert4_4
# 236 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert4_5
# 240 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert4_6
# 245 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 246 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 247 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert4_1:
# 249 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert4_3:
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_4:
# 233 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 234 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 235 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_5:
# 237 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 238 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 239 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1

MythicIsland_Jungle_Encounter_Swampert4_6:
# 241 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_4
# 242 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 5
# 243 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert4_1


MythicIsland_Jungle_Encounter_Swampert5::
# 253 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 254 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 255 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 256 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 257 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 258 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 259 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 260 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 261 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 262 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 263 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 264 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 266 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 267 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert5_3
# 269 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert5_4
# 273 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert5_5
# 277 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert5_6
# 282 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 283 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 284 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert5_1:
# 286 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert5_3:
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_4:
# 270 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 271 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 272 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_5:
# 274 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 275 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 276 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1

MythicIsland_Jungle_Encounter_Swampert5_6:
# 278 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_5
# 279 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 8
# 280 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert5_1


MythicIsland_Jungle_Encounter_Swampert6::
# 290 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 291 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 292 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 293 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 294 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 295 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 296 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 297 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 298 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 299 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 300 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 301 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 303 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 304 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert6_3
# 306 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert6_4
# 310 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert6_5
# 314 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert6_6
# 319 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 320 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 321 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert6_1:
# 323 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert6_3:
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_4:
# 307 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 308 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 309 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_5:
# 311 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 312 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 313 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1

MythicIsland_Jungle_Encounter_Swampert6_6:
# 315 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_6
# 316 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 9
# 317 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert6_1


MythicIsland_Jungle_Encounter_Swampert7::
# 327 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 328 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 329 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 330 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 331 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 332 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 333 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 334 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 335 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 336 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 337 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 338 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 340 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 341 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert7_3
# 343 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert7_4
# 347 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert7_5
# 351 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert7_6
# 356 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 357 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 358 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert7_1:
# 360 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert7_3:
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_4:
# 344 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 345 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 346 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_5:
# 348 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 349 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 350 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1

MythicIsland_Jungle_Encounter_Swampert7_6:
# 352 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_7 ;
# 353 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 10 ;
# 354 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert7_1


MythicIsland_Jungle_Encounter_Swampert8::
# 364 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 365 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 366 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 367 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 368 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 369 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 370 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 371 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 372 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 373 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 374 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 375 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 377 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 378 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert8_3
# 380 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert8_4
# 384 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert8_5
# 388 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert8_6
# 393 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 394 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 395 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert8_1:
# 397 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert8_3:
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_4:
# 381 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 382 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 383 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_5:
# 385 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 386 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 387 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1

MythicIsland_Jungle_Encounter_Swampert8_6:
# 389 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_8 ;
# 390 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 11 ;
# 391 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert8_1


MythicIsland_Jungle_Encounter_Swampert9::
# 401 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 402 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 403 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 404 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 405 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 406 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 407 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 408 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 409 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 410 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 411 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 412 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 414 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 415 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert9_3
# 417 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert9_4
# 421 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert9_5
# 425 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert9_6
# 430 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 431 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 432 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert9_1:
# 434 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert9_3:
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_4:
# 418 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 419 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 420 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_5:
# 422 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 423 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 424 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1

MythicIsland_Jungle_Encounter_Swampert9_6:
# 426 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_9 ;
# 427 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 12 ;
# 428 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert9_1


MythicIsland_Jungle_Encounter_Swampert10::
# 438 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 439 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 440 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 441 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 442 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 443 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 444 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 445 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 446 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 447 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 448 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 449 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 451 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 452 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert10_3
# 454 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert10_4
# 458 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert10_5
# 462 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert10_6
# 467 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 468 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 469 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert10_1:
# 471 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert10_3:
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_4:
# 455 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 456 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 457 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_5:
# 459 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 460 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 461 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1

MythicIsland_Jungle_Encounter_Swampert10_6:
# 463 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_10 ;
# 464 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 13 ;
# 465 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert10_1


MythicIsland_Jungle_Encounter_Swampert11::
# 475 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 476 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 477 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 478 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 479 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 480 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 481 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 482 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 483 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 484 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 485 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 486 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 488 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 489 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert11_3
# 491 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert11_4
# 495 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert11_5
# 499 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert11_6
# 504 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 505 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 506 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert11_1:
# 508 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert11_3:
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_4:
# 492 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 493 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 494 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_5:
# 496 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 497 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 498 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1

MythicIsland_Jungle_Encounter_Swampert11_6:
# 500 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1A ;
# 501 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 14 ;
# 502 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert11_1


MythicIsland_Jungle_Encounter_Swampert12::
# 512 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 513 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 514 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 515 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 516 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 517 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 518 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 519 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 520 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 521 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 522 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 523 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 525 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 526 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert12_3
# 528 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert12_4
# 532 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert12_5
# 536 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert12_6
# 541 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 542 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 543 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert12_1:
# 545 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert12_3:
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_4:
# 529 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 530 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 531 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_5:
# 533 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 534 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 535 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1

MythicIsland_Jungle_Encounter_Swampert12_6:
# 537 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1B ;
# 538 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 15 ;
# 539 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert12_1


MythicIsland_Jungle_Encounter_Swampert13::
# 549 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 550 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 551 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 552 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SWAMPERT, 45, ITEM_SHELL_BELL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_MUD_BOMB, MOVE_MUDDY_WATER, MOVE_AVALANCHE, MOVE_ANCIENT_POWER
# 553 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	playmoncry SPECIES_SWAMPERT, CRY_MODE_ENCOUNTER
# 554 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	waitmoncry
# 555 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 556 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	dowildbattle
# 557 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 558 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 559 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 560 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 562 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	switch VAR_RESULT
# 563 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Jungle_Encounter_Swampert13_3
# 565 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Jungle_Encounter_Swampert13_4
# 569 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Jungle_Encounter_Swampert13_5
# 573 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Jungle_Encounter_Swampert13_6
# 578 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 579 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 580 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Jungle_Encounter_Swampert13_1:
# 582 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	release
	return

MythicIsland_Jungle_Encounter_Swampert13_3:
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_4:
# 566 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 567 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 568 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_5:
# 570 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 571 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 572 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert13_1

MythicIsland_Jungle_Encounter_Swampert13_6:
# 574 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	setflag FLAG_TEMP_1C ;
# 575 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	removeobject 16 ;
# 576 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Jungle_Encounter_Swampert13_1


MythicIsland_SunkenShrine_OmanyteNPC_Text_0:
# 48 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "Underwater scary.\p"
	.string "Find air when hear Tidebringer wrath.\p"
	.string "Fighting Pokémon anger Tidebringer.$"

MythicIsland_SunkenShrine_Totem_Text_0:
# 61 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "> The statue glows with a mysterious\n"
	.string "aura...$"

MythicIsland_SunkenShrine_Totem_Text_1:
# 69 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "> Being near the statue fills your\n"
	.string "Pokémon with restoration.\p"
	.string "Use the statue to teleport?$"

MythicIsland_SunkenShrine_Totem_Text_2:
# 80 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "Cancel$"

MythicIsland_SunkenShrine_Totem_Text_3:
# 82 "data/maps/MythicIsland_SunkenShrine/scripts.pory"
	.string "Island Entrance$"

MythicIsland_SunkenShrineUnderwater_MapScripts::
# 42 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MythicIsland_SunkenShrineUnderwater_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MythicIsland_SunkenShrineUnderwater_MapScripts_MAP_SCRIPT_ON_LOAD:
	return


MythicIsland_SunkenShrineUnderwater_TunnelSign::
# 48 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	msgbox MythicIsland_SunkenShrineUnderwater_TunnelSign_Text_0, MSGBOX_SIGN
	return


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1::
# 56 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 57 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 58 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 59 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 60 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 61 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 62 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 63 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 64 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 65 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 66 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 67 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 68 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_3
# 73 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_4
# 77 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_5
# 81 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_6
# 86 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 87 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 88 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1:
# 90 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_4:
# 74 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 75 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 76 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_5:
# 78 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 79 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 80 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_6:
# 82 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 83 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 84 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2::
# 94 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 95 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 96 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 97 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 98 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 99 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 100 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 101 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 102 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 103 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 104 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 105 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 106 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 108 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_3
# 111 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_4
# 115 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_5
# 119 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_6
# 124 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 125 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 126 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1:
# 128 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_4:
# 112 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 113 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 114 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_5:
# 116 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 117 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 118 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_6:
# 120 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 121 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 122 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3::
# 132 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 133 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 134 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 135 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 136 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 137 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 138 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 139 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 140 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 141 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 142 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 143 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 144 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 146 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_3
# 149 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_4
# 153 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_5
# 157 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_6
# 162 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_4
# 163 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 5
# 164 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1:
# 166 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_4:
# 150 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_4
# 151 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 5
# 152 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_5:
# 154 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_4
# 155 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 5
# 156 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_6:
# 158 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_4
# 159 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 5
# 160 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4::
# 170 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 171 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 172 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 173 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 174 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 175 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 176 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 177 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 178 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 179 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 180 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 181 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 182 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 184 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 185 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_3
# 187 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_4
# 191 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_5
# 195 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_6
# 200 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_6
# 201 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 7
# 202 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1:
# 204 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_4:
# 188 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_6
# 189 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 7
# 190 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_5:
# 192 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_6
# 193 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 7
# 194 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_6:
# 196 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_6
# 197 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 7
# 198 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5::
# 208 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 209 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 210 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 211 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 212 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 213 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 214 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 215 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 216 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 217 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 218 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 219 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 220 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 222 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 223 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_3
# 225 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_4
# 229 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_5
# 233 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_6
# 238 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_10
# 239 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 10
# 240 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1:
# 242 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_4:
# 226 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_10
# 227 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 10
# 228 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_5:
# 230 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_10
# 231 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 10
# 232 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_6:
# 234 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_10
# 235 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 10
# 236 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1::
# 254 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 255 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 256 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 257 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 258 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 259 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 260 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 261 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 262 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 263 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 264 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 265 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 266 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 268 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 269 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_3
# 271 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_4
# 275 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_5
# 279 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_6
# 284 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_2
# 285 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 15
# 286 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1:
# 288 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_4:
# 272 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_2
# 273 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 15
# 274 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_5:
# 276 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_2
# 277 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 15
# 278 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_6:
# 280 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_2
# 281 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 15
# 282 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2::
# 292 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 293 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 294 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 295 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 296 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 297 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 298 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 299 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 300 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 301 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 302 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 303 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 304 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 306 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 307 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_3
# 309 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_4
# 313 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_5
# 317 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_6
# 322 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_5
# 323 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 6
# 324 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1:
# 326 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_4:
# 310 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_5
# 311 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 6
# 312 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_5:
# 314 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_5
# 315 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 6
# 316 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_6:
# 318 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_5
# 319 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 6
# 320 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3::
# 330 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 331 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 332 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 333 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 334 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 335 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 336 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 337 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 338 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 339 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 340 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 341 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 342 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 344 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 345 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_3
# 347 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_4
# 351 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_5
# 355 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_6
# 360 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_7
# 361 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 8
# 362 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1:
# 364 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_4:
# 348 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_7
# 349 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 8
# 350 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_5:
# 352 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_7
# 353 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 8
# 354 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_6:
# 356 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_7
# 357 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 8
# 358 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4::
# 368 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 369 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 370 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 371 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 372 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 373 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 374 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 375 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 376 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 377 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 378 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 379 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 380 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 382 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 383 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_3
# 385 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_4
# 389 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_5
# 393 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_6
# 398 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_8
# 399 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 9
# 400 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1:
# 402 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_4:
# 386 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_8
# 387 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 9
# 388 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_5:
# 390 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_8
# 391 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 9
# 392 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_6:
# 394 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_8
# 395 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 9
# 396 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5::
# 406 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 407 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 408 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 409 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 410 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 411 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 412 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 413 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 414 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 415 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 416 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 417 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 418 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 420 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 421 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_3
# 423 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_4
# 427 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_5
# 431 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_6
# 436 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_9
# 437 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 11
# 438 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1:
# 440 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_4:
# 424 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_9
# 425 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 11
# 426 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_5:
# 428 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_9
# 429 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 11
# 430 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_6:
# 432 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_9
# 433 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 11
# 434 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6::
# 444 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 445 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 446 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 447 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 448 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 449 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 450 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 451 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 452 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 453 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 454 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 455 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 456 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 458 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 459 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_3
# 461 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_4
# 465 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_5
# 469 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_6
# 474 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1A
# 475 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 12
# 476 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1:
# 478 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_4:
# 462 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1A
# 463 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 12
# 464 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_5:
# 466 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1A
# 467 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 12
# 468 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_6:
# 470 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1A
# 471 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 12
# 472 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7::
# 483 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 484 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 485 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 486 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 487 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 488 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 489 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 490 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 491 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 492 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 493 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 494 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 495 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 497 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 498 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_3
# 500 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_4
# 504 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_5
# 508 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_6
# 513 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1B
# 514 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 17
# 515 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1:
# 517 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_4:
# 501 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1B
# 502 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 17
# 503 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_5:
# 505 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1B
# 506 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 17
# 507 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_6:
# 509 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1B
# 510 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 17
# 511 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1


MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth::
# 522 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 523 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 524 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 525 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 526 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_RELICANTH, 45, ITEM_HEART_SCALE, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WATERFALL, MOVE_SURF, MOVE_ROCK_TOMB, MOVE_YAWN
# 527 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_RELICANTH, CRY_MODE_ENCOUNTER
# 528 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 529 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 530 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 531 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 532 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 533 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 534 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 536 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 537 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_3
# 539 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_4
# 543 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_5
# 547 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_6
# 552 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1C
# 553 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 2
# 554 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1:
# 556 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1

MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_4:
# 540 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1C
# 541 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 2
# 542 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1

MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_5:
# 544 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1C
# 545 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 2
# 546 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1

MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_6:
# 548 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1C
# 549 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 2
# 550 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1


MythicIsland_SunkenShrineUnderwater_TunnelSign_Text_0:
# 49 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	.string "There seems to be some ancient writing\n"
	.string "on the wall...\p"
	.string "“We dedicate these flooded tunnels to\n"
	.string "the Tidebringer, who bestowed upon us\l"
	.string "the gift of pure water.”\p"
	.string "“Those who disturb his rest shall be\n"
	.string "met with torrential retribution.”$"

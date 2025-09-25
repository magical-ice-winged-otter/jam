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
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 60 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 61 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 62 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 64 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 65 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 66 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 67 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_3
# 72 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_4
# 76 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_5
# 80 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_6
# 85 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 86 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 87 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1:
# 89 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_4:
# 73 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 74 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 75 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_5:
# 77 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 78 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 79 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_6:
# 81 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 82 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 83 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn1_1


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2::
# 93 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 94 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 95 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 96 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 97 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 98 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 99 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 100 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 101 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 102 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 103 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 104 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 106 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_3
# 109 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_4
# 113 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_5
# 117 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_6
# 122 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 123 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 124 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1:
# 126 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_4:
# 110 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 111 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 112 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_5:
# 114 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 115 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 116 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_6:
# 118 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1
# 119 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 3
# 120 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn2_1


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3::
# 130 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 131 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 132 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 133 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 134 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 135 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 136 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 137 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 138 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 139 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 140 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 141 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 143 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_3
# 146 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_4
# 150 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_5
# 154 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_6
# 159 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_4
# 160 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 5
# 161 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1:
# 163 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_4:
# 147 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_4
# 148 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 5
# 149 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_5:
# 151 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_4
# 152 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 5
# 153 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_6:
# 155 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_4
# 156 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 5
# 157 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn3_1


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4::
# 167 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 168 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 169 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 170 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 171 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 172 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 173 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 174 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 175 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 176 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 177 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 178 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 180 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_3
# 183 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_4
# 187 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_5
# 191 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_6
# 196 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_6
# 197 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 7
# 198 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1:
# 200 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_4:
# 184 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_6
# 185 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 7
# 186 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_5:
# 188 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_6
# 189 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 7
# 190 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_6:
# 192 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_6
# 193 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 7
# 194 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn4_1


MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5::
# 204 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 205 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 206 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 207 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LANTURN, 45, ITEM_BRIGHT_POWDER, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
# 208 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_ENCOUNTER
# 209 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 210 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 211 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 212 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 213 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 214 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 215 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 217 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_3
# 220 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_4
# 224 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_5
# 228 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_6
# 233 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_10
# 234 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 10
# 235 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1:
# 237 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_4:
# 221 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_10
# 222 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 10
# 223 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_5:
# 225 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_10
# 226 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 10
# 227 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_6:
# 229 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_10
# 230 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 10
# 231 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Lanturn5_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1::
# 249 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 250 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 251 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 252 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 253 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 254 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 255 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 256 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 257 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 258 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 259 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 260 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 262 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 263 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_3
# 265 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_4
# 269 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_5
# 273 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_6
# 278 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_2
# 279 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 15
# 280 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1:
# 282 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_4:
# 266 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_2
# 267 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 15
# 268 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_5:
# 270 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_2
# 271 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 15
# 272 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_6:
# 274 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_2
# 275 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 15
# 276 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil1_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2::
# 286 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 287 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 288 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 289 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 290 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 291 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 292 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 293 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 294 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 295 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 296 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 297 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 299 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_3
# 302 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_4
# 306 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_5
# 310 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_6
# 315 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_5
# 316 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 6
# 317 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1:
# 319 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_4:
# 303 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_5
# 304 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 6
# 305 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_5:
# 307 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_5
# 308 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 6
# 309 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_6:
# 311 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_5
# 312 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 6
# 313 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil2_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3::
# 323 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 324 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 325 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 326 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 327 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 328 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 329 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 330 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 331 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 332 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 333 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 334 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 336 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 337 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_3
# 339 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_4
# 343 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_5
# 347 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_6
# 352 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_7
# 353 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 8
# 354 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1:
# 356 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_4:
# 340 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_7
# 341 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 8
# 342 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_5:
# 344 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_7
# 345 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 8
# 346 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_6:
# 348 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_7
# 349 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 8
# 350 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil3_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4::
# 360 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 361 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 362 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 363 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 364 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 365 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 366 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 367 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 368 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 369 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 370 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 371 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 373 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 374 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_3
# 376 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_4
# 380 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_5
# 384 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_6
# 389 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_8
# 390 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 9
# 391 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1:
# 393 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_4:
# 377 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_8
# 378 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 9
# 379 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_5:
# 381 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_8
# 382 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 9
# 383 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_6:
# 385 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_8
# 386 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 9
# 387 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil4_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5::
# 397 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 398 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 399 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 400 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 401 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 402 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 403 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 404 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 405 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 406 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 407 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 408 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 410 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 411 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_3
# 413 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_4
# 417 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_5
# 421 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_6
# 426 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_9
# 427 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 11
# 428 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1:
# 430 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_4:
# 414 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_9
# 415 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 11
# 416 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_5:
# 418 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_9
# 419 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 11
# 420 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_6:
# 422 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_9
# 423 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 11
# 424 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil5_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6::
# 434 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 435 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 436 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 437 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 438 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 439 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 440 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 441 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 442 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 443 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 444 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 445 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 447 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 448 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_3
# 450 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_4
# 454 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_5
# 458 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_6
# 463 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1A
# 464 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 12
# 465 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1:
# 467 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_4:
# 451 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1A
# 452 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 12
# 453 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_5:
# 455 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1A
# 456 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 12
# 457 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_6:
# 459 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1A
# 460 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 12
# 461 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil6_1


MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7::
# 472 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 473 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 474 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 475 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_OVERQWIL, 45, ITEM_BLACK_SLUDGE, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BARB_BARRAGE
# 476 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_OVERQWIL, CRY_MODE_ENCOUNTER
# 477 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 478 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 479 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 480 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 481 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 482 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 483 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 485 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 486 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_3
# 488 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_4
# 492 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_5
# 496 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_6
# 501 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1B
# 502 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 17
# 503 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1:
# 505 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_4:
# 489 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1B
# 490 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 17
# 491 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_5:
# 493 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1B
# 494 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 17
# 495 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1

MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_6:
# 497 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1B
# 498 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 17
# 499 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Overqwil7_1


MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth::
# 510 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 511 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 512 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 513 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_RELICANTH, 45, ITEM_HEART_SCALE, NUM_NATURES, 1, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WATERFALL, MOVE_SURF, MOVE_ROCK_TOMB, MOVE_YAWN
# 514 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	playmoncry SPECIES_RELICANTH, CRY_MODE_ENCOUNTER
# 515 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	waitmoncry
# 516 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 517 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	dowildbattle
# 518 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 519 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 520 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 521 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 523 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	switch VAR_RESULT
# 524 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_3
# 526 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_4
# 530 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_5
# 534 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_6
# 539 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1C
# 540 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 2
# 541 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1:
# 543 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	release
	return

MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_3:
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1

MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_4:
# 527 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1C
# 528 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 2
# 529 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1

MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_5:
# 531 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1C
# 532 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 2
# 533 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_1

MythicIsland_SunkenShrineUnderwater_Encounter_Relicanth_6:
# 535 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	setflag FLAG_TEMP_1C
# 536 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
	removeobject 2
# 537 "data/maps/MythicIsland_SunkenShrineUnderwater/scripts.pory"
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

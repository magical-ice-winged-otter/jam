MythicIsland_Desert_MapScripts::
	.byte 0


MythicIsland_Desert_Encounter_Krokorok::
# 22 "data/maps/MythicIsland_Desert/scripts.pory"
	lock
# 23 "data/maps/MythicIsland_Desert/scripts.pory"
	faceplayer
# 24 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 25 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 26 "data/maps/MythicIsland_Desert/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 27 "data/maps/MythicIsland_Desert/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_KROKOROK, 30, ITEM_DARK_GEM, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DIG, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_STRENGTH
# 28 "data/maps/MythicIsland_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_ENCOUNTER
# 29 "data/maps/MythicIsland_Desert/scripts.pory"
	waitmoncry
# 30 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 31 "data/maps/MythicIsland_Desert/scripts.pory"
	dowildbattle
# 32 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 33 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 34 "data/maps/MythicIsland_Desert/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 36 "data/maps/MythicIsland_Desert/scripts.pory"
	switch VAR_RESULT
# 37 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Desert_Encounter_Krokorok_3
# 39 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Desert_Encounter_Krokorok_4
# 41 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Desert_Encounter_Krokorok_5
# 45 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Desert_Encounter_Krokorok_6
# 50 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_1
# 51 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 7
# 52 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Desert_Encounter_Krokorok_1:
# 54 "data/maps/MythicIsland_Desert/scripts.pory"
	release
	return

MythicIsland_Desert_Encounter_Krokorok_3:
	goto MythicIsland_Desert_Encounter_Krokorok_1

MythicIsland_Desert_Encounter_Krokorok_4:
	goto MythicIsland_Desert_Encounter_Krokorok_1

MythicIsland_Desert_Encounter_Krokorok_5:
# 42 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_1
# 43 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 7
# 44 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Krokorok_1

MythicIsland_Desert_Encounter_Krokorok_6:
# 46 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_1
# 47 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 7
# 48 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Krokorok_1


MythicIsland_Desert_Encounter_Salandit::
# 58 "data/maps/MythicIsland_Desert/scripts.pory"
	lock
# 59 "data/maps/MythicIsland_Desert/scripts.pory"
	faceplayer
# 60 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 61 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 62 "data/maps/MythicIsland_Desert/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 63 "data/maps/MythicIsland_Desert/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_SALANDIT, 30, ITEM_POISON_GEM, NUM_NATURES, 0, TRAINER_MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_FLAME_BURST, MOVE_DRAGON_RAGE
# 64 "data/maps/MythicIsland_Desert/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_ENCOUNTER
# 65 "data/maps/MythicIsland_Desert/scripts.pory"
	waitmoncry
# 66 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 67 "data/maps/MythicIsland_Desert/scripts.pory"
	dowildbattle
# 68 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 69 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 70 "data/maps/MythicIsland_Desert/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 72 "data/maps/MythicIsland_Desert/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Desert_Encounter_Salandit_3
# 75 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Desert_Encounter_Salandit_4
# 77 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Desert_Encounter_Salandit_5
# 81 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Desert_Encounter_Salandit_6
# 86 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_3
# 87 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 9
# 88 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Desert_Encounter_Salandit_1:
# 90 "data/maps/MythicIsland_Desert/scripts.pory"
	release
	return

MythicIsland_Desert_Encounter_Salandit_3:
	goto MythicIsland_Desert_Encounter_Salandit_1

MythicIsland_Desert_Encounter_Salandit_4:
	goto MythicIsland_Desert_Encounter_Salandit_1

MythicIsland_Desert_Encounter_Salandit_5:
# 78 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_3
# 79 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 9
# 80 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Salandit_1

MythicIsland_Desert_Encounter_Salandit_6:
# 82 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_3
# 83 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 9
# 84 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Salandit_1


MythicIsland_Desert_Encounter_Lileep::
# 94 "data/maps/MythicIsland_Desert/scripts.pory"
	lock
# 95 "data/maps/MythicIsland_Desert/scripts.pory"
	faceplayer
# 96 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 97 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 98 "data/maps/MythicIsland_Desert/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 99 "data/maps/MythicIsland_Desert/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_LILEEP, 30, ITEM_JABOCA_BERRY, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY
# 100 "data/maps/MythicIsland_Desert/scripts.pory"
	playmoncry SPECIES_LILEEP, CRY_MODE_ENCOUNTER
# 101 "data/maps/MythicIsland_Desert/scripts.pory"
	waitmoncry
# 102 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 103 "data/maps/MythicIsland_Desert/scripts.pory"
	dowildbattle
# 104 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 105 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 106 "data/maps/MythicIsland_Desert/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 108 "data/maps/MythicIsland_Desert/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Desert_Encounter_Lileep_3
# 111 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Desert_Encounter_Lileep_4
# 113 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Desert_Encounter_Lileep_5
# 117 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Desert_Encounter_Lileep_6
# 122 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_4
# 123 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 13
# 124 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Desert_Encounter_Lileep_1:
# 126 "data/maps/MythicIsland_Desert/scripts.pory"
	release
	return

MythicIsland_Desert_Encounter_Lileep_3:
	goto MythicIsland_Desert_Encounter_Lileep_1

MythicIsland_Desert_Encounter_Lileep_4:
	goto MythicIsland_Desert_Encounter_Lileep_1

MythicIsland_Desert_Encounter_Lileep_5:
# 114 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_4
# 115 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 13
# 116 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Lileep_1

MythicIsland_Desert_Encounter_Lileep_6:
# 118 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_4
# 119 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 13
# 120 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Lileep_1


MythicIsland_Desert_Encounter_Tyrantrum1::
# 134 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 135 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 136 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 137 "data/maps/MythicIsland_Desert/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 138 "data/maps/MythicIsland_Desert/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_TYRANTRUM, 40, ITEM_QUICK_CLAW, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE
# 139 "data/maps/MythicIsland_Desert/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_ENCOUNTER
# 140 "data/maps/MythicIsland_Desert/scripts.pory"
	waitmoncry
# 141 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 142 "data/maps/MythicIsland_Desert/scripts.pory"
	dowildbattle
# 143 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 144 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 145 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 146 "data/maps/MythicIsland_Desert/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 148 "data/maps/MythicIsland_Desert/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Desert_Encounter_Tyrantrum1_3
# 151 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Desert_Encounter_Tyrantrum1_4
# 155 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Desert_Encounter_Tyrantrum1_5
# 159 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Desert_Encounter_Tyrantrum1_6
# 164 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_2
# 165 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 8
# 166 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Desert_Encounter_Tyrantrum1_1:
# 168 "data/maps/MythicIsland_Desert/scripts.pory"
	release
	return

MythicIsland_Desert_Encounter_Tyrantrum1_3:
	goto MythicIsland_Desert_Encounter_Tyrantrum1_1

MythicIsland_Desert_Encounter_Tyrantrum1_4:
# 152 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_2
# 153 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 8
# 154 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Tyrantrum1_1

MythicIsland_Desert_Encounter_Tyrantrum1_5:
# 156 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_2
# 157 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 8
# 158 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Tyrantrum1_1

MythicIsland_Desert_Encounter_Tyrantrum1_6:
# 160 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_2
# 161 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 8
# 162 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Tyrantrum1_1


MythicIsland_Desert_Encounter_Armaldo::
# 173 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 174 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 175 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 176 "data/maps/MythicIsland_Desert/scripts.pory"
	setwildbattle SPECIES_NONE, 0
# 177 "data/maps/MythicIsland_Desert/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_ARMALDO, 40, ITEM_LIECHI_BERRY, NUM_NATURES, 2, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_BLAST, MOVE_X_SCISSOR, MOVE_AQUA_JET, MOVE_METAL_CLAW
# 178 "data/maps/MythicIsland_Desert/scripts.pory"
	playmoncry SPECIES_ARMALDO, CRY_MODE_ENCOUNTER
# 179 "data/maps/MythicIsland_Desert/scripts.pory"
	waitmoncry
# 180 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 181 "data/maps/MythicIsland_Desert/scripts.pory"
	dowildbattle
# 182 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 183 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 184 "data/maps/MythicIsland_Desert/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 185 "data/maps/MythicIsland_Desert/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 187 "data/maps/MythicIsland_Desert/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_LOST, MythicIsland_Desert_Encounter_Armaldo_3
# 190 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_RAN, MythicIsland_Desert_Encounter_Armaldo_4
# 194 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_WON, MythicIsland_Desert_Encounter_Armaldo_5
# 198 "data/maps/MythicIsland_Desert/scripts.pory"
	case B_OUTCOME_CAUGHT, MythicIsland_Desert_Encounter_Armaldo_6
# 203 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_5
# 204 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 14
# 205 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
MythicIsland_Desert_Encounter_Armaldo_1:
# 207 "data/maps/MythicIsland_Desert/scripts.pory"
	release
	return

MythicIsland_Desert_Encounter_Armaldo_3:
	goto MythicIsland_Desert_Encounter_Armaldo_1

MythicIsland_Desert_Encounter_Armaldo_4:
# 191 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_5
# 192 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 14
# 193 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Armaldo_1

MythicIsland_Desert_Encounter_Armaldo_5:
# 195 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_5
# 196 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 14
# 197 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Armaldo_1

MythicIsland_Desert_Encounter_Armaldo_6:
# 199 "data/maps/MythicIsland_Desert/scripts.pory"
	setflag FLAG_TEMP_5
# 200 "data/maps/MythicIsland_Desert/scripts.pory"
	removeobject 14
# 201 "data/maps/MythicIsland_Desert/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MythicIsland_Desert_Encounter_Armaldo_1


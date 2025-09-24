MythicIsland_IslandEntrance_MapScripts::
	.byte 0


MythicIsland_IslandEntrance_Sign::
# 5 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_Sign_Text_0, MSGBOX_SIGN
	return


MythicIsland_IslandEntrance_EnterBoat::
# 12 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	lock
# 13 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_EnterBoat_Text_0, MSGBOX_YESNO
# 16 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_EnterBoat_2
MythicIsland_IslandEntrance_EnterBoat_1:
# 19 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	closemessage
# 20 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	release
	return

MythicIsland_IslandEntrance_EnterBoat_2:
# 17 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	warp MAP_MYTHIC_ISLAND_PLAYER_SPAWN, 3, 7
	goto MythicIsland_IslandEntrance_EnterBoat_1


MythicIsland_IslandEntrance_Totem::
# 24 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	lock
# 25 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto_if_unset FLAG_MYTHIC_ISLAND_BEACH_TOTEM_ACTIVE, MythicIsland_IslandEntrance_Totem_2
MythicIsland_IslandEntrance_Totem_1:
# 33 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_M_HEAL_BELL
# 34 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 35 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	special HealPlayerParty
# 36 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_Totem_Text_1, MSGBOX_YESNO
# 40 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_Totem_5
# 44 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_IslandEntrance_Totem_End
MythicIsland_IslandEntrance_Totem_4:
# 47 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
MythicIsland_StatueTeleport_Entrance:
# 48 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_Totem_Text_2, 0
# 49 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 50 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_IslandEntrance_Totem_End
# 55 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
MythicIsland_IslandEntrance_Totem_End:
# 56 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	closemessage
# 57 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	release
	return

MythicIsland_IslandEntrance_Totem_2:
# 26 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_M_MOONLIGHT
# 27 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 28 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_Totem_Text_0
# 31 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	setflag FLAG_MYTHIC_ISLAND_BEACH_TOTEM_ACTIVE
	goto MythicIsland_IslandEntrance_Totem_1

MythicIsland_IslandEntrance_Totem_5:
# 41 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_StatueTeleport_Entrance
	goto MythicIsland_IslandEntrance_Totem_4


MythicIsland_IslandEntrance_OmastarMerchant::
# 61 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	lock
# 62 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	faceplayer
# 63 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_0
# 67 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
MythicIsland_OmastarShop:
# 68 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_1, 0
# 69 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_2, 211
# 70 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_3, 212
# 71 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_4, 213
# 72 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_5, 214
# 73 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_6, 215
# 74 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_7, 215
# 75 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_8, 216
# 76 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_OmastarMerchant_Text_9, 217
# 77 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 78 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	case 211, MythicIsland_IslandEntrance_OmastarMerchant_3
# 106 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	case 212, MythicIsland_IslandEntrance_OmastarMerchant_4
# 133 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	case 213, MythicIsland_IslandEntrance_OmastarMerchant_5
# 160 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	case 214, MythicIsland_IslandEntrance_OmastarMerchant_6
# 187 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	case 215, MythicIsland_IslandEntrance_OmastarMerchant_7
# 214 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	case 216, MythicIsland_IslandEntrance_OmastarMerchant_8
# 241 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	case 217, MythicIsland_IslandEntrance_OmastarMerchant_9
# 269 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_OmastarShopEnd
MythicIsland_IslandEntrance_OmastarMerchant_1:
# 272 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
MythicIsland_OmastarShopEnd:
# 273 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_20
# 276 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	closemessage
# 277 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	release
	return

MythicIsland_IslandEntrance_OmastarMerchant_3:
# 80 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	checkitem ITEM_BIG_PEARL
# 81 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_OmastarMerchant_11
# 102 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_13
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_4:
# 107 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	checkitem ITEM_BIG_PEARL
# 108 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_OmastarMerchant_14
# 129 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_13
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_5:
# 134 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	checkitem ITEM_BIG_PEARL
# 135 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_OmastarMerchant_17
# 156 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_13
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_6:
# 161 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	checkitem ITEM_BIG_PEARL
# 162 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_OmastarMerchant_20
# 183 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_13
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_7:
# 188 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	checkitem ITEM_BIG_PEARL
# 189 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_OmastarMerchant_23
# 210 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_13
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_8:
# 215 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	checkitem ITEM_BIG_PEARL
# 216 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_OmastarMerchant_26
# 237 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_13
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_9:
# 242 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	checkitem ITEM_BIG_PEARL
# 243 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_OmastarMerchant_29
# 264 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_13
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_11:
# 82 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_10, MSGBOX_YESNO
# 85 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_OmastarMerchant_32
# 98 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_OmastarShop
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_14:
# 109 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_14, MSGBOX_YESNO
# 112 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_OmastarMerchant_35
# 125 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_OmastarShop
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_17:
# 136 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_15, MSGBOX_YESNO
# 139 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_OmastarMerchant_38
# 152 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_OmastarShop
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_20:
# 163 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_16, MSGBOX_YESNO
# 166 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_OmastarMerchant_41
# 179 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_OmastarShop
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_23:
# 190 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_17, MSGBOX_YESNO
# 193 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_OmastarMerchant_44
# 206 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_OmastarShop
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_26:
# 217 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_18, MSGBOX_YESNO
# 220 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_OmastarMerchant_47
# 233 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_OmastarShop
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_29:
# 244 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_19, MSGBOX_YESNO
# 247 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_OmastarMerchant_50
# 260 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	goto MythicIsland_OmastarShop
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_32:
# 86 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_SHOP
# 87 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 88 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 89 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_11
# 92 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	removeitem ITEM_BIG_PEARL
# 93 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_12
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_35:
# 113 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_SHOP
# 114 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 115 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	giveitem ITEM_WATER_STONE
# 116 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_11
# 119 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	removeitem ITEM_BIG_PEARL
# 120 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_12
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_38:
# 140 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_SHOP
# 141 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 142 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	giveitem ITEM_LEAF_STONE
# 143 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_11
# 146 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	removeitem ITEM_BIG_PEARL
# 147 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_12
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_41:
# 167 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_SHOP
# 168 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 169 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	giveitem ITEM_ICE_STONE
# 170 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_11
# 173 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	removeitem ITEM_BIG_PEARL
# 174 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_12
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_44:
# 194 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_SHOP
# 195 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 196 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	giveitem ITEM_SUN_STONE
# 197 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_11
# 200 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	removeitem ITEM_BIG_PEARL
# 201 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_12
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_47:
# 221 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_SHOP
# 222 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 223 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	giveitem ITEM_MOON_STONE
# 224 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_11
# 227 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	removeitem ITEM_BIG_PEARL
# 228 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_12
	goto MythicIsland_IslandEntrance_OmastarMerchant_1

MythicIsland_IslandEntrance_OmastarMerchant_50:
# 248 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	playse SE_SHOP
# 249 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	waitse
# 250 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	giveitem ITEM_SHINY_STONE
# 251 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_11
# 254 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	removeitem ITEM_BIG_PEARL
# 255 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	msgbox MythicIsland_IslandEntrance_OmastarMerchant_Text_12
	goto MythicIsland_IslandEntrance_OmastarMerchant_1


MythicIsland_IslandEntrance_Sign_Text_0:
# 6 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "The writing on the sign are barely\n"
	.string "legible.\p"
	.string "“...T...rn b...c...”\n"
	.string "“...Prevent your ...e...th...”$"

MythicIsland_IslandEntrance_EnterBoat_Text_0:
# 14 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Enter your boat?$"

MythicIsland_IslandEntrance_Totem_Text_0:
# 29 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "> The statue glows with a mysterious\n"
	.string "aura...$"

MythicIsland_IslandEntrance_Totem_Text_1:
# 37 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "> Being near the statue fills your\n"
	.string "Pokémon with restoration.\p"
	.string "Use the statue to teleport?$"

MythicIsland_IslandEntrance_Totem_Text_2:
# 48 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Cancel$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_0:
# 64 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Greetings, brave traveler! Care to take\n"
	.string "a look at my shiny rock collection? I'd\l"
	.string "be willing to toss one of them your way,\l"
	.string "for the price of a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY}.$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_1:
# 68 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "I'm good$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_2:
# 69 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Fire Stone$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_3:
# 70 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Water Stone$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_4:
# 71 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Thunder Stone$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_5:
# 72 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Leaf Stone$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_6:
# 73 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Ice Stone$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_7:
# 74 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Sun Stone$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_8:
# 75 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Moon Stone$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_9:
# 76 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Shiny Stone$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_10:
# 83 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Exchange a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} for a {COLOR BLUE}Fire Stone{COLOR DARK_GRAY}?$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_11:
# 90 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "> You gave 1 {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} in exchange.$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_12:
# 94 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Thanks for the swap! Is there anything\n"
	.string "else you would like?$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_13:
# 103 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Sorry, I only want a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} in\n"
	.string "exchange.$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_14:
# 110 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Exchange a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} for a {COLOR BLUE}Water Stone{COLOR DARK_GRAY}?$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_15:
# 137 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Exchange a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} for a {COLOR BLUE}Leaf Stone{COLOR DARK_GRAY}?$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_16:
# 164 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Exchange a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} for an {COLOR BLUE}Ice Stone{COLOR DARK_GRAY}?$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_17:
# 191 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Exchange a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} for a {COLOR BLUE}Sun Stone{COLOR DARK_GRAY}?$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_18:
# 218 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Exchange a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} for a {COLOR BLUE}Moon Stone{COLOR DARK_GRAY}?$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_19:
# 245 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Exchange a {COLOR BLUE}Big Pearl{COLOR DARK_GRAY} for a {COLOR BLUE}Shiny Stone{COLOR DARK_GRAY}?$"

MythicIsland_IslandEntrance_OmastarMerchant_Text_20:
# 274 "data/maps/MythicIsland_IslandEntrance/scripts.pory"
	.string "Praise Helix, my friend.$"

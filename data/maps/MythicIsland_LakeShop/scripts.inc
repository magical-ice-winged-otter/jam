MythicIsland_LakeShop_MapScripts::
	.byte 0


MythicIsland_IslandEntrance_KecleonMerchant::
# 4 "data/maps/MythicIsland_LakeShop/scripts.pory"
	lock
# 5 "data/maps/MythicIsland_LakeShop/scripts.pory"
	faceplayer
# 6 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 7 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_0, MSGBOX_YESNO
# 11 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_2
# 15 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShopEnd
MythicIsland_IslandEntrance_KecleonMerchant_1:
# 18 "data/maps/MythicIsland_LakeShop/scripts.pory"
MythicIsland_KecleonShop:
# 19 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_1
# 22 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_2, 0
# 23 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_3, 1
# 24 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_4, 2
# 25 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_5, 3
# 26 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_6, 40
# 27 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_7, 41
# 28 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_8, 42
# 29 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_9, 519
# 30 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultipush MythicIsland_IslandEntrance_KecleonMerchant_Text_10, 523
# 31 "data/maps/MythicIsland_LakeShop/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 32 "data/maps/MythicIsland_LakeShop/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/MythicIsland_LakeShop/scripts.pory"
	case 1, MythicIsland_IslandEntrance_KecleonMerchant_7
# 60 "data/maps/MythicIsland_LakeShop/scripts.pory"
	case 2, MythicIsland_IslandEntrance_KecleonMerchant_8
# 85 "data/maps/MythicIsland_LakeShop/scripts.pory"
	case 3, MythicIsland_IslandEntrance_KecleonMerchant_9
# 110 "data/maps/MythicIsland_LakeShop/scripts.pory"
	case 40, MythicIsland_IslandEntrance_KecleonMerchant_10
# 135 "data/maps/MythicIsland_LakeShop/scripts.pory"
	case 41, MythicIsland_IslandEntrance_KecleonMerchant_11
# 160 "data/maps/MythicIsland_LakeShop/scripts.pory"
	case 42, MythicIsland_IslandEntrance_KecleonMerchant_12
# 185 "data/maps/MythicIsland_LakeShop/scripts.pory"
	case 519, MythicIsland_IslandEntrance_KecleonMerchant_13
# 210 "data/maps/MythicIsland_LakeShop/scripts.pory"
	case 523, MythicIsland_IslandEntrance_KecleonMerchant_14
# 236 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShopEnd
MythicIsland_IslandEntrance_KecleonMerchant_5:
# 239 "data/maps/MythicIsland_LakeShop/scripts.pory"
MythicIsland_KecleonShopEnd:
# 240 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_26
# 243 "data/maps/MythicIsland_LakeShop/scripts.pory"
	closemessage
# 244 "data/maps/MythicIsland_LakeShop/scripts.pory"
	release
	return

MythicIsland_IslandEntrance_KecleonMerchant_2:
# 12 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_1

MythicIsland_IslandEntrance_KecleonMerchant_7:
# 34 "data/maps/MythicIsland_LakeShop/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM
# 35 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_KecleonMerchant_16
# 56 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_14
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_8:
# 61 "data/maps/MythicIsland_LakeShop/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 2
# 62 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_KecleonMerchant_20
# 80 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_17
MythicIsland_IslandEntrance_KecleonMerchant_19:
# 84 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_9:
# 86 "data/maps/MythicIsland_LakeShop/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 87 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_KecleonMerchant_24
# 105 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_20
MythicIsland_IslandEntrance_KecleonMerchant_23:
# 109 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_10:
# 111 "data/maps/MythicIsland_LakeShop/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM
# 112 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_KecleonMerchant_28
# 130 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_14
MythicIsland_IslandEntrance_KecleonMerchant_27:
# 134 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_11:
# 136 "data/maps/MythicIsland_LakeShop/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM
# 137 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_KecleonMerchant_32
# 155 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_14
MythicIsland_IslandEntrance_KecleonMerchant_31:
# 159 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_12:
# 161 "data/maps/MythicIsland_LakeShop/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 162 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_KecleonMerchant_36
# 180 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_20
MythicIsland_IslandEntrance_KecleonMerchant_35:
# 184 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_13:
# 186 "data/maps/MythicIsland_LakeShop/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM
# 187 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_KecleonMerchant_39
# 205 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_14
# 208 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_14:
# 211 "data/maps/MythicIsland_LakeShop/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM
# 212 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MythicIsland_IslandEntrance_KecleonMerchant_43
# 230 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_14
MythicIsland_IslandEntrance_KecleonMerchant_42:
# 234 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_16:
# 36 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_11, MSGBOX_YESNO
# 39 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_46
# 52 "data/maps/MythicIsland_LakeShop/scripts.pory"
	goto MythicIsland_KecleonShop
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_20:
# 63 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_15, MSGBOX_YESNO
# 66 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_49
	goto MythicIsland_IslandEntrance_KecleonMerchant_19

MythicIsland_IslandEntrance_KecleonMerchant_24:
# 88 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_18, MSGBOX_YESNO
# 91 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_51
	goto MythicIsland_IslandEntrance_KecleonMerchant_23

MythicIsland_IslandEntrance_KecleonMerchant_28:
# 113 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_21, MSGBOX_YESNO
# 116 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_53
	goto MythicIsland_IslandEntrance_KecleonMerchant_27

MythicIsland_IslandEntrance_KecleonMerchant_32:
# 138 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_22, MSGBOX_YESNO
# 141 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_55
	goto MythicIsland_IslandEntrance_KecleonMerchant_31

MythicIsland_IslandEntrance_KecleonMerchant_36:
# 163 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_23, MSGBOX_YESNO
# 166 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_57
	goto MythicIsland_IslandEntrance_KecleonMerchant_35

MythicIsland_IslandEntrance_KecleonMerchant_39:
# 188 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_24, MSGBOX_YESNO
# 191 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_59
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_43:
# 213 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_25, MSGBOX_YESNO
# 216 "data/maps/MythicIsland_LakeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MythicIsland_IslandEntrance_KecleonMerchant_61
	goto MythicIsland_IslandEntrance_KecleonMerchant_42

MythicIsland_IslandEntrance_KecleonMerchant_46:
# 40 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playse SE_SHOP
# 41 "data/maps/MythicIsland_LakeShop/scripts.pory"
	waitse
# 42 "data/maps/MythicIsland_LakeShop/scripts.pory"
	giveitem ITEM_POKE_BALL
# 43 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_12
# 46 "data/maps/MythicIsland_LakeShop/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM
# 47 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_13
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_49:
# 67 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playse SE_SHOP
# 68 "data/maps/MythicIsland_LakeShop/scripts.pory"
	waitse
# 69 "data/maps/MythicIsland_LakeShop/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 70 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_16
# 73 "data/maps/MythicIsland_LakeShop/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 2
# 74 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_13
	goto MythicIsland_IslandEntrance_KecleonMerchant_19

MythicIsland_IslandEntrance_KecleonMerchant_51:
# 92 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playse SE_SHOP
# 93 "data/maps/MythicIsland_LakeShop/scripts.pory"
	waitse
# 94 "data/maps/MythicIsland_LakeShop/scripts.pory"
	giveitem ITEM_ULTRA_BALL
# 95 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_19
# 98 "data/maps/MythicIsland_LakeShop/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 99 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_13
	goto MythicIsland_IslandEntrance_KecleonMerchant_23

MythicIsland_IslandEntrance_KecleonMerchant_53:
# 117 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playse SE_SHOP
# 118 "data/maps/MythicIsland_LakeShop/scripts.pory"
	waitse
# 119 "data/maps/MythicIsland_LakeShop/scripts.pory"
	giveitem ITEM_ENERGY_ROOT
# 120 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_12
# 123 "data/maps/MythicIsland_LakeShop/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM
# 124 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_13
	goto MythicIsland_IslandEntrance_KecleonMerchant_27

MythicIsland_IslandEntrance_KecleonMerchant_55:
# 142 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playse SE_SHOP
# 143 "data/maps/MythicIsland_LakeShop/scripts.pory"
	waitse
# 144 "data/maps/MythicIsland_LakeShop/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 145 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_12
# 148 "data/maps/MythicIsland_LakeShop/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM
# 149 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_13
	goto MythicIsland_IslandEntrance_KecleonMerchant_31

MythicIsland_IslandEntrance_KecleonMerchant_57:
# 167 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playse SE_SHOP
# 168 "data/maps/MythicIsland_LakeShop/scripts.pory"
	waitse
# 169 "data/maps/MythicIsland_LakeShop/scripts.pory"
	giveitem ITEM_REVIVAL_HERB
# 170 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_19
# 173 "data/maps/MythicIsland_LakeShop/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 174 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_13
	goto MythicIsland_IslandEntrance_KecleonMerchant_35

MythicIsland_IslandEntrance_KecleonMerchant_59:
# 192 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playse SE_SHOP
# 193 "data/maps/MythicIsland_LakeShop/scripts.pory"
	waitse
# 194 "data/maps/MythicIsland_LakeShop/scripts.pory"
	giveitem ITEM_LEPPA_BERRY
# 195 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_12
# 198 "data/maps/MythicIsland_LakeShop/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM
# 199 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_13
	goto MythicIsland_IslandEntrance_KecleonMerchant_5

MythicIsland_IslandEntrance_KecleonMerchant_61:
# 217 "data/maps/MythicIsland_LakeShop/scripts.pory"
	playse SE_SHOP
# 218 "data/maps/MythicIsland_LakeShop/scripts.pory"
	waitse
# 219 "data/maps/MythicIsland_LakeShop/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 220 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_12
# 223 "data/maps/MythicIsland_LakeShop/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM
# 224 "data/maps/MythicIsland_LakeShop/scripts.pory"
	msgbox MythicIsland_IslandEntrance_KecleonMerchant_Text_13
	goto MythicIsland_IslandEntrance_KecleonMerchant_42


MythicIsland_IslandEntrance_KecleonMerchant_Text_0:
# 8 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Have goods. Want mushrooms. Have\n"
	.string "trade?$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_1:
# 20 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "What want?$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_2:
# 22 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "I'm good$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_3:
# 23 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Pokéball$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_4:
# 24 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Great Ball$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_5:
# 25 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Ultra Ball$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_6:
# 26 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Energy Root$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_7:
# 27 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Heal Powder$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_8:
# 28 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Revival Herb$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_9:
# 29 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Leppa Berry$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_10:
# 30 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Sitrus Berry$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_11:
# 37 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want Pokéball? Want {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY} in\n"
	.string "exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_12:
# 44 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "> You gave 1 {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY} in exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_13:
# 48 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Many thank.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_14:
# 57 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY}. You no have.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_15:
# 64 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want Great Ball? Want 2 {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY}\n"
	.string "in exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_16:
# 71 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "> You gave 2 {COLOR BLUE}Tiny Mushrooms{COLOR DARK_GRAY} in\n"
	.string "exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_17:
# 81 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want 2 {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY}. You no have.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_18:
# 89 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want Ultra Ball? Want {COLOR BLUE}Big Mushroom{COLOR DARK_GRAY} in\n"
	.string "exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_19:
# 96 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "> You gave 1 {COLOR BLUE}Big Mushroom{COLOR DARK_GRAY} in exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_20:
# 106 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want {COLOR BLUE}Big Mushroom{COLOR DARK_GRAY}. You no have.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_21:
# 114 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want Energy Root? Want {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY}\n"
	.string "in exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_22:
# 139 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want Heal Powder? Want 1 {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY}\n"
	.string "in exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_23:
# 164 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want Revival Herb? Want {COLOR BLUE}Big Mushroom{COLOR DARK_GRAY} in\n"
	.string "exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_24:
# 189 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want Leppa Berry? Want 1 {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY}\n"
	.string "in exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_25:
# 214 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Want Sitrus Berry? Want {COLOR BLUE}Tiny Mushroom{COLOR DARK_GRAY}\n"
	.string "in exchange.$"

MythicIsland_IslandEntrance_KecleonMerchant_Text_26:
# 241 "data/maps/MythicIsland_LakeShop/scripts.pory"
	.string "Luck good.$"

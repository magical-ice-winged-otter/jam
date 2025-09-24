MythicIsland_PlayerSpawn_MapScripts::
	.byte 0


MythicIsland_PlayerSpawn_EventScript_Bag::
# 6 "data/maps/MythicIsland_PlayerSpawn/scripts.pory"
	playse SE_M_SAND_ATTACK
# 7 "data/maps/MythicIsland_PlayerSpawn/scripts.pory"
	waitse
# 8 "data/maps/MythicIsland_PlayerSpawn/scripts.pory"
	msgbox MythicIsland_PlayerSpawn_EventScript_Bag_Text_0
# 11 "data/maps/MythicIsland_PlayerSpawn/scripts.pory"
	goto EventScript_PC
	return


MythicIsland_PlayerSpawn_EventScript_Bag_Text_0:
# 9 "data/maps/MythicIsland_PlayerSpawn/scripts.pory"
	.string "Accessing Porta-PC 2025...$"

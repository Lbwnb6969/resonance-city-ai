extends RefCounted
const Decor=preload("res://scripts/world/city_creation_road_decoration.gd")
static func setup(demo)->void:
	demo.set_meta("road_decoration","legacy")
	preload("res://scripts/ui/city_creation_tool_option_adapter.gd").option(demo.road_panel,"RoadDecoration",Decor.NAMES,0,func(i:int)->void:demo._cancel_draft();demo.set_meta("road_decoration",Decor.IDS[i]))

extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
static func build(kind:String="bridge")->Dictionary:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	var water:=Vector2(-19,-16.75) if kind=="bridge" else Vector2(-21,-17.05) if kind=="bridge_edge" else Vector2(-24.5,-17.7)
	var ok:bool=city.add_water([water] as Array[Vector2],1.2 if kind=="wet_corner" else 2.4,"pond").ok
	ok=city.add_house(Vector2(-25,-20)).ok and ok
	var path:Array[Vector2]=[Vector2(-29,-18.25),Vector2(-25,-17.65),Vector2(-15,-16.15)]
	if kind=="bridge_edge":path[-1]=Vector2(-17,-16.45)
	ok=city.add_road(path,"brick","none").ok and ok
	if not ok:return {"ok":false,"city":city}
	var entry:Dictionary=city.house_entrances("h1")[0]
	var target:=Geometry2D.get_closest_point_to_segment(entry.at,path[0],path[-1])
	return {"ok":ok,"city":city,"entry":entry,"target":target,"access":Height.assess(city,city.houses[0],entry,target,city.roads[0])}

extends RefCounted
## Author records survive coverage; the same occupied areas drive every mask.
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
static func footprints(item:Dictionary)->Array:
	var door:=Plan.entrance(item)
	return [Plan.footprint(item,.15),Rect2(door-Vector2.ONE*.65,Vector2.ONE*1.3)]
static func covers(item:Dictionary,at:Vector2,clearance:float)->bool:
	for fp:Variant in footprints(item):
		if Plan.Frame.distance(fp,at)<=clearance:return true
	return false
static func hidden(city:RefCounted,plant:Dictionary)->bool:
	var at:=Vector2(plant.position[0],plant.position[1]);var clearance:float=city.GardenSpecies.clearance(str(plant.kind),float(plant.scale))
	return city.placed_landmarks.any(func(item):return covers(item,at,clearance))
static func affected(city:RefCounted,item:Dictionary)->Array:
	var ids:Array=[]
	for plant:Dictionary in city.plants:
		if not city.vegetation_visible(plant):continue
		if covers(item,Vector2(plant.position[0],plant.position[1]),city.GardenSpecies.clearance(str(plant.kind),float(plant.scale))):ids.append(plant.id)
	return ids

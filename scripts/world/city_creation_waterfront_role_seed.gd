extends RefCounted
## Only called inside the new-house transaction. Never migrates existing roles.
const Zones=preload("res://scripts/world/city_creation_functional_zones.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func role_for(city:RefCounted,house:Dictionary)->String:
	if str(house.get("architecture","")) not in ["venetian_loggia","peristyle"]:return ""
	var boxes:=_boxes(house)
	if not boxes.any(func(box):return Zones._water_distance(city,box)<=5.2):return ""
	for other:Dictionary in city.houses:
		if other.id==house.id or other.role!="bakery":continue
		if Zones._adjacent(boxes,_boxes(other)):return "garden_cafe"
	return "bakery"
static func _boxes(house:Dictionary)->Array:
	var result:Array=[]
	for cell:Dictionary in house.cells:
		if int(cell.level)==0 and cell.kind=="room":result.append(Frame.footprint(house,cell))
	return result

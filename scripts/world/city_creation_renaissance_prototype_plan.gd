extends RefCounted
## Only new construction seeds a context choice; loading an old work never does.
const KINDS=["venetian_loggia","belvedere_villa"]
static func active(city,house:Dictionary)->bool:
	return city.house_era(house)=="renaissance" and house.get("architecture","") in KINDS and not house.has("signature")
static func seed_new(city,house:Dictionary)->void:
	if city.house_era(house)!="renaissance" or house.has("architecture") or house.get("style","") in ["timber","round_tower"]:return
	var at:=Vector2(house.origin[0],house.origin[1])
	if float(house.get("base_y",0.))>.15:house.architecture="belvedere_villa"
	elif city.water_clearance(at)<6. or not preload("res://scripts/visual/city_creation_neoclassical.gd").corner_sides(city,house,house.cells[0]).is_empty():house.architecture="venetian_loggia"
static func roofs(house:Dictionary)->Array:
	var result:Array=[]
	for cell:Dictionary in house.cells:
		if cell.kind!="room":continue
		if house.cells.any(func(c):return c.x==cell.x and c.z==cell.z and int(c.level)>int(cell.level)):continue
		result.append({"cell":cell,"center":Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8),"base":float(house.get("base_y",0.))+(int(cell.level)+1)*1.7})
	result.sort_custom(func(a,b):return str(a.cell.id)<str(b.cell.id) if is_equal_approx(a.base,b.base) else float(a.base)>float(b.base))
	return result

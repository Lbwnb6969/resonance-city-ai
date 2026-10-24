extends RefCounted
## Non-overlapping crowns derived from exposed top rooms; never alter saved cells.
static func for_house(city: RefCounted, house: Dictionary) -> Array[Dictionary]:
	var result: Array[Dictionary] = []
	if city.house_era(house)=="pastoral" and house.get("architecture","")=="rotunda":return preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd").rotundas(house,[])
	if city.house_era(house) != "renaissance": return result
	if preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd").active(city,house):return result
	var top := {}; var used := {}
	for cell: Dictionary in house.cells:
		if cell.kind != "room": continue
		var covered := false
		for above: Dictionary in house.cells:
			if int(above.x)==int(cell.x) and int(above.z)==int(cell.z) and int(above.level)>int(cell.level): covered = true; break
		if not covered: top[Vector3i(int(cell.x),int(cell.level),int(cell.z))] = cell
	var keys: Array = top.keys()
	keys.sort_custom(func(a: Vector3i,b: Vector3i)->bool: return a.y>b.y if a.y!=b.y else a.z<b.z if a.z!=b.z else a.x<b.x)
	for key: Vector3i in keys:
		if used.has(key): continue
		var square := [key, key+Vector3i(1,0,0), key+Vector3i(0,0,1), key+Vector3i(1,0,1)]
		var complete := true
		for corner: Vector3i in square:
			if not top.has(corner) or used.has(corner): complete = false; break
		if complete:
			var ids: Array[String] = []
			for corner: Vector3i in square: ids.append(str(top[corner].id)); used[corner]=true
			result.append({"cell_ids":ids,"center":Vector2(float(house.origin[0])+key.x*1.8+.9,float(house.origin[1])+key.z*1.8+.9),"y":float(house.get("base_y",0.0))+(key.y+1)*1.7,"radius":1.70,"height":1.62})
	for key: Vector3i in keys:
		if used.has(key) or key.y<2: continue
		# A three-storey isolated room-column receives a smaller lantern dome.
		var isolated := true
		for side: Vector3i in [Vector3i.LEFT,Vector3i.RIGHT,Vector3i.FORWARD,Vector3i.BACK]:
			if top.has(key+side): isolated=false
		if not isolated: continue
		result.append({"cell_ids":[str(top[key].id)],"center":Vector2(float(house.origin[0])+key.x*1.8,float(house.origin[1])+key.z*1.8),"y":float(house.get("base_y",0.0))+(key.y+1)*1.7,"radius":.86,"height":1.12})
	return preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd").rotundas(house,result)

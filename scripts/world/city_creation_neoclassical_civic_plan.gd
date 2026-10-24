extends RefCounted
## Value-only architecture plans; safe in the existing preparation worker.
static func eligible(city, house: Dictionary) -> bool:
	return city.house_era(house) in ["pastoral","renaissance"] and str(house.get("style","classic")) not in ["timber","round_tower"] and not house.has("signature")

static func terraces(house: Dictionary, arcades: Array) -> Array[Dictionary]:
	var result: Array[Dictionary] = []
	for face: Dictionary in arcades:
		if face.source != "courtyard": continue
		var lower: Dictionary = house.cells.filter(func(c):return str(c.id)==str(face.cell_id))[0]
		for upper: Dictionary in house.cells:
			if upper.x==lower.x and upper.z==lower.z and int(upper.level)==1 and upper.kind=="room":
				result.append({"cell_id":str(upper.id),"side":face.side,"retreat":face.retreat,"source":"peristyle_terrace"})
	return result

static func rotundas(house: Dictionary, original: Array) -> Array[Dictionary]:
	var result: Array[Dictionary] = []
	var choice: String=house.get("architecture","")
	if choice in ["venetian_loggia","belvedere_villa"]:return result
	if choice in ["portico","townhouse","oriel","guildhall"]:return result
	if house.has("signature") or str(house.get("style","classic")) in ["timber","round_tower"]: result.assign(original); return result
	for plan: Dictionary in original:
		var row := plan.duplicate(true)
		row.civic="rotunda"; row.drum_y=row.y; row.y=float(row.y)+.60
		result.append(row)
	if result.is_empty() and (str(house.get("role",""))=="atelier" or choice=="rotunda"):
		var cell: Dictionary = house.cells[0]
		for room: Dictionary in house.cells:
			if room.kind=="room" and int(room.level)>int(cell.level): cell=room
		var y := float(house.get("base_y",0.))+(int(cell.level)+1)*1.7
		result.append({"cell_ids":[str(cell.id)],"center":Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8),"y":y+.60,"drum_y":y,"radius":.83,"height":.76,"civic":"rotunda"})
	return result

static func guild(city, house: Dictionary, ignore_choice: bool=false) -> Dictionary:
	if not ignore_choice and preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd").active(city,house):return {}
	if not ignore_choice and house.get("architecture","") in ["portico","townhouse","oriel","rotunda","peristyle"]:return {}
	if not eligible(city,house) or str(house.get("role","")) not in ["venue","bakery","garden_cafe"]: return {}
	var rooms: Array = house.cells.filter(func(c):return c.kind=="room")
	if rooms.size()!=house.cells.size(): return {}
	if rooms.is_empty() or rooms.any(func(c):return int(c.level)!=0): return {}
	var low := Vector2i(rooms[0].x,rooms[0].z); var high := low
	for cell: Dictionary in rooms:
		low=Vector2i(mini(low.x,int(cell.x)),mini(low.y,int(cell.z))); high=Vector2i(maxi(high.x,int(cell.x)),maxi(high.y,int(cell.z)))
	if low.x!=high.x and low.y!=high.y: return {}
	if rooms.size()!=maxi(high.x-low.x,high.y-low.y)+1: return {}
	# Shared external roof groups retain their original watertight union roof.
	for other: Dictionary in city.houses:
		if str(other.id)==str(house.id): continue
		for cell: Dictionary in rooms:
			var at := Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8)
			for room: Dictionary in other.cells:
				var delta := Vector2(other.origin[0]+room.x*1.8,other.origin[1]+room.z*1.8)-at
				if absf(float(other.get("base_y",0.))-float(house.get("base_y",0.)))<.1 and (absf(delta.x)<1.81 and absf(delta.y)<1.81): return {}
	var center := Vector2(house.origin[0],house.origin[1])+Vector2(low+high)*.9
	return {"center":center,"y":float(house.get("base_y",0.))+1.7,"span":rooms.size()*1.8,"yaw":PI*.5 if high.y>low.y else 0.,"cell":rooms[rooms.size()/2].duplicate(true)}

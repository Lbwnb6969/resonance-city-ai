extends RefCounted
## Derived geometry eligibility only; the authored rooms and role stay intact.
const Passage = preload("res://scripts/world/city_creation_passage.gd")
const UNIT := 1.8
const FLOOR := 1.7
const RADIUS := 0.90
const ROOF_RADIUS := 1.06
const ROOF_HEIGHT := 1.35
const EAVE_LIFT := 0.08
const EPS := 0.002

static func derive(houses: Array, roads: Array = []) -> Dictionary:
	var result: Dictionary = {}
	for house: Dictionary in houses:
		var plan := for_house(house,houses,roads)
		if not plan.is_empty(): result[str(house.id)] = plan
	return result

static func for_house(house: Dictionary, houses: Array, roads: Array = []) -> Dictionary:
	if str(house.get("style","classic"))!="round_tower": return {}
	var cells: Array = house.cells.duplicate(true)
	if cells.is_empty(): return {}
	cells.sort_custom(func(a: Dictionary,b: Dictionary)->bool: return int(a.level)<int(b.level))
	var column := Vector2i(int(cells[0].x),int(cells[0].z))
	for index in range(cells.size()):
		var cell: Dictionary = cells[index]
		if str(cell.kind)!="room" or int(cell.level)!=index or Vector2i(int(cell.x),int(cell.z))!=column: return {}
	if not Passage.for_house(house,roads).is_empty(): return {}
	var center := Vector2(float(house.origin[0]),float(house.origin[1]))+Vector2(column)*UNIT
	var base_y := float(house.get("base_y",0.0))
	var roof_base_y := base_y+cells.size()*FLOOR+EAVE_LIFT
	var roof_top_y := roof_base_y+ROOF_HEIGHT
	for other: Dictionary in houses:
		if str(other.id)==str(house.id): continue
		for cell: Dictionary in other.cells:
			var at := Vector2(float(other.origin[0])+int(cell.x)*UNIT,float(other.origin[1])+int(cell.z)*UNIT)
			var bottom := float(other.get("base_y",0.0))+int(cell.level)*FLOOR
			# Include the other cell's real upper roof envelope. Lower rooms and
			# terraces remain blockers only where their world heights overlap.
			var top := bottom+(0.30 if str(cell.kind)=="terrace" else FLOOR+0.65)
			var nearest := Vector2(clampf(center.x,at.x-0.9,at.x+0.9),clampf(center.y,at.y-0.9,at.y+0.9))
			var gap := center.distance_to(nearest)
			if top>base_y+EPS and bottom<roof_base_y-EPS and gap<=RADIUS+EPS: return {}
			if top>roof_base_y-EPS and bottom<roof_top_y+EPS:
				# The curved cone is widest at the lowest overlapping height;
				# .03 covers the visual helper's slight curl at its eave.
				var t := clampf((maxf(bottom,roof_base_y)-roof_base_y)/ROOF_HEIGHT,0.0,1.0)
				var reach := ROOF_RADIUS*pow(1.0-t,0.78)+0.03
				if gap<=reach+EPS: return {}
	return {"house_id":str(house.id),"center":center,"base_y":base_y,"top_level":int(cells[-1].level),
		"top_cell_id":str(cells[-1].id),"cells":cells,"radius":RADIUS,"roof_radius":ROOF_RADIUS,
		"roof_base_y":roof_base_y,"roof_top_y":roof_top_y,"roof_height":ROOF_HEIGHT,
		"signature":hash([house.id,center,base_y,cells,roof_base_y,roof_top_y])}

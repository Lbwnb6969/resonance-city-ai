extends RefCounted
## One derived, sky-open glasshouse per house. No authored field is added.
const UNIT := 1.8
const FLOOR := 1.7
const MAX_CELLS := 4
const ROOF_HIGH := 1.81
const ROOF_OVERHANG := 0.12
const EPS := 0.002

static func for_house(city: RefCounted,house: Dictionary)->Dictionary:
	var terrace := choose(city.houses,house)
	if city.house_era(house)!="clockwork" or not terrace.is_empty():return terrace
	# A clear exposed row can carry a glazed winter garden above its mansard.
	var tops := {}
	for cell: Dictionary in house.cells:
		if cell.kind!="room" or _covered(house,cell):continue
		tops[Vector3i(int(cell.x),int(cell.level),int(cell.z))]=cell
	var keys := tops.keys();keys.sort()
	for key: Vector3i in keys:
		for axis: String in ["x","z"]:
			var step := Vector3i.RIGHT if axis=="x" else Vector3i.BACK
			var cells: Array=[tops[key]]
			for i in range(1,MAX_CELLS):
				if not tops.has(key+step*i):break
				cells.append(tops[key+step*i])
			if cells.size()<2:continue
			var ids: Array[String]=[];var bounds:=Rect2(_center(house,cells[0])-Vector2.ONE*.9,Vector2.ONE*UNIT)
			for cell: Dictionary in cells:
				ids.append(str(cell.id));bounds=bounds.merge(Rect2(_center(house,cell)-Vector2.ONE*.9,Vector2.ONE*UNIT))
			var y:=float(house.get("base_y",0.))+(key.y+1)*FLOOR+1.0
			if not _clear(city.houses,house,ids,bounds.grow(-.1),y):continue
			return {"cells":cells,"cell_ids":ids,"center":bounds.get_center(),"bounds":bounds,"axis":axis,"level":key.y+1,"base_y":y,"roof_top_y":y+ROOF_HIGH,"on_roof":true,"signature":hash([ids,bounds,y,"clockwork"])}
	return {}

static func choose(houses: Array, house: Dictionary) -> Dictionary:
	var terraces: Dictionary = {}
	for cell: Dictionary in house.cells:
		if str(cell.kind)=="terrace" and int(cell.level)>0:
			terraces[Vector3i(int(cell.x),int(cell.level),int(cell.z))] = cell
	var candidates: Array[Dictionary] = []
	for key: Vector3i in terraces:
		for axis: String in ["x","z"]:
			var step := Vector3i(1,0,0) if axis=="x" else Vector3i(0,0,1)
			var cells: Array = [terraces[key]]
			for offset in range(1,MAX_CELLS):
				if not terraces.has(key+step*offset): break
				cells.append(terraces[key+step*offset])
				candidates.append({"cells":cells.duplicate(),"axis":axis,"key":key})
	# Longest first, then lowest floor, X before Z, then world-grid order.
	# Every sub-run is retained: a blocked first pair cannot hide an open tail.
	candidates.sort_custom(func(a: Dictionary,b: Dictionary)->bool:
		if a.cells.size()!=b.cells.size(): return a.cells.size()>b.cells.size()
		if a.key.y!=b.key.y: return a.key.y<b.key.y
		if a.axis!=b.axis: return a.axis=="x"
		if a.key.x!=b.key.x: return a.key.x<b.key.x
		return a.key.z<b.key.z)
	for candidate: Dictionary in candidates:
		var bounds := Rect2()
		var ids: Array[String] = []
		for cell: Dictionary in candidate.cells:
			var at := _center(house,cell)
			var footprint := Rect2(at-Vector2.ONE*0.9,Vector2.ONE*UNIT)
			bounds = footprint if ids.is_empty() else bounds.merge(footprint)
			ids.append(str(cell.id))
		var floor_y := float(house.get("base_y",0.0))+int(candidate.key.y)*FLOOR
		# These margins are the real frame/glass extent within the terrace row.
		var inner := bounds.grow(-0.10)
		if not _clear(houses,house,ids,inner,floor_y): continue
		var cells: Array = candidate.cells.duplicate(true)
		var geometry: Array = []
		for cell: Dictionary in cells:
			cell.x = int(cell.x)
			cell.z = int(cell.z)
			cell.level = int(cell.level)
			# Dictionary hash depends on insertion order. JSON sorts keys, so
			# hash fixed scalar rows instead of the authored cell dictionaries.
			geometry.append([str(cell.id),int(cell.x),int(cell.z),int(cell.level),str(cell.kind)])
		return {"cells":cells,"cell_ids":ids,"center":bounds.get_center(),"bounds":bounds,
			"axis":candidate.axis,"level":int(candidate.key.y),"base_y":floor_y,
			"roof_top_y":floor_y+ROOF_HIGH,"signature":hash([str(house.id),ids,geometry,bounds,str(candidate.axis),floor_y])}
	return {}

static func _clear(houses: Array, house: Dictionary, ids: Array[String], bounds: Rect2, floor_y: float) -> bool:
	for other: Dictionary in houses:
		for cell: Dictionary in other.cells:
			if str(other.id)==str(house.id) and str(cell.id) in ids: continue
			var bottom := float(other.get("base_y",0.0))+int(cell.level)*FLOOR
			var room := str(cell.kind)=="room"
			var top := bottom+(FLOOR if room else (1.52 if int(cell.level)>0 else 0.30))
			var overhang := 0.0
			if room and not _covered(other,cell):
				# Exposed gables/crowns are solid neighbors too, including a room
				# one floor lower whose eave reaches above the glasshouse floor.
				# The ordinary crown reaches 2.105m above its supporting room;
				# lower union roofs stay within the capped 1.20m rise envelope.
				top += 2.11 if int(cell.level)>=2 else (1.44 if str(other.get("style","classic"))=="round_tower" else 1.25)
				overhang = 0.16 if str(other.get("style","classic"))=="round_tower" else ROOF_OVERHANG
			if top<=floor_y+0.19+EPS or bottom>=floor_y+ROOF_HIGH-EPS: continue
			var at := _center(other,cell)
			var footprint := Rect2(at-Vector2.ONE*(0.9+overhang),Vector2.ONE*(UNIT+overhang*2.0))
			if footprint.intersects(bounds): return false
	return true

static func _covered(house: Dictionary, cell: Dictionary) -> bool:
	for above: Dictionary in house.cells:
		if int(above.x)==int(cell.x) and int(above.z)==int(cell.z) and int(above.level)==int(cell.level)+1: return true
	return false

static func _center(house: Dictionary, cell: Dictionary) -> Vector2:
	return Vector2(float(house.origin[0])+int(cell.x)*UNIT,float(house.origin[1])+int(cell.z)*UNIT)

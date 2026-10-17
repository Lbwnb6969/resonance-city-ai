extends RefCounted
## A passage is derived from a genuine street crossing, never a saved room flag.
const UNIT := 1.8
const HALF := 0.9
const PIER := 0.08
const MARGIN := 0.04

static func center(house: Dictionary, cell: Dictionary) -> Vector2:
	return Vector2(float(house.origin[0])+int(cell.x)*UNIT,float(house.origin[1])+int(cell.z)*UNIT)

static func clip(a: Vector2,b: Vector2,rect: Rect2) -> Array[Vector2]:
	var lo := 0.0
	var hi := 1.0
	var delta := b-a
	for component in range(2):
		if absf(delta[component])<0.000001:
			if a[component]<rect.position[component] or a[component]>rect.end[component]: return []
			continue
		var first := (rect.position[component]-a[component])/delta[component]
		var last := (rect.end[component]-a[component])/delta[component]
		lo=maxf(lo,minf(first,last))
		hi=minf(hi,maxf(first,last))
		if lo>hi: return []
	return [a+delta*lo,a+delta*hi]

static func for_cell(house: Dictionary,cell: Dictionary,points: Array,width: float,road_id: String="") -> Dictionary:
	if int(cell.level)!=0 or str(cell.kind)!="room" or points.size()<2: return {}
	var origin := center(house,cell)
	var room := Rect2(origin-Vector2.ONE*HALF,Vector2.ONE*UNIT)
	# An unfinished street inside a room cannot manufacture an archway.
	for index: int in [0,points.size()-1]:
		if room.grow(-0.003).has_point(Vector2(points[index][0],points[index][1])): return {}
	var runs: Array[Array]=[]
	var current: Array[Vector2]=[]
	var near: Array[Vector2]=[]
	for index in range(1,points.size()):
		var a := Vector2(points[index-1][0],points[index-1][1])
		var b := Vector2(points[index][0],points[index][1])
		var section := clip(a,b,room)
		if section.is_empty():
			if not current.is_empty(): runs.append(current)
			current=[]
		else:
			if not current.is_empty() and current[-1].distance_to(section[0])>0.0001:
				runs.append(current)
				current=[]
			current.append_array(section)
		near.append_array(clip(a,b,room.grow(width*0.5-MARGIN)))
	if not current.is_empty(): runs.append(current)
	if runs.is_empty(): return {}
	for axis: Vector2i in [Vector2i(1,0),Vector2i(0,1)]:
		var direction := Vector2(axis)
		var lateral := Vector2(-axis.y,axis.x) if axis.x==1 else Vector2(1,0)
		var crossing := false
		for run: Array in runs:
			var along_min := INF
			var along_max := -INF
			for at: Vector2 in run:
				var along := (at-origin).dot(direction)
				along_min=minf(along_min,along)
				along_max=maxf(along_max,along)
			if along_min<=-HALF+0.001 and along_max>=HALF-0.001: crossing=true
		if not crossing: continue
		var low := INF
		var high := -INF
		for at: Vector2 in near:
			var side := (at-origin).dot(lateral)
			low=minf(low,side-width*0.5-MARGIN)
			high=maxf(high,side+width*0.5+MARGIN)
		if low < -HALF+PIER or high > HALF-PIER: continue
		return {"cell_id":str(cell.get("id","")),"axis":axis,"offset":(low+high)*0.5,"half_width":(high-low)*0.5,"center":origin,"road_id":road_id,"sides":[axis,-axis]}
	return {}

static func for_house(house: Dictionary,roads: Array) -> Array[Dictionary]:
	var result: Array[Dictionary]=[]
	for cell: Dictionary in house.cells:
		for road: Dictionary in roads:
			var record := for_cell(house,cell,road.points,float(road.width),str(road.get("id","")))
			if record.is_empty(): continue
			var merged := false
			for existing: Dictionary in result:
				if existing.cell_id!=record.cell_id or existing.axis!=record.axis: continue
				var low := minf(existing.offset-existing.half_width,record.offset-record.half_width)
				var high := maxf(existing.offset+existing.half_width,record.offset+record.half_width)
				existing.offset=(low+high)*0.5
				existing.half_width=(high-low)*0.5
				merged=true
				break
			if not merged: result.append(record)
	return result

static func segment_blocked(house: Dictionary,cell: Dictionary,a: Vector2,b: Vector2,passages: Array[Dictionary]) -> bool:
	var origin := center(house,cell)
	var inside := clip(a,b,Rect2(origin-Vector2.ONE*0.89,Vector2.ONE*1.78))
	if inside.is_empty(): return false
	# Check the whole clipped leg, including crossings between perpendicular holes.
	for step in range(ceili(inside[0].distance_to(inside[1])/0.04)+1):
		var at := inside[0].move_toward(inside[1],float(step)*0.04)-origin
		var open := false
		for passage: Dictionary in passages:
			if passage.cell_id!=str(cell.get("id","")): continue
			var lateral := at.y if passage.axis.x==1 else at.x
			if absf(lateral-float(passage.offset))<=float(passage.half_width)-0.10: open=true
		if not open: return true
	return false

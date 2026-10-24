extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Geometry-only musical crossing sites; observations come exclusively from walking.
const BIN := 4.0
const WET_SAMPLE := 0.15
const SIDE_MARGIN := 0.06
const COOLDOWN := 6.0
const Stepping = preload("res://scripts/world/city_creation_stepping_plan.gd")
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
const StairKeys=preload("res://scripts/world/city_creation_stair_keys.gd")
var sites: Dictionary = {}
var rebuilds := 0
var _signature: Array = []
var _bins: Dictionary = {}
var _actors: Dictionary = {}

func clear_observations() -> void:
	_actors.clear()

func adopt_prepared(source: RefCounted) -> bool:
	if source._signature==_signature: return false
	# Worker data is immutable after join. Replacing these published containers
	# keeps the existing sensor instance and the same sync rebuild semantics.
	sites=source.sites
	_bins=source._bins
	_signature=source._signature
	clear_observations()
	rebuilds+=1
	return true

func sync(city: RefCounted) -> void:
	var signature: Array = []
	signature.append(city.biome_seed.duplicate())
	signature.append(city.era_modifiers.duplicate())
	signature.append(preload("res://scripts/world/city_creation_tradition_rules.gd").stair_rise(city))
	var tea_enabled:bool="arcade_market" in city.era_modifiers
	signature.append(city.terrain_strokes.duplicate(true))
	for road: Dictionary in city.roads:
		signature.append([str(road.id),road.points.duplicate(true),float(road.width),str(road.get("style","path"))])
	for water: Dictionary in city.waters:
		signature.append([str(water.id),str(water.kind),water.points.duplicate(true),float(water.width)])
	for house: Dictionary in city.houses:
		var cells: Array = []
		for cell: Dictionary in house.cells:
			if int(cell.level)==0 or tea_enabled: cells.append([str(cell.id),int(cell.x),int(cell.z),int(cell.level),str(cell.kind)])
		signature.append([str(house.id),house.origin.duplicate(),float(house.get("base_y",0.0)),(city.house_era(house) if tea_enabled else ""),(str(house.get("style","classic")) if tea_enabled else ""),cells])
	if signature==_signature: return
	_signature=signature
	rebuilds+=1
	sites.clear()
	_bins.clear()
	clear_observations()
	for road: Dictionary in city.roads:
		if StairKeys.enabled(city):
			for key:Dictionary in StairKeys.layout(road,city.road_profile(road),StairKeys.Palette.for_city(city),preload("res://scripts/world/city_creation_tradition_rules.gd").stair_rise(city)).sites:
				_add_site(key.id,"stair",str(road.id),str(road.id),key.at,key.axis,key.width*.5-.08)
				sites[key.id].merge({"height":key.height,"depth":key.depth,"rank":key.rank,"degree":key.degree,"width":key.width})
		var stepping: Array = Stepping.for_road(city,road)
		_bridge_sites(city,road,stepping)
		for run: Dictionary in stepping:
			for index in range(run.stones.size()):
				var stone: Dictionary = run.stones[index]
				_add_site(str(run.id)+"/stone/"+str(index),"stepping",str(road.id),str(road.id),Vector2(stone.at),Vector2(stone.axis),float(stone.get("radius_cross",0.38))-0.04)
	for house: Dictionary in city.houses:
		# State's cache is derived by Passage.for_house and was already prepared
		# by the published network; do not repeat the house-by-road clipping.
		for passage: Dictionary in city.house_passages(str(house.id)):
			var axis:=Frame.direction(house,Vector2(passage.axis))
			var lateral:=Frame.direction(house,Vector2(0,1) if passage.axis.x==1 else Vector2(1,0))
			var at: Vector2 = passage.center+lateral*float(passage.offset)
			_add_site("%s/arch/%s/%d" % [str(house.id),str(passage.cell_id),int(axis.x)],"arch",str(house.id),str(passage.road_id),at,axis,float(passage.half_width)-0.10)

	if "arcade_market" in city.era_modifiers:
		for house:Dictionary in city.houses:_arcade_tea_sites(city,house)

func _arcade_tea_sites(city:RefCounted,house:Dictionary)->void:
	for face:Dictionary in Arcade.for_house(city,house):
		var cell:Dictionary={}
		for row:Dictionary in house.cells:
			if row.id==face.cell_id:cell=row;break
		var normal:=Frame.direction(house,Vector2(face.side))
		var tangent:=Vector2(normal.y,-normal.x)
		var wall:=Frame.center(house,cell)+normal*.9
		var best:=INF
		var point:=Vector2.ZERO
		var selected:Dictionary={}
		for road:Dictionary in city.roads:
			for index in range(1,road.points.size()):
				var a:=Vector2(road.points[index-1][0],road.points[index-1][1])
				var b:=Vector2(road.points[index][0],road.points[index][1])
				if absf((b-a).normalized().dot(tangent))<.9:continue
				var nearest:=Geometry2D.get_closest_point_to_segment(wall,a,b)
				var delta:=nearest-wall
				if delta.dot(normal)<0. or delta.dot(normal)>float(road.width)*.5+.8 or absf(delta.dot(tangent))>.1:continue
				if delta.length_squared()<best:best=delta.length_squared();point=nearest;selected=road
		if not selected.is_empty():
			_add_site("%s/tea/%s/%d/%d"%[house.id,cell.id,int(normal.x),int(normal.y)],"arcade_tea",str(house.id),str(selected.id),point,tangent,float(selected.width)*.5)

func site(id: String) -> Dictionary:
	return sites.get(id,{})

func point_stair(at:Vector2)->Dictionary:
	for id:String in _bins.get(Vector2i(floori(at.x/BIN),floori(at.y/BIN)),[]):
		var row:Dictionary=sites[id]
		if row.kind!="stair":continue
		var delta:Vector2=at-Vector2(row.at)
		if absf(delta.dot(row.axis))<=float(row.depth) and absf(delta.cross(row.axis))<=float(row.half_width):return row
	return {}

func _add_site(id: String, kind: String, owner: String, road: String, at: Vector2, axis: Vector2, half_width: float) -> void:
	if half_width<=0.0: return
	sites[id]={"id":id,"kind":kind,"owner_id":owner,"road_id":road,"at":at,"axis":axis,"half_width":half_width}
	var radius := half_width+SIDE_MARGIN
	var low := Vector2i(floori((at.x-radius)/BIN),floori((at.y-radius)/BIN))
	var high := Vector2i(floori((at.x+radius)/BIN),floori((at.y+radius)/BIN))
	for x in range(low.x,high.x+1):
		for z in range(low.y,high.y+1):
			var bucket := Vector2i(x,z)
			if not _bins.has(bucket): _bins[bucket]=[]
			_bins[bucket].append(id)

func _bridge_sites(city: RefCounted, road: Dictionary, stepping: Array = []) -> void:
	var run: Array[Vector2] = []
	var ordinal := 0
	for index in range(1,road.points.size()):
		var a := Vector2(road.points[index-1][0],road.points[index-1][1])
		var b := Vector2(road.points[index][0],road.points[index][1])
		var count := maxi(1,ceili(a.distance_to(b)/WET_SAMPLE))
		var previous := a
		var was_wet: bool = city.water_clearance(a)<0.0
		if was_wet and run.is_empty(): run.append(a)
		for sample in range(1,count+1):
			var point := a.lerp(b,float(sample)/count)
			var wet: bool = city.water_clearance(point)<0.0
			if wet!=was_wet:
				var shore := _shore(city,previous,point,was_wet)
				if wet:
					run=[shore]
				else:
					run.append(shore)
					_add_bridge_run(road,run,ordinal,stepping)
					ordinal+=1
					run=[]
			if wet: run.append(point)
			previous=point
			was_wet=wet
	if not run.is_empty(): _add_bridge_run(road,run,ordinal,stepping)

func _shore(city: RefCounted, a: Vector2, b: Vector2, wet_a: bool) -> Vector2:
	for step in range(12):
		var midpoint := (a+b)*0.5
		if (city.water_clearance(midpoint)<0.0)==wet_a: a=midpoint
		else: b=midpoint
	return (a+b)*0.5

func _add_bridge_run(road: Dictionary, run: Array[Vector2], ordinal: int, stepping: Array = []) -> void:
	var length := 0.0
	for index in range(1,run.size()): length+=run[index-1].distance_to(run[index])
	if length<0.04: return
	var remaining := length*0.5
	for index in range(1,run.size()):
		var segment := run[index]-run[index-1]
		var distance := segment.length()
		if distance<=0.000001: continue
		if remaining<=distance:
			var at := run[index-1]+segment*(remaining/distance)
			for crossing: Dictionary in stepping:
				for stone_index in range(crossing.stones.size()-1):
					var a: Vector2 = crossing.stones[stone_index].at
					var b: Vector2 = crossing.stones[stone_index+1].at
					if Geometry2D.get_closest_point_to_segment(at,a,b).distance_to(at)<0.03: return
			_add_site("%s/bridge/%d" % [str(road.id),ordinal],"bridge",str(road.id),str(road.id),at,segment/distance,float(road.width)*0.5)
			return
		remaining-=distance

func has_sites_between(from:Vector2,to:Vector2)->bool:
	var low:=Vector2i((from.min(to)/BIN).floor());var high:=Vector2i((from.max(to)/BIN).floor())
	for x in range(low.x,high.x+1):
		for z in range(low.y,high.y+1):
			if _bins.has(Vector2i(x,z)):return true
	return false

func next_boundary_fraction(from: Vector2,to: Vector2) -> float:
	var low:=Vector2i((from.min(to)/BIN).floor());var high:=Vector2i((from.max(to)/BIN).floor())
	var candidates: Dictionary={}
	for x in range(low.x,high.x+1):
		for z in range(low.y,high.y+1):
			for id: String in _bins.get(Vector2i(x,z),[]):candidates[id]=true
	var next:=1.;var delta:=to-from
	for id: String in candidates:
		var site: Dictionary=sites[id];var axis: Vector2=site.axis
		var start: float=(from-Vector2(site.at)).dot(axis);var change:=delta.dot(axis)
		if absf(change)<.00000001:continue
		var cross_ratio: float=-start/change
		var crossing:=from+delta*cross_ratio
		if absf((crossing-Vector2(site.at)).cross(axis))>float(site.half_width):continue
		# Observe just beyond each side threshold. The original observer still
		# owns side tracking, crossing validation, cooldown and exact-once cues.
		for side: float in [-SIDE_MARGIN-.00001,SIDE_MARGIN+.00001]:
			var ratio: float=(side-start)/change
			if ratio>.0000001 and ratio<next:next=ratio
	return next

func observe(actor: String, from: Vector2, to: Vector2, clock_sec: float) -> Array[Dictionary]:
	var events: Array[Dictionary] = []
	if from.distance_squared_to(to)<0.0000000001: return events
	var low := Vector2i(floori(minf(from.x,to.x)/BIN),floori(minf(from.y,to.y)/BIN))
	var high := Vector2i(floori(maxf(from.x,to.x)/BIN),floori(maxf(from.y,to.y)/BIN))
	if low==high and not _bins.has(low):return events
	var candidates := {}
	for x in range(low.x,high.x+1):
		for z in range(low.y,high.y+1):
			for id: String in _bins.get(Vector2i(x,z),[]): candidates[id]=true
	if not _actors.has(actor): _actors[actor]={}
	var tracker: Dictionary = _actors[actor]
	for id: String in candidates:
		var row: Dictionary = sites[id]
		var axis: Vector2 = row.axis
		var d0 := (from-Vector2(row.at)).dot(axis)
		var d1 := (to-Vector2(row.at)).dot(axis)
		var record: Dictionary = tracker.get(id,{"side":int(signf(d0)),"crossed":false,"last":-INF})
		# A silent reposition is never bridged to the previous observed point.
		if absf(d0)>=SIDE_MARGIN and int(signf(d0))!=int(record.side):
			record.side=int(signf(d0))
			record.crossed=false
		if int(record.side)==0 and absf(d1)>=SIDE_MARGIN:
			record.side=int(signf(d1))
		if d0*d1<=0.0 and absf(d1-d0)>0.000001:
			var crossing := from.lerp(to,clampf(-d0/(d1-d0),0.0,1.0))
			if absf((crossing-Vector2(row.at)).cross(axis))<=float(row.half_width): record.crossed=true
		if absf(d1)>=SIDE_MARGIN and int(signf(d1))!=int(record.side):
			if bool(record.crossed) and clock_sec-float(record.last)>=COOLDOWN:
				var event := row.duplicate()
				event.actor_id=actor
				events.append(event)
				record.last=clock_sec
			record.side=int(signf(d1))
			record.crossed=false
		if absf(d1)>=SIDE_MARGIN: record.crossed=false
		tracker[id]=record
	return events

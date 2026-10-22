extends RefCounted
## One immutable height profile for road geometry, tread collisions and walkers.
## Reads only the unprotected grid. It never asks State for ground/street height.
const SAMPLE_STEP := 0.35
const MAX_GRADE := 0.22
const STEP_HEIGHT := 0.12
const BIN_SIZE := 2.0
const QUERY_BIN_SIZE := .5
const Bridges := preload("res://scripts/world/city_creation_bridge_plan.gd")
const Junctions := preload("res://scripts/world/city_creation_junctions.gd")
const SteppingPlan := preload("res://scripts/world/city_creation_stepping_plan.gd")
const Roundabouts := preload("res://scripts/world/city_creation_roundabouts.gd")
var profiles: Dictionary = {}
var _bins: Dictionary = {}
var _flat_bins: Dictionary = {}
var _query_bins: Dictionary = {}
var _constant_bins: Dictionary = {}
var _query_inputs: Dictionary = {}
var _signature: Variant = null
var _input_signatures:Dictionary={}
var stats:Dictionary={}

func copy_cache_from(source: RefCounted) -> void:
	# Published profiles are immutable; a new prepare replaces dictionaries.
	# Every published container is read-only. prepare() replaces the maps and
	# only _build() creates new sample records, so workers may share old values.
	profiles = source.profiles
	_bins = source._bins
	_flat_bins = source._flat_bins
	_query_bins = source._query_bins
	_constant_bins = source._constant_bins
	_query_inputs = source._query_inputs
	_input_signatures=source._input_signatures
	_signature = source._signature

func prepare(city: RefCounted) -> void:
	var houses:Array=preload("res://scripts/world/city_creation_frontage.gd").ground_geometry(city.houses)
	var signature := hash([city._ground_terrain.raw_generation,city.roads,houses,Bridges.era_signature(city)])
	if signature==_signature:stats={"rebuilt":0,"reused":profiles.size()};return
	_signature = signature
	var previous:=profiles;var previous_inputs:=_input_signatures
	var old_queries:=_query_bins;var old_constants:=_constant_bins;var old_query_inputs:=_query_inputs
	profiles={};_bins={};_flat_bins={};_query_bins={};_constant_bins={};_query_inputs={};_input_signatures={};stats={"rebuilt":0,"reused":0}
	var doors: Array = []
	for house: Dictionary in city.houses:
		for entry: Dictionary in city.house_entrances(str(house.id)):
			doors.append({"house_id":str(house.id),"at":entry.at,"y":float(house.get("base_y",0.0))+0.055,"road_id":str(entry.get("road_id","")),"active":bool(entry.active)})
	var junctions := _junctions(city)
	var marker_inputs:Array=[]
	for marker:Dictionary in Roundabouts.all(city.roads):marker_inputs.append([marker,city._ground_terrain.raw_height_at(marker.center)])
	var common:=hash([doors,city.waters,Bridges.era_signature(city),marker_inputs])
	for road: Dictionary in city.roads:
		var id:=str(road.id);var profile_bounds:=Rect2(Vector2(road.points[0][0],road.points[0][1]),Vector2.ZERO)
		for point:Array in road.points:profile_bounds=profile_bounds.expand(Vector2(point[0],point[1]))
		var input:=hash([road,common,junctions.get(id,[]),city._ground_terrain.raw_region_signature(profile_bounds.grow(float(road.width)+2.))])
		var reuse:bool=previous.has(id) and previous_inputs.get(id)!=null and previous_inputs[id]==input
		var profile:Dictionary=previous[id] if reuse else _build(city,road,doors,junctions.get(id,[]))
		stats["reused" if reuse else "rebuilt"]+=1
		profiles[id] = profile;_input_signatures[id]=input
		var samples: Array = profile.samples
		for i in range(samples.size()-1):
			var a: Vector2 = samples[i].xz
			var b: Vector2 = samples[i+1].xz
			var radius := float(road.width)*0.5+0.05
			var bounds := Rect2(a,Vector2.ZERO).expand(b).grow(radius)
			var record := {"road":str(road.id),"index":i,"a":a,"b":b,"radius":radius}
			# Arc position stays inside this one sample span. Keep original
			# stepping-before-tread order, including both endpoint tolerances.
			record.stepping_runs=[];record.treads=[]
			var s0:float=samples[i].distance;var s1:float=samples[i+1].distance
			for stepping:Dictionary in profile.stepping_runs:
				if float(stepping.end)>=s0-.00001 and float(stepping.start)<=s1+.00001:record.stepping_runs.append(stepping)
			for tread:Dictionary in profile.treads:
				if float(tread.s1)>=s0-.000001 and float(tread.s0)<=s1+.000001:record.treads.append(tread)
			for z in range(floori(bounds.position.y/BIN_SIZE),floori(bounds.end.y/BIN_SIZE)+1):
				for x in range(floori(bounds.position.x/BIN_SIZE),floori(bounds.end.x/BIN_SIZE)+1):
					var key := Vector2i(x,z)
					if not _bins.has(key): _bins[key] = []
					_bins[key].append(record)

	_build_flat_bins()
	var query_started:=Time.get_ticks_usec()
	_build_query_bins(old_queries,old_constants,old_query_inputs)
	stats.query_index_ms=float(Time.get_ticks_usec()-query_started)/1000.
	stats.query_tiles=_query_bins.size();stats.constant_tiles=_constant_bins.size()

func _build_query_bins(previous:Dictionary,constants:Dictionary,inputs:Dictionary)->void:
	# Retain candidate order and the exact nearest-segment/tread solver. Smaller
	# read-only tiles remove unrelated strip samples before a walker queries.
	stats.query_reused=0;stats.query_rebuilt=0
	for key:Vector2i in _bins:
		var signature:=hash([_bins[key],_flat_bins.get(key,{})]);_query_inputs[key]=signature
		if inputs.has(key) and inputs[key]==signature:
			for z in range(4):
				for x in range(4):
					var small:=key*4+Vector2i(x,z)
					if previous.has(small):_query_bins[small]=previous[small]
					if constants.has(small):_constant_bins[small]=constants[small]
			stats.query_reused+=1;continue
		stats.query_rebuilt+=1
		for z in range(4):
			for x in range(4):
				var small:=key*4+Vector2i(x,z);var low:=Vector2(small)*QUERY_BIN_SIZE
				var high:=low+Vector2.ONE*QUERY_BIN_SIZE;var rows:Array=[]
				for row:Dictionary in _bins[key]:
					var a:Vector2=row.a;var b:Vector2=row.b;var radius:float=row.radius
					if maxf(a.x,b.x)+radius<low.x or minf(a.x,b.x)-radius>high.x or maxf(a.y,b.y)+radius<low.y or minf(a.y,b.y)-radius>high.y:continue
					rows.append(row)
				if rows.is_empty():continue
				# Squared distance to a segment is convex, so its maximum on
				# this tile is bounded by the four corners. Any segment farther
				# than the best such bound cannot win anywhere in the tile.
				var upper:=INF;var corners:Array[Vector2]=[low,Vector2(high.x,low.y),high,Vector2(low.x,high.y)]
				for row:Dictionary in rows:
					var farthest:=0.
					for corner:Vector2 in corners:farthest=maxf(farthest,corner.distance_squared_to(Geometry2D.get_closest_point_to_segment(corner,row.a,row.b)))
					if farthest<=float(row.radius)*float(row.radius):upper=minf(upper,farthest)
				var nearest_rows:Array=[]
				for row:Dictionary in rows:
					var a:Vector2=row.a;var b:Vector2=row.b
					var dx:=maxf(0.,maxf(minf(a.x,b.x)-high.x,low.x-maxf(a.x,b.x)))
					var dz:=maxf(0.,maxf(minf(a.y,b.y)-high.y,low.y-maxf(a.y,b.y)))
					if dx*dx+dz*dz<=upper+.000001:nearest_rows.append(row)
				_query_bins[small]=nearest_rows
				var flat:Variant=_flat_bins.get(key)
				if flat==null:continue
				for cover:Dictionary in flat.covers:
					var contains:=true
					for corner:Vector2 in [low,Vector2(high.x,low.y),high,Vector2(low.x,high.y)]:
						if corner.distance_squared_to(Geometry2D.get_closest_point_to_segment(corner,cover.a,cover.b))>=float(cover.radius2)-.000001:contains=false;break
					if contains:_constant_bins[small]=float(flat.y);break

func _build_flat_bins() -> void:
	# A bin whose every possible road hit has the same height needs only a
	# coverage check. Slopes, bridges with changing Y, stairs and stepping
	# stones keep the original nearest-segment solver below.
	for key: Vector2i in _bins:
		var y:=NAN;var uniform:=true;var covers: Array[Dictionary]=[]
		for row: Dictionary in _bins[key]:
			var profile: Dictionary=profiles[row.road]
			var first: float=profile.samples[int(row.index)].y
			var last: float=profile.samples[int(row.index)+1].y
			if first!=last or (not is_nan(y) and first!=y) or not profile.treads.is_empty() or not profile.stepping_runs.is_empty():uniform=false;break
			y=first
			var a: Vector2=row.a;var b: Vector2=row.b
			var axis:=0 if a.y==b.y else 1 if a.x==b.x else -1
			if not covers.is_empty():
				var previous: Dictionary=covers[-1]
				if axis>=0 and previous.axis==axis and previous.road==row.road and int(previous.index)+1==int(row.index) and Vector2(previous.b)==a and (Vector2(previous.b)-Vector2(previous.a)).dot(b-a)>0.:
					previous.b=b;previous.index=row.index;continue
			covers.append({"a":a,"b":b,"radius2":float(row.radius)*float(row.radius),"axis":axis,"road":row.road,"index":row.index})
		if uniform and not covers.is_empty():_flat_bins[key]={"y":y,"covers":covers}

func _junctions(city: RefCounted) -> Dictionary:
	var result: Dictionary = {}
	var segments: Array = []
	var bins: Dictionary = {}
	var seen: Dictionary = {}
	for road: Dictionary in city.roads:
		for i in range(road.points.size()-1):
			var a := Vector2(float(road.points[i][0]),float(road.points[i][1]))
			var b := Vector2(float(road.points[i+1][0]),float(road.points[i+1][1]))
			var segment := {"a":a,"b":b,"id":str(road.id),"width":float(road.width)}
			var bounds := Rect2(a,Vector2.ZERO).expand(b)
			var candidates: Dictionary = {}
			for z in range(floori(bounds.position.y/4.0),floori(bounds.end.y/4.0)+1):
				for x in range(floori(bounds.position.x/4.0),floori(bounds.end.x/4.0)+1):
					var key := Vector2i(x,z)
					for index: int in bins.get(key,[]): candidates[index]=true
					if not bins.has(key): bins[key]=[]
					bins[key].append(segments.size())
			for index: int in candidates:
				var other: Dictionary = segments[index]
				if str(other.id)==str(road.id): continue
				var intersection: Variant = Geometry2D.segment_intersects_segment(a,b,other.a,other.b)
				if not intersection is Vector2: continue
				var at: Vector2 = intersection
				var ids: Array = [str(road.id),str(other.id)]
				ids.sort()
				var identity := str(ids)+str(at)
				if seen.has(identity): continue
				seen[identity]=true
				var legacy := 0.055+0.185*(1.0-smoothstep(-0.05,0.65,float(city.water_clearance(at))))
				var y := maxf(float(city._ground_terrain.raw_height_at(at))+0.075,legacy)
				var landing := {"at":at,"y":y,"radius":maxf(float(road.width),float(other.width))*0.5+Junctions.EXTRA+0.45}
				for id: String in ids:
					if not result.has(id): result[id]=[]
					result[id].append(landing)
			segments.append(segment)
	return result

func _build(city: RefCounted,road: Dictionary,doors: Array,junctions: Array) -> Dictionary:
	var samples: Array = []
	var distance := 0.0
	for i in range(1,road.points.size()):
		var a := Vector2(float(road.points[i-1][0]),float(road.points[i-1][1]))
		var b := Vector2(float(road.points[i][0]),float(road.points[i][1]))
		var count := maxi(1,ceili(a.distance_to(b)/SAMPLE_STEP))
		for j in range(count+1):
			if i>1 and j==0: continue
			var at := a.lerp(b,float(j)/float(count))
			if not samples.is_empty(): distance += at.distance_to(Vector2(samples[-1].xz))
			var clearance: float = city.water_clearance(at)
			var raw: float = city._ground_terrain.raw_height_at(at)
			var legacy := 0.055+0.185*(1.0-smoothstep(-0.05,0.65,clearance))
			samples.append({"xz":at,"distance":distance,"y":maxf(raw+0.075,legacy),"bridge":clearance < -0.02})
	var original: Array = []
	for sample: Dictionary in samples: original.append(sample.y)
	for i in range(1,samples.size()-1):
		if not samples[i].bridge: samples[i].y = (float(original[i-1])+float(original[i])+float(original[i+1]))/3.0
	# Each actual door projects onto this physical centreline, including doors
	# beside a through road. Anchor at the same base as its house and porch.
	var anchors: Array = []
	for door: Dictionary in doors:
		if door.active and not str(door.road_id).is_empty() and str(door.road_id)!=str(road.id): continue
		var nearest := 0.82
		var arc := -1.0
		for i in range(samples.size()-1):
			var a: Vector2 = samples[i].xz
			var b: Vector2 = samples[i+1].xz
			var point := Geometry2D.get_closest_point_to_segment(door.at,a,b)
			var gap: float = point.distance_to(door.at)
			if gap>=nearest: continue
			nearest = gap
			arc = float(samples[i].distance)+point.distance_to(a)
		if arc>=0.0: anchors.append({"distance":arc,"y":float(door.y),"house_id":str(door.house_id)})
	var flat_intervals := _flat_anchor_intervals(anchors)
	for sample: Dictionary in samples:
		if sample.bridge: continue
		var weight := 0.0
		var target: float = sample.y
		for anchor: Dictionary in anchors:
			var influence := 1.0-smoothstep(0.0,2.4,absf(float(sample.distance)-float(anchor.distance)))
			if influence>weight: weight=influence; target=float(anchor.y)
		for interval: Dictionary in flat_intervals:
			if float(sample.distance)>=float(interval.low) and float(sample.distance)<=float(interval.high): weight=1.0;target=float(interval.y)
		sample.y = lerpf(float(sample.y),target,weight)
	# A shared flat landing wins over an individual doorway's approach. Both
	# roads use the same raw-height anchor, so their actual crossing cannot
	# contain two incompatible decks or a stair hidden by the other strip.
	for sample: Dictionary in samples:
		var weight := 0.0
		var target: float = sample.y
		for junction: Dictionary in junctions:
			var gap := Vector2(sample.xz).distance_to(junction.at)
			var radius: float = junction.radius
			var influence := 1.0-smoothstep(radius,radius+1.2,gap)
			if influence>weight: weight=influence;target=float(junction.y)
		sample.y=lerpf(float(sample.y),target,weight)
	# Preserve the .24m default bridge deck; raised banks can lift a complete
	# wet span, with a short dry approach, instead of dipping into the river.
	var cursor := 0
	while cursor<samples.size():
		if not samples[cursor].bridge: cursor+=1; continue
		var first := cursor
		while cursor+1<samples.size() and samples[cursor+1].bridge: cursor+=1
		var last := cursor
		var deck := maxf(0.24,maxf(float(samples[maxi(0,first-1)].y),float(samples[mini(samples.size()-1,last+1)].y)))
		for i in range(samples.size()):
			var gap := maxf(float(samples[first].distance)-float(samples[i].distance),float(samples[i].distance)-float(samples[last].distance))
			if gap<=0.0: samples[i].y=deck
			elif gap<1.6: samples[i].y=maxf(float(samples[i].y),lerpf(deck,float(samples[i].y),smoothstep(0.0,1.6,gap)))
		cursor+=1
	var stepping_runs := SteppingPlan.for_road(city,road)
	var bridge_runs := Bridges.apply(city,road,samples,stepping_runs,anchors,junctions)
	for sample: Dictionary in samples:
		for stepping: Dictionary in stepping_runs:
			var arc: float = sample.distance
			if arc<float(stepping.transition_start) or arc>float(stepping.transition_end): continue
			var at: Vector2 = sample.xz
			var dry_height := maxf(float(city._ground_terrain.raw_height_at(at))+0.075,0.055)
			var gap := maxf(float(stepping.start)-arc,arc-float(stepping.end))
			var weight := 1.0-smoothstep(0.0,SteppingPlan.APPROACH,maxf(0.0,gap))
			sample.y=lerpf(dry_height,SteppingPlan.crossing_height(stepping,arc),weight)
			sample.stepping=true
	for marker: Dictionary in Roundabouts.all(city.roads):
		var center: Vector2=marker.center
		var target: float=city._ground_terrain.raw_height_at(center)+0.075
		for sample: Dictionary in samples:
			var weight:=1.0-smoothstep(float(marker.radius),float(marker.radius)+1.2,Vector2(sample.xz).distance_to(center))
			sample.y=lerpf(float(sample.y),target,weight)
	var treads := _treads(city,samples,float(road.width))
	var elevated := not treads.is_empty()
	for sample: Dictionary in samples:
		if absf(float(sample.y)-0.055)>0.001: elevated=true;break
	return {"id":str(road.id),"width":float(road.width),"samples":samples,"treads":treads,"stepping_runs":stepping_runs,"bridge_runs":bridge_runs,"elevated":elevated,"signature":hash([road.width,samples,treads,stepping_runs,bridge_runs])}

func _flat_anchor_intervals(anchors: Array) -> Array[Dictionary]:
	# Membership is independent of the road sample. Keep the original nested
	# pair order: the last matching interval wins when two homes overlap.
	var result: Array[Dictionary] = []
	for first: Dictionary in anchors:
		for second: Dictionary in anchors:
			if first.house_id!=second.house_id or first.y!=second.y: continue
			var low := minf(float(first.distance),float(second.distance))
			var high := maxf(float(first.distance),float(second.distance))
			if high-low>4.0: continue
			result.append({"low":low,"high":high,"y":float(first.y)})
	return result

func _treads(city: RefCounted,samples: Array,width: float) -> Array:
	var result: Array = []
	var i := 0
	var run := 0
	while i<samples.size()-1:
		if not _steep(samples,i): i+=1;continue
		var start := i
		var direction := signf(float(samples[i+1].y)-float(samples[i].y))
		while i+1<samples.size()-1 and _steep(samples,i+1) and signf(float(samples[i+2].y)-float(samples[i+1].y))==direction: i+=1
		var finish := i+1
		var s0: float = samples[start].distance
		var s1: float = samples[finish].distance
		var y0: float = samples[start].y
		var dy: float = float(samples[finish].y)-y0
		var count := maxi(1,ceili(absf(dy)/STEP_HEIGHT))
		for step in range(count):
			var low := lerpf(s0,s1,float(step)/float(count))
			var high := lerpf(s0,s1,float(step+1)/float(count))
			var y := y0+dy*float(step+(1 if direction>0.0 else 0))/float(count)
			# Split a flat tread at every source sample corner; matching miters
			# keep its collision/visual top on the curved road strip.
			var breaks: Array = [low]
			for index in range(start+1,finish):
				var arc: float = samples[index].distance
				if arc>low+0.00001 and arc<high-0.00001: breaks.append(arc)
			breaks.append(high)
			for part in range(breaks.size()-1):
				var a := _point(samples,float(breaks[part]),width)
				var b := _point(samples,float(breaks[part+1]),width)
				var middle: Vector2 = (Vector2(a.xz)+Vector2(b.xz))*0.5
				var bottom := minf(float(city._ground_terrain.raw_height_at(middle))-0.02,y-STEP_HEIGHT)
				result.append({"a":a.xz,"b":b.xz,"offset_a":a.offset,"offset_b":b.offset,"y":y,"bottom":bottom,"s0":float(breaks[part]),"s1":float(breaks[part+1]),"run":run,"step":step,"width":width,"rise":absf(dy)})
		run+=1
		i=finish
	return result

func _steep(samples: Array,index: int) -> bool:
	if bool(samples[index].get("stepping",false)) or bool(samples[index+1].get("stepping",false)): return false
	if samples[index].bridge or samples[index+1].bridge: return false
	var distance := float(samples[index+1].distance)-float(samples[index].distance)
	return absf(float(samples[index+1].y)-float(samples[index].y))/maxf(0.000001,distance)>MAX_GRADE

func _point(samples: Array,arc: float,width: float) -> Dictionary:
	for i in range(samples.size()-1):
		if arc>float(samples[i+1].distance)+0.000001: continue
		var a: Vector2 = samples[i].xz
		var b: Vector2 = samples[i+1].xz
		var t := clampf((arc-float(samples[i].distance))/maxf(0.000001,float(samples[i+1].distance)-float(samples[i].distance)),0.0,1.0)
		var direction := (b-a).normalized()
		var offset := Vector2(direction.y,-direction.x)*width*0.5
		if t<0.00001: offset=_offset(samples,i,width)
		elif t>0.99999: offset=_offset(samples,i+1,width)
		return {"xz":a.lerp(b,t),"offset":offset}
	return {"xz":samples[-1].xz,"offset":_offset(samples,samples.size()-1,width)}

func _offset(samples: Array,index: int,width: float) -> Vector2:
	var before: Vector2 = Vector2(samples[index].xz)-Vector2(samples[maxi(0,index-1)].xz)
	var after: Vector2 = Vector2(samples[mini(samples.size()-1,index+1)].xz)-Vector2(samples[index].xz)
	if before.is_zero_approx(): before=after
	if after.is_zero_approx(): after=before
	var first := Vector2(before.normalized().y,-before.normalized().x)
	var second := Vector2(after.normalized().y,-after.normalized().x)
	var miter := (first+second).normalized()
	return miter*(width*0.5/maxf(0.5,miter.dot(second)))

func height_at(at: Vector2,fallback: float) -> float:
	var small:=Vector2i(floori(at.x/QUERY_BIN_SIZE),floori(at.y/QUERY_BIN_SIZE))
	if _constant_bins.has(small):return float(_constant_bins[small])
	var key:=Vector2i(floori(at.x/BIN_SIZE),floori(at.y/BIN_SIZE))
	var flat: Variant=_flat_bins.get(key)
	if flat!=null:
		for cover: Dictionary in flat.covers:
			var point:=Geometry2D.get_closest_point_to_segment(at,cover.a,cover.b)
			# Keep boundary rounding and nearest-road ties on the original path.
			if at.distance_squared_to(point)<float(cover.radius2)-.000001:return float(flat.y)
	var nearest := INF
	var best:Dictionary={}
	var closest:=Vector2.ZERO
	for row: Dictionary in _query_bins.get(small,[]):
		var point := Geometry2D.get_closest_point_to_segment(at,row.a,row.b)
		var gap := at.distance_squared_to(point)
		if gap>float(row.radius)*float(row.radius) or gap>=nearest: continue
		nearest=gap;best=row;closest=point
	if best.is_empty():return fallback
	var selected:Dictionary=profiles[best.road]
	var a:Dictionary=selected.samples[int(best.index)]
	var b:Dictionary=selected.samples[int(best.index)+1]
	var delta:Vector2=best.b-best.a
	var ratio:=clampf((closest-Vector2(best.a)).dot(delta)/delta.length_squared(),0.,1.)
	var arc:=lerpf(float(a.distance),float(b.distance),ratio)
	for stepping: Dictionary in best.stepping_runs:
		if arc>=float(stepping.start)-0.00001 and arc<=float(stepping.end)+0.00001: return SteppingPlan.crossing_height(stepping,arc)
	for tread: Dictionary in best.treads:
		if arc>=float(tread.s0)-0.000001 and arc<=float(tread.s1)+0.000001: return float(tread.y)
	return lerpf(float(a.y),float(b.y),ratio)

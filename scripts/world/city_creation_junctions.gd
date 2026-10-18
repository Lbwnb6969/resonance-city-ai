extends RefCounted
## Derived, real extra street coverage; authored capsule cores stay untouched.
## The .38 * (1 - d / 1.4)^2 profile adapts the project design blueprint.
## Tiny Glade's restored paths shaders separate occupancy/exclusion from visual
## mask noise; they do NOT contain a recovered centreline/junction algorithm.
## No new graph component is introduced: candidates follow Network's exact
## crossing / endpoint-minimum-half-width connection rule, without its renderer
## tolerance. Geometry2D operates on CPU and no scene/GPU resources are created.
const REACH := 1.4
const EXTRA := 0.38
const BIN := 2.0
const STEP := 0.14
const MIN_SINE := 0.24
const EPS := 0.00001
const Roundabouts=preload("res://scripts/world/city_creation_roundabouts.gd")
class DraftCity:
	extends RefCounted
	const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
	var WORLD_RECT: Rect2
	var houses: Array[Dictionary]=[]
	var waters: Array[Dictionary]=[]
	var roads: Array[Dictionary]=[]
	var source: RefCounted
	var draft: Dictionary
	var bounds: Rect2
	func water_clearance(point: Vector2) -> float:
		return float(source.water_clearance(point))
	func house_entrances(id: String) -> Array[Dictionary]:
		for house: Dictionary in houses:
			if str(house.id)!=id: continue
			# A draft can alter entrances only where it approaches a ground cell.
			# The generous .56m terminal margin also covers CONTACT=.55; actual
			# passage/terminal decisions still use full original Frontage code.
			for cell: Dictionary in house.cells:
				if int(cell.level)!=0: continue
				var center:=Frontage.center(house,cell)
				var region:=Rect2(center-Vector2.ONE*0.9,Vector2.ONE*1.8).grow(float(draft.width)*0.5+0.56)
				if not bounds.intersects(region,true): continue
				for index in range(1,draft.points.size()):
					var a:=Vector2(float(draft.points[index-1][0]),float(draft.points[index-1][1]))
					var b:=Vector2(float(draft.points[index][0]),float(draft.points[index][1]))
					if Frontage.hits_rect(a,b,region): return Frontage.entrances(house,roads,houses)
			return source.house_entrances(id)
		return []
var stats := {"pairs":0,"junctions":0,"regenerated":0,"cache_hits":0}
var _cache: Dictionary = {}
var _geometry_cache: Dictionary = {}
var _topology_cache: Dictionary = {}
var _extras: Dictionary = {}
var _signatures: Dictionary = {}
var _bins: Dictionary = {}
var _input: Array = []
var _ids: Array[String] = []

func copy_cache_from(source: RefCounted) -> void:
	# Arrays are never modified after cache publication. Duplicate the dictionaries
	# so a background preparation cannot publish into the visible context.
	_cache = source._cache.duplicate()
	_geometry_cache = source._geometry_cache.duplicate()
	_topology_cache = source._topology_cache.duplicate()

func additions(road_id: String) -> Array[PackedVector2Array]:
	var result: Array[PackedVector2Array] = []
	result.assign(_extras.get(road_id,[]))
	return result

func signature(road_id: String) -> Variant:
	return _signatures.get(road_id,0)

func at(point: Vector2) -> String:
	var key := Vector2i(floori(point.x/BIN),floori(point.y/BIN))
	for entry: Dictionary in _bins.get(key,[]):
		if entry.bounds.has_point(point) and Geometry2D.is_point_in_polygon(point,entry.polygon): return entry.id
	return ""

func preview_additions(city: RefCounted,points: Array[Vector2],width: float=1.25) -> Array[PackedVector2Array]:
	# Call on a dedicated preview context. Only the new road's optional patches
	# are built; old road geometry/connection components remain exact so preview
	# coverage equals a full prepare of the same draft, including foreign roads.
	var draft_city:=DraftCity.new()
	draft_city.source=city
	draft_city.WORLD_RECT=city.WORLD_RECT
	draft_city.houses=city.houses
	draft_city.waters=city.waters
	draft_city.roads.assign(city.roads)
	var encoded: Array=[]
	if not points.is_empty(): draft_city.bounds=Rect2(points[0],Vector2.ZERO)
	for point: Vector2 in points:
		encoded.append([point.x,point.y])
		draft_city.bounds=draft_city.bounds.expand(point)
	draft_city.draft={"id":"draft","points":encoded,"width":width}
	draft_city.roads.append(draft_city.draft)
	_prepare(draft_city,"draft")
	return additions("draft")

func prepare(city: RefCounted) -> void:
	_prepare(city,"")

func _prepare(city: RefCounted,only_id: String) -> void:
	var started:=Time.get_ticks_usec()
	stats = {"pairs":0,"junctions":0,"regenerated":0,"cache_hits":0}
	var input: Array = []
	var roads := {}
	_ids.clear()
	for road: Dictionary in city.roads:
		var id := str(road.id)
		_ids.append(id)
		roads[id] = road
	_ids.sort()
	for id: String in _ids: input.append([id,roads[id].points,roads[id].width])
	var roundabouts:=Roundabouts.all(city.roads)
	input.append(roundabouts)
	var topology_input: Array=[]
	for id: String in _ids:
		if id!=only_id: topology_input.append([id,roads[id].points,roads[id].width])
	var topology_key:=hash(topology_input)
	var houses: Array = []
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var center := Vector2(float(house.origin[0]),float(house.origin[1]))+Vector2(float(cell.x),float(cell.z))*1.8
			houses.append(Rect2(center-Vector2.ONE*0.92,Vector2.ONE*1.84))
	# Read existing real entrances; do not call State.road_at / road_junctions.
	# The entrance cache is independent of derived extra street coverage.
	var doors: Array = []
	for house: Dictionary in city.houses:
		for entrance: Dictionary in city.house_entrances(str(house.id)):
			var target: Vector2=entrance.clearance_at
			doors.append(Rect2(target-Vector2.ONE*0.28,Vector2.ONE*0.56))
	houses.sort_custom(_rect_less)
	doors.sort_custom(_rect_less)
	var water_input: Array=[]
	var water_rows: Array=city.waters.duplicate()
	water_rows.sort_custom(func(a: Dictionary,b: Dictionary) -> bool: return str(a.id)<str(b.id))
	for water: Dictionary in water_rows: water_input.append([water.id,water.points,water.width])
	input.append(houses)
	input.append(doors)
	input.append(water_input)
	input.append(only_id)
	if input==_input: return
	stats["doors_ms"]=float(Time.get_ticks_usec()-started)/1000.0
	var graph_started:=Time.get_ticks_usec()
	_input=input.duplicate(true)
	_extras.clear()
	_signatures.clear()
	_bins.clear()
	var segments: Array[Dictionary] = []
	var segment_bins := {}
	var reuse_fixed: bool=not only_id.is_empty() and _topology_cache.get("key",-1)==topology_key
	if reuse_fixed:
		segments.assign(_topology_cache.segments)
		# Fixed topology is immutable. Draft segments query these bins but never
		# append into their shared arrays or compare against their own road.
		segment_bins=_topology_cache.bins
	var first_new:=segments.size()
	var cores := {}
	var canonical := {}
	for id: String in _ids:
		var geometry:=_geometry(roads[id])
		var points: Array[Vector2]=geometry.points
		canonical[id]=points
		var radius := float(roads[id].width)*0.5
		cores[id]=geometry.core
		if reuse_fixed and id!=only_id: continue
		for index in range(1,points.size()):
			var a := points[index-1]
			var b := points[index]
			var segment := {"id":id,"a":a,"b":b,"radius":radius,"bounds":Rect2(a,Vector2.ZERO).expand(b)}
			var bounds: Rect2 = segment.bounds.grow(radius)
			var candidates := {}
			for key: Vector2i in _keys(bounds):
				for previous: int in segment_bins.get(key,[]): candidates[previous]=true
				if not reuse_fixed:
					if not segment_bins.has(key): segment_bins[key]=[]
					segment_bins[key].append(segments.size())
			segment["candidates"]=candidates.keys()
			segments.append(segment)
	var joints := {}
	var links := {}
	if reuse_fixed:
		joints=_topology_cache.joints.duplicate(true)
		links=_topology_cache.links.duplicate(true)
	for id: String in _ids:
		if not links.has(id): links[id]={}
	for index in range(first_new,segments.size()):
		var first: Dictionary=segments[index]
		var order: Array=first.candidates
		order.sort()
		for other_index: int in order:
			var second: Dictionary=segments[other_index]
			if first.id==second.id: continue
			# Bucket overlap is deliberately conservative. Exact intersections
			# need overlapping bounds; endpoint connectors cannot span farther
			# than Network's smaller half width in either coordinate.
			if not first.bounds.grow(minf(float(first.radius),float(second.radius))).intersects(second.bounds,true): continue
			stats.pairs+=1
			var da: Vector2=(first.b-first.a).normalized()
			var db: Vector2=(second.b-second.a).normalized()
			var connections: Array[Vector2]=[]
			var intersection: Variant=Geometry2D.segment_intersects_segment(first.a,first.b,second.a,second.b)
			if intersection!=null: connections.append(intersection)
			else:
				for pair: Array in [[first,second],[second,first]]:
					for endpoint: Vector2 in [pair[0].a,pair[0].b]:
						var nearest:=Geometry2D.get_closest_point_to_segment(endpoint,pair[1].a,pair[1].b)
						if endpoint.distance_to(nearest)<=minf(float(first.radius),float(second.radius)):
							connections.append((endpoint+nearest)*0.5)
			if not connections.is_empty():
				links[str(first.id)][str(second.id)]=true
				links[str(second.id)][str(first.id)]=true
			if absf(da.cross(db))<MIN_SINE: continue
			for point: Vector2 in connections:
				for road_id: String in [str(first.id),str(second.id)]:
					if not joints.has(road_id): joints[road_id]={}
					var key:=Vector2i(roundi(point.x*10000.0),roundi(point.y*10000.0))
					joints[road_id][key]=Vector2(key)/10000.0
	var components:=_components(links)
	if only_id.is_empty():
		_topology_cache={"key":topology_key,"segments":segments,"bins":segment_bins,"joints":joints,"links":links}
	stats["fixed_topology_reused"]=reuse_fixed
	stats["graph_ms"]=float(Time.get_ticks_usec()-graph_started)/1000.0
	var build_started:=Time.get_ticks_usec()
	for id: String in _ids:
		if not only_id.is_empty() and id!=only_id: continue
		var points: Array[Vector2]=canonical[id]
		var junctions: Array=[]
		var keys: Array=joints.get(id,{}).keys()
		keys.sort_custom(func(a: Vector2i,b: Vector2i) -> bool: return a.x<b.x or (a.x==b.x and a.y<b.y))
		for key: Vector2i in keys:
			var joint: Vector2=joints[id][key]
			# Two terminal arms form a bend, not an intersection mouth. Widening
			# their separate caps leaves fins at every corner of a split loop.
			if not _terminal_bend(joint,segments,segment_bins,first_new if reuse_fixed else -1):junctions.append(joint)
		stats.junctions+=junctions.size()
		var local_houses: Array=[]
		var local_doors: Array=[]
		var local_waters: Array=[]
		var foreign: Array[Dictionary]=[]
		var regions: Array[Rect2]=[]
		for joint: Vector2 in junctions:
			var region:=Rect2(joint-Vector2.ONE*2.5,Vector2.ONE*5.0)
			regions.append(region)
			for rect: Rect2 in houses:
				if region.intersects(rect,true) and not local_houses.has(rect): local_houses.append(rect)
			for rect: Rect2 in doors:
				if region.intersects(rect,true) and not local_doors.has(rect): local_doors.append(rect)
			for water: Dictionary in water_rows:
				var water_bounds:=Rect2(Vector2(float(water.points[0][0]),float(water.points[0][1])),Vector2.ZERO)
				for raw: Array in water.points: water_bounds=water_bounds.expand(Vector2(float(raw[0]),float(raw[1])))
				var water_key: Array=[water.id,water.points,water.width]
				if region.intersects(water_bounds.grow(float(water.width)*0.5),true) and not local_waters.has(water_key): local_waters.append(water_key)
		# A dense curved junction may have many genuine width connectors in the
		# same metres. Query each occupied region bin once, then test foreign
		# components once. Retain the previous first-region/source-order ordering.
		var region_bins:= {}
		for region: Rect2 in regions:
			for bin_key: Vector2i in _keys(region.grow(0.075)): region_bins[bin_key]=true
		var foreign_candidates:= {}
		for bin_key: Vector2i in region_bins:
			for segment_index: int in segment_bins.get(bin_key,[]): foreign_candidates[segment_index]=true
		var matches: Array[Vector2i]=[]
		for segment_index: int in foreign_candidates:
			var segment: Dictionary=segments[segment_index]
			if components[segment.id]==components[id]: continue
			var bounds: Rect2=segment.bounds.grow(float(segment.radius)+0.075)
			for region_index in range(regions.size()):
				if not regions[region_index].intersects(bounds,true): continue
				matches.append(Vector2i(region_index,segment_index))
				break
		matches.sort_custom(func(a: Vector2i,b: Vector2i) -> bool: return a.x<b.x or (a.x==b.x and a.y<b.y))
		for match: Vector2i in matches: foreign.append(segments[match.y])
		var foreign_key: Array=[]
		for segment: Dictionary in foreign: foreign_key.append([segment.id,segment.a,segment.b,segment.radius])
		var key:=hash([points,roads[id].width,junctions,local_houses,local_doors,local_waters,foreign_key])
		var cached: Dictionary=_cache.get(id,{})
		var polygons: Array[PackedVector2Array]=[]
		if cached.get("key",-1)==key:
			polygons.assign(cached.polygons)
			stats.cache_hits+=1
		else:
			polygons=_build(city,points,float(roads[id].width)*0.5,junctions,cores[id],local_houses,local_doors,foreign)
			_cache[id]={"key":key,"polygons":polygons}
			stats.regenerated+=1
		for marker: Dictionary in roundabouts:
			if marker.owner_id==id: polygons.append(Roundabouts.polygon(marker.center,marker.radius))
		_extras[id]=polygons
		_signatures[id]=hash([polygons,roundabouts])
		for polygon: PackedVector2Array in polygons:
			var bounds:=_bounds(polygon)
			var entry: Dictionary={"id":id,"bounds":bounds,"polygon":polygon}
			for bin_key: Vector2i in _keys(bounds):
				if not _bins.has(bin_key): _bins[bin_key]=[]
				_bins[bin_key].append(entry)
	for id: String in _cache.keys():
		if not roads.has(id): _cache.erase(id)
	for id: String in _geometry_cache.keys():
		if not roads.has(id): _geometry_cache.erase(id)
	stats["build_ms"]=float(Time.get_ticks_usec()-build_started)/1000.0

func _terminal_bend(at: Vector2,segments: Array[Dictionary],bins: Dictionary,additional_start: int=-1)->bool:
	var arms: Array[Vector2]=[]
	var radius: float=-1.0
	var candidates: Array=bins.get(Vector2i(floori(at.x/BIN),floori(at.y/BIN)),[]).duplicate()
	# Preview keeps the fixed topology's bins immutable; include its new draft.
	if additional_start>=0:
		for index in range(additional_start,segments.size()):
			if segments[index].bounds.grow(float(segments[index].radius)).has_point(at):candidates.append(index)
	for index: int in candidates:
		var segment: Dictionary=segments[index]
		var nearest:=Geometry2D.get_closest_point_to_segment(at,segment.a,segment.b)
		if nearest.distance_to(at)>.002:continue
		var a: Vector2=segment.a-at;var b: Vector2=segment.b-at
		if minf(a.length(),b.length())>.002:return false
		if radius>=0.0 and absf(radius-float(segment.radius))>.001:return false
		radius=float(segment.radius)
		var direction: Vector2=(a if a.length_squared()>b.length_squared() else b).normalized()
		var duplicate:=false
		for arm: Vector2 in arms:
			if arm.dot(direction)>.9999:duplicate=true;break
		if not duplicate:arms.append(direction)
		if arms.size()>2:return false
	return arms.size()==2

func _build(city: RefCounted,points: Array[Vector2],radius: float,junctions: Array,core: Array,houses: Array,doors: Array,foreign: Array[Dictionary]) -> Array[PackedVector2Array]:
	var result: Array[PackedVector2Array]=[]
	var shape_started:=Time.get_ticks_usec()
	var amount_usec:=0
	var clip_usec:=0
	# Never fill or shrink an authored loop island. Compound/self-overlap cores
	# retain their original contours; their fillet extension is deferred.
	if junctions.is_empty() or core.size()!=1: return result
	var blockers: Array[PackedVector2Array]=[]
	for rect: Rect2 in houses+doors:
		blockers.append(PackedVector2Array([rect.position,Vector2(rect.end.x,rect.position.y),rect.end,Vector2(rect.position.x,rect.end.y)]))
	for segment: Dictionary in foreign:
		var line: Array[Vector2]=[segment.a,segment.b]
		# Offset arcs are inscribed with <1.6cm chord error. Reserve another 2cm
		# beyond the requested 5cm gap, including at disconnected rounded caps.
		for contour: PackedVector2Array in _stroke(line,float(segment.radius)+0.07): blockers.append(contour)
	var joint_bins:= {}
	for joint_index in range(junctions.size()):
		var joint: Vector2=junctions[joint_index]
		var key:=Vector2i(floori(joint.x/BIN),floori(joint.y/BIN))
		if not joint_bins.has(key): joint_bins[key]=[]
		joint_bins[key].append(joint_index)
	for index in range(1,points.size()):
		var a:=points[index-1]
		var b:=points[index]
		var direction: Vector2=(b-a).normalized()
		var normal:=Vector2(-direction.y,direction.x)
		var length:=a.distance_to(b)
		var ranges: Array[Vector2]=[]
		var nearby:= {}
		for key: Vector2i in _keys(Rect2(a,Vector2.ZERO).expand(b).grow(REACH)):
			for joint_index: int in joint_bins.get(key,[]): nearby[joint_index]=true
		var joint_order: Array=nearby.keys()
		joint_order.sort()
		var local_junctions: Array=[]
		for joint_index: int in joint_order:
			var joint: Vector2=junctions[joint_index]
			var nearest:=Geometry2D.get_closest_point_to_segment(joint,a,b)
			if nearest.distance_to(joint)>REACH: continue
			local_junctions.append(joint)
			var distance: float=(nearest-a).dot(direction)
			ranges.append(Vector2(maxf(0,distance-REACH),minf(length,distance+REACH)))
		if ranges.is_empty(): continue
		# Fixed longitudinal samples produce a smooth mouth without multiplying
		# junctions at every dense authored point. Shared samples are exact.
		var intervals: Array[float]=[]
		for interval: Vector2 in ranges:
			intervals.append(interval.x)
			intervals.append(interval.y)
			for sample in range(ceili(interval.x/STEP),floori(interval.y/STEP)+1): intervals.append(float(sample)*STEP)
		intervals.sort()
		var unique: Array[float]=[]
		for value: float in intervals:
			if unique.is_empty() or value-unique[-1]>EPS: unique.append(value)
		for sample in range(1,unique.size()):
			var start:=a+direction*unique[sample-1]
			var finish:=a+direction*unique[sample]
			if start.distance_to(finish)>STEP*1.1: continue
			for side: float in [-1.0,1.0]:
				var n:=normal*side
				var amount_started:=Time.get_ticks_usec()
				var extra_a:=_amount(city,start,n,radius,local_junctions,houses,doors,foreign)
				var extra_b:=_amount(city,finish,n,radius,local_junctions,houses,doors,foreign)
				amount_usec+=Time.get_ticks_usec()-amount_started
				if maxf(extra_a,extra_b)<0.002: continue
				var clip_started:=Time.get_ticks_usec()
				var polygon:=PackedVector2Array([start+n*radius,finish+n*radius,finish+n*(radius+extra_b),start+n*(radius+extra_a)])
				if Geometry2D.is_polygon_clockwise(polygon): polygon.reverse()
				var pieces: Array=[polygon]
				# Remove actual core, not a bounding box: loops and islands stay
				# authored. A candidate lies beside one original segment, so test
				# its centroid against the complete even/odd core before clipping.
				for outline: PackedVector2Array in core:
					if Geometry2D.is_polygon_clockwise(outline): continue
					var next: Array=[]
					for piece: PackedVector2Array in pieces: next.append_array(Geometry2D.clip_polygons(piece,outline))
					pieces=next
				for blocker: PackedVector2Array in blockers:
					var next: Array=[]
					for piece: PackedVector2Array in pieces:
						if _bounds(piece).intersects(_bounds(blocker),true): next.append_array(Geometry2D.clip_polygons(piece,blocker))
						else: next.append(piece)
					pieces=next
				for piece: PackedVector2Array in pieces:
					if Geometry2D.is_polygon_clockwise(piece): continue
					# Conservative water rejection applies to the whole tiny convex
					# piece, not just its vertices; analytic river Lipschitz <=1.005.
					var center:=Vector2.ZERO
					for point: Vector2 in piece: center+=point
					center/=float(piece.size())
					var bound:=0.0
					for point: Vector2 in piece: bound=maxf(bound,center.distance_to(point))
					if float(city.water_clearance(center))<bound*1.005+0.015: continue
					result.append(piece)
				clip_usec+=Time.get_ticks_usec()-clip_started
	stats["amount_ms"]=float(amount_usec)/1000.0
	stats["clip_ms"]=float(clip_usec)/1000.0
	stats["pieces_before_merge"]=result.size()
	var merge_started:=Time.get_ticks_usec()
	var merged:=_merge_simple(result)
	stats["merge_ms"]=float(Time.get_ticks_usec()-merge_started)/1000.0
	stats["shape_ms"]=float(Time.get_ticks_usec()-shape_started)/1000.0
	return merged

func _merge_simple(polygons: Array[PackedVector2Array]) -> Array[PackedVector2Array]:
	# Positive union only. If a pair creates an island boundary or disconnected
	# components, retain both original positive pieces rather than discarding a
	# hole contour / accidentally XORing the extra surface. Recheck earlier parts
	# after a successful merge so chains collapse independently of piece density.
	var result: Array[PackedVector2Array]=[]
	for polygon: PackedVector2Array in polygons:
		var candidate:=polygon
		var bounds:=_bounds(candidate)
		var index:=0
		while index<result.size():
			if not bounds.intersects(_bounds(result[index]),true):
				index+=1
				continue
			var merged:=Geometry2D.merge_polygons(candidate,result[index])
			if merged.size()!=1 or Geometry2D.is_polygon_clockwise(merged[0]):
				index+=1
				continue
			candidate=merged[0]
			bounds=_bounds(candidate)
			result.remove_at(index)
			index=0
		result.append(candidate)
	return result

func _geometry(road: Dictionary) -> Dictionary:
	var id:=str(road.id)
	var input:=hash([road.points,road.width])
	var cached: Dictionary=_geometry_cache.get(id,{})
	if cached.get("input",-1)==input: return cached
	var points:=_points(road.points)
	var core_key:=hash([points,road.width])
	var core: Array=cached.core if cached.get("core_key",-1)==core_key else _stroke(points,float(road.width)*0.5)
	var result: Dictionary={"input":input,"points":points,"core_key":core_key,"core":core}
	_geometry_cache[id]=result
	return result

func _amount(city: RefCounted,center: Vector2,normal: Vector2,radius: float,junctions: Array,houses: Array,doors: Array,foreign: Array[Dictionary]) -> float:
	var distance:=INF
	for joint: Vector2 in junctions: distance=minf(distance,center.distance_to(joint))
	var extra:=EXTRA*pow(clampf(1.0-distance/REACH,0,1),2.0)
	if extra<=0: return 0.0
	var base:=center+normal*radius
	# min distance is 1-Lipschitz; leaving a 2cm shell prevents an outward
	# band entering the real building or its door approach rectangle.
	for rect: Rect2 in houses+doors: extra=minf(extra,_rect_distance(base,rect))
	for segment: Dictionary in foreign:
		var nearest:=Geometry2D.get_closest_point_to_segment(base,segment.a,segment.b)
		extra=minf(extra,maxf(0,base.distance_to(nearest)-float(segment.radius)-0.07))
	extra=minf(extra,maxf(0,float(city.water_clearance(base))-0.04))
	var world: Rect2=city.WORLD_RECT
	extra=minf(extra,maxf(0,minf(minf(base.x-world.position.x,world.end.x-base.x),minf(base.y-world.position.y,world.end.y-base.y))-0.02))
	return maxf(0,extra)

func _components(links: Dictionary) -> Dictionary:
	var components:= {}
	for id: String in _ids:
		if components.has(id): continue
		var queue: Array[String]=[id]
		components[id]=id
		while not queue.is_empty():
			var current: String=queue.pop_back()
			for neighbor: String in links[current]:
				if components.has(neighbor): continue
				components[neighbor]=id
				queue.append(neighbor)
	return components

func _rect_distance(point: Vector2,rect: Rect2) -> float:
	return point.distance_to(point.clamp(rect.position,rect.end))

func _rect_less(a: Rect2,b: Rect2) -> bool:
	if a.position.x!=b.position.x: return a.position.x<b.position.x
	if a.position.y!=b.position.y: return a.position.y<b.position.y
	if a.size.x!=b.size.x: return a.size.x<b.size.x
	return a.size.y<b.size.y

func _points(raw: Array) -> Array[Vector2]:
	var result: Array[Vector2]=[]
	for value in raw:
		var point:=Vector2(float(value[0]),float(value[1]))
		if not result.is_empty() and result[-1].distance_squared_to(point)<0.00000001: continue
		while result.size()>1:
			var a:=result[-1]-result[-2]
			var b:=point-result[-1]
			if a.dot(b)<=0 or absf(a.cross(b))>0.000001*a.length()*b.length(): break
			result.pop_back()
		result.append(point)
	if result.size()>1 and (result[0].x>result[-1].x or (result[0].x==result[-1].x and result[0].y>result[-1].y)): result.reverse()
	return result

func _stroke(points: Array[Vector2],radius: float) -> Array:
	if points.size()<2: return []
	var scaled:=PackedVector2Array()
	for point: Vector2 in points: scaled.append(point*16.0)
	var contours: Array=Geometry2D.offset_polyline(scaled,radius*16.0,Geometry2D.JOIN_ROUND,Geometry2D.END_ROUND)
	for index in range(contours.size()):
		var contour: PackedVector2Array=contours[index]
		for vertex in range(contour.size()): contour[vertex]/=16.0
		contours[index]=contour
	return contours

func _bounds(points: PackedVector2Array) -> Rect2:
	var bounds:=Rect2(points[0],Vector2.ZERO)
	for point: Vector2 in points: bounds=bounds.expand(point)
	return bounds

func _keys(bounds: Rect2) -> Array[Vector2i]:
	var result: Array[Vector2i]=[]
	for z in range(floori(bounds.position.y/BIN),floori(bounds.end.y/BIN)+1):
		for x in range(floori(bounds.position.x/BIN),floori(bounds.end.x/BIN)+1): result.append(Vector2i(x,z))
	return result

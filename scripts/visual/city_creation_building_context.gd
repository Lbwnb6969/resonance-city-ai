extends RefCounted
## Pure CPU architectural context. House/cell identities remain authored data.
## Townscaper: derive exposed faces from global occupancy, not host membership.
## Tiny Glade tools/recovered_roof.py: normalized_profile uses x^(0.5+profile).
## Here that verified scalar is applied to distance from the UNION outline;
## union topology, metric, dimensions and tessellation are our Godot adaptation.
const UNIT := 1.8
const FLOOR := 1.7
const EPS := 0.002
const MAX_GAP := 0.35
const EAVE := 0.12
const STEP := 0.30
const PROFILE := 0.62
const Towers = preload("res://scripts/world/city_creation_towers.gd")
const SIDES := [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]
var _rows: Array = []
var _bins: Dictionary = {}
var _by_key: Dictionary = {}
var _patches: Dictionary = {}
var _signatures: Dictionary = {}
var _joined: Dictionary = {}
var _cache: Dictionary = {}
var tower_cells_by_house: Dictionary = {}
var stats: Dictionary = {}

func copy_cache_from(source: RefCounted) -> void:
	# Derived topology is immutable between authored house/road changes. Share it
	# with the worker so terrain-only edits do not repeat the full city scan.
	_rows = source._rows.duplicate(false)
	_bins = source._bins.duplicate(false)
	_by_key = source._by_key.duplicate(false)
	_patches = source._patches.duplicate(false)
	_signatures = source._signatures.duplicate(false)
	_joined = source._joined.duplicate(false)
	_cache = source._cache.duplicate(false)
	tower_cells_by_house = source.tower_cells_by_house.duplicate(false)
	stats = source.stats.duplicate(true)

func prepare(houses: Array, roads: Array = []) -> void:
	var started := Time.get_ticks_usec()
	_rows.clear(); _bins.clear(); _by_key.clear()
	_patches.clear(); _signatures.clear(); _joined.clear()
	tower_cells_by_house = Towers.derive(houses,roads)
	var ordered := houses.duplicate()
	ordered.sort_custom(func(a,b): return str(a.id).naturalnocasecmp_to(str(b.id)) < 0)
	for house: Dictionary in ordered:
		_patches[str(house.id)] = []
		_signatures[str(house.id)] = []
		_joined[str(house.id)] = false
		var tower_ids: Array = []
		for tower: Dictionary in tower_cells_by_house[str(house.id)]: tower_ids.append(str(tower.id))
		# A misaligned neighbor can suppress a tower without participating in
		# an axis-aligned roof group. Its final derived identity dirties this
		# house in both synchronous and worker publication paths.
		_signatures[str(house.id)].append(["tower_cells",tower_ids])
		var cells: Array = house.cells.duplicate()
		cells.sort_custom(func(a,b): return str(a.id).naturalnocasecmp_to(str(b.id)) < 0)
		for cell: Dictionary in cells:
			var center := Vector2(float(house.origin[0])+int(cell.x)*UNIT,float(house.origin[1])+int(cell.z)*UNIT)
			var row := {"house_id":str(house.id),"cell_id":str(cell.id),"cell":cell.duplicate(true),"center":center,"level":int(cell.level),"base_y":float(house.get("base_y",0.0)),"key":str(house.id)+":"+str(cell.id)}
			_rows.append(row)
			_by_key[row.key] = row
			var bin := _bin(center,row.level)
			if not _bins.has(bin): _bins[bin] = []
			_bins[bin].append(row)
	# A signature includes only geometrically adjacent records, not city-wide hash.
	for row: Dictionary in _rows:
		var local: Array = [_record(row)]
		for side: Vector2i in SIDES:
			for offset in [0,1]:
				var other := _neighbor_row(row,side,offset,true)
				if not other.is_empty(): local.append(_record(other))
		var above := _neighbor_row(row,Vector2i.ZERO,1,false)
		if not above.is_empty(): local.append(_record(above))
		_signatures[row.house_id].append(local)
	var tops: Dictionary = {}
	for row: Dictionary in _rows:
		if str(row.cell.kind)=="room" and _neighbor_row(row,Vector2i.ZERO,1,false).is_empty(): tops[row.key] = row
	var visited: Dictionary = {}
	var next_cache: Dictionary = {}
	var groups := 0
	var regenerated := 0
	for start: Dictionary in _rows:
		if not tops.has(start.key) or visited.has(start.key): continue
		var group: Array = []
		var queue: Array = [start]
		while not queue.is_empty():
			var row: Dictionary = queue.pop_back()
			if visited.has(row.key): continue
			visited[row.key] = true
			group.append(row)
			for side: Vector2i in SIDES:
				var other := _neighbor_row(row,side,0,true)
				if not other.is_empty() and tops.has(other.key) and not visited.has(other.key): queue.append(other)
		group.sort_custom(func(a,b): return a.key.naturalnocasecmp_to(b.key)<0)
		var group_key: String = group[0].key
		var signature: Array = []
		for row: Dictionary in group:
			signature.append(_record(row))
			# Upper/lateral blockers suppress eaves; capture their actual geometry.
			for side: Vector2i in SIDES:
				var other := _neighbor_row(row,side,0,false)
				if not other.is_empty(): signature.append(_record(other))
		var saved: Dictionary = _cache.get(group_key,{})
		if saved.get("signature",[]) != signature:
			saved = {"signature":signature,"patches":_build_group(group,group_key)}
			regenerated += 1
		next_cache[group_key] = saved
		for row: Dictionary in group:
			_signatures[row.house_id].append(["roof_group",signature])
			_joined[row.house_id] = bool(_joined[row.house_id]) or group.size()>1
		for patch: Dictionary in saved.patches: _patches[patch.house_id].append(patch)
		groups += 1
	_cache = next_cache
	stats = {"cells":_rows.size(),"groups":groups,"regenerated":regenerated,"elapsed_ms":float(Time.get_ticks_usec()-started)/1000.0}

func neighbor(house: Dictionary,cell: Dictionary,side: Vector2i,level_offset: int=0,allow_gap: bool=false) -> Dictionary:
	var row: Dictionary = _by_key.get(str(house.id)+":"+str(cell.id),{})
	return {} if row.is_empty() else _neighbor_row(row,side,level_offset,allow_gap).duplicate(true)

func signature(house_id: String) -> Variant:
	return _signatures.get(house_id,[])

func roof_patches(house_id: String) -> Array:
	return _patches.get(house_id,[])

func joined(house_id: String) -> bool:
	return bool(_joined.get(house_id,false))

func tower_cells(house_id: String) -> Array:
	return tower_cells_by_house.get(house_id,[])

func _record(row: Dictionary) -> Array:
	return [row.house_id,row.cell_id,row.center,row.level,str(row.cell.kind),row.base_y]

func _bin(center: Vector2,level: int) -> Vector3i:
	return Vector3i(floori(center.x/UNIT),level,floori(center.y/UNIT))

func _neighbor_row(row: Dictionary,side: Vector2i,offset: int,gaps: bool) -> Dictionary:
	var target: Vector2 = row.center+Vector2(side)*UNIT
	var bin := _bin(target,int(row.level)+offset)
	var best: Dictionary = {}
	var best_gap := INF
	for x in range(-1,2):
		for z in range(-1,2):
			for other: Dictionary in _bins.get(bin+Vector3i(x,0,z),[]):
				if other.key == row.key: continue
				# Floors from independently elevated houses never erase each
				# other's walls or participate in one continuous roof group.
				if absf(float(other.base_y)-float(row.base_y))>EPS: continue
				var delta: Vector2 = other.center-row.center
				var gap := 0.0
				if side == Vector2i.ZERO:
					if delta.abs().x>EPS or delta.abs().y>EPS: continue
				else:
					var along := delta.dot(Vector2(side))
					var cross_axis := absf(delta.cross(Vector2(side)))
					gap = along-UNIT
					if cross_axis>EPS or gap < -EPS or gap > (MAX_GAP+EPS if gaps else EPS): continue
				if absf(gap)<best_gap:
					best = other.duplicate(false)
					best.gap = gap
					best_gap = absf(gap)
	return best

func _build_group(group: Array,group_id: String) -> Array:
	var members: Dictionary = {}
	for row: Dictionary in group: members[row.key] = true
	var domains: Array = []
	var domain_bins: Dictionary = {}
	var outline: Array = []
	var bounds := Rect2()
	for row: Dictionary in group:
		var extensions: Dictionary = {}
		for side: Vector2i in SIDES:
			var other := _neighbor_row(row,side,0,true)
			var ext := EAVE
			if not other.is_empty() and members.has(other.key): ext = float(other.gap)*0.5
			elif not _neighbor_row(row,side,0,false).is_empty(): ext = 0.0
			extensions[side] = ext
		var low: Vector2 = row.center-Vector2.ONE*UNIT*0.5-Vector2(extensions[Vector2i.LEFT],extensions[Vector2i.UP])
		var high: Vector2 = row.center+Vector2.ONE*UNIT*0.5+Vector2(extensions[Vector2i.RIGHT],extensions[Vector2i.DOWN])
		var rect := Rect2(low,high-low)
		var domain := {"row":row,"rect":rect}
		domains.append(domain)
		var bin := _bin(row.center,0)
		if not domain_bins.has(bin): domain_bins[bin] = []
		domain_bins[bin].append(domain)
		bounds = rect if domains.size()==1 else bounds.merge(rect)
	var gable := _row_gable(group)
	# Rectangle-union outline. Subtract neighboring rectangles from each edge;
	# unlike a bounding box this retains L/U notches and genuine courtyard holes.
	for domain: Dictionary in domains:
		var rect: Rect2 = domain.rect
		var nearby: Array = []
		var bin := _bin(domain.row.center,0)
		for bx in range(-2,3):
			for bz in range(-2,3): nearby.append_array(domain_bins.get(bin+Vector3i(bx,0,bz),[]))
		for side: Vector2i in SIDES:
			var vertical := side.x != 0
			var fixed: float = (rect.position.x if side.x<0 else rect.end.x) if vertical else (rect.position.y if side.y<0 else rect.end.y)
			var intervals: Array = [[rect.position.y,rect.end.y] if vertical else [rect.position.x,rect.end.x]]
			for other_domain: Dictionary in nearby:
				if other_domain.row.key==domain.row.key: continue
				var other: Rect2 = other_domain.rect
				var enters: bool = (other.position.x<=fixed+EPS and other.end.x>fixed+EPS) if side.x>0 else ((other.position.x<fixed-EPS and other.end.x>=fixed-EPS) if side.x<0 else ((other.position.y<=fixed+EPS and other.end.y>fixed+EPS) if side.y>0 else (other.position.y<fixed-EPS and other.end.y>=fixed-EPS)))
				if not enters: continue
				intervals = _subtract(intervals,other.position.y if vertical else other.position.x,other.end.y if vertical else other.end.x)
			for interval: Array in intervals:
				var a := Vector2(fixed,interval[0]) if vertical else Vector2(interval[0],fixed)
				var b := Vector2(fixed,interval[1]) if vertical else Vector2(interval[1],fixed)
				outline.append({"a":a,"b":b,"row":domain.row,"side":side})
	var line_bins: Dictionary = {}
	for edge: Dictionary in outline:
		var low: Vector2 = edge.a.min(edge.b)
		var high: Vector2 = edge.a.max(edge.b)
		for x in range(floori(low.x/4.0),floori(high.x/4.0)+1):
			for z in range(floori(low.y/4.0),floori(high.y/4.0)+1):
				var key := Vector2i(x,z)
				if not line_bins.has(key): line_bins[key] = []
				line_bins[key].append(edge)
	var result: Array = []
	var base := float(group[0].base_y)+(int(group[0].level)+1)*FLOOR+0.03
	var point_cache: Dictionary = {}
	var covered_bins: Dictionary = {}
	var pieces: Array = []
	for domain: Dictionary in domains:
		# Concave-corner eaves can overlap even though cells do not. Deterministic
		# rectangle subtraction partitions that union, assigning each point once.
		var fragments: Array = [domain.rect]
		var bin := _bin(domain.row.center,0)
		for bx in range(-2,3):
			for bz in range(-2,3):
				for cover: Rect2 in covered_bins.get(bin+Vector3i(bx,0,bz),[]):
					var next: Array = []
					for fragment: Rect2 in fragments: next.append_array(_subtract_rect(fragment,cover))
					fragments = next
		for fragment: Rect2 in fragments: pieces.append({"row":domain.row,"rect":fragment})
		if not covered_bins.has(bin): covered_bins[bin] = []
		covered_bins[bin].append(domain.rect)
	for domain: Dictionary in pieces:
		var rect: Rect2 = domain.rect
		var xs := _axis_samples(rect.position.x,rect.end.x)
		var zs := _axis_samples(rect.position.y,rect.end.y)
		if not gable.is_empty():
			# Put the true ridge and wall profiles in the roof mesh itself. Gable
			# caps below reuse these points, including arbitrary host origins.
			for point: Vector2 in gable.samples:
				_insert_sample(xs,point.x,rect.position.x,rect.end.x)
				_insert_sample(zs,point.y,rect.position.y,rect.end.y)
		var vertices: Array[Vector3] = []
		var points: Array = []
		for x: float in xs:
			var column: Array[Vector3] = []
			for z: float in zs:
				var p := Vector2(x,z)
				if not point_cache.has(p): point_cache[p] = _point(p,base,line_bins,bounds) if gable.is_empty() else _gable_point(p,base,gable,bounds)
				column.append(point_cache[p])
			points.append(column)
		for ix in range(xs.size()-1):
			for iz in range(zs.size()-1):
				var a: Vector3 = points[ix][iz]
				var b: Vector3 = points[ix+1][iz]
				var c: Vector3 = points[ix+1][iz+1]
				var d: Vector3 = points[ix][iz+1]
				vertices.append_array([a,c,b,a,d,c])
		result.append({"house_id":domain.row.house_id,"cell_id":domain.row.cell_id,"vertices":vertices,"surface":"roof","group_id":group_id,"bounds":rect,"base_y":base,"roof_kind":"union" if gable.is_empty() else "gable"})
	if not gable.is_empty():
		for end: Dictionary in gable.ends:
			var blocker := _neighbor_row(end.row,end.side,0,false)
			if not blocker.is_empty() and not members.has(blocker.key) and str(blocker.cell.kind)=="room": continue
			var center: Vector2 = end.row.center+Vector2(end.side)*UNIT*0.5
			var cross_axis := Vector2(-end.side.y,end.side.x)
			var points: Array[Vector3] = []
			for p: Vector2 in point_cache:
				if absf((p-center).dot(Vector2(end.side)))>0.000001 or absf((p-center).dot(cross_axis))>UNIT*0.5+0.000001: continue
				points.append(point_cache[p])
			points.sort_custom(func(a,b): return Vector2(a.x,a.z).dot(cross_axis)<Vector2(b.x,b.z).dot(cross_axis))
			var vertices: Array[Vector3] = []
			for index in range(points.size()-1):
				var a: Vector3 = points[index]
				var b: Vector3 = points[index+1]
				var c := Vector3(b.x,base,b.z)
				var d := Vector3(a.x,base,a.z)
				vertices.append_array([a,b,c,a,c,d])
			var tip := _gable_point(center,base,gable,bounds)
			result.append({"house_id":end.row.house_id,"cell_id":end.row.cell_id,"vertices":vertices,"surface":"gable","group_id":group_id,"side":end.side,"center":center,"base_y":base,"height":tip.y-base,"profile":PROFILE})
	# Vertical eave thickness only on the true outline, never on host seams.
	for edge: Dictionary in outline:
		var a := Vector3(edge.a.x,base,edge.a.y)
		var b := Vector3(edge.b.x,base,edge.b.y)
		var c := b-Vector3(0,0.07,0)
		var d := a-Vector3(0,0.07,0)
		var vertices: Array[Vector3] = [a,b,c,a,c,d]
		if edge.side==Vector2i.LEFT or edge.side==Vector2i.DOWN: vertices = [a,c,b,a,d,c]
		result.append({"house_id":edge.row.house_id,"cell_id":edge.row.cell_id,"vertices":vertices,"surface":"fascia","group_id":group_id,"base_y":base,"side":edge.side})
	return result

func _row_gable(group: Array) -> Dictionary:
	if group.size()<2: return {}
	var first: Vector2 = group[0].center
	var same_x := true
	var same_z := true
	for row: Dictionary in group:
		same_x = same_x and absf(row.center.x-first.x)<=EPS
		same_z = same_z and absf(row.center.y-first.y)<=EPS
	if not same_x and not same_z: return {}
	var along_x := same_z
	var ordered := group.duplicate()
	ordered.sort_custom(func(a,b): return a.center.x<b.center.x if along_x else a.center.y<b.center.y)
	var ends: Array = [{"row":ordered[0],"side":Vector2i.LEFT if along_x else Vector2i.UP},{"row":ordered[-1],"side":Vector2i.RIGHT if along_x else Vector2i.DOWN}]
	var samples: Array[Vector2] = []
	for end: Dictionary in ends:
		var center: Vector2 = end.row.center+Vector2(end.side)*UNIT*0.5
		var cross_axis := Vector2(-end.side.y,end.side.x)
		for offset in [-UNIT*0.5,0.0,UNIT*0.5]: samples.append(center+cross_axis*offset)
	return {"along_x":along_x,"cross":first.y if along_x else first.x,"ends":ends,"samples":samples}

func _insert_sample(samples: Array[float],value: float,low: float,high: float) -> void:
	if value<low or value>high: return
	# Exact insertion also replaces a grid point with the authored wall/ridge
	# coordinate, so roof and cap retain bit-identical seam positions.
	for index in range(samples.size()):
		if absf(samples[index]-value)<0.000001:
			samples[index]=value
			return
	samples.append(value)
	samples.sort()

func _gable_point(p: Vector2,base: float,gable: Dictionary,bounds: Rect2) -> Vector3:
	var along_x: bool = gable.along_x
	var cross: float = gable.cross
	var q: float = p.y if along_x else p.x
	var low: float = bounds.position.y if along_x else bounds.position.x
	var high: float = bounds.end.y if along_x else bounds.end.x
	var half_span := cross-low if q<=cross else high-cross
	var nearest := maxf(0.0,1.0-absf(q-cross)/half_span)*minf(cross-low,high-cross)
	var rise := 0.55*pow(nearest,0.5+PROFILE)
	var axis: float = (p.x-bounds.position.x)/bounds.size.x if along_x else (p.y-bounds.position.y)/bounds.size.y
	var sag := -0.025*sin(axis*PI)*minf(nearest,1.0)
	return Vector3(p.x,base+rise+sag,p.y)

func _subtract_rect(source: Rect2,cover: Rect2) -> Array:
	var overlap := source.intersection(cover)
	if overlap.size.x<=0.000001 or overlap.size.y<=0.000001: return [source]
	var pieces: Array = []
	if overlap.position.x>source.position.x: pieces.append(Rect2(source.position,Vector2(overlap.position.x-source.position.x,source.size.y)))
	if overlap.end.x<source.end.x: pieces.append(Rect2(Vector2(overlap.end.x,source.position.y),Vector2(source.end.x-overlap.end.x,source.size.y)))
	if overlap.position.y>source.position.y: pieces.append(Rect2(Vector2(overlap.position.x,source.position.y),Vector2(overlap.size.x,overlap.position.y-source.position.y)))
	if overlap.end.y<source.end.y: pieces.append(Rect2(Vector2(overlap.position.x,overlap.end.y),Vector2(overlap.size.x,source.end.y-overlap.end.y)))
	return pieces

func _subtract(intervals: Array,low: float,high: float) -> Array:
	var result: Array = []
	for interval: Array in intervals:
		if high<=float(interval[0])+EPS or low>=float(interval[1])-EPS:
			result.append(interval)
			continue
		if low>float(interval[0])+EPS: result.append([interval[0],low])
		if high<float(interval[1])-EPS: result.append([high,interval[1]])
	return result

func _axis_samples(low: float,high: float) -> Array[float]:
	var values: Array[float] = [low]
	for index in range(floori(low/STEP)+1,ceili(high/STEP)):
		var value := float(index)*STEP
		if value>low+EPS and value<high-EPS: values.append(value)
	values.append(high)
	return values

func _point(p: Vector2,base: float,bins: Dictionary,bounds: Rect2) -> Vector3:
	var nearest := 2.0
	var bin := Vector2i(floori(p.x/4.0),floori(p.y/4.0))
	for x in range(-1,2):
		for z in range(-1,2):
			for edge: Dictionary in bins.get(bin+Vector2i(x,z),[]):
				var a: Vector2 = edge.a
				var delta: Vector2 = edge.b-a
				var t := clampf((p-a).dot(delta)/delta.length_squared(),0.0,1.0)
				nearest = minf(nearest,p.distance_to(a+delta*t))
	var rise := 0.55*pow(nearest,0.5+PROFILE)
	var axis: float = (p.x-bounds.position.x)/bounds.size.x if bounds.size.x>=bounds.size.y else (p.y-bounds.position.y)/bounds.size.y
	var sag := -0.025*sin(axis*PI)*minf(nearest,1.0)
	return Vector3(p.x,base+rise+sag,p.y)

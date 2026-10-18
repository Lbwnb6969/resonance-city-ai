extends RefCounted
## Shared CPU terrain for visible mesh, ground picking and planted roots.
## Tiny Glade recovered_stair_terrain.py / VA 0x14140ce00 establishes one
## sampled height field; terrain_derivative/000.comp derives real metre slopes.
## Its rasterize_terrain_stroke/000.comp supplies the .55 / 1.9 noise octave
## constants and .8/.6 rotation. Our land envelope, dimensions, bank profile
## and triangle interpolation are Godot adaptations, not its full stroke solver.
const STEP := 0.5
const BASE_HEIGHT := -0.02
const BANK_DEPTH := 0.32
const WATER_LEVEL := -0.16
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const LAND_RECT := Bounds.LAND_RECT
const BUILD_RECT := Bounds.WORLD_RECT
const COLUMNS := int(LAND_RECT.size.x/STEP)+1
const ROWS := int(LAND_RECT.size.y/STEP)+1
var vertices := PackedFloat32Array()
var offsets := PackedFloat32Array()
var raw_vertices := PackedFloat32Array()
var raw_offsets := PackedFloat32Array()
var raw_generation := 0
var _raw_signature: Variant = null
var _pending_raw_regions: Array = []
var generation := 0
var _water_signature := 0
var _previous_waters: Array = []
var _previous_strokes: Array = []
var _previous_protection: Array = []
var _stroke_bins: Dictionary = {}
var _protection_bins: Dictionary = {}
const BIN_SIZE := 4.0
const PAD_TRANSITION := 1.2
var stats: Dictionary = {}

func copy_cache_from(source: RefCounted) -> void:
	# Packed arrays are copy-on-write. prepare() replaces its whole buffer;
	# workers can share the published immutable grid without recalculating it.
	vertices = source.vertices
	offsets = source.offsets
	raw_vertices = source.raw_vertices
	raw_offsets = source.raw_offsets
	raw_generation = source.raw_generation
	_raw_signature = source._raw_signature
	_pending_raw_regions = source._pending_raw_regions.duplicate()
	generation = source.generation
	_water_signature = source._water_signature
	# These are already detached snapshots, read only by diff routines. Every
	# preparation replaces them with new snapshots; no worker edits a record.
	_previous_waters = source._previous_waters
	_previous_strokes = source._previous_strokes
	_previous_protection = source._previous_protection
	stats = source.stats.duplicate()

func prepare_raw(waters: Array,water_clearance: Callable,strokes: Array = []) -> bool:
	var signature := hash([waters,strokes])
	if not raw_vertices.is_empty() and signature==_raw_signature: return false
	var regions: Array = [LAND_RECT] if raw_vertices.is_empty() else _changed_water_bounds(waters)
	if not raw_vertices.is_empty(): regions.append_array(_changed_stroke_bounds(strokes))
	var rebuild_smoothed_field:=false
	for row: Dictionary in _previous_strokes:
		if str(row.get("mode",""))=="smooth": rebuild_smoothed_field=true
	for row: Dictionary in strokes:
		if str(row.get("mode",""))=="smooth": rebuild_smoothed_field=true
	# A blur is an ordered field operation. Rebuild its source, then replay
	# later strokes in history order instead of blurring future sculpt edits.
	if rebuild_smoothed_field: regions=[LAND_RECT]
	_stroke_bins.clear()
	var first_smooth := -1
	for i in range(strokes.size()):
		var row: Dictionary = strokes[i]
		if str(row.mode)=="smooth":
			first_smooth = i
			break
		_bin_rows(_stroke_bins,row,_stroke_bounds(row))
	var next := raw_vertices.duplicate()
	var next_offsets := raw_offsets.duplicate()
	if next.is_empty(): next.resize(COLUMNS*ROWS)
	if next_offsets.is_empty(): next_offsets.resize(COLUMNS*ROWS)
	var changed: Dictionary = {}
	for region: Rect2 in regions:
		if not region.intersects(LAND_RECT,true): continue
		var clipped := region.intersection(LAND_RECT)
		var low := (clipped.position-LAND_RECT.position)/STEP
		var high := (clipped.end-LAND_RECT.position)/STEP
		for z in range(maxi(0,floori(low.y)),mini(ROWS-1,ceili(high.y))+1):
			for x in range(maxi(0,floori(low.x)),mini(COLUMNS-1,ceili(high.x))+1):
				var index := z*COLUMNS+x
				if changed.has(index): continue
				changed[index] = true
				var at := LAND_RECT.position+Vector2(x,z)*STEP
				var clearance := float(water_clearance.call(at))
				var delta := _sculpt_offset(at)*smoothstep(0.35,1.5,clearance)
				var edge := minf(minf(at.x-BUILD_RECT.position.x,BUILD_RECT.end.x-at.x),minf(at.y-BUILD_RECT.position.y,BUILD_RECT.end.y-at.y))
				delta *= smoothstep(0.0,0.75,edge)
				next_offsets[index] = delta
				next[index] = _vertex_height(at,clearance)+delta
	if first_smooth>=0:
		for i in range(first_smooth,strokes.size()):
			var row: Dictionary = strokes[i]
			if str(row.mode)=="smooth": _smooth_stroke(next,next_offsets,row,water_clearance)
			else: _sculpt_stroke(next,next_offsets,row,water_clearance)
	raw_vertices = next
	raw_offsets = next_offsets
	stats["raw_changed_vertices"] = changed.size()
	_raw_signature = signature
	_previous_waters = waters.duplicate(true)
	_previous_strokes = strokes.duplicate(true)
	_pending_raw_regions.append_array(regions)
	raw_generation += 1
	return true

func prepare(waters: Array,water_clearance: Callable,strokes: Array = [],protection: Array = []) -> bool:
	var started := Time.get_ticks_usec()
	prepare_raw(waters,water_clearance,strokes)
	var signature := hash([_raw_signature,protection])
	if not vertices.is_empty() and signature==_water_signature:
		stats["changed_vertices"] = 0
		stats["changed_regions"] = []
		return false
	var regions: Array = [LAND_RECT] if vertices.is_empty() else _pending_raw_regions.duplicate()
	if not vertices.is_empty(): regions.append_array(_changed_protection_bounds(protection))
	_build_bins(strokes,protection)
	var next := vertices.duplicate()
	var next_offsets := offsets.duplicate()
	if next.is_empty(): next.resize(COLUMNS*ROWS)
	if next_offsets.is_empty(): next_offsets.resize(COLUMNS*ROWS)
	var changed: Dictionary = {}
	for region: Rect2 in regions:
		if not region.intersects(LAND_RECT,true): continue
		var clipped := region.intersection(LAND_RECT)
		var low := (clipped.position-LAND_RECT.position)/STEP
		var high := (clipped.end-LAND_RECT.position)/STEP
		for z in range(maxi(0,floori(low.y)),mini(ROWS-1,ceili(high.y))+1):
			for x in range(maxi(0,floori(low.x)),mini(COLUMNS-1,ceili(high.x))+1):
				var index := z*COLUMNS+x
				if changed.has(index): continue
				changed[index] = true
				var at := LAND_RECT.position+Vector2(x,z)*STEP
				var height := _protected_height(at,raw_vertices[index])
				# Activity pads level dry gathering space, but cannot fill the
				# authored channel beneath a bridge or stepping-stone crossing.
				var clearance:=float(water_clearance.call(at))
				height=lerpf(minf(height,raw_vertices[index]),height,smoothstep(-0.05,0.35,clearance))
				next[index] = height
				next_offsets[index] = raw_offsets[index]+height-raw_vertices[index]
	vertices = next
	offsets = next_offsets
	_water_signature = signature
	_previous_protection = protection.duplicate(true)
	_pending_raw_regions.clear()
	generation += 1
	stats = {"generation":generation,"vertices":vertices.size(),"changed_vertices":changed.size(),"elapsed_ms":float(Time.get_ticks_usec()-started)/1000.0}
	stats["changed_regions"] = regions.duplicate()
	return true

func _changed_water_bounds(waters: Array) -> Array:
	var before: Dictionary = {}
	var after: Dictionary = {}
	for row: Dictionary in _previous_waters: before[str(row.id)] = row
	for row: Dictionary in waters: after[str(row.id)] = row
	var regions: Array = []
	for id: String in before:
		if not after.has(id) or before[id]!=after[id]: regions.append(_water_bounds(before[id]))
	for id: String in after:
		if not before.has(id) or before[id]!=after[id]: regions.append(_water_bounds(after[id]))
	return regions

func _water_bounds(row: Dictionary) -> Rect2:
	var first: Array = row.points[0]
	var bounds := Rect2(Vector2(float(first[0]),float(first[1])),Vector2.ZERO)
	for point: Array in row.points: bounds = bounds.expand(Vector2(float(point[0]),float(point[1])))
	return bounds.grow(float(row.width)*0.5+3.8)

func height_at(at: Vector2) -> float:
	return _sample(vertices,at)

func raw_height_at(at: Vector2) -> float:
	return _sample(raw_vertices,at)

func gradient_at(at: Vector2) -> Vector2:
	# Same metre-scale central differences as the terrain vertex normals.
	return Vector2(height_at(at+Vector2(STEP,0))-height_at(at-Vector2(STEP,0)),
		height_at(at+Vector2(0,STEP))-height_at(at-Vector2(0,STEP)))/(2.0*STEP)

func rockiness_at(at: Vector2) -> float:
	# Tiny Glade terrain_derivative/000.comp's recovered metric thresholds.
	return smoothstep(0.75,1.25,gradient_at(at).length())

func offset_at(at: Vector2) -> float:
	return _sample(offsets,at)

func _sample(buffer: PackedFloat32Array,at: Vector2) -> float:
	var grid := (at-LAND_RECT.position)/STEP
	grid = grid.clamp(Vector2.ZERO,Vector2(COLUMNS-1,ROWS-1))
	var x := mini(floori(grid.x),COLUMNS-2)
	var z := mini(floori(grid.y),ROWS-2)
	var fx := grid.x-float(x)
	var fz := grid.y-float(z)
	var a: float = buffer[z*COLUMNS+x]
	var b: float = buffer[z*COLUMNS+x+1]
	var c: float = buffer[(z+1)*COLUMNS+x+1]
	var d: float = buffer[(z+1)*COLUMNS+x]
	return a+(b-a)*fx+(c-b)*fz if fz<=fx else a+(c-d)*fx+(d-a)*fz

func region_signature(bounds: Rect2, include_raw: bool=false) -> int:
	var low := ((bounds.position-LAND_RECT.position)/STEP).floor().max(Vector2.ZERO)
	var high := ((bounds.end-LAND_RECT.position)/STEP).ceil().min(Vector2(COLUMNS-1,ROWS-1))
	var rows: Array = []
	for z in range(int(low.y),int(high.y)+1):
		rows.append(vertices.slice(z*COLUMNS+int(low.x),z*COLUMNS+int(high.x)+1))
		if include_raw: rows.append(raw_vertices.slice(z*COLUMNS+int(low.x),z*COLUMNS+int(high.x)+1))
	return hash(rows)

func raw_region_signature(bounds:Rect2)->int:
	# Road profiles read the unprotected grid. Protected building pads can be
	# prepared later by a different worker and do not invalidate that input.
	var low:=((bounds.position-LAND_RECT.position)/STEP).floor().max(Vector2.ZERO)
	var high:=((bounds.end-LAND_RECT.position)/STEP).ceil().min(Vector2(COLUMNS-1,ROWS-1))
	var rows:Array=[]
	for z:int in range(int(low.y),int(high.y)+1):rows.append(raw_vertices.slice(z*COLUMNS+int(low.x),z*COLUMNS+int(high.x)+1))
	return hash(rows)

func _stroke_bounds(row: Dictionary) -> Rect2:
	var bounds := Rect2(Vector2(float(row.points[0][0]),float(row.points[0][1])),Vector2.ZERO)
	for point: Array in row.points: bounds = bounds.expand(Vector2(float(point[0]),float(point[1])))
	return bounds.grow(float(row.radius))

func _changed_stroke_bounds(strokes: Array) -> Array:
	var result: Array = []
	for i in range(maxi(_previous_strokes.size(),strokes.size())):
		if i<_previous_strokes.size() and i<strokes.size() and _previous_strokes[i]==strokes[i]: continue
		if i<_previous_strokes.size(): result.append(_stroke_bounds(_previous_strokes[i]))
		if i<strokes.size(): result.append(_stroke_bounds(strokes[i]))
	return result

func _protection_bounds(row: Dictionary) -> Rect2:
	if row.has("rect"): return row.rect.grow(PAD_TRANSITION)
	return Rect2(row.a,Vector2.ZERO).expand(row.b).grow(float(row.radius)+PAD_TRANSITION)

func _changed_protection_bounds(protection: Array) -> Array:
	var before: Dictionary = {}
	var after: Dictionary = {}
	for row: Dictionary in _previous_protection: before[row.id]=row
	for row: Dictionary in protection: after[row.id]=row
	var result: Array = []
	for id: String in before:
		if not after.has(id) or before[id]!=after[id]: result.append(_protection_bounds(before[id]))
	for id: String in after:
		if not before.has(id) or before[id]!=after[id]: result.append(_protection_bounds(after[id]))
	return result

func _bin_rows(target: Dictionary,row: Dictionary,bounds: Rect2) -> void:
	var low := (bounds.position/BIN_SIZE).floor()
	var high := (bounds.end/BIN_SIZE).floor()
	for z in range(int(low.y),int(high.y)+1):
		for x in range(int(low.x),int(high.x)+1):
			var key:=Vector2i(x,z)
			if not target.has(key): target[key]=[]
			target[key].append(row)

func _build_bins(strokes: Array,protection: Array) -> void:
	_stroke_bins.clear()
	_protection_bins.clear()
	for row: Dictionary in strokes: _bin_rows(_stroke_bins,row,_stroke_bounds(row))
	for row: Dictionary in protection: _bin_rows(_protection_bins,row,_protection_bounds(row))

func _segment_distance(at: Vector2,a: Vector2,b: Vector2) -> float:
	return at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))

func _sculpt_offset(at: Vector2) -> float:
	var value := 0.0
	var key:=Vector2i(floori(at.x/BIN_SIZE),floori(at.y/BIN_SIZE))
	for row: Dictionary in _stroke_bins.get(key,[]):
		var weight := _sculpt_weight(at,row)
		if weight<=0.0: continue
		if row.mode=="reset": value=lerpf(value,0.0,weight)
		else: value=clampf(value+float(row.strength)*weight*(-1.0 if row.mode=="lower" else 1.0),-1.2,3.5)
	return value

func _sculpt_weight(at: Vector2,row: Dictionary) -> float:
	if row.mode=="smooth": return 0.0
	var distance := INF
	for i in range(row.points.size()):
		var a := Vector2(float(row.points[i][0]),float(row.points[i][1]))
		var b := Vector2(float(row.points[maxi(0,i-1)][0]),float(row.points[maxi(0,i-1)][1]))
		distance=minf(distance,_segment_distance(at,a,b))
	var t := distance/float(row.radius)
	if t>=1.0: return 0.0
	if row.get("natural",false): t /= natural_radius_scale(at,float(row.radius))
	# Recovered TG Gaussian core; plateau core and finite fade are ours.
	if row.mode=="plateau": t=maxf(0.0,(t-0.5)*2.0)
	return exp(-5.5*t*t)*(1.0-smoothstep(0.8,1.0,t))

func natural_radius_scale(at: Vector2,radius: float) -> float:
	# Reuse TG's fixed corner hash, cubic value noise and rotated two octaves.
	# Our radius modulation stays inside the existing dirty bounds. It changes
	# the authored field, never just the shader; old strokes bypass it entirely.
	return 0.65+0.35*_hill_noise(at*(2.0/radius)+Vector2(34.0,436.0))

func _sculpt_stroke(buffer: PackedFloat32Array,terrain_offsets: PackedFloat32Array,row: Dictionary,water_clearance: Callable) -> void:
	var bounds := _stroke_bounds(row).intersection(LAND_RECT)
	var low := ((bounds.position-LAND_RECT.position)/STEP).floor().max(Vector2.ZERO)
	var high := ((bounds.end-LAND_RECT.position)/STEP).ceil().min(Vector2(COLUMNS-1,ROWS-1))
	for z in range(int(low.y),int(high.y)+1):
		for x in range(int(low.x),int(high.x)+1):
			var at := LAND_RECT.position+Vector2(x,z)*STEP
			var weight := _sculpt_weight(at,row)
			if weight<=0.0: continue
			var edge := minf(minf(at.x-BUILD_RECT.position.x,BUILD_RECT.end.x-at.x),minf(at.y-BUILD_RECT.position.y,BUILD_RECT.end.y-at.y))
			var fade := smoothstep(0.35,1.5,float(water_clearance.call(at)))*smoothstep(0.0,0.75,edge)
			if fade<=0.0: continue
			var index := z*COLUMNS+x
			# Offset includes all earlier blur changes. Reset and clamping act on
			# that current field, using the same water/world-edge fade as sculpt.
			var value := float(terrain_offsets[index])/fade
			if row.mode=="reset": value=lerpf(value,0.0,weight)
			else: value=clampf(value+float(row.strength)*weight*(-1.0 if row.mode=="lower" else 1.0),-1.2,3.5)
			var delta := value*fade-float(terrain_offsets[index])
			terrain_offsets[index]+=delta
			buffer[index]+=delta

func _smooth_stroke(buffer: PackedFloat32Array,terrain_offsets: PackedFloat32Array,row: Dictionary,water_clearance: Callable) -> void:
	# One local cross-blur pass softens a sculpted shoulder without changing
	# its broad form. Shore water and the editable-world edge remain untouched.
	var source := buffer.duplicate()
	var bounds := _stroke_bounds(row).intersection(LAND_RECT)
	var low := ((bounds.position-LAND_RECT.position)/STEP).floor().max(Vector2.ZERO)
	var high := ((bounds.end-LAND_RECT.position)/STEP).ceil().min(Vector2(COLUMNS-1,ROWS-1))
	var neighbors := [Vector2i.ZERO,Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]
	var weights := [1.0,1.0,1.0,1.0,1.0]
	for z in range(int(low.y),int(high.y)+1):
		for x in range(int(low.x),int(high.x)+1):
			var index := z*COLUMNS+x
			var at := LAND_RECT.position+Vector2(x,z)*STEP
			var clearance := float(water_clearance.call(at))
			if clearance<0.35: continue
			var influence := 0.0
			for segment in range(row.points.size()):
				var a := Vector2(float(row.points[segment][0]),float(row.points[segment][1]))
				var b := Vector2(float(row.points[maxi(0,segment-1)][0]),float(row.points[maxi(0,segment-1)][1]))
				influence=maxf(influence,1.0-smoothstep(0.20,1.0,at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))/float(row.radius)))
			if influence<=0.0: continue
			var sum := 0.0
			var weight_sum := 0.0
			for neighbor_index in range(neighbors.size()):
				var neighbor: Vector2i=Vector2i(x,z)+neighbors[neighbor_index]
				if neighbor.x<0 or neighbor.y<0 or neighbor.x>=COLUMNS or neighbor.y>=ROWS: continue
				var neighbor_at := LAND_RECT.position+Vector2(neighbor)*STEP
				if float(water_clearance.call(neighbor_at))<0.35: continue
				var weight: float=weights[neighbor_index]
				sum+=source[neighbor.y*COLUMNS+neighbor.x]*weight
				weight_sum+=weight
			if weight_sum<=0.0: continue
			var amount:=clampf(float(row.strength)*0.78*influence,0.0,0.78)
			buffer[index]=lerpf(source[index],sum/weight_sum,amount)
			terrain_offsets[index]+=buffer[index]-source[index]

func _protection_weight(at: Vector2) -> float:
	# Exposed to the existing slope-rock placement predicate, not the height
	# solver. A protected activity/road footprint must still reject outcrops.
	var weight := 1.0
	var key:=Vector2i(floori(at.x/BIN_SIZE),floori(at.y/BIN_SIZE))
	for row: Dictionary in _protection_bins.get(key,[]):
		var distance: float
		if row.has("rect"):
			var rect: Rect2=row.rect
			var offset:=Vector2(maxf(rect.position.x-at.x,at.x-rect.end.x),maxf(rect.position.y-at.y,at.y-rect.end.y)).max(Vector2.ZERO)
			distance=offset.length()
		else: distance=_segment_distance(at,row.a,row.b)-float(row.radius)
		weight=minf(weight,smoothstep(0.0,PAD_TRANSITION,distance))
	return weight

func _protected_height(at: Vector2,raw: float) -> float:
	var key:=Vector2i(floori(at.x/BIN_SIZE),floori(at.y/BIN_SIZE))
	var rows: Array = _protection_bins.get(key,[])
	var height := raw
	# Blend activity and building targets continuously in separate tiers. A
	# winning-priority switch between nearby capsules creates single-grid spikes.
	for core: bool in [false,true]:
		var weight := 0.0
		var strength := 0.0
		var target := 0.0
		for row: Dictionary in rows:
			if bool(row.get("cut_only",false)) or (float(row.get("priority",1.0))>=3.0)!=core: continue
			var influence := _pad_influence(at,row)
			weight += influence
			target += float(row.get("target_y",BASE_HEIGHT))*influence
			strength = maxf(strength,influence)
		if weight>0.0: height=lerpf(height,target/weight,strength)
	# Cuts can only remove ground and fade continuously; never raise a low
	# endpoint into the adjacent high platform. No tread-sized targets enter
	# the coarse field, so interpolation cannot turn stairs into terrain teeth.
	for row: Dictionary in rows:
		if not bool(row.get("cut_only",false)): continue
		var influence := _pad_influence(at,row)
		height=lerpf(height,minf(height,float(row.target_y)),influence)
	return height

func _pad_influence(at: Vector2,row: Dictionary) -> float:
	var distance: float
	if row.has("rect"):
		var rect: Rect2 = row.rect
		var outside := Vector2(maxf(rect.position.x-at.x,at.x-rect.end.x),maxf(rect.position.y-at.y,at.y-rect.end.y)).max(Vector2.ZERO)
		distance = outside.length()
	else: distance = _segment_distance(at,row.a,row.b)-float(row.radius)
	return 1.0-smoothstep(0.0,float(row.get("transition",PAD_TRANSITION)),distance)

func _vertex_height(at: Vector2,clearance: float) -> float:
	var offset := Vector2(maxf(BUILD_RECT.position.x-at.x,at.x-BUILD_RECT.end.x),maxf(BUILD_RECT.position.y-at.y,at.y-BUILD_RECT.end.y)).max(Vector2.ZERO)
	var envelope := smoothstep(0.8,8.8,offset.length())
	var hills := 0.0
	if envelope>0.0:
		var noise := _hill_noise(at*0.075+Vector2(34.0,436.0))
		hills = lerpf(1.0,2.5,noise)*envelope*smoothstep(0.35,3.0,clearance)
	var bank := BANK_DEPTH*(1.0-smoothstep(-0.7,0.35,clearance))
	return BASE_HEIGHT+hills-bank

func _hill_noise(at: Vector2) -> float:
	var total := 0.0
	var amplitude := 0.5
	var weight := 0.0
	for octave in range(2):
		total += _noise(at)*amplitude
		weight += amplitude
		amplitude *= 0.550000011920929
		at = Vector2(at.x*0.8+at.y*0.6,-at.x*0.6+at.y*0.8)*1.899999976158143
	return total/weight

func _noise(at: Vector2) -> float:
	var cell := Vector2i(floori(at.x),floori(at.y))
	var f := at-Vector2(cell)
	f = f*f*(Vector2(3,3)-2.0*f)
	return lerpf(lerpf(_hash(cell),_hash(cell+Vector2i.RIGHT),f.x),lerpf(_hash(cell+Vector2i.DOWN),_hash(cell+Vector2i.ONE),f.x),f.y)

func _hash(cell: Vector2i) -> float:
	# Original rasterizer integer corner hash and 23-bit [0,1) conversion.
	var n := cell.y & 0xffffffff
	n = (n+(n<<10)) & 0xffffffff
	n ^= n>>6
	n = (n+(n<<3)) & 0xffffffff
	n ^= n>>11
	n = (n+(n<<15)) & 0xffffffff
	n = (((cell.x*1664525+n+1013904223) & 0xffffffff)*1664525) & 0xffffffff
	n ^= n>>11
	n ^= (n<<7) & 2636928640
	n ^= (n<<15) & 4022730752
	n ^= n>>18
	return float(n & 8388607)/8388608.0

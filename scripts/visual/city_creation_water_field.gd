class_name CityCreationWaterField
extends RefCounted
## Edit-only visual distance field. Construction continues to use State's exact
## analytic mask. Texels sample world-space centres; shaders use the same bounds.
const State := preload("res://scripts/world/city_creation_state.gd")
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const FIELD_RECT := Bounds.LAND_RECT
const WIDTH := Bounds.FIELD_SIZE
const HEIGHT := Bounds.FIELD_SIZE
const DISTANCE_LIMIT := 1.6
const BIN_SIZE := 4.0
const BIN_COLUMNS := ceili(FIELD_RECT.size.x/BIN_SIZE)
const BIN_ROWS := ceili(FIELD_RECT.size.y/BIN_SIZE)
const PIXEL_SIZE := Vector2(FIELD_RECT.size.x/WIDTH,FIELD_RECT.size.y/HEIGHT)
## The river's horizontal clearance has gradient norm <= sqrt(1 + .0884^2).
## Bilinear weighted sample distances are bounded by half the pixel diagonal.
const INTERPOLATION_ERROR := 0.5*sqrt(PIXEL_SIZE.x*PIXEL_SIZE.x+PIXEL_SIZE.y*PIXEL_SIZE.y)*sqrt(1.0+0.0884*0.0884)

class Capsule extends RefCounted:
	var a: Vector2
	var b: Vector2
	var length_squared: float
	var radius: float

class Bin extends RefCounted:
	var capsules: Array[Capsule] = []

var tiled=preload("res://scripts/visual/city_creation_tiled_field.gd").new()
var texture:Texture2DArray:
	get:return tiled.texture
	set(value):tiled.texture=value
var image: Image
var _state: RefCounted
var _previous: Dictionary = {}
var _previous_hashes: Dictionary = {}
var _bins: Array[Bin] = []
var _uploads := 0
var _initial_ms := 0.0
var _diagnostics: Dictionary = {}
var changed := false

func copy_cpu_from(source: RefCounted, state: RefCounted) -> void:
	_state=state
	# A worker owns independent writable Image bytes, never the live texture.
	image=source.image.duplicate() if source.image!=null else null
	_previous=source._previous.duplicate(true)
	_previous_hashes=source._previous_hashes.duplicate()
	_uploads=source._uploads
	_initial_ms=source._initial_ms
	_diagnostics=source._diagnostics.duplicate()
	tiled.copy_cpu_from(source.tiled)
	changed=false

func setup(state: RefCounted) -> void:
	var started := Time.get_ticks_usec()
	_state = state
	_prepare_initial()
	upload()
	_initial_ms = float(Time.get_ticks_usec() - started) / 1000.0
	_diagnostics.elapsed_ms=_initial_ms

func _prepare_initial() -> void:
	_previous = _records()
	_previous_hashes = _record_hashes(_previous)
	_rebuild_bins()
	image = Image.create(WIDTH, HEIGHT, false, Image.FORMAT_RF)
	for y in range(HEIGHT):
		for x in range(WIDTH):
			image.set_pixel(x, y, Color(_distance(pixel_world(Vector2i(x, y))), 0.0, 0.0, 1.0))
	var regions:Array[Rect2i]=[];tiled.prepare(image,regions)
	changed=true
	_diagnostics = {"changed": true, "texels_changed": WIDTH * HEIGHT, "texels_recomputed": WIDTH * HEIGHT, "elapsed_ms": 0.0}

func update() -> void:
	prepare_update()
	upload()

func prepare_update() -> void:
	var started := Time.get_ticks_usec()
	if image==null:
		_prepare_initial()
		_diagnostics.elapsed_ms=float(Time.get_ticks_usec()-started)/1000.0
		return
	var current := _records()
	var current_hashes := _record_hashes(current)
	var regions: Array[Rect2i] = []
	for key: String in _previous:
		if not current.has(key) or _previous_hashes[key] != current_hashes[key] or _previous[key] != current[key]:
			regions.append(_pixel_bounds(_previous[key]))
	for key: String in current:
		if not _previous.has(key) or _previous_hashes[key] != current_hashes[key] or _previous[key] != current[key]:
			regions.append(_pixel_bounds(current[key]))
	if regions.is_empty():
		tiled.prepare(image,regions)
		_diagnostics = {"changed": false, "texels_changed": 0, "texels_recomputed": 0, "elapsed_ms": float(Time.get_ticks_usec() - started) / 1000.0}
		return
	_previous = current
	_previous_hashes = current_hashes
	_rebuild_bins()
	var visited := PackedByteArray()
	visited.resize(WIDTH * HEIGHT)
	var texels_changed := 0
	var recomputed := 0
	for region: Rect2i in regions:
		for y in range(region.position.y, region.end.y):
			for x in range(region.position.x, region.end.x):
				var index := y * WIDTH + x
				if visited[index] != 0:
					continue
				visited[index] = 1
				recomputed += 1
				var value := _distance(pixel_world(Vector2i(x, y)))
				# Compare the same 32-bit representation stored by FORMAT_RF.
				var color := Color(value, 0.0, 0.0, 1.0)
				if image.get_pixel(x, y).r != color.r:
					image.set_pixel(x, y, color)
					texels_changed += 1
	tiled.prepare(image,regions)
	changed=changed or texels_changed>0
	_diagnostics = {"changed": true, "texels_changed": texels_changed, "texels_recomputed": recomputed, "elapsed_ms": float(Time.get_ticks_usec() - started) / 1000.0}

func upload(create_new: bool = false) -> void:
	if not changed and texture!=null: return
	tiled.upload(create_new)
	_uploads+=1
	changed=false

func diagnostics() -> Dictionary:
	var result := _diagnostics.duplicate()
	result.merge(tiled.stats,true)
	result.merge({"initial_ms": _initial_ms, "width": WIDTH, "height": HEIGHT, "uploads": _uploads,
		"field_rect":FIELD_RECT,"pixel_size":PIXEL_SIZE,"interpolation_error":INTERPOLATION_ERROR,"bin_columns":BIN_COLUMNS,"bin_rows":BIN_ROWS})
	return result

func pixel_world(pixel: Vector2i) -> Vector2:
	return FIELD_RECT.position + (Vector2(pixel) + Vector2.ONE * 0.5) * PIXEL_SIZE

func sample_world(at: Vector2) -> float:
	# CPU equivalent of filter_linear, repeat_disable sampling.
	var local := (at - FIELD_RECT.position) / PIXEL_SIZE - Vector2.ONE * 0.5
	local = local.clamp(Vector2.ZERO, Vector2(WIDTH - 1, HEIGHT - 1))
	var lo := Vector2i(floori(local.x), floori(local.y))
	var hi := Vector2i(mini(lo.x + 1, WIDTH - 1), mini(lo.y + 1, HEIGHT - 1))
	var fraction := local - Vector2(lo)
	return lerpf(lerpf(image.get_pixel(lo.x, lo.y).r, image.get_pixel(hi.x, lo.y).r, fraction.x),
		lerpf(image.get_pixel(lo.x, hi.y).r, image.get_pixel(hi.x, hi.y).r, fraction.x), fraction.y)

func _records() -> Dictionary:
	var result := {}
	var rows: Array = _state.get("waters")
	for index in range(rows.size()):
		var row: Dictionary = rows[index]
		result[str(row.get("id", "index_%d" % index))] = row.duplicate(true)
	return result

func _record_hashes(records: Dictionary) -> Dictionary:
	var result := {}
	for key: String in records:
		result[key] = hash(records[key])
	return result

func _rebuild_bins() -> void:
	_bins.clear()
	for index in range(BIN_COLUMNS * BIN_ROWS):
		_bins.append(Bin.new())
	for water: Dictionary in _state.get("waters"):
		for index in range(maxi(1, water.points.size() - 1)):
			var capsule := Capsule.new()
			capsule.a = Vector2(water.points[index][0], water.points[index][1])
			var next := mini(index + 1, water.points.size() - 1)
			capsule.b = Vector2(water.points[next][0], water.points[next][1])
			capsule.length_squared = capsule.a.distance_squared_to(capsule.b)
			capsule.radius = float(water.width) * 0.5
			var bounds := Rect2(capsule.a, Vector2.ZERO).expand(capsule.b).grow(capsule.radius + DISTANCE_LIMIT)
			if not bounds.intersects(FIELD_RECT, true):
				continue
			var lo := Vector2i(floori((bounds.position.x - FIELD_RECT.position.x) / BIN_SIZE), floori((bounds.position.y - FIELD_RECT.position.y) / BIN_SIZE))
			var hi := Vector2i(floori((bounds.end.x - FIELD_RECT.position.x) / BIN_SIZE), floori((bounds.end.y - FIELD_RECT.position.y) / BIN_SIZE))
			for y in range(maxi(0, lo.y), mini(BIN_ROWS - 1, hi.y) + 1):
				for x in range(maxi(0, lo.x), mini(BIN_COLUMNS - 1, hi.x) + 1):
					_bins[y * BIN_COLUMNS + x].capsules.append(capsule)

func _distance(at: Vector2) -> float:
	var distance := absf(at.x - State.river_x(at.y)) - State.RIVER_HALF_WIDTH
	var x := clampi(floori((at.x - FIELD_RECT.position.x) / BIN_SIZE), 0, BIN_COLUMNS - 1)
	var y := clampi(floori((at.y - FIELD_RECT.position.y) / BIN_SIZE), 0, BIN_ROWS - 1)
	for capsule: Capsule in _bins[y * BIN_COLUMNS + x].capsules:
		var d := at.distance_to(capsule.a)
		if capsule.length_squared > 0.000001:
			var t := clampf((at - capsule.a).dot(capsule.b - capsule.a) / capsule.length_squared, 0.0, 1.0)
			d = at.distance_to(capsule.a.lerp(capsule.b, t))
		distance = minf(distance, d - capsule.radius)
	return clampf(distance, -DISTANCE_LIMIT, DISTANCE_LIMIT)

func _pixel_bounds(water: Dictionary) -> Rect2i:
	var first := Vector2(water.points[0][0], water.points[0][1])
	var bounds := Rect2(first, Vector2.ZERO)
	for point: Array in water.points:
		bounds = bounds.expand(Vector2(point[0], point[1]))
	# One complete pixel pad keeps bilinear neighbours in the dirty region.
	bounds = bounds.grow(float(water.width) * 0.5 + DISTANCE_LIMIT + maxf(PIXEL_SIZE.x, PIXEL_SIZE.y))
	var lo := Vector2i(floori((bounds.position.x - FIELD_RECT.position.x) / PIXEL_SIZE.x), floori((bounds.position.y - FIELD_RECT.position.y) / PIXEL_SIZE.y))
	var hi := Vector2i(ceili((bounds.end.x - FIELD_RECT.position.x) / PIXEL_SIZE.x), ceili((bounds.end.y - FIELD_RECT.position.y) / PIXEL_SIZE.y))
	lo = lo.clamp(Vector2i.ZERO, Vector2i(WIDTH, HEIGHT))
	hi = hi.clamp(Vector2i.ZERO, Vector2i(WIDTH, HEIGHT))
	return Rect2i(lo, hi - lo)

extends SceneTree

const State := preload("res://scripts/world/city_creation_state.gd")
const Field := preload("res://scripts/visual/city_creation_water_field.gd")
var failures: Array[String] = []
var exact_samples := 0
var maximum_error := 0.0
var update_ms: Array[float] = []

func _initialize() -> void:
	var city := State.new()
	city.initialize()
	city.houses.clear()
	city.roads.clear()
	city.plants.clear()
	var original := city.snapshot()
	var field := Field.new()
	field.setup(city)
	var texture_id := field.texture.get_instance_id()
	_check(field.texture.get_width() == 66 and field.texture.get_height() == 66 and field.texture.get_layers()==64 and field.image.get_width()==512 and field.image.get_format() == Image.FORMAT_RF, "RF field uses padded sixty-four-layer GPU tiles at full source resolution")
	_check(city.snapshot() == original, "setup does not author water or consume identities")
	_check_image(field, city, "base river")
	var original_bytes := field.image.get_data()
	var upload_count: int = field.diagnostics().uploads
	field.update()
	_check(not field.diagnostics().changed and field.diagnostics().texels_changed == 0 and field.diagnostics().uploads == upload_count, "no change means no upload or recalculation")
	# A one-point pond is an exact degenerate capsule.
	_check(city.add_water([Vector2(-7, 0)], 4.0, "pond").ok, "legal standalone pond")
	field.update()
	update_ms.append(field.diagnostics().elapsed_ms)
	_check(field.diagnostics().texels_changed > 0 and field.diagnostics().texels_recomputed < 4000, "one pond updates a local pixel rectangle")
	_check_unchanged_outside(field, original_bytes, Rect2(-7, 0, 0, 0).grow(2.0 + Field.DISTANCE_LIMIT + Field.PIXEL_SIZE.x))
	_check(field.texture.get_instance_id() == texture_id and field.diagnostics().uploads == upload_count + 1, "local layer upload keeps the texture array instance")
	_check_image(field, city, "pond")
	var joined: Array[Vector2] = [Vector2(-7, 0), Vector2(-5, 1)]
	_check(city.add_water(joined, 2.4, "pond").ok, "overlapping pond creates union")
	var ring: Array[Vector2] = [Vector2(-14, -6), Vector2(-10, -6), Vector2(-10, -10), Vector2(-14, -10), Vector2(-14, -6)]
	_check(city.add_water(ring, 1.4, "pond").ok, "closed stroke creates island")
	var canal: Array[Vector2] = [Vector2(State.river_x(8), 8), Vector2(-3, 9), Vector2(-7, 7)]
	_check(city.add_water(canal, 1.8, "channel").ok, "curved channel joins fixed river")
	field.update()
	update_ms.append(field.diagnostics().elapsed_ms)
	_check_image(field, city, "joined ponds, island, river canal")
	_check(field.sample_world(Vector2(-12, -8)) > 0.0 and field.sample_world(Vector2(-14, -8)) < 0.0, "island remains dry inside wet closed ring")
	_check(field.sample_world(Vector2(-5, 1)) < 0.0 and field.sample_world(Vector2(State.river_x(8), 8)) < 0.0, "joined pond and river remain signed inside")
	_check_interpolation(field, city)
	var saved := city.snapshot()
	var restored := State.new()
	_check(restored.restore(JSON.parse_string(JSON.stringify(saved))).ok, "real state JSON round trip")
	var restored_field := Field.new()
	restored_field.setup(restored)
	_check(restored_field.image.get_data() == field.image.get_data(), "save/read recreates identical RF bytes")
	# Replacing records through restore is handled on the same state object.
	_check(city.restore(original).ok, "restore initial city into same state")
	field.update()
	update_ms.append(field.diagnostics().elapsed_ms)
	_check(field.image.get_data() == original_bytes, "restore clears all old stroke distances")
	_check(field.texture.get_instance_id() == texture_id, "restore preserves texture instance")
	_check(city.restore(saved).ok, "restore joined water city")
	field.update()
	_check(field.image.get_data() == restored_field.image.get_data(), "restore additions recreate exact field")
	# Author/remove/undo/redo test actual State history, including deleted bounds.
	_check(city.remove_water_at(Vector2(-14, -8)).ok, "fill real ring")
	var before_fill := restored_field.image.get_data()
	field.update()
	update_ms.append(field.diagnostics().elapsed_ms)
	_check_unchanged_outside(field, before_fill, Rect2(-14, -10, 4, 4).grow(0.7 + Field.DISTANCE_LIMIT + Field.PIXEL_SIZE.x))
	_check_image(field, city, "ring deletion")
	var filled_bytes := field.image.get_data()
	_check(city.undo().ok, "undo filling")
	field.update()
	_check(field.image.get_data() == before_fill, "undo restores all field bytes")
	_check(city.redo().ok, "redo filling")
	field.update()
	_check(field.image.get_data() == filled_bytes, "redo restores all field bytes")
	var unchanged_uploads: int = field.diagnostics().uploads
	field.update()
	_check(field.diagnostics().uploads == unchanged_uploads and field.diagnostics().texels_recomputed == 0, "settled updates stay idle")
	_check(field.texture.get_instance_id() == texture_id, "all edits use same GPU instance")
	# Tiny degenerate segments use State's 1e-6 squared-length branch, not a
	# mathematically different segment definition. Dense diagonal crosses bins.
	city.waters.append({"id": "wfixture", "points": [[-17.0, 12.0], [-17.0001, 12.0001], [12.0, -12.0]], "width": 0.91})
	field.update()
	_check_image(field, city, "degenerate and diagonal indexed segments")
	# Existing-record changes require both old and new regions, and changing
	# width must remove the previous wider shoreline before laying the new one.
	city.waters[-1].points = [[-17.0, -12.0], [-11.0, -12.0]]
	city.waters[-1].width = 3.6
	field.update()
	_check_image(field, city, "existing stroke move and width expansion")
	city.waters[-1].width = 0.8
	field.update()
	_check_image(field, city, "existing stroke width contraction")
	# Non-geometric metadata changes count as a record change, but produce no
	# modified RF texels and therefore need no GPU upload.
	unchanged_uploads = field.diagnostics().uploads
	city.waters[-1].source = "metadata_test"
	field.update()
	_check(field.diagnostics().changed and field.diagnostics().texels_changed == 0 and field.diagnostics().uploads == unchanged_uploads, "record hash notices metadata without redundant GPU upload")
	if failures.is_empty():
		print("CITY_CREATION_WATER_FIELD PASS: %d exact centre samples; bilinear max %.6f m / bound %.6f m; initial %.3f ms; local edit ms %s; no-change uploads held; RF bytes/texture ID preserved" % [exact_samples, maximum_error, Field.INTERPOLATION_ERROR, field.diagnostics().initial_ms, update_ms])
		quit(0)
	else:
		for failure in failures:
			push_error(failure)
		quit(1)

func _check_image(field: RefCounted, city: RefCounted, label: String) -> void:
	var errors := 0
	for y in range(Field.HEIGHT):
		for x in range(Field.WIDTH):
			var at: Vector2 = field.pixel_world(Vector2i(x, y))
			var expected := Color(clampf(city.water_clearance(at), -Field.DISTANCE_LIMIT, Field.DISTANCE_LIMIT), 0, 0, 1).r
			if field.image.get_pixel(x, y).r != expected:
				errors += 1
			exact_samples += 1
	_check(errors == 0, "%s: %d pixel mismatches to analytic State" % [label, errors])

func _check_unchanged_outside(field: RefCounted, before: PackedByteArray, region: Rect2) -> void:
	var after: PackedByteArray = field.image.get_data()
	var errors := 0
	for y in range(Field.HEIGHT):
		for x in range(Field.WIDTH):
			var at: Vector2 = field.pixel_world(Vector2i(x, y))
			# Integer bounding rectangles round outwards by at most another pixel.
			if region.grow(Field.PIXEL_SIZE.x).has_point(at):
				continue
			var offset := (y * Field.WIDTH + x) * 4
			for channel in range(4):
				if after[offset + channel] != before[offset + channel]:
					errors += 1
	_check(errors == 0, "all four RF bytes outside dirty footprint stay identical")

func _check_interpolation(field: RefCounted, city: RefCounted) -> void:
	for y in range(128):
		for x in range(128):
			var at := Field.FIELD_RECT.position + Vector2((x + 0.731) / 128.0, (y + 0.319) / 128.0) * Field.FIELD_RECT.size
			var expected: float = clampf(city.water_clearance(at), -Field.DISTANCE_LIMIT, Field.DISTANCE_LIMIT)
			var error := absf(field.sample_world(at) - expected)
			maximum_error = maxf(maximum_error, error)
	_check(maximum_error <= Field.INTERPOLATION_ERROR + 0.000001, "bilinear error stays inside Lipschitz bound")

func _check(condition: bool, label: String) -> void:
	if not condition:
		failures.append(label)

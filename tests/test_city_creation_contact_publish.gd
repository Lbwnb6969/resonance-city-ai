extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Field = preload("res://scripts/visual/city_creation_contact_field.gd")
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	call_deferred("_run")

func _run() -> void:
	var city := State.new()
	city.initialize()
	var render := Renderer.new()
	root.add_child(render)
	render.setup(city)
	var original_texture: Texture2DArray = render.ground_contact_field.texture
	var world_tint: Texture2D = render.grass_world_tint
	_check(world_tint != null and world_tint.get_width()==512 and world_tint.get_height()==512,"single extracted world tint uploaded")
	_check(render.ground_material.get_shader_parameter("grass2_world_tint")==world_tint and render.meadow.materials.lawn.get_shader_parameter("grass2_world_tint")==world_tint,"ground and grass share one world tint texture")
	_check(render.ground_material.get_shader_parameter("ground_contact_field") == original_texture,"ground uses published field")
	_check(render.meadow.materials.lawn.get_shader_parameter("ground_contact_field") == original_texture,"grass uses same field")
	_check(city.add_road([Vector2(-15,-11),Vector2(-13.5,-11.3)]).ok,"actual road transaction")
	render.request_budget_rebuild()
	var report := {}
	var polls := 0
	while polls < 2000:
		report = render.poll_budget_rebuild(3.5,false)
		_check(render.ground_contact_field.texture == original_texture,"preparation does not replace visible field")
		_check(render.meadow.materials.lawn.get_shader_parameter("ground_contact_field") == original_texture,"hidden installation does not mutate shared grass shader")
		if report.ready: break
		polls += 1
		await process_frame
	_check(bool(report.get("ready",false)),"budget work ready")
	var staged_texture: Texture2DArray = render.budget_rebuild.staging.ground_contact_field.texture
	_check(staged_texture == original_texture and not render.budget_rebuild.staging.ground_contact_field.tiled.changed_layers.is_empty(),"staging retains live array while preparing private dirty layers")
	_check(render.budget_rebuild.staging.ground_contact_field.changed,"GPU upload remains pending until publication")
	render.cancel_budget_rebuild()
	_check(render.grass_world_tint==world_tint,"cancel does not decode or replace constant world tint")
	_check(render.ground_contact_field.texture == original_texture,"cancel discards uploaded pending texture")
	# A replacement request starts from the published version and must still
	# include every unsent geometry change, even after the first was canceled.
	_check(city.add_road([Vector2(-15,-11),Vector2(-16,-10)]).ok,"second actual road transaction")
	render.request_budget_rebuild()
	polls = 0
	while polls < 2000:
		report = render.poll_budget_rebuild(3.5,true)
		if report.get("committed",false): break
		polls += 1
		await process_frame
	_check(bool(report.get("committed",false)),"latest version commits")
	var expected := Field.new()
	expected.prepare(city)
	_check(render.ground_contact_field.pixels == expected.pixels,"latest worker pixels equal complete synchronous rebuild")
	var published: Texture2DArray = render.ground_contact_field.texture
	_check(render.grass_world_tint==world_tint and render.meadow.materials.lawn.get_shader_parameter("grass2_world_tint")==world_tint,"latest publication retains same shared world tint on replaced grass")
	_check(published == original_texture and render.ground_material.get_shader_parameter("ground_contact_field") == published,"commit atomically binds ground")
	_check(render.meadow.materials.lawn.get_shader_parameter("ground_contact_field") == published,"commit atomically binds retained and replaced grass")
	print("CONTACT_PUBLISH_STATS ",report.get("stats",{}))
	render.queue_free()
	await process_frame
	print("CONTACT_PUBLISH_RESULT ",checks," checks, ",failures.size()," failures")
	for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)

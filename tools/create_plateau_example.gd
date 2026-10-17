extends SceneTree
## Preserve the previous landscape and add one editable broad plateau.
const State=preload("res://scripts/world/city_creation_state.gd")
const DEST="res://数据/台地河湾样例.json"
func _initialize() -> void: _run.call_deferred()
func _run() -> void:
	assert(not FileAccess.file_exists(DEST))
	var city=State.new()
	assert(city.load_city("res://数据/庭院河湾样例.json").ok)
	assert(city.add_terrain_stroke([Vector2(-15,-2)],"plateau",3.5,1.0,2).ok)
	assert(city.save_city(DEST).ok)
	var restored=State.new()
	assert(restored.load_city(DEST).ok)
	city.prepare_ground_height();restored.prepare_ground_height()
	assert(city._ground_terrain.vertices==restored._ground_terrain.vertices)
	print("PLATEAU_EXAMPLE PASS schema=",city.snapshot().schema," height=",city.ground_height(Vector2(-15,-2)))
	quit()

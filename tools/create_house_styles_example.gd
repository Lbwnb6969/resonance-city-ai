extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const DEST="res://数据/建筑街景样例.json"
func _initialize() -> void: _run.call_deferred()
func _run() -> void:
	assert(not FileAccess.file_exists(DEST))
	var city=State.new()
	assert(city.load_city("res://数据/街坊连奏样例.json").ok)
	for id: String in ["h1","h3","h5"]: assert(city.set_house_style(id,"timber").ok)
	for id: String in ["h2","h4","h7"]: assert(city.set_house_style(id,"stone").ok)
	assert(city.save_city(DEST).ok)
	var other=State.new();assert(other.load_city(DEST).ok)
	assert(other.houses==city.houses and other.snapshot().schema==5)
	print("HOUSE_STYLES_EXAMPLE PASS houses=",city.houses.size()," schema=",city.snapshot().schema)
	quit()

extends RefCounted
## Actual initialize_free() snapshot captured at b76c0144 before the opening
## cutover. Historical arithmetic fixtures must not impersonate new free towns.
const State=preload("res://scripts/world/city_creation_state.gd")
static func fresh()->RefCounted:
	var city:=State.new()
	assert(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://tools/fixtures/pre_cutoff_free_schema20.json"))).ok)
	return city

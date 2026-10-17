extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Canopy=preload("res://scripts/visual/city_creation_terrace_canopy.gd")
const SOURCE="res://数据/建筑街景样例.json"
const DEST="res://数据/露台花架样例.json"
func _initialize() -> void: _run.call_deferred()
func _must(result: Dictionary) -> void: assert(result.ok,str(result))
func _run() -> void:
	assert(not FileAccess.file_exists(DEST),"Keep authored sample immutable; move obsolete versions to 废弃 before regeneration.")
	var source_bytes:=FileAccess.get_file_as_bytes(SOURCE)
	var source: Dictionary=JSON.parse_string(source_bytes.get_string_from_utf8())
	var city=State.new();_must(city.restore(source))
	var original=State.new();_must(original.restore(source))
	for target: Array in [["h1",0,0,1],["h7",0,4,1]]:
		_must(city.add_cell(str(target[0]),int(target[1]),int(target[2]),int(target[3]),"terrace"))
	var canopies: Array=[]
	for house: Dictionary in city.houses:
		var choice: Dictionary=Canopy.choose(city.houses,house)
		if not choice.is_empty(): canopies.append({"house_id":house.id,"choice":choice})
	assert(canopies.size()>=3,"Actual upper terraces must derive at least three legal canopies.")
	assert(city.houses.size()==original.houses.size() and city.roads==original.roads and city.plants==original.plants and city.waters==original.waters and city.terrain_strokes==original.terrain_strokes and city.districts==original.districts)
	for value: Variant in city.life_progress.values(): assert(value==0)
	assert(city.bakery_supply.is_empty() and city.workshop_supply.is_empty() and city.venue_commissions.is_empty() and city.growth_memories.is_empty() and city.journey_checkpoint.is_empty())
	_must(city.save_city(DEST))
	var restored=State.new();_must(restored.load_city(DEST))
	assert(restored.houses==city.houses and FileAccess.get_file_as_bytes(SOURCE)==source_bytes)
	print("TERRACE_CANOPY_EXAMPLE ",JSON.stringify({"ok":true,"path":DEST,"houses":city.houses.size(),"roads":city.roads.size(),"canopies":canopies,"scope":"Two real State upper-terrace additions only; existing source buildings, styles, roads, terrain, plants, water and district records retained; all business/journal/checkpoint fields remain zero or empty."}))
	quit()

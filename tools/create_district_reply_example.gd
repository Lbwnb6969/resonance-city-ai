extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
const Links=preload("res://scripts/world/city_creation_district_links.gd")
const DEST="res://数据/街坊连奏样例.json"
func _initialize() -> void:
	if FileAccess.file_exists(DEST): push_error("preserve existing authored example");quit(1);return
	var state=State.new()
	var restored: Dictionary=state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/地貌河湾样例.json")))
	if not restored.ok: push_error(str(restored));quit(1);return
	# Keep all authored houses, roads and terrain. Add a contrasting right-hand
	# neighborhood beside the sample's existing warm adaptive left street.
	var points: Array[Vector2]=[Vector2(-2.4,-9),Vector2(-2.4,8)]
	var district: Dictionary=state.add_district(points,4.0,"deep")
	if not district.ok: push_error(str(district));quit(1);return
	state.set_district_name(str(district.district_id),"蓝瓦回声街")
	var network=Network.new();network.state=state;network._build_graph()
	var pairs: Array=Links.new().derive(state,network)
	if pairs.is_empty(): push_error("example needs a true adjacent routed reply pair");quit(1);return
	var saved: Dictionary=state.save_city(DEST)
	if not saved.ok: push_error(str(saved));quit(1);return
	print("DISTRICT_REPLY_EXAMPLE ",JSON.stringify({"houses":state.houses.size(),"districts":state.districts.size(),"pairs":pairs}))
	quit()

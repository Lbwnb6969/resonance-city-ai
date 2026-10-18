extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Bunting=preload("res://scripts/visual/city_creation_bunting.gd")
const Flora=preload("res://scripts/visual/city_creation_harmony_flora.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _view(parent: Node)->Dictionary:
	var result: Dictionary={}
	for child: Node in parent.get_children():
		var row: Array=[child.get_class()]
		if child is Node3D:row.append(child.transform)
		if child is MeshInstance3D:
			for surface in range(child.mesh.get_surface_count()):row.append(child.mesh.surface_get_arrays(surface))
		if child is MultiMeshInstance3D:row.append(child.multimesh.instance_count)
		row.append(_view(child));result[str(child.name)]=row
	return result
func _node_ids(parent: Node)->Dictionary:
	var result: Dictionary={}
	for child: Node in parent.get_children():result[str(child.name)]=child.get_instance_id()
	return result
func _parity(town,label: String)->void:
	var cold:=Node3D.new();root.add_child(cold)
	var wires:=Bunting.build_bunting(town,cold);var pots:=Flora.build(town,cold)
	check(wires==int(town.ecology_layer.get_meta("bunting_count")) and pots==int(town.ecology_layer.get_meta("harmony_flowerpots")) and _view(cold)==_view(town.ecology_layer),"original complete ecology meshes and counts agree: "+label)
	var cached: Array[Dictionary]=Bunting._pairs(town.state,Bunting._anchors(town),town.ecology.wire_context)
	check(cached==Bunting._pairs(town.state,Bunting._anchors(town)),"cached span decisions preserve exact greedy pairs: "+label)
	var records_ok:=true
	for house: Dictionary in town.state.houses:
		var id:=str(house.id)
		if town.ecology.flora_records.has(id):records_ok=records_ok and town.ecology.flora_records[id]==Flora._placement(town,house)
	check(records_ok,"cached flowerpot coordinates and road clearance match cold layout: "+label)
	var nectar: Array=town.wildlife._nectars.duplicate();var perches: Array=town.wildlife._perches.duplicate()
	town.wildlife._porch_habitats.clear();town.wildlife.refresh_habitats(town)
	check(nectar==town.wildlife._nectars and perches==town.wildlife._perches,"cached wildlife perches/porch nectar agree with full refresh: "+label)
	cold.free()
func _run()->void:
	var city:=State.new();city.initialize()
	check(city.set_house_role("h5","garden_cafe").ok and city.set_house_role("h6","workshop").ok,"actual role edits create cafe and workshop")
	var town:=Renderer.new();root.add_child(town);town.setup(city);town.set_process(false);town.wildlife.set_process(false)
	_parity(town,"initial")
	var identity:=_node_ids(town.ecology_layer);var counts: Dictionary=town.ecology.stats.duplicate()
	for ignored in range(20):town.refresh_ecology()
	check(_node_ids(town.ecology_layer)==identity and town.ecology.stats.habitat_updates==counts.habitat_updates and town.ecology.stats.bunting_queries==counts.bunting_queries and town.ecology.stats.flora_updates==counts.flora_updates,"twenty unchanged polls rebuild no ecology view and retain every GPU root")
	check(city.produce_bread("h2",2) and city.serve_bread("h2","h1"),"actual completed purchase earns first household food credit")
	town.refresh_ecology()
	check(town.ecology.stats.habitat_updates==int(counts.habitat_updates)+1 and town.ecology.stats.flora_updates==int(counts.flora_updates)+1 and town.ecology.stats.bunting_queries==counts.bunting_queries,"first food credit changes nectar/flowerpots but never queries or rebuilds unrelated festive wires")
	_parity(town,"food")
	check(city.serve_bread("h2","h3") and city.complete_tea("h5",["h1","h3"]),"real food credits settle a two-household tea party exactly once")
	town.refresh_ecology();_parity(town,"tea")
	var flora_id: int=town.ecology_layer.get_instance_id();counts=town.ecology.stats.duplicate()
	check(city.produce_craft("h6",1) and city.reserve_craft("h6","h3","h1") and city.complete_craft("h6","h3","h1"),"actual conserved woodwork delivery earns third harmony point")
	town.refresh_ecology()
	check(town.ecology.stats.habitat_updates==counts.habitat_updates and town.ecology.stats.bunting_queries==counts.bunting_queries and town.ecology.stats.flora_updates==int(counts.flora_updates)+1,"second-to-third harmony point changes flowers only; habitat and festive consumers retain state")
	_parity(town,"craft")
	city.grant_resonance_afterglow(["h6"],1.);town.refresh_ecology();city.advance_resonance_afterglow(2.);town.refresh_ecology();_parity(town,"expired glow")
	check(city.add_road([Vector2(-25,12),Vector2(-20,12)]).ok,"real west-bank road edit invalidates geometry")
	town.rebuild();_parity(town,"road edit")
	check(city.undo().ok,"road edit undo succeeds");town.rebuild();_parity(town,"undo")
	check(city.add_terrain_stroke([Vector2(-22,-7)],"raise",3.5,.4).ok,"actual terrain brush changes protected ground")
	town.rebuild();_parity(town,"terrain")
	var wires_before: int=town.ecology_layer.get_meta("bunting_count")
	check(wires_before>0 and city.remove_house("h2").ok,"removing a real upstairs bakery retires a selected wire anchor")
	town.rebuild();_parity(town,"removed anchor")
	check(int(town.ecology_layer.get_meta("bunting_count"))<wires_before,"geometry invalidation removes the formerly selected wire rather than reusing a stale span")
	check(city.undo().ok,"removed upstairs anchor can be restored by undo")
	town.rebuild();_parity(town,"restored anchor")
	check(int(town.ecology_layer.get_meta("bunting_count"))==wires_before,"anchor undo restores the exact original festive wire count")
	town.set_light_phase(2)
	var night_ok:=true
	for lamp: MeshInstance3D in town.ecology_layer.find_children("BuntingLanterns","MeshInstance3D",true,false):night_ok=night_ok and is_equal_approx(float(lamp.material_override.get_shader_parameter("warmth")),1.25)
	check(night_ok and town.wildlife._night,"independently retained wires still follow real night warmth and firefly mode")
	check(town.ecology_layer.get_instance_id()==flora_id,"all updates retain the public ecology layer")
	var report: Dictionary=town.ecology.stats.duplicate();town.free();print("ECOLOGY_REFRESH ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"stats":report,"failures":failures}));quit(0 if failures.is_empty() else 1)

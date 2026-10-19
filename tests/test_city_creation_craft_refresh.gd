extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
class CountingRenderer:
	extends "res://scripts/visual/city_creation_renderer.gd"
	var frontage_queries:=0
	func _frontage_signature(house: Dictionary)->Array:
		frontage_queries+=1
		return super._frontage_signature(house)
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _identities(town)->Dictionary:
	var result: Dictionary={}
	for rows: Dictionary in [town.craft.roots,town.craft.culture_roots,town.craft.mechanism_roots,town.quality_visual.roots]:
		for id: String in rows:result[str(rows[id].name)]=rows[id].get_instance_id()
	return result
func _values(parent: Node)->Array:
	var result: Array=[]
	for child: Node in parent.get_children():
		var row: Array=[child.name,child.get_class()]
		if child is Node3D:row.append(child.transform)
		if child is MeshInstance3D:
			for surface in range(child.mesh.get_surface_count()):row.append(child.mesh.surface_get_arrays(surface))
		if child is MultiMeshInstance3D:row.append(child.multimesh.buffer)
		row.append(_values(child));result.append(row)
	return result
func _snapshot(town)->Dictionary:
	var result: Dictionary={}
	for rows: Dictionary in [town.craft.roots,town.craft.culture_roots,town.craft.mechanism_roots,town.quality_visual.roots]:
		for id: String in rows:result[str(rows[id].name)]=_values(rows[id])
	return result
func _full_parity(town,label: String)->void:
	var before:=_snapshot(town)
	town.craft.progress(town);town.quality_visual.progress(town)
	check(before==_snapshot(town),label)
func _run()->void:
	var city:=State.new()
	check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"actual flagship restores")
	var town:=CountingRenderer.new();root.add_child(town);town.setup(city);town.set_process(false);town.wildlife.set_process(false)
	var identity:=_identities(town);var structural: Dictionary={}
	for id: String in town.house_roots:structural[id]=town.house_roots[id].get_instance_id()
	var statuses: Dictionary={};var shops: Dictionary={};var targets: Dictionary={};var home:=""
	for house: Dictionary in city.houses:
		if str(house.role) in ["workshop","atelier","clockmaker"]:
			shops[str(house.role)]=str(house.id);statuses[str(house.id)]=city.workshop_status(str(house.id))
		elif str(house.role)=="residential":
			if home.is_empty():home=house.id
			if not targets.has(city.house_era(house)) and city.improvement_level(house.id)<3 and city.culture_level(house.id)==0 and city.mechanism_level(house.id)<2:targets[city.house_era(house)]=str(house.id)
	for shop: String in shops.values():city.return_craft(shop)
	town.update_workshop_supply(statuses);town.frontage_queries=0
	var started:=Time.get_ticks_usec()
	for ignored in range(20):town.update_craft_progress();town.update_workshop_supply(statuses)
	var polling_us:=Time.get_ticks_usec()-started
	check(town.frontage_queries==0 and _identities(town)==identity,"twenty unchanged stock polls query no permanent frontage and retain every earned decor root")
	check(targets.size()==4,"actual delivered-trait cases cover all four eras")
	for era: String in targets:
		var target: String=targets[era]
		for kind: String in ["upgrade","art","musicbox"]:
			var shop: String=shops[{"upgrade":"workshop","art":"atelier","musicbox":"clockmaker"}[kind]]
			if int(city.workshop_status(shop).stock)==0:city.produce_craft(shop,1)
			var before:=_identities(town)
			check(city.reserve_craft(shop,home,target,kind) and city.complete_craft(shop,home,target),"real conserved "+kind+" installation in "+era)
			town.frontage_queries=0
			town.update_craft_progress()
			check(town.frontage_queries==0,"delivered "+kind+" in "+era+" reuses published facade and art/clock mount geometry")
			var after:=_identities(town);var untouched:=true
			for key: String in before:
				if key.ends_with("_"+target):continue
				untouched=untouched and after.get(key,-1)==before[key]
			check(untouched,"delivery retains unrelated craft/art/clock/quality nodes in "+era)
			_full_parity(town,"incremental meshes and transforms equal full refresh for "+kind+" in "+era)
	# Rendering-only quality fixture and tier clearing use the same diff path;
	# actual earned tiers/conservation are verified by the existing Life tests.
	var target: String=targets.values()[0]
	city.building_quality[target]={"level_tier":5,"source_id":target,"street":true,"amenity":true,"prestige":true}
	town.update_craft_progress();_full_parity(town,"new quality fields refresh exact earned decorations")
	city.building_quality.erase(target);city.house_improvements.erase(target);city.house_culture.erase(target);city.house_clockwork.erase(target)
	town.update_craft_progress();_full_parity(town,"removed traits retire only their own old roots")
	var index: int=city._house_index(target);var before_edit:=city.houses[index].duplicate(true)
	city.houses[index].origin[0]+=1.;city.revision+=1;town.building_context.prepare(city.houses,city.roads)
	town.update_craft_progress();_full_parity(town,"geometry revision refreshes all frontage dependencies")
	city.houses[index]=before_edit;city.revision+=1;town.building_context.prepare(city.houses,city.roads)
	town.update_craft_progress();_full_parity(town,"restored geometry refreshes frontage dependencies")
	var stable:=true
	for id: String in structural:stable=stable and town.house_roots[id].get_instance_id()==structural[id]
	check(stable,"stock and earned-trait refresh never replace structural buildings")
	town.free();print("CRAFT_REFRESH ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"polling_us":polling_us,"failures":failures}));quit(0 if failures.is_empty() else 1)

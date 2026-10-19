extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
class CountingRenderer:
	extends "res://scripts/visual/city_creation_renderer.gd"
	var frontage_queries:=0
	func _frontage_signature(house: Dictionary)->Array:
		frontage_queries+=1
		return super._frontage_signature(house)
class DirectQuality:
	extends "res://scripts/visual/city_creation_quality_visual.gd"
	func _welcome(renderer,frame:Node3D)->void:_draw_welcome(renderer,frame)
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _values(parent:Node)->Array:
	var result:Array=[]
	for child:Node in parent.get_children():
		var row:Array=[child.get_class()]
		if child is Node3D:row.append(child.transform)
		if child is MeshInstance3D:
			for surface in range(child.mesh.get_surface_count()):row.append(child.mesh.surface_get_arrays(surface))
		if child is MultiMeshInstance3D:row.append(child.multimesh.buffer)
		row.append(_values(child));result.append(row)
	return result
func _same_meshes(a:Node,b:Node)->bool:
	var left:=a.find_children("*","MeshInstance3D",true,false);var right:=b.find_children("*","MeshInstance3D",true,false)
	if left.size()!=right.size():return false
	for i in range(left.size()):
		var first:Mesh=left[i].mesh;var second:Mesh=right[i].mesh
		if first.get_surface_count()!=second.get_surface_count():return false
		var am:Material=left[i].material_override;var bm:Material=right[i].material_override
		if am.get_class()!=bm.get_class():return false
		if am is StandardMaterial3D:
			if am.albedo_color!=bm.albedo_color or am.vertex_color_use_as_albedo!=bm.vertex_color_use_as_albedo or am.emission_enabled!=bm.emission_enabled or am.emission!=bm.emission:return false
		elif am is ShaderMaterial:
			if am.shader!=bm.shader:return false
			for uniform:Dictionary in am.shader.get_shader_uniform_list():
				if am.get_shader_parameter(uniform.name)!=bm.get_shader_parameter(uniform.name):return false
		for surface in range(first.get_surface_count()):
			var av:=first.surface_get_arrays(surface);var bv:=second.surface_get_arrays(surface)
			var ai:PackedInt32Array=av[Mesh.ARRAY_INDEX] if av[Mesh.ARRAY_INDEX]!=null else PackedInt32Array(range(av[Mesh.ARRAY_VERTEX].size()))
			var bi:PackedInt32Array=bv[Mesh.ARRAY_INDEX] if bv[Mesh.ARRAY_INDEX]!=null else PackedInt32Array(range(bv[Mesh.ARRAY_VERTEX].size()))
			if ai.size()!=bi.size():return false
			for j in range(ai.size()):
				for slot in [Mesh.ARRAY_VERTEX,Mesh.ARRAY_NORMAL,Mesh.ARRAY_TEX_UV]:
					if av[slot]==null or bv[slot]==null:
						if av[slot]!=bv[slot]:return false
						continue
					# ArrayMesh packs normals on each commit; a second packing can
					# differ by <.012 degrees. Positions/UVs keep the tighter bound.
					if av[slot][ai[j]].distance_to(bv[slot][bi[j]])>(.0002 if slot==Mesh.ARRAY_NORMAL else .00002):return false
				if av[Mesh.ARRAY_COLOR]!=null and av[Mesh.ARRAY_COLOR][ai[j]]!=bv[Mesh.ARRAY_COLOR][bi[j]]:return false
	return true
func _run()->void:
	var city:=State.new();city.initialize();var renderer:=CountingRenderer.new();root.add_child(renderer);renderer.setup(city);renderer.set_process(false);renderer.wildlife.set_process(false)
	var reference:=DirectQuality.new();reference.setup(renderer)
	var layouts_match:=true
	for house:Dictionary in city.houses:
		for level in range(1,4):layouts_match=layouts_match and renderer.craft.placements(renderer,house,level)==renderer.craft._placements(renderer,house,level)
	_check(layouts_match,"prepared craft layouts for every house and level match independent original face and clearance selection")
	var cached_layout:Dictionary=renderer.craft.layouts.h1;var cached_entrances:Array=renderer.house_entrances("h1")
	var cached_passages:Array=renderer.house_passages("h1")
	_check(city.set_house_palette("h1",2).ok,"actual palette edit changes only the published appearance revision")
	renderer.retain_geometry_views()
	_check(is_same(cached_layout,renderer.craft.layouts.h1) and is_same(cached_entrances,renderer.house_entrances("h1")) and renderer.craft.placements(renderer,city.houses[0],3)==renderer.craft._placements(renderer,city.houses[0],3),"palette publication reuses identical prepared layout and doorway records and matches a cold layout")
	_check(is_same(cached_passages,renderer.house_passages("h1")) and cached_passages==city.house_passages("h1"),"palette publication retains the same exact prepared passage view")
	for turn in range(4):
		var baked:=Node3D.new();var direct:=Node3D.new();renderer.add_child(baked);renderer.add_child(direct)
		for pair:Array in [[baked,renderer.quality_visual],[direct,reference]]:
			var frame:=Node3D.new();pair[0].add_child(frame);frame.position=Vector3(-13.7,2.4,5.3);frame.rotation.y=turn*PI*.5
			pair[1]._welcome(renderer,frame);renderer._merge_meshes(pair[0])
		if turn>0:_check(int(baked.get_meta("material_batching").cache_hits)>=3,"shared welcome prefab reuses all three plain-color source batches after warming at quarter-turn %d"%turn)
		_check(_same_meshes(baked,direct),"raised entrance at quarter-turn %d retains the original transformed triangles and material batches"%turn)
		baked.free();direct.free()
	# Visual-only tier fixtures exercise every production renderer branch;
	# earned-service and save legality are covered by the real Quality/Life tests.
	for tier in range(2,6):
		renderer.frontage_queries=0
		city.building_quality.h1={"level_tier":tier,"source_id":"h1","street":true,"amenity":true}
		renderer.quality_visual.flash(renderer,[{"house_id":"h1","from":tier-1,"to":tier}])
		_check(renderer.frontage_queries==0,"tier %d reuses published frontage and arcade inputs without querying the city"%tier)
		var targets:Array[String]=["h1"];reference.progress(renderer,targets)
		_check(_same_meshes(renderer.quality_visual.roots.h1,reference.roots.h1),"tier %d pre-baked and original primitive paths retain every indexed triangle normal UV color and draw batch"%tier)
		var warm:=_values(renderer.quality_visual.roots.h1)
		renderer.quality_visual.geometry_inputs.erase("h1");renderer.quality_visual.fingerprints.erase("h1")
		var only: Array[String]=["h1"];renderer.quality_visual.progress(renderer,only)
		_check(warm==_values(renderer.quality_visual.roots.h1),"tier %d cached output matches forced cold frontage/arcade geometry exactly"%tier)
		var features: Array=renderer.quality_visual.roots.h1.get_meta("features")
		_check(features.has("welcome_stones") and features.has("door_flowerpot") and features.has("warm_porch_lamp"),"tier %d retains actual welcome apron, pot and lamp"%tier)
		_check(features.has("flowerbox_shutters")==bool(tier>=3) and features.has("bronze_chime")==bool(tier>=3),"tier %d gates window boxes and chimes at third level"%tier)
		_check(features.has("golden_weather_vane")==bool(tier==5) and features.has("painted_rose_window")==bool(tier==5),"tier %d gates permanent gold vane and rose glazing at fifth level"%tier)
	city.building_quality.h3={"level_tier":2,"source_id":"h3","street":true,"amenity":false};renderer.quality_visual.progress(renderer)
	var unrelated:int=renderer.quality_visual.roots.h3.get_instance_id();var unrelated_values:=_values(renderer.quality_visual.roots.h3)
	city.building_quality.h1.level_tier=4;renderer.quality_visual.flash(renderer,[{"house_id":"h1","from":3,"to":4}])
	_check(renderer.quality_visual.roots.h3.get_instance_id()==unrelated and _values(renderer.quality_visual.roots.h3)==unrelated_values,"one actual upgrade leaves the unrelated household root and geometry unchanged")
	renderer.quality_visual.flash(renderer,[{"house_id":"h999999","from":1,"to":2}])
	_check(renderer.quality_visual.roots.has("h1") and renderer.quality_visual.roots.h3.get_instance_id()==unrelated,"a removed event target never clears unrelated quality roots")
	city.building_quality.clear();renderer.quality_visual.progress(renderer)
	_check(renderer.quality_visual.roots.is_empty(),"clearing real quality records still removes old visual roots through the full refresh API")
	city.building_quality.h1={"level_tier":2,"source_id":"h1","street":true,"amenity":false};renderer.quality_visual.flash(renderer,[])
	_check(renderer.quality_visual.roots.has("h1"),"empty-event flash retains the original full-refresh API behavior")
	_check(city.add_road([Vector2(-25,12),Vector2(-20,12)]).ok,"real edit changes the scene revision before worker publication")
	var generation: int=renderer.request_budget_rebuild();var deadline:=Time.get_ticks_msec()+30000
	while renderer.budget_rebuild.committed_generation<generation and Time.get_ticks_msec()<deadline:
		renderer.poll_budget_rebuild(3.5);await process_frame
	_check(renderer.budget_rebuild.committed_generation==generation,"actual worker and budget queue publish the edited geometry")
	var same:=true
	for house: Dictionary in city.houses:
		var id:=str(house.id)
		var prepared: int=renderer.quality_visual._geometry_signature(renderer,house)
		var cold:=hash([house,renderer._frontage_signature(house),renderer.ArcadePlan.for_house(city,house)])
		same=same and prepared==cold and renderer.quality_visual.geometry_inputs[id][0]==city.get_instance_id()
		var facade:Dictionary=renderer.craft.facades[id]
		same=same and facade.frontage==renderer._frontage_signature(house) and facade.arcades==renderer.ArcadePlan.for_house(city,house) and facade.entries==city.house_entrances(id) and facade.passages==city.house_passages(id) and renderer.house_passages(id)==city.house_passages(id)
		for level in range(1,4):same=same and renderer.craft.placements(renderer,house,level)==renderer.craft._placements(renderer,house,level)
	_check(same,"worker geometry cache rebinds original city identity and matches independently recomputed inputs")
	_check(city.undo().ok,"real road edit can be undone")
	renderer.rebuild()
	var house: Dictionary=city.houses[0]
	_check(renderer.quality_visual._geometry_signature(renderer,house)==hash([house,renderer._frontage_signature(house),renderer.ArcadePlan.for_house(city,house)]),"undo rebuild refreshes cached original frontage and arcade geometry")
	_check(renderer.craft.facades.size()==city.houses.size() and renderer.craft.facades[str(house.id)].frontage==renderer._frontage_signature(house),"undo rebuild retires old facades and prepares the restored door and art/clock geometry")
	# A burst changes gameplay immediately; only its derived meshes are queued.
	var events:Array=[];var ids:Array[String]=[]
	for index in range(mini(6,city.houses.size())):
		var id:=str(city.houses[index].id);ids.append(id)
		city.building_quality[id]={"level_tier":2,"source_id":id,"street":true,"amenity":true}
	renderer.quality_visual.progress(renderer)
	for id:String in ids:
		city.building_quality[id].level_tier=3;events.append({"house_id":id,"from":2,"to":3})
	var particles_before:int=renderer.quality_visual.next_particle
	renderer.quality_visual.schedule_flash(renderer,events)
	city.building_quality[ids[0]].level_tier=4
	renderer.quality_visual.schedule_flash(renderer,[{"house_id":ids[0],"from":3,"to":4}])
	_check(renderer.quality_visual.pending_events.size()==ids.size(),"repeated awards coalesce the same household without duplicating queued meshes")
	var saved:Dictionary=city.snapshot();var count_before:int=renderer.quality_visual.build_count
	renderer.update_craft_progress()
	_check(renderer.quality_visual.build_count==count_before and renderer.quality_visual.pending_events.size()==ids.size(),"ordinary workshop polling cannot synchronously rebuild an outstanding upgrade burst")
	for ignored in range(ids.size()):
		var before:Dictionary={}
		for id:String in ids:before[id]=renderer.quality_visual.roots[id].get_instance_id()
		renderer.quality_visual.poll(renderer)
		var changed:=0
		for id:String in ids:
			if before[id]!=renderer.quality_visual.roots[id].get_instance_id():changed+=1
		_check(changed==1,"each publication step replaces exactly one upgraded household")
	_check(renderer.quality_visual.pending_events.is_empty() and city.snapshot()==saved,"draining visual work changes no save data or already-earned reward")
	_check(renderer.quality_visual.next_particle-particles_before==4,"a queued burst preserves the original four-celebration limit")
	var exact:=true
	reference.progress(renderer,ids)
	for id:String in ids:exact=exact and _same_meshes(renderer.quality_visual.roots[id],reference.roots[id])
	_check(exact,"all queued decorations match the original synchronous meshes including a coalesced later tier")
	renderer.quality_visual.schedule_flash(renderer,events);renderer.rebuild()
	_check(renderer.quality_visual.pending_events.is_empty(),"full rebuild supersedes old queued celebrations with current saved quality geometry")
	renderer.quality_visual.schedule_flash(renderer,events)
	var other_city:=State.new();other_city.initialize();renderer.state=other_city
	var before_switch:int=renderer.quality_visual.build_count
	renderer.quality_visual.poll(renderer)
	_check(renderer.quality_visual.pending_events.is_empty() and renderer.quality_visual.build_count==before_switch,"queued old-town upgrades cannot publish into another city with matching house IDs")
	renderer.state=city
	renderer.free();print("TARGETED_QUALITY_VISUAL ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

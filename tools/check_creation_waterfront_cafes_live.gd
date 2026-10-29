extends "res://tools/check_creation_market_frontages_live.gd"
const TeaFixture=preload("res://tools/fixtures/city_creation_waterfront_cafes_fixture.gd")
func tea_arrays()->Dictionary:
	var result:Dictionary={}
	for id:String in demo.town.cafes.roots:
		var node:Node3D=demo.town.cafes.roots[id];var parts:Array=[]
		for child:GeometryInstance3D in node.find_children("*","GeometryInstance3D",true,false):
			parts.append(child.global_transform)
			var mesh:Mesh=child.mesh if child is MeshInstance3D else child.multimesh.mesh
			if child is MultiMeshInstance3D:parts.append(child.multimesh.buffer)
			for surface in range(mesh.get_surface_count()):parts.append(mesh.surface_get_arrays(surface))
		result[id]=parts
	return result
func tea_meshes()->Dictionary:
	var result:Dictionary={};var arrays:=tea_arrays()
	for id:String in arrays:
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(var_to_bytes(arrays[id]));result[id]=digest.finish().hex_encode()
	return result
func run()->void:
	OUT="res://验证记录/M84/waterfront_cafes_20261029/live"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var fixture:=TeaFixture.build();check(fixture.ok,"public shoreline cafes with no manual role edits")
	await show(fixture.city,Vector2(-16,-20),"水岸茶伞");quiet();demo.life.set_process(false)
	check(demo.state.houses.map(func(h):return h.role)==["bakery","garden_cafe","bakery","garden_cafe","residential"],"real local bread and cafe uses are seeded in new-house transactions")
	for id:String in ["h2","h4"]:
		var plan:Dictionary=demo.town.cafes.roots[id].get_meta("layout")
		check(not plan.is_empty() and plan.seats.size()==3 and demo.life.cafe.layouts.has(id) and demo.life.cafe.layouts[id].has("street_entry"),"actual published renderer and life share connected seats "+id)
		check(demo.town.cafes.roots[id].get_node("ThreeChairs").multimesh.visible_instance_count==3,"three actual rendered chairs "+id)
		for seat:Vector2 in plan.seats:check(not demo.life.cafe.layout_api.seat_route(demo.state,id,demo.life.cafe.layouts[id].street_entry,seat).is_empty(),"published street route reaches actual chair "+id)
	var snapshot:Dictionary=demo.state.snapshot();var original:=tea_meshes();var original_arrays:=tea_arrays();var house_arrays:=meshes();var far:int=demo.town.house_roots.h5.get_instance_id()
	demo.focus=Vector3(-16,.7,-19);demo.zoom=24.;demo.yaw=.1;demo.pitch=.75;demo._update_camera()
	for phase in range(3):demo._set_light_phase(phase);await capture("tea_phase"+str(phase))
	demo.zoom=35.;demo._update_camera();await capture("tea_35m");demo.zoom=18.;demo.pitch=.30;demo._update_camera();await capture("tea_low_18m")
	check(demo.state.snapshot()==snapshot,"viewing the tea array creates no purchases visits or authored role changes")
	await select_house("h4");check(demo.selected_house=="h4","native scene pick identifies actual cafe house");await key(KEY_ESCAPE)
	var changed:Dictionary=demo.state.set_house_role("h4","residential");demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and demo.town.cafes.roots.h4.get_meta("layout").is_empty() and not demo.life.cafe.layouts.has("h4"),"manual use removes actual tea seats and umbrella")
	check(demo.town.house_roots.h5.get_instance_id()==far,"unrelated house instance retained")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	check(tea_meshes()==original and meshes()==house_arrays,"native Undo restores exact tables umbrellas chairs and original houses")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(demo.state.houses[3].role=="residential" and not demo.life.cafe.layouts.has("h4"),"native Redo preserves manual use")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var count:int=demo.state._undo.size();Brush.select(demo.state,"renaissance","venetian_loggia")
	changed=demo.state.add_house(Vector2(-6,-20));demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false)
	check(changed.ok and demo.state.houses[-1].role=="bakery" and demo.state._undo.size()==count+1,"new isolated local source and building share one native history entry")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false);check(tea_meshes()==original,"native new-house Undo returns exact original tea array")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(demo.state.houses[-1].role=="bakery","native new-house Redo restores original seeded use")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var file:=FileAccess.open(OUT+"/work.json",FileAccess.WRITE);file.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/work.json"))).ok,"isolated actual disk read")
	await show(cold,Vector2(-16,-20),"茶伞冷读");quiet();demo.life.set_process(false)
	check(tea_arrays()==original_arrays and tea_meshes()==original and meshes()==house_arrays,"cold publication equals every uploaded chair umbrella cloth buffer and world transform")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual unclipped PCM and original player pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal continuation bytes unchanged")
	facts.elapsed_seconds=(Time.get_ticks_msec()-began)/1000.;facts.tea_meshes=original
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WATERFRONT_CAFES_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

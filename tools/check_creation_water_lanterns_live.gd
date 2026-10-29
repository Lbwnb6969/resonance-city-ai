extends "res://tools/check_creation_waterfront_cafes_live.gd"
const LanternPlan=preload("res://scripts/world/city_creation_water_lantern_plan.gd")
func lanterns()->Array[Node3D]:
	var result:Array[Node3D]=[]
	for node:Node3D in demo.get_meta("street_wonders").layers:
		if node.has_meta("market_water_lamp_material"):result.append(node)
	return result
func lantern_arrays()->Dictionary:
	var result:Dictionary={}
	for node:Node3D in lanterns():
		var data:Array=[]
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			data.append(mesh.global_transform)
			for i in range(mesh.mesh.get_surface_count()):data.append(mesh.mesh.surface_get_arrays(i))
		result[node.name]=data
	return result
func refresh_lamps()->void:
	demo.get_meta("street_wonders")._process(.2);demo.get_meta("waterfront_light").refresh();await process_frame
func run()->void:
	OUT="res://验证记录/M84/water_lanterns_20261029/live"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var fixture:=TeaFixture.build();check(fixture.ok,"actual public waterfront sources")
	await show(fixture.city,Vector2(-16,-22),"水岸浮灯");quiet();demo.life.set_process(false);await refresh_lamps()
	var nodes:=lanterns();check(nodes.size()==4,"four actual floating lamp models publish after street graph")
	if nodes.is_empty():demo.queue_free();await process_frame;quit(1);return
	check(nodes.all(func(node):return node.find_children("*","MeshInstance3D",true,false).any(func(mesh):return mesh.material_override==node.get_meta("market_water_lamp_material"))),"uploaded paper geometry uses the owned micro-normal AO glow material")
	var wick_sources:Array=nodes.map(func(n):return n.to_global(n.get_meta("water_lamp")));var original:=lantern_arrays();var houses:=meshes();var snapshot:Dictionary=demo.state.snapshot();var distant:int=demo.town.house_roots.h5.get_instance_id()
	demo.focus=Vector3(-16,0,-22.5);demo.zoom=24.;demo.yaw=.1;demo.pitch=.85;demo._update_camera()
	for phase in range(3):
		demo._set_light_phase(phase);await refresh_lamps()
		check(nodes.all(func(n):return is_equal_approx(n.get_meta("market_water_lamp_material").get_shader_parameter("lantern_night"),1. if phase==2 else .35 if phase==1 else 0.)),"actual uploaded paper light follows phase "+str(phase))
		await capture("lamps_phase"+str(phase))
	var light:Node3D=demo.get_meta("waterfront_light")
	for node:Node3D in nodes:check(node.to_global(node.get_meta("water_lamp")) in light.sources,"actual wick feeds bounded water reflection sources")
	check(demo.town.water_material.get_shader_parameter("water_lamp_count")==mini(16,light.sources.size()),"actual water shader uses original 16-source reflection budget")
	demo.zoom=35.;demo._update_camera();await capture("lamps_35m")
	demo.zoom=18.;demo.yaw=PI+.1;demo.pitch=.3;demo._update_camera();await capture("lamps_low_18m")
	await physics_frame
	var at:Vector3=nodes[0].global_position;var query:=PhysicsRayQueryParameters3D.create(at+Vector3.UP*5.,at+Vector3.DOWN)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(query)
	check(not hit.is_empty() and hit.collider.name=="MarketWaterLanternPick" and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("cell_id","")=="c1","actual floating shape picks original house and cell")
	var position:Vector2=demo.camera.unproject_position(at+Vector3.UP*.13)
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=position;event.global_position=position;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
	await settle();check(demo.selected_house=="h1","native floating-lamp click selects original authored source");await key(KEY_ESCAPE)
	check(demo.state.snapshot()==snapshot,"camera light and water reflection never author history or geometry")
	var changed:Dictionary=demo.state.remove_water_at(Vector2(-12,-24));demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false);await refresh_lamps()
	check(changed.ok and lanterns().is_empty(),"filling actual canal retires floating geometry")
	check(wick_sources.all(func(p):return p not in light.sources),"every former floating reflection source retires with geometry")
	check(demo.town.house_roots.h5.get_instance_id()==distant,"unrelated house instance preserved")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false);await refresh_lamps()
	check(lantern_arrays()==original and meshes()==houses,"native Undo restores exact original lamps and house arrays")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);await refresh_lamps();check(lanterns().is_empty(),"native Redo withdraws actual lamps")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false);await refresh_lamps()
	var pref:Dictionary=demo.state.creative_settings.presentation.duplicate();pref.automatic_decoration=false
	changed=demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":pref});demo._after_edit(changed,"history");await settle();quiet();demo.life.set_process(false);await refresh_lamps()
	check(changed.ok and lanterns().is_empty(),"actual preference hides floats and their reflection sources")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false);await refresh_lamps();check(lantern_arrays()==original,"native preference Undo restores exact geometry")
	var file:=FileAccess.open(OUT+"/work.json",FileAccess.WRITE);file.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/work.json"))).ok,"isolated disk cold read")
	await show(cold,Vector2(-16,-22),"水灯冷读");quiet();demo.life.set_process(false);await refresh_lamps()
	check(lantern_arrays()==original and meshes()==houses,"independent cold publication equals every world transform and uploaded mesh array")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual unclipped PCM and original audio pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal continuation bytes unchanged")
	facts.elapsed_seconds=(Time.get_ticks_msec()-began)/1000.;facts.sources=LanternPlan.derive(demo.state)
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WATER_LANTERNS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

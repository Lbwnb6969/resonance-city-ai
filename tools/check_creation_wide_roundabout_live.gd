extends "res://tools/check_creation_water_ghat_live.gd"
const WideFixture=preload("res://tests/test_city_creation_wide_roundabout.gd")
const Width=preload("res://scripts/world/city_creation_roundabout_width.gd")
func actual_ring()->void:
	await physics_frame;var rings:Array=demo.town.roads_layer.find_children("RoundaboutPlaza","Node3D",true,false);check(rings.size()==1 and is_equal_approx(float(rings[0].get_meta("radius")),3.8),"actual rendered island carries explicit wide radius")
	if rings.size()!=1:return
	var paving:Array=rings[0].find_children("*","MeshInstance3D",true,false).filter(func(m):return m.material_override is ShaderMaterial and m.material_override.shader==preload("res://scripts/visual/shaders/creation_promenade.gdshader"))
	check(paving.size()==1,"final merged GPU keeps exactly one circle-paving material surface")
	if paving.size()!=1:return
	var mesh:MeshInstance3D=paving[0];var buffer:Dictionary=RenderingServer.mesh_get_surface(mesh.mesh.get_rid(),0)
	check(not buffer.get("vertex_data",PackedByteArray()).is_empty() and absf(mesh.get_aabb().size.x-7.6)<.001 and mesh.mesh.get_faces().size()==144,"actual uploaded paving spans the full 7.6-meter diameter")
	var center:Vector2=rings[0].get_meta("center");var hits:=true;var count:=0
	for angle:int in range(16):
		var at:=center+Vector2.from_angle(float(angle)*TAU/16.)*3.55;var y:float=demo.state.street_height(at);var hit:Dictionary=demo.town.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,y+.25,at.y),Vector3(at.x,y-.25,at.y),2));hits=hits and not hit.is_empty() and hit.collider.name=="RoundaboutGroundPick";count+=1
	check(hits and count==16,"actual Jolt wide circle supports all sixteen outer walking probes")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var f:=WideFixture.fixture();check(f.ok,"public tram cross before adopting wide circle");await show(f.city,f.center,"宽环岛");quiet();var original:Dictionary=demo.state.snapshot();demo.focus=Vector3(f.center.x,0,f.center.y);demo.zoom=22.;demo.yaw=.55;demo.pitch=.75;demo._update_camera();demo.select_tool(2);await settle()
	var palette=demo.tactile_dock.road_palette;await ui_click(palette.heads.More);await settle();var wide:Button=demo.find_child("WideRoundabout",true,false);check(wide!=null and wide.is_visible_in_tree(),"existing More palette exposes explicit 3.8m checkbox");await ui_click(wide);check(demo.state.get_meta("roundabout_radius",2.4)==3.8 and demo.state.snapshot()==original,"brush radius selection alone cannot mutate work or schema")
	var ring:Button=palette.menu.get_child(3);await ui_click(ring);check(demo.road_roundabout,"native existing ring tool remains the creation entry");await click_world(f.center);check(await wait_for(func():return not demo.get_meta("roundabout_width_control").choosing,5000),"first native wide adoption backup and commit settle");await settle();quiet()
	check(demo.state.snapshot().schema==34 and demo.state.Roundabouts.all(demo.state.roads)[0].radius==3.8,"actual native crossing click adopts wide marker")
	var control:Node=demo.get_meta("roundabout_width_control");var backup:Dictionary=demo.gallery.library.read(str(control.last_backup.get("id","")));check(backup.ok and backup.world.roads==original.roads and backup.world.schema==original.schema,"first wide circle retains exact pre-upgrade original work")
	await actual_ring();demo.set_process(false);demo.town.clear_preview();await capture("wide_tram_circle");demo.set_process(true)
	var hot:=gpu();var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/wide.json").ok,"actual schema34 work saves");var reader:=State.new();check(reader.load_city(OUT+"/wide.json").ok and reader.snapshot()==saved,"actual wide marker disk cold read");await show(reader,f.center,"宽环岛冷读");quiet();check(gpu()==hot,"actual wide paving/rails GPU cold-equal incremental")
	demo._after_edit(demo.state.remove_roundabout(f.center),"road");await settle();quiet();check(demo.state.Roundabouts.all(demo.state.roads).is_empty(),"original remove action retires wide marker");await key(KEY_Z,true);await settle();quiet();check(gpu()==hot and demo.state.Roundabouts.all(demo.state.roads)[0].radius==3.8,"native Undo restores exact radius and actual GPU")
	root.size=Vector2i(1024,768);demo.select_tool(2);await ui_click(palette.heads.More);await settle();check(root.get_visible_rect().encloses(palette.menu.get_global_rect()) and demo.find_child("WideRoundabout",true,false).is_visible_in_tree(),"More menu with both existing and wide options fits 1024x768");await capture("wide_option_1024")
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WIDE_ROUNDABOUT_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if report.ok else 1)

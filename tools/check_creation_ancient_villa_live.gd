extends "res://tools/check_creation_music_experience_live.gd"
const Fixture=preload("res://tests/test_city_creation_ancient_villa.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
func capture(label:String)->void:
	Input.warp_mouse(Vector2(20,20));demo.toast_time=0.;demo.toast.hide();demo.town.clear_preview();await process_frame;await process_frame
	await RenderingServer.frame_post_draw;check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"native original "+label)
func run()->void:
	OUT="res://验证记录/M49/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var voices:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():voices.append(p.get_instance_id())
	await show(Fixture.fixture(),Vector2(-25,-16),"ancient_villa");demo.life.set_process(false)
	for meta:String in ["inspiration_draft","vignette_journey"]:
		var paper=demo.get_meta(meta);paper.poll();paper.set_process(false);paper.paper.hide()
	demo.get_meta("vignette_journey").marker.hide();await settle()
	var villa:Node3D=demo.town.house_roots["h1"].find_child("GreekRomanTerraceVilla",true,false)
	check(villa!=null and demo.town.house_roots["h1"].get_meta("ancient_villa",{}).width==3.6,"actual multi-floor/terrace house publishes full-width Doric compound facade")
	check(demo.state.houses[0].cells.size()==8,"real upper retreat and two terraces remain authored cells")
	var space:PhysicsDirectSpaceState3D=demo.get_world_3d().direct_space_state
	var p:Dictionary=demo.town.house_roots["h1"].get_meta("ancient_villa")
	var z:float=p.depth*.5+.55
	var middle:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(villa.to_global(Vector3(0,.8,z+.5)),villa.to_global(Vector3(0,.8,z-.30)),1))
	check(middle.is_empty(),"actual central colonnade passage is clear of invisible AABB collision")
	var column:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(villa.to_global(Vector3(-.54,.8,z+.5)),villa.to_global(Vector3(-.54,.8,z-.30)),1))
	check(not column.is_empty() and column.collider.get_meta("house_id","")=="h1","real fluted column mesh picks its actual house")
	var skylight:Node3D=demo.town.house_roots["h4"].find_child("TerracottaRoofLight",true,false)
	check(skylight!=null and demo.town.house_roots["h4"].get_meta("terracotta_skylights",0)==1,"real broad roof publishes framed terracotta daylight dormer")
	var roof_ray:Vector3=skylight.global_position+Vector3(0,3,0)
	var window_hit:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(roof_ray,skylight.global_position,1))
	check(not window_hit.is_empty() and window_hit.collider.get_meta("house_id","")=="h4","actual dormer preserves roof pick identity")
	for id:String in ["h1","h3","h4"]:
		var h:Dictionary=demo.town._house_record(id);demo.focus=Vector3(h.origin[0]+(.9 if id in ["h1","h4"] else 0.),1.9,h.origin[1]-.25);demo.zoom=10. if id=="h1" else 8.;demo.pitch=.68;demo.yaw=.45;demo._update_camera()
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:root.size=size;await settle();await capture(id+"_day_"+str(size.x))
	var material:ShaderMaterial=demo.town.conservatory.ensure_roof_material(true)
	check(is_equal_approx(float(material.get_shader_parameter("night_energy")),.403),"real iron-conservatory shader night energy is source65percent times62percent")
	demo.focus=Vector3(-9,1.4,-17);demo.zoom=7.;demo.pitch=.6;demo.yaw=.35;demo._update_camera();root.size=Vector2i(1440,900);demo._set_light_phase(2);await settle();await capture("iron_night_reduced_1440")
	material.set_shader_parameter("night_energy",.65);await settle();await capture("iron_night_source_1440");material.set_shader_parameter("night_energy",.403)
	root.size=Vector2i(1024,768);await settle();await capture("iron_night_reduced_1024")
	demo._set_light_phase(0)
	var turned:Dictionary=demo.state.rotate_house("h3",.58);check(turned.ok,"actual public free angle keeps the terrace villa")
	demo._after_edit(turned,"room");await settle();var rotated:Node3D=demo.town.house_roots["h3"]
	check(rotated.has_meta("ancient_villa") and is_equal_approx(float(rotated.get_meta("house_yaw")),.58),"actual published colonnade and terrace share the saved rotation")
	var saved:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and cold.snapshot()==saved,"all actual cells/terraces/prototypes/yaw round trip exactly")
	FileAccess.open(OUT+"/city.json",FileAccess.WRITE).store_string(JSON.stringify(saved,"\t",true,true))
	facts.recording=await Probe.record(OUT+"/Master.wav",3.3);check(facts.recording.ok,"actual architectural city Master has no clipping")
	await finish(personal,voices)

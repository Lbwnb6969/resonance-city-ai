extends "res://tools/check_creation_score_playback_live.gd"
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
func roof_colors()->Array:
	var result:Array=[]
	for mesh:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		if mesh.mesh==null:continue
		for i in range(mesh.mesh.get_surface_count()):
			var material:=mesh.get_active_material(i) as ShaderMaterial
			if material!=null and material.shader==demo.town.JoinedRoofShader:
				result.append(material.get_shader_parameter("roof_color"))
	result.sort_custom(func(a,b):return a.to_html()<b.to_html());return result
func run()->void:
	OUT="res://验证记录/M84/art_courtyard_20261031/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var fixture:=Fixture.courtyard("ring","none");await show(fixture.city,Fixture.ORIGIN+Vector2(3.6,3.6),"院落屋面与石缝整改");quiet();demo.life.set_process(false);demo.zoom=14.;demo._update_camera()
	var original_colors:=roof_colors();var original:Dictionary=demo.state.snapshot();var record:=Span.start()
	check(not roof_colors().is_empty(),"actual published classical courtyard roof uses tile shader")
	for phase:int in [0,1,2]:
		demo._set_light_phase(phase);for i in range(8):await process_frame
		await capture("court_"+str(phase))
	demo._set_light_phase(0);demo.zoom=24.;demo._update_camera();await capture("overview")
	demo.zoom=14.;demo.pitch=.22;demo._update_camera();await capture("low_angle")
	demo.pitch=.8;demo._update_camera();await physics_frame
	var at:=Vector3(Fixture.ORIGIN.x,0.,Fixture.ORIGIN.y+3.6)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*12.,at+Vector3.UP*.4,1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1","actual tile roof still picks original authored house")
	check(demo.state.snapshot()==original,"lighting and material viewing never writes author state")
	demo._after_edit(demo.state.set_house_colors("h1",Color("d4c2a2"),Color("527c86")),"terrace",false);await settle()
	var colored:=roof_colors()
	check(colored.any(func(c):return c.b>c.r),"tile shader follows author blue roof color")
	await capture("author_blue")
	demo._after_edit(demo.state.undo(),"history");await settle();check(roof_colors()==original_colors,"Undo restores original tile roof color")
	demo._after_edit(demo.state.redo(),"history");await settle();check(roof_colors()==colored,"Redo restores exact tile roof color")
	var saved:Dictionary=demo.state.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(saved))).ok,"isolated cold restore")
	await show(copy,Fixture.ORIGIN+Vector2(3.6,3.6),"冷读院落材质");quiet();demo.zoom=14.;demo._update_camera()
	check(roof_colors()==colored,"cold rebuilt roof colors equal incremental publication")
	check(demo.state.snapshot()==saved,"cold rebuild preserves author data")
	await capture("cold_blue")
	await show(fixture.city,Fixture.ORIGIN+Vector2(3.6,3.6),"恢复原院落配色");quiet()
	check(demo.state.snapshot()==original,"switch back restores original roof and authorship")
	facts.pcm=Span.finish(record,OUT+"/art_edit_Master.wav");check(facts.pcm.ok,"actual visual edits retain audible unclipped music")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("COURTYARD_ART_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

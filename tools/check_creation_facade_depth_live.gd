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
	OUT="res://验证记录/M84/facade_depth_20261031/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var fixture:=Fixture.courtyard("ring","none");await show(fixture.city,Fixture.ORIGIN+Vector2(3.6,3.6),"院落门窗内凹整改");quiet();demo.life.set_process(false);demo.zoom=14.;demo._update_camera()
	var glasses:Array=[];var plans:=0
	for node:Node in demo.town.house_roots.h1.find_children("*","Node3D",true,false):
		if node.has_meta("recessed_facade"):plans+=1
	for mesh:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		if mesh.mesh==null:continue
		for i in range(mesh.mesh.get_surface_count()):
			var material:=mesh.get_active_material(i)
			if material!=null and material.has_meta("creation_facade_glass") and not glasses.has(material):glasses.append(material)
	check(plans>0 and glasses.size()==3,"actual published shell plans and three independent glass batches")
	check(glasses.all(func(m):return not m.has_meta("creation_wall_batch")),"actual batching preserves glass material instead of replacing it with wall shader")
	var original_colors:=roof_colors();var original:Dictionary=demo.state.snapshot();var record:=Span.start()
	check(not roof_colors().is_empty(),"actual published classical courtyard roof uses tile shader")
	for phase:int in [0,1,2]:
		demo._set_light_phase(phase);for i in range(8):await process_frame
		check(glasses.any(func(m):return m.emission_energy_multiplier>0.) if phase>0 else glasses.all(func(m):return m.emission_energy_multiplier==0.),"actual independent glass follows light phase "+str(phase))
		await capture("court_"+str(phase))
	demo._set_light_phase(0);demo.zoom=24.;demo._update_camera();await capture("overview")
	demo.zoom=14.;demo.pitch=.22;demo._update_camera();await capture("low_angle")
	demo.pitch=.8;demo._update_camera();await physics_frame
	var at:=Vector3(Fixture.ORIGIN.x,0.,Fixture.ORIGIN.y+3.6)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*12.,at+Vector3.UP*.4,1))
	check(not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1","actual tile roof still picks original authored house")
	check(demo.state.snapshot()==original,"lighting and material viewing never writes author state")
	demo._after_edit(demo.state.rotate_house("h1",.4),"house");await settle();await capture("rotated_facade")
	check(demo.town.house_roots.h1.find_children("*","Node3D",true,false).any(func(n):return n.has_meta("recessed_facade")),"rotation retains actual facade openings")
	demo._after_edit(demo.state.undo(),"history");await settle()
	var after_undo:Dictionary=demo.state.snapshot();facts.undo_differences={}
	for key:String in original:
		if after_undo.get(key)!=original[key]:facts.undo_differences[key]={"before":original[key],"after":after_undo.get(key)}
	var restored:=after_undo.duplicate(true);restored.revision=original.revision
	check(restored==original and after_undo.revision==original.revision+2,"Undo rotation restores all author fields while revision advances twice")
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
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FACADE_DEPTH_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

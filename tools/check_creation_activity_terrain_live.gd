extends "res://tools/check_creation_terrain_target_live.gd"
func layout_check(label:String)->void:
	var dock=demo.tactile_dock;var card:Rect2=dock.target_options.panel.get_global_rect();var bubbles:Rect2=dock.bubble_rows.get_global_rect()
	check(not card.intersects(bubbles),label+" policy card does not overlap tool bubbles")
	check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(card),label+" policy card fits viewport")
	facts[label]={"card":card,"bubbles":bubbles}
func run()->void:
	OUT="res://验证记录/M84/activity_terrain_20261031/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works_"+str(began);root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var city:=State.new();check(city.load_city("res://验证记录/M84/activity_terrain_20261031/converted.json").ok,"read actual qualified mid-tea conversion fixture")
	var api=load("res://scripts/world/city_creation_cafe_layout_context.gd").new();var old:Dictionary=api.layout(city,"h4");var at:Vector2=old.center
	check(city.terrain_policy==1 and city.add_terrain_stroke([at] as Array[Vector2],"raise",3.,1.).ok,"old free work preserves its actual cafe pad over sculpt")
	await show(city,at,"街景地形迁移");quiet();demo.select_tool(8);await settle();demo._capture_journeys()
	check(demo.life.cafe.groups.has("h4") and demo.life.cafe.groups.h4.phase=="tea","formal opening resumes genuine old seated party")
	var before:Dictionary=demo.state.snapshot();var elapsed:float=demo.life.cafe.groups.h4.elapsed;var positions:Dictionary={}
	for person:Dictionary in demo.life.residents:positions[person.home_id]=Vector2(person.node.position.x,person.node.position.z)
	var ui=demo.get_meta("terrain_policy_ui");var recording:=Span.start();await capture("before_old_pad")
	await ui_click(ui.preview_button);var plan:Dictionary=ui.plan
	check(plan.get("ok",false) and demo.get_meta("terrain_policy_preview",false),"native preview button prepares new city terrain policy")
	check(demo.state.snapshot()==before,"policy preview preserves complete authored and earned snapshot")
	var overlay:MeshInstance3D=demo.town.preview.get_node_or_null("TerrainTargetSurface");check(overlay!=null,"new physical hill is previewed before adoption")
	if overlay!=null:
		var error:=0.;var vertices:PackedVector3Array=overlay.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]
		for p:Vector3 in vertices:error=maxf(error,absf(p.y-Preview.LIFT-plan.candidate.ground_height(Vector2(p.x,p.z))))
		check(error<.00001,"policy overlay equals complete candidate surface");facts.preview_error=error;facts.preview_vertices=vertices.size()
	facts.plan_ms=plan.elapsed_ms;await capture("policy_candidate")
	if "--ui-only" in OS.get_cmdline_user_args():
		layout_check("1440_expanded");root.size=Vector2i(1024,768);await settle();layout_check("1024_expanded");await capture("policy_1024")
		await key(KEY_ESCAPE);await ui_click(demo.tactile_dock.button_for("TerrainMode",3));await ui_click(ui.preview_button);await settle();layout_check("1024_plateau_expanded");await capture("policy_plateau_1024")
		check(demo.state.snapshot()==before,"layout supplement preserves all original author data");await key(KEY_ESCAPE);check(ui.plan.is_empty(),"layout supplement still cancels preview natively")
		facts.pcm=Span.finish(recording,OUT+"/ui_Master.wav");var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
		FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("ACTIVITY_TERRAIN_UI ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
	await key(KEY_ESCAPE);check(ui.plan.is_empty() and demo.state.snapshot()==before,"native Escape cancels policy preview without authorship changes")
	await ui_click(ui.preview_button);await ui_click(ui.apply_button);await settle();demo.life.set_process(false)
	check(demo.state.terrain_policy==2 and demo.state.snapshot().schema==23,"native adoption commits explicit new schema and city rule")
	var works:Dictionary=demo.gallery.library.entries();var backups:Array=works.items.filter(func(item):return item.get("reason")=="before_activity_terrain")
	check(backups.size()==1,"new city policy requires one real immutable original backup")
	if backups.size()==1:
		var saved:Dictionary=demo.gallery.library.read(backups[0].id)
		check(saved.ok and saved.world.schema==20 and saved.world.terrain_strokes==before.terrain_strokes,"original Schema20 and brush history remain readable");facts.backup_id=backups[0].id
	check(demo.state.ground_height(at)>.25,"real published hill is no longer flattened by cafe pad")
	await physics_frame;await physics_frame;check(absf(ray_height(at)-demo.state.ground_height(at))<.0001,"real physics agrees with liberated activity terrain")
	check(demo.life.cafe.terrain_resume.has("h4") and demo.life.cafe.terrain_resume.h4.elapsed==elapsed,"in-progress tea retains actual normalized dwell while suspended")
	check(demo.life.cafe_status("h4").phase=="no_space","suspended intent reports real no-space status")
	for person:Dictionary in demo.life.residents:check(Vector2(person.node.position.x,person.node.position.z)==positions[person.home_id],"adoption retains actual resident planar position")
	for key:String in ["houses","plants","roads","cafe_credits","cafe_progress","life_progress","harmony_journey"]:check(demo.state.snapshot().get(key)==before.get(key),"adoption preserves "+key)
	demo._capture_journeys();var full:Dictionary=demo.state.snapshot();var raw:PackedFloat32Array=demo.state._ground_terrain.vertices.duplicate();var meshes:Dictionary=ground_meshes()
	await key(KEY_Z,true);await settle();check(demo.state.terrain_policy==1 and demo.state.ground_height(at)<.01,"native Undo restores original broad pad")
	await key(KEY_Y,true);await settle();check(demo.state.terrain_policy==2 and demo.state._ground_terrain.vertices==raw,"native Redo restores liberated terrain exactly")
	demo._capture_journeys();full=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(full,"",true,true))).ok,"full schema23 and suspended intent read cold")
	same_field(cold,"independent policy field");await show(cold,at,"街景规则独立冷读");quiet();demo.select_tool(8)
	var differences:Dictionary={}
	for key:String in full:
		if full[key]!=demo.state.snapshot().get(key):differences[key]={"before":full[key],"after":demo.state.snapshot().get(key)}
	facts.cold_author_diff=differences;facts.cold_meshes_equal=ground_meshes()==meshes
	check(demo.state.snapshot()==full and ground_meshes()==meshes,"full checkpoint plus fresh ground mesh/normals match actual publication")
	check(demo.life.cafe.terrain_resume.h4.elapsed==elapsed and demo.life.cafe.groups.has("h4"),"cold actual Life retains suspension and earned time")
	for phase:int in [0,1,2]:demo._set_light_phase(phase);await capture("liberated_"+str(phase))
	# Open-land positive: real furniture relocates to supported reachable ground.
	var open:=State.new();open.initialize_free();open.add_house(Vector2(-24,-12));open.set_house_role("h1","garden_cafe")
	var first:Dictionary=api.layout(open,"h1");open.add_terrain_stroke([Vector2(first.center)] as Array[Vector2],"raise",1.5,1.)
	await show(open,Vector2(-24,-10),"茶座重新择地");quiet();var moved:Dictionary=demo.town.cafes.roots.h1.get_meta("layout")
	check(not moved.is_empty() and moved.center!=first.center,"actual rendered furniture relocates to available flat ground")
	check(moved==demo.life.cafe.layout_api.layout(demo.state,"h1"),"actual renderer and Life share identical physical furniture plan")
	var table:Node3D=demo.town.cafes.roots.h1.get_node("GardenTable");var foot:Vector3=table.global_transform*table.multimesh.get_instance_transform(0)*Vector3.ZERO
	check(absf(foot.y-demo.state.ground_height(Vector2(foot.x,foot.z)))<=.035,"actual table central foot rests on final ground")
	var brush=demo.terrain_brush;demo.select_tool(8);await ui_click(demo.tactile_dock.button_for("TerrainMode",3));brush.target_picker.value=-.35
	var hollow:=Vector2(-30,-15);await motion(hollow);await button(hollow,true);await button(hollow,false);await settle()
	demo.life._capture_published_surface();check(demo.state.street_height(hollow)<0. and demo.life._published_surface.street_height(hollow)==demo.state.street_height(hollow),"frozen published surface preserves new policy in a real below-zero hollow")
	root.size=Vector2i(1024,768);await settle();demo.town.clear_preview();demo.preview_key=""
	await capture("relocated_1024")
	facts.pcm=Span.finish(recording,OUT+"/activity_Master.wav");check(facts.pcm.ok,"actual continuous mixed PCM remains audible and unclipped")
	check(pool()==voices,"production audio pools preserved")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ACTIVITY_TERRAIN_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

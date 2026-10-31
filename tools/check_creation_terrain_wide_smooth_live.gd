extends "res://tools/check_creation_terrain_target_live.gd"
func snapshot_check(expected:Dictionary,label:String,revision_delta:int)->void:
	var actual:Dictionary=demo.state.snapshot();var differences:Dictionary={}
	var wanted:Dictionary=expected.duplicate(true);wanted.revision+=revision_delta
	for key:String in wanted:
		if actual.get(key)!=wanted[key]:differences[key]={"expected":wanted[key],"actual":actual.get(key)}
	facts[label]=differences
	check(differences.is_empty(),label)
func run()->void:
	OUT="res://验证记录/M84/wide_smooth_20261031/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works_"+str(began);root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var at:=Vector2(15,20);var city:=State.new();city.initialize_free();var historical:Dictionary=city.snapshot();historical.erase("terrain_policy");historical.schema=20;city.restore(historical)
	check(city.apply_terrain_target(city.plan_terrain_target([at] as Array[Vector2],3.5,1.5)).ok,"public v2 plateau fixture")
	check(city.add_terrain_stroke([at+Vector2(2,0)] as Array[Vector2],"raise",1.5,1.).ok,"steep local authored shoulder")
	check(city.add_house(at+Vector2(-5,-4)).ok,"protected house fixture")
	check(city.add_road([at+Vector2(-7,-2),at+Vector2(7,-2)] as Array[Vector2],"path","none").ok,"protected road fixture")
	check(city.place_plant(at+Vector2(6,-4),"olive").ok,"authored plant fixture")
	await show(city,at,"宽核柔化");quiet();demo.select_tool(8);var brush=demo.terrain_brush
	await ui_click(demo.tactile_dock.button_for("TerrainMode",4));await ui_click(demo.tactile_dock.button_for("TerrainRadius",2));await settle()
	check(brush.mode=="smooth" and brush.radius==5. and brush.natural_picker.disabled,"actual dock chooses smooth and large radius")
	check(not brush.target_picker.is_visible_in_tree() and not brush.sample_picker.is_visible_in_tree(),"smooth card hides unrelated target controls")
	demo._capture_journeys();var before:Dictionary=demo.state.snapshot();var recording:=Span.start()
	await capture("before_city");await motion(at);await button(at,true);await motion(at+Vector2(1,0))
	var plan:Dictionary=brush.target_plan;check(brush.drawing and plan.get("ok",false),"native gesture prepares wide kernel candidate")
	if not plan.get("ok",false):demo.queue_free();await process_frame;quit(1);return
	check(demo.state.snapshot()==before,"wide preview never mutates live city")
	var mesh:MeshInstance3D=demo.town.preview.get_node_or_null("TerrainTargetSurface");check(mesh!=null,"full candidate surface is visible")
	if mesh!=null:
		var vertices:PackedVector3Array=mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX];var error:=0.
		for p:Vector3 in vertices:error=maxf(error,absf(p.y-Preview.LIFT-plan.candidate.ground_height(Vector2(p.x,p.z))))
		check(error<.00001,"smooth overlay samples complete protected candidate height");facts.preview_vertices=vertices.size();facts.preview_error=error
	facts.plan_ms=plan.elapsed_ms;var expected:RefCounted=plan.candidate;var row:Dictionary=plan.row.duplicate(true);await capture("wide_candidate")
	await button(at+Vector2(1,0),false);await settle();same_field(expected,"native commit versus preview")
	check(demo.state.snapshot().schema==22 and demo.state.terrain_strokes.size()==3 and demo.state.terrain_strokes[-1]==row,"one native release commits one explicit v3 row")
	var works:Dictionary=demo.gallery.library.entries();var backups:Array=works.items.filter(func(item):return item.get("reason")=="before_terrain_rules")
	check(backups.size()==1,"first v3 adoption preserves one immutable old work")
	if backups.size()==1:
		var backup:Dictionary=demo.gallery.library.read(backups[0].id)
		check(backup.ok and backup.world.schema==21 and backup.world.terrain_strokes==before.terrain_strokes,"backup retains exact original v2 and legacy rows");facts.backup_id=backups[0].id
	await physics_frame;await physics_frame
	for point:Vector2 in [at,at+Vector2(2,0),at+Vector2(3,1)]:check(absf(ray_height(point)-demo.state.ground_height(point))<.0001,"actual published physics equals candidate terrain "+str(point))
	check(demo.state.houses==before.houses and demo.state.plants==before.plants and demo.state.roads==before.roads,"height edit preserves authored house bases, plants and roads")
	var final:Dictionary=demo.state.snapshot();await motion(at+Vector2(0,-3));await button(at+Vector2(0,-3),true);await motion(at+Vector2(1,-3))
	check(brush.drawing,"cancel tests an active smooth gesture");await key(KEY_ESCAPE);check(demo.state.snapshot()==final and not brush.drawing,"native Escape preserves full saved authorship")
	await key(KEY_Z,true);await settle();snapshot_check(before,"native Undo restores complete pre-smooth city",2)
	await key(KEY_Y,true);await settle();snapshot_check(final,"native Redo restores complete smooth city",2)
	var incremental:Dictionary=ground_meshes();demo._capture_journeys();final=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(final))).ok,"schema22 cold JSON opens")
	same_field(cold,"independent cold field");check(cold._road_heights.profiles==demo.state._road_heights.profiles,"cold road profiles use same raw terrain")
	await show(cold,at,"柔化独立冷读");quiet();demo.select_tool(8)
	check(demo.state.snapshot()==final and ground_meshes()==incremental,"full city plus fresh terrain vertices and normals match incremental publication")
	await physics_frame;await physics_frame;check(absf(ray_height(at+Vector2(2,0))-demo.state.ground_height(at+Vector2(2,0)))<.0001,"independent cold physics matches exact terrain")
	for phase:int in [0,1,2]:demo._set_light_phase(phase);await capture("wide_city_"+str(phase))
	var before_controls:Dictionary=demo.state.snapshot();await ui_click(demo.tactile_dock.button_for("TerrainMode",3))
	check(brush.target_picker.is_visible_in_tree() and brush.sample_picker.is_visible_in_tree(),"switching to plateau restores shared target controls immediately")
	await ui_click(demo.tactile_dock.button_for("TerrainMode",4));await ui_click(demo.tactile_dock.button_for("TerrainRadius",2))
	check(not brush.target_picker.is_visible_in_tree() and demo.state.snapshot()==before_controls,"switching back to smooth hides height input without editing authorship")
	root.size=Vector2i(1024,768);await settle();await motion(at)
	var card:Control=demo.ui_layer.find_child("TerrainTargetCard",true,false)
	check(card.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).encloses(card.get_global_rect()),"smooth explanation fits visible 1024 card")
	await capture("smooth_1024");facts.pcm=Span.finish(recording,OUT+"/wide_Master.wav");check(facts.pcm.ok,"continuous real mixed PCM audible and unclipped")
	# Controlled actual ground-only pixels, same authored input and one pass.
	var old_points:Array[Vector2]=[]
	for p:Array in row.points:old_points.append(Vector2(p[0],p[1]))
	var old:=State.new();old.restore(before);check(old.add_terrain_stroke(old_points,"smooth",row.radius,row.strength).ok,"old cross reference uses exact native stroke intent")
	demo.set_process(true);await show(old,at,"旧十字核");await freeze_view(Vector2i(1440,900),1);var old_image:Image=await saved_image("old_cross_surface")
	var fresh:=State.new();fresh.restore(final);demo.set_process(true);await show(fresh,at,"新圆盘核");await freeze_view(Vector2i(1440,900),1);var wide_image:Image=await saved_image("wide_disk_surface")
	facts.surface_difference=pixels(old_image,wide_image,Vector2(720,450));check(facts.surface_difference.changed_pixels>0,"actual new shoulder surface differs visibly from old cross blur")
	check(pool()==voices,"production voice pools conserved")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("TERRAIN_WIDE_SMOOTH_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

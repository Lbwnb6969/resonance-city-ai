extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
const Span=preload("res://tools/fixtures/city_creation_recording_span.gd")
const Preview=preload("res://scripts/visual/city_creation_terrain_preview.gd")
func ray_height(at:Vector2)->float:
	var query:=PhysicsRayQueryParameters3D.create(Vector3(at.x,10.,at.y),Vector3(at.x,-5.,at.y),2)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(query)
	return hit.position.y if not hit.is_empty() else INF
func same_field(city:RefCounted,label:String)->void:
	city.prepare_ground_height()
	for field:String in ["raw_vertices","raw_offsets","vertices","offsets"]:check(city._ground_terrain.get(field)==demo.state._ground_terrain.get(field),label+" exact "+field)
func ground_meshes()->Dictionary:
	var result:Dictionary={}
	for block:Vector2i in demo.town.terrain_surface.blocks:
		var mesh:Mesh=demo.town.terrain_surface.blocks[block].get_node("GroundMesh").mesh
		var arrays:Array=mesh.surface_get_arrays(0);result[block]=[arrays[Mesh.ARRAY_VERTEX],arrays[Mesh.ARRAY_NORMAL]]
	return result
func run()->void:
	OUT="res://验证记录/M84/terrain_target_20261031/live";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works_"+str(began);root.add_child(demo);await settle();isolate_input();var voices:=pool()
	# Godot's built-in UI actions default to keyboard device 0. The isolated
	# native fixture uses device 92; include it only in this disposable process.
	for action:StringName in InputMap.get_actions():
		if not str(action).begins_with("ui_"):continue
		for event:InputEvent in InputMap.action_get_events(action):
			var native:InputEvent=event.duplicate();native.device=92;InputMap.action_add_event(action,native)
	var city:=State.new();city.initialize_free();var at:=Vector2(-24,-12)
	check(city.add_terrain_stroke([at] as Array[Vector2],"raise",3.,.6).ok,"old raised terrain fixture")
	check(city.add_house(Vector2(-29,-17)).ok,"protected house fixture")
	check(city.add_road([Vector2(-31,-15),Vector2(-19,-15)] as Array[Vector2],"path","none").ok,"road bed fixture")
	await show(city,at,"定高台地");quiet();demo.select_tool(8);var brush=demo.terrain_brush
	await ui_click(demo.tactile_dock.button_for("TerrainMode",3));brush.natural_picker.button_pressed=false
	await ui_click(brush.target_picker.get_line_edit());await key(KEY_A,true)
	for character:String in "1.45":
		var event:=InputEventKey.new();event.device=92;event.pressed=true;event.unicode=character.unicode_at(0);root.push_input(event);await process_frame
	await key(KEY_ENTER)
	check(brush.mode=="plateau" and absf(brush.target_picker.value-1.45)<.001 and root.gui_get_focus_owner()==null,"native dock selection and numeric input release text focus on Enter")
	brush.target_picker.value=1.2;demo.tactile_dock.refresh();await settle();var before:Dictionary=demo.state.snapshot();var recording:=Span.start()
	await motion(at);await button(at,true);await motion(at+Vector2(2.5,0))
	var plan:Dictionary=brush.target_plan;check(brush.drawing and plan.get("ok",false),"actual mouse gesture prepares versioned candidate")
	if not plan.get("ok",false):demo.queue_free();await process_frame;quit(1);return
	check(demo.state.snapshot()==before,"drag preview leaves author state unchanged")
	var overlay:MeshInstance3D=demo.town.preview.get_node_or_null("TerrainTargetSurface");check(overlay!=null,"actual candidate surface preview exists")
	if overlay!=null:
		var vertices:PackedVector3Array=overlay.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX];var maximum:=0.
		for p:Vector3 in vertices:maximum=maxf(maximum,absf(p.y-Preview.LIFT-plan.candidate.ground_height(Vector2(p.x,p.z))))
		check(maximum<.00001,"preview mesh follows complete protected candidate field");facts.preview_vertices=vertices.size();facts.preview_error=maximum
	facts.preview_ms=plan.elapsed_ms;await capture("drag_candidate")
	await button(at+Vector2(2.5,0),false);await settle()
	check(demo.state.terrain_strokes.size()==2 and demo.state.snapshot().schema==21,"mouse release commits one schema21 stroke")
	check(absf(demo.state.raw_terrain_height(at)-1.2)<.0001,"actual gesture sets absolute core height")
	await physics_frame;await physics_frame
	check(absf(ray_height(at)-demo.state.ground_height(at))<.0001,"published physics uses exact target terrain")
	var library:Dictionary=demo.gallery.library.entries();var backups:Array=library.items.filter(func(item):return item.get("reason")=="before_terrain_rules")
	check(backups.size()==1,"first rules adoption creates one immutable original work")
	if backups.size()==1:
		var old:Dictionary=demo.gallery.library.read(backups[0].id)
		check(old.ok and old.world.schema==20 and old.world.terrain_strokes==before.terrain_strokes,"backup preserves original schema20 strokes")
		facts.backup_id=backups[0].id
	var rows:Array=demo.state.terrain_strokes.duplicate(true);await motion(at);await button(at,true);await motion(at+Vector2(4.,0))
	check(brush.target_plan.get("ok",false) and absf(brush.target_plan.candidate.raw_terrain_height(at)-1.2)<.0001,"widen preview retains existing core level")
	await button(at+Vector2(4.,0),false);await settle()
	check(absf(demo.state.raw_terrain_height(at)-1.2)<.0001 and absf(demo.state.raw_terrain_height(at+Vector2(4.,0))-1.2)<.0001,"widened cores share one absolute target")
	var saved:Dictionary=demo.state.snapshot();await motion(at+Vector2(0,-3));await button(at+Vector2(0,-3),true);await motion(at+Vector2(2,-3));check(brush.drawing,"cancel exercises a real active gesture");await key(KEY_ESCAPE)
	check(not brush.drawing and demo.state.snapshot()==saved,"native Escape cancels candidate without a history mutation")
	await key(KEY_Z,true);await settle();check(demo.state.terrain_strokes==rows,"native Undo restores complete old target history")
	await key(KEY_Y,true);await settle();check(demo.state.snapshot().terrain_strokes==saved.terrain_strokes,"native Redo restores exact target rows")
	brush.sample_picker.button_pressed=true;await motion(at);await button(at,true);var sampled:float=brush.draft_target;await motion(at+Vector2(0,-4))
	check(brush.drawing and absf(sampled-demo.state.ground_height(at))<.001 and brush.target_plan.get("row",{}).get("target_y")==sampled,"sampled absolute height is locked at stroke start")
	await key(KEY_ESCAPE);brush.sample_picker.button_pressed=false
	var protected:Dictionary=demo.state.plan_terrain_target([Vector2(-29,-17)] as Array[Vector2],3.5,1.2)
	check(protected.ok and protected.protected_samples>0 and protected.candidate.ground_height(Vector2(-29,-17))<.01,"full plan retains house foundation and reports protection")
	demo._capture_journeys();saved=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"full schema21 cold JSON opens")
	same_field(cold,"cold terrain")
	check(cold._road_heights.profiles==demo.state._road_heights.profiles,"cold road derived profiles match target field")
	var incremental:Dictionary=ground_meshes();await show(cold,at,"台地独立冷读");quiet();demo.select_tool(8)
	check(demo.state.snapshot()==saved,"full city including formal life checkpoint survives independent opening")
	check(ground_meshes()==incremental,"fresh renderer vertices and normals equal incremental publication")
	await physics_frame;await physics_frame;check(absf(ray_height(at)-demo.state.ground_height(at))<.0001,"cold physics matches committed target field")
	for phase:int in [0,1,2]:
		demo._set_light_phase(phase);await capture("committed_"+str(phase))
	root.size=Vector2i(1024,768);await settle();await motion(at)
	var card:Control=demo.ui_layer.find_child("TerrainTargetCard",true,false)
	check(card.is_visible_in_tree() and Rect2(Vector2.ZERO,Vector2(root.size)).encloses(card.get_global_rect()),"target options visible and fit actual 1024 viewport")
	await capture("target_options_1024")
	facts.pcm=Span.finish(recording,OUT+"/terrain_Master.wav");check(facts.pcm.ok,"actual mixed audio remains audible and unclipped")
	check(pool()==voices,"production audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("TERRAIN_TARGET_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var OUT="res://验证记录/编辑响应_2026-10-16"
const SAMPLE="res://数据/经营河湾样例.json"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={"operations":[]}
var watching:=false
var frame_times:Array[float]=[]
var last_tick:int=0
func _initialize()->void:
	process_frame.connect(_frame);_run.call_deferred()
func _frame()->void:
	var now:=Time.get_ticks_usec()
	if watching and last_tick>0:frame_times.append(float(now-last_tick)/1000)
	last_tick=now
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _key(code:int,ctrl:bool=false)->void:
	for down:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=down;event.ctrl_pressed=ctrl;root.push_input(event);await process_frame
func _motion(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func _mouse(down:bool)->void:
	var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=demo.pointer;event.global_position=demo.pointer;event.pressed=down;root.push_input(event);await process_frame
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending or (demo.town.budget_rebuild!=null and demo.town.budget_rebuild.retirement_pending())) and Time.get_ticks_msec()<deadline:await process_frame
	await physics_frame;await process_frame
func _begin()->int:
	await process_frame
	frame_times.clear();watching=true;return Time.get_ticks_usec()
func _end(label:String,started:int,request_ms:float)->void:
	await _wait();watching=false
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.town.budget_rebuild.retirement_pending(),"publication and all retired CPU data finish within the measured frames: "+label)
	var maximum:=0.0
	for ms:float in frame_times:maximum=maxf(maximum,ms)
	_check(maximum<=12.,"observed edit and cleanup frames stay within twelve milliseconds: "+label)
	var budget:Dictionary=demo.edit_budget_report()
	if budget.get("mode","")=="budget":
		_check(float(budget.poll_max_ms)<=3.5 and float(budget.render.stats.max_poll_ms)<=3.5 and float(demo.town.budget_rebuild.stats.get("max_frame_work_ms",0.))<=3.5,"render simulation publication and CPU retirement respect the observed 3.5ms budget: "+label)
	facts.operations.append({"label":label,"command_ms":request_ms,"publication_latency_ms":float(Time.get_ticks_usec()-started)/1000,"max_actual_frame_ms":maximum,"frames":frame_times.size(),"budget":demo.edit_budget_report(),"retirement":demo.town.budget_rebuild.stats.get("retirement_max_ms",0.),"max_frame_render_work_ms":demo.town.budget_rebuild.stats.get("max_frame_work_ms",0.)})
func _audio()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var p:AudioStreamPlayer=demo.music._players[id];rows.append([id,p.get_instance_id(),p.stream.get_instance_id()])
	for p:AudioStreamPlayer in demo.music._effects:rows.append(p.get_instance_id())
	for id:String in demo.ambience.players:
		var p:AudioStreamPlayer=demo.ambience.players[id];rows.append([id,p.get_instance_id(),p.stream.get_instance_id()])
	return rows
func _ids()->Dictionary:
	var rows:Dictionary={"houses":{},"roads":{},"terrain":{},"meadow":{},"residents":[]}
	for id:String in demo.town.house_roots:
		var node:Node3D=demo.town.house_roots[id];var bodies:Array=[];var meshes:Array=[]
		for body:Node in node.find_children("*","StaticBody3D",true,false):
			bodies.append(body.get_instance_id())
			for shape:Node in body.get_children():
				if shape is CollisionShape3D:bodies.append([shape.get_instance_id(),shape.shape.get_instance_id()])
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):meshes.append([mesh.get_instance_id(),mesh.mesh.get_instance_id()])
		rows.houses[id]=[node.get_instance_id(),bodies,meshes]
	for id:String in demo.town.road_roots:rows.roads[id]=demo.town.road_roots[id].get_instance_id()
	for key:Vector2i in demo.town.terrain_surface.blocks:rows.terrain[key]=demo.town.terrain_surface.blocks[key].get_instance_id()
	for key:Vector2i in demo.town.meadow.blocks:rows.meadow[key]=demo.town.meadow.blocks[key].get_instance_id()
	for resident:Dictionary in demo.life.residents:rows.residents.append(resident.node.get_instance_id())
	return rows
func _colors(id:String="h1")->String:
	var rows:Array[String]=[]
	for mesh:MeshInstance3D in demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false):
		var arrays:Array=mesh.mesh.surface_get_arrays(0)
		rows.append(var_to_bytes([arrays[Mesh.ARRAY_COLOR],str(mesh.material_override)]).hex_encode())
	return str(hash(rows))
func _run()->void:
	for argument: String in OS.get_cmdline_user_args():
		if argument.begins_with("--out="): OUT=argument.trim_prefix("--out=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var source:PackedByteArray=FileAccess.get_file_as_bytes(SAMPLE)
	var result:Dictionary=demo.state.restore(JSON.parse_string(source.get_string_from_utf8()));demo._after_edit(result,"history");await _wait()
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	_check(result.ok and demo.state.houses.size()==28,"actual twenty-eight-house economy sample is ready for edit measurements")
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	var initial_network_id:int=demo.life._network.get_instance_id()
	if "--near-only" in OS.get_cmdline_user_args():
		demo.focus=Vector3(-1,1,-9);demo.zoom=31;demo._update_camera();demo.ui_layer.visible=false
		await _near_road();await _finish(personal,source,audio,clock);return
	demo.focus=Vector3(29,.7,25);demo.zoom=16;demo.pitch=.85;demo.yaw=.62;demo._update_camera();await _key(KEY_9)
	var terrain_before:Array=demo.state.terrain_strokes.duplicate(true)
	var at:=Vector2(29,25);var y:float=demo.state.ground_height(at)
	await _motion(demo.camera.unproject_position(Vector3(at.x,y,at.y)));await _mouse(true)
	await _motion(demo.camera.unproject_position(Vector3(at.x+.8,demo.state.ground_height(at+Vector2(.8,0)),at.y)))
	var started:int=await _begin();var command_start:int=Time.get_ticks_usec();await _mouse(false);var request_ms:float=float(Time.get_ticks_usec()-command_start)/1000
	await _end("actual Window terrain gesture release",started,request_ms)
	var sculpted:float=demo.state.ground_height(at)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,15,at.y),Vector3(at.x,-5,at.y),2))
	_check(demo.state.terrain_strokes.size()>terrain_before.size() and sculpted>y+.1 and not hit.is_empty() and absf(float(hit.position.y)-sculpted)<.002,"actual mouse terrain release publishes true State height and matching ground collision")
	started=await _begin();command_start=Time.get_ticks_usec();var undo:Dictionary=demo.state.undo();demo._after_edit(undo,"history")
	var first_generation:int=demo.town.budget_rebuild.generation
	var new_points:Array[Vector2]=[Vector2(31,25)];var newer:Dictionary=demo.state.add_terrain_stroke(new_points,"raise",2,1)
	demo._after_edit(newer,"terrain");var latest_generation:int=demo.town.budget_rebuild.generation;request_ms=float(Time.get_ticks_usec()-command_start)/1000
	await _end("terrain undo immediately superseded by new brush",started,request_ms)
	_check(undo.ok and newer.ok and latest_generation>first_generation and demo.town.budget_rebuild.committed_generation==latest_generation,"overlapping real terrain undo and new request publish only latest generation")
	var old_water_texture:int=demo.town.water_field.texture.get_instance_id();var old_water_bytes:PackedByteArray=demo.town.water_field.image.get_data()
	started=await _begin();command_start=Time.get_ticks_usec();var pond_points:Array[Vector2]=[Vector2(27,29)]
	var pond:Dictionary=demo.state.add_water(pond_points,3,"pond");demo._after_edit(pond,"terrace");request_ms=float(Time.get_ticks_usec()-command_start)/1000
	var water_pending:bool=demo.edit_pending() and demo.town.water_field.texture.get_instance_id()==old_water_texture and demo.town.water_field.image.get_data()==old_water_bytes
	await _end("public State pond plus normal edit publication",started,request_ms)
	var field=demo.town.water_field
	_check(pond.ok and water_pending and absf(field.sample_world(Vector2(27,29))-demo.state.water_clearance(Vector2(27,29)))<.14 and demo.town.water_fingerprint!=0,"new pond keeps old visible water during preparation then publishes matching analytic field and water geometry")
	_check(demo.life._network.get_instance_id()==initial_network_id,"distant terrain and pond edits retain the unaffected resident network")
	var ids:Dictionary=_ids();var colors:String=_colors()
	started=await _begin();command_start=Time.get_ticks_usec();var palette:Dictionary=demo.state.set_house_palette("h1",3);demo._after_edit(palette,"terrace");request_ms=float(Time.get_ticks_usec()-command_start)/1000
	await _end("actual house palette edit",started,request_ms)
	_check(palette.ok and _colors()!=colors and _ids()==ids,"actual palette changes visible mesh colors while house collision road meadow terrain and resident roots retain identity")
	started=await _begin();command_start=Time.get_ticks_usec();var palette_undo:Dictionary=demo.state.undo();demo._after_edit(palette_undo,"history");request_ms=float(Time.get_ticks_usec()-command_start)/1000
	await _end("actual palette undo",started,request_ms)
	_check(palette_undo.ok and _colors()==colors and _ids()==ids,"actual palette undo restores original colors and all mesh and collision identities")
	facts.color_prepare=demo.town.house_roots.h1.get_meta("house_color_prepare",{})
	demo.focus=Vector3(-1,1,-9);demo.zoom=31;demo._update_camera();demo.ui_layer.visible=false;demo.town.clear_preview()
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/01_木构与石屋原色.png")
	var neighbor:String=_colors("h5");var original_stone:String=_colors("h4");ids=_ids()
	started=await _begin();command_start=Time.get_ticks_usec();var stone:Dictionary=demo.state.set_house_palette("h4",2);demo._after_edit(stone,"terrace");request_ms=float(Time.get_ticks_usec()-command_start)/1000
	await _end("actual textured stone house palette",started,request_ms)
	_check(stone.ok and _colors("h4")!=original_stone and _colors("h5")==neighbor and _ids()==ids,"textured stone recolor retains all roots and does not recolor another house")
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/02_石屋局部换色.png")
	await _near_road()
	if not demo.state.growth_memories.is_empty():
		var earned:String=demo.state.growth_memories[0];ids=_ids();colors=_colors();started=await _begin();command_start=Time.get_ticks_usec()
		var finish:Dictionary=demo.state.set_house_finish("h1",earned);demo._after_edit(finish,"terrace");request_ms=float(Time.get_ticks_usec()-command_start)/1000
		await _end("actually earned house finish",started,request_ms)
		_check(finish.ok and _colors()!=colors and _ids()==ids,"actually unlocked finish uses the same appearance-only route")
	else:
		var locked_before:Dictionary=demo.state.snapshot();var locked:Dictionary=demo.state.set_house_finish("h1","dawn")
		_check(not locked.ok and demo.state.snapshot()==locked_before,"unearned finish rejects without editing State or rendering")
	await _finish(personal,source,audio,clock)

func _near_road()->void:
	var started:int;var command_start:int;var request_ms:float
	var network_id:int=demo.life._network.get_instance_id()
	var pad_builds:int=demo.state._terrain_protection.layout_rebuilds
	var near:Array[Vector2]=[Vector2(-12,-10.45)]
	started=await _begin();command_start=Time.get_ticks_usec();var road_terrain:Dictionary=demo.state.add_terrain_stroke(near,"raise",2,1,2);demo._after_edit(road_terrain,"terrain");request_ms=float(Time.get_ticks_usec()-command_start)/1000
	await _end("terrain touching an actual commute road",started,request_ms)
	_check(road_terrain.ok and demo.life._network.get_instance_id()!=network_id and absf(demo.life._network._navigation_height(near[0])-demo.state.street_height(near[0]))<.001,"terrain touching real road still rebuilds resident network against published road heights")
	facts.life_commit_stages=demo.life.budget_commit_stats.duplicate()
	_check(demo.state._terrain_protection.layout_rebuilds==pad_builds and demo.life._network.state._terrain_protection.layout_rebuilds==pad_builds,"actual render and resident workers reuse the captured structural protection layout")
	facts.protection_layout_rebuilds={"before":pad_builds,"render":demo.state._terrain_protection.layout_rebuilds,"network":demo.life._network.state._terrain_protection.layout_rebuilds}
	var road_hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(near[0].x,15,near[0].y),Vector3(near[0].x,-5,near[0].y),2))
	var walking:float=demo.state.street_height(near[0]);var visible_road:float=INF
	var surface:MeshInstance3D=demo.town.road_roots.r1.get_node("PathSurface")
	var faces:PackedVector3Array=surface.mesh.get_faces()
	for index in range(0,faces.size(),3):
		var crossed:Variant=Geometry3D.ray_intersects_triangle(Vector3(near[0].x,15,near[0].y),Vector3.DOWN,surface.to_global(faces[index]),surface.to_global(faces[index+1]),surface.to_global(faces[index+2]))
		if crossed!=null and absf(float(crossed.y)-walking)<absf(visible_road-walking):visible_road=float(crossed.y)
	facts.road_height={"terrain_pick":road_hit.get("position"),"ground":demo.state.ground_height(near[0]),"walking":walking,"visible_road":visible_road}
	_check(not road_hit.is_empty() and absf(float(road_hit.position.y)-demo.state.ground_height(near[0]))<.002 and absf(visible_road-walking)<.05,"edited commute road triangles and terrain-bed picking each follow their own published height")
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/03_近路塑形同步发布.png")

func _finish(personal:PackedByteArray,source:PackedByteArray,audio:Array,clock:float)->void:
	_check(_audio()==audio and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.ambience.players.size()==2 and demo.music._playback_clock()>clock and FileAccess.get_file_as_bytes(SAMPLE)==source and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"all measured edits preserve original music ambience transport sample and personal save")
	var report:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts,"measurement":"Each operation records actual frame maximum from request through publication and final CPU retirement; command for Window release includes its awaited frame, not just handler CPU."}
	FileAccess.open(OUT+("/near.json" if "--near-only" in OS.get_cmdline_user_args() else "/live.json"),FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("EDIT_LATENCY_CHECK ",JSON.stringify(report))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)

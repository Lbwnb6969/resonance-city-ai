extends SceneTree
## Bounded legacy differential, ordered replay and actual-GL terrain gesture.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
const OUT := "res://验证记录/自然地貌轮廓_2026-10-17"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
var personal: PackedByteArray
var recording:=false
var frame_previous:=0
var edit_frames:Array[float]=[]
func _frame()->void:
	var now:=Time.get_ticks_usec()
	if recording:edit_frames.append(float(now-frame_previous)/1000.0)
	frame_previous=now
func _initialize()->void: _run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _bytes(city: RefCounted)->PackedByteArray:
	city.prepare_ground_height();return var_to_bytes([city._ground_terrain.vertices,city._ground_terrain.offsets])
func _logic()->void:
	var old_script:=GDScript.new();old_script.source_code=FileAccess.get_file_as_string("res://废弃/自然地貌前_2026-10-17/city_creation_terrain.gd.txt")
	_check(old_script.reload()==OK,"archived pre-change terrain compiles for differential")
	var legacy_count:=0
	for filename: String in DirAccess.get_files_at("res://数据"):
		if not filename.ends_with("样例.json"): continue
		var city:=State.new();var loaded:Dictionary=city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/"+filename)))
		if not loaded.ok: continue
		var old=old_script.new();old.prepare_raw(city.waters,city.water_clearance,city.terrain_strokes)
		var fresh:=Terrain.new();fresh.prepare_raw(city.waters,city.water_clearance,city.terrain_strokes)
		_check(old.raw_vertices==fresh.raw_vertices and old.raw_offsets==fresh.raw_offsets,"every legacy field sample unchanged: "+filename);legacy_count+=1
	facts.legacy_samples=legacy_count
	_check(legacy_count>=17,"all shipped sample cities participate in the old-field differential")
	var city:=State.new();var p:Array[Vector2]=[Vector2(21,18),Vector2(23,20),Vector2(26,19)]
	var before:=city.snapshot();var before_bytes:=_bytes(city)
	_check(city.add_terrain_stroke(p,"plateau",5.0,1.0,2,true).ok,"natural plateau commits through public terrain API")
	var plateau_bytes:=_bytes(city)
	_check(city.snapshot().schema==11 and city.terrain_strokes.size()==2,"one two-layer gesture stores explicit Schema11 contour")
	_check(absf(city.ground_height(p[1])-1.98)<0.000001 and absf(city.ground_height(p[1]+Vector2(0,1.5))-1.98)<0.000001,"natural plateau retains the guaranteed flat central land")
	city.add_terrain_stroke(p,"smooth",3.5,1.0)
	city.add_terrain_stroke([Vector2(24,21)] as Array[Vector2],"raise",3.5,0.4,1,true)
	var final_bytes:=_bytes(city);var saved:Dictionary=JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))
	var fresh:=State.new();var restored:Dictionary=fresh.restore(saved)
	_check(restored.ok and _bytes(fresh)==final_bytes,"natural smooth natural ordered field survives full precision JSON cold replay")
	city.undo();var prior:=_bytes(city);city.redo()
	_check(_bytes(city)==final_bytes and prior!=final_bytes,"natural stroke undo redo restores exact full height and offset arrays")
	city.undo();city.undo();_check(_bytes(city)==plateau_bytes,"removing smoothing restores exact original natural plateau")
	city.undo();_check(_bytes(city)==before_bytes and city.terrain_strokes==before.terrain_strokes,"one undo removes both natural plateau layers")
	var guard:=fresh.snapshot();var undo_count:int=fresh._undo.size()
	for invalid: String in ["downgrade","string","mode"]:
		var bad:Dictionary=saved.duplicate(true)
		if invalid=="downgrade": bad.schema=10
		elif invalid=="string": bad.terrain_strokes[0].natural="true"
		else: bad.terrain_strokes[0].mode="reset"
		_check(not fresh.restore(bad).ok and fresh.snapshot()==guard and fresh._undo.size()==undo_count,"invalid contour load leaves complete current city/history intact: "+str(invalid))
	var terrain:=Terrain.new();var clearance:=func(_at:Vector2)->float:return 10.0
	var point:Array[Vector2]=[Vector2(23,20)]
	var signed:Dictionary={}
	for mode: String in ["raise","lower","plateau"]:
		var single:=State.new();single.add_terrain_stroke(point,mode,5.0,1.0,1,true)
		terrain.prepare_raw([],clearance,single.terrain_strokes)
		var bounded:=true;var asymmetric:=false
		for z in range(Terrain.ROWS):
			for x in range(Terrain.COLUMNS):
				var at:Vector2=Terrain.LAND_RECT.position+Vector2(x,z)*Terrain.STEP
				if at.distance_to(point[0])>=5.0 and terrain.raw_offsets[z*Terrain.COLUMNS+x]!=0.0: bounded=false
		var row:Dictionary=single.terrain_strokes[0]
		for angle in range(16):
			var delta:=Vector2.from_angle(TAU*angle/16.0)*3.5
			if absf(terrain._sculpt_weight(point[0]+delta,row)-terrain._sculpt_weight(point[0]-delta,row))>0.01: asymmetric=true
		_check(bounded and asymmetric,"natural "+mode+" has asymmetric shoulders inside the existing dirty bound")
		signed[mode]=terrain.raw_offsets.duplicate()
	var inverse:=true
	for i in range(signed.raise.size()): inverse=inverse and signed.raise[i]==-signed.lower[i]
	_check(inverse,"natural raise and lower have exactly matching inverse profiles")
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"actual terrain/life publication finishes")
	await physics_frame;await process_frame
func _motion(at: Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func _button(down:bool)->void:
	var event:=InputEventMouseButton.new();event.position=demo.pointer;event.global_position=demo.pointer;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func _gesture()->void:
	var start:Vector2=demo.camera.unproject_position(Vector3(-15.0,demo.state.ground_height(Vector2(-15,-2)),-2.0))
	await _motion(start);await _button(true)
	edit_frames.clear();frame_previous=Time.get_ticks_usec();recording=true
	var began:=frame_previous
	await _button(false);await _wait();recording=false
	edit_frames.sort()
	if not facts.has("edits"):facts.edits=[]
	facts.edits.append({"natural":demo.terrain_brush.natural_picker.button_pressed,"latency_ms":float(Time.get_ticks_usec()-began)/1000.0,"max_frame_ms":edit_frames[-1],"life_prepare_ms":demo.life.budget_prepare_ms,"render":demo.town.budget_rebuild.stats.duplicate()})
func _capture(label:String)->void:
	demo.town.clear_preview();demo.ui_layer.visible=false;await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GL capture: "+label);demo.ui_layer.visible=true
func _identity()->Array:
	var result:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():result.append([player.get_instance_id(),player.stream.get_instance_id(),hash(player.stream.data)])
	for player:AudioStreamPlayer in demo.music._effects:result.append(player.get_instance_id())
	return result
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));_logic()
	if "--logic-only" in OS.get_cmdline_user_args():
		print("NATURAL_CONTOUR_LOGIC ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"facts":facts}));quit(0 if failures.is_empty() else 1);return
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	process_frame.connect(_frame)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo)
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	demo.life.set_process(false)
	var loaded:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/台地河湾样例.json")))
	demo._after_edit(loaded,"history");await _wait()
	demo.life.free();demo._setup_life();demo.life.set_process(false)
	var identity:=_identity();var bases:Array=[];var water:float=demo.state.ground_height(Vector2(12,7.8))
	for house:Dictionary in demo.state.houses:
		var at:=Vector2(house.origin[0],house.origin[1]);bases.append([at,demo.state.ground_height(at)])
	demo.focus=Vector3(-15,1,-2);demo.zoom=18;demo.pitch=.68;demo.yaw=-1.2;demo._update_camera();demo.select_tool(8)
	demo.terrain_brush.mode_picker.select(4);demo.terrain_brush.mode_picker.item_selected.emit(4)
	demo.terrain_brush.radius_picker.select(2);demo.terrain_brush.radius_picker.item_selected.emit(2)
	demo.terrain_brush.natural_picker.button_pressed=false
	var initial:=_bytes(demo.state);var initial_count:int=demo.state.terrain_strokes.size()
	await _gesture();var regular:=_bytes(demo.state);await _capture("01_规整台地")
	_check(demo.state.terrain_strokes.size()==initial_count+2 and not demo.state.terrain_strokes[-1].has("natural"),"actual unchecked option creates legacy regular plateau")
	demo._after_edit(demo.state.undo(),"history");await _wait();_check(_bytes(demo.state)==initial,"undo of actual regular gesture restores exact initial terrain")
	demo.terrain_brush.natural_picker.button_pressed=true;await _gesture();await _capture("02_自然台地")
	_check(demo.state.terrain_strokes.size()==initial_count+2 and demo.state.terrain_strokes[-1].get("natural",false) and _bytes(demo.state)!=regular,"actual checked option creates different natural plateau with one undo transaction")
	facts.life_prepare_ms=demo.life.budget_prepare_ms
	var protected_same:bool=demo.state.ground_height(Vector2(12,7.8))==water
	for row:Array in bases:
		protected_same=protected_same and demo.state.ground_height(row[0])==row[1]
	_check(protected_same,"existing saved house floors and wet core retain their original ground heights")
	var ray_error:=0.0
	for at:Vector2 in [Vector2(-17.21,-3.18),Vector2(-15,-2),Vector2(-12.63,-.42)]:
		var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,12,at.y),Vector3(at.x,-5,at.y),2))
		_check(not hit.is_empty(),"natural terrain has real physics surface")
		if not hit.is_empty():ray_error=maxf(ray_error,absf(float(hit.position.y)-demo.state.ground_height(at)))
	_check(ray_error<.001,"actual ray collisions agree with the authored triangle heights")
	var roots:=0;var root_error:=0.0
	for block:Node3D in demo.town.meadow.blocks.values():
		var lawn:MultiMeshInstance3D=block.get_node_or_null("Meadow_lawn")
		if lawn==null:continue
		for i in range(0,lawn.multimesh.instance_count,37):
			var at:Vector3=lawn.global_transform*lawn.multimesh.get_instance_transform(i).origin
			root_error=maxf(root_error,absf(at.y-demo.state.ground_height(Vector2(at.x,at.z))-.017));roots+=1
	_check(roots>100 and root_error<.001,"actual grass roots follow the newly published natural contour")
	demo.select_tool(0);demo.ui_layer.visible=false
	var resident_before:Array[Vector3]=[]
	for resident:Dictionary in demo.life.residents:resident_before.append(resident.node.position)
	demo.life.set_process(true)
	var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
	frames.sort();facts.p95_ms=frames[113];facts.max_ms=frames[-1];facts.ray_error_m=ray_error;facts.grass_root_error_m=root_error;facts.grass_samples=roots
	var resident_error:=0.0;var moved:=0;var sample_count:=0
	for i in range(demo.life.residents.size()):
		var resident:Dictionary=demo.life.residents[i]
		if resident.get("cafe_visit",{})!={} or resident.paused:continue
		var at:Vector3=resident.node.position;sample_count+=1
		resident_error=maxf(resident_error,absf(at.y-demo.state.street_height(Vector2(at.x,at.z))-.10))
		if at.distance_to(resident_before[i])>.01:moved+=1
	_check(sample_count>0 and moved>0 and resident_error<.001,"real residents continue moving along the newly published shared street heights")
	facts.residents={"samples":sample_count,"moved":moved,"height_error_m":resident_error}
	_check(_identity()==identity and demo.music.get_child_count()==13,"terrain edits retain the nine music PCM resources and four short audio players")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continue file remains byte-identical")
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("NATURAL_CONTOUR ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)

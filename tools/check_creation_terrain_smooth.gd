extends SceneTree
## One bounded GL check for the new terrain shoulder-softening brush.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
const OUT := "res://验证记录/地貌柔化_2026-10-16"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}

func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy) and Time.get_ticks_msec()<deadline: await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending and not demo.gallery.busy,"terrain smoothing transaction published")
	await physics_frame;await process_frame
func _digest()->String:
	return var_to_bytes(demo.state._ground_terrain.vertices).hex_encode().sha256_text()+var_to_bytes(demo.state._ground_terrain.offsets).hex_encode().sha256_text()
func _slope(at:Vector2)->float:
	demo.state.prepare_ground_height();return demo.state._ground_terrain.gradient_at(at).length()
func _max_slope(center:Vector2,radius:float)->float:
	var result:=0.0
	for z in range(-20,21):
		for x in range(-20,21):
			var at:=center+Vector2(x,z)*0.25
			if at.distance_to(center)<=radius: result=maxf(result,_slope(at))
	return result
func _capture(label:String)->void:
	demo.town.clear_preview();await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"saved actual GL frame: "+label)

func _ordered_strokes()->void:
	var clearance := func(_at:Vector2)->float:return 10.0
	var raise_row:Dictionary={"id":"t1","points":[[20.0,20.0]],"mode":"raise","radius":1.5,"strength":1.0}
	var smooth_row:Dictionary={"id":"t2","points":[[20.0,20.0]],"mode":"smooth","radius":2.5,"strength":1.0}
	var later:Dictionary={"id":"t3","points":[[20.0,20.0]],"mode":"raise","radius":1.5,"strength":0.2}
	var field:=Terrain.new();field.prepare([],clearance,[raise_row,smooth_row])
	var smooth_heights:PackedFloat32Array=field.raw_vertices.duplicate()
	field.prepare([],clearance,[raise_row,smooth_row,later])
	var ordered_heights:PackedFloat32Array=field.raw_vertices.duplicate()
	var later_exact:=true
	for z in range(Terrain.ROWS):
		for x in range(Terrain.COLUMNS):
			var at:Vector2=Terrain.LAND_RECT.position+Vector2(x,z)*Terrain.STEP
			var index:int=z*Terrain.COLUMNS+x
			var expected:float=float(smooth_heights[index])+0.2*field._sculpt_weight(at,later)
			later_exact=later_exact and absf(float(ordered_heights[index])-expected)<0.000001
	_check(later_exact,"raise after smooth adds its Gaussian brush without being blurred by an earlier stroke")
	var reordered:=Terrain.new();reordered.prepare([],clearance,[raise_row,later,smooth_row])
	_check(reordered.raw_vertices!=ordered_heights,"smooth-then-raise differs from raise-then-smooth")
	field.prepare([],clearance,[raise_row,smooth_row])
	_check(field.raw_vertices==smooth_heights,"removing later stroke restores exact ordered field")
	field.prepare([],clearance,[raise_row,smooth_row,later])
	_check(field.raw_vertices==ordered_heights,"reapplying later stroke restores exact ordered field")
	var cold:=Terrain.new();cold.prepare([],clearance,[raise_row,smooth_row,later])
	_check(cold.raw_vertices==field.raw_vertices and cold.raw_offsets==field.raw_offsets,"fresh and cached ordered replay agree exactly")
	var reset:Dictionary=later.duplicate(true);reset.id="t4";reset.mode="reset"
	field.prepare([],clearance,[raise_row,smooth_row,later,reset])
	var reset_exact:=true
	for z in range(Terrain.ROWS):
		for x in range(Terrain.COLUMNS):
			var at:Vector2=Terrain.LAND_RECT.position+Vector2(x,z)*Terrain.STEP
			var index:int=z*Terrain.COLUMNS+x
			var expected:float=lerpf(float(ordered_heights[index]),Terrain.BASE_HEIGHT,field._sculpt_weight(at,reset))
			reset_exact=reset_exact and absf(float(field.raw_vertices[index])-expected)<0.000001
	_check(reset_exact,"reset after smooth acts on the current smoothed field")
	var city:=State.new();var p:Array[Vector2]=[Vector2(20,20)]
	city.add_terrain_stroke(p,"raise",1.5,1.0);city.add_terrain_stroke(p,"smooth",2.5,1.0);city.prepare_ground_height()
	var before:PackedFloat32Array=city._ground_terrain.vertices.duplicate()
	city.add_terrain_stroke(p,"raise",1.5,0.2);city.prepare_ground_height()
	var after:PackedFloat32Array=city._ground_terrain.vertices.duplicate()
	city.undo();city.prepare_ground_height();_check(city._ground_terrain.vertices==before,"State undo preserves ordered smooth history")
	city.redo();city.prepare_ground_height();_check(city._ground_terrain.vertices==after,"State redo preserves ordered smooth history")

func _run()->void:
	_ordered_strokes()
	if "--logic-only" in OS.get_cmdline_user_args():
		print("TERRAIN_SMOOTH_ORDER ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
		quit(0 if failures.is_empty() else 1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo)
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline: await process_frame
	var loaded:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/地貌河湾样例.json")))
	_check(loaded.ok,"landform sample restores through State API")
	demo._after_edit(loaded,"history");await _wait();demo.life.set_process(false);demo.ui_layer.visible=false
	var ridge:=Vector2(10.0,12.0);var before:=_digest();var peak_before:float=demo.state.ground_height(ridge);var slope_before:float=_max_slope(ridge,2.0);var shoulder_before:float=_slope(ridge+Vector2(0.5,0.0))
	var pond_level:float=demo.state.ground_height(Vector2(12.0,7.8))
	var house_levels:Array[Dictionary]=[]
	for house:Dictionary in demo.state.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)==0:
				var origin:=Vector2(float(house.origin[0]),float(house.origin[1]))+Vector2(float(cell.x),float(cell.z))*1.8
				house_levels.append({"at":origin,"height":demo.state.ground_height(origin)})
	demo.focus=Vector3(ridge.x,peak_before+0.6,ridge.y);demo.zoom=12.0;demo.pitch=0.72;demo.yaw=0.62;demo._update_camera();await _capture("01_柔化前_山脊坡肩")
	var smooth_points:Array[Vector2]=[Vector2(6.7,11.5),Vector2(10.0,12.0),Vector2(13.5,10.6)]
	var changed:Dictionary=demo.state.add_terrain_stroke(smooth_points,"smooth",5.0,1.0)
	_check(changed.ok and demo.state.snapshot().schema==State.TERRAIN_SMOOTH_SCHEMA,"smooth brush writes the new compatible terrain schema")
	demo._after_edit(changed,"terrain");await _wait()
	var peak_after:float=demo.state.ground_height(ridge);var slope_after:float=_max_slope(ridge,2.0);var shoulder_after:float=_slope(ridge+Vector2(0.5,0.0))
	_check(peak_after>=peak_before,"smooth brush retains the ridge center instead of cutting it below its prior height")
	_check(peak_after<peak_before-0.02 or slope_after<slope_before or shoulder_after<shoulder_before,"smooth brush reduces a measured ridge shoulder")
	var protected_same:=absf(demo.state.ground_height(Vector2(12.0,7.8))-pond_level)<0.000001
	for row:Dictionary in house_levels:
		protected_same=protected_same and absf(demo.state.ground_height(row.at)-float(row.height))<0.000001
	_check(protected_same,"smoothing leaves the pond core and every structural ground pad unchanged")
	await _capture("02_柔化后_山脊坡肩")
	var smoothed:=_digest();var undone:Dictionary=demo.state.undo();demo._after_edit(undone,"history");await _wait()
	_check(undone.ok and _digest()==before,"undo restores the exact pre-smoothing terrain")
	var redone:Dictionary=demo.state.redo();demo._after_edit(redone,"history");await _wait()
	_check(redone.ok and _digest()==smoothed,"redo restores the exact smoothed terrain")
	var repeated_before:=_digest()
	var small_raise:Array[Vector2]=[ridge]
	var repeat_result:Dictionary=demo.state.add_terrain_stroke(small_raise,"raise",1.5,0.2)
	demo._after_edit(repeat_result,"terrain");await _wait()
	var after_raise:=_digest();var replay=State.new();var replay_result:Dictionary=replay.restore(demo.state.snapshot())
	if replay_result.ok: replay.prepare_ground_height()
	_check(replay_result.ok and var_to_bytes(replay._ground_terrain.vertices)==var_to_bytes(demo.state._ground_terrain.vertices),"later sculpt rebuilds the smoothed source deterministically")
	_check(after_raise!=repeated_before,"later raise changes the smoothed field exactly once")
	var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120): await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.0);previous=now
	frames.sort();facts={"slope_before":slope_before,"slope_after":slope_after,"shoulder_before":shoulder_before,"shoulder_after":shoulder_after,"peak_before":peak_before,"peak_after":peak_after,"p95_ms":frames[113],"checks":checks.size()}
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city bytes remain unchanged")
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("TERRAIN_SMOOTH ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values(): p.stop()
	for p:AudioStreamPlayer in demo.music._effects: p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values(): p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)

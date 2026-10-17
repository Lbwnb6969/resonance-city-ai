extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const SAMPLE="res://数据/柱廊河湾样例.json"
const OUT="res://验证记录/连拱柱廊_2026-10-16"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _audio()->Array:
	var result:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id];var data:PackedByteArray=player.stream.data
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(data)
		result.append([id,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player:AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _ray(frame:Transform3D,a:Vector3,b:Vector3)->Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(frame*a,frame*b,1))
func _capture(name_value:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual arcade image saved: "+name_value)
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var source:PackedByteArray=FileAccess.get_file_as_bytes(SAMPLE)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var restored:Dictionary=demo.state.restore(JSON.parse_string(source.get_string_from_utf8()));demo._after_edit(restored,"history");await _wait()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	var house_root:Node3D=demo.town.house_roots.h1
	var reports:Array=house_root.get_meta("arcades",[]);var plans:Array=house_root.get_meta("arcade_faces",[])
	_check(restored.ok and reports.size()>=2 and plans.size()==reports.size(),"production renderer installs actual planned two-cell outer arcades")
	var open_ok:=true;var rear_ok:=true;var column_ok:=true;var arch_ok:=true;var shape_count:=0;var rays:Array=[]
	for shape:CollisionShape3D in house_root.find_children("ArcadeOuterPick","CollisionShape3D",true,false):
		shape_count+=1;var body:StaticBody3D=shape.get_parent();var frame:Transform3D=shape.global_transform
		var open:Dictionary=_ray(frame,Vector3(0,.6,.13),Vector3(0,.6,-.19))
		var rear:Dictionary=_ray(frame,Vector3(0,.6,.3),Vector3(0,.6,-.65))
		var column:Dictionary=_ray(frame,Vector3(.775,.4,.3),Vector3(.775,.4,-.25))
		var arch:Dictionary=_ray(frame,Vector3(0,1.5,.3),Vector3(0,1.5,-.25))
		var rear_at:Vector3=frame.affine_inverse()*rear.position if not rear.is_empty() else Vector3.ZERO
		open_ok=open_ok and open.is_empty()
		rear_ok=rear_ok and not rear.is_empty() and rear_at.z<-.20 and rear_at.z>-.55
		column_ok=column_ok and not column.is_empty() and column.collider.get_meta("cell_id","")==body.get_meta("cell_id","") and column.collider.get_meta("house_id","")=="h1"
		arch_ok=arch_ok and not arch.is_empty() and arch.collider.get_meta("cell_id","")==body.get_meta("cell_id","")
		rays.append({"cell_id":body.get_meta("cell_id",""),"open":open.is_empty(),"rear_local":rear_at,"column_hit":not column.is_empty(),"arch_hit":not arch.is_empty(),"outer_triangles":shape.shape.get_faces().size()/3})
	_check(shape_count>=2 and open_ok and rear_ok,"actual lower central corridor is clear from old wall plane to recessed wall without full-height box collision")
	_check(column_ok and arch_ok,"actual stone columns and upper arch faces remain pickable as their original house and cell")
	var doors:Array=house_root.get_meta("entrances",[])
	_check(doors.any(func(row):return bool(row.active)) and demo.life.house_connected("h1"),"original active entrance and real life-network access remain available below the arcade")
	facts.geometry={"plans":plans,"reports":reports,"rays":rays}
	var upper_id:String=""
	for house:Dictionary in demo.state.houses:
		if house.id!="h1": continue
		for cell:Dictionary in house.cells:
			if int(cell.level)==1 and cell.kind=="room": upper_id=cell.id;break
	var removed:Dictionary=demo.state.remove_cell("h1",upper_id);demo._after_edit(removed,"erase");await _wait()
	var reduced:bool=demo.town.house_roots.h1.get_meta("arcade_faces",[]).size()<plans.size()
	var undone:Dictionary=demo.state.undo();demo._after_edit(undone,"history");await _wait()
	_check(removed.ok and reduced and undone.ok and demo.town.house_roots.h1.get_meta("arcade_faces",[])==plans,"real upper-floor removal publishes fewer arcades and undo restores exact renderer faces")
	demo.focus=Vector3(-7.1,1.1,-4.7);demo.zoom=10;demo.yaw=.0;demo.pitch=.55;demo._update_camera();demo.town.clear_preview();await _capture("01_石板街连拱柱廊")
	demo._toggle_light();demo.focus=Vector3(-7,1.2,-4.5);demo.zoom=13;demo.yaw=-.65;demo.pitch=.65;demo._update_camera();await _capture("02_夕光柱廊与入口")
	var wall:Array[float]=[];var draws:Array[float]=[]
	for ignored in range(15): await process_frame
	var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draw_median":draws[60]}
	_check(_audio()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock and FileAccess.get_file_as_bytes(SAMPLE)==source and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"arcade visuals preserve nine PCM thirteen Players actual transport source sample and personal city bytes")
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"count":checks.size(),"failures":failures,"facts":facts,"command":"Godot --path . --audio-driver Dummy --max-fps180 --script tools/check_arcade_live.gd"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("ARCADE_LIVE ",JSON.stringify(result))
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)

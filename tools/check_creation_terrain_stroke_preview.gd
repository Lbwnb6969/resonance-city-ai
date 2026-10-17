extends SceneTree
## Actual drag/cancel/release and swept-region evidence on production terrain.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/地形整笔预览_2026-10-17"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _motion(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func _button(down:bool)->void:
	var event:=InputEventMouseButton.new();event.position=demo.pointer;event.global_position=demo.pointer;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
func _key(code:int)->void:
	for down:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=down;root.push_input(event);await process_frame
func _point(at:Vector2)->Vector2:return demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"terrain/life publication completes")
	await physics_frame;await process_frame
func _audio()->Array:
	var ids:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():ids.append([p.get_instance_id(),p.stream.get_instance_id()])
	for p:AudioStreamPlayer in demo.music._effects:ids.append(p.get_instance_id())
	return ids
func _distance(at:Vector2,points:Array[Vector2])->float:
	var distance:=INF
	for i in range(points.size()):distance=minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,points[maxi(0,i-1)],points[i])))
	return distance
func _inspect(label:String,points:Array[Vector2],radius:float,plateau:bool,natural:bool)->void:
	var mesh:MeshInstance3D=demo.town.preview.get_node("TerrainBrushRing")
	var vertices:PackedVector3Array=mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]
	var error:=0.0
	for point:Vector3 in vertices:error=maxf(error,absf(point.y-demo.state.ground_height(Vector2(point.x,point.z))-.045))
	_check(error<.00001,label+" preview vertices follow published terrain with 4.5cm lift")
	_check(demo.town.preview.get_child_count()==1 and mesh.mesh.get_surface_count()==1,label+" entire stroke and tip use one mesh and one material")
	var contours:Array=demo.town.preview.get_meta("terrain_contours")
	var bound_error:=0.0
	for point:Vector2 in contours[0]:bound_error=maxf(bound_error,absf(_distance(point,points)-radius))
	_check(bound_error<.04,label+" outer swept contour matches finite brush radius along complete polyline")
	if plateau:
		var core:float=radius*(.325 if natural else .5)
		var core_ok:=true
		var row:Dictionary={"mode":"plateau","points":[],"radius":radius,"natural":natural}
		for at:Vector2 in points:row.points.append([at.x,at.y])
		for point:Vector2 in contours[-1]:
			core_ok=core_ok and _distance(point,points)<=core+.04
			# Move 4cm toward a nearest stroke station to exclude the offset
			# library's sub-centimetre polygon approximation at the boundary.
			var nearest:=points[0]
			for i in range(points.size()):
				var candidate:=Geometry2D.get_closest_point_to_segment(point,points[maxi(0,i-1)],points[i])
				if candidate.distance_to(point)<nearest.distance_to(point):nearest=candidate
			var inside:=point.move_toward(nearest,.04)
			core_ok=core_ok and demo.state._ground_terrain._sculpt_weight(inside,row)>.99999
		_check(core_ok,label+" core contour guarantees full plateau weight for the committed brush")
	facts[label]={"triangles":vertices.size()/3,"height_error_m":error,"outer_bound_error_m":bound_error,"contours":contours.size()}
func _capture(label:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GL capture: "+label)
func _run()->void:
	if DisplayServer.get_name()=="headless":push_error("Requires actual GL viewport");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	var audio:=_audio();var clock:float=demo.music._playback_clock()
	demo.focus=Vector3(-25,.2,-20);demo.zoom=24;demo.pitch=.78;demo.yaw=.62;demo._update_camera();await _key(KEY_9)
	demo.terrain_brush.mode_picker.select(4);demo.terrain_brush.mode_picker.item_selected.emit(4)
	demo.terrain_brush.radius_picker.select(0);demo.terrain_brush.radius_picker.item_selected.emit(0)
	var initial:Dictionary=demo.state.snapshot()
	var path:Array[Vector2]=[Vector2(-29,-21),Vector2(-27,-21),Vector2(-25,-21),Vector2(-25,-19),Vector2(-23,-19)]
	await _motion(_point(path[0]));await _button(true)
	for at:Vector2 in path:await _motion(_point(at))
	var draft:Array[Vector2]=demo.terrain_brush.points.duplicate()
	_check(demo.terrain_brush.drawing and draft.size()>=5 and demo.state.snapshot()==initial,"real viewport drag retains full pending polyline without authored writes")
	_inspect("natural_drag",draft,2.0,true,true)
	await _capture("01_自然台地整笔范围")
	await _key(KEY_ESCAPE);await _button(false)
	_check(demo.state.snapshot()==initial and not demo.terrain_brush.drawing and demo.town.preview.get_meta("terrain_points",[]).size()<=1,"Escape discards pending stroke and returns to the single hover brush without editing city")
	await _motion(_point(path[0]));await _button(true)
	for at:Vector2 in path:await _motion(_point(at))
	draft=demo.terrain_brush.points.duplicate()
	await _button(false);await _wait()
	var committed:bool=demo.state.terrain_strokes.size()==2 and demo.state.terrain_strokes[-1].natural
	for i in range(draft.size()):committed=committed and Vector2(demo.state.terrain_strokes[-1].points[i][0],demo.state.terrain_strokes[-1].points[i][1]).distance_to(draft[i])<.00001
	_check(committed,"release commits exact previewed stations once as a two-layer plateau")
	demo.town.clear_preview();await _capture("02_松手后的连续台地")
	demo.set_process(false)
	var published:Dictionary=demo.state.snapshot()
	demo.town.show_terrain_brush(draft,2.0,"plateau",true);_inspect("sculpted_slope",draft,2.0,true,true)
	var slope_mesh:MeshInstance3D=demo.town.preview.get_node("TerrainBrushRing")
	var low:=INF;var high:=-INF
	for at:Vector3 in slope_mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]:low=minf(low,at.y);high=maxf(high,at.y)
	_check(high-low>.5 and demo.state.snapshot()==published,"preview follows actual raised shoulders without changing published terrain")
	await _capture("04_笔画预览贴合已有坡面")
	demo.set_process(true)
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(demo.state.terrain_strokes==initial.terrain_strokes,"one undo removes the entire released drag")
	# Complex closed stroke must retain its interior island rather than show
	# a filled disk. Direct presentation case leaves the authored state intact.
	var loop:Array[Vector2]=[Vector2(-30,-25),Vector2(-20,-25),Vector2(-20,-15),Vector2(-30,-15),Vector2(-30,-25)]
	demo.set_process(false)
	var began:=Time.get_ticks_usec();demo.town.show_terrain_brush(loop,2.0,"raise",true);facts.loop_preview_ms=float(Time.get_ticks_usec()-began)/1000.0
	_inspect("closed_loop",loop,2.0,false,true)
	_check(demo.town.preview.get_meta("terrain_contours").size()==2,"closed stroke preserves both outer boundary and untouched island boundary")
	await _capture("03_闭合笔画保留内岛")
	demo.town.show_terrain_brush(path,2.0,"plateau",false);_inspect("regular_drag",path,2.0,true,false)
	var long_path:Array[Vector2]=[]
	for i in range(200):long_path.append(Vector2(-35+float(i)*.35,-28+sin(float(i)*.07)*2.0))
	began=Time.get_ticks_usec();demo.town.show_terrain_brush(long_path,3.5,"raise",true);facts.long_preview_ms=float(Time.get_ticks_usec()-began)/1000.0
	_check(facts.long_preview_ms<12.0 and demo.town.preview.get_child_count()==1,"200-station brush remains one batch within 12ms interactive preparation")
	demo.town.clear_preview()
	_check(_audio()==audio and demo.music._playback_clock()>clock,"preview cancel commit and undo preserve original music identities and transport")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save bytes preserved")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("TERRAIN_STROKE_PREVIEW ",JSON.stringify(report))
	demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)

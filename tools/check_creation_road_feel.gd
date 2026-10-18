extends SceneTree
## Actual viewport input at centimetre increments, including a release-only tip.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/拉路跟手_2026-10-18"
var demo
var failures: Array[String]=[]
var checks: Array=[]
var facts: Dictionary={}
var times: Array[float]=[]
var baseline:=false
func _initialize()->void:run.call_deferred()
func check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok and not baseline:failures.append(label);push_error(label)
func screen(at: Vector2)->Vector2:return demo.camera.unproject_position(Vector3(at.x,0.,at.y))
func button(at: Vector2,down: bool)->void:
	var event:=InputEventMouseButton.new();event.position=screen(at);event.global_position=event.position;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event)
func motion(at: Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=screen(at);event.global_position=event.position;root.push_input(event)
	var started:=Time.get_ticks_usec();demo._append_road_point();times.append((Time.get_ticks_usec()-started)/1000.)
	await process_frame
func capture(label: String)->void:
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+("before_" if baseline else "after_")+label+".png")
func run()->void:
	baseline="--baseline" in OS.get_cmdline_user_args()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	demo.focus=Vector3(-23,.7,-2);demo.zoom=23.;demo.yaw=.15;demo.pitch=.9;demo._update_camera();demo.ui_layer.visible=false;demo.select_tool(2)
	await physics_frame;await process_frame
	var original: Dictionary=demo.state.snapshot();var start:=Vector2(-29,-6)
	button(start,true);await process_frame
	var maximum_lag:=0.;var updated:=0;var previous:=start
	for i in range(1,81):
		var at:=start+Vector2(i*.04,0.);await motion(at)
		var endpoint: Vector2=demo.road_preview[-1]
		maximum_lag=maxf(maximum_lag,at.distance_to(endpoint))
		if endpoint.distance_to(previous)>.01:updated+=1
		previous=endpoint
	facts.slow_tip={"max_lag_m":maximum_lag,"updates":updated,"motions":80}
	check(maximum_lag<.025 and updated>=78,"slow 4cm motions keep the visible road tip within 2.5cm every frame")
	check(demo.state.snapshot()==original,"drag preview writes no town history or identities")
	var lawn: ShaderMaterial=demo.town.meadow.materials.lawn
	check(lawn.get_shader_parameter("road_draft_enabled")==true,"held valid stroke folds actual grass through the temporary GPU field")
	var field=demo.town.road_draft_field
	var gpu: Image=field.texture.get_image()
	check(gpu!=null and gpu.get_data()==field.image.get_data(),"actual GPU mask readback matches the active scanline field")
	await capture("slow_tip")
	var release:=start+Vector2(3.27,0.)
	button(release,false);await process_frame
	var committed: Dictionary=demo.state.roads[-1]
	var end:=Vector2(committed.points[-1][0],committed.points[-1][1]);facts.release_error_m=end.distance_to(release)
	check(end.distance_to(release)<.025,"release-only movement commits its actual final cursor position")
	var deadline:=Time.get_ticks_msec()+30000;var missing:=0
	while demo.edit_pending() and Time.get_ticks_msec()<deadline:
		if demo.town.preview.get_child_count()==0:missing+=1
		await process_frame
	facts.missing_preview_frames=missing
	check(not demo.edit_pending() and missing==0,"stroke stays visible until asynchronous permanent paving publishes")
	await process_frame;await process_frame
	demo._history(false)
	while demo.edit_pending():await process_frame
	check(demo.state.roads==original.roads,"one actual undo restores original roads")
	await process_frame;await process_frame
	button(Vector2(-29,-3),true);await process_frame;await motion(Vector2(-26,-3))
	var cancel:=InputEventKey.new();cancel.keycode=KEY_ESCAPE;cancel.pressed=true;root.push_input(cancel)
	button(Vector2(-26,-3),false);await process_frame
	check(not demo.road_drawing and demo.road_gesture.points.is_empty() and lawn.get_shader_parameter("road_draft_enabled")==false and demo.state.roads==original.roads,"actual Escape restores grass and clears the whole brush without committing")
	await capture("cancel_restores_grass")
	button(Vector2(-29,-3),true);await process_frame
	var held: Array[Vector2]=[];var prefix_shift:=0.
	for i in range(1,121):
		var at:=Vector2(-29.+i*.085,-3.+sin(i*.045)*2.)
		await motion(at)
		if i==60:held=demo.road_preview.duplicate()
		if i>60 and held.size()>10:
			var measure:=0.
			for j in range(1,held.size()):measure+=held[j-1].distance_to(held[j])
			var along:=0.
			for j in range(held.size()):
				if j>0:along+=held[j-1].distance_to(held[j])
				if along>measure-2.5:break
				var nearest:=INF
				for k in range(1,demo.road_preview.size()):nearest=minf(nearest,held[j].distance_to(Geometry2D.get_closest_point_to_segment(held[j],demo.road_preview[k-1],demo.road_preview[k])))
				prefix_shift=maxf(prefix_shift,nearest)
	facts.settled_prefix_shift_m=prefix_shift
	check(prefix_shift<.005,"settled curve more than 2.5m behind the brush stays stable")
	await capture("free_curve")
	var displayed: Array[Vector2]=demo.road_preview.duplicate()
	button(Vector2(-29.+120*.085,-3.+sin(120*.045)*2.),false);await process_frame
	committed=demo.state.roads[-1]
	var exact: bool=committed.points.size()==displayed.size()
	for i in range(mini(committed.points.size(),displayed.size())):exact=exact and Vector2(committed.points[i][0],committed.points[i][1]).is_equal_approx(displayed[i])
	check(exact,"released curve keeps the displayed centreline without a second smoothing pass")
	deadline=Time.get_ticks_msec()+30000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline:await process_frame
	await process_frame;await process_frame;await capture("permanent_curve")
	check(lawn.get_shader_parameter("road_draft_enabled")==false,"permanent paving publication releases its temporary grass mask")
	demo.road_straight=true;demo.road_style="promenade"
	button(Vector2(-32,3),true);await process_frame;await motion(Vector2(-27,3))
	var lock:=InputEventKey.new();lock.keycode=KEY_SPACE;lock.pressed=true;root.push_input(lock);await process_frame
	await motion(Vector2(-27,7))
	check(field.material.get_shader_parameter("paved")==true,"stone-street preview uses the same paving pattern as the permanent street")
	await capture("stone_locked_preview")
	check(demo.road_locked_segments==1 and demo.road_preview.size()==3,"actual Space keeps the first straight span while its second tail follows freely")
	var locked: Array[Vector2]=demo.road_preview.duplicate()
	button(Vector2(-27,7),false);await process_frame
	check(demo.state.roads[-1].points.size()==3 and Vector2(demo.state.roads[-1].points[1][0],demo.state.roads[-1].points[1][1]).is_equal_approx(locked[1]),"straight-mode release retains authored lock rather than smoothing through it")
	deadline=Time.get_ticks_msec()+30000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline:await process_frame
	await process_frame;await process_frame
	var frames: Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort();facts.steady={"p95_ms":frames[113],"max_ms":frames[-1]}
	times.sort();facts.preview_cpu={"p95_ms":times[int(times.size()*.95)],"max_ms":times[-1],"samples":times.size()}
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated drawing keeps personal save bytes unchanged")
	var result: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+("/baseline.json" if baseline else "/live.json"),FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("ROAD_FEEL ",JSON.stringify({"ok":result.ok,"checks":checks.size(),"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)

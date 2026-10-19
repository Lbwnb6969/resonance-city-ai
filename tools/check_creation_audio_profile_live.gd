extends SceneTree
## AudioServer itself produces audio_thread counters; the loopback collector
## receives the built-in profiler packets without modifying the profiler.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/音频原生调度_2026-10-19"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var driver:="Dummy"
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _sample(phase:String,seconds:float)->void:
	EngineDebugger.send_message("creation_audio:phase",[phase])
	EngineDebugger.profiler_enable("servers",true,[0,false])
	var start:=Time.get_ticks_usec();var end:=Time.get_ticks_msec()+int(seconds*1000.)
	while Time.get_ticks_msec()<end:await process_frame
	EngineDebugger.profiler_enable("servers",false)
	EngineDebugger.send_message("creation_audio:end_phase",[phase,(Time.get_ticks_usec()-start)/1000000.])
func _run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--profile-driver="):driver=arg.trim_prefix("--profile-driver=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	_check(EngineDebugger.is_active() and EngineDebugger.has_profiler("servers"),"native remote debugger exposes the built-in servers profiler")
	if not failures.is_empty():await _finish();return
	_check(AudioServer.get_driver_name()==driver,"the requested native audio driver is active")
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+driver;root.add_child(demo);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.music.audio_report.is_empty(),"all baked four-color PCM loads through the production music node")
	if demo.music.audio_report.is_empty():await _finish();return
	demo._after_edit(demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))),"history")
	deadline=Time.get_ticks_msec()+45000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(demo.state.houses.size()==127 and not demo.edit_pending(),"actual flagship publishes before native audio sampling")
	demo.focus=Vector3(23,1,28);demo.zoom=23.;demo.pitch=.76;demo.yaw=.35;demo._update_camera();demo.ui_layer.visible=false
	await create_timer(.8).timeout
	var identity:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():identity.append(player.get_instance_id())
	await _sample("daily",6.)
	# Deliberately exercise the bounded worst short-voice allocation, including
	# the existing remote low-pass and panning buses, while all 12 longs run.
	for i in range(4):
		var player:AudioStreamPlayer=demo.music._effects[i]
		var stream:AudioStreamWAV=demo.music._edit_streams["quartet_0"].duplicate();stream.loop_mode=AudioStreamWAV.LOOP_FORWARD;stream.loop_end=stream.data.size()/2
		demo.music.play_effect_at(player,stream,Vector2(25+i,28),1.,true)
	await _sample("four_filtered_shorts",6.)
	var after:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():after.append(player.get_instance_id())
	_check(after==identity and demo.music._effects.size()==4,"native profiling retains the production fixed player pool")
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+driver+"_实际旗舰.png")==OK,"actual profiled GL image is saved")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"native profiling preserves personal save bytes")
	facts.child_pid=OS.get_process_id();facts.requested_driver=driver;facts.actual_driver=AudioServer.get_driver_name();facts.devices=AudioServer.get_output_device_list();facts.mix_rate=AudioServer.get_mix_rate();facts.output_latency=AudioServer.get_output_latency()
	await _finish()
func _finish()->void:
	if EngineDebugger.is_profiling("servers"):EngineDebugger.profiler_enable("servers",false)
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/"+driver+"_scene.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	EngineDebugger.send_message("creation_audio:done",[report.ok])
	if demo!=null:demo.queue_free();await process_frame;demo=null
	await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)

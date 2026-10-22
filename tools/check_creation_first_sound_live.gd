extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
var demo
var output:="res://验证记录/缺库首开_2026-10-22/fresh"
var capture:AudioEffectCapture
var started:=0
var first_sound:=-1.
var peak:=0.
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _process(_delta:float)->bool:
	if capture!=null:
		var available:=capture.get_frames_available()
		if available==0:return false
		var buffer:=capture.get_buffer(available)
		for frame:Vector2 in buffer:
			peak=maxf(peak,maxf(absf(frame.x),absf(frame.y)))
			if first_sound<0. and maxf(absf(frame.x),absf(frame.y))>.0001:first_sound=float(Time.get_ticks_msec()-started)/1000.
	return false
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	for i in range(12):await process_frame
func ground_click(at:Vector2)->void:
	var point:Vector2=demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
	var move:=InputEventMouseMotion.new();move.position=point;move.global_position=point;root.push_input(move);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=point;event.global_position=point;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
	await settle()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=100
	check(not FileAccess.file_exists(Cache.PATH),"fresh checkout contains no original local PCM bank")
	check(FileAccess.file_exists(Cache.PORTABLE_PATH),"tracked complete portable sound bank exists")
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	capture=AudioEffectCapture.new();capture.buffer_length=2.;AudioServer.add_bus_effect(0,capture)
	var recording:=AudioEffectRecord.new();recording.format=AudioStreamWAV.FORMAT_16_BITS;AudioServer.add_bus_effect(0,recording);recording.set_recording_active(true)
	started=Time.get_ticks_msec();demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=output+"/works";root.add_child(demo)
	demo.life.set_process(false);demo.focus=Vector3(-11,.7,-6);demo.zoom=24.;demo.pitch=.95;demo._update_camera();await settle()
	# Do not wait for audio readiness before exercising the actual new-player UI.
	var guide=demo.intuitive_guidance
	for i in range(3):
		check(not guide.target_points.is_empty(),"actual initial guide offers a legal ground placement")
		if guide.target_points.is_empty():break
		await ground_click(guide.target_points[0])
	check(demo.state.houses.size()==3,"three real ground clicks build the starter choir")
	var deadline:=Time.get_ticks_msec()+15000
	while (demo.music._loading or not demo.music.daily_source().audible or demo.music._players.foundation.volume_db<=-40.) and Time.get_ticks_msec()<deadline:await process_frame
	var choir_seconds:=float(Time.get_ticks_msec()-started)/1000.
	check(not demo.music._loading and demo.music.audio_report.get("bank_codec","")=="qoa","production cache fallback opens the full QOA bank without synthesis")
	check(demo.music.daily_source().audible and demo.music._players.foundation.volume_db> -40.,"three actual homes naturally fade in the shared foundation")
	check(first_sound>=0. and first_sound<60. and choir_seconds<60.,"fresh first-placement sound and three-house choir arrive within the onboarding minute")
	var identities:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():identities.append(player.get_instance_id())
	var start_clock:float=demo.music._playback_clock()
	while demo.music._playback_clock()-start_clock<24.5:await process_frame
	check(peak>.001 and peak<1.,"native Master capture contains audible unclipped sound across a complete loop")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(current==identities and current.size()==12 and demo.music._effects.size()==4,"portable decoding retains the fixed twelve-long/four-short production pool")
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(output+"/first_choir.png")
	recording.set_recording_active(false);var wave:=recording.get_recording()
	check(wave!=null and wave.get_length()>24. and wave.save_to_wav(output+"/first_choir.wav")==OK,"actual full first-choir recording is saved")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"fresh-checkout verification leaves the personal save byte-identical")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"first_sound_seconds":first_sound,"choir_seconds":choir_seconds,"master_peak":peak,"bank_codec":demo.music.audio_report.get("bank_codec",""),"bank_load_ms":demo.music.audio_report.get("bank_load_ms",0.)}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("FIRST_SOUND_LIVE ",JSON.stringify(result))
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i) in [capture,recording]:AudioServer.remove_bus_effect(0,i)
	capture=null;demo.queue_free();await process_frame;await process_frame;quit(0 if failures.is_empty() else 1)

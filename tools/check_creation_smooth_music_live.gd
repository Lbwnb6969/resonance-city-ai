extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var OUT:="res://验证记录/M34/live"
var demo
var checks:=0
var failures:Array=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(12):await process_frame
func shot(label:String)->void:
	demo.toast.hide();await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"native image "+label)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);demo.life.set_process(false);await settle()
	var city:=State.new();city.initialize_empty()
	for i in range(5):
		var built:Dictionary=city.add_house(Vector2(-22+i*3.,-10));check(built.ok,"public rich house")
		for level in range(1,4):check(city.add_cell(str(built.house_id),0,0,level).ok,"public upper room")
	var chosen:={"ok":true,"id":"rich_music","title":"高窗室内乐","world":city.snapshot(),"view":{"focus":[-16.,1.,-10.],"zoom":28.,"yaw":.25,"pitch":.85,"evening":false,"light_phase":0}}
	await demo.gallery._open_chosen(chosen);demo.life.set_process(false);await settle()
	check(DisplayServer.get_name()!="headless" and demo.music.audio_report.get("bank_source","")=="precompiled","actual GL and production bank")
	var players:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():players.append(player.get_instance_id())
	var ids:Dictionary=demo.music._variation_active.duplicate();var swaps:Array=[];var deferred:=0;var gain_dips:=0;var frames:Array[float]=[]
	var recorder:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,recorder);recorder.set_recording_active(true)
	var start_clock:float=demo.music._playback_clock();var last:=Time.get_ticks_usec()
	while demo.music._playback_clock()-start_clock<52.:
		await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-last)/1000.);last=now
		for key:String in demo.music._variation_active:
			if ids.get(key,"")!=demo.music._variation_active[key]:
				var row:Dictionary=demo.music._players[key].get_meta("last_smooth_swap",{}).duplicate()
				row.track=key;swaps.append(row);ids[key]=demo.music._variation_active[key]
		var lead:=str(demo.music.emergence.score.get("lead_track",""))
		if demo.music._variation_pending.has(lead):
			deferred+=1
			if demo.music._players[lead].volume_db<=-45. and demo.music.target_gain_db(lead,false)>-30.:gain_dips+=1
	recorder.set_recording_active(false);var wave:AudioStreamWAV=recorder.get_recording();var peak:=0.;var clipped:=0
	if wave!=null:
		var pcm:PackedByteArray=wave.data
		for i in range(pcm.size()/2):
			var value:=absi(pcm.decode_s16(i*2));peak=maxf(peak,float(value)/32768.)
			if value>=32767:clipped+=1
		check(wave.save_to_wav(OUT+"/continuous_Master.wav")==OK,"actual continuous Master saved")
	else:check(false,"actual continuous PCM exists")
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==recorder:AudioServer.remove_bus_effect(0,i)
	check(swaps.size()>0 and deferred>30,"natural rich score requests variations and actually adopts at a later safe window")
	check(swaps.all(func(row):return demo.music.Smooth.can_swap(float(row.clock),float(row.db))),"every actual swap occurs at cycle lead-in or with an already silent voice")
	check(gain_dips==0,"pending sounding lead never receives the old forced -60dB hole")
	check(peak>=.18 and peak<=.48 and clipped==0,"mastered warm-reverb settlement stays in healthy range without clipping")
	facts.continuous={"start_clock":start_clock,"seconds":wave.get_length() if wave!=null else 0.,"peak":peak,"clipped_samples":clipped,"swaps":swaps,"deferred_frames":deferred,"forced_gain_dip_frames":gain_dips}
	# Actual edit publication uses the construction path, not the manual rooftop toy.
	if demo.music.has_meta("construction_walk"):demo.music.remove_meta("construction_walk")
	var notes:Array=[]
	for i in range(6):
		var built:Dictionary=demo.state.add_house(Vector2(-24+i*3.,-17));check(built.ok,"actual construction action "+str(i))
		demo._after_edit(built,"room",true,str(built.get("house_id","")))
		var end:=Time.get_ticks_msec()+330
		while Time.get_ticks_msec()<end:
			await process_frame
			var note:Dictionary=demo.music.house_pluck_report()
			if note.get("house_id","")==str(built.get("house_id","")) and note.has("construction_step") and not notes.any(func(row):return row.house_id==note.house_id):notes.append(note.duplicate(true))
	await settle()
	check(notes.size()==6 and notes.map(func(row):return int(row.construction_step))==[0,1,2,3,4,5],"six real quick edits play the six sequential degrees through the original pool")
	check(notes.all(func(row):return row.timbre=="pluck" and demo.music._edit_streams.has(row.stream_key)),"native edit notes retain their real pastoral instrument and cached PCM")
	facts.construction=notes
	var reverbs:=0
	for name:StringName in demo.music.spatial.report().bus_names:
		var bus:=AudioServer.get_bus_index(name)
		for i in range(AudioServer.get_bus_effect_count(bus)):
			if AudioServer.get_bus_effect(bus,i) is AudioEffectReverb:reverbs+=1
	check(reverbs==2,"both original shared long buses carry warm reverb")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size
		for phase in range(3):
			while demo.light_phase!=phase:demo._toggle_light()
			demo.pitch=deg_to_rad(35.);demo._update_camera();await settle();await shot(str(size.x)+"_phase"+str(phase))
	frames.sort();facts.frames={"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1],"count":frames.size()}
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(players==current and current.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"twelve long/four short/six bus identities survive all changes")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var result:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"facts":facts}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"	",true,true))
	print("SMOOTH_MUSIC_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"peak":peak}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

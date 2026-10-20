extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var OUT="res://验证记录/音乐涌现_2026-10-19"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var cpu:Array[float]=[]
var wall:Array[float]=[]
var previous:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _frames(seconds:float)->void:
	var end:=Time.get_ticks_msec()+int(seconds*1000.)
	while Time.get_ticks_msec()<end:
		await process_frame
		var now:=Time.get_ticks_usec();var delta:float=(now-previous)/1000000.;previous=now
		var started:=Time.get_ticks_usec();demo.music._process(delta);cpu.append((Time.get_ticks_usec()-started)/1000.);wall.append(delta*1000.)
func _metrics(values:Array[float])->Dictionary:
	values.sort();var total:=0.
	for value:float in values:total+=value
	return {"count":values.size(),"mean_ms":total/maxi(1,values.size()),"p95_ms":values[int(values.size()*.95)],"max_ms":values[-1]}
func _camera(at:Vector3,zoom:float=23.)->void:
	demo.focus=at;demo.zoom=zoom;demo.pitch=.76;demo.yaw=.35;demo._update_camera();demo.town.clear_preview()
func _capture(name:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"actual GL image saved: "+name)
func _run()->void:
	for argument:String in OS.get_cmdline_user_args():
		if argument.begins_with("--out-dir="):OUT=argument.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var source:=FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json")
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo)
	demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+60000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.music.audio_report.is_empty(),"current production PCM and variations finish loading")
	if demo.music.audio_report.is_empty():demo.queue_free();await process_frame;quit(1);return
	demo._after_edit(demo.state.restore(JSON.parse_string(source.get_string_from_utf8())),"history")
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending() and demo.state.houses.size()==127,"actual four-era flagship publishes through the production edit pipeline")
	demo.music.set_process(false);previous=Time.get_ticks_usec();demo.ui_layer.visible=false
	var players:Dictionary={}
	for key:String in demo.music.STEMS:players[key]=demo.music._players[key].get_instance_id()
	var clock_stream:int=demo.music._players.concert.stream.get_instance_id()
	var short_ids:Array=[]
	for player:AudioStreamPlayer in demo.music._effects:short_ids.append(player.get_instance_id())
	var record:=AudioEffectRecord.new();record.format=AudioStreamWAV.FORMAT_16_BITS;AudioServer.add_bus_effect(0,record);record.set_recording_active(true)
	facts.tours=[]
	for tour:Array in [["pastoral",Vector3(-25,2,-27),"wood"],["renaissance",Vector3(-25,1,25),"renaissance_fugue"],["clockwork",Vector3(25,1,-20),"clockwork_waltz"],["modern_eco",Vector3(23,1,28),"modern_symphony"]]:
		_camera(tour[1]);var before:float=demo.music._playback_clock();await _frames(3.35)
		var score:Dictionary=demo.music.emergence.score.duplicate(true);var player:AudioStreamPlayer=demo.music._players[tour[2]]
		var row:Dictionary={"era":tour[0],"score":score,"gain_db":player.volume_db,"clock":demo.music._playback_clock(),"active_variation":demo.music._variation_active.get(tour[2],""),"source":demo.music.daily_source()}
		row.phase_error=absf(fposmod(player.get_playback_position()-fposmod(float(row.clock),24.)+12.,24.)-12.)
		facts.tours.append(row)
		_check(score.lead_track==tour[2] and score.targets[tour[2]]==-10.5 and row.source.audible and row.source.track==tour[2],"camera selects the actual audible era lead within the next phrase: "+tour[0])
		_check(player.volume_db>-20. and row.clock>before+3. and str(row.active_variation).contains(tour[2]+"/"),"real PCM joins current transport phase at foreground gain: "+tour[0])
		_check(row.phase_error<.075,"the native variation playback phase error stays below seventy-five milliseconds: "+tour[0])
		await _capture("时代主奏_"+str(tour[0]))
	# Observe two different actual phrase textures, without ticking/rewinding
	# the music clock or writing quality to a household.
	var variants:Dictionary={};var first_clock:float=demo.music._playback_clock()
	for i in range(4):
		await _frames(3.1);variants[demo.music._variation_active.get("modern_symphony","")]=true
	_check(variants.size()>=2 and demo.music._playback_clock()>first_clock+12.,"a prosperous real district changes baked texture over uninterrupted phrases")
	facts.observed_variations=variants.keys()
	if "--palette-tour" in OS.get_cmdline_user_args():
		facts.palettes=[]
		for choice:Array in [[1,Vector3(-25,2,-27),false],[2,Vector3(-25,1,25),false],[3,Vector3(23,1,28),true]]:
			_camera(choice[1]);demo.music.set_night(choice[2])
			if choice[2]:
				while demo.light_phase!=2:demo._toggle_light()
			var until:=Time.get_ticks_msec()+100000
			while int(demo.music.emergence.score.get("harmony_mode",-1))!=choice[0] and Time.get_ticks_msec()<until:await _frames(.2)
			await _frames(.3)
			var mode:int=demo.music.harmony_mode()
			var score:Dictionary=demo.music.emergence.score.duplicate(true)
			var beds:=true
			for bed:String in ["foundation","air","terrace"]:beds=beds and demo.music._variation_active.get(bed,"")=="%d/%s"%[choice[0],bed]
			_check(mode==choice[0] and beds,"real loop boundaries select the requested landscape/night harmony and all three actual beds: "+str(choice[0]))
			var source_id:String=str(score.get("source_id",""))
			var before_note:int=demo.music._pluck_serial
			_check(demo.music.play_house(source_id),"visible house accepts a real quantized note in palette "+str(choice[0]))
			await _frames(.23)
			var pluck:Dictionary=demo.music.house_pluck_report()
			var expected:Dictionary=demo.music.PitchPluck.plan(demo.state,source_id,demo.music._playback_clock(),mode)
			_check(demo.music._pluck_serial>before_note and pluck.audible and pluck.midi==expected.midi,"actual pooled pluck uses the active palette pitch: "+str(choice[0]))
			facts.palettes.append({"score":score,"clock":demo.music._playback_clock(),"pluck":pluck})
			await _capture("和声色彩_"+str(choice[0]))
	# A bank stream swap never replaces the clock node or short pool. A
	# restored performance must still resume all original long WAVs in phase.
	demo.set_process(false)
	demo.music.restore_city_transport({"phase":"playing","elapsed":6.5,"venue_id":"h1","chorus_house_ids":["h1"]})
	await _frames(.25)
	var restored:=true
	for key:String in demo.music.HarmonicEmergence.LEADS:restored=restored and demo.music._players[key].stream==demo.music._original_streams[key]
	_check(restored and absf(demo.music._playback_clock()-6.75)<.2,"restored performance seeks the original bank and keeps the saved musical phase")
	demo.music.restore_city_transport({"phase":"idle"});await _frames(.2)
	demo.music.set_muted(true);var before_clock:float=demo.music._playback_clock();await _frames(.25)
	_check(demo.music._playback_clock()>before_clock and demo.music.daily_source().audible==false,"mute keeps transport running while the new score is silent")
	demo.music.set_muted(false)
	var same:bool=demo.music._players.concert.stream.get_instance_id()==clock_stream
	for key:String in players:same=same and players[key]==demo.music._players[key].get_instance_id()
	var after_short:Array=[]
	for player:AudioStreamPlayer in demo.music._effects:after_short.append(player.get_instance_id())
	_check(same and short_ids==after_short and demo.music._players.size()==12 and demo.music._effects.size()==4,"all twelve player nodes, four short voices and the shared clock PCM retain identity")
	record.set_recording_active(false);var wave:=record.get_recording();var peak:=0.
	if wave!=null:
		var pcm:PackedByteArray=wave.data
		for i in range(0,pcm.size()-1,2):peak=maxf(peak,absf(pcm.decode_s16(i)/32768.))
		_check(wave.save_to_wav(OUT+"/四时代主奏与变奏_实际混音.wav")==OK and peak>.001 and peak<.99,"actual live Master tour recording is audible and unclipped")
	else:_check(false,"actual Master recording returns audio")
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==record:AudioServer.remove_bus_effect(0,i)
	facts.recorded_peak=peak;facts.music_main_thread=_metrics(cpu);facts.frames=_metrics(wall)
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"measurement":facts.music_main_thread,"policy":"reference_only"}))
	_check(FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json")==source and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"shipped flagship and personal save bytes remain untouched")
	facts.bank_pcm_bytes=demo.music.audio_report.variation_pcm_bytes
	var report:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("EMERGENCE_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;demo=null;await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)

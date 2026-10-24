extends RefCounted
const Legacy = preload("res://tests/test_city_creation_eras.gd")
const State = preload("res://scripts/world/city_creation_state.gd")
static func run(demo: Node, directory: String) -> Dictionary:
	var tree: SceneTree = demo.get_tree()
	var city: RefCounted = Legacy.fixture()
	for row:Dictionary in city.houses.duplicate(true):assert(city.remove_house(str(row.id)).ok)
	var sources:Array[String]=[]
	for group in range(3):
		var first:=""
		for i in range(5):
			var at:=Vector2(-24+i*3.,-14.) if group==0 else Vector2(8+i*3.,-14.) if group==1 else Vector2(-24+i*3.,8.)
			var added:Dictionary=city.add_house(at);assert(added.ok,str([at,added]))
			if i==0:first=str(added.house_id);sources.append(first)
			if group==2:assert(city.set_house_era(str(added.house_id),"renaissance").ok)
		if group<2:assert(city.set_cluster_style(first,"weave" if group==0 else "sylvan").ok)
	var loaded: Dictionary = demo.state.restore(city.snapshot()); demo._after_edit(loaded,"history")
	while demo.edit_pending() or demo._edit_ui_pending: await tree.process_frame
	demo.life.set_process(false); demo.toast.hide(); demo.toast_time = 0.
	demo.focus = Vector3(-3,.7,-2); demo.zoom = 49.; demo.yaw = 0.; demo.pitch = .8; demo._update_camera()
	demo.select_tool(4); demo.town.clear_preview()
	var identities := _identity(demo); var history: int = demo.state._undo.size()
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var recorder := AudioEffectRecord.new(); AudioServer.add_bus_effect(0,recorder); recorder.set_recording_active(true)
	var start: float = demo.music._playback_clock(); var samples: Array = []; var seen := {}; var captures := {}
	var deadline := Time.get_ticks_msec()+120000
	var cue_clock:=-INF;var cadence_samples:Array=[];var solo_tracks:Dictionary={}
	var frames: Array[float] = []; var last := Time.get_ticks_usec(); var capture_max_ms := 0.
	while demo.music._playback_clock()-start < 104. and Time.get_ticks_msec()<deadline:
		await tree.process_frame
		var now := Time.get_ticks_usec(); frames.append(float(now-last)/1000.); last = now
		var clock: float = demo.music._playback_clock(); var phrase := floori(clock/3.)
		if clock-cue_clock>9.:
			demo.music.record_life_activity("bridge",sources[0]);demo.music.record_life_activity("installed",sources[0]);cue_clock=clock
		var live_score:Dictionary=demo.music.emergence.score
		if fposmod(clock,24.)>22.8:
			cadence_samples.append({"clock":clock,"taper":demo.music.ClusterHarmony.Tide.Cadence.taper(clock),"foundation_actual":demo.music._players.foundation.volume_db,"foundation_target":demo.music.target_gain_db("foundation",false)})

		if fposmod(clock,3.) < 2.35 or seen.has(phrase): continue
		var score: Dictionary = demo.music.emergence.score; var plan: Dictionary = score.get("phrase_tide",{})
		if plan.is_empty(): continue
		seen[phrase] = true
		if phrase%8 in [4,5] and str(plan.lead_track) in demo.music.ClusterHarmony.Tide.Cadence.SOLO_ROTATION:solo_tracks[str(plan.lead_track)]=true
		var values := {}; var expected := {}; var maximum_error := 0.
		for track: String in ["foundation","wood","renaissance_fugue","terrace"]:
			var player: AudioStreamPlayer = demo.music._players[track]
			var weight: float = demo.music._long_acoustic_weight(track)
			values[track] = player.volume_db
			if weight > 0. and float(score.targets.get(track,-60.)) > -50.:
				expected[track] = demo.music.target_gain_db(track,false)+linear_to_db(weight)+demo.music.attention.backing_duck_db+demo.music.ATTENTION_HEADROOM_DB+demo.music.Experience.lift(demo.music)
				maximum_error = maxf(maximum_error,absf(player.volume_db-expected[track]))
		samples.append({"clock":clock,"plan":plan.duplicate(true),"values":values,"expected":expected,"max_error_db":maximum_error,
			"breath":demo.music.ClusterHarmony.Tide.breath(clock),"source":demo.music.daily_source()})
		if phrase%8 in [0,4,7] and not captures.has(phrase%8):
			var capture_started := Time.get_ticks_usec()
			captures[phrase%8] = true
			var phase: int = {0:0,4:1,7:2}[phrase%8]
			while demo.light_phase != phase: demo._toggle_light()
			for size: Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
				tree.root.size = size; await tree.process_frame; await tree.process_frame; await RenderingServer.frame_post_draw
				tree.root.get_texture().get_image().save_png(directory+"/tide_"+str(phase)+"_"+str(size.x)+".png")
			capture_max_ms = maxf(capture_max_ms,float(Time.get_ticks_usec()-capture_started)/1000.)
			last = Time.get_ticks_usec()
	recorder.set_recording_active(false)
	var wave: AudioStreamWAV = recorder.get_recording(); var peak := 0.; var clipped := 0
	if wave != null:
		wave.save_to_wav(directory+"/104秒真实室内乐与呼吸.wav")
		var pcm := wave.data
		for i in range(pcm.size()/2):
			var value := absi(pcm.decode_s16(i*2)); peak = maxf(peak,float(value)/32768.)
			if value >= 32767: clipped += 1
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==recorder: AudioServer.remove_bus_effect(0,i)
	var stages := {}; var light := 0; var full := 0; var errors := 0; var attribution := 0
	for sample: Dictionary in samples:
		stages[sample.plan.stage] = true
		if sample.breath > .99: light += 1
		if sample.breath == 0.: full += 1
		# Compare settled plateaus. The production 2.8/s fade deliberately lags
		# an instantaneous target during the 1.5s breathing ramps and initial edit.
		if sample.clock>=start+3. and (sample.breath==0. or sample.breath>.99) and is_zero_approx(demo.music.ClusterHarmony.Tide.Cadence.taper(sample.clock)) and sample.max_error_db > .8: errors += 1
		if str(sample.source.source_id) == str(sample.plan.source_id) and sample.source.audible: attribution += 1
	var checks := {
		"four_chamber_voices":solo_tracks.size()==4,
		"actual_cadence_windows":cadence_samples.size()>100 and cadence_samples.any(func(row):return row.taper< -2.4 and row.foundation_actual> -55.),
		"multiple_real_groups":samples.any(func(row: Dictionary) -> bool: return row.plan.groups >= 2 and row.plan.primary != row.plan.secondary),
		"four_real_stages":stages.size()==4,"full_and_light_cycles":light>=6 and full>=12,
		"actual_player_gains_follow_targets":errors==0,"audible_sources_follow_lead":attribution==samples.size(),
		"voice_bus_nature_identity":_identity(demo)==identities and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2,
		"transport_keeps_running":demo.music._playback_clock()-start>=104.,"history_untouched":demo.state._undo.size()==history,
		"personal_untouched":(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,
		"audible_unclipped_master":wave!=null and peak>.0001 and clipped==0}
	frames.sort()
	var report := {"ok":checks.values().all(func(value: bool) -> bool: return value),"checks":checks,"samples":samples,
		"cadence_samples":cadence_samples,"solo_tracks":solo_tracks,"start_clock":start,"wave_seconds":wave.get_length() if wave != null else 0.,"peak":peak,"clipped":clipped,
		"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1],"capture_max_ms":capture_max_ms}
	FileAccess.open(directory+"/phrase_tide.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("PHRASE_TIDE_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"peak":peak,"seconds":report.wave_seconds,"p95_ms":report.p95_ms}))
	return report
static func _identity(demo: Node) -> Array:
	var ids: Array = []
	for node: Node in demo.music.get_children()+demo.ambience.get_children(): ids.append(node.get_instance_id())
	return ids+demo.music.spatial._names

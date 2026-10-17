extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/四库路线_2026-10-17/Phase4"
var demo
var checks: Array=[];var failures: Array[String]=[];var facts: Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await process_frame;await process_frame
func _camera(at: Vector3,zoom_value: float)->void:
	demo.focus=at;demo.zoom=zoom_value;demo.yaw=.62;demo.pitch=.8;demo._update_camera();demo.town.clear_preview()
func _identity()->Array:
	var result: Array=[]
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer=demo.music._players[key]
		result.append([player.get_instance_id(),player.stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects:result.append(player.get_instance_id())
	return result
func _silent()->bool:
	for player: AudioStreamPlayer in demo.music._players.values():
		if player.volume_linear!=0.0:return false
	return true
func _filter(player: AudioStreamPlayer)->Dictionary:
	var index:=AudioServer.get_bus_index(player.bus)
	var filter: AudioEffectLowPassFilter=AudioServer.get_bus_effect(index,1)
	return {"enabled":AudioServer.is_bus_effect_enabled(index,1),"cutoff":filter.cutoff_hz,"bus":str(player.bus)}
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	var city: RefCounted=demo.state
	var added: Dictionary=city.add_house(Vector2(25,25));var tower_id:=str(added.get("house_id",""))
	_check(added.ok and city.add_cell(tower_id,0,0,1,"room").ok and city.add_cell(tower_id,0,0,2,"room").ok,"real remote house grows into a three-storey bell tower")
	var points: Array[Vector2]=[Vector2(-8,-6)]
	var first: Dictionary=city.add_district(points,4,"warm")
	points=[Vector2(25,25)]
	var second: Dictionary=city.add_district(points,4,"deep")
	_check(first.ok and second.ok and city.link_districts(first.district_id,second.district_id).ok,"real city stores explicit cross-river musical partners")
	demo._after_edit({"ok":true,"message":"fixture"},"history");await _wait()
	var deadline:=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	var identities:=_identity();var clock: float=demo.music._playback_clock()
	_camera(Vector3(-8,.7,-6),14)
	await create_timer(.35).timeout
	var field: Dictionary=demo.music.acoustic_report()
	_check(field.mode=="detail" and field.zones.h1.zone=="focus" and field.zones[tower_id].zone=="linked" and field.zones[tower_id].weight==.5,"production listener classifies visible house and distant half-weight linked district")
	var pairs: Array=demo.music.manual_reply_pairs()
	var pair: Dictionary=pairs[0] if not pairs.is_empty() else {}
	_check(not pair.is_empty(),"saved manual link derives an actual question-and-answer pair")
	if not pair.is_empty():
		demo.music.reply.clear()
		deadline=Time.get_ticks_msec()+2200
		while demo.music.reply._foreground_busy() and Time.get_ticks_msec()<deadline:await process_frame
		var phrase:=floori(demo.music._playback_clock()/3.0)
		var event: Dictionary=demo.music.reply._direction(pair,phrase)
		var played: bool=demo.music.reply._play(event,phrase,true)
		await create_timer(.08).timeout
		var reply_player: AudioStreamPlayer=demo.music.reply._player
		_check(played and reply_player!=null and reply_player.playing and is_equal_approx(reply_player.volume_db,demo.music.SHORT_GAIN_DB+linear_to_db(.5)),"linked answer uses a real original short PCM at half gain in the fixed pool")
		if reply_player!=null:facts.linked={"report":demo.music.reply.report(),"filter":_filter(reply_player),"gain_db":reply_player.volume_db}
		demo.music.reply.clear()
	_camera(Vector3(-8,.7,-6),40)
	await create_timer(.35).timeout
	_check(demo.music.acoustic_report().mode=="city" and demo.music.get_child_count()==demo.music.STEMS.size()+4,"far zoom aggregates visible districts using the same fixed music players")
	demo.ui_layer.visible=false
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/01_listener_city.png")
	_check(city.unlink_districts(first.district_id,second.district_id).ok,"unlink remote district through real State transaction")
	demo._after_edit({"ok":true,"message":"fixture"},"history");await _wait()
	_camera(Vector3(-35,.7,35),14)
	await create_timer(.35).timeout
	demo.state.refresh_growth()
	var before: Dictionary=city.snapshot()
	_check(demo.music.acoustic_report().focus_ids.is_empty() and demo.music.acoustic_report().linked_ids.is_empty() and _silent(),"empty view has exact zero gain on every ordinary long player")
	var frames: Array[float]=[];var last:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.0);last=now
	frames.sort();facts.performance={"p95_ms":frames[113],"max_ms":frames[-1],"frames":120}
	_check(_identity()==identities and demo.music._playback_clock()>clock and city.snapshot()==before,"camera grouping preserves PCM identities advancing clock and complete authored city")
	deadline=Time.get_ticks_msec()+26000
	var bell: Dictionary={}
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var current: Dictionary=demo.music.tower_music_report()
		if current.audible and current.remote:bell=current;break
	_check(not bell.is_empty() and bell.gain_weight==.25 and posmod(int(bell.get("phrase",-1)),8)==0,"natural twenty-four-second boundary emits one bounded remote tower event")
	if not bell.is_empty():
		var filter:=_filter(demo.music._tower_player)
		_check(filter.enabled and filter.cutoff==1800 and is_equal_approx(demo.music._tower_player.volume_db,demo.music.SHORT_GAIN_DB+linear_to_db(.25)),"actual remote short bus enables eighteen-hundred-hertz low-pass and quarter gain")
		facts.remote_bell={"report":bell,"filter":filter}
	_check(_silent(),"remote bell does not wake silent ordinary long tracks")
	demo.life.set_process(true)
	var invited: Dictionary=demo.life.invite_concert("h4")
	deadline=Time.get_ticks_msec()+24000
	while demo.life.concert_status().phase!="playing" and Time.get_ticks_msec()<deadline:await process_frame
	deadline=Time.get_ticks_msec()+2500
	while not demo.music.active_source().audible and Time.get_ticks_msec()<deadline:await process_frame
	var source: Dictionary=demo.music.active_source()
	var concert_filter:=_filter(demo.music._players.concert)
	_check(invited.ok and demo.life.concert_status().phase=="playing" and source.audible and source.role=="remote_concert" and demo.music._long_acoustic_weight("concert")==.25,"real residents arrive and start a remote performance through the quarter-weight event channel")
	_check(concert_filter.enabled and concert_filter.cutoff==1800,"actual remote concert bus uses soft low-pass filtering")
	var rest_silent:=true
	for key: String in demo.music.STEMS:
		if key!="concert":rest_silent=rest_silent and demo.music._players[key].volume_linear==0.0
	_check(rest_silent,"remote concert leaves all unrelated off-screen ordinary tracks at exact zero")
	facts.remote_concert={"source":source,"filter":concert_filter,"status":demo.life.concert_status(),"acoustic":demo.music.acoustic_report()}
	demo.life.cancel_concert();demo.life.set_process(false)
	_camera(Vector3(-8,.7,-6),14)
	await create_timer(.15).timeout
	demo.music.play_edit("room")
	var reset:=true
	for player: AudioStreamPlayer in demo.music._effects:
		if player.playing and player.stream==demo.music._edit_streams.room:reset=reset and not _filter(player).enabled and player.volume_db==demo.music.SHORT_GAIN_DB
	_check(reset,"ordinary construction resets a recycled remote voice's filter and gain")
	_check(_identity()==identities and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.music.spatial.report().bus_count==6 and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"four-zone playback keeps shared long four short six owned buses and personal data intact")
	var report: Dictionary={"ok":failures.is_empty(),"checks":checks,"count":checks.size(),"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("PHASE_FOUR ",JSON.stringify({"ok":report.ok,"count":report.count,"failures":failures,"performance":facts.performance}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)

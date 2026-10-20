extends SceneTree
## Real audio-clock, viewport and shared-PCM evidence for district editing.
const Scene = preload("res://scenes/city_creation.tscn")
const Music = preload("res://scripts/audio/city_creation_music.gd")
const OUTPUT := "res://验证记录/街坊划区_2026-10-14"
var failures: Array[String] = []
var observations: Array[Dictionary] = []

func _initialize() -> void:
	_run.call_deferred()

func _check(ok: bool, message: String) -> void:
	if not ok:
		failures.append(message)
		push_error(message)

func _run() -> void:
	root.size = Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	var demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	await process_frame
	var house_ids := {}
	var road_ids := {}
	var meadow_ids := {}
	var residents := {}
	for id: String in demo.town.house_roots: house_ids[id] = demo.town.house_roots[id].get_instance_id()
	for id: String in demo.town.road_roots: road_ids[id] = demo.town.road_roots[id].get_instance_id()
	for block: Vector2i in demo.town.meadow.blocks: meadow_ids[block] = demo.town.meadow.blocks[block].get_instance_id()
	for person: Dictionary in demo.life.residents: residents[person.home_id] = person.node.get_instance_id()
	var points: Array[Vector2] = [Vector2(-8,-6)]
	_check(demo.state.add_district(points,5.6,"deep").ok,"deep district authored")
	demo.state.set_district_name("d1","溪风低吟")
	points = [Vector2(-2.4,-5)]
	_check(demo.state.add_district(points,5.6,"weave").ok,"weave district authored")
	demo.state.set_district_name("d2","面包与弦")
	points = [Vector2(-8,0),Vector2(-7,6)]
	_check(demo.state.add_district(points,5.6,"warm").ok,"warm district authored")
	demo.state.set_district_name("d3","橄榄暖庭")
	demo._after_edit({"ok":true,"message":"街坊已连成自己的声音"},"terrace")
	demo.select_tool(7)
	demo.selected_district = "d3"
	demo._refresh_district()
	await process_frame
	for id: String in house_ids: _check(demo.town.house_roots[id].get_instance_id()==house_ids[id],"district retains house mesh "+id)
	for id: String in road_ids: _check(demo.town.road_roots[id].get_instance_id()==road_ids[id],"district retains road mesh "+id)
	for block: Vector2i in meadow_ids: _check(demo.town.meadow.blocks[block].get_instance_id()==meadow_ids[block],"district retains grass block %s" % block)
	for person: Dictionary in demo.life.residents: _check(person.node.get_instance_id()==residents[person.home_id],"district retains actual resident "+person.home_id)
	var until := Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"shared PCM bank prepared")
	if demo.music.audio_report.is_empty():
		demo.queue_free()
		await process_frame
		quit(1)
		return
	demo.frame_samples.clear()
	for frame in range(300): await process_frame
	var performance: Dictionary = demo.diagnostics()
	print("PERFORMANCE_REFERENCE ",JSON.stringify({"measurement":performance.frame_p95_ms,"policy":"reference_only"}))
	var heard := {}
	until = Time.get_ticks_msec()+22000
	while heard.size()<3 and Time.get_ticks_msec()<until:
		var source: Dictionary = demo.music.daily_source()
		if bool(source.audible) and not heard.has(source.style):
			var actual: Dictionary = demo.state.district_for_house(str(source.source_id))
			_check(str(actual.get("style","warm"))==str(source.style),"audible preset belongs to the real current house")
			_check(demo.music._players[Music.STYLE_TRACKS[source.style]].volume_db>-30,"actual preset player is audible")
			heard[source.style]=true
			observations.append(source)
			demo._refresh_district()
			demo.town.clear_preview()
			await process_frame
			root.get_texture().get_image().save_png(OUTPUT+"/"+str(source.style)+"_playing.png")
		await process_frame
	_check(heard.size()==3,"real playback hears all three district presets")
	# Edit between boundaries. The city changes immediately; the new phrase
	# waits for the existing playback clock without restarting any track.
	until = Time.get_ticks_msec()+4000
	while fposmod(demo.music._players.concert.get_playback_position(),3.0)>0.8 and Time.get_ticks_msec()<until: await process_frame
	var old: Dictionary = demo.music.district_music_report()
	var next_style := "deep" if str(old.style)!="deep" else "weave"
	var before_positions: Dictionary = demo.music.music_report().positions
	points = [Vector2(-8,-6),Vector2(-2.4,-5),Vector2(-8,0),Vector2(-2.4,1),Vector2(-7,6)]
	_check(demo.state.add_district(points,5.6,next_style).ok,"live city edit commits before the musical boundary")
	demo._after_edit({"ok":true,"message":"下一乐句换成自己的风格"},"terrace")
	var queued: Dictionary = demo.music.district_music_report()
	_check(str(queued.style)==str(old.style) and bool(queued.pending),"new preset queues behind the current real phrase")
	until=Time.get_ticks_msec()+4500
	while str(demo.music.district_music_report().style)!=next_style and Time.get_ticks_msec()<until: await process_frame
	_check(str(demo.music.district_music_report().style)==next_style,"new preset enters on the next phrase")
	var after_positions: Dictionary = demo.music.music_report().positions
	for key: String in before_positions:
		_check(fposmod(float(after_positions[key])-float(before_positions[key]),24.0)>1.0,"edit preserves playback phase "+key)
	var source_before_focus: String = str(demo.music.daily_source().source_id)
	demo.music.set_listener_focus(Vector2(15,3))
	_check(str(demo.music.daily_source().source_id)==source_before_focus,"camera focus does not interrupt a phrase")
	until=Time.get_ticks_msec()+4000
	while str(demo.music.daily_source().source_id)!= "h6" and Time.get_ticks_msec()<until: await process_frame
	_check(str(demo.music.daily_source().source_id)=="h6","focus selects an actual nearby right-bank house independently of roads")
	demo.music.set_muted(true)
	_check(not demo.music.daily_source().audible and not demo.music.district_music_report().audible,"mute clears audible district attribution")
	for player: AudioStreamPlayer in demo.music._players.values(): _check(player.volume_linear==0.0,"all shared presets mute immediately")
	demo.music.set_muted(false)
	demo.music.set_listener_focus(Vector2(-3,0))
	_check(demo.life.invite_concert("h4").ok,"districts retain actual public-concert reachability")
	for step in range(1800):
		if str(demo.life.concert_status().phase)=="playing": break
		demo.life._process(0.1)
	demo._refresh_concert()
	_check(str(demo.life.concert_status().phase)=="playing","actual residents reach the stage before concert audio begins")
	await create_timer(1.6).timeout
	_check(not demo.music.daily_source().audible,"district melody yields source attribution during concert")
	for key: String in Music.STYLE_TRACKS.values():
		_check(demo.music.target_gain_db(key,true)<=demo.music.target_gain_db(key,false),"all district presets yield to concert "+key)
	demo.life.cancel_concert()
	demo._refresh_concert()
	_check(demo.music._players.size()==9,"district count never allocates individual audio players")
	var min_position := 24.0
	var max_position := 0.0
	for player: AudioStreamPlayer in demo.music._players.values():
		min_position=minf(min_position,player.get_playback_position())
		max_position=maxf(max_position,player.get_playback_position())
	_check(max_position-min_position<0.06,"all nine stems retain a synchronized clock")
	var audio := _export_presets(demo.music)
	var file := FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify({"ok":failures.is_empty(),"failures":failures,"observations":observations,
		"performance":performance,"before_change":old,"queued_change":queued,"audio":audio},"\t",true,true))
	file.close()
	print("DISTRICT_MUSIC ",JSON.stringify({"ok":failures.is_empty(),"failures":failures,"observations":observations,"fps":performance.fps,"p95_ms":performance.frame_p95_ms,"edit_ms":performance.edit_rebuild_ms,"audio":audio}))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)

func _export_presets(music: Node) -> Dictionary:
	var bank: Dictionary = {}
	for key: String in Music.STEMS:
		bank[key]=music._players[key].stream.data
	var original: String=music._daily_style
	var report := {}
	for style: String in Music.STYLE_TRACKS:
		music._daily_style=style
		var samples:=PackedFloat32Array()
		samples.resize(Music.FRAMES)
		for key: String in Music.STEMS:
			var bytes: PackedByteArray=bank[key]
			var gain: float=db_to_linear(music.target_gain_db(key,false))
			for index in range(Music.FRAMES): samples[index]+=float(bytes.decode_s16(index*2))/32768.0*gain
		var peak:=0.0
		for sample in samples: peak=maxf(peak,absf(sample))
		var seam:=absf(samples[0]-samples[-1])
		_check(peak<0.5 and seam<0.005,"preset mix has headroom and continuous seam "+style)
		_check(music._pcm_stream(samples,false).save_to_wav(OUTPUT+"/"+style+".wav")==OK,"actual PCM preset export "+style)
		report[style]={"peak":peak,"seam":seam,"pcm_hash":hash(samples)}
	music._daily_style=original
	_check(report.warm.pcm_hash!=report.deep.pcm_hash and report.deep.pcm_hash!=report.weave.pcm_hash,"three presets use audibly different production PCM")
	_check(float(music.audio_report.mix_peaks.absolute_with_four_edit_voices)<1.0,"all transition tails and edit voices stay below clipping")
	return report

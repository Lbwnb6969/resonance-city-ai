extends SceneTree
## Real road gesture, real walkers and actual PCM downbeats. Never opens a personal save.
const Scene=preload("res://scenes/city_creation.tscn")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const OUTPUT="res://验证记录/过桥华彩_2026-10-15/live"
var demo: Node3D
var checks:=0
var failures: Array[String]=[]
var crossings: Array[Dictionary]=[]
var heard: Array[Dictionary]=[]
var wall_frames: Array[float]=[]
var last_usec:=0
var sampling:=false

func _initialize() -> void: _run.call_deferred()
func _process(_delta: float) -> bool:
	var now:=Time.get_ticks_usec()
	if sampling and last_usec>0: wall_frames.append((now-last_usec)/1000.0)
	last_usec=now
	return false
func _check(ok: bool,label: String) -> void:
	checks+=1
	if not ok:
		failures.append(label)
		push_error(label)
func _travel(actor: String,kind: String,source: String,at: Vector2) -> void:
	crossings.append({"actor":actor,"kind":kind,"source_id":source,"position":at})
	demo.music.queue_travel(actor,kind,source,at)
func _motion(at: Vector3) -> void:
	var event:=InputEventMouseMotion.new()
	event.position=demo.camera.unproject_position(at)
	event.global_position=event.position
	root.push_input(event)
	await process_frame
func _button(at: Vector3,pressed: bool) -> void:
	var event:=InputEventMouseButton.new()
	event.position=demo.camera.unproject_position(at)
	event.global_position=event.position
	event.button_index=MOUSE_BUTTON_LEFT
	event.pressed=pressed
	root.push_input(event)
	await process_frame
func _wait_edit() -> void:
	var until:=Time.get_ticks_msec()+15000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(),"street publishes before walkers resume")
func _capture(label: String) -> void:
	await process_frame
	await process_frame
	if DisplayServer.get_name()!="headless": root.get_texture().get_image().save_png(OUTPUT+"/"+label+".png")
func _identity() -> Array:
	var result:=[]
	for key: String in Music.STEMS: result.append([demo.music._players[key].get_instance_id(),demo.music._players[key].stream.get_instance_id()])
	for player: AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	result.append(demo.town.travel_visual.ring.get_instance_id())
	return result
func _sample_frames() -> Dictionary:
	wall_frames.clear()
	sampling=true
	for frame in range(180): await process_frame
	sampling=false
	wall_frames.sort()
	return {"wall_p95_ms":wall_frames[int(wall_frames.size()*0.95)],"wall_max_ms":wall_frames[-1],"draw_calls":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME)}
func _await_cue(kind: String) -> void:
	var before: int=demo.music._travel_cues
	var until:=Time.get_ticks_msec()+4200
	while demo.music._travel_cues==before and Time.get_ticks_msec()<until: await process_frame
	var report: Dictionary=demo.music.travel_music_report()
	_check(bool(report.audible) and str(report.kind)==kind,"actual "+kind+" crossing sounds on the shared downbeat")
	if not bool(report.audible): return
	_check(fposmod(demo.music._playback_clock(),3.0)<0.18,"travel starts at real 3-second audio boundary")
	var identity:=_identity()
	heard.append(report.duplicate(true))
	demo.focus=Vector3(report.position.x,0.7,report.position.y)
	demo.zoom=11
	demo.pitch=0.60
	demo.yaw=1.15 if kind=="arch" else 0.0
	demo._update_camera()
	until=Time.get_ticks_msec()+600
	while float(demo.music.travel_music_report().elapsed)<0.33 and Time.get_ticks_msec()<until: await process_frame
	await _capture(kind+"_audible")
	if kind=="arch":
		_check(demo.town.travel_visual.ring.visible,"arch ring belongs to the actually playing transient")
	else:
		_check(float(demo.town.water_material.get_shader_parameter("travel_ripple_strength"))>0.5,"real bridge cue drives shared water ripple")
	_check(_identity()==identity,"playing the transient allocates no player, PCM loop or ring")
	await create_timer(0.85).timeout
	_check(not bool(demo.music.travel_music_report().audible),"travel sound ends without a backlog")
	await process_frame
	_check(not demo.town.travel_visual.ring.visible and float(demo.town.water_material.get_shader_parameter("travel_ripple_strength"))==0.0,"finished transient clears both visual paths")
	demo.focus=Vector3(4,0.8,3)
	demo.zoom=26
	demo.pitch=0.77
	demo.yaw=0.0
	demo._update_camera()

func _run() -> void:
	root.size=Vector2i(1440,900)
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUTPUT))
	demo=Scene.instantiate()
	demo.persistence=false
	root.add_child(demo)
	demo.life.set_process(false)
	demo.life.travel_callback=_travel
	demo.ui_layer.visible=false
	demo.focus=Vector3(4,0.8,3)
	demo.zoom=26
	demo.pitch=0.77
	demo._update_camera()
	await process_frame
	demo.select_tool(2)
	await _button(Vector3(-11,0,3),true)
	for x in [-8.0,-3.0,0.0,3.0,6.0,9.0,13.0]: await _motion(Vector3(x,0,3))
	await _button(Vector3(13,0,3),false)
	await _wait_edit()
	_check(demo.state.roads.size()==7,"real mouse stroke creates one bridge-and-arch street")
	_check(demo.state.house_passages("h6").size()>0,"street opens a genuine arch in the right-bank home")
	_check(crossings.is_empty(),"creating and publishing the street emits no fake travel event")
	# A second bakery beyond the arch makes actual daily trips use its whole
	# passage; stopping at the h6 front door alone must not count as crossing.
	_check(demo.state.add_house(Vector2(13,0)).ok,"east bakery has real ground occupancy")
	_check(demo.state.set_house_role("h7","bakery").ok,"east home becomes a real bakery")
	_check(demo.state.set_house_role("h2","residential").ok,"east bakery becomes the daily procurement destination")
	var link: Array[Vector2]=[Vector2(13,3),Vector2(13,1.55)]
	_check(demo.state.add_road(link).ok,"bakery doorway connects beyond the arch")
	demo._after_edit({"ok":true,"message":"桥与穿街小屋"},"history")
	await _wait_edit()
	var until:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty(),"production PCM bank is ready")
	if demo.music.audio_report.is_empty(): quit(1); return
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	var identities:=_identity()
	var before_perf: Dictionary=await _sample_frames()
	await _capture("street_before_travel")
	# This is the real h6 daily journey and route. Only its simulation clock
	# is advanced faster; no actor is placed on a sensor or given a fake route.
	var captured: Dictionary={}
	for step in range(2400):
		var old:=crossings.size()
		demo.life._process(0.1)
		if crossings.size()>old:
			var kind: String=crossings[-1].kind
			if not captured.has(kind):
				await _await_cue(kind)
				captured[kind]=true
		if captured.size()==2: break
	_check(captured.has("bridge") and captured.has("arch"),"autonomous residents actually traverse bridge and arch")
	_check(_identity()==identities,"nine PCM loops and four short voices retain all identities")
	_check(demo.music._players.size()==9 and demo.music._effects.size()==4,"audio budget stays nine loops plus four transients")
	_check(float(demo.music.audio_report.mix_peaks.absolute_with_four_edit_voices)<1.0,"conservative combined PCM peak stays below clipping")
	var after_perf: Dictionary=await _sample_frames()
	# Boundary revalidation uses a real source but deliberately queues at a
	# safe clock phase, allowing editing to remove it before the downbeat.
	until=Time.get_ticks_msec()+4000
	while fposmod(demo.music._playback_clock(),3.0)>0.5 and Time.get_ticks_msec()<until: await process_frame
	demo.music._travel_cooldowns.clear()
	var bridge: Dictionary={}
	for row: Dictionary in crossings:
		if str(row.kind)=="bridge": bridge=row; break
	if not bridge.is_empty():
		demo.music.queue_travel(bridge.actor,bridge.kind,bridge.source_id,bridge.position)
		_check(not demo.music._travel_pending.is_empty(),"real bridge event can wait for its next phrase")
		demo.music.set_muted(true)
		_check(demo.music._travel_pending.is_empty() and not demo.music.travel_music_report().audible,"mute discards pending event immediately")
		demo.music.set_muted(false)
		demo.music.queue_travel(bridge.actor,bridge.kind,bridge.source_id,bridge.position)
		var count: int=demo.music._travel_cues
		_check(demo.state.remove_road(str(bridge.source_id).split("/")[0]).ok,"remove the exact real bridge road")
		demo.life._sync()
		_check(not demo.life.travel_source_valid(bridge.kind,bridge.source_id,bridge.position),"removed bridge immediately invalidates pending source")
		await create_timer(3.2).timeout
		_check(demo.music._travel_cues==count and demo.music._travel_pending.is_empty(),"removing the real bridge rejects queued sound at the boundary")
		demo.state.undo()
		demo.life._sync()
		demo.music.queue_travel(bridge.actor,bridge.kind,bridge.source_id,bridge.position)
		demo.music.set_listener_focus(Vector2(-18,-15))
		demo.music._travel_at_phrase(demo.music._travel_phrase+1)
		_check(demo.music._travel_cues==count,"far-away crossings leave silence")
		demo.music.set_listener_focus(bridge.position)
		demo.music.queue_travel(bridge.actor,bridge.kind,bridge.source_id,bridge.position)
		demo.music.set_concert_active(true)
		demo.music._travel_at_phrase(demo.music._travel_phrase+1)
		_check(demo.music._travel_cues==count,"travel yields to the public performance")
		demo.music.set_concert_active(false)
		# Use actual long-lived streams to occupy every transient; no cue may
		# steal them, and the next phrase must not replay a deferred backlog.
		for player: AudioStreamPlayer in demo.music._effects:
			player.stream=demo.music._players.foundation.stream
			player.play()
		demo.music.queue_travel(bridge.actor,bridge.kind,bridge.source_id,bridge.position)
		demo.music._travel_at_phrase(demo.music._travel_phrase+1)
		_check(demo.music._travel_cues==count and demo.music._travel_pending.is_empty(),"busy four-voice pool drops travel instead of stealing or accumulating")
		for player: AudioStreamPlayer in demo.music._effects: player.stop()
	var audio:=_export_audio()
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"crossings":crossings,"heard":heard,"before":before_perf,"after":after_perf,"audio":audio,"bank":demo.music.audio_report}
	var file:=FileAccess.open(OUTPUT+"/report.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(result,"\t",true,true))
	print("TRAVEL_LIVE ",JSON.stringify(result))
	demo.queue_free()
	await process_frame
	await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)

func _export_audio() -> Dictionary:
	var samples:=PackedFloat32Array()
	samples.resize(Music.RATE*8)
	for key: String in Music.STEMS: _add_pcm(samples,demo.music._players[key].stream,0.0,demo.music.target_gain_db(key,false))
	_add_pcm(samples,demo.music._edit_streams.travel_bridge_0,0.0,-10.0)
	_add_pcm(samples,demo.music._edit_streams.travel_arch_1,3.0,-10.0)
	for index in range(samples.size()-int(Music.RATE*0.15),samples.size()): samples[index]*=float(samples.size()-1-index)/(Music.RATE*0.15)
	var peak:=0.0
	for sample in samples: peak=maxf(peak,absf(sample))
	var error: int=demo.music._pcm_stream(samples,false).save_to_wav(OUTPUT+"/桥与拱_源码PCM试听.wav")
	_check(error==OK and peak<1.0,"production PCM preview exports without clipping")
	return {"peak":peak,"seconds":8,"provenance":"production PCM mixed at real gains; not sound-device capture","bridge_at":0.0,"arch_at":3.0}
func _add_pcm(samples: PackedFloat32Array,stream: AudioStreamWAV,start: float,gain_db: float) -> void:
	var data:=stream.data
	var offset:=roundi(start*Music.RATE)
	for index in range(mini(data.size()/2,samples.size()-offset)): samples[offset+index]+=data.decode_s16(index*2)/32767.0*db_to_linear(gain_db)

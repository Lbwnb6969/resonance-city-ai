extends Node
## Two fixed environmental voices: recovered water and a continuous forest mixer.
## Queries use published camera/vegetation state and never prepare ground.
const PCM = preload("res://scripts/audio/city_creation_ambience_pcm.gd")
const WATER_PATH := "res://资源/自然参考/环境声/溪流.wav"
const CAPS := {"water":0.012,"wind":0.006,"birds":0.006,"insects":0.006}
const QUERY_INTERVAL := 0.25
var state: RefCounted
var players: Dictionary = {}
var weights := {"water":0.0,"wind":0.0,"birds":0.0,"insects":0.0}
var targets := {"water":0.0,"wind":0.0,"birds":0.0,"insects":0.0}
var gains := {"water":0.0,"wind":0.0,"birds":0.0,"insects":0.0}
var peaks: Dictionary = {}
var _base_gains := {"water":0.0,"wind":0.0,"birds":0.0,"insects":0.0}
var _focus := Vector2.ZERO
var _zoom := 25.0
var _light_phase := 0
var _frustum_source: Callable
var _view_samples_source: Callable
var _forest_playback: AudioStreamGeneratorPlayback
var _forest_frame := 0
var _forest_frames_pushed := 0
var _forest_skips := 0
var _muted := false
var _foreground := false
var _duck := 1.0
var _revision := -1
var _timer := QUERY_INTERVAL
var _trees: Array[Dictionary] = []
var _visibility_source: Callable
var _visibility_hash: Variant = null
var _worker: Thread
var _ready_pcm := false
var _pcm: Dictionary = {}
var _queries := 0
var _cache_rebuilds := 0
var _frame := 0
var _frame_max_usec := 0
var _water_samples := 0
var _visible_trees := 0

func setup(city: RefCounted) -> void:
	state=city
	_revision=-1
	if not players.is_empty(): return
	for kind: String in ["water","forest"]:
		var player := AudioStreamPlayer.new()
		player.name="Ambience_"+kind
		player.volume_linear=0.0
		add_child(player)
		players[kind]=player
	if FileAccess.file_exists(WATER_PATH) or ResourceLoader.exists(WATER_PATH):
		# New local WAVs can be played before an editor import; exported games
		# use the normal remapped resource path.
		var water: AudioStreamWAV=AudioStreamWAV.load_from_file(WATER_PATH) if FileAccess.file_exists(WATER_PATH) else load(WATER_PATH)
		if water!=null:
			water=water.duplicate()
			water.loop_mode=AudioStreamWAV.LOOP_FORWARD
			water.loop_begin=0
			water.loop_end=int(water.get_length()*water.mix_rate)
			players.water.stream=water
			peaks.water=_peak(water)
	var forest := AudioStreamGenerator.new()
	forest.mix_rate=PCM.RATE
	forest.buffer_length=0.20
	players.forest.stream=forest
	_worker=Thread.new()
	_worker.start(PCM.render.bind(players.water.stream==null))

func set_visibility_source(source: Callable) -> void:
	_visibility_source=source
	_revision=-1

func set_frustum_source(source: Callable) -> void:
	_frustum_source=source
	_timer=QUERY_INTERVAL

func set_view_samples_source(source: Callable) -> void:
	_view_samples_source=source
	_timer=QUERY_INTERVAL

func set_view(focus: Vector2, zoom: float, light_phase: int) -> void:
	if light_phase!=_light_phase: _timer=QUERY_INTERVAL
	_focus=focus
	_zoom=zoom
	_light_phase=light_phase

func set_muted(value: bool) -> void:
	_muted=value
	if value:
		for kind: String in players:
			players[kind].volume_linear=0.0
		for kind: String in CAPS:
			gains[kind]=0.0
			_base_gains[kind]=0.0

func set_foreground(value: bool) -> void:
	_foreground=value
	if value: _duck=0.5
	_apply_gains()

func _refresh_trees(visible: Dictionary) -> void:
	_trees.clear()
	for plant: Dictionary in state.plants:
		if str(plant.kind) not in ["olive","cypress"]: continue
		var at := Vector2(float(plant.position[0]),float(plant.position[1]))
		if not state.WORLD_RECT.has_point(at): continue
		var accepted := bool(visible.get(str(plant.id),false)) if _visibility_source.is_valid() else bool(state.vegetation_visible(plant))
		if accepted: _trees.append({"at":at,"scale":float(plant.scale)})
	_revision=state.revision
	_visibility_hash=hash(visible)
	_cache_rebuilds+=1

func _query() -> void:
	var radius := clampf(_zoom,4.0,100.0)
	var wet := 0.0
	_water_samples=0
	var points: Array[Vector2]=[]
	if _view_samples_source.is_valid(): points.assign(_view_samples_source.call())
	else:
		for x in range(-2,3):
			for z in range(-2,3): points.append(_focus+Vector2(x,z)*radius*.25)
	for at: Vector2 in points:
		if _frustum_source.is_valid() and not _frustum_source.call(at): continue
		wet+=1.0-smoothstep(-0.2,1.0,float(state.water_clearance(at)))
		_water_samples+=1
	var near := 1.0-smoothstep(0.0,7.0,float(state.water_clearance(_focus)))
	weights.water=clampf(maxf(near*0.8*minf(1.0,18.0/_zoom),sqrt(wet/maxf(1.0,float(_water_samples)))),0.0,1.0) if wet>0.0 else 0.0
	var forest := 0.0
	_visible_trees=0
	for tree: Dictionary in _trees:
		var distance := Vector2(tree.at).distance_to(_focus)
		if distance>radius or (_frustum_source.is_valid() and not _frustum_source.call(tree.at)): continue
		_visible_trees+=1
		forest+=(1.0-smoothstep(radius*0.25,radius,distance))*minf(1.4,float(tree.scale))
	forest=clampf(forest/(8.0*maxf(1.0,pow(_zoom/18.0,2.0))),0.0,1.0)
	weights.wind=clampf(0.20+forest*0.55+clampf((_zoom-9.0)/35.0,0.0,1.0)*0.20,0.0,1.0)
	weights.birds=forest*([1.0,0.35,0.0][_light_phase])
	weights.insects=forest*([0.0,0.35,1.0][_light_phase])
	for kind: String in CAPS: targets[kind]=float(CAPS[kind])*float(weights[kind])
	_queries+=1

func _process(delta: float) -> void:
	var began := Time.get_ticks_usec()
	_frame+=1
	if _worker!=null and not _worker.is_alive():
		_pcm=_worker.wait_to_finish()
		_worker=null
		peaks.merge(_pcm.peaks)
		if players.water.stream==null: players.water.stream=_pcm.streams.water
		for player: AudioStreamPlayer in players.values():
			if player.stream!=null: player.play()
		_forest_playback=players.forest.get_stream_playback()
		_ready_pcm=true
	if state==null or players.is_empty(): return
	_timer+=delta
	var changed:bool = _revision!=state.revision
	if changed or _timer>=QUERY_INTERVAL:
		_timer=0.0
		var visible: Dictionary = _visibility_source.call() if _visibility_source.is_valid() else {}
		if changed or _visibility_hash!=hash(visible): _refresh_trees(visible)
		_query()
	var blend := 1.0-exp(-delta*2.5)
	_duck=lerpf(_duck,0.5 if _foreground else 1.0,blend)
	for kind: String in CAPS: _base_gains[kind]=0.0 if _muted else lerpf(float(_base_gains[kind]),float(targets[kind]),blend)
	_apply_gains()
	_fill_forest()
	_frame_max_usec=maxi(_frame_max_usec,Time.get_ticks_usec()-began)

func _apply_gains() -> void:
	for kind: String in CAPS: gains[kind]=0.0 if _muted else float(_base_gains[kind])*_duck
	players.water.volume_linear=gains.water
	players.forest.volume_linear=float(gains.wind)+float(gains.birds)+float(gains.insects)

func _fill_forest() -> void:
	if _forest_playback==null: return
	var count := _forest_playback.get_frames_available()
	if count<=0: return
	var total := float(gains.wind)+float(gains.birds)+float(gains.insects)
	var mix := Vector3(float(gains.wind),float(gains.birds),float(gains.insects))/maxf(total,0.000001)
	var wind: PackedFloat32Array=_pcm.samples.wind
	var birds: PackedFloat32Array=_pcm.samples.birds
	var insects: PackedFloat32Array=_pcm.samples.insects
	var buffer := PackedVector2Array()
	buffer.resize(count)
	for index in range(count):
		var frame := (_forest_frame+index)%wind.size()
		var sample := wind[frame]*mix.x+birds[frame]*mix.y+insects[frame]*mix.z
		buffer[index]=Vector2(sample,sample)
	_forest_playback.push_buffer(buffer)
	_forest_frame=(_forest_frame+count)%wind.size()
	_forest_frames_pushed+=count
	_forest_skips=_forest_playback.get_skips()

func report() -> Dictionary:
	var rows: Dictionary = {}
	var bound := 0.0
	for kind: String in players:
		var player: AudioStreamPlayer = players[kind]
		rows[kind]={"id":player.get_instance_id(),"playing":player.playing,"elapsed":player.get_playback_position(),"stream":player.stream.get_instance_id() if player.stream!=null else 0}
	for kind: String in CAPS: bound+=float(gains[kind])*float(peaks.get(kind,0.0))
	return {"players":rows,"player_count":players.size(),"weights":weights.duplicate(),"gains":gains.duplicate(),"peaks":peaks.duplicate(),"targets":targets.duplicate(),"caps":CAPS.duplicate(),
		"ready":_ready_pcm,"muted":_muted,"foreground":_foreground,"duck":_duck,"focus":_focus,"zoom":_zoom,"evening":_light_phase>=1,"night":_light_phase==2,"light_phase":_light_phase,
		"theoretical_peak":bound,"maximum_gain_sum":0.030,"bird_insect_weight":float(weights.birds)+float(weights.insects),"queries":_queries,"cache_rebuilds":_cache_rebuilds,"water_samples":_water_samples,"visible_trees":_visible_trees,
		"pcm":{"procedural":_pcm.get("source",""),"bytes":_pcm.get("bytes",0),"seconds":PCM.SECONDS,"water":WATER_PATH,"water_loaded":peaks.has("water")},"frame":{"count":_frame,"maximum_usec":_frame_max_usec},"forest_frames_pushed":_forest_frames_pushed,"forest_skips":_forest_skips,"authored_writes":0}

func _peak(stream: AudioStreamWAV) -> float:
	var bytes := stream.data
	var peak := 0.0
	if stream.format==AudioStreamWAV.FORMAT_16_BITS:
		for index in range(bytes.size()/2): peak=maxf(peak,absf(float(bytes.decode_s16(index*2)))/32768.0)
	elif stream.format==AudioStreamWAV.FORMAT_8_BITS:
		for value: int in bytes: peak=maxf(peak,absf(float(value)-128.0)/128.0)
	else: peak=1.0
	return peak

func _exit_tree() -> void:
	if _worker!=null:
		_worker.wait_to_finish()
		_worker=null
	for player: AudioStreamPlayer in players.values(): player.stop()

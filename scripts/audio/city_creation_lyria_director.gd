extends Node
## Explicit local audition. Owns no extra players; one existing slot has one clock.
const Bundle=preload("res://scripts/audio/city_creation_lyria_bundle.gd")
const Affinity=preload("res://scripts/audio/city_creation_music_affinity.gd")
const Envelope=preload("res://scripts/audio/city_creation_affinity_envelope.gd")
var affinity:=Affinity.new()
var envelope:=Envelope.new()
var prepared:Dictionary={}
var saved:Dictionary={}
var suspended:Dictionary={}
var city_id:=0
var preferences:=""
var began:=0
var was_processing:=true
var paused:=false
var envelope_seconds:=0.
var retired:=false
var player:AudioStreamPlayer

static func start(music:Node,path:String)->Dictionary:
	if music._loading or music._pluck_city==null or music.get_node_or_null("LyriaSpatialPreview")!=null or music.get_node_or_null("GameMusicPlayer")!=null or music.phonograph.active or music.has_meta("authored_score"):return {"ok":false,"reason":"music_context_busy"}
	var ready:=Bundle.read(path)
	if not ready.ok:return ready
	var node=load("res://scripts/audio/city_creation_lyria_director.gd").new()
	node.name="LyriaSpatialPreview";node.prepared=ready;music.add_child(node)
	return {"ok":true,"fallback":ready.fallback,"signature":ready.signature}

func _ready()->void:
	var music:=get_parent()
	city_id=music._pluck_city.get_instance_id();preferences=JSON.stringify(music._pluck_city.creative_settings.music)
	was_processing=music.is_processing();music.set_process(false);began=Time.get_ticks_msec()
	for child:Node in music.get_children():
		if child==self or child is AudioStreamPlayer:continue
		suspended[child]=child.is_processing();child.set_process(false)
	for key:String in music._players:
		var voice:AudioStreamPlayer=music._players[key]
		saved[key]={"stream":voice.stream,"playing":voice.playing,"position":voice.get_playback_position(),"db":voice.volume_db,"bus":voice.bus}
		voice.stop()
	for voice:AudioStreamPlayer in music._effects:voice.stop()
	player=music._players.foundation;player.stream=prepared.stream;player.bus="Master";player.volume_linear=0.;player.play()
	if not prepared.fallback:prepared.stream.set_sync_stream_volume(1,linear_to_db(.4))
	player.finished.connect(stop)

func _process(delta:float)->void:
	var music:=get_parent()
	if music._pluck_city==null or music._pluck_city.get_instance_id()!=city_id or JSON.stringify(music._pluck_city.creative_settings.music)!=preferences:
		music.set_meta("lyria_preview_stop_reason","context_changed")
		stop();return
	if player.stream!=prepared.stream:
		music.set_meta("lyria_preview_stop_reason","pooled_stream_replaced");stop();return
	affinity.refresh(music._pluck_city)
	var facts:=affinity.sample(music._listener_focus,float(music.acoustic.zoom))
	if not paused:envelope_seconds+=delta
	var mix:=envelope.step(facts,envelope_seconds,0. if paused else delta)
	var color_gain:=lerpf(.4,1.,float(mix.value))
	if not prepared.fallback:prepared.stream.set_sync_stream_volume(1,linear_to_db(color_gain))
	var fade:=minf(1.,(Time.get_ticks_msec()-began)/800.)
	player.volume_linear=0. if music.muted else .8*fade
	music.set_meta("lyria_spatial_preview",{"signature":prepared.signature,"position":player.get_playback_position(),"enclosure":facts.enclosure,"color_gain":color_gain,"envelope":mix,"fallback":prepared.fallback,"voices":1 if prepared.fallback else 2,"loop_enabled":false,"paused":paused,"source_sha256":prepared.manifest.source_sha256})

func set_paused(value:bool)->void:
	paused=value;player.stream_paused=value

func stop()->void:
	if retired:return
	retired=true
	var music:=get_parent()
	if player.finished.is_connected(stop):player.finished.disconnect(stop)
	player.stop();player.stream_paused=false
	var same_city:bool=music._pluck_city!=null and music._pluck_city.get_instance_id()==city_id
	for key:String in saved:
		var voice:AudioStreamPlayer=music._players[key];var row:Dictionary=saved[key]
		voice.stream=row.stream if same_city else music._original_streams.get(key)
		voice.bus=row.bus;voice.volume_db=row.db
		if voice.stream!=null and (row.playing or not same_city):voice.play(float(row.position) if same_city else 0.)
	for child:Node in suspended:
		if is_instance_valid(child):child.set_process(suspended[child])
	music.remove_meta("lyria_spatial_preview");music.set_process(was_processing);queue_free()

func _exit_tree()->void:
	if not retired and is_instance_valid(get_parent()):stop()

extends Node
## Opt-in construction API. Loads on a worker, borrows one existing player.
const Bundle=preload("res://scripts/audio/city_creation_game_music_bundle.gd")
const Affinity=preload("res://scripts/audio/city_creation_music_affinity.gd")
const Envelope=preload("res://scripts/audio/city_creation_affinity_envelope.gd")
const ExpressionGeometry=preload("res://scripts/audio/city_creation_expression_geometry.gd")
const Sequence=preload("res://scripts/audio/city_creation_game_music_sequence.gd")
const Shorts=preload("res://scripts/audio/city_creation_game_music_shorts.gd")
var sequence:=Sequence.new()
var cues:=Shorts.new()
var geometry:=ExpressionGeometry.new()
var color_envelopes:={"flow":Envelope.new(),"craft":Envelope.new()}
var color_states:Dictionary={}
var manual_expression:=false
var last_edit:=-INF
var edit_marker:=-1
var affinity:=Affinity.new()
var envelope:=Envelope.new()
var music:Node
var manifest_path:=""
var worker:Thread
var prepared:Dictionary={}
var saved:Dictionary={}
var suspended:Dictionary={}
var city_id:=0
var city_epoch:=0
var preferences:=""
var old_processing:=true
var active:=false
var retired:=false
var cancelled:=false
var paused:=false
var clock:=0.
var contour_value:=0.
var contour_envelope:=Envelope.new()
var contour_state:Dictionary={}
var expression:={"flow":0.,"craft":0.}
var values:Dictionary={}
var lost_since:Dictionary={}
var spatial_facts:Dictionary={}
var envelope_state:Dictionary={}
var player:AudioStreamPlayer

static func request(owner:Node,path:String)->Dictionary:
	var imported:Node=owner.get_node_or_null("AuthoredScore")
	if imported!=null and imported.worker!=null or owner.has_meta("authored_score_ready"):return {"ok":false,"reason":"music_context_busy"}
	if owner._loading or owner._pluck_city==null or owner.concert_active or owner.phonograph.active or owner.has_meta("authored_score") or owner.get_node_or_null("LyriaSpatialPreview")!=null or owner.get_node_or_null("GameMusicPlayer")!=null:return {"ok":false,"reason":"music_context_busy"}
	var node=load("res://scripts/audio/city_creation_game_music_player.gd").new()
	node.name="GameMusicPlayer";node.music=owner;node.manifest_path=path;owner.add_child(node)
	return {"ok":true,"status":"preparing","node":node}

func _ready()->void:
	city_id=music._pluck_city.get_instance_id();preferences=JSON.stringify(music._pluck_city.creative_settings.music)
	city_epoch=music._pluck_city._wish_epoch
	cues.setup(self)
	worker=Thread.new();worker.start(func():return Bundle.read(manifest_path))

func valid_context()->bool:
	return music._pluck_city!=null and music._pluck_city.get_instance_id()==city_id and music._pluck_city._wish_epoch==city_epoch and JSON.stringify(music._pluck_city.creative_settings.music)==preferences

func activate()->void:
	if saved.is_empty():
		old_processing=music.is_processing();music.set_process(false)
		for child:Node in music.get_children():
			if child==self or child is AudioStreamPlayer:continue
			suspended[child]=child.is_processing();child.set_process(false)
		for key:String in music._players:
			var voice:AudioStreamPlayer=music._players[key]
			saved[key]={"stream":voice.stream,"playing":voice.playing,"paused":voice.stream_paused,"position":voice.get_playback_position(),"db":voice.volume_db,"bus":voice.bus}
			voice.stop()
		for voice:AudioStreamPlayer in music._effects:voice.stop()
		music.attention.clear()
		music.attention.last_sculpt_sec=-INF
	player=music._players.foundation;player.stream=prepared.stream;player.stream_paused=false;player.bus="Master";player.volume_linear=0.
	for id:String in prepared.ids:values[id]=1. if id=="core" else .35
	apply_volumes();player.play();player.stream_paused=paused
	if not player.finished.is_connected(finished):player.finished.connect(finished)
	active=true

func finished()->void:
	if not sequence.finish():stop()

func switch_packet(packet:Dictionary,path:String)->void:
	cues.close();music.attention.clear()
	music.attention.last_sculpt_sec=-INF
	prepared=packet;manifest_path=path;clock=0.;values.clear()
	if not manual_expression:expression={"flow":0.,"craft":0.}
	color_states.clear();spatial_facts={};envelope_state={};contour_state={};contour_value=0.
	envelope=Envelope.new();contour_envelope=Envelope.new()
	for key:String in color_envelopes:color_envelopes[key]=Envelope.new()
	last_edit=-INF;edit_marker=music.attention.sculpt_serial;lost_since.clear()
	activate()

func _process(delta:float)->void:
	if cancelled and worker==null:
		if sequence.worker!=null and sequence.worker.is_alive():return
		stop();return
	if worker!=null:
		if worker.is_alive():return
		prepared=worker.wait_to_finish();worker=null
		if cancelled or not prepared.get("ok",false) or not valid_context() or music._loading or music.concert_active or music.phonograph.active or music.has_meta("authored_score"):stop();return
		if prepared.manifest.kind!="music":music.set_meta("game_music_error","dedicated_ambience_or_note_pipeline_required");stop();return
		activate()
	if not active:return
	if not valid_context() or player.stream!=prepared.stream or music.concert_active or music.phonograph.active or music.has_meta("authored_score"):stop();return
	sequence.step(delta)
	cues.step(delta)
	if not paused and not sequence.breathing:
		clock+=delta;affinity.refresh(music._pluck_city)
		var facts:=affinity.sample(music._listener_focus,float(music.acoustic.zoom))
		geometry.refresh(music._pluck_city)
		spatial_facts=facts.merged(geometry.sample(facts.weights))
		spatial_facts=geometry.Context.merge_activity(spatial_facts,geometry.Context.activity(music,facts.weights))
		sequence.observe()
		var marker:int=music.attention.sculpt_serial
		if music.attention.dragging or marker!=edit_marker:last_edit=clock
		edit_marker=marker
		var observing:bool=clock-last_edit>=3.
		contour_state=contour_envelope.step({"city":city_id,"enclosure":spatial_facts.highland.value,"source_ids":spatial_facts.highland.source_ids},clock,delta,observing)
		contour_value=contour_state.value
		var warmth:=envelope.step(facts,clock,delta,observing)
		envelope_state=warmth
		if not manual_expression:
			for kind:String in color_envelopes:
				var input:={"city":city_id,"enclosure":spatial_facts[kind],"source_ids":spatial_facts[kind+"_sources"]}
				color_states[kind]=color_envelopes[kind].step(input,clock,delta,observing)
				expression[kind]=color_states[kind].value
		for id:String in values:
			if id=="core":continue
			var target:=.35+.65*float(warmth.value if id=="body" else expression.get("flow" if id=="motion" else "craft",0.))
			if id=="body":target=minf(target,1.-.25*contour_value)
			if id=="motion" and not manual_expression:target=.35+.65*clampf(float(expression.flow)+.25*contour_value,0.,1.)
			values[id]=target if id=="body" or not manual_expression else lerpf(float(values[id]),target,1.-exp(-delta/3.2))
			if lost_since.has(id) and clock-float(lost_since[id])>=6.:values[id]=.35
		apply_volumes()
	player.volume_linear=0. if music.muted else .8*minf(1.,clock/.8)
	music.set_meta("game_music",{"source_id":prepared.manifest.source_id,"position":player.get_playback_position(),"values":values.duplicate(),"clock":clock,"paused":paused,"fallback":prepared.fallback,"voices":prepared.ids.size(),"signature":prepared.signature,"spatial_envelope":envelope.value,"spatial_facts":spatial_facts,"color_states":color_states,"manual_expression":manual_expression,"breathing":sequence.breathing,"next_error":sequence.failed})

func apply_volumes()->void:
	if prepared.fallback:return
	for i:int in prepared.ids.size():prepared.stream.set_sync_stream_volume(i,linear_to_db(float(values[prepared.ids[i]])))

func set_expression(flow:float,craft:float)->void:
	manual_expression=true
	var next:={"flow":clampf(flow,0.,1.),"craft":clampf(craft,0.,1.)}
	for key:String in next:
		var id:="motion" if key=="flow" else "detail"
		if next[key]>0.:lost_since.erase(id)
		elif expression[key]>0.:lost_since[id]=clock
	expression=next

func set_paused(value:bool)->void:
	paused=value
	if active:player.stream_paused=value

func seek(seconds:float)->bool:
	if not active or not is_finite(seconds):return false
	var end:float=float(prepared.manifest.frames)/44100.
	music.attention.clear();music.attention.last_sculpt_sec=-INF
	player.play(clampf(seconds,0.,maxf(0.,end-.05)));player.stream_paused=paused;return true

func stop()->void:
	if retired:return
	release()
	if worker!=null and worker.is_alive():cancelled=true;return
	if sequence.worker!=null and sequence.worker.is_alive():
		cancelled=true
		return
	retired=true
	sequence.close()
	cues.close()
	if worker!=null:worker.wait_to_finish();worker=null
	queue_free()

func release()->void:
	if active:
		music.attention.clear();music.attention.last_sculpt_sec=-INF
		if player.finished.is_connected(finished):player.finished.disconnect(finished)
		player.stop();player.stream_paused=false
		var same_city:bool=valid_context()
		for key:String in saved:
			var voice:AudioStreamPlayer=music._players[key];var row:Dictionary=saved[key]
			voice.stream=row.stream if same_city else music._original_streams.get(key);voice.bus=row.bus;voice.volume_db=row.db
			if voice.stream!=null and (row.playing or not same_city) and not preload("res://scripts/audio/city_creation_free_music_route.gd").holds(music):voice.play(float(row.position) if same_city else 0.)
			voice.stream_paused=bool(row.paused) if same_city else false
		for child:Node in suspended:
			if is_instance_valid(child):child.set_process(suspended[child])
		music.set_process(old_processing);music.remove_meta("game_music")
	active=false

func _exit_tree()->void:
	if worker!=null:worker.wait_to_finish();worker=null
	sequence.close()
	if not retired:stop()

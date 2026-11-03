extends RefCounted
## No adopted background song yet: free creation keeps nature and tactile input.
## Explicit imported scores, phonograph works and legacy cities retain their APIs.
const Shorts=preload("res://scripts/audio/city_creation_game_music_shorts.gd")
static func holds(music:Node)->bool:
	var city:RefCounted=music._pluck_city
	return city!=null and city.CreationPolicy.is_free(city) and not music.get_meta("legacy_music_compatibility",false) and not music.phonograph.active and not music.has_meta("authored_score") and not music.has_meta("authored_score_ready")
static func clock(music:Node)->float:
	return float(music.get_meta("free_music_clock",0.))
static func tick(music:Node,delta:float)->bool:
	if not holds(music):
		if music.has_meta("free_music_context"):
			music.remove_meta("free_music_context");music.attention.clear()
			if music._edit_streams.get("free_physical_touch")==music.get_meta("free_music_touch",null):music._edit_streams.erase("free_physical_touch")
			for voice:AudioStreamPlayer in music._players.values():
				if not voice.playing and voice.stream!=null:voice.play()
		return false
	var context:=[music._pluck_city.get_instance_id(),music._pluck_city._wish_epoch]
	if music.get_meta("free_music_context",[])!=context:
		music.set_meta("free_music_context",context);music.set_meta("free_music_clock",0.)
		music.attention.clear();music.attention.last_sculpt_sec=-INF
		music.canon.clear();music.bakery_cues.clear();music.reply.clear()
		for voice:AudioStreamPlayer in music._effects:voice.stop()
	music.set_meta("free_music_clock",clock(music)+delta)
	for voice:AudioStreamPlayer in music._players.values():
		if voice.playing:voice.stop()
	music.attention.evaluate_mode(float(music.acoustic.zoom),false,music.attention_strolling,delta,clock(music))
	music.attention.step(clock(music),func(category:String,payload:Dictionary)->bool:return music._play_queued_house(payload) if category=="pluck_arp" else false)
	music._prune_plucks()
	return true
static func resolve(music:Node,source:AudioStreamWAV)->AudioStreamWAV:
	if not holds(music) or source.has_meta("life_foley_kind"):return source
	return touch(music)
static func touch(music:Node)->AudioStreamWAV:
	if not music.has_meta("free_music_touch"):
		var wave:AudioStreamWAV=music._pcm_stream(Shorts.wood_pcm(),false)
		wave.set_meta("unpitched_touch",true)
		music.CueGrid.prepare_short_bank({"touch":wave},{})
		music.set_meta("free_music_touch",wave)
	return music.get_meta("free_music_touch")
static func plan(music:Node,base:Dictionary)->Dictionary:
	if not holds(music) or base.is_empty() or preload("res://scripts/audio/city_creation_game_music_harmony.gd").node(music)!=null:return {}
	music._edit_streams["free_physical_touch"]=touch(music)
	return base.merged({"midi":-1,"bar":-1,"stream_key":"free_physical_touch","unpitched":true,"harmony_signature":""},true)
static func attribute(music:Node,voice:AudioStreamPlayer)->void:
	if voice.stream==null or not voice.stream.has_meta("unpitched_touch"):return
	music._pluck_stream=voice.stream;music._pluck_active.midi=-1;music._pluck_active.unpitched=true
	if music._pluck_voices.has(voice.get_instance_id()):music._pluck_voices[voice.get_instance_id()].stream=voice.stream
static func retire_candidate(music:Node)->void:
	var node:Node=music.get_node_or_null("GameMusicPlayer")
	if node!=null:node.stop()

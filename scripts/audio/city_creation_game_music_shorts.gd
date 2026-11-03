extends RefCounted
const Harmony=preload("res://scripts/audio/city_creation_game_music_harmony.gd")
const RATE:=22050
var host:Node
var bank:Dictionary={}
var originals:Dictionary={}
var events:Array=[]
static func wood_pcm()->PackedFloat32Array:
	var pcm:=PackedFloat32Array();pcm.resize(roundi(RATE*.42));var seed:=81631;var low:=0.
	for i in range(roundi(RATE*.12)):
		seed=(seed*1103515245+12345)&0x7fffffff;var t:=float(i)/RATE;low=low*.55+(float(seed)/1073741824.-1.)*.45;pcm[i]=low*.12*minf(1.,t/.002)*exp(-t*65.)
	return pcm
func setup(owner:Node)->void:
	host=owner;originals={}
	for key:String in host.music._edit_streams:
		var note:Dictionary=host.music.audio_report.get("house_pluck_notes",{}).get(key,{})
		if not note.is_empty():originals[host.music._edit_streams[key].get_instance_id()]=note
	for key:String in host.music._harmony_streams:
		var notes:Array=host.music.audio_report.get("harmony_notes",{}).get(key,[])
		if not notes.is_empty():originals[host.music._harmony_streams[key].get_instance_id()]=notes[0]
func close()->void:
	for key:String in bank:host.music._edit_streams.erase(key)
	bank.clear();events.clear()
func _wave(timbre:String,midi:int,dyad:bool=false)->AudioStreamWAV:
	var key:="candidate_short/%s/%d/%d"%[timbre,midi,int(dyad)]
	if not bank.has(key):
		var pcm:=PackedFloat32Array();pcm.resize(roundi(RATE*.42))
		if midi<0:
			pcm=wood_pcm()
		else:
			host.music._add_harmony_note(pcm,0.,.38,midi,.07,timbre,false)
			if dyad:host.music._add_harmony_note(pcm,0.,.38,midi+12,.03,"harp",false)
		var peak:=0.
		for value:float in pcm:peak=maxf(peak,absf(value))
		if peak>.12:
			for i in range(pcm.size()):pcm[i]*=.12/peak
		var wave:AudioStreamWAV=host.music._pcm_stream(pcm,false);wave.set_meta("candidate_note",{"midi":midi,"timbre":timbre,"dyad":dyad});wave.set_meta("octave_dyad",dyad and midi>=0)
		host.music.CueGrid.prepare_short_bank({key:wave},{});bank[key]=wave
	host.music._edit_streams[key]=bank[key];return bank[key]
func wave(timbre:String,midi:int,dyad:bool=false)->AudioStreamWAV:
	var harmony:=Harmony.current(host.music)
	return _wave("physical_wood",-1) if harmony.unpitched else _wave(timbre,Harmony.snap(midi,harmony.pitch_classes),dyad)
static func plan_key(music:Node,timbre:String,midi:int)->String:
	var active:=Harmony.node(music)
	if active==null:return ""
	var wave:AudioStreamWAV=active.cues.wave(timbre,midi)
	for key:String in active.cues.bank:
		if active.cues.bank[key]==wave:return key
	return ""
static func resolve(music:Node,wave:AudioStreamWAV,onset:float)->AudioStreamWAV:
	var active:=Harmony.node(music)
	return active.cues.resolve_wave(wave,onset) if active!=null else null
func resolve_wave(source:AudioStreamWAV,onset:float)->AudioStreamWAV:
	if source.has_meta("life_foley_kind"):return source
	var note:Dictionary=source.get_meta("candidate_note",originals.get(source.get_instance_id(),{}));var harmony:=Harmony.current(host.music,onset);var midi:=-1;var timbre:="physical_wood";var dyad:=false
	if not note.is_empty() and not harmony.unpitched and int(note.get("midi",-1))>=0:
		midi=Harmony.snap(int(note.midi),harmony.pitch_classes);timbre=str(note.get("timbre","pluck"));dyad=note.get("dyad",false)
	var wave:AudioStreamWAV=_wave(timbre,midi,dyad).duplicate();wave.set_meta("candidate_harmony",{"source_id":host.prepared.manifest.source_id,"signature":harmony.signature,"position":onset,"timeline_second":harmony.timeline_second,"pitch_classes":harmony.pitch_classes,"midi":midi,"unpitched":midi<0})
	events.append(wave.get_meta("candidate_harmony"))
	if events.size()>64:events.pop_front()
	return wave
func step(delta:float)->void:
	if host.paused or host.sequence.breathing:return
	var music:Node=host.music;var clock:=Harmony.position(music)
	music.attention.evaluate_mode(float(music.acoustic.zoom),false,float(music.acoustic.zoom)<=18.,delta,clock)
	music.attention.step(clock,_dispatch)
	music._prune_plucks()
func _dispatch(category:String,payload:Dictionary)->bool:
	if category!="pluck_arp":return false
	var music:Node=host.music;var played:bool=music._play_queued_house(payload)
	if played and payload.get("world_kind","house")=="house" and music._pluck_player!=null:
		var player:AudioStreamPlayer=music._pluck_player;var note:Dictionary=player.stream.get_meta("candidate_harmony",{})
		if not note.is_empty() and music._pluck_voices.has(player.get_instance_id()):
			music._pluck_stream=player.stream;music._pluck_voices[player.get_instance_id()].stream=player.stream;music._pluck_active.midi=note.midi;music._pluck_active.unpitched=note.unpitched;music._pluck_active.harmony_signature=note.signature
	return played

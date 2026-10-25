extends RefCounted
## A piano tread and an upper harp share one PCM and one existing short player.
const Families=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
static var cache:Dictionary={}
static func stream(music:Node,base:AudioStreamWAV,mode:int,rank:int)->AudioStreamWAV:
	return at_pitch(music,base,Palette.stair_pitch(mode,rank))
static func at_pitch(music:Node,base:AudioStreamWAV,midi:int)->AudioStreamWAV:
	if music._pluck_city==null or Families.tier(music._pluck_city,"highland")<2:return base
	var key:="%d/%d"%[base.get_instance_id(),midi]
	if cache.has(key):return cache[key]
	if cache.size()>=24:cache.clear()
	# Re-render two notes rather than decoding a QOA stream as signed PCM.
	var pcm:=PackedFloat32Array();pcm.resize(9261)
	var upper:=midi+12
	music._add_harmony_note(pcm,0.,.38,midi,.080,"piano",false)
	music._add_harmony_note(pcm,0.,.38,upper,.035,"harp",false)
	var result:AudioStreamWAV=music._pcm_stream(pcm,false)
	result.set_meta("octave_dyad",true);result.set_meta("pitches",[upper-12,upper]);cache[key]=result
	return result

extends SceneTree
const Score=preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var acoustic:=Acoustic.new();acoustic.set_view(Vector2.ZERO,20.)
	var houses:Dictionary={}
	for era:String in Score.ERA_TRACKS:
		var row:Dictionary={"era_theme":era,"position":Vector2.ZERO,"style":"warm","level_tier":1,"base_y":0.,"rooms":2,"upper_rooms":0,"district_id":era,"cluster_size":5}
		houses={"home":row};acoustic.evaluate(houses,[])
		var score:=Score.evaluate(houses,acoustic,[],0,false)
		_check(score.lead_track==Score.ERA_TRACKS[era] and score.targets[score.lead_track]==-10.5,"the visible era becomes the actual shared -10.5 dB lead: "+era)
		_check(score.variant==0 and score.average_tier==1.,"simple low-level geometry begins with the sparse motif: "+era)
	houses={}
	for i in range(5):houses[str(i)]={"era_theme":"pastoral","style":Score.STYLE_TRACKS.keys()[i],"position":Vector2(i*1.,0),"rooms":1,"upper_rooms":0,"level_tier":1,"cluster_size":5}
	acoustic.evaluate(houses,[]);var score:=Score.evaluate(houses,acoustic,[],0,false)
	var active:Array=[]
	for track:String in Score.LEADS:
		if float(score.targets[track])>-59.:active.append(track)
	_check(active.size()==2,"five visible styles admit only one lead and one companion")
	_check(db_to_linear(score.targets[score.secondary_track]-score.targets[score.lead_track])<=.450001,"secondary accompaniment stays at or below forty-five percent")
	var reversed:Dictionary={}
	for id:String in ["4","3","2","1","0"]:reversed[id]=houses[id]
	_check(Score.evaluate(reversed,acoustic,[],8,false)==Score.evaluate(houses,acoustic,[],8,false),"dictionary order does not change the city score or deterministic DNA")
	var rich:Dictionary={"r":{"position":Vector2.ZERO,"era_theme":"renaissance","style":"warm","level_tier":5,"base_y":2.,"rooms":8,"upper_rooms":6,"max_level":3,"water_distance":1.,"towers":1,"cluster_size":5}}
	acoustic.evaluate(rich,[]);var rings:Array=[{"center":Vector2.ZERO}]
	var variants:Dictionary={}
	for phrase in range(16):
		var r:=Score.evaluate(rich,acoustic,rings,phrase,false);variants[r.variant]=true
		_check(r.elevation==1. and r.rings==1 and r.targets.air>-23.1 and r.average_tier==5.,"real highland, enclosure and quality fields reach the orchestration inputs: phrase "+str(phrase))
	_check(variants.has(2) and variants.has(1),"a prosperous highland alternates ornate and lighter phrases instead of repeating one texture")
	var a:Array=[];var b:Array=[]
	for i in range(8):a.append(Score.evaluate(rich,acoustic,rings,i,false).variant);b.append(Score.evaluate(rich,acoustic,rings,i+8,false).variant)
	_check(a!=b,"the same rich city receives a different motif order after the next twenty-four-second cycle")
	var engine:=Score.new();var once:=engine.advance(rich,acoustic,rings,0,false)
	rich.r.level_tier=1
	_check(engine.advance(rich,acoustic,rings,0,false)==once,"catalog changes wait for a phrase boundary")
	_check(engine.advance(rich,acoustic,rings,1,false).average_tier==1.,"the next phrase adopts the updated quality")
	acoustic.set_view(Vector2(500,500),20.);acoustic.evaluate(rich,[])
	_check(Score.evaluate(rich,acoustic,rings,2,false).lead_track=="","off-screen ordinary houses cannot own a lead")
	var city:=State.new();city.initialize();var music:=Music.new();music.update_city(city)
	var snapshot:=city.snapshot();var c:Dictionary=music._house_music.h1
	_check(c.rooms>=1 and c.max_level>=0 and c.has("water_distance"),"production catalog prepares geometry and water data outside the audio frame loop")
	music.emergence.advance(music._house_music,music.acoustic,music.canon.groups,0,false)
	_check(city.snapshot()==snapshot,"orchestration never changes a work or its save schema")
	var bank:=Cache.load_bank()
	_check(not bank.is_empty(),"the baked production bank matches all current synthesis and scoring sources")
	if not bank.is_empty():
		_check(bank.variations.size()==Palette.NAMES.size()*Score.LEADS.size()*3,"legacy colors and biome keys each retain eight era/style leads and three baked textures")
		for track:String in Score.LEADS:
			var distinct:Array[PackedByteArray]=[]
			var exact:=true;var seam:=true;var bounded:=true
			for variant in range(3):
				var key:String="%s/%d"%[track,variant]
				var stream:AudioStreamWAV=bank.variations[key];var pcm:PackedByteArray=stream.data
				if not distinct.has(pcm):distinct.append(pcm)
				bounded=bounded and stream.loop_end==Music.FRAMES and stream.mix_rate==Music.RATE and stream.get_length()==24. and bank.report.variation_peaks[key]>.001 and bank.report.variation_peaks[key]<=.180001
				for bar in range(8):
					for offset in range(0,100):
						seam=seam and pcm.decode_s16((bar*66150+offset)*2)==0 and pcm.decode_s16(((bar+1)*66150-1-offset)*2)==0
				var samples:=PackedFloat32Array();samples.resize(66150)
				for note:Dictionary in bank.report.variation_notes[key]:
					if float(note.start)>=3.:continue
					music._add_harmony_note(samples,note.start,note.duration,note.midi,note.gain,note.timbre,false)
				exact=exact and music._pcm_stream(samples,false).data==pcm.slice(0,132300)
			_check(distinct.size()==3 and bounded,"three distinct audible normalized twenty-four-second waves: "+track)
			_check(exact and seam,"independent first-phrase synthesis matches and all eight switching seams are silent: "+track)
		_check(bank.report.mix_peaks.emergent_stereo_bound<1. and bank.report.mix_peaks.absolute_stereo_with_four_short_voices<1.,"dynamic lead/companion allocation and any four short voices remain under the stereo clipping bound")
	music.free();print("HARMONIC_EMERGENCE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

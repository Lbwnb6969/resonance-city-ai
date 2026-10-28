extends RefCounted
## The original four colors keep their common Dadd9 pivot. Biomes have their
## own tonic, characteristic modal degrees and final bar, including every cue.
const Grid=preload("res://scripts/audio/city_creation_cue_grid.gd")
const Chamber=preload("res://scripts/audio/city_creation_chamber_pcm.gd")
const NAMES:=["晨曦暖阳","深流古巷","人文晴空","星夜交响","G吕底亚 · 千阶微光","B多利亚 · 沙洲回声","A大调 · 林间牧歌","F♯小调 · 星夜流光","C宫五声 · 宫商河韵","F大七 · 印象水光"]
const BIOME_MODES:=[0,4,5,6,7]
const SCALES:=[[2,4,6,9,11],[11,2,4,6,9],[7,9,11,2,4],[2,4,7,9,11],
	[7,9,11,1,6],[11,1,2,6,8],[9,11,1,4,6],[6,9,11,1,4],[0,2,4,7,9],[5,7,9,0,4]]
const KEY_TONES:=[[2,4,6,7,9,11,1],[2,4,6,7,9,11,1],[2,4,6,7,9,11,1],[2,4,6,7,9,11,1],
	[7,9,11,1,2,4,6],[11,1,2,4,6,8,9],[9,11,1,2,4,6,8],[6,8,9,11,1,2,4],[0,2,4,7,9],[5,7,9,10,0,2,4]]
const PROGRESSIONS:=[
	[[50,54,57,64],[47,50,54,57],[43,47,50,54],[45,49,52,54]],
	[[47,50,54,57],[43,47,50,54],[40,43,47,50],[42,45,49,52]],
	[[43,47,50,54],[43,45,49,52],[42,45,49,52],[47,50,54,57]],
	[[50,54,57,64],[43,47,50,52,57],[40,43,47,50,54],[45,50,52,57]],
	[[43,47,50,57],[45,49,52,55],[40,43,47,54],[47,50,54,57]],
	[[47,50,54,56],[45,49,52,59],[40,44,47,54],[42,45,49,56]],
	[[45,49,52,59],[42,45,49,52],[38,42,45,49],[40,44,47,54]],
	[[42,45,49,56],[38,42,45,49],[47,50,54,57],[40,44,47,54]],
	[[48,52,55,57],[45,48,52,55],[43,48,50,55],[50,55,57,60]],
	[[41,45,48,52],[38,41,45,52],[46,50,53,57],[48,52,55,58]]]
const PIVOT:=[50,54,57,64]
const BIOME_PIVOTS:=[[43,47,50,54,61],[47,50,54,56,61],[45,49,52,59],[42,45,49,56],[48,52,55,62],[41,45,48,52]]
const TRANSITIONS:=[[6,2,2,1],[3,6,2,2],[3,2,6,2],[3,2,2,6]]

static func for_city(city:RefCounted)->int:
	if city.music_mode=="gong_pentatonic":return 8
	if city.music_mode=="impressionist_major7":return 9
	return -1 if city.biome_seed.is_empty() else int(BIOME_MODES[int(city.Biomes.profile(city.biome_seed).voice)])

static func chords(mode:int)->Array:
	var result:Array=[]
	mode=clampi(mode,0,NAMES.size()-1)
	for bar in range(8):result.append((PIVOT if mode<4 else BIOME_PIVOTS[mode-4]) if bar==7 else PROGRESSIONS[mode][bar%4])
	return result

static func scale(mode:int,bar:int)->Array:
	mode=clampi(mode,0,NAMES.size()-1)
	return SCALES[0] if mode<4 and posmod(bar,8)==7 else SCALES[mode]

static func quantize(midi:int,mode:int,bar:int)->int:
	var allowed:=scale(mode,bar)
	for distance in range(7):
		if posmod(midi-distance,12) in allowed:return midi-distance
		if posmod(midi+distance,12) in allowed:return midi+distance
	return midi

static func stair_pitch(mode:int,rank:int)->int:
	var tones:Array=KEY_TONES[clampi(mode,0,NAMES.size()-1)]
	var degree:=posmod(rank,14);var root:int=int(tones[0])+48
	var offset:=posmod(int(tones[degree%tones.size()])-int(tones[0]),12)
	return root+offset+12*int(degree/tones.size())

static func pitch(mode:int,bar:int,band:int,variant:int)->int:
	var root:int=int(chords(mode)[posmod(bar,8)][0])+12
	var notes:Array[int]=[]
	for note in range(root,root+25):
		if posmod(note,12) in scale(mode,bar):notes.append(note)
		if notes.size()==5:break
	return notes[clampi(band,0,4)]+12*posmod(variant,2)

static func next_mode(current:int,preferred:int,dna:int,cycle:int)->int:
	var weights:Array=TRANSITIONS[current].duplicate()
	weights[clampi(preferred,0,3)]+=24
	var total:=0
	for weight:int in weights:total+=weight
	var draw:=posmod(hash([dna,cycle,current]),total)
	for mode in range(4):
		draw-=int(weights[mode])
		if draw<0:return mode
	return preferred

static func _note(start:float,duration:float,midi:int,gain:float,timbre:String)->Dictionary:
	return {"start":start,"duration":duration,"midi":midi,"gain":gain,"timbre":timbre}

static func _wave(out:Dictionary,key:String,duration:float,events:Array,add:Callable,make:Callable,looped:bool=false)->void:
	var samples:=PackedFloat32Array();samples.resize(roundi(22050.*(duration+(.1875 if not looped else 0.))))
	for event:Dictionary in events:
		if not looped:
			event.start=Grid.quantize_cue_onset(float(event.start))
			var parts:=key.split("/")
			if parts.size()>1 and parts[0].is_valid_int() and parts[-1].get_slice("_",parts[-1].get_slice_count("_")-1).is_valid_int() and not parts[-1].begins_with("stair_key"):
				var beat:=int(parts[-1].get_slice("_",parts[-1].get_slice_count("_")-1))
				if parts[-1].begins_with("travel_stepping") or parts[-1].begins_with("chamber_sparkle"):beat=int(parts[-1].get_slice("_",2))
				if parts.size()>2:beat=int(parts[-1])
				event.midi=Grid.snap_to_chord_tone(int(event.midi),chords(int(parts[0]))[posmod(beat,8)])
		add.call(samples,event.start,event.duration,event.midi,event.gain,event.timbre,looped)
	var peak:=0.
	for value:float in samples:peak=maxf(peak,absf(value))
	var gain:float=minf(1.,.18/maxf(.000001,peak))
	if gain<1.:
		for i in range(samples.size()):samples[i]*=gain
		for event:Dictionary in events:event.gain*=gain
	out.streams[key]=make.call(samples,looped);out.notes[key]=events;out.peaks[key]=peak*gain
	if looped and events.all(func(e):return e.has("layer")):out.streams[key].set_meta("chamber_layered",true)

static func render(add:Callable,make:Callable,theme:Script,leads:Array,legacy_edits:Dictionary,pitch_bank:Script,reply_bank:Script)->Dictionary:
	var out:Dictionary={"streams":{},"notes":{},"peaks":{},"variations":{},"variation_notes":{},"variation_peaks":{}}
	for mode in range(NAMES.size()):
		var progression:=chords(mode)
		var variants:Dictionary=theme.render_variations(add,make,progression,leads,mode)
		for key:String in variants.streams:
			var id:String=key if mode==0 else "%d/%s"%[mode,key]
			out.variations[id]=variants.streams[key];out.variation_notes[id]=variants.notes[key];out.variation_peaks[id]=variants.peaks[key]
		for family:String in ["pastoral","renaissance","clockwork","modern_eco"]:
			_wave(out,"%d/chamber_counter_%s"%[mode,family],24.,preload("res://scripts/audio/city_creation_chamber_score.gd").counter(family,progression,mode,load("res://scripts/audio/city_creation_harmonic_palette.gd")),add,make,true)
		for bed:String in ["foundation","air","terrace"]:
			var events:Array=[]
			for bar in range(8):
				var chord:Array=progression[bar]
				if bed=="foundation":
					for midi:int in chord:events.append(_note(bar*3.,3.5,midi,.014,"pad"))
					events.append(_note(bar*3.+.06,2.75,int(chord[0])-12,.048,"bass"))
				elif bed=="air":events.append(_note(bar*3.+.75,1.85,quantize(int(chord[2])+24,mode,bar),.045,"air"))
				else:events.append(_note(bar*3.+2.25,.60,quantize(int(chord[2])+24,mode,bar),.033,"bell"))
			events=Chamber.bed(bed,progression,mode,load("res://scripts/audio/city_creation_harmonic_palette.gd")) if bed in ["foundation","air"] else preload("res://scripts/audio/city_creation_chamber_score.gd").counter("terrace",progression,mode,load("res://scripts/audio/city_creation_harmonic_palette.gd"))
			_wave(out,"%d/%s"%[mode,bed],24.,events,add,make,true)
		_wave(out,"%d/nocturne"%mode,24.,Chamber.nocturne(progression,mode,load("res://scripts/audio/city_creation_harmonic_palette.gd")),add,make,true)
		# Biome landmark tutti uses the same modal progression as the leads;
		# it never introduces the original D-major concert into another key.
		var tutti:Array=[]
		for bar in range(8):
			var chord:Array=progression[bar]
			for i in range(4):tutti.append(_note(bar*3.+.15+float(i)*.6,.95,quantize(int(chord[i%chord.size()])+12,mode,bar),.055,"piano" if i%2==0 else "wood"))
			for midi:int in chord:tutti.append(_note(bar*3.+.02,2.8,midi,.016,"strings"))
		_wave(out,"%d/concert"%mode,24.,tutti,add,make,true)
		for bar in range(8):
			for ordinal in range(2):
				var event:Dictionary=preload("res://scripts/audio/city_creation_chamber_score.gd").sparkle(progression[bar],ordinal)
				var key:="%d/chamber_sparkle_%d_%d"%[mode,bar,ordinal]
				_wave(out,key,.64,[event],add,make)
				out.streams[key].set_meta("chamber_key",key);out.streams[key].set_meta("chamber_midi",event.midi);out.streams[key].set_meta("chamber_timbre",event.timbre)
		for rank in range(14):
			_wave(out,"%d/stair_key_%d"%[mode,rank],.42,[_note(0.,.38,stair_pitch(mode,rank),.072,"piano")],add,make)
		var replies:Dictionary=reply_bank.render(progression,add,make)
		for key:String in replies.streams:
			out.streams["%d/%s"%[mode,key]]=replies.streams[key];out.notes["%d/%s"%[mode,key]]=replies.events[key];out.peaks["%d/%s"%[mode,key]]=replies.peaks[key]
		for bar in range(8):
			var c:Array=progression[bar];var prefix:String="%d/"%mode
			# Fingertip nature responses share the current chord and the existing
			# four short voices, but have their own physical timbres and envelopes.
			_wave(out,prefix+"world_tree_%d"%bar,.64,[_note(0.,.13,quantize(int(c[0])+48,mode,bar),.050,"songbird"),_note(.1875,.16,quantize(int(c[1])+48,mode,bar),.042,"songbird")],add,make)
			_wave(out,prefix+"world_water_%d"%bar,.64,[_note(0.,.38,quantize(int(c[0])+24,mode,bar),.065,"water_marimba"),_note(.1875,.28,quantize(int(c[2])+24,mode,bar),.028,"water_marimba")],add,make)
			_wave(out,prefix+"cafe_flute_%d"%bar,.8,[_note(.07,.34,int(c[0])+24,.07,"flute"),_note(.43,.34,int(c[1])+24,.07,"flute")],add,make)
			_wave(out,prefix+"tram_chime_%d"%bar,.95,[_note(0.,.68,int(c[0])+24,.052,"celesta"),_note(.19,.68,int(c[2])+12,.044,"bell")],add,make)
			_wave(out,prefix+"tower_bell_%d"%bar,1.6,[_note(0.,1.55,int(c[0])+24,.074,"bell"),_note(.375,1.2,int(c[1])+24,.035,"bell")],add,make)
			_wave(out,prefix+"waterwheel_%d"%bar,.45,[_note(0.,.38,int(c[0])+12,.035,"wood")],add,make)
			for kind:String in ["bridge","arch"]:
				var notes:Array=[]
				for i in range(3):notes.append(_note(i*.12,.50,int(c[i])+12,.052 if i==0 else .040,"pluck" if kind=="bridge" else "wood"))
				_wave(out,prefix+"travel_%s_%d"%[kind,bar],.8,notes,add,make)
			for i in range(3):_wave(out,prefix+"travel_stepping_%d_%d"%[bar,i],.42,[_note(0.,.34,int(c[i])+24,.055,"water_marimba")],add,make)
			for kind:String in ["baked","purchased"]:
				var degrees:Array=[0,1] if kind=="baked" else [2,0]
				_wave(out,prefix+"bakery_%s_%d"%[kind,bar],.64,[_note(0.,.42,int(c[degrees[0]])+12,.055,"wood"),_note(.1875,.42,int(c[degrees[1]])+12,.040,"pluck")],add,make)
			var quartet:Array=[]
			for i in range(4):quartet.append(_note(.06+i*.04,2.65,int(c[i%c.size()])+12*(1 if i>1 else 0),.020,"strings"))
			_wave(out,prefix+"quartet_%d"%bar,3.,quartet,add,make)
			for tier in range(3,6):
				var notes:Array=[]
				for i in range(tier-1):notes.append(_note(i*.14,.48,pitch(mode,bar,i,1),.022,"harp"))
				_wave(out,prefix+"quality_flourish_%d_%d"%[tier,bar],.95,notes,add,make)
			var upgrades:Array=[]
			for i in range(5):upgrades.append(_note(i*.1,.75,pitch(mode,bar,i,0),.038,"harp"))
			_wave(out,prefix+"quality_upgrade_%d"%bar,1.25,upgrades,add,make)
			for kind:String in ["room","terrace","road","erase","history","concert","arrival","bakery","craft","installed","tea"]:
				var notes:Array=[]
				for i in range(3 if kind in ["road","concert","arrival"] else 2):notes.append(_note(i*.065,.58,quantize(int(c[i%c.size()])+12+(12 if kind in ["tea","terrace","installed"] else 0),mode,bar),.09,"wood" if kind in ["road","craft"] else "bell"))
				_wave(out,prefix+"edit/%s/%d"%[kind,bar],.8,notes,add,make)
	# One wave per (instrument, MIDI), shared by all palettes and biome keys.
	var timbres:Array=pitch_bank.TIMBRES.values()+pitch_bank.ERA_TIMBRES.values()
	for midi in range(48,101):
		for timbre:String in timbres:
			var key:String=pitch_bank.stream_key(timbre,midi)
			if legacy_edits.has(key) or out.streams.has(key):continue
			_wave(out,key,.42,[_note(0.,.38,midi,.10,timbre)],add,make)
	var sample:Dictionary=preload("res://scripts/audio/city_creation_pastoral_score.gd").bake(add,make,load("res://scripts/audio/city_creation_chamber_score.gd"),chords(0))
	for field:String in ["streams","notes","peaks"]:out[field].merge(sample[field])
	var core=load("res://scripts/audio/city_creation_core_scores.gd")
	var cache=load("res://scripts/audio/city_creation_core_score_cache.gd")
	for style:String in core.STYLES:
		var bundle:Dictionary=core.bundle(style,0,0,0,add,make)
		for role:String in bundle:
			var id:String=cache.key(style,0,0,0,role);var row:Dictionary=bundle[role]
			out.streams[id]=row.stream;out.notes[id]=row.notes;out.peaks[id]=row.peak
	return out

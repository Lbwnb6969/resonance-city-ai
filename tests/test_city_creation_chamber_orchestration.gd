extends SceneTree
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Dyads=preload("res://scripts/audio/city_creation_harmonic_dyads.gd")
const Chamber=preload("res://scripts/audio/city_creation_chamber_pcm.gd")
const Mix=preload("res://scripts/audio/city_creation_camera_orchestration.gd")
var checks:=0
var failures:Array[String]=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var events:Array[Dictionary]=[];var samples:=PackedFloat32Array()
	for midi:int in [62,69,66,64,62,59,62]:Dyads.emit(samples,events,func(_s,_t,_d,_m,_g,_i,_w):pass,float(events.filter(func(e):return not e.dyad).size())*3.,1.,midi,.05,"wood",0)
	var prior:Dictionary={};var contrary:=0;var oblique:=0;var consonant:=true;var breath:=true
	for event:Dictionary in events:
		if event.dyad:continue
		consonant=consonant and absi(int(event.companion_midi)-int(event.midi)) in [3,4,8,9]
		breath=breath and is_equal_approx(event.companion_delay,.022)
		if not prior.is_empty():
			var lead:=int(event.midi)-int(prior.midi);var reply:=int(event.companion_midi)-int(prior.companion_midi)
			if lead*reply<0:contrary+=1
			if lead!=0 and reply==0:oblique+=1
		prior=event
	check(contrary>0 and oblique>0 and consonant,"rendered dyad ledger has real contrary and common-tone oblique motion within thirds/sixths")
	check(breath,"first-beat companions enter22ms after the primary")
	for mode in range(10):
		var night:=Chamber.nocturne(Palette.chords(mode),mode,Palette)
		var primary:Array=night.filter(func(e):return e.timbre=="felt_nocturne")
		check(primary.size()==11,"night leaves31.25percent fewer primary attacks than16-note sparse day motif "+str(mode))
		check(night.any(func(e):return e.timbre=="cello_harmonic") and night.all(func(e):return posmod(int(e.midi),12) in Palette.SCALES[mode] or floori(float(e.start)/3.)==7),"actual modal felt and cello notes "+str(mode))
		var near:=Chamber.bed("air",Palette.chords(mode),mode,Palette);var far:=Chamber.bed("foundation",Palette.chords(mode),mode,Palette)
		check(near.any(func(e):return e.timbre=="guitar") and near.any(func(e):return e.timbre=="flute") and far.any(func(e):return e.timbre=="horn") and far.any(func(e):return e.timbre=="strings"),"actual guitar/flute/strings/horn ledger "+str(mode))
	var owner:=Music.new();owner.emergence.score={"lead_track":"wood","targets":{"wood":-12.,"foundation":-17.,"air":-60.}}
	owner.acoustic.zoom=10.;check(is_equal_approx(Mix.gain(owner,"foundation",-17.),-21.5) and Mix.gain(owner,"air",-60.)>-30.,"near camera reveals chamber and retreats string bed4.5dB")
	owner.acoustic.zoom=50.;check(Mix.gain(owner,"foundation",-17.)>-17. and Mix.gain(owner,"air",-60.)==-60.,"far camera reveals horn bed without inventing an air source")
	owner.night=true;check(Mix.nocturne(owner) and Mix.gain(owner,"wood",-12.)==-12. and Mix.gain(owner,"foundation",-17.)==-21.5,"night keeps selected source and leaves room under actual nocturne PCM")
	var pcm:=PackedFloat32Array();pcm.resize(22050)
	owner._add_note(pcm,0.,.9,62,.07,"guitar",false,false)
	var guitar:=owner._pcm_stream(pcm,false).data
	pcm.fill(0.);owner._add_note(pcm,0.,.9,62,.07,"felt_nocturne",false,false)
	var piano:=owner._pcm_stream(pcm,false).data
	pcm.fill(0.);owner._add_note(pcm,0.,.9,62,.07,"cello_harmonic",false,false)
	check(guitar!=piano and piano!=owner._pcm_stream(pcm,false).data,"actual rendered timbres have different waveforms")
	var city=preload("res://scripts/world/city_creation_state.gd").new();city.initialize()
	var saved_mix:Dictionary=owner.Phonograph.reconstruct(city,{"focus":[-16.,.8,-6.],"zoom":12.,"light_phase":2})
	check(owner.Phonograph.valid(saved_mix) and saved_mix.tracks.values().any(func(row):return str(row.key).ends_with("/nocturne")),"night phonograph reconstructs a valid actual new texture identity")
	owner.free();print("CHAMBER_ORCHESTRATION ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"contrary":contrary,"oblique":oblique,"failures":failures}));quit(0 if failures.is_empty() else 1)

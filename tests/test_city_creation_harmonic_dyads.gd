extends SceneTree
const Grid=preload("res://scripts/audio/city_creation_cue_grid.gd")
const Dyads=preload("res://scripts/audio/city_creation_harmonic_dyads.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Compare=preload("res://tests/city_creation_audio_comparison.gd")
var failures:Array=[]
var checks:=0
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var timing:=true
	for i in range(20001):
		var now:=i*.00241;var onset:=Grid.quantize_cue_onset(now)
		timing=timing and onset>=now-.000001 and onset-now<Grid.GRID+.000001 and absf(onset/Grid.GRID-round(onset/Grid.GRID))<.000001
	check(timing,"20,001 off-grid requests schedule onto the next grid without clipping the allowed wait")
	check(Grid.bar(2.999)==1 and Grid.bar(23.999)==0,"next-grid chord selection crosses both bar and cycle boundaries")
	var harmony:=true;var thirds:=0;var sixths:=0
	for mode in range(10):
		for bar in range(8):
			for raw in range(48,97):
				var snapped:=Grid.snap_to_chord_tone(raw,Palette.chords(mode)[bar])
				harmony=harmony and absi(raw-snapped)<=6 and Palette.chords(mode)[bar].any(func(n):return posmod(n-snapped,12)==0)
				var primary:=Palette.quantize(raw,mode,bar)
				for prefer:bool in [false,true]:
					var other:=Dyads.companion_midi(primary,mode,bar,prefer)
					var interval:=absi(other-primary)
					harmony=harmony and (interval in ([8,9] if prefer else [3,4]) or interval==0) and posmod(other,12) in Palette.KEY_TONES[mode]
					if interval in [3,4]:thirds+=1
					if interval in [8,9]:sixths+=1
	check(harmony and thirds>0 and sixths>0,"all ten modes use actual chord pitches and exact diatonic thirds/sixths; no accidental fourths/fifths")
	check(Dyads.suspension_midi(62,66,0)==67 and Dyads.suspension_midi(59,62,1)==64 and Dyads.suspension_midi(62,71,0)==71,"real major/minor 4-3 resolves by step above a held bass; sixths are never mislabeled")
	var events:Array[Dictionary]=[];var samples:=PackedFloat32Array()
	Dyads.emit(samples,events,func(_s,_t,_d,_m,_g,_i,_w):pass,1.5,1.4,62,.1,"wood",0)
	check(events.size()==3 and events[1].suspension and events[1].midi==67 and events[2].midi==66 and is_equal_approx(events[1].start+events[1].duration,events[2].start),"production emitter holds the melody while its fourth resolves continuously into the third")
	check(Grid.zoom_attenuation(14.)==1. and is_equal_approx(Grid.zoom_attenuation(30.),.2) and Grid.zoom_attenuation(24.)>.2,"14–30m attenuation remains smooth and audible at normal construction zoom")
	check(Grid.duck_gain_for_cue(1.,0)==1. and Grid.duck_gain_for_cue(1.,3)>.8 and Grid.duck_gain_for_cue(1.,3)<Grid.duck_gain_for_cue(1.,1),"overlapping cues get at most 1.5dB micro-ducking")
	if "--bank" in OS.get_cmdline_user_args():verify_bank()
	print("HARMONIC_DYADS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"thirds":thirds,"sixths":sixths}));quit(0 if failures.is_empty() else 1)
func verify_bank()->void:
	var bank:=Cache.load_bank_at(Cache.PORTABLE_PATH) if "--portable" in OS.get_cmdline_user_args() else Cache.load_bank()
	check(not bank.is_empty(),"production precompiled bank matches current synthesis sources")
	if bank.is_empty():return
	var notes_valid:=true;var preroll:=true;var count:=0;var dyads:=0;var suspensions:=0
	for key:String in bank.report.harmony_notes:
		var parts:=key.split("/")
		if parts.size()<2 or not parts[0].is_valid_int() or parts[1] in ["foundation","air","terrace","concert","nocturne"]:continue
		var mode:=int(parts[0]);var name:String=parts[-1]
		if name.begins_with("stair_key"):continue
		var bar:=int(name.get_slice("_",name.get_slice_count("_")-1))
		if name.begins_with("travel_stepping"):bar=int(name.get_slice("_",2))
		for event:Dictionary in bank.report.harmony_notes[key]:
			notes_valid=notes_valid and absf(event.start/Grid.GRID-round(event.start/Grid.GRID))<.00001 and Palette.chords(mode)[posmod(bar,8)].any(func(n):return posmod(int(event.midi)-n,12)==0)
			count+=1
	for group:Dictionary in [bank.edits,bank.harmony]:
		for wave:AudioStreamWAV in group.values():
			if wave.loop_mode==AudioStreamWAV.LOOP_DISABLED:preroll=preroll and is_equal_approx(float(wave.get_meta("cue_preroll",0.)),Grid.GRID)
	for notes:Array in bank.report.variation_notes.values():
		for event:Dictionary in notes:
			if event.get("dyad",false):dyads+=1
			if event.get("suspension",false):suspensions+=1
	check(notes_valid and count>1000,"actual baked life/edit note ledger uses only chord tones and sixteenth onsets across ten modes")
	check(preroll,"all actual short streams retain the static pre-roll, including a portable bank")
	check(dyads>0,"real lead PCM ledger contains emitted diatonic companion voices")
	# Suspensions also appear in the original sustained era themes.
	for notes:Array in bank.report.theme_notes.values():
		for event:Dictionary in notes:
			if event.get("suspension",false):suspensions+=1
	check(suspensions>0,"actual sustained theme PCM contains 4-3 cadence events")
	var music:=Music.new();var actual_pcm:=true
	for mode in range(10):
		for kind:String in ["cafe_flute_0","travel_bridge_0","bakery_baked_0"]:
			var key:="%d/%s"%[mode,kind];var wave:AudioStreamWAV=bank.harmony[key]
			var prefix_frames:=roundi(Grid.GRID*wave.mix_rate)
			var expected:=PackedFloat32Array();expected.resize(roundi(wave.get_length()*wave.mix_rate)-prefix_frames)
			for event:Dictionary in bank.report.harmony_notes[key]:
				music._add_harmony_note(expected,event.start,event.duration,event.midi,event.gain,event.timbre,false)
			var rendered:=music._pcm_stream(expected,false)
			var data:=PackedByteArray();data.resize(prefix_frames*2);data.append_array(rendered.data);rendered.data=data
			actual_pcm=actual_pcm and Compare.matches(rendered,wave)
	check(actual_pcm,"independent note reconstruction matches 30 actual cafe/bridge/bakery waves including pre-roll and snapped pitches")
	music.free()

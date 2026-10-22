extends SceneTree
const Cache=preload("res://scripts/audio/city_creation_bank_cache.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const Comparison=preload("res://tests/city_creation_audio_comparison.gd")
const Toys=preload("res://scripts/visual/city_creation_world_toys.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
class ClockMusic extends "res://scripts/audio/city_creation_music.gd":
	var clock:=0.
	var mode:=0
	var calls:=0
	func _playback_clock()->float:return clock
	func harmony_mode()->int:return mode
	func play_effect_at(player:AudioStreamPlayer,stream:AudioStreamWAV,_at:Vector2=Vector2.INF,_gain_weight:float=1.,_remote:bool=false)->void:
		calls+=1;player.stream=stream;player.set_meta("creation_voice_serial",calls)
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var portable:="--portable" in OS.get_cmdline_user_args()
	var bank:=Cache.load_bank_at(Cache.PORTABLE_PATH if portable else Cache.PATH)
	check(not bank.is_empty(),"the actual current original or portable bank loads")
	if bank.is_empty():quit(1);return
	var output:="res://验证记录/树水专属音色_2026-10-22/"+("portable" if portable else "pcm")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var music:=ClockMusic.new();root.add_child(music);music.set_process(false);music._harmony_streams=bank.harmony
	for i in range(4):
		var player:=AudioStreamPlayer.new();music.add_child(player);music._effects.append(player)
	var catalog:=true;var score:=true;var exact:=true;var quiet:=true;var bounded:=true;var count:=0;var exports:Array=[]
	for mode in range(10):
		for bar in range(8):
			for kind:String in ["tree","water"]:
				var key:="%d/world_%s_%d"%[mode,kind,bar]
				if not bank.harmony.has(key):catalog=false;continue
				var wave:AudioStreamWAV=bank.harmony[key];var notes:Array=bank.report.harmony_notes[key]
				score=score and notes.size()==2 and is_equal_approx(float(notes[0].start),0.) and is_equal_approx(float(notes[1].start),.1875)
				var samples:=PackedFloat32Array();samples.resize(14112)
				for note:Dictionary in notes:
					score=score and str(note.timbre)==("songbird" if kind=="tree" else "water_marimba") and posmod(int(note.midi),12) in Palette.scale(mode,bar)
					music._add_harmony_note(samples,note.start,note.duration,note.midi,note.gain,note.timbre,false)
				var expected:AudioStreamWAV=music._pcm_stream(samples,false)
				exact=exact and Comparison.matches(expected,wave)
				bounded=bounded and float(bank.report.harmony_peaks[key])>.001 and float(bank.report.harmony_peaks[key])<.18 and is_equal_approx(wave.get_length(),.64) and wave.loop_mode==AudioStreamWAV.LOOP_DISABLED
				var playback:=wave.instantiate_playback();playback.start()
				var decoded:=playback.mix_audio(1.,ceili(.64*AudioServer.get_mix_rate()));playback.stop()
				for i in range(decoded.size()):
					bounded=bounded and decoded[i].is_finite() and absf(decoded[i].x)<.2
					if i>decoded.size()-int(.05*AudioServer.get_mix_rate()):quiet=quiet and absf(decoded[i].x)<.0005
				var exported:AudioStreamWAV=wave
				if portable:
					# Capture the native QOA decoder/resampler, never the expected
					# synthesis buffer, for independent frequency/envelope analysis.
					exported=AudioStreamWAV.new();exported.format=AudioStreamWAV.FORMAT_16_BITS;exported.mix_rate=AudioServer.get_mix_rate()
					var bytes:=PackedByteArray();bytes.resize(decoded.size()*2)
					for i in range(decoded.size()):bytes.encode_s16(i*2,roundi(decoded[i].x*32767.))
					exported.data=bytes
				exported.save_to_wav(output+"/"+key.replace("/","_")+".wav")
				exports.append({"key":key,"notes":notes,"file":key.replace("/","_")+".wav"})
				count+=1
	check(catalog and count==160,"all ten keys and eight phrases contain both dedicated nature cues")
	check(score,"tree whistles and water mallets use their real dedicated timbres and current scale on the sixteenth grid")
	check(exact,"independent note resynthesis matches all actual saved cue waveforms")
	check(bounded and quiet,"every cue decodes to a bounded finite non-looping waveform and ends in silence")
	var voices:Array=[]
	for player:AudioStreamPlayer in music._effects:voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty();city.place_plant(Vector2(-26,-14),"golden_tree");city.add_water([Vector2(-18,-14)] as Array[Vector2],3.2,"pond")
	music._pluck_city=city;music.acoustic.set_view(Vector2(-23,-17),24.)
	var tree_id:=str(city.plants[0].id)
	var plan:={"house_id":"world/"+tree_id,"source_id":tree_id,"position":Vector2(-26,-14),"world_kind":"tree","stream_key":"world_tree"}
	check(Toys.play_note(music,plan) and music._effects[0].stream==bank.harmony["0/world_tree_0"],"the production nature dispatcher selects the dedicated actual tree bank stream")
	var legacy:Dictionary=plan.duplicate();legacy.erase("source_id")
	check(Toys.play_note(music,legacy),"the previous position-based world-plan API still accepts a real tree")
	music.clock=2.99;music.attention.enqueue_pluck_arpeggio(plan,music.clock)
	music.mode=5;music.clock=3.;music.attention.step(music.clock,music._attention_trigger)
	var event:Dictionary=music.get_meta("world_pluck")
	check(event.stream_key=="5/world_tree_1" and music._effects[0].stream==bank.harmony[event.stream_key],"a queued touch crossing the bar and key boundary resolves the new chord on execution")
	plan.world_kind="water";plan.stream_key="world_water";plan.source_id="pond1";plan.position=Vector2(-18,-14)
	check(Toys.play_note(music,plan) and music._effects[0].stream==bank.harmony["5/world_water_1"],"water dispatches the current modal water-marimba waveform")
	var calls:int=music.calls;music.muted=true
	check(not Toys.play_note(music,plan) and music.calls==calls,"mute suppresses the actual world-note dispatch")
	music.muted=false;music.concert_active=true
	check(not Toys.play_note(music,plan) and music.calls==calls,"landmark foreground suppresses nature plucks")
	music.concert_active=false;plan.position=Vector2(1000,1000)
	check(not Toys.play_note(music,plan) and music.calls==calls,"a point outside the acoustic scope cannot play")
	plan.position=Vector2(-26,-14);plan.world_kind="tree";plan.source_id="removed-tree"
	check(not Toys.play_note(music,plan) and music.calls==calls,"a removed or replaced queued tree cannot leave a ghost chirp")
	plan.world_kind="water"
	check(not Toys.play_note(music,plan) and music.calls==calls,"a queued pond touch cannot sound after its source is dry land")
	var current:Array=[]
	for player:AudioStreamPlayer in music._effects:current.append(player.get_instance_id())
	check(current==voices and current.size()==4 and music.attention.report().arp_pending==0,"dispatch keeps the original four short players and drains the existing queue")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"cues":count,"portable":portable,"exports":exports}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));result.erase("exports")
	print("WORLD_TOUCH_AUDIO ",JSON.stringify(result));music.free();quit(0 if failures.is_empty() else 1)

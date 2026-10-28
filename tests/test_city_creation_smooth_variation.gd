extends SceneTree
const Music=preload("res://scripts/audio/city_creation_music.gd")
const Smooth=preload("res://scripts/audio/city_creation_smooth_variation.gd")
const Walk=preload("res://scripts/audio/city_creation_construction_walk.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
class ClockMusic extends Music:
	var test_clock:=4.5
	func _playback_clock()->float:return test_clock
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func wave()->AudioStreamWAV:
	var result:=AudioStreamWAV.new();result.format=AudioStreamWAV.FORMAT_16_BITS;result.mix_rate=22050
	var bytes:=PackedByteArray();bytes.resize(1058400);result.data=bytes;result.loop_mode=AudioStreamWAV.LOOP_FORWARD;result.loop_end=529200
	return result
func run()->void:
	var owner:=ClockMusic.new();root.add_child(owner);owner.set_process(false)
	var a:=wave();var b:=wave()
	for key:String in Music.STEMS:
		var player:=AudioStreamPlayer.new();owner.add_child(player);player.stream=a;player.volume_db=-12.;player.play(4.5);owner._players[key]=player
		if key in owner.HarmonicEmergence.LEADS:
			owner._variation_streams[key+"/0"]=a;owner._variation_streams[key+"/1"]=b;owner._variation_active[key]=key+"/0"
		elif key!="concert":owner._harmony_streams["0/"+key]=a;owner._variation_active[key]="0/"+key
	for kind:String in ["room","terrace","road","erase","history","concert","arrival","bakery","craft","installed","tea"]:
		for bar in range(8):owner._harmony_streams["0/edit/%s/%d"%[kind,bar]]=a
	owner.emergence.score={"variant":1,"harmony_mode":0}
	preload("res://scripts/audio/city_creation_chamber_roles.gd").prepare(owner)
	owner.set_meta("chamber_roles",{}) # This fixture isolates stream transitions from source election.
	Smooth.update(owner)
	for key:String in owner.HarmonicEmergence.LEADS:check(owner._players[key].stream==a and owner._players[key].volume_db==-12.,"pending variant leaves actual stream and gain untouched: "+key)
	var transition:Node=owner.get_node("StreamTransition");transition.set_process(false)
	for ignored in range(owner.HarmonicEmergence.LEADS.size()+3):
		transition._process(0.)
		if transition.worker!=null:
			while transition.worker.is_alive():await process_frame
			transition._process(0.)
	owner.test_clock=6.2;transition._process(0.);Smooth.update(owner)
	for key:String in owner.HarmonicEmergence.LEADS:check(owner._players[key].stream==b and owner._players[key].volume_db==-12.,"prepared swap completes with unchanged player gain: "+key)
	owner.emergence.score.variant=0;owner.test_clock=25.;owner._players.wood.volume_db=-50.;Smooth.update(owner)
	check(owner._players.wood.stream==a and owner._players.wood_weave.stream==b,"resting voice adopts while sounding neighbours wait")
	var city:=State.new();city.initialize();owner._pluck_city=city
	var steps:Array=[]
	for i in range(7):steps.append(Walk.advance(owner,i*200000))
	check(steps==[0,1,2,3,4,5,0] and Walk.advance(owner,4000000)==0,"rapid edits walk six notes; a 1.8-second pause resets the phrase")
	for mode in range(10):
		owner._biome_mode=mode
		for bar in range(8):
			owner.test_clock=bar*3.+.3;var pitches:Array=[]
			for step in range(6):pitches.append(Walk.plan(owner,{"timbre":"piano"},step).midi)
			var ordered:=true
			for i in range(5):ordered=ordered and pitches[i+1]>pitches[i]
			var chord:Array=owner.Palette.chords(mode)[bar]
			check(ordered and pitches.all(func(n):return owner.Palette.Grid.snap_to_chord_tone(n,chord)==n),"six ascending cached chord tones in mode/bar "+str([mode,bar]))
	city.era_unlocks.assign(city.Eras.IDS)
	for era:String in city.Eras.IDS:
		check(city.set_house_era("h1",era).ok,"actual era edit for construction timbre "+era)
		owner._biome_mode=0
		var base:=owner.PitchPluck.plan(city,"h1",owner.test_clock,0)
		var expected:String={"pastoral":"pluck","renaissance":"harpsichord","clockwork":"piano","modern_eco":"felt_piano"}[era]
		check(Walk.plan(owner,base,3).timbre==expected,"construction preserves actual authored era instrument "+era)
	var bus_before:=AudioServer.bus_count
	var effects:Array=[]
	for i in range(4):var player:=AudioStreamPlayer.new();owner.add_child(player);effects.append(player)
	var themes:Array=[]
	for key:String in Music.STEMS:
		if key!="concert":themes.append(owner._players[key])
	owner.spatial.setup(owner,themes,owner._players.concert,effects)
	var reverbs:=0
	for name:StringName in owner.spatial.report().bus_names:
		var bus:=AudioServer.get_bus_index(name)
		for i in range(AudioServer.get_bus_effect_count(bus)):
			var effect:=AudioServer.get_bus_effect(bus,i)
			if effect is AudioEffectReverb:
				reverbs+=1;check(is_equal_approx(effect.wet,.13) and is_equal_approx(effect.room_size,.36) and is_equal_approx(effect.damping,.74),"warm reverb uses the actual shared bus effect")
	check(reverbs==2 and AudioServer.bus_count-bus_before==6,"theme/concert reverb adds no voices or buses")
	owner.spatial.close();check(AudioServer.bus_count==bus_before,"closing restores all foreign buses")
	owner._pluck_city=null;city._undo.clear();city._redo.clear()
	owner.queue_free();await process_frame;await create_timer(.15).timeout
	print("SMOOTH_VARIATION ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

extends SceneTree
const Score=preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Mixer=preload("res://scripts/audio/city_creation_attention_mixer.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var acoustic:=Acoustic.new();acoustic.set_view(Vector2.ZERO,18.)
	for era:String in Score.ERA_TRACKS:
		for count in [1,2]:
			var houses:Dictionary={}
			for i in range(count):houses[str(i)]={"position":Vector2(i*2.,0),"cluster_size":count,"era_theme":era}
			acoustic.evaluate(houses,[])
			var score:=Score.evaluate(houses,acoustic,[],0,false)
			check(score.lead_track==Score.ERA_TRACKS[era] and score.source_id=="0","nearest solo uses actual era: "+era+str(count))
			check(score.targets[score.lead_track]==-14.5 and score.targets.foundation==-17.,"one/two homes sing with warm foundation")
	acoustic.evaluate({},[])
	var empty:=Score.evaluate({},acoustic,[],0,false)
	check(empty.lead_track.is_empty() and empty.targets.foundation==-60.,"empty world has no invented music source")
	var far:Dictionary={"far":{"position":Vector2(500,500),"cluster_size":1}}
	acoustic.evaluate(far,[])
	check(Score.evaluate(far,acoustic,[],0,false).lead_track.is_empty(),"offscreen singleton remains silent")
	var mixer:=Mixer.new();mixer.notify_sculpt_action(0.)
	mixer.evaluate_mode(18.,false,false,1.,0.)
	check(absf(mixer.backing_duck_db+1.2)<.01,"construction ducks only 1.2dB")
	check(mixer.evaluate_mode(18.,false,false,1.,.61)==Mixer.Mode.STROLLING,"release returns after .6 seconds")
	var city=preload("res://scripts/world/city_creation_state.gd").new()
	check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"real bell-keep fixture restores")
	var catalog:=preload("res://scripts/audio/city_creation_music_catalog.gd").prepare(city)
	check(catalog.houses.h29.tower_positions.has(Vector2(-31,0)),"dedicated bell keep retains a physical sound origin when generic tower crowns are suppressed")
	print("MUSIC_EXPERIENCE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)

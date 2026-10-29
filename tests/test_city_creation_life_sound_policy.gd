extends SceneTree
const Mixer=preload("res://scripts/audio/city_creation_attention_mixer.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var mix:=Mixer.new();mix.evaluate_mode(9.,false,false,1.,10.)
	check(mix.enqueue_life_sparkle({"life_actor":true},10.),"ordinary close view admits one transient life candidate")
	check(not mix.enqueue_life_sparkle({"life_actor":true},10.) and mix.report().arp_pending==1,"contacts coalesce into one candidate")
	check(mix.enqueue_pluck_arpeggio({"house_id":"h1","stream_key":"note"},10.) and mix.report().arp_pending==1 and not mix._arp_queue[0].has("life_actor"),"player input discards ambient candidate and keeps original plan format")
	check(not mix.enqueue_life_sparkle({"life_actor":true},10.),"ambient never displaces player queue")
	mix.clear();mix.evaluate_mode(9.,false,false,1.,12.)
	check(mix.enqueue_life_sparkle({"life_actor":true},12.),"fresh candidate")
	var heard:Array=[]
	mix.step(12.+.002,func(category,payload):heard.append([category,payload]);return true)
	check(heard.size()==1 and heard[0][0]=="pluck_arp" and heard[0][1].has("life_actor"),"life contact uses same grid dispatch")
	mix.clear();mix.enqueue_life_sparkle({"life_actor":true},13.);mix.notify_sculpt_action(13.);mix.evaluate_mode(9.,false,false,1.,13.)
	heard.clear();mix.step(13.125+.002,func(category,payload):heard.append(category);return true)
	check(heard.is_empty() and mix.report().arp_pending==0,"editing retires queued ambience before dispatch")
	mix.clear();mix.evaluate_mode(9.,false,false,1.,20.)
	for i in range(8):mix.enqueue_pluck_arpeggio({"house_id":"h%d"%i,"stream_key":"note%d"%i},20.)
	check(mix.report().arp_pending==5 and not mix.enqueue_life_sparkle({"life_actor":true},20.),"original five-note capacity and foreground queue preserved")
	print("LIFE_SOUND_POLICY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

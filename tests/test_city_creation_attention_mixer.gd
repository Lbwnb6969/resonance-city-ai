extends SceneTree
const Mixer=preload("res://scripts/audio/city_creation_attention_mixer.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
var heard:Array=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _hear(category:String,payload:Dictionary)->bool:
	heard.append([category,payload.duplicate()]);return true
func _run()->void:
	var mix:=Mixer.new()
	_check(mix.evaluate_mode(25.,false,false,1.,0.)==Mixer.Mode.MANAGING,"midrange idle is managing")
	_check(mix.evaluate_mode(16.,false,false,1.,0.)==Mixer.Mode.STROLLING,"close view is strolling")
	_check(mix.evaluate_mode(50.,false,false,1.,0.)==Mixer.Mode.SYMPHONY,"wide view is symphony")
	mix.notify_sculpt_action(1.)
	_check(mix.evaluate_mode(50.,false,false,1.,1.)==Mixer.Mode.SCULPTING and absf(mix.backing_duck_db+1.2)<.02,"actual editing takes priority over wide camera and ducks backing")
	_check(not mix.allows("cafe_flute") and not mix.allows("district_reply") and mix.allows("pluck_arp"),"sculpting leaves the foreground to the player's notes")
	_check(mix.evaluate_mode(16.,true,true,1.,1.)==Mixer.Mode.SYMPHONY,"active concert owns the attention mode")
	mix.dragging=true;mix.evaluate_mode(25.,false,false,.1,9.);mix.dragging=false
	_check(mix.evaluate_mode(25.,false,false,.1,9.5)==Mixer.Mode.SCULPTING,"held road brush preserves the release grace period")
	_check(mix.evaluate_mode(25.,false,false,1.,11.)==Mixer.Mode.MANAGING,"editing releases attention without a wall-clock timer")
	mix.clear();heard.clear()
	for i in range(16):mix.step(i*.1875+.002,_hear);mix.step(i*.1875+.003,_hear)
	var slots:Array=[]
	for row:Array in heard:slots.append([row[0],row[1].phrase])
	_check(slots==[["tower_bell",0],["waterwheel",0],["cafe_flute",0],["bakery_cue",0],["district_reply",0],["tram_chime",0],["travel_crossing",0],["quality_flourish",0]],"every real event family has one distinct grid slot, with no duplicate frame dispatch")
	mix.clear();heard.clear()
	for category:String in ["cafe_flute","bakery_cue","district_reply","travel_crossing"]:
		_check(mix.schedule_event(category,{"source_id":category},0.),"simultaneous event admitted: "+category)
	var played:Array=[]
	for i in range(16):
		mix.step(i*.1875+.001,func(category:String,payload:Dictionary)->bool:
			if not payload.get("periodic",false):played.append([category,i])
			return true)
	_check(played==[["cafe_flute",4],["bakery_cue",6],["district_reply",8],["travel_crossing",12]],"simultaneous tea, bakery, reply and crossing play at 4/6/8/12 with zero loss")
	_check(mix.report().events_pending==0 and int(mix.stats.events)==4,"all four queued rewards are dispatched exactly once")
	mix.clear();heard.clear()
	for i in range(8):mix.enqueue_pluck_arpeggio({"house_id":"h%d"%i,"stream_key":"note%d"%i},20.)
	_check(mix.report().arp_pending==5 and int(mix.stats.superseded)==3,"fast drag keeps the latest five notes without an unbounded backlog")
	mix.evaluate_mode(25.,false,false,.1,20.)
	for i in range(5):mix.step((107+i)*.1875+.001,_hear)
	var ids:Array=[]
	for row:Array in heard:
		if row[0]=="pluck_arp":ids.append(row[1].house_id)
	_check(ids==["h3","h4","h5","h6","h7"],"burst notes play in order on five different sixteenth-note ticks")
	mix.clear();heard.clear();mix.step(30.,_hear);heard.clear();mix.step(33.14,_hear)
	_check(heard.is_empty(),"a late frame inserts a rest and never replays missed events")
	mix.clear();mix.evaluate_mode(25.,false,false,1.,40.)
	mix.schedule_event("bakery_cue",{"source_id":"oven","counter":1},40.)
	mix.schedule_event("bakery_cue",{"source_id":"oven","counter":5},40.01)
	_check(mix.report().events_pending==1,"same-source oven bursts merge into one candidate")
	mix.clear();_check(mix.report().events_pending==0 and mix.report().arp_pending==0,"mute, town switch and concert can clear all transient notes")
	# Dispatch-time identity is authoritative: edits while a note is queued
	# must sound the new height, and removed houses must remain silent.
	var city:=State.new();city.initialize();var music:=Music.new();music.update_city(city)
	_check(not music._play_queued_house({"house_id":"deleted"}),"queued deleted household cannot produce a ghost note")
	music.free()
	print("ATTENTION_MIXER ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

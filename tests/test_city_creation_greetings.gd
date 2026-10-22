extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();city.initialize()
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	for i:int in range(20):life._process(.05)
	var before:=city.life_progress.duplicate();var count:int=life.greet_house("h1")
	check(count>0 and life.greetings.active.size()==count,"nearby walkers respond to a real house touch")
	var anchors:Dictionary={}
	for id:String in life.greetings.active:
		var row:Dictionary=life.greetings.active[id]
		anchors[id]=row.resident.node.position
		check(Vector2(anchors[id].x,anchors[id].z).distance_to(Vector2(city.houses[0].origin[0],city.houses[0].origin[1]))<=8.,"only neighbors within eight metres respond")
		check(row.note.visible and row.note.mesh!=null,"shared golden note geometry appears")
		var direction:=Vector2(city.houses[0].origin[0]-anchors[id].x,city.houses[0].origin[1]-anchors[id].z)
		check(absf(angle_difference(row.resident.node.rotation.y,atan2(direction.x,direction.y)))<.00001,"responding walker faces the actual touched house")
	var snapshot:=city.snapshot()
	life._process(.2)
	for id:String in anchors:
		check(life.greetings.active[id].resident.node.position==anchors[id],"greeting pauses logical travel instead of advancing rewards")
		var row:Dictionary=life.greetings.active[id]
		check(row.arm.visible and absf(row.arm.rotation.z)>1.5 and row.body.position.y>float(row.y),"real arm raises and body hops during the response")
	check(city.life_progress==before,"greeting issues no purchase or performance credit")
	check(city.set_journey_checkpoint(life.checkpoint()).ok and State.new().restore(city.snapshot()).ok,"saving during the response uses real travel state")
	life._process(.41)
	check(life.greetings.active.is_empty(),"response ends after six tenths on the life clock")
	var hidden:=true
	for resident:Dictionary in life.residents:
		var arm:Node3D=resident.node.get_child(0).get_node_or_null("GreetingArm")
		if arm!=null:hidden=hidden and not arm.visible and not resident.node.get_node("GreetingNote").visible
	check(hidden,"temporary arms and notes disappear after response without adding a saved pose")
	check(life.residents.filter(func(r):return r.wait>0.).all(func(r):return not r.has("greeting_until")),"waiting neighbors are not treated as walking responders")
	var walking:=false
	for i:int in range(20):
		life._process(.05)
		for resident:Dictionary in life.residents:
			if anchors.has(resident.home_id) and resident.node.position.distance_to(anchors[resident.home_id])>.01:walking=true
	check(walking,"ordinary travel resumes without route replacement")
	var traveler:Dictionary=life.residents[0]
	# Ticket ownership is the production tram protocol; the response must
	# never pull a passenger out of that protocol or pause station boarding.
	life.tram.tickets[traveler.home_id]={"state":"approach","wait":.1}
	life.greet_house("h1")
	check(not life.greetings.active.has(traveler.home_id),"a resident waiting for their tram keeps the boarding state")
	life.tram.tickets[traveler.home_id]={"state":"onboard"}
	life.greet_house("h1")
	check(not life.greetings.active.has(traveler.home_id),"an onboard passenger does not appear as a roadside responder")
	life.tram.tickets.erase(traveler.home_id)
	print("GREETINGS ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty(),"responding":count}))
	life.free();quit(0 if failures.is_empty() else 1)

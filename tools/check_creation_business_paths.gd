extends SceneTree
## Focused real planner/status checks. The route fixture explicitly controls
## street reachability; state reservation and cafe transitions use production code.
const State = preload("res://scripts/world/city_creation_state.gd")
const Workshop = preload("res://scripts/world/city_creation_workshop.gd")
const Cafe = preload("res://scripts/world/city_creation_cafe.gd")
const Ledger = preload("res://scripts/ui/city_creation_ledger.gd")
var failures: Array[String] = []

class StreetLife extends Node3D:
	var state: RefCounted
	var connected_houses := {"h1":"p1","h2":"p2","h3":"p3","h4":"p4","h5":"p5"}
	var positions := {"p1":Vector3(-20,0,10),"p2":Vector3(-19,0,10),"p3":Vector3(15,0,10),"p4":Vector3(14,0,10),"p5":Vector3(17,0,10)}
	var _roles := {"h1":"workshop","h2":"residential","h3":"venue","h4":"residential","h5":"garden_cafe"}
	var residents: Array[Dictionary] = []
	var last_revision := 1
	var blocked := false
	func _route(from: String, to: String) -> Array[Vector3]:
		if blocked: return []
		return [positions[from], positions[to]]

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, label: String) -> void:
	if not value:
		failures.append(label)
		push_error(label)

func _run() -> void:
	var state := State.new()
	state.initialize()
	state.houses.clear()
	var life := StreetLife.new()
	life.state = state
	for id: String in life._roles:
		var at: Vector3 = life.positions[life.connected_houses[id]]
		state.houses.append({"id":id,"role":life._roles[id],"origin":[at.x,at.z],"cells":[{"id":"c"+id.substr(1),"x":0,"z":0,"kind":"room","level":0}]})
	state.house_improvements = {"h2":3,"h3":3}
	state.venue_commissions = {"h3":{"requested":1,"delivered":0,"used":0}}
	var workshop := Workshop.new(life)
	var worker := {"workshop_id":"h1","home_id":"h2","deliveries":0}
	var order: Dictionary = workshop._recipient_order(worker)
	_check(str(order.target)=="h3" and str(order.kind)=="festival", "festival order is selected across 35m of connected street")
	state.workshop_supply.h1 = {"stock":1,"produced":1,"delivered":0,"transit":{}}
	_check(state.reserve_craft("h1","h2","h3","festival"), "real state accepts the reachable distant festival reservation")
	_check(bool(state.workshop_status("h1").transit.get("kind","")=="festival"), "reservation preserves the festival cargo identity")
	state.return_craft("h1")
	life.blocked = true
	life.last_revision += 1
	_check(str(workshop._recipient_order(worker).target).is_empty(), "a distant order without a real street route is not dispatched")
	life.blocked = false
	life.last_revision += 1
	state.venue_commissions.clear()
	_check(str(workshop._recipient_order(worker).target).is_empty(), "ordinary improvements outside 22m stay outside the local delivery range")
	state.house_improvements.h2 = 0
	_check(str(workshop._recipient_order(worker).target)=="h2", "an ordinary reachable improvement inside 22m remains eligible")
	var cafe := Cafe.new(life)
	cafe.layouts.h5 = {"center":Vector2(17,12),"seats":[Vector2(17,11),Vector2(18,12)]}
	life.connected_houses.erase("h5")
	_check(str(cafe.status("h5").phase)=="disconnected", "a table with no connected entrance does not ask the player to buy bread")
	cafe.layouts.h5 = {}
	_check(str(cafe.status("h5").phase)=="disconnected", "missing entrance takes priority over furniture clearance")
	life.connected_houses.h5 = "p5"
	_check(str(cafe.status("h5").phase)=="no_space", "connected entrance with no furniture plan explains the missing space")
	cafe.layouts.h5 = {"center":Vector2(17,12),"seats":[Vector2(17,11),Vector2(18,12)]}
	state.cafe_credits.h2 = {"earned":1,"spent":0}
	state.cafe_credits.h4 = {"earned":1,"spent":0}
	life.residents.assign([
		{"home_id":"h2","cafe_visit":{"phase":"seated","seat":0}},
		{"home_id":"h4","cafe_visit":{"phase":"seated","seat":1}}])
	cafe.groups.h5 = {"phase":"waiting","participants":["h2"],"elapsed":0.0}
	_check(str(cafe.status("h5").phase)=="waitsecond", "one genuinely invited seated guest asks for the second guest")
	cafe.groups.h5.participants.append("h4")
	cafe.tick(0.0)
	_check(str(cafe.status("h5").phase)=="tea", "two seated guests still enter the real tea transition")
	var supplied := {"worker_phase":"baking","open":true,"stock":5,"batch_size":2,"capacity":6}
	_check(Ledger.business_activity("bakery",supplied).contains("一整炉"), "ledger explains partial free shelf space cannot fit a full boosted batch")
	supplied.worker_phase = "paused"
	_check(Ledger.business_activity("bakery",supplied).contains("步行路线已中断"), "paused worker explanation takes priority over a nearly full shelf")
	supplied.worker_phase = "unassigned"
	_check(Ledger.business_activity("bakery",supplied).contains("未分配工作"), "ledger explains actual missing workforce instead of inferring reachability from the door")
	_check(Ledger.cafe_activity({"phase":"disconnected"}).contains("接路") and Ledger.cafe_activity({"phase":"waitsecond"}).contains("第二位"), "ledger presents actionable cafe states")
	life.free()
	print(JSON.stringify({"check":"creation_business_paths","passed":failures.is_empty(),"failures":failures}))
	quit(0 if failures.is_empty() else 1)

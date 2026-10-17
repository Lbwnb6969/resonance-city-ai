extends SceneTree

const ChangeSet := preload("res://scripts/world/city_creation_change_set.gd")
const State := preload("res://scripts/world/city_creation_state.gd")
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	call_deferred("_run")

func _check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label)

func _state() -> RefCounted:
	var state := State.new()
	state.initialize()
	state.revision = 1
	state.houses = [{"id":"h1","origin":[0.0,0.0],"cells":[]}]
	state.roads = [{"id":"r1","points":[[-2.0,0.0],[2.0,0.0]],"width":1.2}]
	state.waters = []
	state.terrain_strokes = [{"points":[[0.0,0.0]],"radius":1.0,"mode":"raise"}]
	state.plants = [{"id":"p1","position":[1.0,1.0]}]
	return state

func _run() -> void:
	var before := _state()
	var first := ChangeSet.snapshot(before)
	var initial := ChangeSet.diff({},first)
	_check(initial.labels.size()==5,"initial snapshot marks every simulation domain")
	_check(initial.bounds.size()==4,"initial snapshot emits finite support bounds")
	var same := ChangeSet.diff(first,ChangeSet.snapshot(before))
	_check(same.labels.is_empty() and same.bounds.is_empty(),"unchanged snapshot emits no invalidation")
	var after := _state()
	after.revision = 2
	after.roads[0].points[1][1] = 1.0
	after.houses[0].origin[0] = 2.0
	after.plants[0].position[0] = 3.0
	var changed := ChangeSet.diff(first,ChangeSet.snapshot(after))
	_check(changed.labels==["houses","roads","plants"],"changed labels stay deterministic and exclude untouched domains")
	_check(changed.bounds.size()==3,"changed rows provide old/new support bounds")
	_check(changed.previous_revision==1 and changed.revision==2,"revision fence is carried with labels")
	if failures.is_empty(): print("CITY_CREATION_CHANGE_SET PASS: %d checks" % checks)
	else:
		for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)

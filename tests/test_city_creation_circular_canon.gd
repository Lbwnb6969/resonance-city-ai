extends SceneTree
const Canon=preload("res://scripts/audio/city_creation_circular_canon.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_canon_fixture.gd")
var checks:=0
var failures: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var fixture:=Fixture.build();var city: RefCounted=fixture.city;var before: Dictionary=city.snapshot()
	var groups:=Canon.derive(city)
	_check(groups.size()==2 and city.snapshot()==before,"actual five-house courtyard and plaza derive two rings without authoring state or transport cursors")
	var court: Dictionary={};var plaza: Dictionary={}
	for group: Dictionary in groups:
		if group.kind=="courtyard":court=group
		else:plaza=group
	if court.is_empty() or plaza.is_empty():quit(1);return
	var ids: Array=fixture.court_ids
	_check(court.members==[ids[1],ids[4],ids[2],ids[3],ids[0]] and court.center.distance_to(Fixture.COURT)<.001,"courtyard houses are ordered clockwise from world north using actual room centroids")
	_check(plaza.members==fixture.round_ids and plaza.center==Fixture.ROUND,"authored plaza uses the same angular ordering and ignores remote seed houses")
	var loaded:=State.new()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(before))).ok and Canon.derive(loaded)==groups,"full eighty-metre work restores ring identity and member order through JSON")
	var reordered: Dictionary=before.duplicate(true);reordered.houses.reverse()
	for house: Dictionary in reordered.houses:house.cells.reverse()
	_check(loaded.restore(reordered).ok,"valid work permits a different house and room storage order")
	var reordered_groups:=Canon.derive(loaded)
	print("REORDERED ",JSON.stringify(reordered_groups))
	var stable:=reordered_groups.size()==groups.size()
	for i in range(mini(groups.size(),reordered_groups.size())):stable=stable and groups[i].id==reordered_groups[i].id and groups[i].members==reordered_groups[i].members and groups[i].center.distance_to(reordered_groups[i].center)<.000001
	_check(stable,"ring ordering and identity do not depend on array or dictionary traversal order")
	for group: Dictionary in groups:
		var cycle: Array[String]=[]
		for beat in range(5):cycle.append(Canon.slot(group,beat*.75).house_id)
		_check(cycle==group.members,"five houses occupy five consecutive beats in "+str(group.kind))
		_check(Canon.slot(group,3.).house_id==group.members[4] and Canon.slot(group,3.75).house_id==group.members[0],"three-second bar boundary does not truncate a five-beat cycle in "+str(group.kind))
		_check(Canon.slot(group,24.).slot==2 and Canon.slot(group,24.75).slot==3,"twenty-four-second bank wrap retains absolute beat thirty-two in "+str(group.kind))
		_check(Canon.slot(group,74.25).slot==4,"skipped frames derive the current turn without replaying missed notes in "+str(group.kind))
	var remove_id: String=fixture.court_ids[1]
	_check(city.remove_house(remove_id).ok and Canon.derive(city).size()==1,"opening the actual courtyard withdraws its ring immediately")
	_check(city.undo().ok and Canon.derive(city)==groups,"normal construction undo restores the exact courtyard ring")
	var marker: Dictionary=city.Roundabouts.all(city.roads)[0]
	_check(city.remove_roundabout(marker.center).ok and Canon.derive(city).size()==1,"removing authored plaza intent removes its ring")
	_check(city.undo().ok and Canon.derive(city)==groups,"plaza undo restores stable members and ordering")
	for id: String in fixture.round_ids.slice(2):city.remove_house(id)
	_check(Canon.derive(city).size()==1,"a two-house fragment around a plaza cannot masquerade as a ring")
	print("CIRCULAR_CANON ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"groups":groups}));quit(0 if failures.is_empty() else 1)

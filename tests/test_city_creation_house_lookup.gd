extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _compare(city:RefCounted,ids:Array)->bool:
	for id:String in ids:
		var expected:=-1
		for i in range(city.houses.size()):
			if city.houses[i].id==id:expected=i;break
		if city._house_index(id)!=expected:return false
	return true
func _run()->void:
	var city:=Fixture.build(300,true);var original:Dictionary=city.snapshot();var ids:Array=["h0","h999999"]
	for house:Dictionary in city.houses:ids.append(str(house.id))
	_check(_compare(city,ids),"all three hundred real house IDs and absent IDs match original linear lookup")
	_check(city.snapshot()==original,"building the lookup never changes authored or saved city values")
	city.houses.reverse()
	_check(_compare(city,ids),"direct same-size reverse without a revision increment returns actual current indices")
	city.houses.remove_at(12);city.houses.remove_at(25)
	_check(_compare(city,ids),"direct removals shift indices and invalidate cached hits by actual array identity")
	city.houses.clear()
	_check(_compare(city,ids),"clearing the actual array cannot expose removed house IDs")
	_check(city.restore(original).ok and _compare(city,ids),"full production restore replaces cached indices correctly")
	var before:Dictionary=city.snapshot()
	_check(city.set_house_palette("h2",(int(city.houses[city._house_index("h2")].palette)+1)%4).ok,"actual indexed house edit succeeds")
	_check(city.undo().ok and city.snapshot().houses==before.houses and _compare(city,ids),"undo preserves original house values and exact current indices")
	_check(city.redo().ok and _compare(city,ids),"redo preserves exact current indices")
	print("HOUSE_LOOKUP ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const Plan=preload("res://scripts/world/city_creation_skybridge_plan.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=Fixture.architecture();var house:Dictionary=city.houses[0];var other:Dictionary=city.houses[1]
	var before:Dictionary=city.snapshot();var bridges:=Plan.for_house(city,city.houses[0])
	_check(bridges.size()==1 and bridges[0].to_house=="h2" and bridges[0].level==2 and is_equal_approx(bridges[0].floor_y,3.55) and city.snapshot()==before,"read-only plan chooses highest shared third floor and one bridge per real house pair")
	_check(Plan.for_house(city,other).is_empty() and bridges[0].from_cell==house.cells[2].id and bridges[0].to_cell==other.cells[2].id,"bridge belongs to one stable house and retains original cells on both ends")
	var signature:=Plan.adjacency_signature(city,house)
	city.set_house_era("h2","pastoral")
	_check(Plan.for_house(city,city.houses[0]).is_empty() and Plan.adjacency_signature(city,house)!=signature and city.undo().ok and Plan.for_house(city,city.houses[0])==bridges,"neighbor era edit invalidates bridge and actual undo restores identical derived geometry")
	var blocker:Dictionary=city.add_house(Vector2(-12,-2))
	city.add_cell(blocker.house_id,0,0,1)
	_check(Plan.for_house(city,city.houses[0]).is_empty(),"actual intervening two-story roof blocks a higher glass span instead of being cut through")
	city.remove_house(blocker.house_id)
	_check(Plan.for_house(city,city.houses[0])==bridges,"whole intervening building removal restores clear skybridge")
	city.remove_cell("h1",str(city.houses[0].cells[2].id));city.remove_cell("h2",str(city.houses[1].cells[2].id))
	var prior_road_signature:=Plan.adjacency_signature(city,city.houses[0])
	var points:Array[Vector2]=[Vector2(-12,-10),Vector2(-12,6)];var road:Dictionary=city.add_road(points,"tram")
	_check(road.ok and Plan.for_house(city,city.houses[0]).is_empty() and Plan.adjacency_signature(city,city.houses[0])!=prior_road_signature,"low second-floor span rejects tram headroom conflict and new street invalidates actual geometry input")
	city.add_cell("h1",0,0,2);city.add_cell("h2",0,0,2)
	_check(Plan.for_house(city,city.houses[0]).size()==1,"higher third-floor span clears the same actual rail street")
	var fresh:=State.new();var saved:Dictionary=city.snapshot()
	_check(fresh.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and Plan.for_house(fresh,fresh.houses[0])==Plan.for_house(city,city.houses[0]),"skybridge derives after restore from original houses roads eras without authored bridge IDs")
	print("SKYBRIDGE ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

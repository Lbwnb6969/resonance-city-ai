extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Junctions=preload("res://scripts/world/city_creation_junctions.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func compare(town:Node3D,label:String)->void:
	var city:RefCounted=town.state
	var fresh:=Junctions.new();fresh.prepare(city)
	var actual:RefCounted=town.road_junctions()
	var same:=true
	for road:Dictionary in city.roads:
		same=same and actual.signature(str(road.id))==fresh.signature(str(road.id)) and actual.additions(str(road.id))==fresh.additions(str(road.id))
	check(same,"render junctions equal independent cold compilation after "+label)
	var doors:=true
	for house:Dictionary in city.houses:
		doors=doors and town.house_entrances(str(house.id))==city.house_entrances(str(house.id))
	check(doors,"render entrance records equal public authoring query after "+label)
func run()->void:
	var city:=State.new();city.initialize()
	var original:Dictionary=city.houses[0].duplicate(true)
	city.houses.clear();city.roads.clear();city.plants.clear()
	original.origin=[-14.,-2.];original.cells=[original.cells[0]];city.houses.append(original);city.revision+=1
	var town:=Renderer.new();town.state=city
	compare(town,"initial unserved house")
	var before:Array=town.house_entrances("h1").duplicate(true)
	var points:Array[Vector2]=[Vector2(-14,-5),Vector2(-14,-2.9)]
	check(city.add_road(points).ok,"public terminal road edit")
	compare(town,"new north door")
	var after:Array=town.house_entrances("h1").duplicate(true)
	check(after.size()==2 and after!=before,"same renderer observes new real north door")
	var road_id:=str(city.roads[-1].id)
	check(city.add_cell("h1",1,0,0,"room").ok,"public ground module edit")
	compare(town,"ground module")
	check(city.undo().ok,"undo ground module")
	compare(town,"module undo")
	check(city.remove_road(road_id).ok,"public road deletion")
	compare(town,"road deletion")
	check(town.house_entrances("h1")==before,"deleted terminal removes exactly its derived door")
	check(city.undo().ok,"undo terminal deletion")
	compare(town,"road undo")
	check(town.house_entrances("h1")==after,"undo restores identical real entrance provenance")
	check(city.redo().ok,"redo terminal deletion")
	compare(town,"road redo")
	var other:=State.new();check(other.restore(city.snapshot()).ok,"restore independent city")
	points=[Vector2(-16,-2),Vector2(-14.9,-2)]
	check(other.add_road(points).ok,"second city has a west terminal")
	other.revision=city.revision;town.state=other
	compare(town,"different city with identical numeric revision")
	check(town.house_entrances("h1")!=before,"city identity prevents cross-city entrance reuse")
	town.state=city;compare(town,"switch back to original city")
	var detached:Array=city.house_entrances("h1");detached[0].at=Vector2(123,456)
	check(city.house_entrances("h1")==before and town.house_entrances("h1")==before,"public detached-copy contract and render records remain intact")
	Renderer.BudgetRebuild.new()._dispose_context(town)
	print("ROAD_VIEWS ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)

extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_era_street_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func cold(city:RefCounted,road:Dictionary)->Dictionary:
	var town:=Renderer.new();town.state=city;town.record_only=true
	var result:Dictionary={"walk":town.promenade.prepare(town,road).duplicate(true),"era":town.era_streets.prepare(town,road).duplicate(true)}
	Renderer.BudgetRebuild.new()._dispose_context(town)
	return result
func run()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city
	var road:Dictionary=city.roads.filter(func(row):return row.id==fixture.street.road_id)[0]
	city.road_junctions()
	var town:=Renderer.new();town.state=city;town.record_only=true
	var walk:Array=town.promenade.prepare(town,road)
	var era:Dictionary=town.era_streets.prepare(town,road)
	check(not walk.is_empty() and era.gardens.size()==6,"real avenue has lamps flowers trees and six era-boundary gardens")
	var geometry:int=town.promenade._clearance_signature
	var height:int=town.promenade.height_signature(city,road)
	check(city.add_terrain_stroke([Vector2(-35,35)] as Array[Vector2],"raise",2.5,.3).ok,"author a real far terrain brush")
	var next_walk:Array=town.promenade.prepare(town,road)
	var next_era:Dictionary=town.era_streets.prepare(town,road)
	check(town.promenade._clearance_signature==geometry and town.promenade.height_signature(city,road)==height,"remote brush changes neither actual street obstacles nor its support heights")
	check(is_same(walk,next_walk) and is_same(era,next_era),"remote terrain reuses the original immutable street and era decoration records")
	var fresh:=cold(city,road)
	check(next_walk==fresh.walk and next_era==fresh.era,"retained remote edit equals an independent cold compilation")
	var target:Vector2=era.gardens[0].shrub
	check(city.add_terrain_stroke([target] as Array[Vector2],"raise",1.5,.4).ok,"author actual terrain under a boundary garden")
	next_walk=town.promenade.prepare(town,road);next_era=town.era_streets.prepare(town,road)
	check(town.promenade.height_signature(city,road)!=height and not is_same(era,next_era),"local support-height change invalidates cached street furniture")
	fresh=cold(city,road)
	check(next_walk==fresh.walk and next_era==fresh.era,"local sloped seating or removal exactly matches a cold compilation")
	check(city.undo().ok,"undo local support brush")
	next_walk=town.promenade.prepare(town,road);next_era=town.era_streets.prepare(town,road)
	check(next_walk==walk and next_era==era,"undo restores exact original lamp and garden records")
	check(city.redo().ok,"redo actual terrain support change")
	fresh=cold(city,road)
	check(town.promenade.prepare(town,road)==fresh.walk and town.era_streets.prepare(town,road)==fresh.era,"redo retains exact cold equivalence")
	check(city.add_vegetation_stroke([target] as Array[Vector2],"shrub",.8).ok,"player adds a real garden shrub")
	fresh=cold(city,road)
	check(town.promenade.prepare(town,road)==fresh.walk and town.era_streets.prepare(town,road)==fresh.era,"authored shrub exclusions still invalidate boundary decorations")
	Renderer.BudgetRebuild.new()._dispose_context(town)
	print("STREET_HEIGHT_DEPENDENCIES ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)

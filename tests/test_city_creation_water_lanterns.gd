extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_waterfront_cafes_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Plan=preload("res://scripts/world/city_creation_water_lantern_plan.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city;check(fixture.ok,"actual public shoreline tea district")
	check(Plan.derive(city).is_empty(),"unpublished street generation cannot publish lamps")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var before:Dictionary=city.snapshot();var rows:=Plan.derive(city);print("LANTERN_PLANS ",rows)
	check(rows.size()==4,"four true connected waterfront houses publish lamps")
	var accepted:Array=[]
	for row:Dictionary in rows:
		check(row.water_id=="w1" and Plan.clear(city,row.at,accepted,Plan.Street.derive(city).piers),"actual named water and clear wet footprint")
		check(city.water_clearance(row.at)<=-Plan.INSET+.001 and row.y==Plan.Terrain.WATER_LEVEL+.01,"actual floating level follows visible water surface")
		accepted.append(row)
	check(city.snapshot()==before,"lamp planning never authors water homes or history")
	check(city.remove_road("r1").ok and Plan.derive(city).is_empty(),"pending road edit withdraws old generation")
	life.setup(city);check(Plan.derive(city).is_empty(),"disconnected shoreline cannot retain lamps")
	check(city.undo().ok,"actual street Undo");life.setup(city);check(Plan.derive(city)==rows,"published Undo restores exact sources")
	var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before,"",true,true))).ok,"actual cold restore")
	life.setup(cold);check(Plan.derive(cold)==rows,"independent cold plans equal published incremental")
	check(cold.add_road([Vector2(-18,-27),Vector2(-18,-22)] as Array[Vector2],"path","none").ok,"actual authored bridge crosses float position")
	life.setup(cold);check(not Plan.derive(cold).any(func(row):return row.house_id=="h2"),"real bridge deck excludes underlying floating lamp")
	check(cold.undo().ok,"actual bridge Undo");life.setup(cold);check(Plan.derive(cold)==rows,"bridge Undo restores original wet volumes")
	var river:=Fixture.State.new();river.initialize_free();var from:=Vector2(river.river_x(12.)-river.RIVER_HALF_WIDTH-4.1,12.)
	check(river.add_house(from).ok and river.add_road([from+Vector2(-2,1.9),from+Vector2(2,1.9)] as Array[Vector2],"path","none").ok,"actual meandering river bank house and street")
	life.setup(river);var river_rows:=Plan.derive(river);check(river_rows.size()==1 and river_rows[0].water_id=="river","analytic river uses real bank instead of a phantom canal")
	var pond:=Fixture.State.new();pond.initialize_free()
	check(pond.add_water([Vector2(-22,8)] as Array[Vector2],3.2,"pond").ok and pond.add_house(Vector2(-22,13.6)).ok and pond.add_road([Vector2(-24,15.5),Vector2(-20,15.5)] as Array[Vector2],"path","none").ok,"actual single-point pond house and street")
	life.setup(pond);var pond_rows:=Plan.derive(pond);check(pond_rows.size()==1 and pond_rows[0].water_id=="w1" and pond.water_clearance(pond_rows[0].at)<=-Plan.INSET+.001,"single-point pond uses its real wet disk")
	var prefs:Dictionary=cold.creative_settings.presentation.duplicate();prefs.automatic_decoration=false
	check(cold.CreationPolicy.set_preferences(cold,{"presentation":prefs}).ok and Plan.derive(cold).is_empty(),"automatic decoration preference withdraws lamps")
	var legacy:=Fixture.State.new();legacy.initialize();life.setup(legacy);check(Plan.derive(legacy).is_empty(),"classic scenery unchanged")
	if not rows.is_empty():
		check(not Plan.clear(city,rows[0].at,[rows[0]]),"overlapping floating volume rejected")
		check(not Plan.clear(city,rows[0].at,[],[{"start":rows[0].at-Vector2.ONE,"end":rows[0].at+Vector2.ONE}]),"actual pier corridor excludes float")
	check(not Plan.clear(city,Vector2(-20,-20)),"dry land cannot carry floating lamp")
	life.queue_free();await process_frame
	print("WATER_LANTERNS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

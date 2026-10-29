extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Fixture=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city;check(fixture.ok,"all spatial sources created through public API")
	var before:Dictionary=city.snapshot();var pending:Dictionary=city.functional_zones()
	check(not pending.network_ready and pending.zones.all(func(z):return not z.active),"unpublished road graph cannot activate zones")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var report:Dictionary=city.functional_zones();before=city.snapshot()
	check(report.network_ready and report.enabled,"free city consumes current published street network")
	check(report.houses.values().all(func(h):return h.connected),"all six public houses connect at real selected entrances")
	for pair:Array in [["h1","courtyard"],["h3","artisan"],["h4","civic"],["h5","waterfront"]]:
		check(pair[1] in report.houses[pair[0]].kinds,"actual functional source "+str(pair))
	check(report.zones.any(func(z):return z.kind=="courtyard" and z.members==["h1","h2"]),"nearby courtyard houses form one physical zone")
	check(report.zones.any(func(z):return z.kind=="courtyard" and z.members==["h6"]),"distant same-component home remains separate")
	check(report.houses.h1.component==report.houses.h6.component,"distance separation is not fabricated road disconnection")
	check(report.houses.h5.water_distance<=5.2,"actual authored pond distance contributes evidence")
	check(city.functional_zones()==report and city.snapshot()==before,"derived/cache queries never author districts roles or historical receipts")
	check(city.remove_road(fixture.road).ok,"public road removal")
	check(city.functional_zones().zones.all(func(z):return not z.active),"stale old connectivity withdrawn immediately")
	life._sync();var disconnected:Dictionary=city.functional_zones()
	check(not disconnected.houses.h3.connected and disconnected.zones.any(func(z):return z.kind=="artisan" and not z.active),"actual graph removal deactivates craft zone without deleting building evidence")
	check(city.undo().ok,"undo actual road edit");life._sync()
	check(city.functional_zones()==report,"Undo regenerates identical memberships evidence and stable zone IDs")
	var snapshot:Dictionary=city.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok,"cold read uses unchanged Schema20")
	var other:=Life.new();root.add_child(other);other.set_process(false);other.setup(copy)
	check(copy.functional_zones()==report,"independent cold graph gives same derived zones")
	check(city.set_house_role("h3","bakery").ok,"manual use remains a normal authored edit");life._sync()
	check(city.houses[2].role=="bakery" and city.functional_zones().houses.h3.role=="bakery","spatial recomputation never overrides manual purpose")
	var legacy:=State.new();legacy.initialize();var old:Dictionary=legacy.snapshot()
	check(not legacy.functional_zones().enabled and legacy.snapshot()==old,"classic city remains on original semantics")
	boundaries()
	life.free();other.free()
	print("FUNCTIONAL_ZONES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"report":report}));quit(0 if failures.is_empty() else 1)
func boundaries()->void:
	var river:=State.new();river.initialize_free();var turn_z:float=-PI/(2.*.17);var turn_x:float=river.river_x(turn_z)-river.RIVER_HALF_WIDTH-.9-5.199
	check(river.add_house(Vector2(turn_x,turn_z)).ok,"public near-threshold meander house")
	var river_row:Dictionary=river.functional_zones().houses.h1
	check(absf(float(river_row.water_distance)-5.199)<.00001 and "waterfront" in river_row.kinds,"river edge-interior extremum respects 5.2m criterion")
	var old_distance:=INF
	var box:Variant=river.Frontage.Frame.footprint(river.houses[0],river.houses[0].cells[0])
	for point:Vector2 in river.Frontage.Frame.corners(box):old_distance=minf(old_distance,river.water_clearance(point))
	old_distance=minf(old_distance,river.water_clearance(Vector2(turn_x,turn_z)))
	print("RIVER_BOUNDARY ",JSON.stringify({"corner_sample_m":old_distance,"edge_minimum_m":river_row.water_distance}))
	for distance:float in [5.19,5.21]:
		var city:=State.new();city.initialize_free()
		check(city.add_house(Vector2(-25,-20)).ok and city.add_water([Vector2(-25,-20-.9-1.-distance)] as Array[Vector2],2.,"pond").ok,"public shoreline boundary layout")
		var row:Dictionary=city.functional_zones().houses.h1
		check(absf(float(row.water_distance)-distance)<.00001 and ("waterfront" in row.kinds)==(distance<5.2),"footprint to true pond edge respects 5.2m boundary")
	var dry:=State.new();dry.initialize_free();check(dry.add_house(Vector2(-25,-20)).ok,"ordinary dry home")
	var dry_view:Dictionary=dry.functional_zones()
	check(dry_view.houses.h1.kinds==["courtyard"],"ordinary single portico does not automatically become a market")
	check(dry.add_cell("h1",1,0,0).ok and dry.rotate_house("h1",PI*.5).ok,"public rotated multi-cell arcade")
	check(not "waterfront" in dry.functional_zones().houses.h1.kinds,"ordinary rotated double room without real arcade is not a market")
	var rail:=State.new();rail.initialize_free();check(rail.add_house(Vector2(-25,-20)).ok,"public rail host");var track:Dictionary=rail.add_road([Vector2(-28,-17.8),Vector2(-22,-17.8)] as Array[Vector2],"tram","none");check(track.ok,"public real rail street")
	check(rail.functional_zones().houses.h1.tram_roads==["r1"] and "artisan" in rail.functional_zones().houses.h1.kinds,"actual tram geometry supplies auditable artisan condition")
	var plateau:=State.new();plateau.initialize_free()
	for i in range(4):check(plateau.add_terrain_stroke([Vector2(-25,-20)] as Array[Vector2],"raise",4.,.55).ok,"public plateau sculpt")
	check(plateau.add_house(Vector2(-25,-20)).ok and plateau.houses[0].base_y>=1.5 and "civic" in plateau.functional_zones().houses.h1.kinds,"actual raised base supplies cultural condition")
	# A restore may reuse the same revision on the same State instance.
	var saved:Dictionary=dry.snapshot();var recipient:=State.new();recipient.initialize_free();recipient.functional_zones()
	check(recipient.restore(saved).ok and recipient.functional_zones()==dry.functional_zones(),"restore retires preexisting cached zone data")
	var a:=State.new();a.initialize_free();a.add_house(Vector2(-25,-20));var prior:Dictionary=a.functional_zones()
	var b:=State.new();b.initialize_free();b.add_house(Vector2(-10,-20))
	check(a.revision==b.revision and a.restore(b.snapshot()).ok and a.functional_zones()==b.functional_zones() and a.functional_zones()!=prior,"same-revision city replacement cannot reuse stale memberships")
	invalid_shapes()
func invalid_shapes()->void:
	var city:=State.new();city.initialize_free();Fixture.Brush.select(city,"pastoral","ionic_stoa")
	check(city.add_house(Vector2(-25,-20)).ok and city.set_house_role("h1","residential").ok,"actual stoa with manual residential use")
	check("civic" in city.functional_zones().houses.h1.kinds,"valid stoa supplies real cultural massing")
	for style:String in ["timber","round_tower"]:
		check(city.set_house_style("h1",style).ok and city.houses[0].architecture=="ionic_stoa" and not "civic" in city.functional_zones().houses.h1.kinds,"non-classical style withdraws actual stoa without erasing author intent")
	check(city.set_house_style("h1","classic").ok and "civic" in city.functional_zones().houses.h1.kinds,"classic style restores valid real stoa")
	check(city.add_cell("h1",1,0,0).ok and city.add_cell("h1",0,1,0).ok,"public L extension invalidates rectangular stoa massing")
	check(city.houses[0].architecture=="ionic_stoa" and city.houses[0].role=="residential" and not "civic" in city.functional_zones().houses.h1.kinds,"saved prototype intent survives but absent physical stoa supplies no cultural geometry")
	var court:=State.new();court.initialize_free();var ids:Array=[]
	var Canon=preload("res://tools/fixtures/city_creation_canon_fixture.gd")
	for row:Array in [[Vector2(-2.7,-2.7),Canon._row(2)],[Vector2(.9,-2.7),Canon._row(2)],[Vector2(-2.7,2.7),Canon._row(4)],[Vector2(-2.7,-.9),Canon._row(2,true)],[Vector2(2.7,-.9),Canon._row(2,true)]]:
		var built:Dictionary=court.add_house_stroke(Vector2(-25,-20)+row[0],row[1]);check(built.ok,"actual court wall")
		ids.append(built.house_id)
		for cell:Dictionary in court.houses[-1].cells.duplicate(true):check(court.add_cell(built.house_id,cell.x,cell.z,1).ok,"actual court gallery floor")
	var id:String=ids[0];check(court.set_house_architecture(id,"peristyle").ok and "waterfront" in court.functional_zones().houses[id].kinds,"real inward upper colonnade supplies market geometry")
	for cell:Dictionary in court.houses[0].cells.duplicate(true):
		if int(cell.level)==1:check(court.remove_cell(id,str(cell.id)).ok,"public removal of actual gallery floor")
	check(court.houses[0].architecture=="peristyle" and not "waterfront" in court.functional_zones().houses[id].kinds,"saved peristyle no longer grants market after gallery disappears")

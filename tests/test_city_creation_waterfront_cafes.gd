extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_waterfront_cafes_fixture.gd")
const Layout=preload("res://scripts/world/city_creation_cafe_layout.gd")
const Seed=preload("res://scripts/world/city_creation_waterfront_role_seed.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city
	check(fixture.ok,"actual public shoreline construction")
	check(city.houses.map(func(h):return h.role)==["bakery","garden_cafe","bakery","garden_cafe","residential"],"local bakery seeds nearby cafes; distant source does not reach unrelated loggia")
	var saved:Dictionary=city.snapshot();var plans:Array=[]
	for id:String in ["h2","h4"]:
		var plan:Dictionary=Layout.layout(city,id);check(not plan.is_empty() and plan.seats.size()==3,"actual three-seat layout "+id)
		if plan.is_empty():continue
		check(Layout.clear(city,plan.center,Layout.TABLE_RADIUS+.05),"actual dry clear table "+id)
		for seat:Vector2 in plan.seats:check(not Layout.route(city,id,plan.entrance,seat).is_empty(),"real public entrance reaches seat "+id)
		plans.append(plan)
	check(plans.size()==2 and Vector2(plans[0].center).distance_to(plans[1].center)>=2.5,"actual tea array reserves separate table footprints")
	check(city.snapshot()==saved and city.cafe_progress.is_empty() and city.life_progress.purchases==0 and city.life_progress.tea_parties==0,"planning creates no tea or purchase history")
	check(city.set_house_role("h2","residential").ok and city.remove_water_at(Vector2(-12,-24)).ok and city.houses[1].role=="residential" and city.houses[3].role=="garden_cafe","manual role and earlier seed persist after water removal")
	check(city.undo().ok and city.undo().ok and city.snapshot().houses==saved.houses,"native history restores original seeded author fields")
	var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and cold.snapshot()==saved,"cold read never reseeds existing city")
	Fixture.Brush.select(city,"renaissance","venetian_loggia");var before:Dictionary=city.snapshot();var count:int=city._undo.size()
	var cells:Array=[{"x":0,"z":0,"level":0,"kind":"room"}]
	check(city.preview_house_stroke(Vector2(-26,-20),cells).ok and city.snapshot()==before,"actual shoreline preview never creates role or history")
	check(city.add_house_stroke(Vector2(-26,-20),cells).ok and city.houses[-1].role=="garden_cafe" and city._undo.size()==count+1,"continuous shoreline stroke seeds neighbour use in one transaction")
	var built:Dictionary=city.snapshot();check(city.undo().ok and city.houses==before.houses and city.redo().ok and city.houses==built.houses,"UndoRedo retains exact continuous-stroke seed")
	var draft:Dictionary=city.houses[0].duplicate(true);draft.id="draft";draft.origin=[-22.,-30.699]
	check(Seed.role_for(city,draft)=="bakery","actual footprint at 5.199m water clearance seeds source")
	draft.origin=[-22.,-30.701];check(Seed.role_for(city,draft).is_empty(),"actual footprint at 5.201m water clearance stays dwelling")
	draft.origin=[-26.,-20.];check(city.remove_road("r1").ok and city.rotate_house("h1",.4).ok and Seed.role_for(city,draft)=="garden_cafe","rotated actual bakery footprint supplies local seed before street placement")
	check(city.set_house_role("h1","residential").ok and Seed.role_for(city,draft)=="bakery","manual source change affects only subsequent seed choices")
	var dry:=Fixture.State.new();dry.initialize_free();Fixture.Brush.select(dry,"renaissance","venetian_loggia")
	check(dry.add_house(Vector2(-25,-15)).ok and dry.houses[0].role=="residential","dry isolated loggia retains dwelling")
	check(dry.add_water([Vector2(3,-19),Vector2(-28,-19)] as Array[Vector2],1.2,"channel").ok and dry.houses[0].role=="residential","later water never backfills old roles")
	var old:=Fixture.State.new();old.initialize_empty();old.era_unlocks.append("renaissance");check(Fixture.Brush.select(old,"renaissance","venetian_loggia"),"classic earned era permits actual shoreline prototype")
	check(old.add_house(Vector2(-3,-15)).ok and old.houses[0].role=="residential","classic construction retains original roles")
	print("WATERFRONT_CAFES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"plans":plans}));quit(0 if failures.is_empty() else 1)

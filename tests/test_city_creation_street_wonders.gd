extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
var checks:=0
var failures:Array=[]
static func fixture()->RefCounted:
	var city:=State.new();city.initialize_empty()
	city.add_water([Vector2(-22,-15)] as Array[Vector2],3.2,"pond")
	city.add_house(Vector2(-22,-10.9))
	city.add_house(Vector2(-25.7,-15))
	city.add_house(Vector2(-32,-23));city.rotate_house("h3",.58);city.set_house_role("h3","workshop")
	var entry:Dictionary=city.house_entrances("h3")[0];var normal:=Frame.normal(entry)
	city.add_road([Vector2(entry.wall_at)+normal*.1,Vector2(entry.wall_at)+normal*5.] as Array[Vector2])
	city.add_road([Vector2(-17,-2),Vector2(-5,-2)] as Array[Vector2])
	city.add_road([Vector2(-11,-8),Vector2(-11,4)] as Array[Vector2])
	city.add_roundabout(Vector2(-11,-2))
	city.add_house(Vector2(-15,2));city.add_house(Vector2(-7,2))
	return city
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=fixture();var before:Dictionary=city.snapshot();var data:=Plan.derive(city).duplicate(true)
	print("WONDER_PLAN ",data)
	check(city.houses.size()==5 and city.Roundabouts.all(city.roads).size()==1,"all five homes, pond, rotated door road and roundabout use public construction")
	check(data.piers.size()==2,"two different shores of an authored pond derive actual piers")
	for pier:Dictionary in data.piers:
		check(Vector2(pier.dir).dot((Vector2(-22,-15)-Vector2(pier.start)).normalized())>.999,"true pond normal faces water instead of the unrelated river")
		check(city.water_clearance(pier.start)>0. and city.water_clearance(pier.end)<-.25,"pier genuinely joins dry shore to open water")
		for p:Vector2 in [pier.start,pier.at,pier.end]:
			for h:Dictionary in city.houses:
				for c:Dictionary in h.cells:check(Frame.distance(Frame.footprint(h,c),p)>.42,"deck clears real rotated room footprints")
	check(data.pockets.size()==1 and data.pockets[0].house_id=="h3","arbitrary angled house gains one genuine free corner")
	check(data.fountains.size()==1 and data.fountains[0].members.size()==2,"two nearby houses activate the real roundabout fountain flowerbed")
	check(city.site_blessing("h3").blessed,"corner garden activates real timber workshop without invented trees")
	check(preload("res://scripts/world/city_creation_civic_supply.gd").ready(city,city.houses[2]),"derived micro scenery reaches real civic readiness")
	if not data.pockets.is_empty():
		var pocket:Dictionary=data.pockets[0];var mask:=Mask.new();mask.setup(city,Vector2i(floori(pocket.at.x/8.),floori(pocket.at.y/8.)))
		check(not mask.visible(pocket.at,.18),"actual grass index suppresses shoots through the pocket plinth")
	check(city.snapshot()==before,"derivation and material-independent planning never author entities or receipts")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(before,"",true,true))).ok,"real complete geometry cold-restores")
	var cold_plan:=Plan.derive(cold).duplicate(true);data.erase("key");cold_plan.erase("key")
	check(data==cold_plan,"cold process-independent plan exactly rederives water normals, corners and fountains")
	var pocket:Dictionary=Plan.derive(city).pockets[0]
	check(city.place_plant(pocket.at,"shrub",.4).ok,"public planting occupies the former derived pocket")
	check(not Plan.derive(city).pockets.any(func(p):return p.house_id=="h3" and p.at==pocket.at),"new authored tree removes an overlapping decoration")
	city.undo();check(Plan.derive(city).pockets.any(func(p):return p.house_id=="h3" and p.at==pocket.at),"undo rederives the same corner without a saved decoration entity")
	city.redo();check(not Plan.derive(city).pockets.any(func(p):return p.house_id=="h3" and p.at==pocket.at),"redo removes it again")
	var plain:=State.new();plain.initialize_empty();plain.add_house(Vector2(-30,-20));check(Plan.derive(plain).pockets.is_empty(),"axis aligned houses do not invent angled corner gardens")
	var bank:=Vector2(plain.river_x(12.)-4.,12.);var dir:=Plan.water_direction(plain,bank)
	check(plain.water_clearance(bank+dir*.2)<plain.water_clearance(bank),"analytic meandering river also uses its actual signed distance normal")
	print("STREET_WONDERS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)

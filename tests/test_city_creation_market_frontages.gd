extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_market_frontages_fixture.gd")
const Plan=preload("res://scripts/world/city_creation_market_frontages.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city;check(fixture.ok,"real shoreline houses and streets")
	var before:Dictionary=city.snapshot();var rows:Dictionary=Plan.prepare(city)
	check(rows.size()==4 and not rows.has("h5"),"four real waterfront frontages; dry remote house unchanged")
	var accepted:Array=[]
	for id:String in rows:
		for row:Dictionary in rows[id]:
			check(Plan.clear(city,row,accepted),"all accepted volumes retain clearance")
			check(not row.road_id.is_empty() and row.house_id==id and city.houses[city._house_index(id)].cells.any(func(c):return c.id==row.cell_id),"actual source road house and cell identity")
			accepted.append(row)
	check(city.snapshot()==before,"planning never authors roles rooms or history")
	check(city.remove_road("r1").ok and Plan.prepare(city).is_empty(),"actual street removal withdraws all canopies")
	check(city.undo().ok and Plan.prepare(city)==rows,"Undo deterministically restores original plans")
	var copy:=Fixture.State.new();check(copy.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok and Plan.prepare(copy)==rows,"independent cold plans equal incremental")
	var prefs:Dictionary=city.creative_settings.presentation.duplicate();prefs.automatic_decoration=false
	check(city.CreationPolicy.set_preferences(city,{"presentation":prefs}).ok and Plan.prepare(city).is_empty(),"appearance preference hides automatic streetscape")
	check(city.undo().ok and Plan.prepare(city)==rows,"Undo restores automatic streetscape")
	var legacy:=Fixture.State.new();legacy.initialize();check(Plan.prepare(legacy).is_empty(),"classic city retains original streetscape")
	var row:Dictionary=rows.h1[0]
	check(not Plan.clear(city,row,[row]),"overlapping canopy volume rejected")
	var blocked:Dictionary=row.duplicate(true);blocked.footprint.center=Plan.Frame.center(city.houses[1],city.houses[1].cells[0])
	check(not Plan.clear(city,blocked),"actual neighbouring room blocks overhead cloth and supports")
	var outside:Dictionary=row.duplicate(true);outside.footprint.center=city.WORLD_RECT.end+Vector2.ONE
	check(not Plan.clear(city,outside),"canopy cannot extend outside real parcel bounds")
	check(city.rotate_house("h1",.25).ok,"actual oblique waterfront entrance")
	var rotated:Dictionary=Plan.prepare(city)
	check(rotated.has("h1") and not is_zero_approx(rotated.h1[0].yaw) and Plan.clear(city,rotated.h1[0]),"oriented canopy follows actual rotated wall and keeps clearance")
	var cold_rotated:=Fixture.State.new();check(cold_rotated.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok and Plan.prepare(cold_rotated)==rotated,"rotated cold plans retain exact source transforms")
	print("MARKET_FRONTAGES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"plans":rows}));quit(0 if failures.is_empty() else 1)

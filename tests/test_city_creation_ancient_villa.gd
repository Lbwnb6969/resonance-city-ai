extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Villa=preload("res://scripts/visual/city_creation_ancient_villa.gd")
const Glass=preload("res://scripts/visual/city_creation_conservatory.gd")
var checks:=0
var failures:Array=[]
static func fixture()->RefCounted:
	var city:=State.new();city.initialize_empty();city.era_unlocks.assign(["pastoral","renaissance","clockwork"]);city.growth_memories.assign(["dawn","tide","festival"])
	for at:Vector2 in [Vector2(-28,-17),Vector2(-19,-17),Vector2(-28,-6),Vector2(-18,-6),Vector2(-9,-17)]:city.add_house(at)
	for cell:Vector2i in [Vector2i(1,0),Vector2i(0,-1),Vector2i(1,-1)]:city.add_cell("h1",cell.x,cell.y,0)
	for x in [0,1]:city.add_cell("h1",x,-1,1);city.add_cell("h1",x,0,1,"terrace")
	city.set_house_architecture("h1","portico")
	city.add_cell("h2",1,0,0)
	for x in [0,1]:city.add_cell("h2",x,0,1)
	city.add_cell("h3",0,0,1,"terrace")
	for x in [1,2]:city.add_cell("h4",x,0,0)
	city.set_house_era("h5","clockwork");city.set_house_architecture("h5","iron_conservatory")
	var house:Dictionary=city.houses[0];var entry:Dictionary=city.house_entrances("h1")[0]
	city.add_road([Vector2(entry.wall_at)+Vector2(0,.1),Vector2(entry.wall_at)+Vector2(0,5.)] as Array[Vector2])
	return city
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=fixture();var saved:Dictionary=city.snapshot()
	check(city.houses[0].cells.size()==8 and not Villa.plan(city.houses[0]).is_empty(),"real rectangular ground floor with two rear rooms and front terraces remains a villa")
	check(Villa.plan(city.houses[1]).is_empty(),"a complete stacked insula retains its existing facade treatment")
	check(not Villa.plan(city.houses[2]).is_empty(),"an authored roof terrace keeps its ground Doric portico")
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for n in [r.shore,r.lilypads,r.wildlife]:r.add_child(n)
	for index in [0,2,3,4]:
		var h:Dictionary=city.houses[index];var built:Node3D=r._house(h)
		if index in [0,2]:
			check(built.has_meta("ancient_villa") and built.find_children("VillaDoricFullPediment*","MeshInstance3D",true,false).size()==1,"one shared projecting Doric pediment instead of per-room ornaments")
			check(built.find_children("GreekClosedPediment*","MeshInstance3D",true,false).is_empty(),"new shared colonnade replaces duplicate local door gables")
			check(built.find_children("DoricFlutedShaft*","MeshInstance3D",true,false).size()==(4 if index==0 else 2),"fluted colonnade has exact two/four real shafts")
		if index==3:
			check(int(built.get_meta("terracotta_skylights",0))==1,"actual broad continuous terracotta roof receives one daylight dormer")
			var light:Node3D=built.find_child("TerracottaRoofLight",true,false)
			check(light!=null and light.has_meta("actual_roof_height") and light.find_children("SkylightPane*","MeshInstance3D",true,false).size()==1,"dormer uses actual pitched roof samples and a framed glass pane")
		if index==4:check(built.find_children("BarrelGlazing*","MeshInstance3D",true,false).size()==14,"iron barrel glazing and internal original plants are retained")
		built.free()
	var glass:=Glass.new();var original:ShaderMaterial=glass.ensure_roof_material();var iron:ShaderMaterial=glass.ensure_roof_material(true)
	check(original!=iron and is_equal_approx(float(original.get_shader_parameter("night_energy")),.65) and is_equal_approx(float(iron.get_shader_parameter("night_energy")),.65*.62),"only iron conservatory night emission is reduced38percent; other roof glass keeps its source material")
	glass.set_light(true,.3);check(float(iron.get_shader_parameter("evening"))==1. and is_equal_approx(float(iron.get_shader_parameter("response")),.3),"new iron material follows actual day/night and response changes")
	check(city.snapshot()==saved,"all added geometry and materials preserve authored cells, roles and saved colors")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and cold.snapshot()==saved,"full villa/terrace/iron prototype cold restore is exact")
	check(city.remove_road(str(city.roads[0].id)).ok and city.rotate_house("h1",.58).ok and not Villa.plan(city.houses[0]).is_empty(),"actual arbitrary yaw keeps the same local architectural plan")
	print("ANCIENT_VILLA ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

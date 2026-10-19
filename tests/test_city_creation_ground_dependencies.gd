extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Cafes=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=State.new();var added:Dictionary=city.add_house(Vector2(-20,-8));assert(added.ok)
	var id:String=added.house_id;assert(city.set_house_role(id,"garden_cafe").ok)
	var points:Array[Vector2]=[Vector2(-25,-6),Vector2(-15,-6)]
	assert(city.add_road(points,"path").ok);city.prepare_ground_height()
	var cafes:=Cafes.new();var old_plan:Dictionary=cafes.layout(city,id)
	_check(not old_plan.is_empty(),"real ground fixture has valid tea furniture")
	for kind:String in ["upper","ground","base","role","road","terrain","undo"]:
		var layouts:int=city._terrain_protection.layout_rebuilds
		var profiles:Dictionary=city._road_heights.profiles
		var changed:Dictionary={"ok":true}
		if kind=="upper":changed=city.add_cell(id,0,0,1)
		elif kind=="ground":changed=city.add_cell(id,-1,0,0)
		elif kind=="base":city.houses[0].base_y=.5;city.revision+=1
		elif kind=="role":changed=city.set_house_role(id,"venue")
		elif kind=="road":changed=city.add_road(points,"avenue")
		elif kind=="terrain":
			var stroke:Array[Vector2]=[Vector2(-22,-8)];changed=city.add_terrain_stroke(stroke,"raise",2.5,.2)
		else:changed=city.undo()
		_check(changed.ok,"actual "+kind+" edit succeeds")
		city.prepare_ground_height()
		var cold:=State.new();_check(cold.restore(city.snapshot()).ok,"independent "+kind+" snapshot restores")
		cold.prepare_ground_height()
		_check(city._ground_terrain.vertices==cold._ground_terrain.vertices and city._ground_terrain.raw_vertices==cold._ground_terrain.raw_vertices,"cached "+kind+" matches every fresh terrain vertex")
		_check(city._road_heights.profiles==cold._road_heights.profiles,"cached "+kind+" matches all fresh road treads bridge samples and heights")
		_check(city._ground_terrain._previous_protection==cold._ground_terrain._previous_protection,"cached "+kind+" matches exact fresh ordered house doorway courtyard and road pads")
		_check(cafes.layout(city,id)==Cafes.new().layout(cold,id),"cached "+kind+" matches full fresh cafe geometry")
		if kind=="upper":
			_check(city._terrain_protection.layout_rebuilds==layouts and is_same(city._road_heights.profiles,profiles),"upper floor preserves published ground layout and profile containers")
			_check(cafes.layout(city,id)==old_plan,"upper floor preserves the actual existing tea furniture")
	_courtyard_overhang()
	print("GROUND_DEPENDENCIES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)

func _courtyard_overhang()->void:
	var city:=State.new();assert(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/庭院河湾样例.json"))).ok)
	city.prepare_ground_height();var original:Array=city.courtyard_plans()
	_check(original.size()==1 and original[0].tiles.size()==9,"actual ring fixture has nine paved courtyard tiles")
	var rebuilds:int=city._courtyards.rebuild_count;var pads:int=city._terrain_protection.layout_rebuilds
	_check(city.add_cell("h7",1,0,1).ok,"real upper room stacks on the courtyard wall")
	city.prepare_ground_height()
	_check(city.courtyard_plans()==original and city._courtyards.rebuild_count==rebuilds and city._terrain_protection.layout_rebuilds==pads,"stacked upper room preserves exact courtyard and ground layout")
	for kind:String in ["overhang","undo"]:
		var changed:Dictionary=city.add_cell("h7",1,1,1,"terrace") if kind=="overhang" else city.undo()
		_check(changed.ok,"actual courtyard terrace "+kind+" succeeds")
		city.prepare_ground_height();var plans:Array=city.courtyard_plans()
		var cold:=State.new();assert(cold.restore(city.snapshot()).ok);cold.prepare_ground_height()
		_check(plans==cold.courtyard_plans(),"cached terrace "+kind+" matches full fresh paving planter and fountain placement")
		_check(city._ground_terrain.vertices==cold._ground_terrain.vertices and city._ground_terrain._previous_protection==cold._ground_terrain._previous_protection,"cached terrace "+kind+" matches every fresh terrain vertex and ordered pad")
		_check(plans[0].tiles.size()==(8 if kind=="overhang" else 9),"elevated terrace obstruction changes the actual courtyard footprint and undo restores it")

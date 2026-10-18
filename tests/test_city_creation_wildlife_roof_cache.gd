extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Wildlife=preload("res://scripts/visual/city_creation_wildlife.gd")
const OLD="res://废弃/居民高度后台准备_前_2026-10-18_cc5e59b1/city_creation_wildlife.gd.txt"
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _same(current:Node3D,old:Node3D)->bool:
	return current._perches==old._perches and current._nectars==old._nectars and current._birds==old._birds and current._flutters==old._flutters
func _run()->void:
	Engine.max_fps=180;var script:=GDScript.new();script.source_code=FileAccess.get_file_as_string(OLD).replace("class_name CityCreationWildlife","")
	_check(script.reload()==OK,"frozen cc5e59b1 original habitat equations compile")
	for sample:String in ["经营河湾","圆塔河湾","花房河湾"]:
		var city:=State.new();_check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/"+sample+"样例.json"))).ok,"real shipping habitat sample restores: "+sample)
		var renderer:=Renderer.new();root.add_child(renderer);renderer.setup(city);renderer.set_process(false);renderer.wildlife.set_process(false)
		var current:=Wildlife.new();var old:Node3D=script.new();root.add_child(current);root.add_child(old)
		for wildlife:Node3D in [current,old]:wildlife.setup(city);wildlife.set_process(false);wildlife.refresh_habitats(renderer)
		_check(_same(current,old),"all actual perches, glass/porch/shrub nectar, bird and butterfly state exactly match original: "+sample)
		current.refresh_habitats(renderer);old.refresh_habitats(renderer)
		_check(_same(current,old) and current.habitat_stats.reused==city.houses.size() and current.habitat_stats.rebuilt==0,"unchanged published picking roots reuse every exact roof habitat: "+sample)
		var points:Array[Vector2]=[Vector2(27,29)];_check(city.add_terrain_stroke(points,"raise",1.,1.,2).ok,"actual sculpt changes ground beneath the same published roofs")
		city.prepare_ground_height();current.refresh_habitats(renderer);old.refresh_habitats(renderer)
		_check(_same(current,old) and current.habitat_stats.rebuilt==0,"terrain refresh preserves frozen roof habitats while recomputing live nectar exactly: "+sample)
		var house:Dictionary=city.houses[0];_check(city.set_house_palette(str(house.id),(int(house.palette)+1)%4).ok,"actual house appearance changes published picking root")
		renderer.rebuild();renderer.wildlife.set_process(false)
		current.refresh_habitats(renderer);old.refresh_habitats(renderer)
		_check(_same(current,old) and current.habitat_stats.rebuilt>0,"replaced real house root invalidates derived roof habitat: "+sample)
		current.free();old.free();renderer.free()
	print("WILDLIFE_ROOF_CACHE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const Meadow=preload("res://scripts/visual/city_creation_meadow.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func compare(city:RefCounted,meadow:Node3D,label:String,full:bool)->Dictionary:
	var before:Dictionary=city.snapshot()
	var entrances:Dictionary=meadow._entrances_by_house()
	var kept:Dictionary=entrances.duplicate(true)
	var same:=true
	for plant:Dictionary in city.plants:
		same=same and city.vegetation_visible(plant)==city.vegetation_visible(plant,entrances)
	# Every authored species, with probes on both sides of the first door and
	# foundations. Tree and flower clearance are intentionally different.
	var house:Dictionary=city.houses[0]
	var origin:=Vector2(house.origin[0],house.origin[1])
	for kind:String in city.GardenSpecies.IDS:
		for offset:Vector2 in [Vector2.ZERO,Vector2(0,1.55),Vector2(0,2.6),Vector2(1.1,1.6),Vector2(2.5,2.5),Vector2(-3,0)]:
			var at:=origin+offset
			for size:float in [.3,1.,2.5]:
				var plant:Dictionary={"id":"pprobe","position":[at.x,at.y],"kind":kind,"scale":size,"seed":3,"source":"player"}
				same=same and city.vegetation_visible(plant)==city.vegetation_visible(plant,entrances)
	check(same,label+": all real plants and seven-species probes match independent state queries")
	var blocks:Array[Vector2i]=[Vector2i(floori(origin.x/8.),floori(origin.y/8.))]
	if full:blocks.append_array([Vector2i(-1,-1),Vector2i(0,0),Vector2i(2,1),Vector2i(-4,3)])
	for block:Vector2i in blocks:
		var original:=Mask.new();original.setup(city,block)
		var batched:=Mask.new();batched.setup(city,block,entrances)
		var identical:=true
		for z in range(24):
			for x in range(24):
				var at:=Vector2(block)*8.+Vector2(x,z)/3.
				for size:float in [.1,.18,.25]:
					identical=identical and original.visible(at,size)==batched.visible(at,size)
				identical=identical and original.continuous_edge(at)==batched.continuous_edge(at)
		check(identical,label+": exact lawn visibility and continuous road/door edges at block "+str(block))
	check(entrances==kept and city.snapshot()==before,label+": shared records and authored world remain unchanged")
	return entrances
func run()->void:
	var chosen:Dictionary=Examples.read("example_flagship")
	check(chosen.ok,"real 127-house flagship validates")
	var city:=State.new();check(city.restore(chosen.world).ok,"restore shipped work")
	var meadow:=Meadow.new();meadow.state=city
	compare(city,meadow,"127 houses / 245 plants / 60 roads",true)
	meadow.free()
	city=State.new()
	var added:Dictionary=city.add_house(Vector2(-12,0))
	check(added.ok,"author house for doorway changes")
	meadow=Meadow.new();meadow.state=city
	var initial:=compare(city,meadow,"single room",false)
	check(city.add_cell(str(added.house_id),0,1,0).ok,"add an actual south ground-floor module")
	var changed:=compare(city,meadow,"extended south facade",false)
	check(initial!=changed,"new facade replaces the previous doorway records")
	check(city.undo().ok,"undo actual module")
	check(compare(city,meadow,"undo",false)==initial,"undo restores original doorway geometry")
	check(city.redo().ok,"redo actual module")
	check(compare(city,meadow,"redo",false)==changed,"redo restores extended facade geometry")
	meadow.free()
	print("VEGETATION_ENTRANCE_BATCH ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)

extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Meadow=preload("res://scripts/visual/city_creation_meadow.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const Index=preload("res://scripts/visual/city_creation_ground_obstacle_bins.gd")
const Pebbles=preload("res://scripts/visual/city_creation_path_pebbles.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();city.initialize()
	var old:=city.snapshot()
	check(city.add_house(Vector2(-23,22)).ok,"actual far addition")
	check(city.rotate_house(str(city.houses[-1].id),.47).ok,"actual arbitrary rotation")
	var water:Dictionary=city.add_water([Vector2(-30,32),Vector2(-24,34)] as Array[Vector2],2.4,"pond")
	check(water.ok,"actual diagonal water "+str(water))
	var meadow:=Meadow.new();meadow.state=city
	var entrances:Dictionary=meadow._entrances_by_house()
	var index:=Index.new();index.prepare(city,entrances)
	var queries:=0
	for y in range(-5,5):
		for x in range(-5,5):
			var block:=Vector2i(x,y)
			check(index.fingerprint(block)==meadow._local_obstacles(block,entrances),"exact source order and obstacle fingerprint "+str(block))
			var before:=Mask.new();before.setup(city,block,entrances)
			var after:=Mask.new();after.setup(city,block,entrances,index)
			var same:=true
			for z in range(17):
				for a in range(17):
					var at:=Vector2(block)*8.+Vector2(a,z)*.4999
					same=same and before.visible(at,.25)==after.visible(at,.25)
					same=same and before.continuous_edge(at)==after.continuous_edge(at)
					queries+=1
			check(same,"fine visibility and edge push equal full scan "+str(block))
	var expected:Dictionary={}
	for h:Dictionary in city.houses:expected[str(h.id)]=city.house_entrances(str(h.id))
	preload("res://scripts/visual/city_creation_prepared_frontages.gd").prepare(city)
	for id:String in expected:
		var result:Array=city.house_entrances(id)
		check(result==expected[id],"private snapshot memo equals original "+id)
		result.clear();check(city.house_entrances(id)==expected[id],"caller cannot mutate memo "+id)
	city.remove_meta("prepared_frontages")
	var helper:=Pebbles.new();helper.prepare(city)
	for road:Dictionary in city.roads:helper.records(road)
	check(city.restore(old).ok,"restore original authored world")
	helper.prepare(city)
	var cold:=Pebbles.new();cold.prepare(city)
	for road:Dictionary in city.roads:check(helper.records(road)==cold.records(road),"removal/rotation cached stones equal cold "+str(road.id))
	check(city.add_house(Vector2(32,28)).ok,"remote addition for stone reuse")
	var saved:Dictionary=helper._record_cache.duplicate()
	helper.prepare(city);cold=Pebbles.new();cold.prepare(city)
	var reused:=0
	for road:Dictionary in city.roads:
		var result:Array=helper.records(road)
		check(result==cold.records(road),"local edit stones equal full solver "+str(road.id))
		if is_same(saved[str(road.id)].records,result):reused+=1
	check(reused>0,"far stone records retain identity")
	meadow.free()
	print("GROUND_OBSTACLE_BINS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"queries":queries,"reused":reused,"failures":failures}));quit(0 if failures.is_empty() else 1)


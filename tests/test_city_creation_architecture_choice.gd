extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_alpine_fixture.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Plan=preload("res://scripts/world/city_creation_alpine_plan.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var data:=Fixture.build();var city:RefCounted=data.city;var id:String=data.flat[0]
	var r:=Renderer.new();r.state=city;root.add_child(r);r.buildings=Node3D.new();r.add_child(r.buildings)
	for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	var house:Dictionary=city.houses.filter(func(h):return h.id==id)[0]
	var automatic:=Plan.kind_for(house);var original:Dictionary=city.snapshot();var meshes:Array=[]
	for key:String in Choice.ALPINE:
		var prior:Dictionary=house.duplicate(true)
		check(city.set_house_architecture(id,key).ok,"public architecture choice "+key)
		var saved:Dictionary=city.snapshot();var fresh:=Fixture.Modern.Clockwork.State.new()
		check(saved.schema==19 and fresh.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and fresh.snapshot()==saved,"Schema19 full roundtrip "+key)
		var built:Node3D=r._house(house);var signatures:Array=[]
		check(built.get_meta("modern_roofs")[0].alpine_kind==Choice.ALPINE.find(key),"real roof dispatch "+key)
		for mesh:MeshInstance3D in built.find_children("*","MeshInstance3D",true,false):signatures.append([mesh.transform,mesh.mesh.get_aabb()])
		check(built.find_children("AlpineRoofPick","CollisionShape3D",true,false).all(func(c):return c.shape is BoxShape3D),"lightweight roof picking "+key)
		meshes.append(hash(signatures));built.free()
		city.undo();check(city.houses.filter(func(h):return h.id==id)[0]==prior,"undo restores entire house "+key)
		city.redo();check(city.houses.filter(func(h):return h.id==id)[0].architecture==key,"redo keeps selected recipe "+key)
		house=city.houses.filter(func(h):return h.id==id)[0]
	check(meshes.size()==6 and _unique(meshes)==6,"six genuinely different geometry recipes")
	check(city.set_house_architecture(id,"").ok and Plan.kind_for(house)==automatic,"return to automatic keeps original recipe")
	var invalid:Dictionary=city.snapshot();invalid.houses[0].architecture="missing"
	var fresh:=Fixture.Modern.Clockwork.State.new();var empty:Dictionary=fresh.snapshot()
	check(not fresh.restore(invalid).ok and fresh.snapshot()==empty,"invalid prototype rejects atomically")
	invalid=city.snapshot();invalid.houses[0].architecture="chalet";invalid.schema=18
	check(not fresh.restore(invalid).ok,"old schema cannot silently carry new field")
	check(not city.set_house_architecture(id,"rotunda").ok,"current era limits choices")
	check(city.restore(original).ok and Plan.kind_for(city.houses.filter(func(h):return h.id==id)[0])==automatic,"old works keep deterministic derivation")
	var classical:RefCounted=preload("res://tools/fixtures/city_creation_neoclassical_fixture.gd").city()
	var civic:Dictionary=preload("res://tools/fixtures/city_creation_civic_fixture.gd").build()
	var seen:Dictionary={}
	for source:RefCounted in [classical,civic.city]:
		for home:Dictionary in source.houses:
			var available:Array=Choice.choices(source,home)
			for key:String in available:
				if seen.has(key):continue
				var rooms:Array=home.cells.duplicate(true)
				check(source.set_house_architecture(str(home.id),key).ok and home.cells==rooms,"classical choice keeps authored rooms "+key)
				var reader:=Fixture.Modern.Clockwork.State.new();check(reader.restore(JSON.parse_string(JSON.stringify(source.snapshot(),"",true,true))).ok,"classical prototype JSON "+key)
				seen[key]=true
	check(seen.size()==10 and (Choice.NEO+Choice.RENAISSANCE+Choice.ANCIENT.IDS).all(func(k):return seen.has(k)),"all eight classical and two Renaissance prototypes available in actual spatial contexts")
	r.free();print("ARCHITECTURE_CHOICE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
func _unique(values:Array)->int:
	var seen:Dictionary={}
	for value in values:seen[value]=true
	return seen.size()

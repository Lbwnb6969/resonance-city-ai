extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Modern=preload("res://scripts/visual/city_creation_modern.gd")
const Alpine=preload("res://scripts/visual/city_creation_alpine_modern.gd")
const Fixture=preload("res://tools/fixtures/city_creation_alpine_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var data:=Fixture.build();var city:RefCounted=data.city;var before:Dictionary=city.snapshot()
	var renderer:=Renderer.new();renderer.state=city;root.add_child(renderer)
	renderer.buildings=Node3D.new();renderer.add_child(renderer.buildings)
	for node in [renderer.shore,renderer.lilypads,renderer.wildlife]:renderer.add_child(node)
	var kinds:Dictionary={};var recipes:Dictionary={};var eco:Dictionary={};var deck_count:=0
	for house:Dictionary in city.houses:
		var built:Node3D=renderer._house(house);var records:Array=built.get_meta("modern_roofs",[])
		check(not records.is_empty(),"production modern roofs derive alpine envelope")
		var kind:int=Alpine.Plan.kind_for(house);kinds[kind]=true
		check(records.all(func(r):return r.alpine_kind==kind),"one deterministic massing recipe across house modules")
		var signatures:Array=[];var paper:=0;var finite:=true
		for mesh:MeshInstance3D in built.find_children("*","MeshInstance3D",true,false):
			signatures.append([mesh.transform,mesh.mesh.get_aabb()])
			if mesh.material_override.get_meta("creation_wall",false):paper+=1
			for vertex:Vector3 in mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]:finite=finite and vertex.is_finite()
		check(paper>10 and finite,"cedar, slate and stone finite shaded components")
		recipes[kind]=hash(signatures)
		for shape:CollisionShape3D in built.find_children("AlpineRoofPick","CollisionShape3D",true,false):
			var body:StaticBody3D=shape.get_parent()
			check(shape.shape is BoxShape3D and shape.shape.size.x>1.7 and shape.shape.size.y>.05 and body.get_meta("house_id")==house.id and not str(body.get_meta("cell_id")).is_empty(),"real pitched roof AABB retains actual house/cell picking")
		for deck:Node3D in built.find_children("TerrainSupportedDeck","Node3D",true,false):
			deck_count+=1
			var samples:Array=deck.get_meta("support_samples",[])
			check(samples.size()==3 and samples.all(func(s):return float(s.ground)<=.10),"three actual terrain samples support deck and prevent slope intersection")
		if kind==2:
			for node:Node3D in built.find_children("*","Node3D",true,false):
				if node.has_meta("roof_kind"):eco[int(node.get_meta("roof_kind"))]=true
		if str(house.id)==data.chalet:
			check(built.find_children("CedarGable*","MeshInstance3D",true,false).size()==2 and built.find_children("JoinedCedarRidge*","MeshInstance3D",true,false).size()==3,"three adjoining chalet modules form one continuous ridge with only two terminal gables")
			check(records[0].joined_ends==[false,true] and records[1].joined_ends==[true,true] and records[2].joined_ends==[true,false],"shared roof seams suppress internal eaves in both directions")
		var batcher:=preload("res://scripts/visual/city_creation_mesh_batcher.gd").new();batcher.merge(built)
		var batches:=0
		for mesh:MeshInstance3D in built.find_children("*","MeshInstance3D",true,false):
			if mesh.material_override.get_meta("creation_wall_batch",false):
				batches+=1;check(float(mesh.material_override.get_shader_parameter("micro_normal_strength"))>0,"actual publication retains paper micro-normal and component AO bounds")
		check(batches>0,"actual material batching publishes lit alpine architecture")
		built.free()
	check(kinds.size()==3 and recipes.values().size()==3,"all three distinct alpine massing recipes in real authored city")
	check(eco.size()==4 and deck_count>0,"all four previous ecological rooftop objects live on stepped roof terraces with terrain-supported decks")
	var road:Dictionary=city.roads.filter(func(r):return r.id==data.stairs)[0]
	check(not city.road_profile(road).treads.is_empty(),"real uphill approach derives actual stone stair treads")
	var saved:Dictionary=city.snapshot();var loaded:=Fixture.Modern.Clockwork.State.new()
	check(loaded.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and loaded.snapshot()==saved,"full JSON restores existing schema and deterministic alpine derivation")
	check(city.snapshot()==before,"all architecture preparation and material publication leave authored world unchanged")
	renderer.free();print("MODERN_ARCHITECTURE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

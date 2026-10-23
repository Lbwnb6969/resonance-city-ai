extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Modern=preload("res://scripts/visual/city_creation_modern.gd")
const Archetypes=preload("res://scripts/visual/city_creation_modern_archetypes.gd")
const Fixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:RefCounted=Fixture.architecture();var before:Dictionary=city.snapshot()
	var renderer:=Renderer.new();renderer.state=city;root.add_child(renderer)
	var kinds:Dictionary={};var shapes:Dictionary={};var facades:Dictionary={};var palette:=Modern.palette([Color("efdfc3"),Color("ca835c"),Color("725844")])
	for index in range(16):
		var house:Dictionary=city.houses[index].duplicate(true)
		var cell:Dictionary=house.cells[-1].duplicate(true)
		var kind:=Archetypes.roof_kind(house,cell);kinds[kind]=true
		var restored:Dictionary=JSON.parse_string(JSON.stringify(house,"",true,true))
		check(Archetypes.roof_kind(restored,restored.cells[-1])==kind,"JSON preserves exact roof selection")
		var building:=Node3D.new();renderer.add_child(building);building.set_meta("creation_wall_base_y",0.)
		var node:=Node3D.new();node.name=str(cell.id);building.add_child(node)
		var result:=Modern.roof(renderer,building,house,palette,cell)
		check(result.archetype==kind and node.get_node("EcoRoof_"+str(cell.id)).get_meta("roof_kind")==kind,"real roof records stable archetype")
		var bodies:=node.find_children("*","StaticBody3D",true,false)
		var shape:CollisionShape3D=bodies[0].get_child(0)
		check(bodies.size()==1 and shape.shape is BoxShape3D and shape.shape.size==Vector3(2.2,.16,2.2) and bodies[0].get_meta("cell_id")==cell.id,"unchanged solid roof pick contract")
		var architectural:=0;var vertices:=0;var foliage:=0
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			vertices+=mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX].size()
			var material:Material=mesh.material_override
			if material.get_meta("creation_wall",false):architectural+=1
			if material==renderer.foliage.material("canopy"):foliage+=1
		check(architectural>=4 and foliage>=2,"structural paper materials and real shared foliage")
		shapes[kind]=vertices
		if kind==1:
			var glass_found:=false
			for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
				if mesh.material_override==renderer.conservatory.ensure_roof_material():glass_found=mesh.get_meta("creation_live_visual",false)
			check(glass_found,"skylight remains live transparent warm glass")
		var batcher:=preload("res://scripts/visual/city_creation_mesh_batcher.gd").new();batcher.merge(building)
		var valid:=true;var wall_batches:=0
		for mesh:MeshInstance3D in building.find_children("*","MeshInstance3D",true,false):
			var points:PackedVector3Array=mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]
			for point:Vector3 in points:valid=valid and point.is_finite()
			if mesh.material_override.get_meta("creation_wall_batch",false):
				wall_batches+=1
				valid=valid and is_equal_approx(float(mesh.material_override.get_shader_parameter("micro_normal_strength")),.025)
		check(valid and wall_batches>=2,"published geometry finite and structural micro-normal survives batching")
		building.free()
	for seed_value in range(3):
		var wall:=Node3D.new();renderer.add_child(wall)
		Archetypes.populate_facade_greenery(renderer,wall,seed_value,Modern.Wall.source(Color("b8976a"),null,"component",Modern.Wall.Kind.STONE))
		facades[wall.get_meta("eco_greenery_variant")]=wall.get_child_count();wall.free()
	check(kinds.size()==4 and shapes.values().size()==4,"actual neighboring IDs cover all four roofs")
	var unique:Dictionary={}
	for count in shapes.values():unique[count]=true
	check(unique.size()==4 and facades.size()==3,"four distinct actual silhouettes and three facade layouts")
	var envelopes:Dictionary={}
	for seed_value in range(4):
		var wall:=Node3D.new();renderer.add_child(wall);Modern.facade(renderer,wall,false,seed_value,palette)
		var geometry:Array=[]
		for mesh:MeshInstance3D in wall.find_children("*","MeshInstance3D",true,false):geometry.append([mesh.transform,mesh.mesh.get_aabb()])
		envelopes[hash(geometry)]=true;wall.free()
	check(envelopes.size()==4,"four facades change actual structural mass and openings, beyond rooftop props")
	var parts:=Modern.prepare(city,city.houses[0])
	check(parts.roofs.size()==1 and int(parts.roofs[0].level)==2,"covered room roofs remain suppressed")
	renderer.conservatory.set_light(true)
	check(renderer.conservatory.ensure_roof_material().get_shader_parameter("evening")==1.,"night lighting reaches shared skylight")
	check(city.snapshot()==before,"architecture is derived without state or history writes")
	for unused:Node3D in [renderer.shore,renderer.lilypads,renderer.wildlife]:unused.free()
	renderer.free();await process_frame;await process_frame
	print("MODERN_ARCHITECTURE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

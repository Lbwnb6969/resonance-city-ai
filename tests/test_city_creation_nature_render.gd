extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _expect(condition: bool, label: String) -> void:
	if not condition: failures.append(label)

func _cover_count(root_node: Node3D, material: Material, at: Vector2) -> int:
	var count := 0
	for mesh: MeshInstance3D in root_node.find_children("*","MeshInstance3D",true,false):
		if mesh.material_override != material: continue
		var faces := mesh.mesh.get_faces()
		for index in range(0,faces.size(),3):
			var a := Vector2(faces[index].x,faces[index].z)
			var b := Vector2(faces[index+1].x,faces[index+1].z)
			var c := Vector2(faces[index+2].x,faces[index+2].z)
			if Geometry2D.point_is_inside_triangle(at,a,b,c): count += 1
	return count

func _run() -> void:
	root.size = Vector2i(1440,900)
	var demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	await process_frame
	var points: Array[Vector2] = [Vector2(3,-10),Vector2(7,-10),Vector2(11,-9)]
	_expect(demo.state.add_water(points,2.8,"channel").ok,"mask channel fixture")
	points = [Vector2(11,-9)]
	_expect(demo.state.add_water(points,4,"pond").ok,"mask round pond fixture")
	points = [Vector2(-11,9),Vector2(-14,9),Vector2(-15,5),Vector2(-14,1)]
	var curve: Array[Vector2] = preload("res://scripts/world/city_creation_stroke.gd").road_points(points)
	_expect(demo.state.add_road(curve).ok,"mask curved path fixture")
	demo.town.rebuild()
	var checks := 0
	for block: Vector2i in demo.town.meadow.blocks:
		var local := preload("res://scripts/visual/city_creation_grass_mask.gd").new()
		local.setup(demo.state,block)
		for z in range(16):
			for x in range(16):
				var at := Vector2(block)*8+Vector2(x,z)*0.5+Vector2(0.17,0.23)
				var candidate := {"id":"pcomparison","position":[at.x,at.y],"kind":"shrub","scale":0.25,"seed":0,"source":"seed"}
				_expect(local.visible(at,0.25) == demo.state.vegetation_visible(candidate),"local grass mask differs at %s" % at)
				checks += 1
	var meadow_ids := {}
	for block: Vector2i in demo.town.meadow.blocks: meadow_ids[block] = demo.town.meadow.blocks[block].get_instance_id()
	var base_ids := {}
	for block: Vector2i in demo.town.meadow.blocks:
		var lawn: Node = demo.town.meadow.blocks[block].get_node_or_null("Meadow_lawn")
		if lawn != null: base_ids[block] = lawn.get_instance_id()
	demo.zoom = 40
	demo._update_camera()
	_expect(demo.town.meadow.detail == 0.0,"city view collapses dense leaf detail")
	demo.zoom = 10
	demo._update_camera()
	_expect(demo.town.meadow.detail == 1.0,"close view restores leaf detail")
	var plant: Dictionary = demo.state.plants[0]
	plant.scale = float(plant.scale)*0.95
	demo.town.rebuild()
	for block: Vector2i in base_ids:
		_expect(demo.town.meadow.blocks[block].get_node("Meadow_lawn").get_instance_id() == base_ids[block],"plant edit and zoom retain grass-base GPU instances")
	meadow_ids.clear()
	for block: Vector2i in demo.town.meadow.blocks: meadow_ids[block] = demo.town.meadow.blocks[block].get_instance_id()
	points = [Vector2(-15,-8)]
	_expect(demo.state.add_water(points,2.4,"pond").ok,"remote pond masks grass")
	demo.town.rebuild()
	var kept := 0
	for block: Vector2i in meadow_ids:
		if Vector2(block).distance_to(Vector2(-2,-1)) > 1.5 and demo.town.meadow.blocks.has(block):
			_expect(meadow_ids[block] == demo.town.meadow.blocks[block].get_instance_id(),"remote water replaces unrelated meadow block")
			kept += 1
	_expect(kept > 0,"meadow preservation tested actual blocks")
	_expect(_cover_count(demo.town.roads_layer,demo.town.road_material,Vector2(-10.91,2.61)) == 1,"road junction has exactly one road surface")
	points = [Vector2(-11,11),Vector2(9,11)]
	_expect(demo.state.add_road(points).ok,"bridge geometry fixture")
	demo.town.rebuild()
	var bridge: Node3D = demo.town.road_roots[demo.state.roads[-1].id]
	var water_vertices := 0
	for mesh: MeshInstance3D in bridge.find_children("*","MeshInstance3D",true,false):
		if mesh.material_override != demo.town.road_material: continue
		var vertices = mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]
		var normals = mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_NORMAL]
		for index in range(vertices.size()):
			var p: Vector3 = vertices[index]
			if demo.state.water_clearance(Vector2(p.x,11)) < -0.8:
				_expect(absf(p.y-demo.state.street_height(Vector2(p.x,11))) < 0.001,"bridge deck vertex shares centreline height")
				_expect(normals[index].y > 0,"bridge road normal faces up: %s at %s" % [normals[index],p])
				water_vertices += 1
	_expect(water_vertices > 10,"bridge contains subdivided elevated interior")
	var report := {"ok":failures.is_empty(),"failures":failures,"grass_mask_points":checks,"retained_blocks":kept,"elevated_vertices":water_vertices}
	print("CITY_CREATION_NATURE_RENDER ",JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)

extends RefCounted
## Real household needs add a small exterior flowerpot, without changing the
## authored city, doorway clearance, collision or natural-world height field.
static func build(renderer: Node3D, parent: Node3D) -> int:
	var pots: Array[Transform3D] = []
	var flowers: Array[Transform3D] = []
	var colors: Array[Color] = []
	var palette := [Color("f6f1de"),Color("f2c14e"),Color("b8a6d9"),Color("e8a096")]
	for house: Dictionary in renderer.state.houses:
		var tier: int = renderer.state.house_harmony_tier(str(house.id))
		if tier<1 or str(house.role)!="residential": continue
		var entrances: Array = renderer.state.house_entrances(str(house.id))
		if entrances.is_empty(): continue
		var e: Dictionary = entrances[0]
		var normal := Vector2(e.side)
		var tangent := Vector2(normal.y,-normal.x)
		var at: Vector2 = e.wall_at + normal*0.22 + tangent*0.73
		var clear := true
		for road: Dictionary in renderer.state.roads:
			for i in range(road.points.size()-1):
				var a := Vector2(road.points[i][0],road.points[i][1])
				var b := Vector2(road.points[i+1][0],road.points[i+1][1])
				if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<float(road.width)*0.5+0.14: clear=false
		if not clear: continue
		var base: float = renderer.state.ground_height(at)
		pots.append(Transform3D(Basis.IDENTITY,Vector3(at.x,base+0.085,at.y)))
		flowers.append(Transform3D(Basis.IDENTITY.scaled(Vector3.ONE*(0.85+float(tier)*0.10)),Vector3(at.x,base+0.16,at.y)))
		colors.append(palette[posmod(hash(house.id),4)])
	if pots.is_empty(): return 0
	var pot := CylinderMesh.new()
	pot.top_radius=0.13; pot.bottom_radius=0.09; pot.height=0.17; pot.radial_segments=8;pot.rings=1
	var material := StandardMaterial3D.new()
	material.albedo_color=Color("ae7256");material.roughness=0.95
	_batch(parent,"HarmonyPots",pot,material,pots,[])
	_batch(parent,"HarmonyFlowers",renderer.meadow._mesh("flower"),renderer.meadow._material("flower"),flowers,colors)
	return pots.size()

static func _batch(parent: Node3D, name_value: String, mesh: Mesh, material: Material, transforms: Array[Transform3D], colors: Array[Color]) -> void:
	var mm := MultiMesh.new()
	mm.transform_format=MultiMesh.TRANSFORM_3D
	mm.use_colors=not colors.is_empty()
	mm.use_custom_data=true
	mm.mesh=mesh
	mm.instance_count=transforms.size()
	for i in range(transforms.size()):
		mm.set_instance_transform(i,transforms[i])
		mm.set_instance_custom_data(i,Color(0,0,1,0))
		if not colors.is_empty(): mm.set_instance_color(i,colors[i])
	var node := MultiMeshInstance3D.new()
	node.name=name_value;node.multimesh=mm;node.material_override=material
	parent.add_child(node)

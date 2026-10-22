extends RefCounted
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
## Real household needs add a small exterior flowerpot, without changing the
## authored city, doorway clearance, collision or natural-world height field.
static func build(renderer: Node3D, parent: Node3D,records: Variant=null) -> int:
	var pots: Array[Transform3D] = []
	var flowers: Array[Transform3D] = []
	var colors: Array[Color] = []
	var palette := [Color("f6f1de"),Color("f2c14e"),Color("b8a6d9"),Color("e8a096")]
	for house: Dictionary in renderer.state.houses:
		var tier: int = renderer.state.house_harmony_tier(str(house.id))
		if tier<1 or str(house.role)!="residential": continue
		var id:=str(house.id)
		var placement: Dictionary
		if records!=null and records.has(id):placement=records[id]
		else:
			placement=_placement(renderer,house)
			if records!=null:records[id]=placement
		if placement.is_empty():continue
		var at: Vector2=placement.at;var base: float=placement.base
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

static func _placement(renderer: Node3D,house: Dictionary)->Dictionary:
	var entrances: Array = renderer.house_entrances(str(house.id))
	if entrances.is_empty(): return {}
	var e: Dictionary = entrances[0]
	var normal := Vector2(e.side)
	var tangent := Vector2(normal.y,-normal.x)
	var at: Vector2 = e.wall_at + normal*0.22 + tangent*0.73
	# Published road bins include width/2+.07; inspecting neighbours covers
	# the additional .07m pot margin without scanning every street point.
	var bin:=Vector2i(floori(at.x/renderer.ROAD_BIN_SIZE),floori(at.y/renderer.ROAD_BIN_SIZE))
	for x in range(-1,2):
		for z in range(-1,2):
			for segment:Dictionary in renderer.road_segment_bins.get(bin+Vector2i(x,z),[]):
				if at.distance_to(Geometry2D.get_closest_point_to_segment(at,segment.a,segment.b))<float(segment.width)*.5+.14:return {}
	var base: float = renderer.state.ground_height(at)
	return {"at":at,"base":base}

static func _batch(parent: Node3D, name_value: String, mesh: Mesh, material: Material, transforms: Array[Transform3D], colors: Array[Color]) -> void:
	var mm := MultiMesh.new()
	mm.transform_format=MultiMesh.TRANSFORM_3D
	mm.use_colors=not colors.is_empty()
	mm.use_custom_data=true
	mm.mesh=mesh
	SafeInstances.initialize(mm,transforms.size())
	for i in range(transforms.size()):
		SafeInstances.append(mm,transforms[i],colors[i] if not colors.is_empty() else Color.WHITE,Color(0,0,1,0))
	var node := MultiMeshInstance3D.new()
	node.name=name_value;node.multimesh=mm;node.material_override=material
	parent.add_child(node)

extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Derived courts only. Foundation's extracted fountain retains its original
## meshes, node transforms and Y=0 anchor, including the buried negative base.
## Paving adapts classical_civic_court.gd's .32/.44 staggered stone courses.
const SourceMesh=preload("res://scripts/visual/city_creation_source_mesh.gd")
const FOUNTAIN_PATH := "res://资源/建筑参考/庭院喷泉.glb"
const WaterShader = preload("res://scripts/visual/shaders/creation_courtyard_water.gdshader")
const COURSE := 0.32
const STONE := 0.44
const JOINT := 0.009
const FLOOR_LIFT := 0.014
var layer: Node3D
var roots: Dictionary = {}
var fingerprints: Dictionary = {}
var build_count := 0
# These three fields are shared into main-thread staging before setup().
var source_parts: Array = []
var floor_material: StandardMaterial3D
var stone_material: StandardMaterial3D

func setup(renderer: Node3D) -> void:
	layer = Node3D.new()
	layer.name = "Courtyards"
	renderer.add_child(layer)
	if source_parts.is_empty():
		var scene: PackedScene = load(FOUNTAIN_PATH)
		var source: Node3D = scene.instantiate()
		_extract(source,Transform3D.IDENTITY)
		source.free()
	if floor_material==null:
		floor_material = StandardMaterial3D.new()
		floor_material.albedo_color = Color.WHITE
		floor_material.roughness = 0.94
		floor_material.vertex_color_use_as_albedo = true
		floor_material.vertex_color_is_srgb = true
	if stone_material==null:
		stone_material = StandardMaterial3D.new()
		stone_material.albedo_color = Color("d6cbb0")
		stone_material.roughness = 0.91

func _extract(node: Node3D,inherited: Transform3D) -> void:
	var relative := inherited*node.transform
	if node is MeshInstance3D:
		var mesh: Mesh = SourceMesh.outward_mesh(node.mesh)
		source_parts.append({"name":str(node.name),"mesh":mesh,"transform":relative,"faces":mesh.get_faces()})
	for child: Node in node.get_children():
		if child is Node3D: _extract(child,relative)

func copy_cache_from(source: RefCounted) -> void:
	# The worker receives current CPU fingerprints, never shared live Nodes,
	# materials or imported meshes. There is no retained plan-history cache.
	fingerprints = source.fingerprints.duplicate()

func prepare(renderer: Node3D) -> Dictionary:
	renderer.state.prepare_ground_height()
	var live := {}
	var changes := {}
	for plan: Dictionary in renderer.state.courtyard_plans():
		var id := str(plan.id)
		live[id] = true
		if renderer.get_meta("local_courts",{}).has(id):continue
		var bounds: Rect2 = plan.bounds
		var height_signature: int = renderer.state._ground_terrain.region_signature(bounds.grow(0.5))
		var signature := hash([plan,height_signature])
		if fingerprints.get(id,-1)==signature: continue
		var fountain: Dictionary = plan.get("fountain",{})
		var floor_data := _paving(renderer.state,plan)
		if floor_data.vertices.is_empty() and fountain.is_empty():
			live.erase(id)
			fingerprints.erase(id)
			continue
		var anchor_y := 0.0
		if not fountain.is_empty(): anchor_y = float(renderer.state.ground_height(fountain.at))+FLOOR_LIFT
		changes[id] = {"plan":plan.duplicate(true),"fingerprint":signature,
			"floor":floor_data,"fountain_y":anchor_y}
	for id: String in fingerprints.keys():
		if not live.has(id): fingerprints.erase(id)
	return {"live":live,"changes":changes}

func _paving(state: RefCounted,plan: Dictionary) -> Dictionary:
	var data := {"vertices":PackedVector3Array(),"normals":PackedVector3Array(),
		"colors":PackedColorArray(),"indices":PackedInt32Array(),"stones":0}
	preload("res://scripts/visual/city_creation_courtyard_mortar.gd").append(state,data,plan,_patch,_patch_has_planter)
	var planters: Array = plan.get("planters",[])
	for tile:Variant in plan.tiles:
		# Recessed mineral bedding remains visible between the raised stones.
		var bounds:Rect2=Frame.rect(tile).grow(-.014)
		for row in range(floori(bounds.position.y/COURSE),ceili(bounds.end.y/COURSE)):
			var stagger := STONE*0.5 if posmod(row,2)==1 else 0.0
			for column in range(floori((bounds.position.x-stagger)/STONE),ceili((bounds.end.x-stagger)/STONE)):
				var stone := Rect2(Vector2(column*STONE+stagger,row*COURSE),Vector2(STONE,COURSE)).grow(-JOINT*0.5).intersection(bounds)
				if stone.size.x<=0.002 or stone.size.y<=0.002: continue
				var tint := Color("d4cbb5").lightened(float(posmod(row*17+column*31,7))*0.007)
				var before: int = data.vertices.size()
				# Four touching sub-quads share one stone tint. At tree holes,
				# reject intersecting <=.22 x .16m patches so no paving caps soil.
				for z in range(2):
					for x in range(2):
						var patch := Rect2(stone.position+stone.size*Vector2(x,z)*0.5,stone.size*0.5)
						if _patch_has_planter(patch,planters,tile):continue
						_patch(state,data,patch,tint,tile)
				if data.vertices.size()>before: data.stones+=1
	return data

func _patch_has_planter(patch:Rect2,planters:Array,tile:Variant)->bool:
	if tile is Rect2:return _touches_planter(patch,planters)
	var box:={"center":Vector2(tile.center)+patch.get_center().rotated(-float(tile.angle)),"half":patch.size*.5,"angle":tile.angle}
	return planters.any(func(p):return Frame.distance(box,p.at)<=float(p.radius))
func _touches_planter(patch: Rect2,planters: Array) -> bool:
	for planter: Dictionary in planters:
		var center: Vector2 = planter.at
		var closest := center.clamp(patch.position,patch.end)
		if closest.distance_squared_to(center)<=pow(float(planter.radius),2.0): return true
	return false

func _patch(state: RefCounted,data: Dictionary,bounds: Rect2,tint: Color,tile:Variant=null,lift:float=FLOOR_LIFT) -> void:
	var a := bounds.position
	var c := bounds.end
	var corners := [a,Vector2(c.x,a.y),c,Vector2(a.x,c.y)]
	var positions: Array[Vector3] = []
	for design:Vector2 in corners:
		var at:Vector2=design if not tile is Dictionary else Vector2(tile.center)+design.rotated(-float(tile.angle))
		positions.append(Vector3(at.x,float(state.ground_height(at))+lift,at.y))
	var dx := ((positions[1].y-positions[0].y)+(positions[2].y-positions[3].y))*0.5/bounds.size.x
	var dz := ((positions[3].y-positions[0].y)+(positions[2].y-positions[1].y))*0.5/bounds.size.y
	var normal := Vector3(-dx,1.0,-dz).normalized()
	if tile is Dictionary:normal=(positions[3]-positions[0]).cross(positions[1]-positions[0]).normalized()
	var start: int = data.vertices.size()
	for position: Vector3 in positions:
		data.vertices.append(position)
		data.normals.append(normal)
		data.colors.append(tint)
	data.indices.append_array(PackedInt32Array([start,start+1,start+2,start,start+2,start+3]))

func install(renderer: Node3D,prepared: Dictionary) -> void:
	for id: String in prepared.changes:
		_remove(id)
		var row: Dictionary = prepared.changes[id]
		var plan: Dictionary = row.plan
		var floor_data: Dictionary = row.floor
		fingerprints[id] = row.fingerprint
		if floor_data.vertices.is_empty() and plan.get("fountain",{}).is_empty(): continue
		var root := Node3D.new()
		root.name = "Courtyard_"+id
		root.set_meta("plan",plan.duplicate(true))
		root.set_meta("members",plan.members.duplicate())
		root.set_meta("fountain",plan.get("fountain",{}).duplicate(true))
		root.set_meta("stone_count",floor_data.stones)
		root.set_meta("paving_vertices",floor_data.vertices.size())
		layer.add_child(root)
		if not floor_data.vertices.is_empty():
			var arrays: Array = []
			arrays.resize(Mesh.ARRAY_MAX)
			arrays[Mesh.ARRAY_VERTEX] = floor_data.vertices
			arrays[Mesh.ARRAY_NORMAL] = floor_data.normals
			arrays[Mesh.ARRAY_COLOR] = floor_data.colors
			arrays[Mesh.ARRAY_INDEX] = floor_data.indices
			var mesh := ArrayMesh.new()
			mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
			var paving := MeshInstance3D.new()
			paving.name = "Paving"
			paving.mesh = mesh
			paving.material_override = floor_material
			paving.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
			root.add_child(paving)
		if not plan.get("fountain",{}).is_empty(): _fountain(root,plan.fountain,float(row.fountain_y))
		renderer._merge_meshes(root)
		roots[id] = root
		build_count+=1
	for id: String in roots.keys():
		if not prepared.live.has(id): _remove(id)
	for id: String in fingerprints.keys():
		if not prepared.live.has(id): fingerprints.erase(id)

func _fountain(root: Node3D,plan: Dictionary,anchor_y: float) -> void:
	var at: Vector2 = plan.at
	var scale_value := float(plan.scale)
	var anchor := Vector3(at.x,anchor_y,at.y)
	var transform := Transform3D(Basis.IDENTITY.scaled(Vector3.ONE*scale_value),anchor)
	root.set_meta("fountain_anchor",anchor)
	var material := ShaderMaterial.new()
	material.shader = WaterShader
	material.set_shader_parameter("fountain_at",at)
	root.set_meta("water_material",material)
	var faces := PackedVector3Array()
	for part: Dictionary in source_parts:
		var instance := MeshInstance3D.new()
		instance.name = part.name
		instance.mesh = part.mesh
		var relative: Transform3D = part.transform
		instance.transform = transform*relative
		var water: bool = str(part.name)=="FountainWater"
		instance.material_override = material if water else stone_material
		if water: instance.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
		if water:
			var water_top:=-INF
			for point:Vector3 in part.faces:
				water_top=maxf(water_top,(instance.transform*point).y)
			# The recovered mesh contains two horizontal basin surfaces, not a
			# stream. Keep both surfaces seated and add a small tapered central jet.
			material.set_shader_parameter("water_base_y",water_top)
			var jet_mesh:=CylinderMesh.new()
			jet_mesh.bottom_radius=scale_value*.065;jet_mesh.top_radius=scale_value*.012
			jet_mesh.height=scale_value*1.4;jet_mesh.radial_segments=8;jet_mesh.rings=3
			var jet:=MeshInstance3D.new();jet.name="FountainJet";jet.mesh=jet_mesh
			jet.position=Vector3(anchor.x,water_top+jet_mesh.height*.5,anchor.z)
			jet.material_override=material;jet.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
			jet.extra_cull_margin=jet_mesh.height*.07;root.add_child(jet)
		root.add_child(instance)
		if not water:
			for point: Vector3 in part.faces: faces.append((relative*point)*scale_value)
	var body := StaticBody3D.new()
	body.name = "FountainObstacle"
	body.position = anchor
	body.collision_layer = 4
	body.collision_mask = 0
	body.set_meta("courtyard",str(root.name))
	var collision := CollisionShape3D.new()
	var shape := ConcavePolygonShape3D.new()
	shape.backface_collision = true
	shape.set_faces(faces)
	collision.shape = shape
	body.add_child(collision)
	root.add_child(body)

func update_music(view: Dictionary,choir:RefCounted=null) -> void:
	var audible := bool(view.get("audible",false))
	var lead := str(view.get("lead_id","")) if audible else ""
	var source := str(view.get("source_id","")) if audible else ""
	var chorus: Array = view.get("chorus_ids",[]) if audible else []
	var pulse := clampf(float(view.get("beat_pulse",0.0)),0.0,1.0) if audible else 0.0
	for root: Node3D in roots.values():
		var material: ShaderMaterial = root.get_meta("water_material",null)
		if material==null: continue
		var active := false
		var chamber:=0.
		for id: String in root.get_meta("members",[]):
			if id==lead or id==source or chorus.has(id):active=true
			if choir!=null and choir.large_members.has(id):chamber=choir.phrase_pulse(float(view.get("clock_sec",0.)))
		material.set_shader_parameter("music_pulse",maxf(pulse if active else 0.,chamber*.65))
		material.set_shader_parameter("choir_pulse",chamber)
		var spring:bool=preload("res://scripts/world/city_creation_tradition_rules.gd").has(layer.get_parent().state,"courtyard_canon_spring")
		material.set_shader_parameter("spring_pulse",pow(maxf(0.,cos(float(view.get("clock_sec",0.))*TAU/.75)),4.) if spring else 0.)

func _remove(id: String) -> void:
	if roots.has(id):
		var root: Node3D = roots[id]
		root.get_parent().remove_child(root)
		root.queue_free()
		roots.erase(id)
	fingerprints.erase(id)

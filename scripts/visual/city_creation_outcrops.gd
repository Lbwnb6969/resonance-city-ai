extends RefCounted
## Small Foundation companion meshes; rockiness comes from the shared real
## height-field derivative, not a second terrain or an independent rock mask.
const SourceMesh=preload("res://scripts/visual/city_creation_source_mesh.gd")
const SOURCE := "res://资源/自然参考/坡地伴石.glb"
const BLOCK_SIZE := 8.0
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const BUILD_RECT := Bounds.WORLD_RECT
const MAX_PER_BLOCK := 6
const RADII := [1.4451515957547505,1.04095]

static func grass_kept(at: Vector2,rockiness: float) -> bool:
	# Stable spatial thinning; no changes to authored tuples or mask caches.
	if rockiness<=0.0: return true
	var bits := posmod(int(floorf(at.x*37.0))*73856093 ^ int(floorf(at.y*37.0))*19349663,1048576)
	return float(bits)/1048575.0<=lerpf(1.0,0.45,rockiness)

static func plant_rows(state: RefCounted,block: Vector2i) -> Array:
	var bounds := Rect2(Vector2(block)*BLOCK_SIZE,Vector2.ONE*BLOCK_SIZE)
	var result: Array = []
	for plant: Dictionary in state.plants:
		var at := Vector2(float(plant.position[0]),float(plant.position[1]))
		var radius := (0.42 if str(plant.kind)=="shrub" else 0.72)*float(plant.scale)+0.53
		if bounds.intersects(Rect2(at-Vector2.ONE*radius,Vector2.ONE*radius*2.0),true):
			result.append([at,float(plant.scale),str(plant.kind)])
	return result

static func records(state: RefCounted,block: Vector2i,mask: RefCounted,plants: Array) -> Dictionary:
	var result := {"boulder_a":[],"boulder_b":[]}
	var origin := Vector2(block)*BLOCK_SIZE
	var block_bounds := Rect2(origin,Vector2.ONE*BLOCK_SIZE).grow(-0.65)
	var terrain: RefCounted = state._ground_terrain
	var rng := RandomNumberGenerator.new()
	rng.seed = (block.x*73856093) ^ (block.y*19349663) ^ 0x6c52a1
	var accepted: Array[Vector2] = []
	for index in range(96):
		if accepted.size()>=MAX_PER_BLOCK: break
		var at := block_bounds.position+Vector2(rng.randf(),rng.randf())*block_bounds.size
		var kind := rng.randi_range(0,1)
		var xz := rng.randf_range(0.20,0.26)
		var vertical := rng.randf_range(0.11,0.135)
		var yaw := rng.randf()*TAU
		var tint := Color.WHITE.darkened(rng.randf_range(0.0,0.10))
		var gradient: Vector2=terrain.gradient_at(at)
		var normal:=Vector3(-gradient.x,1.0,-gradient.y).normalized()
		var right:=Vector3.FORWARD.cross(normal).normalized()
		var alignment:=Basis(right,normal,right.cross(normal))
		var basis: Basis=alignment*Basis(Vector3.UP,yaw).scaled(Vector3(xz,vertical,xz))
		# Include the slope-projected vertical axis in the complete footprint.
		var radius: float = RADII[kind]*xz+2.19*vertical*Vector2(normal.x,normal.z).length()
		if not BUILD_RECT.grow(-radius-0.11).has_point(at): continue
		if float(state.ground_height(at))<=0.25 or float(terrain.rockiness_at(at))<=0.25: continue
		var clear := true
		for other: Vector2 in accepted:
			if at.distance_squared_to(other)<0.75*0.75: clear=false;break
		if not clear: continue
		# State's public shrub predicate checks a full conservative radius
		# against actual room/road/door/water geometry; it never writes a plant.
		var probe := {"id":"p_outcrop","position":[at.x,at.y],"kind":"shrub","scale":radius/0.42,"seed":1,"source":"player"}
		if not state.vegetation_visible(probe): continue
		for plant: Array in plants:
			var plant_radius: float = (0.42 if str(plant[2])=="shrub" else 0.72)*float(plant[1])
			if at.distance_to(Vector2(plant[0]))<radius+plant_radius+0.18: clear=false;break
		if not clear: continue
		var center_height: float=state.ground_height(at)
		var residual := 0.0
		# Keep the entire footprint in the same mask block. Nine samples also
		# avoid courtyard paving and every real activity-protection transition.
		for sample in range(9):
			var point := at if sample==8 else at+Vector2.from_angle(sample*TAU/8.0)*radius
			if not mask.visible(point,0.25) or float(state.water_clearance(point))<=0.35 or float(terrain._protection_weight(point))<=0.95:
				clear=false;break
			var plane_height: float=center_height+gradient.dot(point-at)
			residual=minf(residual,float(state.ground_height(point))-plane_height)
		if not clear: continue
		# Follow the real slope plane. Sink by its most negative sampled
		# residual plus seven centimetres; upright pebbles disappear on steep
		# faces when anchored to the lowest point of their whole footprint.
		var transform := Transform3D(basis,Vector3(at.x-origin.x,center_height+residual-0.07,at.y-origin.y))
		result["boulder_a" if kind==0 else "boulder_b"].append([transform,tint,Color(0,0,1,0)])
		accepted.append(at)
	return result

static func load_meshes(cache: Dictionary) -> void:
	# Called exclusively by Meadow._mesh during main-thread GPU installation.
	# Store source local transforms alongside shared Mesh resources; no imported
	# Scene instance survives, and record-only workers never enter this path.
	var scene: PackedScene = load(SOURCE)
	var root: Node3D = scene.instantiate()
	_extract(root,Transform3D.IDENTITY,cache)
	root.free()

static func _extract(node: Node3D,inherited: Transform3D,cache: Dictionary) -> void:
	var relative := inherited*node.transform
	if node is MeshInstance3D:
		var key := "boulder_a" if str(node.name)=="SlopeBoulderA" else ("boulder_b" if str(node.name)=="SlopeBoulderB" else "")
		if not key.is_empty():
			cache[key] = SourceMesh.outward_mesh(node.mesh)
			cache[key+"_transform"] = relative
	for child: Node in node.get_children():
		if child is Node3D: _extract(child,relative,cache)

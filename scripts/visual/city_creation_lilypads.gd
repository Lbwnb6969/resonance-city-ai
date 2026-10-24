extends Node3D
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
const DetailLod=preload("res://scripts/visual/city_creation_detail_lod.gd")
## Derived pond-only records. Workers never load source meshes or textures.
const Terrain := preload("res://scripts/world/city_creation_terrain.gd")
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
const BLOCK_SIZE := 8.0
const SPACING := 1.05
const MAX_PER_BLOCK := 10
const LEAF_RADIUS := 0.33
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const LAND_RECT := Bounds.LAND_RECT
const SOURCE := "res://资源/自然参考/睡莲/"
var state: RefCounted
var record_only := false
var blocks: Dictionary = {}
var fingerprints: Dictionary = {}
var prepared_blocks: Dictionary = {}
var meshes: Dictionary = {}
var materials: Dictionary = {}
var _geometry: Array = []
var last_changed := 0
var elapsed_ms := 0.0

func setup(city: RefCounted) -> void:
	state=city
	name="PondLilypads"
	# Two fixed, tiny meshes/materials belong to scene startup. The first pond
	# must not decode JSON/textures inside a later 3.5ms installation task.
	for part:String in ["leaf","flower"]:_mesh(part);_material(part)

func rebuild() -> void:
	var began := Time.get_ticks_usec()
	last_changed=0
	var geometry: Array = [state.waters.duplicate(true),state.roads.duplicate(true)]
	var footprints: Array = []
	for house: Dictionary in state.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			footprints.append(Frame.footprint(house,cell))
	for court: Dictionary in state.courtyard_plans(): footprints.append_array(court.tiles)
	geometry.append(footprints)
	if geometry==_geometry:
		elapsed_ms=float(Time.get_ticks_usec()-began)/1000.0
		return
	_geometry=geometry
	for z in range(floori(LAND_RECT.position.y/BLOCK_SIZE),ceili(LAND_RECT.end.y/BLOCK_SIZE)):
		for x in range(floori(LAND_RECT.position.x/BLOCK_SIZE),ceili(LAND_RECT.end.x/BLOCK_SIZE)):
			var block := Vector2i(x,z)
			var bounds := Rect2(Vector2(block)*BLOCK_SIZE,Vector2.ONE*BLOCK_SIZE)
			var local := _local_geometry(bounds,footprints)
			var signature := hash(local)
			if fingerprints.get(block,-1)==signature: continue
			fingerprints[block]=signature
			var records := _records(block,local)
			last_changed+=1
			if record_only:
				prepared_blocks[block]=records
				continue
			if blocks.has(block):
				var old: Node3D = blocks[block]
				remove_child(old);old.queue_free();blocks.erase(block)
			if records.is_empty(): continue
			var root := Node3D.new()
			root.name="Lilypads_%d_%d" % [x,z]
			root.position=Vector3(x*BLOCK_SIZE,0,z*BLOCK_SIZE)
			root.set_meta("candidates",records)
			for part: String in ["leaf","flower"]:
				var rows: Array = []
				for record: Dictionary in records:
					if record.part==part: rows.append(record)
				_make_batch(root,part,rows)
			add_child(root);blocks[block]=root
	elapsed_ms=float(Time.get_ticks_usec()-began)/1000.0

func _local_geometry(bounds: Rect2, footprints: Array) -> Dictionary:
	var result := {"ponds":[],"roads":[],"footprints":[]}
	for water: Dictionary in state.waters:
		if str(water.kind)!="pond": continue
		var box := Rect2(Vector2(water.points[0][0],water.points[0][1]),Vector2.ZERO)
		for point: Array in water.points: box=box.expand(Vector2(point[0],point[1]))
		if bounds.intersects(box.grow(float(water.width)*0.5+0.55),true): result.ponds.append(water.duplicate(true))
	for road: Dictionary in state.roads:
		for index in range(1,road.points.size()):
			var a := Vector2(road.points[index-1][0],road.points[index-1][1])
			var b := Vector2(road.points[index][0],road.points[index][1])
			if bounds.intersects(Rect2(a,Vector2.ZERO).expand(b).grow(float(road.width)*0.5+0.28+0.55),true): result.roads.append([a,b,float(road.width)*0.5+0.28])
	for footprint:Variant in footprints:
		if bounds.intersects(Frame.bounds(Frame.grow(footprint,.55)),true): result.footprints.append(footprint)
	return result

func _records(block: Vector2i, local: Dictionary) -> Array:
	var result: Array = []
	if local.ponds.is_empty(): return result
	var origin := Vector2(block)*BLOCK_SIZE
	var candidates: Array = []
	for z in range(floori(origin.y/SPACING)-1,ceili((origin.y+BLOCK_SIZE)/SPACING)+1):
		for x in range(floori(origin.x/SPACING)-1,ceili((origin.x+BLOCK_SIZE)/SPACING)+1):
			for pond: Dictionary in local.ponds:
				var seed_value := ((x+8192)*73856093)^((z+8192)*19349663)^int(pond.seed)^0x7511a
				var rng := RandomNumberGenerator.new();rng.seed=seed_value
				# Broad deterministic jitter prevents narrow shoreline bands from
				# disappearing between parallel lattice columns.
				var at := (Vector2(x,z)+Vector2.ONE*0.5)*SPACING+Vector2(rng.randf_range(-0.38,0.38),rng.randf_range(-0.38,0.38))
				var chance := rng.randf()
				var scale_value := rng.randf_range(0.8,1.3)
				var yaw := rng.randf()*TAU
				var flower := rng.randf()<0.20
				var rank := rng.randi()
				if chance>0.58 or Vector2i(floori(at.x/BLOCK_SIZE),floori(at.y/BLOCK_SIZE))!=block: continue
				var radius := LEAF_RADIUS*scale_value
				if not _clear(at,radius,pond,local): continue
				candidates.append({"position":at,"seed":seed_value,"pond_id":str(pond.id),"scale":scale_value,"yaw":yaw,"flower":flower,"rank":rank,"radius":radius})
				break
	candidates.sort_custom(func(a: Dictionary,b: Dictionary)->bool:return int(a.rank)<int(b.rank))
	var accepted: Array[Vector2] = []
	for candidate: Dictionary in candidates:
		if accepted.size()>=MAX_PER_BLOCK: break
		var at: Vector2 = candidate.position
		var separate := true
		for previous: Vector2 in accepted:
			if previous.distance_to(at)<0.88: separate=false;break
		if not separate: continue
		accepted.append(at)
		var transform := Transform3D(Basis(Vector3.UP,float(candidate.yaw)).scaled(Vector3.ONE*float(candidate.scale)),Vector3(at.x-origin.x,Terrain.WATER_LEVEL+0.018,at.y-origin.y))
		for part: String in (["leaf","flower"] if candidate.flower else ["leaf"]):
			var record := candidate.duplicate(true)
			record.part=part;record.transform=transform;result.append(record)
	return result

func _clear(at: Vector2, radius: float, pond: Dictionary, local: Dictionary) -> bool:
	# Distance to a stroke is Lipschitz: this conservative centre clearance
	# proves the whole circle is inside this particular authored pond.
	var shore: float=state._water_stroke_distance(at,pond.points)-float(pond.width)*0.5
	if shore < -0.85 or shore > -0.25 or shore>=-radius-0.08: return false
	for road: Array in local.roads:
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at,road[0],road[1]))<=float(road[2])+radius: return false
	for footprint:Variant in local.footprints:
		if Frame.distance(footprint,at)<=radius: return false
	for sample in range(17):
		var point := at if sample==16 else at+Vector2.from_angle(sample*TAU/16.0)*radius
		if state.water_clearance(point)>=-0.08: return false
		if state._water_stroke_distance(point,pond.points)-float(pond.width)*0.5>=-0.08: return false
		for road: Array in local.roads:
			if point.distance_to(Geometry2D.get_closest_point_to_segment(point,road[0],road[1]))<=float(road[2]): return false
		for footprint:Variant in local.footprints:
			if Frame.contains(footprint,point): return false
	return true

func _make_batch(root: Node3D, part: String, records: Array) -> void:
	if records.is_empty(): return
	var multi := MultiMesh.new();multi.transform_format=MultiMesh.TRANSFORM_3D;multi.use_custom_data=true;multi.use_colors=true
	multi.mesh=_mesh(part);SafeInstances.initialize(multi,records.size())
	var bounds := AABB()
	for index in range(records.size()):
		var slot:=SafeInstances.append(multi,records[index].transform,Color.WHITE,Color(float(posmod(int(records[index].seed),65536))/65535.0,0,0,0))
		if slot<0:continue
		# Compatibility multiplies mesh COLOR by instance color. Explicit WHITE
		# preserves the recovered linear colors beside our custom seed buffer.
		bounds=records[index].transform*multi.mesh.get_aabb() if slot==0 else bounds.merge(records[index].transform*multi.mesh.get_aabb())
	multi.custom_aabb=bounds
	var instance := MultiMeshInstance3D.new();instance.name="Lilypads_"+part
	DetailLod.bind(instance,72. if part=="leaf" else DetailLod.FURNITURE)
	instance.multimesh=multi;instance.material_override=_material(part)
	instance.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	root.add_child(instance)

func _mesh(part: String) -> Mesh:
	if meshes.has(part): return meshes[part]
	var source: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(SOURCE+("叶.json" if part=="leaf" else "花.json")))
	var arrays: Array = [];arrays.resize(Mesh.ARRAY_MAX)
	var vertices := PackedVector3Array();var normals := PackedVector3Array();var colors := PackedColorArray();var uvs := PackedVector2Array()
	for point: Array in source.Vertex_Position.buffer:
		vertices.append(Vector3(point[0],point[1],point[2]));uvs.append(Vector2(point[0],point[2])*1.5+Vector2.ONE*0.5)
	for normal: Array in source.Vertex_Normal.buffer: normals.append(Vector3(normal[0],normal[1],normal[2]))
	for color: Array in source.Vertex_Color.buffer: colors.append(Color(color[0],color[1],color[2],1.0))
	# Recovered leaf buffers contain six trailing (0,0,0) padding triangles.
	# Preserve all ten real faces rather than submitting padding to the GPU.
	var indices := PackedInt32Array()
	var raw: Array=source.indices.buffer
	for index in range(0,raw.size(),3):
		if raw[index]==raw[index+1] or raw[index+1]==raw[index+2] or raw[index]==raw[index+2]: continue
		indices.append_array(PackedInt32Array([raw[index],raw[index+1],raw[index+2]]))
	for index in range(0,indices.size(),3):
		var swap := indices[index+1];indices[index+1]=indices[index+2];indices[index+2]=swap
	arrays[Mesh.ARRAY_VERTEX]=vertices;arrays[Mesh.ARRAY_NORMAL]=normals;arrays[Mesh.ARRAY_COLOR]=colors;arrays[Mesh.ARRAY_TEX_UV]=uvs;arrays[Mesh.ARRAY_INDEX]=indices
	var mesh := ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	meshes[part]=mesh;return mesh

func _material(part: String) -> Material:
	if materials.has(part): return materials[part]
	var material := ShaderMaterial.new();material.shader=load("res://scripts/visual/shaders/creation_lilypad.gdshader")
	material.set_shader_parameter("flower",part=="flower")
	material.set_shader_parameter("water_level",Terrain.WATER_LEVEL)
	material.set_shader_parameter("flower_texture" if part=="flower" else "leaf_mask",load(SOURCE+("叶形.png" if part=="leaf" else "花色.png")))
	materials[part]=material;return material

func diagnostics() -> Dictionary:
	var result := {"blocks":blocks.size(),"leaves":0,"flowers":0,"last_changed":last_changed,"elapsed_ms":elapsed_ms}
	var batches: Array = prepared_blocks.values() if record_only else []
	if not record_only:
		for root: Node3D in blocks.values(): batches.append(root.get_meta("candidates",[]))
	for records: Array in batches:
		for row: Dictionary in records: result["leaves" if row.part=="leaf" else "flowers"]+=1
	return result

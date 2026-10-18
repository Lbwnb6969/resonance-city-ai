class_name CityCreationTerrainSurface
extends Node3D
## Metric terrain: rendered triangles and picking use the same vertex buffer.
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
const BLOCK_SIZE := 16.0
var state: RefCounted
var material: ShaderMaterial
var blocks: Dictionary = {}
var fingerprints: Dictionary = {}
var stats := {"changed":0,"triangles":0,"elapsed_ms":0.0}

func setup(city_state: RefCounted, ground_material: ShaderMaterial) -> void:
	state = city_state
	material = ground_material
	name = "TerrainSurface"
	rebuild()

func rebuild() -> void:
	var started := Time.get_ticks_usec()
	for change: Array in prepare_blocks():
		var block: Vector2i = change[0]
		if blocks.has(block):
			remove_child(blocks[block])
			blocks[block].queue_free()
		blocks[block] = _build_block(change[1],block)
		add_child(blocks[block])
	stats.triangles = 0
	for root: Node3D in blocks.values(): stats.triangles += int(root.get_meta("triangles"))
	stats.elapsed_ms = float(Time.get_ticks_usec()-started)/1000.0

func prepare_blocks() -> Array:
	# CPU-only: budget workers publish these block descriptions for the main
	# thread to build. The halo includes the adjacent vertex normal samples.
	var started := Time.get_ticks_usec()
	state.prepare_ground_height()
	stats["height_field"] = state._ground_terrain.stats.duplicate()
	var changes: Array = []
	var regions: Array = state._ground_terrain.stats.get("changed_regions",[])
	var candidates: Dictionary = {}
	# A new surface has no published chunks, even when the supplied State has
	# already simulated many edits and its height cache reports only the last.
	if fingerprints.is_empty():regions=[Terrain.LAND_RECT]
	if regions.is_empty() and not fingerprints.is_empty():
		stats.changed = 0
		stats.elapsed_ms = float(Time.get_ticks_usec()-started)/1000.0
		return changes
	if regions.is_empty(): regions=[Terrain.LAND_RECT]
	for region: Rect2 in regions:
		var low := Vector2i(floori(region.position.x/BLOCK_SIZE),floori(region.position.y/BLOCK_SIZE))
		var high := Vector2i(ceili(region.end.x/BLOCK_SIZE)-1,ceili(region.end.y/BLOCK_SIZE)-1)
		for z in range(low.y,high.y+1):
			for x in range(low.x,high.x+1): candidates[Vector2i(x,z)]=true
	for block: Vector2i in candidates:
		var bounds := Rect2(Vector2(block)*BLOCK_SIZE,Vector2.ONE*BLOCK_SIZE).intersection(Terrain.LAND_RECT)
		var signature: int = state._ground_terrain.region_signature(bounds.grow(Terrain.STEP))
		if fingerprints.get(block,-1)==signature: continue
		fingerprints[block] = signature
		changes.append([block,bounds])
	stats.changed = changes.size()
	stats.elapsed_ms = float(Time.get_ticks_usec()-started)/1000.0
	return changes

func _point(at: Vector2) -> Vector3:
	return Vector3(at.x,_vertex_height(at),at.y)

func _vertex_height(at: Vector2) -> float:
	var grid := (at-Terrain.LAND_RECT.position)/Terrain.STEP
	var x := clampi(roundi(grid.x),0,Terrain.COLUMNS-1)
	var z := clampi(roundi(grid.y),0,Terrain.ROWS-1)
	return state._ground_terrain.vertices[z*Terrain.COLUMNS+x]

func _normal(at: Vector2) -> Vector3:
	# Original TG terrain_derivative converts metric differences to slope;
	# .5m is this scene's vertex pitch, rather than the original 130/512m.
	var dx := _vertex_height(at+Vector2(Terrain.STEP,0))-_vertex_height(at-Vector2(Terrain.STEP,0))
	var dz := _vertex_height(at+Vector2(0,Terrain.STEP))-_vertex_height(at-Vector2(0,Terrain.STEP))
	return Vector3(-dx,2.0*Terrain.STEP,-dz).normalized()

func prepare_mesh(bounds:Rect2)->Dictionary:
	# Values only: budget workers prepare the exact visible and collision
	# buffers. No RenderingServer/PhysicsServer resource is created here.
	var vertices := PackedVector3Array()
	var normals := PackedVector3Array()
	var indices := PackedInt32Array()
	var columns := roundi(bounds.size.x/Terrain.STEP)+1
	var rows := roundi(bounds.size.y/Terrain.STEP)+1
	for z in range(rows):
		for x in range(columns):
			var at := bounds.position+Vector2(x,z)*Terrain.STEP
			vertices.append(_point(at))
			normals.append(_normal(at))
	for z in range(rows-1):
		for x in range(columns-1):
			var a := z*columns+x
			var b := a+1
			var d := a+columns
			var c := d+1
			# Godot front faces are clockwise. The a-c diagonal also defines
			# State's two barycentric height planes.
			indices.append_array(PackedInt32Array([a,b,c,a,c,d]))
	# Close the outer land slab; internal chunk edges have no skirts.
	for z in range(rows-1):
		if bounds.position.x==Terrain.LAND_RECT.position.x: _skirt(vertices,normals,indices,z*columns,(z+1)*columns,Vector3.LEFT)
		if bounds.end.x==Terrain.LAND_RECT.end.x: _skirt(vertices,normals,indices,(z+2)*columns-1,(z+1)*columns-1,Vector3.RIGHT)
	for x in range(columns-1):
		if bounds.position.y==Terrain.LAND_RECT.position.y: _skirt(vertices,normals,indices,x+1,x,Vector3.FORWARD)
		if bounds.end.y==Terrain.LAND_RECT.end.y: _skirt(vertices,normals,indices,(rows-1)*columns+x,(rows-1)*columns+x+1,Vector3.BACK)
	var arrays := []
	arrays.resize(Mesh.ARRAY_MAX)
	arrays[Mesh.ARRAY_VERTEX] = vertices
	arrays[Mesh.ARRAY_NORMAL] = normals
	arrays[Mesh.ARRAY_INDEX] = indices
	var faces:=PackedVector3Array();faces.resize(indices.size())
	for index:int in indices.size():faces[index]=vertices[indices[index]]
	# Mesh.create_trimesh_shape passes through this CPU triangle builder,
	# including its vertex welding/precision. Preserve those exact old faces.
	var triangles:=TriangleMesh.new();triangles.create_from_faces(faces)
	return {"arrays":arrays,"faces":triangles.get_faces(),"triangles":indices.size()/3}

func _build_block(bounds: Rect2, block: Vector2i, prepared:Dictionary={}) -> Node3D:
	if prepared.is_empty():prepared=prepare_mesh(bounds)
	var root := Node3D.new()
	root.name = "Terrain_%d_%d" % [block.x,block.y]
	var mesh := ArrayMesh.new()
	mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,prepared.arrays)
	var instance := MeshInstance3D.new()
	instance.name = "GroundMesh"
	instance.mesh = mesh
	instance.material_override = material
	root.add_child(instance)
	var body := StaticBody3D.new()
	body.name = "GroundPick"
	body.collision_layer = 2
	body.set_meta("ground",true)
	var shape := CollisionShape3D.new()
	var collision:=ConcavePolygonShape3D.new();collision.set_faces(prepared.faces);shape.shape=collision
	body.add_child(shape)
	root.add_child(body)
	root.set_meta("triangles",prepared.triangles)
	return root

func _skirt(vertices: PackedVector3Array, normals: PackedVector3Array, indices: PackedInt32Array, a: int, b: int, normal: Vector3) -> void:
	var start := vertices.size()
	var top_a := vertices[a]
	var top_b := vertices[b]
	vertices.append_array(PackedVector3Array([top_a,top_b,Vector3(top_b.x,-0.9,top_b.z),Vector3(top_a.x,-0.9,top_a.z)]))
	for i in range(4): normals.append(normal)
	indices.append_array(PackedInt32Array([start,start+1,start+2,start,start+2,start+3]))

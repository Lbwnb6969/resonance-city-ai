extends RefCounted
const Plan=preload("res://scripts/world/city_creation_roundabouts.gd")

static func prepare(renderer,road: Dictionary) -> Array:
	var result: Array=[]
	for marker: Dictionary in Plan.all([road]):
		marker.y=renderer.state.street_height(marker.center)
		result.append(marker)
	return result

static func install(renderer,parent: Node3D,records: Array) -> void:
	for record: Dictionary in records:
		var root:=Node3D.new();root.name="RoundaboutPlaza";parent.add_child(root)
		root.set_meta("center",record.center);root.set_meta("radius",record.radius)
		var center:=Vector3(record.center.x,record.y,record.center.y)
		var vertices: Array[Vector3]=[]
		var polygon:=Plan.polygon(record.center,record.radius)
		for i in range(polygon.size()):
			var a: Vector2=polygon[i];var b: Vector2=polygon[(i+1)%polygon.size()]
			vertices.append_array([center,Vector3(b.x,center.y,b.y),Vector3(a.x,center.y,a.y)])
		var paving: MeshInstance3D=renderer._triangles(root,vertices,Color("d8cfb7"))
		paving.name="RoundPaving";paving.material_override=renderer.promenade.road_material()
		var ground:=StaticBody3D.new();ground.name="RoundaboutGroundPick";ground.collision_layer=2;ground.set_meta("ground",true)
		var collider:=CollisionShape3D.new();collider.shape=paving.mesh.create_trimesh_shape();ground.add_child(collider);root.add_child(ground)
		var stone: Material=renderer._material(Color("d4c6a8"))
		var edge: Material=renderer._material(Color("aea68c"))
		renderer._cylinder(root,1.12,1.10,.16,center+Vector3.UP*.08,edge,32)
		renderer._cylinder(root,.82,.88,.20,center+Vector3.UP*.21,stone,24)
		var water: Material=renderer._material(Color("6caaa0"))
		renderer._cylinder(root,.73,.73,.025,center+Vector3.UP*.325,water,24)
		# Segmented coping leaves an actual shallow basin instead of a solid
		# stone puck. One shared vertex-color batch carries the entire fountain.
		for i in range(24):
			var angle:=float(i)*TAU/24.0;var offset:=Vector3(cos(angle),0,sin(angle))*.83
			var block: MeshInstance3D=renderer._box(root,Vector3(.15,.13,.235),center+offset+Vector3.UP*.36,stone)
			block.rotation.y=-angle
		renderer._cylinder(root,.19,.11,.65,center+Vector3.UP*.54,stone,12)
		renderer._cylinder(root,.38,.44,.10,center+Vector3.UP*.88,stone,20)
		renderer._cylinder(root,.34,.34,.025,center+Vector3.UP*.94,water,20)
		renderer._cylinder(root,.025,.018,.38,center+Vector3.UP*1.08,water,8)
		var island:=StaticBody3D.new();island.name="FountainIsland";island.collision_layer=1;root.add_child(island)
		var shape:=CollisionShape3D.new();var cylinder:=CylinderShape3D.new();cylinder.radius=1.12;cylinder.height=1.2
		shape.shape=cylinder;shape.position=center+Vector3.UP*.6;island.add_child(shape)
		renderer._merge_meshes(root)

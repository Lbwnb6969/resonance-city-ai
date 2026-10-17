extends RefCounted
## Flat, chamfered stones: the top and picking surface share production faces.
## Deterministic original mesh; the shore reference documents recovered sources.
static func install(renderer,root: Node3D,runs: Array,road: Dictionary)->void:
	root.set_meta("stepping_runs",runs.duplicate(true))
	if runs.is_empty(): return
	var layer:=Node3D.new()
	layer.name="SteppingStones"
	root.add_child(layer)
	var all_faces: Array[Vector3]=[]
	var index:=0
	for run: Dictionary in runs:
		for stone: Dictionary in run.stones:
			var faces:=_faces(stone,index)
			all_faces.append_array(faces)
			var body:=StaticBody3D.new()
			body.name="SteppingGroundPick_%d" % index
			body.collision_layer=2
			body.set_meta("ground",true)
			body.set_meta("road_id",str(road.id))
			body.set_meta("stepping_stone",stone.duplicate(true))
			var shape:=ConcavePolygonShape3D.new()
			shape.backface_collision=true
			shape.set_faces(PackedVector3Array(faces))
			var collider:=CollisionShape3D.new()
			collider.shape=shape
			body.add_child(collider)
			layer.add_child(body)
			index+=1
	var mesh: MeshInstance3D=renderer._triangles(layer,all_faces,Color("8a9a99"))
	mesh.name="WetBlueStoneTops"
	layer.set_meta("stone_count",index)
	layer.set_meta("triangles",all_faces.size()/3)

static func preview(renderer,parent: Node3D,runs: Array,color: Color)->int:
	if runs.is_empty(): return 0
	var faces: Array[Vector3]=[]
	var index:=0
	for run: Dictionary in runs:
		for stone: Dictionary in run.stones:
			faces.append_array(_faces(stone,index));index+=1
	if faces.is_empty(): return 0
	var mesh: MeshInstance3D=renderer._triangles(parent,faces,color)
	var material:=StandardMaterial3D.new()
	material.albedo_color=color
	material.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA
	material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
	material.cull_mode=BaseMaterial3D.CULL_DISABLED
	mesh.material_override=material
	mesh.name="SteppingPreview"
	mesh.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	return index

static func _faces(stone: Dictionary,index: int)->Array[Vector3]:
	var result: Array[Vector3]=[]
	var rings: Array=[]
	var at: Vector2=stone.at
	var axis: Vector2=stone.axis
	var cross_axis:=Vector2(-axis.y,axis.x)
	var along:=float(stone.radius_along)
	var across:=float(stone.radius_cross)
	for ring in range(3):
		var vertices: Array[Vector3]=[]
		var radius:=.86 if ring==0 or ring==2 else 1.0
		var y:=float(stone.y)+(-.15 if ring==0 else (-.04 if ring==1 else 0.0))
		for side in range(10):
			var angle:=TAU*float(side)/10.0
			var variation:=.96+.035*sin(float(side)*2.7+float(index)*1.3)
			var p:=at+(axis*cos(angle)*along+cross_axis*sin(angle)*across)*radius*variation
			vertices.append(Vector3(p.x,y,p.y))
		rings.append(vertices)
	for side in range(10):
		var next: int=(side+1)%10
		result.append_array([Vector3(at.x,float(stone.y),at.y),rings[2][side],rings[2][next]])
		for ring in range(2):
			result.append_array([rings[ring][side],rings[ring][next],rings[ring+1][next],rings[ring][side],rings[ring+1][next],rings[ring+1][side]])
	return result

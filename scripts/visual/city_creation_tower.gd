extends RefCounted
## Crown dimensions and pavilion are original Godot geometry. The continuous
## roof section adapts Tiny Glade tools/recovered_roof.py:125's exact twenty
## normalized samples x^(0.5+profile); its full roof runtime is not imported.
## The bronze bell really uses Foundation's extracted church mesh, with its
## original node transforms retained through renderer material batching.
const BELL_PATH := "res://资源/建筑参考/教堂悬钟.glb"
const UNIT := 1.8
const FLOOR := 1.7
const HALF_EAVE := 1.02
const EAVE_HEIGHT := 0.88
const HEIGHT := 1.98
const PROFILE := 0.62
const SAMPLES := 20
const SIDES := [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]

static func build(renderer,parent: Node3D,body: StaticBody3D,house: Dictionary,cell: Dictionary,palette: Array) -> Dictionary:
	var ground: Vector3 = renderer._cell_position(house,cell)
	var center := ground+Vector3.UP*((int(cell.level)+1)*FLOOR+0.03)
	var stone: Material = renderer._material(palette[0].lightened(0.045))
	var trim: Material = renderer._material(Color("dfd4b7"))
	var wood: Material = renderer._material(Color("635447"))
	var roof_color: Color = palette[1].lerp(Color("738078"),0.24)
	renderer._box(parent,Vector3(1.87,0.12,1.87),center,trim)
	for x: float in [-0.74,0.74]:
		for z: float in [-0.74,0.74]:
			renderer._box(parent,Vector3(0.17,0.72,0.17),center+Vector3(x,0.40,z),stone)
			renderer._box(parent,Vector3(0.24,0.09,0.24),center+Vector3(x,0.10,z),trim)
			renderer._box(parent,Vector3(0.24,0.10,0.24),center+Vector3(x,0.77,z),trim)
	var arches: Array[Vector3] = []
	for side: Vector2i in SIDES: _arch(arches,center,side)
	renderer._triangles(parent,arches,palette[0].lightened(0.045))
	renderer._box(parent,Vector3(1.63,0.11,1.63),center+Vector3.UP*0.82,wood)
	renderer._box(parent,Vector3(0.10,0.15,0.98),center+Vector3.UP*0.75,wood)
	var bell_top := center+Vector3.UP*0.78
	var bell: Dictionary = _bell(renderer,parent,bell_top)
	var roof := roof_vertices(center)
	var cap: MeshInstance3D = renderer._roof_surface(parent,roof,roof_color)
	var roof_key := "joined_roof/"+str(roof_color)
	if not renderer.materials.has(roof_key):
		var material := ShaderMaterial.new()
		material.shader=renderer.JoinedRoofShader
		material.set_shader_parameter("roof_color",roof_color)
		renderer.materials[roof_key]=material
	cap.material_override=renderer.materials[roof_key]
	var fascia: Array[Vector3] = []
	var corners := [Vector2(-HALF_EAVE,-HALF_EAVE),Vector2(HALF_EAVE,-HALF_EAVE),Vector2(HALF_EAVE,HALF_EAVE),Vector2(-HALF_EAVE,HALF_EAVE)]
	for index in range(4):
		var a: Vector2 = corners[index]
		var b: Vector2 = corners[(index+1)%4]
		var normal := Vector3((a+b).x,0,(a+b).y).normalized()
		_quad(fascia,center+Vector3(a.x,EAVE_HEIGHT,a.y),center+Vector3(b.x,EAVE_HEIGHT,b.y),center+Vector3(b.x,EAVE_HEIGHT-0.065,b.y),center+Vector3(a.x,EAVE_HEIGHT-0.065,a.y),normal)
	renderer._triangles(parent,fascia,roof_color.darkened(0.18))
	renderer._cylinder(parent,0.055,0.025,0.15,center+Vector3.UP*(HEIGHT+0.02),_bronze(renderer),8)
	# Actual sloping roof triangles belong to the original cell's body. An
	# empty crown opening remains empty; no invisible full crown box is added.
	var faces := PackedVector3Array()
	for p: Vector3 in roof: faces.append(p-ground)
	var shape := ConcavePolygonShape3D.new()
	shape.backface_collision = true
	shape.set_faces(faces)
	var collider := CollisionShape3D.new()
	collider.name = "TowerRoofPick"
	collider.shape = shape
	body.add_child(collider)
	return {"cell_id":str(cell.id),"kind":"bell_tower","center":Vector2(center.x,center.z),"base_y":center.y,"eave_y":center.y+EAVE_HEIGHT,"top":center.y+HEIGHT+0.095,"bell_at":bell.center,"bell_size":bell.size,"width":HALF_EAVE*2.0,"profile":PROFILE,"profile_samples":SAMPLES,"roof_triangles":roof.size()/3}

static func roof_vertices(center: Vector3) -> Array[Vector3]:
	var vertices: Array[Vector3] = []
	var corners := [Vector2(-1,-1),Vector2(1,-1),Vector2(1,1),Vector2(-1,1)]
	for row in range(SAMPLES-1):
		var t0 := float(row)/float(SAMPLES-1)
		var t1 := float(row+1)/float(SAMPLES-1)
		var r0 := HALF_EAVE*(1.0-t0)
		var r1 := HALF_EAVE*(1.0-t1)
		var y0 := EAVE_HEIGHT+(HEIGHT-EAVE_HEIGHT)*pow(t0,0.5+PROFILE)
		var y1 := EAVE_HEIGHT+(HEIGHT-EAVE_HEIGHT)*pow(t1,0.5+PROFILE)
		for index in range(4):
			var a: Vector2 = corners[index]
			var b: Vector2 = corners[(index+1)%4]
			var aa := center+Vector3(a.x*r0,y0,a.y*r0)
			var bb := center+Vector3(b.x*r0,y0,b.y*r0)
			var cc := center+Vector3(b.x*r1,y1,b.y*r1)
			var dd := center+Vector3(a.x*r1,y1,a.y*r1)
			vertices.append_array([aa,cc,bb])
			if row<SAMPLES-2: vertices.append_array([aa,dd,cc])
	return vertices

static func _arch(vertices: Array[Vector3],center: Vector3,side: Vector2i) -> void:
	var normal := Vector3(side.x,0,side.y)
	var tangent := Vector3(side.y,0,-side.x)
	var origin := center+normal*0.74+Vector3.UP*0.12
	for segment in range(12):
		var a := PI*segment/12.0
		var b := PI*(segment+1)/12.0
		var da := tangent*cos(a)+Vector3.UP*sin(a)
		var db := tangent*cos(b)+Vector3.UP*sin(b)
		for sign_value: float in [-1.0,1.0]:
			var front: Vector3 = origin+normal*0.07*sign_value
			_quad(vertices,front+da*0.69,front+db*0.69,front+db*0.60,front+da*0.60,normal*sign_value)
		_quad(vertices,origin+da*0.69+normal*0.07,origin+da*0.69-normal*0.07,origin+db*0.69-normal*0.07,origin+db*0.69+normal*0.07,(da+db).normalized())
		_quad(vertices,origin+da*0.60+normal*0.07,origin+db*0.60+normal*0.07,origin+db*0.60-normal*0.07,origin+da*0.60-normal*0.07,-(da+db).normalized())

static func _quad(vertices: Array[Vector3],a: Vector3,b: Vector3,c: Vector3,d: Vector3,normal: Vector3) -> void:
	if (b-a).cross(c-a).dot(normal)>0.0: vertices.append_array([a,b,c,a,c,d])
	else: vertices.append_array([a,c,b,a,d,c])

static func _bronze(renderer) -> StandardMaterial3D:
	if not renderer.materials.has("tower_bronze"):
		var material := StandardMaterial3D.new()
		material.albedo_color = Color("88794e")
		material.metallic = 0.38
		material.roughness = 0.72
		renderer.materials["tower_bronze"] = material
	return renderer.materials["tower_bronze"]

static func _bell(renderer,parent: Node3D,top: Vector3) -> Dictionary:
	var scene: PackedScene = load(BELL_PATH)
	var bell: Node3D = scene.instantiate()
	parent.add_child(bell)
	var inverse := parent.global_transform.affine_inverse()
	var bounds := AABB()
	var first := true
	for part: MeshInstance3D in bell.find_children("*","MeshInstance3D",true,false):
		var native_bounds: AABB = (inverse*part.global_transform)*part.mesh.get_aabb()
		bounds = native_bounds if first else bounds.merge(native_bounds)
		first = false
		part.material_override = _bronze(renderer)
	var scale_value := 0.44/maxf(bounds.size.x,bounds.size.z)
	# Imported root scale and child center correction remain intact. Add a
	# separate parent frame rather than replacing those original transforms.
	var frame := Node3D.new()
	parent.add_child(frame)
	bell.reparent(frame,true)
	frame.scale = Vector3.ONE*scale_value
	frame.position = top-Vector3(bounds.get_center().x,bounds.end.y,bounds.get_center().z)*scale_value
	return {"center":top-Vector3.UP*bounds.size.y*scale_value*0.5,"size":bounds.size*scale_value}

extends RefCounted
## One greenhouse per chosen terrace row. Original metric glass/iron geometry;
## original terrace bodies own exactly the same glass triangles for picking.
const GlassShader := preload("res://scripts/visual/shaders/creation_conservatory_glass.gdshader")
const UNIT := 1.8
const ARCH_SEGMENTS := 10
const SPRING := 1.08
const RISE := 0.50
const FLOOR_OFFSET := 0.19
var glass_material: ShaderMaterial
var clockwork_glass_material: ShaderMaterial
var palace_glass_material: ShaderMaterial
var roof_glass_material: ShaderMaterial
var iron_roof_glass_material: ShaderMaterial
var evening := false
var response := 0.0

func set_light(value: bool,amount: float = 0.0) -> void:
	evening = value
	response = clampf(amount,0.0,1.0)
	if glass_material!=null:
		glass_material.set_shader_parameter("evening",1.0 if evening else 0.0)
		glass_material.set_shader_parameter("response",response)
	if clockwork_glass_material!=null:
		clockwork_glass_material.set_shader_parameter("evening",1.0 if evening else 0.0)
		clockwork_glass_material.set_shader_parameter("response",response)
	if palace_glass_material!=null:
		palace_glass_material.set_shader_parameter("evening",1.0 if evening else 0.0)
		palace_glass_material.set_shader_parameter("response",response)
	if roof_glass_material!=null:
		roof_glass_material.set_shader_parameter("evening",1.0 if evening else 0.0)
		roof_glass_material.set_shader_parameter("response",response)
	if iron_roof_glass_material!=null:
		iron_roof_glass_material.set_shader_parameter("evening",1.0 if evening else 0.0)
		iron_roof_glass_material.set_shader_parameter("response",response)

func _glass_material(clockwork: bool=false) -> ShaderMaterial:
	if clockwork:
		if clockwork_glass_material==null:
			clockwork_glass_material=ShaderMaterial.new();clockwork_glass_material.shader=GlassShader
			clockwork_glass_material.set_shader_parameter("warmth",1.0)
			clockwork_glass_material.set_shader_parameter("night_energy",.38)
			set_light(evening,response)
		return clockwork_glass_material
	if glass_material==null:
		glass_material=ShaderMaterial.new()
		glass_material.shader=GlassShader
		set_light(evening,response)
	return glass_material

func ensure_material(clockwork: bool=false) -> ShaderMaterial:
	return _glass_material(clockwork)

func ensure_roof_material(iron_conservatory:bool=false)->ShaderMaterial:
	if roof_glass_material==null:
		roof_glass_material=ShaderMaterial.new();roof_glass_material.shader=GlassShader
		roof_glass_material.set_shader_parameter("warmth",1.)
		roof_glass_material.set_shader_parameter("night_energy",.65)
		roof_glass_material.set_shader_parameter("night_opacity",.10)
		set_light(evening,response)
	if not iron_conservatory:return roof_glass_material
	if iron_roof_glass_material==null:
		iron_roof_glass_material=roof_glass_material.duplicate()
		iron_roof_glass_material.set_shader_parameter("night_energy",.65*.62)
	return iron_roof_glass_material

func ensure_palace_material()->ShaderMaterial:
	if palace_glass_material==null:
		palace_glass_material=ShaderMaterial.new();palace_glass_material.shader=GlassShader
		palace_glass_material.set_shader_parameter("warmth",.12)
		palace_glass_material.set_shader_parameter("night_energy",4.)
		palace_glass_material.set_shader_parameter("night_opacity",.22)
		set_light(evening,response)
	return palace_glass_material

func build(renderer,root: Node3D,house: Dictionary,plan: Dictionary) -> void:
	if plan.is_empty(): return
	var bounds: Rect2 = plan.bounds
	var along_x := str(plan.axis)=="x"
	var center: Vector2 = plan.center
	var floor_y := float(plan.base_y)+FLOOR_OFFSET
	var half := (bounds.size.y if along_x else bounds.size.x)*0.5-0.11
	var length := (bounds.size.x if along_x else bounds.size.y)-0.20
	var low := -length*0.5
	var high := length*0.5
	var iron: Material = renderer._material(Color("34524a"),0.76)
	var rim: Material = renderer._material(Color("52685a"),0.82)
	var pots: Material = renderer._material(Color("ad8163"),0.94)
	var frame := Node3D.new()
	frame.name="ConservatoryIronAndPlants"
	root.add_child(frame)
	var parts := 0
	# Five or fewer structural ribs: one at each original cell boundary.
	var ribs: Array = [low]
	for index in range(1,plan.cells.size()): ribs.append(low+float(index)*UNIT-0.10)
	ribs.append(high)
	for along: float in ribs:
		for side: float in [-1.0,1.0]:
			var a := _point(center,along,side*half,floor_y,along_x)
			var b := _point(center,along,side*half,floor_y+SPRING,along_x)
			_beam(renderer,frame,a,b,0.045,iron);parts+=1
		for segment in range(ARCH_SEGMENTS):
			var a := _arch(center,along,float(segment)/ARCH_SEGMENTS,half,floor_y,along_x)
			var b := _arch(center,along,float(segment+1)/ARCH_SEGMENTS,half,floor_y,along_x)
			_beam(renderer,frame,a,b,0.043,iron);parts+=1
	for side: float in [-1.0,1.0]:
		for y: float in [0.06,SPRING]:
			_beam(renderer,frame,_point(center,low,side*half,floor_y+y,along_x),_point(center,high,side*half,floor_y+y,along_x),0.055,iron);parts+=1
	for fraction: float in [0.25,0.5,0.75]:
		_beam(renderer,frame,_arch(center,low,fraction,half,floor_y,along_x),_arch(center,high,fraction,half,floor_y,along_x),0.035,rim);parts+=1
	# End-wall frames contain a central tall doorway, with clear glass beside it.
	for along: float in [low,high]:
		for cross: float in [-0.32,0.32]:
			_beam(renderer,frame,_point(center,along,cross,floor_y,along_x),_point(center,along,cross,floor_y+1.23,along_x),0.045,iron);parts+=1
		_beam(renderer,frame,_point(center,along,-0.32,floor_y+1.23,along_x),_point(center,along,0.32,floor_y+1.23,along_x),0.045,iron);parts+=1
	var roof_count := 0
	var glass_count := 0
	var glass_nodes: Array[String] = []
	for index in range(plan.cells.size()):
		var cell: Dictionary = plan.cells[index]
		var cell_center := Vector2(float(house.origin[0])+int(cell.x)*UNIT,float(house.origin[1])+int(cell.z)*UNIT)
		var cell_along := cell_center.x-center.x if along_x else cell_center.y-center.y
		var a := maxf(low,cell_along-UNIT*0.5)
		var b := minf(high,cell_along+UNIT*0.5)
		var faces: Array[Vector3] = []
		for segment in range(ARCH_SEGMENTS):
			var p := _arch(center,a,float(segment)/ARCH_SEGMENTS,half,floor_y,along_x)
			var q := _arch(center,b,float(segment)/ARCH_SEGMENTS,half,floor_y,along_x)
			var r := _arch(center,b,float(segment+1)/ARCH_SEGMENTS,half,floor_y,along_x)
			var s := _arch(center,a,float(segment+1)/ARCH_SEGMENTS,half,floor_y,along_x)
			var middle := (p+q+r+s)*0.25-Vector3(center.x,floor_y+SPRING,center.y)
			_quad(faces,p,q,r,s,Vector3(middle.x,1.0,middle.z))
		roof_count+=ARCH_SEGMENTS*2
		for side: float in [-1.0,1.0]:
			_quad(faces,_point(center,a,side*half,floor_y+0.06,along_x),_point(center,b,side*half,floor_y+0.06,along_x),_point(center,b,side*half,floor_y+SPRING,along_x),_point(center,a,side*half,floor_y+SPRING,along_x))
		if index==0: _end_glass(faces,center,low,half,floor_y,along_x)
		if index==plan.cells.size()-1: _end_glass(faces,center,high,half,floor_y,along_x)
		var mesh: MeshInstance3D = renderer._triangles(root,faces,Color.WHITE)
		mesh.name="ConservatoryGlass_"+str(cell.id)
		mesh.material_override=_glass_material(renderer.state.house_era(house)=="clockwork")
		mesh.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
		mesh.set_meta("creation_live_visual",true)
		mesh.set_meta("house_id",str(house.id))
		mesh.set_meta("cell_id",str(cell.id))
		glass_nodes.append(str(mesh.name))
		glass_count+=faces.size()/3
		var cell_node := root.get_node(str(cell.id)) as Node3D
		var body: StaticBody3D
		for child: Node in cell_node.get_children():
			if child is StaticBody3D: body=child;break
		var shape := ConcavePolygonShape3D.new()
		shape.backface_collision=true
		var collision_faces := PackedVector3Array()
		var local := body.global_transform.affine_inverse()*root.global_transform
		for point: Vector3 in mesh.mesh.get_faces(): collision_faces.append(local*point)
		shape.set_faces(collision_faces)
		var collision := CollisionShape3D.new()
		collision.name="ConservatoryGlassPick"
		collision.shape=shape
		body.add_child(collision)
		# Paired plants stay below the spring line, clear of the central aisle.
		for side: float in [-1.0,1.0]:
			var at := _point(center,cell_along,side*half*0.63,floor_y,along_x)
			renderer._cylinder(frame,0.13,0.17,0.22,at+Vector3.UP*0.11,pots,8)
			renderer._cylinder(frame,0.18,0.18,0.035,at+Vector3.UP*0.225,pots,8)
			renderer._crown(frame,at+Vector3.UP*0.37,Vector3(0.22,0.19,0.19),Color("63845c"))
			renderer._crown(frame,at+Vector3(0.075,0.54,-0.025),Vector3(0.16,0.15,0.15),Color("7d985f"))
			for flower in range(3):
				var offset := Vector3(sin(flower*2.4)*0.12,0.55+flower*0.035,cos(flower*2.4)*0.11)
				renderer._crown(frame,at+offset,Vector3(0.055,0.045,0.055),Color("d4ae8e") if side<0.0 else Color("c1c08b"))
			parts+=7
	var report := plan.duplicate(true)
	report.merge({"roof_triangles":roof_count,"glass_triangles":glass_count,"parts":parts,"glass_nodes":glass_nodes,"arch_segments":ARCH_SEGMENTS,"spring":SPRING,"rise":RISE,"floor_y":floor_y,"glass_shared":true})
	root.set_meta("conservatory",report)

static func _point(center: Vector2,along: float,cross: float,y: float,along_x: bool) -> Vector3:
	return Vector3(center.x+along,y,center.y+cross) if along_x else Vector3(center.x+cross,y,center.y+along)

static func _arch(center: Vector2,along: float,t: float,half: float,floor_y: float,along_x: bool) -> Vector3:
	var angle := PI*t
	return _point(center,along,-cos(angle)*half,floor_y+SPRING+sin(angle)*RISE,along_x)

static func _quad(faces: Array[Vector3],a: Vector3,b: Vector3,c: Vector3,d: Vector3,normal: Vector3 = Vector3.ZERO) -> void:
	if not normal.is_zero_approx() and (b-a).cross(c-a).dot(normal)<0.0: faces.append_array([a,c,b,a,d,c])
	else: faces.append_array([a,b,c,a,c,d])

static func _end_glass(faces: Array[Vector3],center: Vector2,along: float,half: float,floor_y: float,along_x: bool) -> void:
	for edges: Vector2 in [Vector2(-half,-0.32),Vector2(0.32,half)]:
		_quad(faces,_point(center,along,edges.x,floor_y+0.06,along_x),_point(center,along,edges.y,floor_y+0.06,along_x),_point(center,along,edges.y,floor_y+SPRING,along_x),_point(center,along,edges.x,floor_y+SPRING,along_x))
	# Curved fan closes the arched end above the wall, without an invisible box.
	for segment in range(ARCH_SEGMENTS):
		faces.append_array([_point(center,along,0,floor_y+SPRING,along_x),_arch(center,along,float(segment)/ARCH_SEGMENTS,half,floor_y,along_x),_arch(center,along,float(segment+1)/ARCH_SEGMENTS,half,floor_y,along_x)])

static func _beam(renderer,parent: Node3D,a: Vector3,b: Vector3,width: float,material: Material) -> void:
	var delta := b-a
	var node: MeshInstance3D = renderer._box(parent,Vector3(width,delta.length(),width),(a+b)*0.5,material)
	var up := delta.normalized()
	var right := Vector3.FORWARD.cross(up)
	if right.length_squared()<0.00001: right=Vector3.RIGHT.cross(up)
	right=right.normalized()
	node.basis=Basis(right,up,right.cross(up))

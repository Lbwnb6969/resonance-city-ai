class_name CityCreationFoliage
extends RefCounted
## Original clustered silhouettes. Mesh and material caches are shared by every
## vegetation block; no tree allocates its own material or runs a CPU wind loop.
## Tiny Glade's recovered Grass2 semantics informed height tint, instance-scale
## variation and height-weighted wind, not these authored vertices or colours.

const SIDES := 14
const RINGS := 6
var _parts: Dictionary = {}
var _materials: Dictionary = {}

func parts(kind: String, variant: int) -> Dictionary:
	variant = posmod(variant, 3)
	var key := "%s:%d" % [kind, variant]
	if _parts.has(key): return _parts[key]
	var leaves := _geometry()
	var wood := _geometry()
	var rng := RandomNumberGenerator.new()
	rng.seed = 7391 + variant * 223 + {"olive":31,"cypress":71,"shrub":113}.get(kind,113)
	match kind:
		"olive": _olive(leaves, wood, rng, variant)
		"cypress": _cypress(leaves, wood, rng, variant)
		"golden_tree":_golden(leaves,wood,rng,variant)
		"pink_flower","white_flower","yellow_flower":_flowers(leaves,wood,rng,variant,kind)
		_: _shrub(leaves, rng, variant)
	var result := {"canopy":_mesh(leaves)}
	if not wood.vertices.is_empty(): result["trunk"] = _mesh(wood)
	_parts[key] = result
	return result

func material(part: String) -> Material:
	if _materials.has(part): return _materials[part]
	var result: Material
	if part == "trunk":
		var wood := StandardMaterial3D.new()
		wood.vertex_color_use_as_albedo = true
		wood.albedo_color = Color.WHITE
		wood.roughness = 1.0
		wood.specular_mode = BaseMaterial3D.SPECULAR_DISABLED
		result = wood
	else:
		var shader := preload("res://scripts/visual/shaders/creation_foliage.gdshader")
		var foliage := ShaderMaterial.new()
		foliage.shader = shader
		foliage.set_shader_parameter("micro_normal_strength",.045)
		foliage.set_shader_parameter("transmission_strength",.32)
		result = foliage
	_materials[part] = result
	return result

func _geometry() -> Dictionary:
	return {"vertices":PackedVector3Array(),"normals":PackedVector3Array(),"colors":PackedColorArray(),"indices":PackedInt32Array()}

func _mesh(data: Dictionary) -> ArrayMesh:
	var arrays: Array = []
	arrays.resize(Mesh.ARRAY_MAX)
	arrays[Mesh.ARRAY_VERTEX] = data.vertices
	arrays[Mesh.ARRAY_NORMAL] = data.normals
	arrays[Mesh.ARRAY_COLOR] = data.colors
	arrays[Mesh.ARRAY_INDEX] = data.indices
	var result := ArrayMesh.new()
	result.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES, arrays)
	return result

func _olive(leaves: Dictionary, wood: Dictionary, rng: RandomNumberGenerator, variant: int) -> void:
	var lean := Vector3(-0.11 + variant * 0.11, 0.0, 0.06)
	var fork := Vector3(lean.x,1.26,lean.z)
	_branch(wood,Vector3.ZERO,fork,.105,.059)
	# Staggered branch fans leave an open vertical aperture and side windows.
	for arm in range(4):
		var angle := float(arm)*TAU/4.+variant*.49+.18
		var reach := .72+rng.randf_range(-.04,.08)
		var end := fork+Vector3(cos(angle)*reach,[.32,.71,.49,.91][arm],sin(angle)*reach)
		_branch(wood,fork,end,.052,.022)
		for twig in range(2):
			var phase: float=angle+(-.48 if twig==0 else .53)
			var tip := end+Vector3(cos(phase)*.23,.14+twig*.13,sin(phase)*.23)
			_branch(wood,end,tip,.023,.009)
			_lobe(leaves,tip+Vector3(0,.08,0),Vector3(.26,.28,.23),rng,"olive",2.9)
		var upper := end+Vector3(-sin(angle)*.13,.43,cos(angle)*.13)
		_branch(wood,end,upper,.019,.008)
		_lobe(leaves,upper,Vector3(.23,.27,.22),rng,"olive",2.9)

func _cypress(leaves: Dictionary, wood: Dictionary, rng: RandomNumberGenerator, variant: int) -> void:
	var bend := Vector3(0.035 * (variant - 1),0,0.025)
	_branch(wood, Vector3.ZERO, Vector3(bend.x,1.45,bend.z), 0.08, 0.043,"cypress")
	_branch(wood, Vector3(bend.x,1.45,bend.z), Vector3(bend.x * 2,3.03,bend.z * 2), 0.043, 0.014,"cypress")
	# Narrow spiral fans along the axis keep a cypress silhouette without cones.
	for fan in range(10):
		var t := clampf((float(fan)+.17*sin(fan*1.7+variant*.4))/9.0,0.,1.)
		var angle := fan * deg_to_rad(137.5) + variant * 0.61
		var radial := lerpf(0.25,0.075,t)*(1.+.12*sin(fan*2.1+variant))
		var center := bend + Vector3(cos(angle) * radial,0.79 + t * 2.12,sin(angle) * radial)
		var radius := lerpf(0.29,0.13,t)
		_lobe(leaves, center, Vector3(radius,0.45 - t * 0.12,radius * 0.89), rng, "cypress", 3.5)
		if fan < 8:
			_branch(wood,Vector3(bend.x,center.y - 0.16,bend.z),center,0.022 - t * 0.010,0.009,"cypress")
	_lobe(leaves, Vector3(bend.x * 2,3.24,bend.z * 2), Vector3(0.115,0.27,0.10), rng, "cypress",3.5)

func _golden(leaves:Dictionary,wood:Dictionary,rng:RandomNumberGenerator,variant:int)->void:
	var fork:=Vector3(.08*(variant-1),1.35,.03)
	_branch(wood,Vector3.ZERO,fork,.12,.055,"golden_tree")
	# No central cap: six ascending boughs carry independent small sprays.
	for arm:int in range(6):
		var angle:float=arm*TAU/6.+variant*.43
		var reach:float=.91+rng.randf()*.12
		var end:=fork+Vector3(cos(angle)*reach,.47+posmod(arm*2,5)*.14,sin(angle)*reach)
		_branch(wood,fork,end,.045,.016,"golden_tree")
		_lobe(leaves,end+Vector3(0,.12,0),Vector3(.32,.32,.29),rng,"golden",3.1)
		for sub in range(2):
			var phase:float=angle+(-.58 if sub==0 else .62)
			var tip:=end+Vector3(cos(phase)*.31,.22+sub*.17,sin(phase)*.31)
			_branch(wood,end,tip,.017,.007,"golden_tree")
			_lobe(leaves,tip,Vector3(.23,.26,.22),rng,"golden",3.1)

func _flowers(leaves:Dictionary,wood:Dictionary,rng:RandomNumberGenerator,variant:int,kind:String)->void:
	var petal:Color={"pink_flower":Color("ef9db3"),"white_flower":Color("fff5dc"),"yellow_flower":Color("efc44f")}[kind]
	for stem:int in range(7):
		var angle:float=stem*2.39996+variant*.6
		var at:=Vector3(cos(angle),0,sin(angle))*(.09+float(stem)*.038)
		var top:=at+Vector3(0,.24+rng.randf()*.24,0)
		_branch(wood,at,top,.014,.008,"flower")
		_lobe(leaves,at+Vector3(.025,.12,0),Vector3(.12,.055,.06),rng,"shrub",.55)
		for petal_index:int in range(5):
			var phase:float=petal_index*TAU/5.
			var before:int=leaves.colors.size()
			_lobe(leaves,top+Vector3(cos(phase)*.065,0,sin(phase)*.065),Vector3(.070,.035,.055),rng,"shrub",.55)
			for i:int in range(before,leaves.colors.size()):leaves.colors[i]=Color(petal.lightened(rng.randf()*.08),1.)
		var before:int=leaves.colors.size()
		_lobe(leaves,top+Vector3(0,.02,0),Vector3(.032,.025,.032),rng,"shrub",.55)
		for i:int in range(before,leaves.colors.size()):leaves.colors[i]=Color("c58a31")

func _shrub(leaves: Dictionary, rng: RandomNumberGenerator, variant: int) -> void:
	for lobe in range(6):
		var angle := lobe * TAU / 6.0 + variant * 0.53
		var radial := rng.randf_range(0.27,0.34)
		var center := Vector3(cos(angle) * radial,0.29 + rng.randf_range(-0.035,0.04),sin(angle) * radial)
		_lobe(leaves,center,Vector3(0.30,0.26,0.28),rng,"shrub",0.86)
	for lobe in range(2):
		var center := Vector3(-0.14 + lobe * 0.27,0.57 + rng.randf_range(-0.04,0.03),0.06)
		_lobe(leaves,center,Vector3(0.29,0.25,0.31),rng,"shrub",0.86)

func _lobe(data: Dictionary, center: Vector3, radius: Vector3, rng: RandomNumberGenerator, kind: String, height: float) -> void:
	var first: int = data.vertices.size()
	var phase := rng.randf_range(0,TAU)
	var twist := rng.randf_range(-0.26,0.26)
	var hue := rng.randf_range(-0.035,0.035)
	_leaf_vertex(data,center+preload("res://scripts/visual/city_creation_canopy_shape.gd").point(0.,0.,phase,radius,kind),Vector3.UP,kind,height,hue)
	for ring in range(1,RINGS + 1):
		var theta := PI * ring / float(RINGS + 1)
		for side in range(SIDES):
			var angle := TAU * side / float(SIDES) + twist * sin(theta)
			var shape=preload("res://scripts/visual/city_creation_canopy_shape.gd")
			var position:Vector3=center+shape.point(theta,angle,phase,radius,kind)
			var normal:Vector3=shape.normal(theta,angle,phase,radius,kind)
			_leaf_vertex(data,position,normal,kind,height,hue)
	var bottom: int = data.vertices.size()
	_leaf_vertex(data,center+preload("res://scripts/visual/city_creation_canopy_shape.gd").point(PI,0.,phase,radius,kind),Vector3.DOWN,kind,height,hue)
	for side in range(SIDES):
		var next := (side + 1) % SIDES
		# Clockwise from outside, the convention used by Godot mesh surfaces.
		_triangle(data,first,first + 1 + side,first + 1 + next)
		for ring in range(RINGS - 1):
			var a := first + 1 + ring * SIDES + side
			var b := first + 1 + ring * SIDES + next
			_triangle(data,a,a + SIDES,b)
			_triangle(data,b,a + SIDES,b + SIDES)
		var a := first + 1 + (RINGS - 1) * SIDES + side
		var b := first + 1 + (RINGS - 1) * SIDES + next
		_triangle(data,a,bottom,b)

func _leaf_vertex(data: Dictionary, position: Vector3, normal: Vector3, kind: String, height: float, hue: float) -> void:
	var t := clampf(position.y / height,0.0,1.0)
	var low := Color("566c43")
	var high := Color("a7b778")
	if kind == "cypress":
		low = Color("3f6450")
		high = Color("81a17b")
	elif kind == "golden":
		low=Color("b77b31");high=Color("e4bf52")
	elif kind == "shrub":
		low = Color("57703f")
		high = Color("a1b86c")
	var color := low.lerp(high,smoothstep(0.14,1.0,t))
	color.r = clampf(color.r + hue,0.0,1.0)
	color.g = clampf(color.g + hue * 0.65,0.0,1.0)
	color.b = clampf(color.b + hue * 0.4,0.0,1.0)
	color.a = t
	data.vertices.append(position)
	data.normals.append(normal)
	data.colors.append(color)

func _branch(data: Dictionary, start: Vector3, end: Vector3, radius_start: float, radius_end: float, kind:String="olive") -> void:
	preload("res://scripts/visual/city_creation_bough_curve.gd").append(data,start,end,radius_start,radius_end,kind)

func _triangle(data: Dictionary, a: int, b: int, c: int) -> void:
	data.indices.append(a)
	data.indices.append(b)
	data.indices.append(c)

class_name CityCreationFoliage
extends RefCounted
## Original clustered silhouettes. Mesh and material caches are shared by every
## vegetation block; no tree allocates its own material or runs a CPU wind loop.
## Tiny Glade's recovered Grass2 semantics informed height tint, instance-scale
## variation and height-weighted wind, not these authored vertices or colours.

const SIDES := 10
const RINGS := 4
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
		var shader := Shader.new()
		shader.code = """
shader_type spatial;
render_mode specular_disabled;
varying float leaf_height;
void vertex() {
	vec3 world = (MODEL_MATRIX * vec4(VERTEX, 1.0)).xyz;
	float phase = world.x * 0.37 + world.z * 0.29;
	float gust = sin(TIME * 1.19 + phase) + 0.35 * sin(TIME * 2.31 + phase * 1.7);
	float weight = COLOR.a * COLOR.a;
	VERTEX.x += gust * 0.047 * weight;
	VERTEX.z += sin(TIME * 0.93 + phase + 1.2) * 0.033 * weight;
	leaf_height = COLOR.a;
}
void fragment() {
	ALBEDO = COLOR.rgb;
	ROUGHNESS = 0.96;
	SPECULAR = 0.0;
	AO = mix(0.82, 1.0, leaf_height);
	EMISSION = COLOR.rgb * 0.018;
}
void light() {
	float ndl = dot(NORMAL, LIGHT);
	float wrapped = clamp((ndl + 0.32) / 1.32, 0.0, 1.0);
	float transmitted = pow(max(-ndl, 0.0), 2.0) * 0.12;
	DIFFUSE_LIGHT += ALBEDO * LIGHT_COLOR * ATTENUATION * (wrapped + transmitted) / 3.14159265;
}
"""
		var foliage := ShaderMaterial.new()
		foliage.shader = shader
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
	_branch(wood, Vector3.ZERO, Vector3(lean.x * 0.5,0.72,0), 0.105, 0.082)
	_branch(wood, Vector3(lean.x * 0.5,0.72,0), fork, 0.082, 0.059)
	# Broad, asymmetric branch forks leave small apertures beneath the crown.
	for arm in range(4):
		var angle := float(arm) * TAU / 4.0 + float(variant) * 0.49 + 0.18
		var reach := 0.46 + rng.randf_range(-0.05,0.09)
		var end := fork + Vector3(cos(angle) * reach,0.48 + rng.randf_range(0.0,0.2),sin(angle) * reach)
		_branch(wood, fork, end, 0.052, 0.022)
		for twig in range(2):
			var split_angle := angle + (-0.53 if twig == 0 else 0.57)
			var tip := end + Vector3(cos(split_angle) * 0.19,0.18,sin(split_angle) * 0.19)
			_branch(wood, end, tip, 0.023, 0.011)
			_lobe(leaves, tip + Vector3(0,0.18,0), Vector3(0.36,0.38 + rng.randf_range(0.0,0.08),0.34), rng, "olive", 2.9)
	# Four upper crowns form an uneven vaulted top, rather than stacked balls.
	for top in range(4):
		var angle := float(top) * TAU / 4.0 + 0.7 + variant * 0.49
		var center := lean + Vector3(cos(angle) * 0.32,2.28 + rng.randf_range(-0.06,0.09),sin(angle) * 0.29)
		_lobe(leaves, center, Vector3(0.40,0.44,0.38), rng, "olive", 2.9)

func _cypress(leaves: Dictionary, wood: Dictionary, rng: RandomNumberGenerator, variant: int) -> void:
	var bend := Vector3(0.035 * (variant - 1),0,0.025)
	_branch(wood, Vector3.ZERO, Vector3(bend.x,1.45,bend.z), 0.08, 0.043)
	_branch(wood, Vector3(bend.x,1.45,bend.z), Vector3(bend.x * 2,3.03,bend.z * 2), 0.043, 0.014)
	# Narrow spiral fans along the axis keep a cypress silhouette without cones.
	for fan in range(10):
		var t := float(fan) / 9.0
		var angle := fan * 2.39996 + variant * 0.61
		var radial := lerpf(0.25,0.075,t)
		var center := bend + Vector3(cos(angle) * radial,0.79 + t * 2.12,sin(angle) * radial)
		var radius := lerpf(0.29,0.13,t)
		_lobe(leaves, center, Vector3(radius,0.45 - t * 0.12,radius * 0.89), rng, "cypress", 3.5)
		if fan < 8:
			_branch(wood,Vector3(bend.x,center.y - 0.16,bend.z),center,0.022 - t * 0.010,0.009)
	_lobe(leaves, Vector3(bend.x * 2,3.24,bend.z * 2), Vector3(0.115,0.27,0.10), rng, "cypress",3.5)

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
	_leaf_vertex(data,center + Vector3(0,radius.y,0),Vector3.UP,kind,height,hue)
	for ring in range(1,RINGS + 1):
		var theta := PI * ring / float(RINGS + 1)
		for side in range(SIDES):
			var angle := TAU * side / float(SIDES) + twist * sin(theta)
			var wave := 1.0 + 0.10 * sin(angle * 3.0 + phase) * sin(theta) + 0.055 * sin(angle * 5.0 - phase + theta * 2.0)
			var unit := Vector3(cos(angle) * sin(theta),cos(theta),sin(angle) * sin(theta))
			var position := center + unit * radius * wave
			var normal := Vector3(unit.x / radius.x,unit.y / radius.y,unit.z / radius.z).normalized()
			_leaf_vertex(data,position,normal,kind,height,hue)
	var bottom: int = data.vertices.size()
	_leaf_vertex(data,center - Vector3(0,radius.y,0),Vector3.DOWN,kind,height,hue)
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

func _branch(data: Dictionary, start: Vector3, end: Vector3, radius_start: float, radius_end: float) -> void:
	var first: int = data.vertices.size()
	var axis := (end - start).normalized()
	var tangent := axis.cross(Vector3.FORWARD).normalized()
	if tangent.length_squared() < 0.1: tangent = Vector3.RIGHT
	var bitangent := axis.cross(tangent).normalized()
	for ring in range(2):
		for side in range(7):
			var angle := TAU * side / 7.0
			var radial := tangent * cos(angle) + bitangent * sin(angle)
			data.vertices.append((start if ring == 0 else end) + radial * (radius_start if ring == 0 else radius_end))
			data.normals.append(radial)
			data.colors.append(Color("837155").lerp(Color("aa9673"),clampf((start.y if ring == 0 else end.y) / 3.5,0,1)))
	for side in range(7):
		var a := first + side
		var b := first + (side + 1) % 7
		_triangle(data,a,a + 7,b)
		_triangle(data,b,a + 7,b + 7)

func _triangle(data: Dictionary, a: int, b: int, c: int) -> void:
	data.indices.append(a)
	data.indices.append(b)
	data.indices.append(c)

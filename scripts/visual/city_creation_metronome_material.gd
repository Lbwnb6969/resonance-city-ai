extends RefCounted
## Architectural keys and their light overlays share the production paper shader.
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
static var _glow_shader: Shader
static var _flow_shader: Shader
static func stone(mesh: MeshInstance3D) -> void:
	var source := mesh.material_override as StandardMaterial3D
	var box: AABB = mesh.global_transform*mesh.mesh.get_aabb()
	var material := Wall.merged(Wall.source(source.albedo_color,null,"component",Wall.Kind.STONE),0.,1.7,Wall.WallShader,Vector2(box.position.y,box.end.y))
	material.set_shader_parameter("albedo_color",source.albedo_color)
	mesh.material_override = material
static func glow(flow: bool = false) -> ShaderMaterial:
	if _glow_shader == null:
		_glow_shader = Shader.new()
		_glow_shader.code = Wall.WallShader.code.replace("cull_back","cull_disabled").replace("uniform float roughness", "uniform float metronome_strength = 0.0;\nuniform float roughness").replace("ROUGHNESS = roughness;","ROUGHNESS = roughness;\n\tEMISSION = ALBEDO * metronome_strength * 0.65;\n\tALPHA = metronome_strength * 0.85;")
	if flow and _flow_shader == null:
		_flow_shader = Shader.new()
		_flow_shader.code = _glow_shader.code.replace("uniform float metronome_strength", "uniform float flow_phase = 0.0;\nuniform float metronome_strength").replace("ALPHA = metronome_strength * 0.85;","ALPHA = metronome_strength * 0.85 * (1.0-smoothstep(0.06,0.20,abs(UV.x-flow_phase)));")
		_flow_shader.code=_flow_shader.code.replace("EMISSION = ALBEDO * metronome_strength * 0.65;","float core=smoothstep(.14,.18,UV.y)*(1.0-smoothstep(.82,.86,UV.y));\n\tALBEDO=mix(vec3(.155,.054,.007),vec3(1.,.888,.445),core);\n\tEMISSION=ALBEDO*metronome_strength*.7*core;")
		_flow_shader.code=_flow_shader.code.replace("metronome_strength * 0.85 * (1.0-smoothstep(0.06,0.20,abs(UV.x-flow_phase)))","metronome_strength*(.60+.40*(1.0-smoothstep(.06,.20,abs(UV.x-flow_phase))))")
	var material := Wall.merged(Wall.source(Color("edc978"),null,"component",Wall.Kind.STONE),0.,1.7,_flow_shader if flow else _glow_shader,Vector2(0.,1.7))
	material.set_shader_parameter("albedo_color",Color("edc978"))
	return material

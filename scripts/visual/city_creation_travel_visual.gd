extends RefCounted
## One prebuilt passage ring; the shared water material carries one ripple.
const RingShader = preload("res://scripts/visual/shaders/creation_travel_ring.gdshader")
var ring: MeshInstance3D
var ring_material: ShaderMaterial
var active_kind := ""
var active_source := ""

func setup(parent: Node3D) -> void:
	ring = MeshInstance3D.new()
	ring.name = "PassageMusicRing"
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	for segment in range(64):
		var a := float(segment)*TAU/64.0
		var b := float(segment+1)*TAU/64.0
		var va := Vector3(cos(a),0,sin(a))
		var vb := Vector3(cos(b),0,sin(b))
		var vertices: Array[Vector3] = [va,vb,vb*0.86,va,vb*0.86,va*0.86]
		var uvs: Array[Vector2] = [Vector2(0,0),Vector2(1,0),Vector2(1,1),Vector2(0,0),Vector2(1,1),Vector2(0,1)]
		for index in range(6):
			surface.set_uv(uvs[index])
			surface.add_vertex(vertices[index])
	ring.mesh = surface.commit()
	ring.custom_aabb = AABB(Vector3(-1.5,-0.1,-1.5),Vector3(3,0.2,3))
	ring_material = ShaderMaterial.new()
	ring_material.shader = RingShader
	ring.material_override = ring_material
	ring.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	ring.visible = false
	parent.add_child(ring)

func update(report: Dictionary, water: ShaderMaterial, city_state: RefCounted) -> void:
	var elapsed := float(report.get("elapsed",0.0))
	var duration := float(report.get("duration",0.8))
	var audible := bool(report.get("audible",false)) and elapsed >= 0.0 and elapsed < duration
	if not audible and active_kind.is_empty(): return
	active_kind = str(report.get("kind","")) if audible else ""
	active_source = str(report.get("source_id","")) if audible else ""
	var bridge := active_kind == "bridge"
	var stepping := active_kind == "stepping"
	var arch := active_kind == "arch"
	var position: Vector2 = report.get("position",Vector2.ZERO)
	var progress := elapsed/duration if audible else 0.0
	var envelope := sin(progress*PI) if audible else 0.0
	water.set_shader_parameter("travel_ripple_strength",envelope*(0.55 if stepping else 1.0) if bridge or stepping else 0.0)
	if bridge or stepping:
		water.set_shader_parameter("travel_ripple_at",position)
		water.set_shader_parameter("travel_ripple_time",elapsed)
	ring.visible = arch
	if arch:
		var road_height := float(city_state.call("street_height",position))
		ring.position = Vector3(position.x,road_height+0.014,position.y)
		ring_material.set_shader_parameter("progress",progress)
		ring_material.set_shader_parameter("strength",envelope)

func report() -> Dictionary:
	return {"kind":active_kind,"source_id":active_source,"ring_visible":ring != null and ring.visible}

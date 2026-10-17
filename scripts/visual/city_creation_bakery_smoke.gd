extends RefCounted
const DetailLod=preload("res://scripts/visual/city_creation_detail_lod.gd")
## One shared puff mesh. Only actual attended, unblocked baking emits.
const ShaderSource=preload("res://scripts/visual/shaders/creation_bakery_smoke.gdshader")
var mesh: ArrayMesh
var material: ShaderMaterial

func build(parent: Node3D,at: Vector3) -> void:
	if mesh==null: _prepare()
	var smoke:=MeshInstance3D.new()
	smoke.name="BakerySmoke"
	smoke.mesh=mesh
	smoke.material_override=material
	smoke.position=at
	smoke.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	smoke.custom_aabb=AABB(Vector3(-0.5,-0.3,-0.5),Vector3(1.6,2.4,1.3))
	DetailLod.bind(smoke,DetailLod.SMOKE)
	smoke.visible=false
	smoke.set_meta("working",false)
	parent.add_child(smoke)

static func working(status: Dictionary) -> bool:
	return str(status.get("worker_phase",""))=="baking" and bool(status.get("open",false)) and int(status.get("stock",0))+int(status.get("batch_size",1))<=int(status.get("capacity",0))

static func update(parent: Node3D,status: Dictionary) -> void:
	# The existing resonance rig reparents independent-house visual meshes.
	var smoke:=parent.find_child("BakerySmoke",true,false) as MeshInstance3D
	if smoke==null: return
	var active:=working(status)
	smoke.visible=active
	smoke.set_meta("working",active)

func _prepare() -> void:
	var sphere:=SphereMesh.new()
	sphere.radius=1.0;sphere.height=2.0
	sphere.radial_segments=8;sphere.rings=4
	var source:=sphere.get_mesh_arrays()
	var points: PackedVector3Array=source[Mesh.ARRAY_VERTEX]
	var source_normals: PackedVector3Array=source[Mesh.ARRAY_NORMAL]
	var source_indices: PackedInt32Array=source[Mesh.ARRAY_INDEX]
	var vertices:=PackedVector3Array()
	var normals:=PackedVector3Array()
	var colors:=PackedColorArray()
	var indices:=PackedInt32Array()
	for puff in range(6):
		var offset:=vertices.size()
		vertices.append_array(points);normals.append_array(source_normals)
		for ignored in range(points.size()): colors.append(Color(float(puff)/6.0,0,0,1))
		for index in source_indices: indices.append(index+offset)
	var arrays:=[]
	arrays.resize(Mesh.ARRAY_MAX)
	arrays[Mesh.ARRAY_VERTEX]=vertices;arrays[Mesh.ARRAY_NORMAL]=normals
	arrays[Mesh.ARRAY_COLOR]=colors;arrays[Mesh.ARRAY_INDEX]=indices
	mesh=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	material=ShaderMaterial.new();material.shader=ShaderSource

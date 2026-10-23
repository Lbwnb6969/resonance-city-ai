extends SceneTree
const Safe = preload("res://scripts/visual/city_creation_safe_instances.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Edges = preload("res://scripts/visual/city_creation_path_edge.gd")
var checks := 0
var failures: Array[String] = []
func _initialize() -> void: run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)
func run() -> void:
	var multi := MultiMesh.new()
	multi.transform_format = MultiMesh.TRANSFORM_3D
	multi.use_colors = true
	multi.use_custom_data = true
	multi.mesh = SphereMesh.new()
	Safe.initialize(multi, 5)
	var initialized := multi.visible_instance_count == 0 and multi.instance_count == 5 and Safe.valid(Safe.HIDDEN) and Safe.HIDDEN.origin.y == -500.
	check(initialized, "unused GPU capacity starts buried, finite and non-singular")
	var bad := Transform3D(Basis.from_scale(Vector3.ZERO), Vector3.ZERO)
	check(Safe.append(multi, bad) == -1 and multi.visible_instance_count == 0, "singular records never enter the visible prefix")
	check(not Safe.valid(Transform3D(Basis.from_scale(Vector3.ONE*1.e30),Vector3.ZERO)), "finite matrix components with overflowing determinant are rejected")
	var a := Transform3D(Basis.IDENTITY,Vector3(2,1,3))
	check(Safe.append(multi,a,Color.RED,Color(.2,.3,.4,.5)) == 0, "first accepted instance is compacted into slot zero")
	bad.origin.x = NAN
	check(Safe.append(multi,bad) == -1 and multi.visible_instance_count == 1, "non-finite input cannot expand the visible prefix")
	var b := Transform3D(Basis.from_scale(Vector3(.12,.058,.085)),Vector3(4,1,5))
	check(Safe.append(multi,b,Color.BLUE) == 1 and multi.visible_instance_count == 2, "rejected middle records leave no visible holes")
	Safe.show_prefix(multi,1)
	check(multi.visible_instance_count == 1, "retired dynamic slots are buried before reducing draw count")
	check(not Safe.safe_set_instance(multi,0,bad), "dynamic updates also reject singular and non-finite inputs")
	check(Safe.valid(Transform3D(Basis.from_scale(Vector3(-1,1,1)),Vector3.ZERO)), "mirrored but invertible art transforms remain valid")
	var raw: Array[Vector2] = [Vector2.ZERO,Vector2(.001,0),Vector2(.003,0),Vector2(.003,0),Vector2(1,0)]
	var clean := Safe.clean_points(raw)
	check(clean == [Vector2.ZERO,Vector2(.003,0),Vector2(1,0)], "render paths drop consecutive points closer than two millimeters")
	check(raw.size() == 5, "geometry sanitation never edits authored save coordinates")
	check(Safe.clean_contour(PackedVector2Array([Vector2.ZERO,Vector2(1,0),Vector2(1,1),Vector2(.001,0)])).size() == 3, "closed contours discard near-duplicate closing vertices")
	var profile: Array = [{"xz":Vector2.ZERO,"bridge":false},{"xz":Vector2(.001,0),"bridge":true},{"xz":Vector2(1,0),"bridge":true}]
	var samples := Safe.clean_samples(profile)
	check(samples.size() == 2 and samples[-1].bridge and profile.size() == 3, "earthworks sanitation keeps surviving profile metadata without mutating the source")
	var renderer := Renderer.new()
	var road := renderer._road_samples([[0,0],[.0001,0],[.001,0],[2,0]])
	var separated := road.size() > 1
	for i: int in range(1,road.size()): separated = separated and road[i-1].distance_to(road[i]) >= .002
	check(separated, "production road sampler never publishes sub-two-millimeter segments")
	var edges := Edges.new()
	var segments: Array = edges._exposed_segments([[PackedVector2Array([Vector2.ZERO,Vector2(.001,0),Vector2(2,0),Vector2(2,2),Vector2(0,2)])]])
	var legal := not segments.is_empty()
	for contour: PackedVector2Array in edges._boundary_contours(segments):
		for i: int in range(contour.size()): legal = legal and contour[i].distance_to(contour[(i+1)%contour.size()]) >= .002
	check(legal, "production boundary tessellation filters close points after preserving intersection topology")
	var foliage:=preload("res://scripts/visual/city_creation_foliage.gd").new()
	check(foliage.SIDES==14 and foliage.RINGS==6,"painterly curved leaf topology")
	for kind:String in ["olive","golden_tree","cypress","shrub"]:
		for variant in range(3):
			var geometry:Dictionary=foliage.parts(kind,variant);var finite:=true
			for mesh:ArrayMesh in geometry.values():
				var arrays:Array=mesh.surface_get_arrays(0)
				for point:Vector3 in arrays[Mesh.ARRAY_VERTEX]:finite=finite and point.is_finite()
				for normal:Vector3 in arrays[Mesh.ARRAY_NORMAL]:finite=finite and normal.is_finite() and normal.length_squared()>.9
			check(finite,"finite curved canopy and branches "+kind+str(variant))
			check(geometry.canopy.surface_get_array_len(0)>(14*6+2)*(12 if kind=="golden_tree" else 1),"actual clustered silhouette "+kind+str(variant))
	var material:ShaderMaterial=foliage.material("canopy")
	check(material.shader==preload("res://scripts/visual/shaders/creation_foliage.gdshader") and float(material.get_shader_parameter("transmission_strength"))>.2,"shared live leaf paper and transmission shader")
	renderer.shore.free();renderer.lilypads.free();renderer.wildlife.free()
	renderer.free()
	renderer = null
	multi = null
	await process_frame
	print("RENDER_SAFETY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)

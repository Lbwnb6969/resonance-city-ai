extends SceneTree
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const Batcher = preload("res://scripts/visual/city_creation_mesh_batcher.gd")
const Eras = preload("res://scripts/world/city_creation_eras.gd")
var checks := 0
var failures: Array[String] = []
func _initialize() -> void: _run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)
func _run() -> void:
	var parent := Node3D.new(); root.add_child(parent); parent.position.y = 5.
	var original := StandardMaterial3D.new(); original.albedo_color = Color("b76546")
	original.cull_mode = BaseMaterial3D.CULL_DISABLED
	var shared := Wall.source(Color("e6d2ad"),null,"component",Wall.Kind.STONE)
	for index in range(5):
		var node := MeshInstance3D.new(); node.mesh = BoxMesh.new()
		node.position = Vector3(index*2., index*.5, 0); parent.add_child(node)
		node.material_override = original if index == 0 else shared
		if index == 0: Wall.apply(node,Wall.Kind.TERRACOTTA)
		var profile := Wall.profile(node.material_override,5.,1.7,node)
		check(profile[9] == (Wall.Kind.TERRACOTTA if index == 0 else Wall.Kind.STONE),"explicit semantic kind")
		check(profile[10] == Vector2(4.5+index*.5,5.5+index*.5),"world contact datum follows raised transformed component")
	check(not original.has_meta("creation_wall") and original.cull_mode == BaseMaterial3D.CULL_DISABLED,"shared source is never mutated")
	var batcher := Batcher.new(); var stats := batcher.merge(parent)
	check(stats.output_batches == 5,"shared stone at different heights cannot alias cached AO bounds")
	var kinds := {}; var bounds := []
	for node: MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		var material := node.material_override as ShaderMaterial
		check(material != null and material.get_meta("creation_wall_batch",false),"real output uses unified wall shader")
		check(is_equal_approx(material.get_shader_parameter("micro_normal_strength"),.025),"component receives 2.5 percent micro-normal")
		kinds[material.get_shader_parameter("surface_kind")] = true
		bounds.append(material.get_shader_parameter("component_bounds"))
		var colors: PackedColorArray = node.mesh.surface_get_arrays(0)[Mesh.ARRAY_COLOR]
		check(colors[0].to_abgr32() in [original.albedo_color.to_abgr32(),shared.albedo_color.to_abgr32()],"batch retains exact authored sRGB tint")
	check(kinds.size() == 2 and bounds.size() == 5,"semantic materials remain distinct after actual batch")
	check(Eras.IDS == ["pastoral","renaissance","clockwork","modern_eco"] and Eras.NAMES == ["古典田园河湾","文艺复兴连拱城","蒸汽钟表与花房","现代生态交响城"],"names calibrated without changing save IDs")
	parent.queue_free(); await process_frame
	print("COMPONENT_MATERIAL ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)

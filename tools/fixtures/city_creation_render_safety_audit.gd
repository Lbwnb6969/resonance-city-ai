extends RefCounted
const Safe = preload("res://scripts/visual/city_creation_safe_instances.gd")
static func multimeshes(root: Node) -> Dictionary:
	var result := {"multimeshes":0,"slots":0,"visible":0,"invalid":[]}
	for node: MultiMeshInstance3D in root.find_children("*","MultiMeshInstance3D",true,false):
		var multi := node.multimesh
		if multi == null: continue
		result.multimeshes += 1
		result.slots += multi.instance_count
		result.visible += multi.visible_instance_count
		if multi.visible_instance_count < 0 or multi.visible_instance_count > multi.instance_count: result.invalid.append(str(node.get_path())+":draw_count")
		for i: int in range(multi.instance_count):
			var transform := multi.get_instance_transform(i)
			if not Safe.valid(transform): result.invalid.append(str(node.get_path())+":"+str(i))
	return result
static func gpu_probe() -> Dictionary:
	var multi := MultiMesh.new()
	multi.transform_format = MultiMesh.TRANSFORM_3D
	multi.use_colors = true
	multi.use_custom_data = true
	multi.mesh = SphereMesh.new()
	Safe.initialize(multi,4)
	var good := Transform3D(Basis.IDENTITY,Vector3(3,2,1))
	Safe.append(multi,good,Color.RED,Color(.2,.3,.4,.5))
	Safe.append(multi,Transform3D(Basis.from_scale(Vector3.ZERO),Vector3.ZERO))
	Safe.append(multi,Transform3D(Basis.IDENTITY,Vector3.ONE),Color.BLUE)
	await RenderingServer.frame_post_draw
	var ok := multi.visible_instance_count == 2 and multi.get_instance_transform(0).is_equal_approx(good) and multi.get_instance_color(0).is_equal_approx(Color.RED) and multi.get_instance_color(1).is_equal_approx(Color.BLUE) and absf(multi.get_instance_custom_data(0).g-.3) < .001 and absf(multi.get_instance_custom_data(0).b-.4) < .001 and absf(multi.get_instance_custom_data(0).r-.2) < .001 and absf(multi.get_instance_custom_data(0).a-.5) < .001
	for i: int in range(2,4): ok = ok and multi.get_instance_transform(i).is_equal_approx(Safe.HIDDEN)
	Safe.show_prefix(multi,1)
	await RenderingServer.frame_post_draw
	ok = ok and multi.get_instance_transform(1).is_equal_approx(Safe.HIDDEN)
	return {"ok":ok,"visible_after_retire":multi.visible_instance_count,"custom":str(multi.get_instance_custom_data(0)),"color":str(multi.get_instance_color(0)),"transform":str(multi.get_instance_transform(0)),"retired":str(multi.get_instance_transform(1))}

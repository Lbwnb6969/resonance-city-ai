extends RefCounted
## Draw once with zero alpha during scene setup so the first earned arc is ready.
static func warm(parent:Node3D,material:ShaderMaterial)->void:
	var tree:=parent.get_tree();await tree.process_frame
	if not is_instance_valid(parent):return
	var camera:Camera3D=parent.get_viewport().get_camera_3d()
	var primer:=MeshInstance3D.new();primer.name="TransparentShaderPrimer"
	var mesh:=QuadMesh.new();mesh.size=Vector2(.001,.001);primer.mesh=mesh
	primer.material_override=material;primer.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	parent.add_child(primer);primer.global_transform=camera.global_transform
	primer.global_position=camera.project_position(parent.get_viewport().get_visible_rect().size*.5,1.)
	await RenderingServer.frame_post_draw
	await tree.process_frame
	if is_instance_valid(primer):primer.queue_free()

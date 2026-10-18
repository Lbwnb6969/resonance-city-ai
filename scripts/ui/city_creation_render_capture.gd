extends RefCounted
## Capture an intermittent visual fault together with its reproducible town/view.
static func capture(demo: Node3D,directory: String)->void:
	var stamp:=Time.get_datetime_string_from_system().replace(":","-")+"_"+str(Time.get_ticks_usec())
	var path:=directory+"/render_"+stamp
	var view: Dictionary={"focus":[demo.focus.x,demo.focus.y,demo.focus.z],"yaw":demo.yaw,"pitch":demo.pitch,"zoom":demo.zoom,"strolling":demo.camera_rig.strolling,"light_phase":demo.light_phase,"tool":demo.tool}
	var meshes: Array=[]
	for instance: GeometryInstance3D in demo.find_children("*","GeometryInstance3D",true,false):
		var mesh: Mesh=instance.mesh if instance is MeshInstance3D else (instance.multimesh.mesh if instance is MultiMeshInstance3D else null)
		meshes.append({"path":str(demo.get_path_to(instance)),"transform":var_to_str(instance.global_transform),"visible":instance.is_visible_in_tree(),"bounds":var_to_str(instance.get_aabb()),"mesh":mesh.resource_path if mesh!=null else "","material":instance.material_override.get_class() if instance.material_override!=null else "","range_end":instance.visibility_range_end})
	var data: Dictionary={"world":demo.state.snapshot(),"life_checkpoint":demo.life.checkpoint(),"view":view,"meshes":meshes,
		"engine":Engine.get_version_info(),"renderer":RenderingServer.get_current_rendering_method(),"gpu":RenderingServer.get_video_adapter_name(),
		"debug_draw":demo.get_viewport().debug_draw,"debug_collisions":demo.get_tree().debug_collisions_hint,"debug_navigation":demo.get_tree().debug_navigation_hint,
		"edit_pending":demo.edit_pending(),"road_drawing":demo.road_drawing,"road_points":var_to_str(demo.road_points)}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(directory))
	await RenderingServer.frame_post_draw
	var image: Image=demo.get_viewport().get_texture().get_image()
	var file:=FileAccess.open(path+".json",FileAccess.WRITE)
	if file==null:demo._message("画面现场保存失败："+error_string(FileAccess.get_open_error()));return
	file.store_string(JSON.stringify(data,"\t",true,true));file.close()
	var saved:=image.save_png(path+".png")
	if saved!=OK:demo._message("画面现场截图保存失败："+error_string(saved));return
	demo._message("画面现场已保存："+ProjectSettings.globalize_path(path+".json"))
	print("RENDER_CAPTURE ",ProjectSettings.globalize_path(path+".json"))

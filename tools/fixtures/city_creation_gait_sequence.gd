extends RefCounted
static func capture(demo,out:String,label:String,actor:Node3D)->Dictionary:
	var tree:SceneTree=demo.get_tree();var rows:Array=[];var old_processing:bool=demo.is_processing();demo.set_process(false)
	var directory:String=out+"/motion_"+label;DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(directory));demo.ui_layer.hide()
	demo.camera.projection=Camera3D.PROJECTION_PERSPECTIVE;demo.camera.fov=38.;demo.life.view_camera=demo.camera
	for i in range(24):
		demo.life._process(1./24.)
		var target:Vector3=actor.global_position+Vector3.UP*.30;demo.camera.global_position=target+Vector3(1.0,.35,1.0);demo.camera.look_at(target)
		demo.life._update_citizen_lod(0.);demo.life.flush_workers()
		preload("res://scripts/visual/city_creation_citizen_gait.gd").update(demo.life)
		await tree.process_frame;await RenderingServer.frame_post_draw
		var saved:bool=tree.root.get_texture().get_image().save_png(directory+"/%03d.png"%i)==OK
		var body:MeshInstance3D=actor.get_child(0).get_child(0)
		rows.append({"saved":saved,"time":demo.life.time,"position":actor.position,"rig":actor.get_child(0).transform,"left":body.get_blend_shape_value(0),"right":body.get_blend_shape_value(1),"inspect":body.get_blend_shape_value(2)})
	var result:={"ok":rows.all(func(row):return row.saved),"label":label,"frames":rows}
	FileAccess.open(directory+"/motion.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));demo.set_process(old_processing);return result

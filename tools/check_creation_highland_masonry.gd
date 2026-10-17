extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/高地毛石_2026-10-17"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var decoded=JSON.parse_string(FileAccess.get_file_as_string("res://数据/高地河湾样例.json"));var restored:Dictionary=demo.state.restore(decoded);_check(restored.ok,"highland sample restores")
	demo._after_edit(restored,"history")
	var deadline:=Time.get_ticks_msec()+18000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending(),"highland geometry publication completes")
	var found:=0;var textured:=0
	for node:Node in demo.town.house_roots.values():
		for plinth:Node in node.find_children("StonePlinth", "Node3D", true, false):
			found+=1
			for mesh:MeshInstance3D in plinth.find_children("*","MeshInstance3D",true,false):
				var material=mesh.material_override
				if material is StandardMaterial3D and material.albedo_texture!=null and material.albedo_texture.resource_path.ends_with("石砌街屋.png"): textured+=1
	_check(found>0,"raised highland house installs a real stone plinth")
	for node:Node in demo.town.house_roots.values():
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			var material=mesh.material_override
			if material is StandardMaterial3D and material.albedo_texture!=null and material.albedo_texture.resource_path.ends_with("石砌街屋.png"): textured+=1
	_check(textured>0,"stone plinth uses recovered Foundation rustic wall albedo")
	demo.focus=Vector3(-13,1.1,.3);demo.zoom=12;demo.yaw=-.65;demo.pitch=.72;demo._update_camera();demo.town.clear_preview()
	for ignored in range(15):await process_frame
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/01_高地毛石实景.png")==OK,"actual GL masonry image saved")
	var report={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":{"plinths":found,"textured_meshes":textured}}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("HIGHLAND_MASONRY ",JSON.stringify(report))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for p:AudioStreamPlayer in demo.music._players.values():p.stop()
	for p:AudioStreamPlayer in demo.music._effects:p.stop()
	for p:AudioStreamPlayer in demo.ambience.players.values():p.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout;quit(0 if failures.is_empty() else 1)

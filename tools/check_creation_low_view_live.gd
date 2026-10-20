extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/低视角接续_2026-10-20"
var demo
func _initialize()->void:run.call_deferred()
func shot(label:String)->void:
	for i in range(8):await process_frame
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/作品";root.add_child(demo)
	demo.life.set_process(false);demo.ui_layer.hide()
	var data=JSON.parse_string(FileAccess.get_file_as_string("res://验证记录/自由曲路接缝_2026-10-20/只读试玩副本.json"))
	var restored:Dictionary=demo.state.restore(data);assert(restored.ok)
	demo.town.rebuild();demo.life._sync()
	demo.focus=Vector3(-12,1.2,1);demo.yaw=.62;demo.zoom=18.;demo.pitch=.015
	demo.camera_rig.strolling=true;demo.camera.projection=Camera3D.PROJECTION_PERSPECTIVE;demo.camera.fov=48.
	demo._update_camera();await shot("01_低视角")
	demo.town.meadow.hide();await shot("02_无草实例");demo.town.meadow.show()
	demo.town.terrain_surface.hide();await shot("03_无地面");demo.town.terrain_surface.show()
	for edge:MeshInstance3D in demo.town.find_children("SoftRoadEdge","MeshInstance3D",true,false):edge.hide()
	await shot("04_无压边")
	for edge:MeshInstance3D in demo.town.find_children("SoftRoadEdge","MeshInstance3D",true,false):edge.show()
	for yaw:float in [.0,1.2,2.4,3.6,4.8]:
		demo.yaw=yaw;demo._update_camera();await shot("巡游_"+str(yaw))
	demo.queue_free();await process_frame;quit()

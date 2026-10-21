extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/自由曲路接缝_2026-10-20"
var demo
func _initialize()->void:run.call_deferred()
func capture(label:String)->void:
	for frame in range(12):await process_frame
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func run()->void:
	root.size=Vector2i(1440,900);Engine.max_fps=144
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/作品";root.add_child(demo)
	demo.life.set_process(false);demo.ui_layer.visible=false
	var fixture:String=OUT+"/只读试玩副本.json"
	if not FileAccess.file_exists(fixture):fixture="res://数据/四库共鸣交响大城样例.json"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var loaded:Dictionary=demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string(fixture)))
	if not loaded.ok:push_error(str(loaded));quit(1);return
	if "--paths" in OS.get_cmdline_user_args():
		for road:Dictionary in demo.state.roads:road.style="path"
		demo.state.revision+=1
	demo.town.rebuild();demo.life._sync()
	var report:Array=[]
	for road:Dictionary in demo.state.roads:
		var profile:Dictionary=demo.state.road_profile(road)
		var miny:=INF;var maxy:=-INF
		for sample:Dictionary in profile.samples:miny=minf(miny,sample.y);maxy=maxf(maxy,sample.y)
		report.append({"id":road.id,"elevated":profile.elevated,"miny":miny,"maxy":maxy})
	print("ROAD_SEAM_LIVE "+JSON.stringify({"roads":report,"fixture":fixture,"all_paths":"--paths" in OS.get_cmdline_user_args()}))
	demo.focus=Vector3(-14,.7,0);demo.zoom=24.;demo.pitch=1.1;demo.yaw=.62;demo._update_camera()
	await capture("01_当前路网")
	for edge:MeshInstance3D in demo.town.find_children("SoftRoadEdge","MeshInstance3D",true,false):edge.hide()
	await capture("02_无压边")
	for edge:MeshInstance3D in demo.town.find_children("SoftRoadEdge","MeshInstance3D",true,false):edge.show()
	demo.town.meadow.hide();await capture("03_无草实例");demo.town.meadow.show()
	demo.town.terrain_surface.hide();await capture("04_无地面");demo.town.terrain_surface.show()
	demo.sun.shadow_enabled=false
	await capture("03_无阴影")
	demo.queue_free();await process_frame;quit()

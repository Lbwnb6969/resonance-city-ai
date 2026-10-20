extends SceneTree

const Scene = preload("res://scenes/city_creation.tscn")
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _expect(value: bool, label: String) -> void:
	if not value: failures.append(label)

func _covers(faces: PackedVector3Array, point: Vector2) -> int:
	var covered := 0
	for index in range(0,faces.size(),3):
		var a := Vector2(faces[index].x,faces[index].z)
		var b := Vector2(faces[index+1].x,faces[index+1].z)
		var c := Vector2(faces[index+2].x,faces[index+2].z)
		if Geometry2D.point_is_inside_triangle(point,a,b,c): covered += 1
	return covered

func _run() -> void:
	root.size = Vector2i(1440,900)
	var demo = Scene.instantiate()
	demo.persistence = false
	root.add_child(demo)
	await process_frame
	demo.persistence = false
	var landscape_id: int = demo.town.landscape.get_instance_id()
	var house_id: int = demo.town.house_roots.h1.get_instance_id()
	var road_id: int = demo.town.road_roots.r1.get_instance_id()
	var natural_shore := "--natural-shore" in OS.get_cmdline_user_args()
	var field_id: int = demo.town.water_field.texture.get_instance_id()
	var shore_ids := {}
	for block: Vector2i in demo.town.shore.blocks: shore_ids[block]=demo.town.shore.blocks[block].get_instance_id()
	var points: Array[Vector2] = [Vector2(9,-11),Vector2(13,-11),Vector2(13,-7),Vector2(9,-7),Vector2(9,-11)]
	_expect(demo.state.add_water(points,1.8,"pond").ok,"closed pond stroke accepted")
	points = [Vector2(3,-10),Vector2(7.3,-10)]
	_expect(demo.state.add_water(points,2.4,"channel").ok,"channel joins main river and loop")
	points = [Vector2(-15,-8)]
	_expect(demo.state.add_water(points,2.8,"pond").ok,"remote pond accepted")
	points = [Vector2(12,10)]
	_expect(demo.state.add_water(points,3.2,"pond").ok,"second remote pond accepted")
	demo.town.rebuild()
	var water_build: Dictionary = demo.town.water_edit_stats.duplicate()
	var render_build: Dictionary = demo.town.rebuild_stats.duplicate()
	var field_build: Dictionary = demo.town.water_field.diagnostics()
	var shore_build: Dictionary = demo.town.shore.diagnostics()
	_expect(demo.town.landscape.get_instance_id() == landscape_id and demo.town.house_roots.h1.get_instance_id() == house_id and demo.town.road_roots.r1.get_instance_id() == road_id,"water edit preserves static landscape and unrelated objects")
	_expect(demo.town.water_field.texture.get_instance_id()==field_id,"water edit keeps the shared distance texture identity")
	_expect(demo.town.ground_material.get_shader_parameter("water_field")==demo.town.water_field.texture and demo.town.meadow.materials.lawn.get_shader_parameter("water_field")==demo.town.water_field.texture,"ground and lawn sample the same distance field")
	var retained_shore := 0
	for block: Vector2i in shore_ids:
		if block.y < -2 or block.y > 1:
			_expect(demo.town.shore.blocks.has(block) and shore_ids[block]==demo.town.shore.blocks[block].get_instance_id(),"remote water preserves unrelated shore blocks")
			retained_shore += 1
	_expect(retained_shore>0,"actual unchanged background shore blocks tested")
	var actual_faces:=PackedVector3Array()
	for mesh: MeshInstance3D in demo.town.water_layer.get_children(): actual_faces.append_array(mesh.mesh.get_faces())
	_expect(_covers(actual_faces,Vector2(11.13,-8.92))==0,"actual production water preserves island")
	_expect(_covers(actual_faces,Vector2(3.23,-9.83))==1 and _covers(actual_faces,Vector2(9.07,-8.43))==1,"actual production water has one plane at union/junction")
	var geometry = demo.town._water_polygon_mesh(demo.town.preview,demo.town._water_groups(0.53),0.022,Color.WHITE)
	var faces: PackedVector3Array = geometry.mesh.get_faces()
	_expect(_covers(faces,Vector2(11.13,-8.92)) == 0 and demo.state.water_clearance(Vector2(11.13,-8.92)) > 0,"rendered loop preserves dry island")
	_expect(_covers(faces,Vector2(9.07,-8.43)) == 1,"closed stroke water has exactly one surface")
	_expect(_covers(faces,Vector2(3.23,-9.83)) == 1,"main river/channel junction has one surface without overlap")
	var normals = geometry.mesh.surface_get_arrays(0)[Mesh.ARRAY_NORMAL]
	_expect(normals[0].y > 0.99,"water triangles face upward")
	demo.town.clear_preview()
	points = [Vector2(11,-14),Vector2(11,-4)]
	_expect(demo.state.add_road(points).ok,"bridge crosses both sides of loop")
	demo.town.rebuild()
	demo.life._sync()
	demo.focus = Vector3(0,0.7,0)
	demo.zoom = 38
	demo._update_camera()
	demo.ui_layer.visible = false
	var started := Time.get_ticks_msec()
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()-started < 12000: await process_frame
	demo.frame_samples.clear()
	for frame in range(300): await process_frame
	var report: Dictionary = demo.diagnostics()
	report.erase("world")
	report["fixture"] = "1440x900; full audio; 6 houses; 7 roads; 4 water strokes including island and junction"
	report["water_build"] = water_build
	report["render_build"] = render_build
	report["field_build"] = field_build
	report["shore_build"] = shore_build
	report["retained_shore_blocks"] = retained_shore
	var child_ids: Array[int] = []
	for child in demo.town.water_layer.get_children(): child_ids.append(child.get_instance_id())
	demo.town.rebuild()
	var retained: Array[int] = []
	for child in demo.town.water_layer.get_children(): retained.append(child.get_instance_id())
	_expect(child_ids == retained and not demo.town.water_edit_stats.changed,"unchanged water reuses its mesh")
	_expect(demo.town.water_field.diagnostics().texels_recomputed==0 and demo.town.shore.diagnostics().last_changed==0,"unchanged rebuild neither rerasterizes field nor replaces shore exemplars")
	if natural_shore:
		var field_before: PackedByteArray = demo.town.water_field.image.get_data()
		var component_ids := {}
		for key: String in demo.town.water_components: component_ids[key]=demo.town.water_components[key].get_instance_id()
		points=[Vector2(-15,8)]
		_expect(demo.state.add_water(points,2.4,"pond").ok,"single local pond fixture commits")
		demo.town.rebuild()
		report["single_pond"]={"render":demo.town.rebuild_stats.duplicate(),"water":demo.town.water_edit_stats.duplicate(),"field":demo.town.water_field.diagnostics(),"shore":demo.town.shore.diagnostics()}
		for key: String in component_ids: _expect(demo.town.water_components.has(key) and demo.town.water_components[key].get_instance_id()==component_ids[key],"new disjoint pond preserves all existing water component meshes")
		_expect(demo.town.water_field.diagnostics().texels_recomputed<1500,"single pond rasterizes only a small portion of the field")
		demo.state.undo()
		demo.town.rebuild()
		_expect(field_before==demo.town.water_field.image.get_data(),"pond undo restores exact distance bytes in the full renderer")
	_expect(not report.audio.is_empty(),"complete audible scene retains its audio report")
	report["failures"] = failures
	report["ok"] = failures.is_empty()
	var output := "res://验证记录/水岸编辑_2026-10-14"
	if natural_shore: output="res://验证记录/自然水岸_2026-10-14/water"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var file := FileAccess.open(output+"/performance.json",FileAccess.WRITE)
	file.store_string(JSON.stringify(report,"\t",true,true))
	file.close()
	await process_frame
	if DisplayServer.get_name() != "headless": root.get_texture().get_image().save_png(output+"/water_island.png")
	if natural_shore and DisplayServer.get_name()!="headless":
		demo.focus=Vector3(10,0.6,-9)
		demo.zoom=13
		demo._update_camera()
		await process_frame
		await process_frame
		root.get_texture().get_image().save_png(output+"/island_bridge_close.png")
		demo.focus=Vector3(-15,0.6,-8)
		demo.zoom=9
		demo._update_camera()
		await process_frame
		await process_frame
		root.get_texture().get_image().save_png(output+"/pond_close.png")
	print("WATER_PERFORMANCE ",JSON.stringify(report))
	demo.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)

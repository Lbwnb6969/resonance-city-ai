extends SceneTree
## Reads installed meshes and normal edit history; uses an isolated town.
const State=preload("res://scripts/world/city_creation_state.gd")
const Junctions=preload("res://scripts/world/city_creation_junctions.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/道路闭环与视角修复_2026-10-18"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func wait_edit()->void:
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	check(not demo.edit_pending() and not demo._edit_ui_pending,"normal asynchronous geometry publication completes")
func capture(label: String)->void:
	await process_frame;await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_closed_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	var city: RefCounted=demo.state
	for z in [-20.,-16.,-12.]:
		for x in [-32.,-28.,-24.,-20.]:
			if city.houses.size()<17:assert(city.add_house(Vector2(x,z)).ok)
	for level in range(1,6):assert(city.add_cell("h1",0,0,level).ok)
	var vertices: Array[Vector2]=[Vector2(-30,-4),Vector2(-18,-4),Vector2(-24,6)]
	var ids: Array[String]=[]
	for i in range(3):
		var points: Array[Vector2]=[vertices[i],vertices[(i+1)%3]]
		var added: Dictionary=city.add_road(points);check(added.ok,"public straight road builds triangle side %d"%i)
		ids.append(added.road_id)
	var authored: Array=city.roads.duplicate(true)
	var context: RefCounted=city.road_junctions()
	for id: String in ids:check(context.additions(id).is_empty(),"two terminal arms keep constant width without intersection fins: "+id)
	var preview:=Junctions.new()
	check(city.undo().ok,"normal undo opens the third side")
	var closing: Array[Vector2]=[vertices[2],vertices[0]]
	check(preview.preview_additions(city,closing).is_empty() and preview.preview_additions(city,closing).is_empty(),"both fresh and cached previews agree with committed closed corner")
	check(city.redo().ok and city.roads==authored,"redo restores exact authored road IDs points and widths")
	demo._after_edit({"ok":true,"message":"closed triangle"},"history");await wait_edit()
	var mesh_faces: Array[PackedVector2Array]=[];var shell_valid:=true
	for id: String in ids:
		var surface: MeshInstance3D=demo.town.road_roots[id].get_node("PathSurface")
		var faces:=surface.mesh.get_faces()
		for i in range(0,faces.size(),3):
			var polygon:=PackedVector2Array()
			for j in range(3):
				var at:=Vector2(faces[i+j].x,faces[i+j].z);polygon.append(at)
				var nearest:=INF
				for k in range(3):nearest=minf(nearest,at.distance_to(Geometry2D.get_closest_point_to_segment(at,vertices[k],vertices[(k+1)%3])))
				if nearest>.627:shell_valid=false
			mesh_faces.append(polygon)
	check(shell_valid,"all uploaded paving stays inside independent constant-width capsule union")
	var covered:=0;var mesh_valid:=true
	for iz in range(65):
		for ix in range(85):
			var at:=Vector2(-31.2+ix*.171+0.013,-5.2+iz*.181+0.019)
			var distance:=INF
			for k in range(3):distance=minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,vertices[k],vertices[(k+1)%3])))
			if distance>.59:continue
			covered+=1;var hits:=0
			for polygon: PackedVector2Array in mesh_faces:
				if Geometry2D.is_point_in_polygon(at,polygon):hits+=1
			if hits!=1:mesh_valid=false
	check(covered>500 and mesh_valid,"split closed-loop paving has exactly one surface at every interior sample")
	facts.pavement_samples=covered;facts.triangles=mesh_faces.size()
	check(city.road_at(Vector2(-24,0)).is_empty(),"closed triangle preserves its grass island and eraser query")
	demo.focus=Vector3(-24,.7,0);demo.zoom=18;demo.yaw=0.;demo.pitch=1.3;demo._update_camera();demo.ui_layer.visible=false;demo.town.clear_preview()
	await capture("triangle_after")
	var far_root: int=demo.town.road_roots[ids[0]].get_instance_id()
	var branch: Array[Vector2]=[vertices[2],Vector2(-24,10)]
	var added: Dictionary=city.add_road(branch)
	check(added.ok and not city.road_junctions().additions(added.road_id).is_empty(),"a real third branch restores the three-arm junction mouth")
	demo._after_edit(added,"path");await wait_edit();await capture("three_arm_junction")
	check(city.undo().ok,"remove third branch through normal undo")
	demo._after_edit({"ok":true,"message":"undo third arm"},"history");await wait_edit()
	check(demo.town.road_roots[ids[0]].get_instance_id()==far_root,"editing the opposite corner retains unrelated uploaded road root")
	demo.render_capture_directory=OUT+"/isolated_capture"
	var key:=InputEventKey.new();key.keycode=KEY_F10;key.pressed=true;root.push_input(key)
	await process_frame;await process_frame;await RenderingServer.frame_post_draw
	var reports:=DirAccess.get_files_at(demo.render_capture_directory);var captured:=false
	for report: String in reports:
		if not report.ends_with(".json"):continue
		var data: Dictionary=JSON.parse_string(FileAccess.get_file_as_string(demo.render_capture_directory+"/"+report))
		var copy:=State.new()
		captured=copy.restore(data.world).ok and data.world.houses.size()==17 and data.view.zoom==demo.zoom and not data.meshes.is_empty() and FileAccess.file_exists(demo.render_capture_directory+"/"+report.trim_suffix(".json")+".png")
	check(captured,"real F10 captures matching screenshot restorable town camera and installed mesh state")
	for i in range(48):
		demo.focus=Vector3(-8,.7,-6);demo.zoom=12. if i<24 else 38.;demo.yaw=(i%24)*TAU/24.;demo.pitch=.64 if i<24 else .38
		demo._update_camera();await capture("view_%02d"%i)
	var frames: Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort();facts.performance={"p95_ms":frames[113],"max_ms":frames[-1]}
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated scene preserves personal save bytes")
	FileAccess.open(OUT+"/closed_live.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t",true,true))
	print("CLOSED_ROADS_LIVE ",JSON.stringify({"ok":failures.is_empty(),"count":checks.size(),"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)

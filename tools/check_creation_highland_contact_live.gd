extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Highland=preload("res://scripts/visual/city_creation_highland.gd")
var output:="res://验证记录/高地接缝精修_2026-10-20/live"
var demo
var checks:=0
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func wait_publication()->void:
	var deadline:=Time.get_ticks_msec()+60000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	check(not demo.edit_pending() and not demo._edit_ui_pending,"latest geometry and interface publish completely")
func skirts()->Array[MeshInstance3D]:
	var result:Array[MeshInstance3D]=[]
	for node:MeshInstance3D in demo.town.house_roots.h7.find_children("*","MeshInstance3D",true,false):
		if node.material_override is ShaderMaterial and node.material_override.shader==Highland.ContactShader:result.append(node)
	return result
func verify_geometry(label:String)->void:
	var gap:=0.;var finite:=true;var vertices:=0
	for node:MeshInstance3D in skirts():
		for surface in range(node.mesh.get_surface_count()):
			var arrays:Array=node.mesh.surface_get_arrays(surface);var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
			vertices+=points.size()
			var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX] if arrays[Mesh.ARRAY_INDEX]!=null else PackedInt32Array()
			if indices.is_empty():
				for i in range(points.size()):indices.append(i)
			for i in range(0,indices.size(),3):
				var a:Vector3=node.global_transform*points[indices[i]];var b:Vector3=node.global_transform*points[indices[i+1]];var c:Vector3=node.global_transform*points[indices[i+2]]
				for point:Vector3 in [a,b,c,(a+b+c)/3.]:
					finite=finite and point.is_finite();gap=maxf(gap,absf(point.y-demo.state.ground_height(Vector2(point.x,point.z))-.012))
	check(vertices>0 and finite and gap<.00003,"actual published merged skirt follows current terrain: "+label)
	facts[label]={"vertices":vertices,"max_gap_error_m":gap,"meshes":skirts().size()}
func capture(label:String)->void:
	for ignored in range(5):await process_frame
	await RenderingServer.frame_post_draw
	var img:Image=root.get_texture().get_image()
	check(img.save_png(output+"/"+label+".png")==OK,"actual GL screenshot saves: "+label)
	check(demo.RenderCapture.primary_pixels(img)<=20,"no giant pure-primary surface in captured view: "+label)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var source:=FileAccess.get_file_as_bytes("res://数据/高地河湾样例.json")
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=output+"/isolated";root.add_child(demo);demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(JSON.parse_string(source.get_string_from_utf8()));check(restored.ok,"actual highland sample restores")
	demo._after_edit(restored,"history");await wait_publication();demo.life.set_process(false);demo.ui_layer.visible=false;demo.town.clear_preview()
	demo.focus=Vector3(-14.3,1.15,0.);demo.zoom=7.5;demo.yaw=-.75;demo.pitch=.48;demo._update_camera()
	verify_geometry("initial")
	for node:MeshInstance3D in skirts():node.hide()
	await capture("01_contact_hidden")
	for node:MeshInstance3D in skirts():node.show()
	await capture("02_contact_visible")
	var original_root:int=demo.town.house_roots.h7.get_instance_id()
	var original:Dictionary=demo.town.highland.contact_plan(demo.town,demo.town._house_record("h7"))
	var players:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():players.append(player.get_instance_id())
	var points:Array[Vector2]=[Vector2(-16,-1)]
	var edit:Dictionary=demo.state.add_terrain_stroke(points,"raise",1.,.25);check(edit.ok,"actual contact slope brush succeeds")
	demo._after_edit(edit,"terrain");await wait_publication();demo.life.set_process(false)
	check(original_root!=demo.town.house_roots.h7.get_instance_id(),"terrain edit replaces the actual visible house even though support minima stay unchanged")
	verify_geometry("edited");await capture("03_edited_slope")
	var ids:Array=[];var buffers:Array=[]
	for node:MeshInstance3D in skirts():ids.append(node.mesh.get_instance_id());buffers.append(node.mesh.surface_get_arrays(0))
	var palette:Dictionary=demo.state.set_house_palette("h7",1);check(palette.ok,"real house palette edit succeeds")
	var root_id:int=demo.town.house_roots.h7.get_instance_id()
	demo._after_edit(palette,"history");await wait_publication();demo.life.set_process(false)
	var next_ids:Array=[];var next_buffers:Array=[]
	for node:MeshInstance3D in skirts():next_ids.append(node.mesh.get_instance_id());next_buffers.append(node.mesh.surface_get_arrays(0))
	check(root_id==demo.town.house_roots.h7.get_instance_id() and ids==next_ids and buffers==next_buffers,"palette edit retains live skirt mesh identity and every geometry/alpha byte")
	var undo:Dictionary=demo.state.undo();demo._after_edit(undo,"history");await wait_publication()
	undo=demo.state.undo();demo._after_edit(undo,"history");await wait_publication();demo.life.set_process(false)
	verify_geometry("undo")
	check(demo.town.highland.contact_plan(demo.town,demo.town._house_record("h7"))==original,"actual published undo restores complete original skirt data")
	demo.yaw=2.35;demo.pitch=.38;demo._update_camera();await capture("04_restored_low_angle")
	var road_points:Array[Vector2]=[Vector2(-18,0),Vector2(-11.5,0)]
	var road:Dictionary=demo.state.add_road(road_points);check(road.ok,"actual elevated road crosses both highland rooms")
	demo._after_edit(road,"road");await wait_publication();demo.life.set_process(false)
	check(demo.state.house_passages("h7").size()==2,"published road opens two real arches through the highland structure")
	verify_geometry("arched");await capture("05_walk_through_arches")
	var samples:Array[float]=[];var last:=Time.get_ticks_usec()
	for frame in range(180):
		await process_frame;var now:=Time.get_ticks_usec();samples.append((now-last)/1000.);last=now
	samples.sort();facts.performance={"frames":samples.size(),"wall_p95_ms":samples[int(samples.size()*.95)],"wall_max_ms":samples[-1]}
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	check(current==players,"geometry publication retains the live music player identities")
	check(source==FileAccess.get_file_as_bytes("res://数据/高地河湾样例.json") and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"sample and personal save bytes remain unchanged")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	var file:=FileAccess.open(output+"/report.json",FileAccess.WRITE);file.store_string(JSON.stringify(report,"\t",true,true));file.close();print("HIGHLAND_CONTACT_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

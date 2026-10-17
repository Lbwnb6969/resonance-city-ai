extends SceneTree
## Real two-terrace edits and production glass geometry, with a bounded GL path.
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_conservatory_plan.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/玻璃花房_2026-10-16"
const SAMPLE="res://数据/花房河湾样例.json"
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var demo
func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _house(city)->Dictionary:
	for house:Dictionary in city.houses:
		if house.id=="h1": return house
	return {}
func _plan(city)->Dictionary: return Plan.choose(city.houses,_house(city))
func _json(data:Dictionary)->Dictionary: return JSON.parse_string(JSON.stringify(data,"",true,true))
func _cpu(city)->void:
	city.initialize();var original:Dictionary=city.snapshot()
	_check(_plan(city).is_empty(),"actual default city without upper terraces derives no glasshouse")
	var first:Dictionary=city.add_cell("h1",0,0,1,"terrace")
	_check(first.ok and _plan(city).is_empty(),"one actual supported upper terrace is insufficient")
	var second:Dictionary=city.add_cell("h1",1,0,1,"terrace");var plan:Dictionary=_plan(city)
	_check(second.ok and not plan.is_empty() and plan.cell_ids.size()==2 and plan.level==1,"two real adjacent upper terraces derive one glasshouse with their original cell identities")
	var reordered:Dictionary=_house(city).duplicate(true);reordered.cells.reverse()
	var rows:Array=city.houses.duplicate(true);rows[0]=reordered;rows.reverse()
	_check(Plan.choose(rows,reordered)==plan,"stable glasshouse plan ignores house and cell-array ordering")
	var cross:Dictionary={"id":"h999","origin":[-8,-6],"base_y":3.0,"cells":[{"id":"c999","x":0,"z":0,"level":0,"kind":"room"}]}
	rows=city.houses.duplicate(true);rows.append(cross)
	_check(Plan.choose(rows,_house(city)).is_empty(),"pure world-height overlap rejects a higher-base foreign room over the glass")
	var snapshot:Dictionary=city.snapshot();var loaded:=State.new()
	var load_result:Dictionary=loaded.restore(_json(snapshot))
	var loaded_plan:Dictionary=_plan(loaded)
	facts.json_roundtrip={"restore":load_result,"original_schema":original.schema,"snapshot_schema":snapshot.schema,"original_plan":plan,"loaded_plan":loaded_plan,"plans_equal":loaded_plan==plan}
	_check(load_result.ok and loaded_plan==plan and snapshot.schema==original.schema,"actual JSON restores identical derived glasshouse without a new schema")
	_check(not snapshot.has("conservatory") and city.houses.all(func(h):return not h.has("conservatory")) and city.life_progress==original.life_progress,"glasshouse derives without authored fields or invented life events")
	_check(city.undo().ok and _plan(city).is_empty() and city.redo().ok and _plan(city)==plan,"real terrace undo removes glasshouse and redo restores exact stable plan")
	# Rooms above a terrace remain forbidden by the existing support rule.
	# A legal supported neighboring room's real roof blocks the glass instead.
	var ground:Dictionary=city.add_cell("h1",0,-1,0,"room")
	var upper:Dictionary=city.add_cell("h1",0,-1,1,"room")
	_check(ground.ok and upper.ok and _plan(city).is_empty(),"legal neighboring upper room and its roof overhang obstruct the real two-terrace glasshouse")
	_check(city.undo().ok and city.undo().ok and _plan(city)==plan,"undo of the actual blocking construction restores the same glasshouse")
	if failures.is_empty() and not FileAccess.file_exists(SAMPLE): _check(city.save_city(SAMPLE).ok,"new playable flowerhouse sample saves from real public State edits")
	facts.plan=plan
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _audio()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id]
		var data:PackedByteArray=player.stream.data;var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(data)
		rows.append([id,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player:AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _capture(name_value:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual flowerhouse image saved: "+name_value)
func _live(city)->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var source:=FileAccess.get_file_as_bytes(SAMPLE)
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var restored:Dictionary=demo.state.restore(_json(city.snapshot()));demo._after_edit(restored,"history");await _wait()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	var node:Node3D=demo.town.house_roots.h1;var report:Dictionary=node.get_meta("conservatory",{})
	var materials:Array=[];var triangles:=0;var world_top:=-INF;var picks:=true;var rays:Array=[]
	if not report.is_empty():
		for cell:Dictionary in report.cells:
			var mesh:MeshInstance3D=node.find_child("ConservatoryGlass_"+str(cell.id),true,false)
			materials.append(mesh.material_override);triangles+=mesh.mesh.get_faces().size()/3
			for vertex:Vector3 in mesh.mesh.get_faces(): world_top=maxf(world_top,(mesh.global_transform*vertex).y)
			var at:=Vector2(_house(demo.state).origin[0],_house(demo.state).origin[1])+Vector2(cell.x,cell.z)*1.8
			var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,10,at.y),Vector3(at.x,-2,at.y),1))
			picks=picks and not hit.is_empty() and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("cell_id","")==str(cell.id) and absf(float(hit.position.y)-(float(report.base_y)+1.77))<.002
			rays.append({"cell_id":cell.id,"at":at,"hit_y":hit.get("position",Vector3.ZERO),"hit_cell":hit.collider.get_meta("cell_id","") if not hit.is_empty() else ""})
	_check(restored.ok and materials.size()==2 and picks,"actual glass roofs independently pick the two original terrace cells at their true world height")
	_check(not report.is_empty() and triangles==int(report.get("glass_triangles",0)) and absf(world_top-(float(report.base_y)+1.77))<.002,"actual preserved glass triangles form the arched top rather than an invisible box")
	var shared:bool=materials.size()==2 and materials[0]==materials[1]
	_check(shared and materials[0] is ShaderMaterial and materials[0].shader.code.contains("ALPHA =") and materials[0].shader.code.contains("blend_mix"),"actual two-cell glazing shares one transparent shader material outside opaque mesh batching")
	facts.geometry={"report":report,"actual_triangles":triangles,"world_top":world_top,"rays":rays}
	demo.focus=Vector3(-7.1,2.4,-6);demo.zoom=10;demo.yaw=.62;demo.pitch=.74;demo._update_camera();demo.town.clear_preview();await _capture("01_日光玻璃花房近景")
	var old_plan:Dictionary=_plan(demo.state)
	var a:Dictionary=demo.state.add_cell("h1",0,-1,0,"room");demo._after_edit(a,"room");await _wait()
	var b:Dictionary=demo.state.add_cell("h1",0,-1,1,"room");demo._after_edit(b,"room");await _wait()
	_check(a.ok and b.ok and demo.town.house_roots.h1.get_meta("conservatory",{}).is_empty(),"real supported neighboring-room construction removes the obstructed production glasshouse")
	demo._after_edit(demo.state.undo(),"history");await _wait();demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(_plan(demo.state)==old_plan and not demo.town.house_roots.h1.get_meta("conservatory",{}).is_empty(),"real construction undo restores the same glasshouse after renderer publication")
	demo._toggle_light();demo.focus=Vector3(-7.1,2.5,-6);demo.zoom=11;demo.yaw=-.8;demo.pitch=.65;demo._update_camera()
	await process_frame;await _capture("02_夕光花房与内部绿植")
	var evening_mesh:MeshInstance3D=demo.town.house_roots.h1.find_child("ConservatoryGlass_"+str(old_plan.cell_ids[0]),true,false)
	var evening_material:ShaderMaterial=evening_mesh.material_override
	_check(float(evening_material.get_shader_parameter("evening"))>.99,"actual evening toggle updates the shared glass illumination")
	var wall:Array[float]=[];var draws:Array[float]=[]
	for ignored in range(15): await process_frame
	var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draw_median":draws[60]}
	_check(_audio()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock and FileAccess.get_file_as_bytes(SAMPLE)==source and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"flowerhouse edits keep nine PCM thirteen Players advancing clock authored sample and personal city bytes")
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var city:=State.new();_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty(): await _live(city)
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"count":checks.size(),"failures":failures,"facts":facts,"command":"Godot --headless --path . --script tools/check_creation_conservatory.gd (actualGL --audio-driver Dummy -- --live)"}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CONSERVATORY_CHECK ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)

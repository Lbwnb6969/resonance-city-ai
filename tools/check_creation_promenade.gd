extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/石板灯街_2026-10-16"
const EXAMPLE="res://数据/灯街河湾样例.json"
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var demo
func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _road(city,id:String)->Dictionary:
	for road:Dictionary in city.roads:
		if road.id==id: return road
	return {}
func _points(road:Dictionary,reverse:bool=false)->Array[Vector2]:
	var result:Array[Vector2]=[]
	for at:Array in road.points: result.append(Vector2(at[0],at[1]))
	if reverse: result.reverse()
	return result
func _json(data:Dictionary)->Dictionary: return JSON.parse_string(JSON.stringify(data,"",true,true))
func _cpu(city)->void:
	city.initialize();var legacy:Dictionary=city.snapshot();var loaded:=State.new()
	_check(loaded.restore(_json(legacy)).ok and loaded.roads==city.roads and loaded.roads.all(func(row):return not row.has("style")),"legacy roads load unchanged with implicit narrow path style")
	var original:Dictionary=_road(city,"r1").duplicate(true);var count:int=city.roads.size();var next:int=city._next_road_id
	var preview:Dictionary=city.preview_road(_points(original))
	_check(preview.ok and preview.upgraded and preview.upgrade_road_id=="r1" and preview.width==1.75 and city.snapshot()==legacy,"real road retrace preview identifies in-place widening without writing State")
	var upgraded:Dictionary=city.add_road(_points(original))
	_check(upgraded.ok and upgraded.upgraded and upgraded.road_id=="r1" and city.roads.size()==count and city._next_road_id==next and _road(city,"r1").points==original.points,"second real stroke upgrades original road identity and points without issuing a new road")
	var saved:Dictionary=city.snapshot();var history:int=city._undo.size()
	var again:Dictionary=city.add_road(_points(original,true))
	_check(again.ok and again.no_op and city.snapshot()==saved and city._undo.size()==history,"reverse third stroke is a true no-op including revision history and ID counters")
	_check(city.undo().ok and _road(city,"r1")==original and city.redo().ok and _road(city,"r1").style=="promenade","real upgrade undo and redo restore exact old path then wide street")
	var reverse_city:=State.new();reverse_city.initialize();var reverse_result:Dictionary=reverse_city.add_road(_points(original,true))
	_check(reverse_result.ok and reverse_result.upgraded and _road(reverse_city,"r1").points==original.points,"reverse second stroke independently upgrades the original authored path")
	_check(saved.schema==7 and loaded.restore(_json(saved)).ok and loaded.roads==city.roads,"actual schema-seven JSON roundtrip preserves wide-street records")
	var bad:Dictionary=saved.duplicate(true);bad.schema=6
	_check(not loaded.restore(bad).ok,"older schema rejects a road-style field instead of silently ignoring it")
	var standalone:=State.new();standalone.initialize();var new_points:Array[Vector2]=[Vector2(12,-5),Vector2(12,0)]
	var new_road:Dictionary=standalone.add_road(new_points,"promenade")
	_check(new_road.ok and not new_road.upgraded and _road(standalone,new_road.road_id).width==1.75,"explicit non-overlapping wide-street stroke creates a new1.75m road")
	var invalid_before:Dictionary=standalone.snapshot()
	_check(not standalone.add_road(new_points,"invalid").ok and standalone.snapshot()==invalid_before,"invalid road style rejects atomically")
	var crowded:=State.new();crowded.initialize();var near:Dictionary=crowded.add_house(Vector2(-9.42,-8))
	var before:Dictionary=crowded.snapshot();var rejected:Dictionary=crowded.add_road(_points(original))
	_check(near.ok and not rejected.ok and crowded.snapshot()==before,"real width expansion conflicting with an adjacent house rejects without partial upgrade")
	# Use public API only; source default and personal save are untouched.
	var before_bakery:Dictionary=city.snapshot()
	var bakery:Dictionary=city.add_road(_points(_road(city,"r3")))
	_check(not bakery.ok and city.snapshot()==before_bakery,"actual old parallel bakery branch cannot widen through its adjacent house wall")
	var bakery_points:Array[Vector2]=[Vector2(-11,-2),Vector2(-2.4,-2),Vector2(-2.4,-4.08)]
	var new_bakery:Dictionary=city.add_road(bakery_points,"promenade")
	_check(new_bakery.ok,"real normal-facing new bakery approach joins main street as an explicit stone promenade")
	if failures.is_empty() and not FileAccess.file_exists(EXAMPLE): _check(city.save_city(EXAMPLE).ok,"new playable lamp-street sample saves with original zero business ledger")
	facts.cpu={"roads":city.roads.size(),"promenades":city.roads.filter(func(row):return row.get("style","")=="promenade").size(),"crowded_failure":rejected,"old_bakery_branch_failure":bakery,"promenade_ids":["r1",new_bakery.get("road_id","")]}
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _audio()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id];rows.append([id,player.get_instance_id(),player.stream.get_instance_id()])
	for player:AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _capture(name_value:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual street image saved: "+name_value)
func _live(city)->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var restored:Dictionary=demo.state.restore(_json(city.snapshot()));demo._after_edit(restored,"history");await _wait()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	_check(restored.ok and DisplayServer.get_name()!="headless","production GL restores actual authored wide-street city")
	var lamp_count:=0;var flower_count:=0;var clear:=true;var height_ok:=true;var surface_ok:=true
	for id:String in facts.cpu.promenade_ids:
		var node:Node3D=demo.town.road_roots[id]
		var surface:MeshInstance3D=node.get_node_or_null("PromenadeSurface")
		surface_ok=surface_ok and surface!=null and surface.material_override is ShaderMaterial
		var details:Node3D=node.get_node_or_null("PromenadeDetails")
		if details==null: surface_ok=false;continue
		for record:Dictionary in details.get_meta("records",[]):
			var at:Vector2=record.at;var radius:float=.2 if record.kind=="lamp" else .45
			lamp_count+=int(record.kind=="lamp");flower_count+=int(record.kind=="flower")
			height_ok=height_ok and absf(float(record.y)-demo.state.ground_height(at)-.025)<.001
			clear=clear and demo.state.water_clearance(at)>=radius+.45
			for house:Dictionary in demo.state.houses:
				for entry:Dictionary in demo.state.house_entrances(house.id): clear=clear and at.distance_to(entry.at)>radius+1.15
				for cell:Dictionary in house.cells:
					if int(cell.level)!=0: continue
					var center:=Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
					var delta:Vector2=(at-center).abs()-Vector2.ONE*.9
					clear=clear and delta.max(Vector2.ZERO).length()>=radius+.12
			for road:Dictionary in demo.state.roads:
				if road.id==id: continue
				for index in range(road.points.size()-1):
					var a:=Vector2(road.points[index][0],road.points[index][1]);var b:=Vector2(road.points[index+1][0],road.points[index+1][1])
					clear=clear and at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))>float(road.width)*.5+radius+.7
	_check(surface_ok and lamp_count>0 and flower_count>0,"actual wide streets install stone shader surface and real batched lamps with flower boxes")
	_check(clear and height_ok,"actual lamp-box records preserve water house-door and intersection clearance at real ground height")
	demo.town.set_evening(false)
	_check(is_zero_approx(float(demo.town.promenade.materials.glow.get_shader_parameter("strength"))),"daylight street halos start off")
	demo.focus=Vector3(-6,.7,0);demo.zoom=24;demo.yaw=.62;demo.pitch=.8;demo._update_camera();demo.town.clear_preview();demo._toggle_light()
	await _capture("01_夕光石板灯街")
	_check(float(demo.town.promenade.materials.glow.get_shader_parameter("strength"))>.99,"actual evening toggle turns on shared warm lamp glow")
	facts.street={"lamps":lamp_count,"flower_boxes":flower_count}
	demo._toggle_light();demo.life.set_process(true)
	var invited:Dictionary=demo.life.invite_concert("h4");var playing:=false;deadline=Time.get_ticks_msec()+45000
	while invited.ok and Time.get_ticks_msec()<deadline and not playing:
		await process_frame
		playing=str(demo.resonance_snapshot.get("phase",""))=="playing" and bool(demo.resonance_snapshot.get("audible",false))
	_check(playing and float(demo.town.promenade.materials.glow.get_shader_parameter("strength"))>.64,"real unaccelerated audible performance lights the shared street lamps in daylight")
	facts.concert={"invited":invited,"status":demo.life.concert_status(),"audible":demo.resonance_snapshot.get("audible",false)}
	await _capture("02_真实演出日间灯光")
	demo.life.cancel_concert();demo.life.set_process(false)
	var wall:Array[float]=[];var draws:Array[float]=[]
	for ignored in range(15): await process_frame
	var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draw_median":draws[60]}
	_check(_audio()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"street visuals preserve original thirteen Players advancing music clock and personal city bytes")
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var city:=State.new();_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty(): await _live(city)
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"count":checks.size(),"failures":failures,"facts":facts,"command":"Godot --headless --path . --script tools/check_creation_promenade.gd; actualGL --audio-driver Dummy -- --live"}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("PROMENADE_CHECK ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

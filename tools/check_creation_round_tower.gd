extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/圆塔锥顶_2026-10-16"
const SAMPLE="res://数据/圆塔河湾样例.json"
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var demo
var planner
func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _house(city,id:String)->Dictionary:
	for house:Dictionary in city.houses:
		if house.id==id: return house
	return {}
func _json(data:Dictionary)->Dictionary: return JSON.parse_string(JSON.stringify(data,"",true,true))
func _plan(house:Dictionary,houses:Array,roads:Array=[])->Dictionary: return planner.for_house(house,houses,roads)
func _cpu(city)->void:
	planner=load("res://scripts/world/city_creation_round_tower_plan.gd")
	city.initialize();var original:Dictionary=city.snapshot();var old:=State.new()
	_check(old.restore(_json(original)).ok and State.HOUSE_STYLES.has("round_tower"),"actual old city remains loadable with the new round-tower option")
	var style:Dictionary=city.set_house_style("h2","round_tower")
	var tower:Dictionary=_house(city,"h2")
	_check(style.ok and not _plan(tower,city.houses,city.roads).is_empty() and tower.role=="bakery","actual isolated two-room vertical bakery column qualifies for round form without changing role")
	var snapshot:Dictionary=city.snapshot();var restored:=State.new()
	_check(snapshot.schema==8 and restored.restore(_json(snapshot)).ok and restored.houses==city.houses,"actual schema-eight JSON preserves round style and original full house fields")
	_check(city.undo().ok and _house(city,"h2").get("style","classic")=="classic" and city.redo().ok and _house(city,"h2").style=="round_tower","real style undo and redo recover both prior classic and round-tower choice")
	var before:Dictionary=city.snapshot()
	_check(not city.set_house_style("h2","round_invalid").ok and city.snapshot()==before,"unknown house style rejects without writing city or history")
	var bad:Dictionary=snapshot.duplicate(true);bad.schema=7
	_check(not restored.restore(bad).ok,"older schema cannot silently ignore round-tower style")
	var multiple:Dictionary=tower.duplicate(true);multiple.cells.append({"id":"c999","x":1,"z":0,"level":0,"kind":"room","source":"CPU geometry contract"})
	_check(_plan(multiple,[multiple]).is_empty(),"multi-grid house safely falls back to existing architecture")
	var neighboring:Dictionary={"id":"h999","origin":[float(tower.origin[0])+1.8,float(tower.origin[1])],"cells":[{"id":"c998","x":0,"z":0,"level":0,"kind":"room"}],"base_y":0}
	_check(_plan(tower,[tower,neighboring]).is_empty(),"actual adjacent house projection prevents round wall or eave overlap")
	var crossing:Array=[{"id":"r999","points":[[float(tower.origin[0])-3,float(tower.origin[1])],[float(tower.origin[0])+3,float(tower.origin[1])]],"width":1.25,"bridge":false}]
	_check(_plan(tower,[tower],crossing).is_empty(),"genuine through-road passage forces existing hollow arch fallback")
	var points:Array[Vector2]=[Vector2(-15,-1.1)]
	var raised:Dictionary=city.add_terrain_stroke(points,"plateau",3.5,1,2)
	var built:Dictionary=city.add_house(Vector2(-15,0));var id:String=str(built.get("house_id",""))
	var a:Dictionary=city.add_cell(id,0,0,1);var b:Dictionary=city.add_cell(id,0,0,2)
	var high_style:Dictionary=city.set_house_style(id,"round_tower")
	var road_points:Array[Vector2]=[Vector2(-15,1.55),Vector2(-11,1.55)]
	var road:Dictionary=city.add_road(road_points)
	city.set_house_name(id,"石阶望楼");city.set_house_role(id,"venue")
	_check(raised.ok and built.ok and a.ok and b.ok and high_style.ok and road.ok and _house(city,id).base_y>1.5 and not _plan(_house(city,id),city.houses,city.roads).is_empty(),"public terrain house layers and road create a connected elevated three-storey round venue")
	_check(city.life_progress.concerts==0 and city.bakery_supply.is_empty() and city.workshop_supply.is_empty(),"authored round-tower city contains no prefilled production or completed performance")
	if failures.is_empty() and not FileAccess.file_exists(SAMPLE): _check(city.save_city(SAMPLE).ok,"new playable round-tower sample saves without overwriting previous examples")
	facts.state={"highland_id":id,"highland_base":_house(city,id).get("base_y",0),"houses":city.houses.size(),"round_ids":["h2",id]}
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
func _ray(a:Vector3,b:Vector3)->Dictionary:
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(a,b,1))
func _capture(name_value:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual round-tower image saved: "+name_value)
func _live(city)->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var restored:Dictionary=demo.state.restore(_json(city.snapshot()));demo._after_edit(restored,"history");await _wait()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	var metadata_ok:bool=restored.ok;var convex_ok:=true;var corner_ok:=true;var top_ok:=true;var side_ok:=true;var roof_ok:=true;var rig_ok:=true
	var actual:Array=[]
	for id:String in facts.state.round_ids:
		var house:Dictionary=_house(demo.state,id);var base:float=house.get("base_y",0);var origin:=Vector2(house.origin[0],house.origin[1])
		var node:Node3D=demo.town.house_roots[id];var record:Dictionary=node.get_meta("round_tower",{})
		metadata_ok=metadata_ok and not record.is_empty()
		metadata_ok=metadata_ok and record.get("sides",0)==16 and record.get("profile_samples",0)==20 and is_equal_approx(float(record.get("radius_power",0)),.78)
		var plan:Dictionary=_plan(house,demo.state.houses,demo.state.roads)
		var pick:CollisionShape3D=node.get_node(str(plan.top_cell_id)+"/RoundTowerPick/RoundTowerRoofPick")
		var faces:PackedVector3Array=pick.shape.get_faces()
		var half_t:=10.0/19.0;var expected_radius:float=1.06*pow(1-half_t,.78)
		var radius_at_half:=0.0;var maximum_y:=-INF;var maximum_radius:=0.0
		var body_pick:CollisionShape3D=node.get_node(str(house.cells[0].id)+"/RoundTowerPick/RoundTowerBodyPick")
		var body_vertices:PackedVector3Array=body_pick.shape.points
		var ring_angles:Dictionary={}
		for vertex:Vector3 in body_vertices:
			if Vector2(vertex.x,vertex.z).length()>.899: ring_angles[roundi(fposmod(atan2(vertex.z,vertex.x),TAU)*10000)]=true
		convex_ok=convex_ok and ring_angles.size()==16
		for vertex:Vector3 in faces:
			var t:float=(vertex.y+base-float(plan.roof_base_y))/1.35
			maximum_y=maxf(maximum_y,vertex.y+base);maximum_radius=maxf(maximum_radius,Vector2(vertex.x,vertex.z).length())
			if absf(t-half_t)<.0001: radius_at_half=maxf(radius_at_half,Vector2(vertex.x,vertex.z).length())
		roof_ok=roof_ok and absf(radius_at_half-expected_radius)<.002 and absf(maximum_y-float(plan.roof_top_y))<.002 and maximum_radius>=1.06
		var rig:Dictionary=demo.town.resonance.rigs[id]
		var rig_windows:Array=rig.mesh.get_meta("windows",[])
		for window:Dictionary in node.get_meta("round_windows",[]): rig_ok=rig_ok and rig_windows.has(window)
		rig_ok=rig_ok and float(rig.base_y)==base and node.get_meta("tower_cells",[]).is_empty()
		var shapes:Array=[]
		for shape:CollisionShape3D in node.find_children("*","CollisionShape3D",true,false):
			if shape.shape is ConvexPolygonShape3D: shapes.append(shape.shape.points.size())
		convex_ok=convex_ok and not shapes.is_empty()
		var corner:Dictionary=_ray(Vector3(origin.x+.83,base+.8,origin.y+.83),Vector3(origin.x+.83,base+.2,origin.y+.83))
		corner_ok=corner_ok and corner.is_empty()
		var side:Dictionary=_ray(Vector3(origin.x+2,base+.8,origin.y),Vector3(origin.x,base+.8,origin.y))
		side_ok=side_ok and not side.is_empty() and str(side.collider.get_meta("house_id",""))==id and str(side.collider.get_meta("cell_id",""))==str(house.cells[0].id)
		# Probe a real triangle just off the zero-area apex/seam, rather than
		# accepting a hit on the upper room's flat ceiling as roof evidence.
		var top:Dictionary=_ray(Vector3(origin.x+.12,base+10,origin.y+.05),Vector3(origin.x+.12,base+.2,origin.y+.05))
		top_ok=top_ok and not top.is_empty() and top.position.y>float(record.get("eave_y",INF))+.5 and str(top.collider.get_meta("house_id",""))==id and str(top.collider.get_meta("cell_id",""))==str(house.cells[-1].id)
		actual.append({"id":id,"base":base,"metadata":record,"convex_point_counts":shapes,"side_y":side.get("position",Vector3.ZERO),"top_y":top.get("position",Vector3.ZERO),"roof_mid_radius":radius_at_half,"expected_mid_radius":expected_radius,"actual_roof_top":maximum_y})
	_check(metadata_ok and convex_ok,"production renderer installs both real round towers with original cell convex picking bodies")
	_check(corner_ok and side_ok and top_ok,"actual physics rays leave square corners empty while side and curved roof preserve original house-cell identities")
	_check(roof_ok,"actual roof collision vertices follow the .78 radius curve over20 profile rings and reach the correct elevated apex")
	_check(rig_ok,"actual round-window positions participate in the original resonance rig at correct base without inventing a bell tower")
	facts.geometry=actual
	demo.focus=Vector3(-8,1.2,0);demo.zoom=27;demo.yaw=.62;demo.pitch=.8;demo._update_camera();demo.town.clear_preview();await _capture("01_圆塔与高地望楼全景")
	demo.focus=Vector3(-15,4,0);demo.zoom=10;demo.yaw=2.3;demo.pitch=.6;demo._update_camera();await _capture("02_高地圆墙与曲面锥顶")
	var wall:Array[float]=[];var draws:Array[float]=[]
	for ignored in range(15): await process_frame
	var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draw_median":draws[60]}
	_check(_audio()==audio and demo.music.get_child_count()==13 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"round-tower geometry keeps original thirteen Players actual clock and personal city bytes")
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var city:=State.new();_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty(): await _live(city)
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"count":checks.size(),"failures":failures,"facts":facts,"command":"Godot --headless --path . --script tools/check_creation_round_tower.gd (actual GL --audio-driver Dummy -- --live)"}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("ROUND_TOWER_CHECK ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)

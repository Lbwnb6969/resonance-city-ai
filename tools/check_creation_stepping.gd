extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_stepping_plan.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/浅水汀步_2026-10-16"
const SAMPLE="res://数据/汀步河湾样例.json"
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
func _json(data:Dictionary)->Dictionary:return JSON.parse_string(JSON.stringify(data,"",true,true))
func _cpu(city)->void:
	city.initialize()
	var water_points:Array[Vector2]=[Vector2(3,-11.5),Vector2(-10,-11.5)]
	var water:Dictionary=city.add_water(water_points,1.2,"channel")
	var house:Dictionary=city.add_house(Vector2(-8,-14))
	var venue_id:String=str(house.get("house_id",""));city.set_house_role(venue_id,"venue");city.set_house_name(venue_id,"汀步水庭")
	var points:Array[Vector2]=[Vector2(-8,-12.8),Vector2(-8,-8)]
	var road:Dictionary=city.add_road(points)
	var connection_points:Array[Vector2]=[Vector2(-8,-8),Vector2(-11,-8)]
	var connected:Dictionary=city.add_road(connection_points)
	_check(water.ok and house.ok and road.ok and connected.ok,"real public State creates narrow channel crossing with connected opposite-bank venue")
	if not road.ok: facts.construction={"water":water,"house":house,"road":road,"connection":connected};return
	var record:Dictionary=_road(city,road.road_id);var runs:Array=Plan.for_road(city,record)
	_check(runs.size()==1 and runs[0].stones.size()>=3,"actual narrow channel crossing derives one multi-stone run")
	if runs.is_empty():return
	var run:Dictionary=runs[0];var positions_ok:=true
	var heights:Array=[]
	for stone:Dictionary in run.stones:
		var actual:float=city.street_height(stone.at)
		heights.append({"at":stone.at,"actual":actual,"expected":stone.y})
		positions_ok=positions_ok and absf(float(stone.y)+.04)<.0001 and absf(actual-float(stone.y))<.001
	facts.stone_heights=heights
	_check(positions_ok and float(run.spacing)<=.48,"real street profile follows fixed water-level stone tops with bounded stride spacing")
	var wide:Dictionary=record.duplicate(true);wide.width=1.75;wide.style="promenade"
	_check(Plan.for_road(city,wide).is_empty(),"wide promenade remains a bridge rather than stepping stones")
	var cobble:Dictionary=record.duplicate(true);cobble.style="cobble"
	_check(Plan.for_road(city,cobble)==runs,"same-width cobble upgrade preserves shallow-channel stepping identities")
	var pond_city:=State.new();var pond_data:Dictionary=city.snapshot();pond_data.waters[-1].kind="pond"
	_check(pond_city.restore(_json(pond_data)).ok and Plan.for_road(pond_city,record).is_empty(),"same crossing over a pond is excluded from narrow-channel stepping")
	var fresh:=State.new()
	_check(fresh.restore(_json(city.snapshot())).ok and Plan.for_road(fresh,_road(fresh,road.road_id))==runs,"actual JSON deterministically restores stone run identity and positions without new fields")
	var removed:Dictionary=city.remove_road(road.road_id)
	_check(removed.ok and city.undo().ok and Plan.for_road(city,_road(city,road.road_id))==runs,"real crossing-road removal and undo restore exact stepping derivation")
	if failures.is_empty() and not FileAccess.file_exists(SAMPLE):_check(city.save_city(SAMPLE).ok,"new playable stepping sample saves with zero completed activity")
	facts.crossing={"road_id":road.road_id,"venue_id":venue_id,"runs":runs}
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await physics_frame;await process_frame
func _audio()->Array:
	var result:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id];result.append([id,player.get_instance_id(),player.stream.get_instance_id()])
	for player:AudioStreamPlayer in demo.music._effects:result.append(player.get_instance_id())
	return result
func _live(city)->void:
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var restored:Dictionary=demo.state.restore(_json(city.snapshot()));demo._after_edit(restored,"history");await _wait()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline:await process_frame
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	var run:Dictionary=facts.crossing.runs[0];var stone_ok:=true;var gap_ok:=true;var ray_facts:Array=[]
	for index in range(run.stones.size()):
		var stone:Dictionary=run.stones[index];var at:Vector2=stone.at
		var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,5,at.y),Vector3(at.x,-2,at.y),2))
		stone_ok=stone_ok and not hit.is_empty() and absf(float(hit.position.y)-float(stone.y))<.002 and hit.collider.get_meta("road_id","")==facts.crossing.road_id
		ray_facts.append({"at":at,"hit":hit.get("position",Vector3.ZERO),"expected":stone.y})
		if index==0:continue
		at=(Vector2(run.stones[index-1].at)+at)*.5
		if demo.state.water_clearance(at)>=-.05:continue
		var gap:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,5,at.y),Vector3(at.x,-2,at.y),2))
		gap_ok=gap_ok and (gap.is_empty() or float(gap.position.y)<-.16)
		ray_facts.append({"gap_at":at,"gap_hit":gap.get("position",Vector3.ZERO),"gap_collider":str(gap.collider.name) if not gap.is_empty() else ""})
	_check(restored.ok and stone_ok and gap_ok,"actual stone top rays match road identities while wet inter-stone gaps have no continuous bridge deck")
	facts.rays=ray_facts
	demo.focus=Vector3(-8,.3,-11.5);demo.zoom=10;demo.pitch=.8;demo.yaw=.7;demo._update_camera();demo.town.clear_preview();await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/01_浅水石顶与间隙.png")==OK,"actual shallow-water stepping close view saved")
	var events:Array=[];var previous:Callable=demo.life.travel_callback
	demo.life.travel_callback=func(actor_id:String,kind:String,source_id:String,at:Vector2)->void:
		events.append({"actor_id":actor_id,"kind":kind,"source_id":source_id,"at":at});previous.call(actor_id,kind,source_id,at)
	demo.life.set_process(true);var invited:Dictionary=demo.life.invite_concert(facts.crossing.venue_id);var heard:=false;var report:Dictionary={};deadline=Time.get_ticks_msec()+25000
	while invited.ok and Time.get_ticks_msec()<deadline and not heard:
		await process_frame;report=demo.music.travel_music_report()
		heard=bool(report.get("audible",false)) and report.get("kind","")=="stepping" and demo.state.water_clearance(report.get("position",Vector2.ZERO))<-.05
	_check(invited.ok and events.any(func(event):return event.kind=="stepping") and heard,"real unaccelerated resident crossing emits an actually audible stepping short note through original pool")
	facts.travel={"events":events,"report":report,"invitation":invited};demo.life.set_process(false);demo.life.cancel_concert()
	await process_frame;await process_frame
	_check(demo.town.travel_visual.report().kind=="stepping" and float(demo.town._water_surface_material().get_shader_parameter("travel_ripple_strength"))>0,"actual production stepping note drives a visible water shader ripple")
	demo.zoom=16;demo.focus=Vector3(-8,.7,-11);demo._update_camera();await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/02_汀步水庭与居民.png")==OK,"actual connected stepping venue view saved")
	var source_id:=str(report.get("source_id",""))
	var source_at:Vector2=report.get("position",Vector2.ZERO)
	var removed:Dictionary=demo.state.remove_road(facts.crossing.road_id);demo._after_edit(removed,"erase");await _wait()
	var gone:bool=not demo.town.road_roots.has(facts.crossing.road_id) and not demo.life.travel_source_valid("stepping",source_id,source_at) and not bool(demo.music.travel_music_report().audible)
	var undone:Dictionary=demo.state.undo();demo._after_edit(undone,"history");await _wait()
	_check(removed.ok and gone and undone.ok and demo.life.travel_source_valid("stepping",source_id,source_at) and demo.town.road_roots[facts.crossing.road_id].get_meta("stepping_runs",[]).size()==1,"real road deletion removes stones and live sound source, construction undo republishes the original stepping identity")
	var wall:Array[float]=[];var draw:Array[float]=[];var previous_time:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous_time)/1000);previous_time=now;draw.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draw.sort();facts.performance={"frames":120,"p95_ms":wall[113],"max_ms":wall[-1],"draw_median":draw[60]}
	_check(_audio()==audio and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"stepping visuals and notes preserve fixed long streams and short Players transport and personal save")
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var city:=State.new();_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty():await _live(city)
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("STEPPING_CHECK ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)

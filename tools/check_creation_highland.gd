extends SceneTree
## Public-State CPU contracts and optional bounded production GL/real arrivals.
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/高地城建_2026-10-16"
const ORIGIN=Vector2(-15,0)
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var demo
func _initialize()->void: _run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _house(city,id:String)->Dictionary:
	for row:Dictionary in city.houses:
		if row.id==id: return row
	return {}
func _road(city,id:String)->Dictionary:
	for row:Dictionary in city.roads:
		if row.id==id: return row
	return {}
func _roundtrip(data:Dictionary)->Dictionary: return JSON.parse_string(JSON.stringify(data,"",true,true))
func _build(city)->Dictionary:
	var points:Array[Vector2]=[ORIGIN+Vector2(0,-1.1)]
	var terrain:Dictionary=city.add_terrain_stroke(points,"plateau",3.5,1.0,2)
	var raw:float=city.raw_terrain_height(ORIGIN)
	var expected:float=city.sample_house_base_y(ORIGIN)
	var added:Dictionary=city.add_house(ORIGIN)
	return {"terrain":terrain,"raw":raw,"expected":expected,"added":added,"house_id":str(added.get("house_id",""))}
func _cpu(city)->Dictionary:
	city.initialize()
	var legacy:Dictionary=city.snapshot();var restored:=State.new()
	_check(restored.restore(_roundtrip(legacy)).ok and restored.houses.all(func(row):return float(row.get("base_y",0))==0),"legacy JSON city keeps all original houses at zero base")
	var built:Dictionary=_build(city);var id:String=built.house_id
	_check(built.terrain.ok and built.added.ok and built.raw>1.5,"real terrain brush followed by public new-house construction succeeds on a raised plateau")
	if id.is_empty(): return built
	var house:Dictionary=_house(city,id);var base:float=house.get("base_y",0)
	_check(base==built.expected and base>1.5 and is_equal_approx(base/.05,roundf(base/.05)),"new house captures actual raw centre height on the .05 metre lattice")
	_check(absf(city.ground_height(ORIGIN)-(base-.02))<.051,"real house terrain protection preserves its elevated platform instead of digging to zero")
	var saved:Dictionary=city.snapshot();var clone:=State.new()
	_check(saved.schema==6 and clone.restore(_roundtrip(saved)).ok and clone.houses==city.houses,"schema-six actual JSON roundtrip keeps highland house identity cells and base")
	_check(city.undo().ok and _house(city,id).is_empty() and city.raw_terrain_height(ORIGIN)>1.5,"real build undo removes only the house and leaves the authored plateau")
	_check(city.redo().ok and _house(city,id).get("base_y",0)==base,"real redo restores the same captured house elevation")
	var extension:Dictionary=city.add_cell(id,1,0,0,"room")
	_check(extension.ok and _house(city,id).base_y==base,"horizontal ground-floor extension retains the house base instead of resampling downhill")
	for value:Variant in [-.05,6.05,.023,"2.0"]:
		var bad:Dictionary=city.snapshot();bad.houses[-1].base_y=value
		var target:=State.new();target.initialize();var before:Dictionary=target.snapshot()
		_check(not target.restore(bad).ok and target.snapshot()==before,"invalid house base rejects atomically: "+str(value))
	var old_schema:Dictionary=city.snapshot();old_schema.schema=5
	_check(not clone.restore(old_schema).ok,"older schema cannot silently ignore a highland base field")
	var points:Array[Vector2]=[Vector2(-15,1.55),Vector2(-11,1.55)]
	var road:Dictionary=city.add_road(points);built.road_id=str(road.get("road_id",""))
	_check(road.ok,"real road connects highland entrance to the existing west street")
	if road.ok:
		var record:Dictionary=_road(city,built.road_id);var profile:Dictionary=city.road_profile(record)
		var low:=INF;var high:=-INF;var maximum_gap:=0.0
		for index in range(profile.samples.size()):
			var sample:Dictionary=profile.samples[index];low=minf(low,sample.y);high=maxf(high,sample.y)
			if index>0: maximum_gap=maxf(maximum_gap,Vector2(sample.xz).distance_to(profile.samples[index-1].xz))
		_check(high-low>.5 and maximum_gap<=.351 and not profile.treads.is_empty(),"actual sloped-road profile samples densely and derives real stone treads on steep grade")
		var tread:Dictionary=profile.treads[profile.treads.size()/2];var at:Vector2=(Vector2(tread.a)+Vector2(tread.b))*.5
		_check(absf(city.street_height(at)-float(tread.y))<.001,"street height follows the actual derived tread top")
		var fresh:=State.new();var loaded:Dictionary=fresh.restore(_roundtrip(city.snapshot()))
		_check(loaded.ok and fresh.road_profile(_road(fresh,built.road_id))==profile,"JSON restoration deterministically derives identical road profile and stone steps")
		facts.road={"sample_count":profile.samples.size(),"tread_count":profile.treads.size(),"min_y":low,"max_y":high,"maximum_sample_gap":maximum_gap}
	facts.house={"id":id,"base_y":base,"raw_centre":built.raw,"geometry":"One actual public plateau brush, house and extension; no prefilled business ledger."}
	city.set_house_name(id,"高庭石阶");city.set_house_role(id,"venue")
	if failures.is_empty() and not FileAccess.file_exists("res://数据/高地河湾样例.json"):
		_check(city.save_city("res://数据/高地河湾样例.json").ok,"new playable highland sample saves from actual zero-ledger public State construction")
	return built
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _identity()->Array:
	var result:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id]
		result.append([id,player.get_instance_id(),player.stream.get_instance_id()])
	for player:AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _capture(label:String)->void:
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual highland image saved: "+label)
func _live(city,built:Dictionary)->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var restored:Dictionary=demo.state.restore(_roundtrip(city.snapshot()));demo._after_edit(restored,"history");await _wait()
	var deadline:=Time.get_ticks_msec()+20000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	var audio:Array=_identity();var clock:float=demo.music._playback_clock()
	# A real terrain edit invalidates road and ground geometry. Rebuilding an
	# identical snapshot would leave the collision-staging assertion vacuous.
	var edit_points:Array[Vector2]=[Vector2(-12.2,1.55)]
	var edit:Dictionary=demo.state.add_terrain_stroke(edit_points,"raise",2.0,.20,1)
	var generation:int=demo.town.request_budget_rebuild();var ready:=false;var hidden_layers:=true;var staged_bodies:=0
	deadline=Time.get_ticks_msec()+15000
	while Time.get_ticks_msec()<deadline and not ready:
		var report:Dictionary=demo.town.poll_budget_rebuild(3.5,false);ready=bool(report.get("ready",false))
		if demo.town.budget_rebuild.staging!=null:
			var bodies:Array=demo.town.budget_rebuild.staging.find_children("*","StaticBody3D",true,false)
			staged_bodies=maxi(staged_bodies,bodies.size())
			for body:Node in bodies: hidden_layers=hidden_layers and body.collision_layer==0
		await process_frame
	var publication:Dictionary=demo.town.poll_budget_rebuild(3.5,true)
	while not bool(publication.get("committed",false)) and Time.get_ticks_msec()<deadline:
		await process_frame;publication=demo.town.poll_budget_rebuild(3.5,true)
	await physics_frame
	_check(edit.ok and staged_bodies>0 and ready and hidden_layers and bool(publication.get("committed",false)) and demo.town.budget_rebuild.committed_generation==generation,"actual changed-terrain Budget rebuild keeps staging collisions disabled then atomically publishes latest height geometry")
	facts.budget={"staged_bodies":staged_bodies,"committed_generation":demo.town.budget_rebuild.committed_generation,"max_step_ms":demo.town.budget_rebuild.stats.get("max_step_ms",0)}
	var id:String=built.house_id;var house:Dictionary=_house(demo.state,id);var base:float=house.base_y
	var plinths:Array=demo.town.house_roots[id].find_children("StonePlinth","Node3D",true,false)
	_check(restored.ok and not plinths.is_empty() and float(plinths[0].get_meta("base_y"))==base and float(plinths[0].get_meta("bottom_y"))<base-.26,"real elevated renderer installs masonry plinth down to the sampled downhill footing")
	var profile:Dictionary=demo.state.road_profile(_road(demo.state,built.road_id));var ray_ok:bool=not profile.treads.is_empty()
	facts.rays=[]
	for probe in range(mini(6,profile.treads.size())):
		var tread:Dictionary=profile.treads[roundi(float(probe)*float(profile.treads.size()-1)/5.0)]
		var at:Vector2=(Vector2(tread.a)+Vector2(tread.b))*.5
		var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,10,at.y),Vector3(at.x,-2,at.y),2))
		var ray:Dictionary={"at":at,"expected_y":float(tread.y),"ground_height":demo.state.ground_height(at),"street_height":demo.state.street_height(at),"hit":not hit.is_empty()}
		if not hit.is_empty():
			ray.hit_y=float(hit.position.y);ray.collider_name=str(hit.collider.name);ray.collider_path=str(hit.collider.get_path());ray.collider_metadata={}
			for key:StringName in hit.collider.get_meta_list(): ray.collider_metadata[str(key)]=hit.collider.get_meta(key)
		facts.rays.append(ray)
		ray_ok=ray_ok and not hit.is_empty() and absf(hit.position.y-float(tread.y))<.002
	_check(ray_ok,"real layer-two downward rays agree with installed stone tread surfaces")
	demo.focus=Vector3(-13,1.1,.3);demo.zoom=12;demo.yaw=-.65;demo.pitch=.72;demo._update_camera();demo.town.clear_preview();await _capture("01_高台小屋与石阶路")
	demo._after_edit(demo.state.set_house_role(id,"venue"),"terrace");await _wait();demo.life.set_process(true)
	var invited:Dictionary=demo.life.invite_concert(id)
	var observed:=false;var elevated_walking:=false;var sample:Dictionary={};deadline=Time.get_ticks_msec()+20000
	while Time.get_ticks_msec()<deadline and not observed:
		await process_frame
		for resident:Dictionary in demo.life.residents:
			if str(resident.home_id)==id: continue
			var at:Vector3=resident.node.position
			if str(resident.destination_id)==id and at.y>1 and resident.index<resident.route.size(): elevated_walking=true
			if str(resident.dwell_id)==id and at.y>1:
				observed=true;sample={"home_id":resident.home_id,"position":at,"street_height":demo.state.street_height(Vector2(at.x,at.z)),"concert":demo.life.concert_status()};break
	_check(invited.ok and observed and elevated_walking,"actual unaccelerated resident walks up the sloped street and arrives at the highland venue")
	facts.arrival=sample;demo.life.set_process(false);demo.life.cancel_concert()
	demo.focus=Vector3(-14.3,1.1,.4);demo.zoom=10;demo.yaw=2.3;demo.pitch=.48;demo._update_camera();demo.town.clear_preview();await _capture("02_坡侧石基与真实赴约")
	var wall:Array[float]=[];var draws:Array[float]=[]
	for ignored in range(15): await process_frame
	var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"wall_p95_ms":wall[113],"wall_max_ms":wall[-1],"draw_median":draws[60],"max_fps":180,"life_paused_after_real_arrival":true}
	_check(_identity()==audio and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"highland scene preserves original music identities advancing clock and personal city bytes")
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player:AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var city:=State.new();var built:Dictionary=_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty(): await _live(city,built)
	var result:Dictionary={"ok":failures.is_empty(),"checks":checks,"count":checks.size(),"failures":failures,"facts":facts,"scope":"Real public terrain/house/road State contracts. --live adds production geometry and unaccelerated gathering arrival; no completed24second concert claim.","command":"Godot_v4.7.2-stable_win64_console.exe --headless --path . --script tools/check_creation_highland.gd (use --audio-driver Dummy and -- --live for actual GL)"}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("HIGHLAND_CHECK ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)

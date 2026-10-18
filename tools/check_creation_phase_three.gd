extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/四库路线_2026-10-17/Phase3"
const CENTER=Vector2(-23,0)
var checks: Array=[];var failures: Array[String]=[];var facts: Dictionary={}
var demo
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _points(road: Dictionary)->Array[Vector2]:
	var result: Array[Vector2]=[]
	for p: Array in road.points: result.append(Vector2(p[0],p[1]))
	return result
func _fixture()->RefCounted:
	var city:=State.new();city.initialize()
	var points: Array[Vector2]=[Vector2(-29,0),Vector2(-11,0)]
	_check(city.add_road(points).ok,"create real west-to-town road")
	points=[Vector2(-23,-7),Vector2(-23,7)]
	_check(city.add_road(points).ok,"create real crossing road")
	return city
func _cpu(city: RefCounted)->void:
	var old: Dictionary=city.roads[-2].duplicate(true);var count: int=city.roads.size();var issued: int=city._next_road_id
	var points:=_points(old)
	for style: String in ["promenade","avenue","tram"]:
		var changed: Dictionary=city.add_road(points,style)
		_check(changed.ok and changed.upgraded and city.roads.size()==count and city._next_road_id==issued and city.roads[-2].id==old.id and city.roads[-2].points==old.points and city.roads[-2].width==State.RoadUpgrade.width_for(style),"in-place "+style+" retains centreline ID and all road counters")
	_check(is_equal_approx(float(city.roads[-2].width),2.10),"new tram avenue uses the twelve-phase 2.10m street width")
	var legacy: Dictionary=city.snapshot()
	legacy.roads[-2].width=2.0
	var legacy_city:=State.new()
	_check(legacy_city.restore(JSON.parse_string(JSON.stringify(legacy))).ok and is_equal_approx(float(legacy_city.roads[-2].width),2.0),"legacy 2.0m tram loads without widening its authored footprint")
	var legacy_id: String=legacy_city.roads[-2].id
	var widened: Dictionary=legacy_city.add_road(points,"tram")
	_check(widened.ok and widened.upgraded and legacy_city.roads[-2].id==legacy_id and is_equal_approx(float(legacy_city.roads[-2].width),2.10) and legacy_city.undo().ok and legacy_city.roads==legacy.roads,"explicit retrace widens a legacy street while undo restores its exact original geometry")
	legacy.roads[-2].width=2.05
	_check(not legacy_city.restore(legacy).ok,"unrecognized intermediate styled-road width is still rejected")
	var same: Dictionary=city.snapshot();var history: int=city._undo.size()
	_check(city.add_road(points,"tram").no_op and city.snapshot()==same and city._undo.size()==history,"same-style retrace does not add history")
	_check(city.add_road(points,"avenue").ok,"choose tree-lined road at same crossing")
	var before: Dictionary=city.snapshot();var plan:=State.Roundabouts.preview(city,CENTER)
	_check(plan.ok and city.snapshot()==before,"roundabout preview validates exact intersection without changing city")
	_check(city.add_roundabout(CENTER).ok,"one click commits roundabout marker on owning road")
	var saved: Dictionary=city.snapshot()
	_check(saved.schema==12 and city.roads.size()==count and city._next_road_id==issued,"roundabout saves as schema twelve without synthetic authored roads")
	_check(not city.add_roundabout(CENTER).ok and not city.add_roundabout(Vector2(-18,4)).ok,"duplicate and non-junction clicks reject without adding plazas")
	_check(not city.add_house(CENTER+Vector2(0,2)).ok,"new houses respect complete circular plaza footprint")
	var water: Array[Vector2]=[CENTER+Vector2(1.8,1.8)]
	_check(not city.preview_water(water,1.4,"pond").get("conflicts",[]).is_empty(),"water preview detects plaza margin beyond original street capsules")
	var clone:=State.new()
	_check(clone.restore(JSON.parse_string(JSON.stringify(saved))).ok and clone.roads==city.roads,"schema twelve JSON roundtrip retains style width centre and radius")
	var invalid: Dictionary=saved.duplicate(true);invalid.schema=11
	_check(not clone.restore(invalid).ok and clone.roads==city.roads,"older schema rejects new road metadata atomically")
	invalid=saved.duplicate(true);invalid.roads[-2].roundabouts[0].radius=99
	_check(not clone.restore(invalid).ok and clone.roads==city.roads,"invalid roundabout radius rejects atomically")
	_check(city.undo().ok and city.snapshot().roads==before.roads and city.redo().ok and city.roads==saved.roads,"roundabout undo and redo restore exact road intent")
	var mask:=Mask.new();mask.setup(city,Vector2i(-3,0))
	_check(not mask.visible(CENTER+Vector2(1.5,1.5),.18) and city.road_at(CENTER+Vector2(1.5,1.5))==old.id,"circular plaza participates in authoritative grass exclusion and road picking")
	var network:=Network.new();network.state=city;network._build_graph()
	var route: Array[Vector3]=network._route_from_position(Vector3(-28,.1,0),network.connected_houses.get("h3",""))
	var nearest:=INF;var ring_points:=0
	for i in range(route.size()):
		var point:=Vector2(route[i].x,route[i].z)
		if point.distance_to(CENTER)<2.5: ring_points+=1
		if i>0: nearest=minf(nearest,Geometry2D.get_closest_point_to_segment(CENTER,Vector2(route[i-1].x,route[i-1].z),point).distance_to(CENTER))
	_check(route.size()>4 and ring_points>2 and nearest>State.Roundabouts.INNER_RADIUS,"real shortest route reaches existing home around fountain island without crossing it")
	facts.route={"points":route,"nearest_island":nearest,"ring_points":ring_points}
	facts.owner_id=old.id
	_check(city.remove_roundabout(CENTER).ok and not city.roads[-2].has("roundabouts") and city.undo().ok and city.roads==saved.roads,"remove plaza restores plain crossing and undo brings the same intent back")
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _live(city: RefCounted)->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	var restored: Dictionary=demo.state.restore(city.snapshot());demo._after_edit(restored,"history");await _wait()
	var road: Node3D=demo.town.road_roots[facts.owner_id]
	var plaza: Node3D=road.get_node_or_null("RoundaboutPlaza")
	_check(restored.ok and plaza!=null,"production renderer installs circular paving and fountain centre")
	var crowns: MultiMeshInstance3D=road.get_node_or_null("PromenadeDetails/AvenueCrowns")
	_check(crowns!=null and crowns.multimesh.instance_count>0,"avenue trees are shared actual MultiMesh instances")
	var ring_point:=CENTER+Vector2(1.8,0)
	var hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(ring_point.x,10,ring_point.y),Vector3(ring_point.x,-2,ring_point.y),2))
	_check(not hit.is_empty() and str(hit.collider.name)=="RoundaboutGroundPick" and absf(hit.position.y-demo.state.street_height(ring_point))<.002,"real picking ray and navigation share roundabout road height")
	demo.focus=Vector3(-21,.7,0);demo.zoom=22;demo.pitch=.8;demo.yaw=.7;demo._update_camera();demo.town.clear_preview();demo.ui_layer.visible=false
	for ignored in range(20): await process_frame
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/01_avenue_plaza.png")
	demo._toggle_light()
	for ignored in range(12):await process_frame
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/02_evening_plaza.png")
	var wall: Array[float]=[];var last:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append((now-last)/1000.0);last=now
	wall.sort();facts.performance={"p95_ms":wall[113],"max_ms":wall[-1],"frames":120}
	var record: Dictionary=demo.state.roads[-2];var changed: Dictionary=demo.state.add_road(_points(record),"tram")
	demo._after_edit(changed,"road");await _wait()
	var details: Node=demo.town.road_roots[facts.owner_id].get_node_or_null("PromenadeDetails")
	var rails:=0
	if details!=null:
		for row: Dictionary in details.get_meta("records",[]): rails+=int(row.kind=="rail")
	_check(changed.ok and rails>0,"real in-place tram upgrade installs paired metal rails")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	demo.ui_layer.visible=true;demo.select_tool(2)
	var options: Node=demo.road_panel.find_child("RoadStyle",true,false)
	_check(options!=null and options.item_count==4 and demo.road_panel.find_child("RoadRoundabout",true,false)!=null,"road panel exposes four styles and the one-click roundabout mode")
	await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/03_road_tools.png")
	var mode: CheckButton=demo.road_panel.find_child("RoadRoundabout",true,false)
	mode.button_pressed=true
	var point: Vector2=demo.camera.unproject_position(Vector3(CENTER.x,demo.state.street_height(CENTER),CENTER.y))
	await _click(point,true);await _wait()
	_check(State.Roundabouts.all(demo.state.roads).is_empty(),"actual shift-click in roundabout tool restores plain junction")
	await _click(point,false);await _wait()
	_check(State.Roundabouts.all(demo.state.roads).size()==1,"actual tool click rebuilds the same roundabout at the real junction")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"styles plaza and undo use isolated city without touching personal save")
	demo.queue_free();await process_frame;await create_timer(.2).timeout
func _click(point: Vector2,shift: bool)->void:
	var motion:=InputEventMouseMotion.new();motion.position=point;motion.global_position=point;root.push_input(motion);await process_frame
	for down: bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=point;event.global_position=point;event.button_index=MOUSE_BUTTON_LEFT;event.shift_pressed=shift;event.pressed=down
		root.push_input(event);await process_frame
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var city:=_fixture();_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty(): await _live(city)
	var report: Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("PHASE_THREE ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

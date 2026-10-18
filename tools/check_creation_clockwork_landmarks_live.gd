extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_phase_eight_fixture.gd")
const BridgePlan=preload("res://scripts/world/city_creation_bridge_plan.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase8"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _capture(label:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func _run()->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var scene:=Fixture.build(self);var city:RefCounted=scene.city
	var palace:Dictionary=city.place_signature("botanical_palace",Vector2(-23,0))
	var depot:Dictionary=city.place_signature("clockwork_depot",Vector2(22,8))
	var points:Array[Vector2]=[Vector2(-23,-3.2),Vector2(-23,-3.45),Vector2(-18,-3.45)];city.add_road(points)
	points=[Vector2(10,12),Vector2(36,12)];city.add_road(points,"tram")
	points=[Vector2(-11,9),Vector2(15,9)];city.add_road(points,"tram")
	var road:Dictionary=city.roads[-1]
	for candidate:Dictionary in city.roads:
		if candidate.points[0]==[-11.,9.] and candidate.points[-1]==[15.,9.]:road=candidate
	var profile:Dictionary=city.road_profile(road);var run:Dictionary=profile.bridge_runs[0]
	var mid:Vector2=BridgePlan._point(profile.samples,(run.start+run.end)*.5).at
	points=[mid];var district:Dictionary=city.add_district(points,8.);city.set_district_era(district.district_id,"clockwork")
	scene.life.free()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(restored.ok,"actual earned milestone town and both new landmarks restore in production state")
	demo._after_edit(restored,"history");await _wait()
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	demo.focus=Vector3(-23,1,1);demo.zoom=13;demo.yaw=.35;demo.pitch=.7;demo._update_camera();demo.ui_layer.visible=false;demo.town.clear_preview()
	var palace_root:Node3D=demo.town.buildings.get_node(str(palace.house_id))
	var meta:Dictionary=palace_root.get_meta("botanical_palace",{})
	_check(meta.get("plant_beds",0)==11 and meta.get("fountain",false) and meta.get("pick_cells",0)>=8,"production palace contains rare plants fountain and original-cell glass picking")
	var ray:=PhysicsRayQueryParameters3D.create(Vector3(-23,10,1.8),Vector3(-23,0,1.8),1)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(ray)
	_check(not hit.is_empty() and hit.collider.get_meta("house_id","")==palace.house_id and float(hit.position.y)>3.,"real physics ray picks palace glass dome rather than floor or decorative surrogate")
	_check(demo.life.cafe.layouts.has(palace.house_id) and not demo.life.cafe.layouts[palace.house_id].is_empty(),"actual palace owns connected outdoor tea furniture and walkable seat routes")
	await _capture("08_botanical_palace_fountain_and_tea")
	while demo.light_phase!=2:demo._toggle_light()
	_check(float(demo.town.conservatory.palace_glass_material.get_shader_parameter("evening"))==1.,"palace glazing uses actual emerald night material owner")
	await _capture("09_botanical_palace_warm_night")
	demo.focus=Vector3(24,2,9.5);demo.zoom=16;demo._update_camera()
	var depot_root:Node3D=demo.town.buildings.get_node(str(depot.house_id))
	var dispatch:Dictionary=demo.life.tram.report()
	_check(depot_root.get_meta("clockwork_depot",{}).get("clock_faces",0)==4 and dispatch.depot_id==depot.house_id and is_equal_approx(dispatch.speed,3.36),"real four-face clock depot dispatches its connected tram at boosted speed")
	demo.life.tram.tick(1.5)
	await _capture("10_grand_clockwork_depot_actual_tram")
	demo.ui_layer.visible=true;demo.signatures.open_panel();await process_frame
	var button:Button=demo.signatures.buttons.clockwork_depot
	var scroll:ScrollContainer=demo.signatures.panel.get_node("LandmarkScroll");scroll.ensure_control_visible(button);await process_frame
	_check(button.is_visible_in_tree() and demo.signatures.panel.get_global_rect().encloses(button.get_global_rect()) and Rect2(Vector2.ZERO,Vector2(root.size)).encloses(button.get_global_rect()),"fifth landmark catalog entry remains genuinely reachable within scroll viewport")
	await _capture("11_five_landmark_catalog")
	demo.signatures.panel.hide();demo.ui_layer.visible=false
	demo.focus=Vector3(mid.x,1,mid.y);demo.zoom=13;demo.yaw=.4;demo.pitch=.55;demo._update_camera()
	var trusses:Array=demo.town.roads_layer.find_children("ClockworkTrussBridge","Node3D",true,false)
	_check(trusses.size()==1 and trusses[0].get_meta("lane_clearance")>1.73,"production renderer installs one industrial arch with live overhead-wire clearance")
	var crossing:=false;var car_at:=Vector3.ZERO
	for i in range(1000):
		demo.life.tram.tick(.05)
		for car:Dictionary in demo.life.tram.cars:
			var at:Vector3=car.node.position
			if Vector2(at.x,at.z).distance_to(mid)<.45:crossing=true;car_at=at;break
		if crossing:break
	_check(crossing and absf(car_at.y-demo.state.street_height(Vector2(car_at.x,car_at.z)))<.001,"actual derived tram traverses industrial bridge at the authoritative shared deck height")
	ray=PhysicsRayQueryParameters3D.create(Vector3(mid.x,1.95+car_at.y,mid.y),Vector3(mid.x,car_at.y+.1,mid.y),2)
	hit=demo.get_world_3d().direct_space_state.intersect_ray(ray)
	_check(hit.is_empty(),"actual center lane collider leaves resident carriage and collector space open")
	await _capture("12_clockwork_truss_bridge_actual_crossing")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated landmark verification preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"palace":meta,"dispatch":dispatch}
	FileAccess.open(OUT+"/landmarks_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("LANDMARKS_LIVE ",JSON.stringify({"ok":report.ok,"count":checks.size(),"failures":failures}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

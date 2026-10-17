extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_era_street_fixture.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase9"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+45000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _capture(label:String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func _run()->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var fixture:=Fixture.build();var city:RefCounted=fixture.city
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(restored.ok,"authored four-era street and modern bridge restore with existing schema sixteen")
	demo._after_edit(restored,"history");await _wait()
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	demo.ui_layer.visible=false;demo.focus=Vector3(25,.1,15);demo.zoom=23;demo.yaw=.25;demo.pitch=.85;demo._update_camera();demo.town.clear_preview()
	var field:RefCounted=demo.town.era_road_field;var texture:Texture2DArray=field.texture
	var bound:=texture.get_layers()==100
	for material:ShaderMaterial in [demo.town._shared_road_material(),demo.town.promenade.road_material(),demo.town.path_edge.material]:bound=bound and material.get_shader_parameter("era_road_field")==texture and material.get_shader_parameter("era_road_enabled")==true
	_check(bound,"all three production street shaders bind the same actual hundred-layer GPU era texture")
	var street:Node3D=demo.town.road_roots[fixture.street.road_id];var details:Node3D=street.get_node("EraStreetDetails");var records:Dictionary=details.get_meta("records")
	_check(records.gateways.size()==3 and records.notes.size()==4 and records.water.size()==2 and details.get_child_count()>=4,"production geometry contains three full-width gateways four note lights and two real landscape water basins")
	await _capture("06_four_era_road_blending_gateways_and_water")
	demo.town.set_light_phase(2);await _capture("07_modern_note_lights_and_boundary_gateways_night")
	var far_bytes:PackedByteArray=texture.get_layer_data(0).get_data();var layer:=68;var before:PackedByteArray=texture.get_layer_data(layer).get_data();var rid:=texture.get_rid()
	var edit:Dictionary=demo.state.set_district_era(fixture.zones[2],"renaissance");demo._after_edit(edit,"history")
	_check(texture.get_layer_data(layer).get_data()==before,"pending worker era edit leaves published GPU bytes intact until atomic publication")
	await _wait();field=demo.town.era_road_field;texture=field.texture
	var uploaded:Dictionary=field.stats.duplicate(true)
	_check(texture.get_rid()==rid and uploaded.uploaded_layers>0 and uploaded.uploaded_layers<20 and texture.get_layer_data(0).get_data()==far_bytes and texture.get_layer_data(layer).get_data()!=before,"actual local era publication updates only dirty array layers and preserves distant GPU bytes and texture identity")
	records=demo.town.road_roots[fixture.street.road_id].get_node("EraStreetDetails").get_meta("records")
	_check(records.notes.is_empty() and records.water.is_empty(),"era editing removes actual modern-only street fixtures")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(demo.town.era_road_field.texture.get_layer_data(layer).get_data()==before and demo.town.road_roots[fixture.street.road_id].get_node("EraStreetDetails").get_meta("records").notes.size()==4,"undo restores both original GPU tile bytes and modern street fixtures")
	demo.town.set_light_phase(0);var bridge:Node3D=demo.town.road_roots[fixture.bridge.road_id].get_node("ModernSingleArchBridge");var run:Dictionary=bridge.get_meta("run");var at:Vector2=fixture.bridge_center
	_check(bridge.get_meta("arch_count")==1 and bridge.has_node("glass") and bridge.has_node("ModernBridgeGroundPick"),"actual modern bridge has one full-span arch transparent glass parapets and road picking collider")
	var query:=PhysicsRayQueryParameters3D.create(Vector3(at.x,8,at.y),Vector3(at.x,-1,at.y),2);var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(query)
	_check(not hit.is_empty() and absf(hit.position.y-float(run.deck_y))<.025 and hit.collider.get_meta("road_id","")==fixture.bridge.road_id,"physical bridge deck picking matches the authoritative street and traveller elevation")
	query=PhysicsRayQueryParameters3D.create(Vector3(at.x,-.05,at.y-3),Vector3(at.x,-.05,at.y+3),2);hit=demo.get_world_3d().direct_space_state.intersect_ray(query)
	_check(hit.is_empty(),"the real single arch remains open across its middle without a central masonry pier")
	var car_seen:=false;var car_position:=Vector3.ZERO
	for i in range(1200):
		demo.life.tram.tick(.05)
		for car:Dictionary in demo.life.tram.cars:
			var p:Vector3=car.node.position
			if Vector2(p.x,p.z).distance_to(at)<.35 and absf(p.y-demo.state.street_height(Vector2(p.x,p.z)))<.001:car_seen=true;car_position=p
		if car_seen:break
	_check(car_seen,"the actual derived tram traverses the modern bridge on the same raised street profile")
	demo.focus=Vector3(at.x,.3,at.y);demo.zoom=14;demo.yaw=.65;demo.pitch=.5;demo._update_camera();await _capture("08_white_single_arch_glass_parapets_and_actual_tram")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec();demo.life.set_process(true)
	for i in range(180):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort()
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated real-window validation preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"field_upload":uploaded,"car_position":var_to_str(car_position),"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1]}
	FileAccess.open(OUT+"/era_streets_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ERA_STREETS_LIVE ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

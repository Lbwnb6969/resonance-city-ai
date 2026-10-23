extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_era_street_fixture.gd")
var OUT="res://验证记录/M25"
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
func _light(phase:int)->void:
	while demo.light_phase!=phase:demo._toggle_light()
func _gardens(label:String)->void:
	var road:Dictionary=demo.state.roads.filter(func(row:Dictionary)->bool:return row.id==_street_id)[0]
	var details:Node3D=demo.town.road_roots[_street_id].get_node("EraStreetDetails")
	var records:Dictionary=details.get_meta("records")
	_check(records.gardens==demo.town.era_streets.prepare(demo.town,road).gardens,"published garden records match live city: "+label)
	var count:=0;var indices:=0;var expected_vertices:=0;var expected_indices:=0
	var material:Material=demo.town.foliage.material("canopy")
	for row:Dictionary in records.gardens:
		var source:Mesh=demo.town.foliage.parts("shrub",int(row.variant)).canopy
		expected_vertices+=source.surface_get_array_len(0);expected_indices+=source.surface_get_array_index_len(0)
	for mesh:MeshInstance3D in details.find_children("*","MeshInstance3D",true,false):
		if mesh.material_override!=material:continue
		count+=1;indices+=mesh.mesh.surface_get_array_index_len(0)
		var arrays:Array=mesh.mesh.surface_get_arrays(0)
		var points:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
		_check(points.size()==expected_vertices and points[0].is_finite(),"actual complete shared foliage batch retains all boundary shrubs: "+label)
	_check(count==1 and indices==expected_indices and expected_vertices>0,"boundary shrubs share one real draw batch: "+label)
var _street_id:String
func _run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var fixture:=Fixture.build();var city:RefCounted=fixture.city;_street_id=fixture.street.road_id
	for level in [1,2]:
		if not city.houses[3].cells.any(func(cell:Dictionary)->bool:return int(cell.level)==level):
			_check(city.add_cell("h4",0,0,level).ok,"grow an actual renaissance lantern dome with public building API")
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
	_check(records.gardens.size()==6,"three actual era transitions have two ground shrubs and warm stone markers each")
	_gardens("initial four-era street")
	var original_gardens:Array=records.gardens.duplicate(true)
	await _capture("06_four_era_road_blending_gateways_and_water")
	demo.focus=Vector3(22,.15,15);demo.zoom=10;demo.yaw=.65;demo.pitch=.7;demo._update_camera();await _capture("06b_boundary_garden_day_close")
	_light(2);_check(demo.town.promenade.lamp_material().emission_enabled,"shared amber marker inlays light with the actual night scene");await _capture("07_modern_note_lights_and_boundary_gateways_night")
	var far_bytes:PackedByteArray=texture.get_layer_data(0).get_data();var layer:=68;var before:PackedByteArray=texture.get_layer_data(layer).get_data();var rid:=texture.get_rid()
	var edit:Dictionary=demo.state.set_district_era(fixture.zones[2],"renaissance");demo._after_edit(edit,"history")
	_check(texture.get_layer_data(layer).get_data()==before,"pending worker era edit leaves published GPU bytes intact until atomic publication")
	_check(details.get_meta("records").gardens==original_gardens,"pending worker leaves visible boundary garden records intact")
	await _wait();field=demo.town.era_road_field;texture=field.texture
	var uploaded:Dictionary=field.stats.duplicate(true)
	_check(texture.get_rid()==rid and uploaded.uploaded_layers>0 and uploaded.uploaded_layers<20 and texture.get_layer_data(0).get_data()==far_bytes and texture.get_layer_data(layer).get_data()!=before,"actual local era publication updates only dirty array layers and preserves distant GPU bytes and texture identity")
	records=demo.town.road_roots[fixture.street.road_id].get_node("EraStreetDetails").get_meta("records")
	_check(records.notes.is_empty() and records.water.is_empty(),"era editing removes actual modern-only street fixtures")
	_check(records.gardens!=original_gardens and demo.town.promenade.lamp_material().emission_enabled,"era edit replaces actual boundary garden identities and keeps night inlays lit")
	_gardens("era edit")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(demo.town.era_road_field.texture.get_layer_data(layer).get_data()==before and demo.town.road_roots[fixture.street.road_id].get_node("EraStreetDetails").get_meta("records").notes.size()==4,"undo restores both original GPU tile bytes and modern street fixtures")
	_check(demo.town.road_roots[_street_id].get_node("EraStreetDetails").get_meta("records").gardens==original_gardens,"real undo restores all original shrub positions marker heights and era identities")
	_light(0)
	_check(not demo.town.promenade.lamp_material().emission_enabled,"marker inlays return to unlit stone in actual daylight")
	var brush:Array[Vector2]=[original_gardens[2].shrub];var planted:Dictionary=demo.state.add_vegetation_stroke(brush,"shrub",.8)
	_check(planted.ok,"player plants a real shrub cluster beside the era boundary")
	var authored:=var_to_bytes(demo.state.plants)
	demo._after_edit(planted,"vegetation");await _wait()
	_check(authored==var_to_bytes(demo.state.plants) and demo.town.road_roots[_street_id].get_node("EraStreetDetails").get_meta("records").gardens!=original_gardens,"actual publication preserves the player planting and relocates derived accents")
	_gardens("player planting")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(demo.town.road_roots[_street_id].get_node("EraStreetDetails").get_meta("records").gardens==original_gardens,"planting undo restores original real garden geometry")
	var bridge:Node3D=demo.town.road_roots[fixture.bridge.road_id].get_node("ModernSingleArchBridge");var run:Dictionary=bridge.get_meta("run");var at:Vector2=fixture.bridge_center
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
	var aerial:Array=demo.town.house_roots["h1"].get_meta("skybridges",[])
	_check(aerial.size()==1 and demo.town.house_roots["h1"].find_children("ModernSkybridge_*","Node3D",true,false).size()==1,"new alpine roof preserves the real original upper glass skybridge")
	if not aerial.is_empty():
		var mid:Vector2=(aerial[0].a+aerial[0].b)*.5
		var overhead:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(mid.x,8,mid.y),Vector3(mid.x,1.,mid.y),1))
		var below:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(mid.x,.7,mid.y-1),Vector3(mid.x,.7,mid.y+1),1))
		_check(not overhead.is_empty() and overhead.collider.get_meta("skybridge",false) and below.is_empty(),"actual airbridge floor remains pickable above a physically clear street corridor")
	demo.focus=Vector3(at.x,.3,at.y);demo.zoom=14;demo.yaw=.65;demo.pitch=.5;demo._update_camera();await _capture("08_white_single_arch_glass_parapets_and_actual_tram")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec();demo.life.set_process(true)
	for i in range(180):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort()
	var components:Dictionary=await preload("res://tools/fixtures/city_creation_component_probe.gd").capture(demo,OUT)
	_check(components.ok,"all four actual era components publish finite contact bounds and unified lit shader kinds")
	var modern:Dictionary=await preload("res://tools/fixtures/city_creation_modern_archetypes_live.gd").capture(demo,OUT)
	for label:String in modern.checks:_check(modern.checks[label],"modern archetypes: "+label)
	var audio:Dictionary=await preload("res://tools/fixtures/city_creation_audio_probe.gd").record(OUT+"/Master.wav")
	_check(audio.ok,"actual Master recording is audible and unclipped without adding voices")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated real-window validation preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"components":components,"audio":audio,"field_upload":uploaded,"car_position":var_to_str(car_position),"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1]}
	FileAccess.open(OUT+"/era_streets_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("ERA_STREETS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

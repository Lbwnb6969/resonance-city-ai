extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/画布扩容_2026-10-16"
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
var demo
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _json(data:Dictionary)->Dictionary:return JSON.parse_string(JSON.stringify(data,"",true,true))
func _cpu(city)->void:
	var examples=load("res://scripts/world/city_creation_examples.gd");var accepted:=0
	for entry:Dictionary in examples.entries():
		var loaded:Dictionary=examples.read(entry.id);var fresh:=State.new()
		if loaded.ok and fresh.restore(loaded.world).ok:accepted+=1
	_check(accepted==17,"all seventeen original example cities remain readable after bounds expansion")
	city.initialize();var corner_records:Array=[]
	for signs:Vector2 in [Vector2(-1,-1),Vector2(1,-1),Vector2(-1,1),Vector2(1,1)]:
		var center:=signs*36;var terrain_points:Array[Vector2]=[Vector2(signs.x*36,signs.y*33)]
		var terrain:Dictionary=city.add_terrain_stroke(terrain_points,"raise",2,1,2)
		var house:Dictionary=city.add_house(center)
		var road_points:Array[Vector2]=[Vector2(signs.x*32,signs.y*36),Vector2(signs.x*34.45,signs.y*36)]
		var road:Dictionary=city.add_road(road_points)
		var plant_points:Array[Vector2]=[signs*33];var plants:Dictionary=city.add_vegetation_stroke(plant_points,"olive",1.2)
		var pond_points:Array[Vector2]=[Vector2(signs.x*33,signs.y*38)];var pond:Dictionary=city.add_water(pond_points,1.2,"pond")
		_check(terrain.ok and house.ok and road.ok and plants.ok and pond.ok,"real terrain house road vegetation and pond edits succeed in new far corner "+str(center))
		corner_records.append({"center":center,"terrain":terrain,"house":house,"road":road,"plants":plants,"pond":pond})
	facts.corners=corner_records
	var before:Dictionary=city.snapshot();var outside:Array[Vector2]=[Vector2(43,43),Vector2(44,43)]
	var bad_house:Dictionary=city.add_house(Vector2(43,43));var bad_road:Dictionary=city.add_road(outside);var bad_plant:Dictionary=city.add_vegetation_stroke(outside,"olive",1.2);var bad_water:Dictionary=city.add_water(outside,1.2,"pond");var bad_terrain:Dictionary=city.add_terrain_stroke(outside,"raise",2,1)
	_check(not bad_house.ok and not bad_road.ok and not bad_plant.ok and not bad_water.ok and not bad_terrain.ok and city.snapshot()==before,"all five outside-canvas author operations reject atomically")
	var clone:=State.new()
	_check(clone.restore(_json(before)).ok and clone.houses==city.houses and clone.roads==city.roads and clone.plants==city.plants and clone.waters==city.waters and clone.terrain_strokes==city.terrain_strokes,"real JSON roundtrip retains authored data from all four distant corners")
	_check(city.undo().ok and city.waters.size()==before.waters.size()-1 and city.redo().ok and city.waters==before.waters,"real far-corner pond undo and redo preserve the same authored identity")
	if failures.is_empty():_check(city.save_city(OUT+"/四角验证城.json").ok,"actual four-corner city saves to an isolated verification file")
func _audio()->Array:
	var rows:Array=[]
	for id:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[id];rows.append([id,player.get_instance_id(),player.stream.get_instance_id()])
	for player:AudioStreamPlayer in demo.music._effects:rows.append(player.get_instance_id())
	for id:String in demo.ambience.players:
		var player:AudioStreamPlayer=demo.ambience.players[id];rows.append([id,player.get_instance_id(),player.stream.get_instance_id()])
	return rows
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await physics_frame;await process_frame
func _click(at:Vector2)->void:
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.global_position=at;event.pressed=down;root.push_input(event);await process_frame
func _live(city)->void:
	var personal:PackedByteArray=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var startup:int=Time.get_ticks_usec();demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.music.audio_report.is_empty() or not demo.ambience.report().ready) and Time.get_ticks_msec()<deadline:await process_frame
	facts.startup_ms=float(Time.get_ticks_usec()-startup)/1000
	var audio:Array=_audio();var clock:float=demo.music._playback_clock()
	var restored:Dictionary=demo.state.restore(_json(city.snapshot()));demo._after_edit(restored,"history");await _wait()
	demo.focus=Vector3(34,.7,31);demo.zoom=15;demo.pitch=.85;demo.yaw=.62;demo._update_camera();demo.select_tool(0)
	var far_ids:Dictionary={}
	for key:Vector2i in demo.town.terrain_surface.blocks:
		if Vector2(key*16).distance_to(Vector2(34,30))>32:far_ids[key]=demo.town.terrain_surface.blocks[key].get_instance_id()
	var at:=Vector2(35,32.5);var y:float=demo.state.ground_height(at)
	var ray:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,15,at.y),Vector3(at.x,-5,at.y),2))
	_check(restored.ok and not ray.is_empty() and absf(float(ray.position.y)-y)<.002,"actual far-edge ground has matching visible height and real layer-two terrain collision")
	var count:int=demo.state.houses.size();var edit_started:int=Time.get_ticks_usec()
	await _click(demo.camera.unproject_position(Vector3(at.x,y,at.y)));await _wait()
	facts.edit_release_to_publication_ms=float(Time.get_ticks_usec()-edit_started)/1000
	_check(demo.state.houses.size()==count+1,"actual Window ground click builds a new house outside the old canvas")
	var contact=demo.town.ground_contact_field
	_check(contact.texture.get_width()==512 and contact.texture.get_height()==512 and contact.sample_world(at).x*contact.RANGE<.1 and demo.town.meadow.base_counts.get(Vector2i(4,4),0)>0,"actual far-edge house has aligned512 contact distance and populated grass block")
	var retained:=0;var stable:=true
	for key:Vector2i in far_ids:
		if demo.town.terrain_surface.blocks.has(key):retained+=1;stable=stable and demo.town.terrain_surface.blocks[key].get_instance_id()==far_ids[key]
	_check(retained>0 and stable,"far-edge local house edit retains distant terrain block identities")
	var field=demo.town.water_field;var image:Image=field.image;var distance_ok:=true
	for point:Vector2 in [Vector2(33,38),Vector2(34,38),Vector2(35,38)]:
		var pixel:=Vector2i((point-field.FIELD_RECT.position)/field.PIXEL_SIZE)
		var world:Vector2=field.pixel_world(pixel)
		distance_ok=distance_ok and absf(image.get_pixelv(pixel).r-clampf(demo.state.water_clearance(world),-field.DISTANCE_LIMIT,field.DISTANCE_LIMIT))<.001
	_check(image.get_width()==512 and image.get_height()==512 and distance_ok,"actual512-square water distance texels align with authored far-edge pond")
	var river_ends:=0
	for z:float in [-37.0,37.0]:
		var origin:=Vector3(State.river_x(z),2,z);var found:=false
		for surface:MeshInstance3D in demo.town.water_components.values():
			var faces:PackedVector3Array=surface.mesh.get_faces()
			for i in range(0,faces.size(),3):
				if Geometry3D.ray_intersects_triangle(origin,Vector3.DOWN,faces[i],faces[i+1],faces[i+2])!=null:found=true;break
			if found:break
		if found:river_ends+=1
	_check(river_ends==2,"actual rendered river triangles continue through both new north and south regions")
	demo.ui_layer.visible=false;demo.town.clear_preview();await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/远角河湾真实建造.png")==OK,"actual expanded-canvas build image saves")
	var wall:Array[float]=[];var draws:Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.performance={"frames":120,"p95_ms":wall[113],"max_ms":wall[-1],"draw_median":draws[60],"retained_far_terrain_blocks":retained,"water_field":field.diagnostics()}
	facts.meadow=demo.town.meadow.diagnostics()
	facts.contact=contact.stats.duplicate()
	var tiny:Array[Vector2]=[Vector2(30,31)]
	var pond:Dictionary=demo.state.add_water(tiny,1.2,"pond")
	var edit_begin:=Time.get_ticks_usec();demo._after_edit(pond,"water");await _wait()
	facts.water_edit_ms=float(Time.get_ticks_usec()-edit_begin)/1000
	facts.local_water_update=field.diagnostics()
	_check(pond.ok and facts.local_water_update.texels_recomputed>0 and facts.local_water_update.texels_recomputed<512*512/8,"new-region pond edit recomputes a local512-field subrectangle")
	demo.home_camera();await process_frame;await RenderingServer.frame_post_draw
	var framed:=true
	for corner:Vector2 in [Vector2(-39,-39),Vector2(-39,39),Vector2(39,-39),Vector2(39,39)]:
		var point:=Vector3(corner.x,demo.state.ground_height(corner),corner.y)
		framed=framed and not demo.camera.is_position_behind(point) and Rect2(Vector2.ZERO,Vector2(root.size)).has_point(demo.camera.unproject_position(point))
	_check(framed and demo.zoom>50 and demo.gallery.library._valid_view(demo.gallery._view()),"real panorama frames all four expanded corners and its camera can be collected")
	root.get_texture().get_image().save_png(OUT+"/80米河湾全景.png")
	wall.clear();draws.clear();previous=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();wall.append(float(now-previous)/1000);previous=now;draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))
	wall.sort();draws.sort();facts.panorama={"frames":120,"p95_ms":wall[113],"max_ms":wall[-1],"draw_median":draws[60]}
	_check(_audio()==audio and demo.music.get_child_count()==demo.music.STEMS.size()+4 and demo.ambience.players.size()==2 and demo.music._playback_clock()>clock and (FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"expanded canvas preserves original music and ambience instances transport and personal save")
	demo.set_process(false);demo.life.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values():player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;await create_timer(.15).timeout
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var city:=State.new();_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty():await _live(city)
	var result:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CANVAS_CHECK ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)

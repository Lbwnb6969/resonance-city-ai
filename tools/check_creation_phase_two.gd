extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Earthworks=preload("res://scripts/visual/city_creation_road_earthworks.gd")
const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/四库路线_2026-10-17/Phase2"
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
var demo
func _initialize()->void: _run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+25000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _fixture()->RefCounted:
	var city:=State.new();city.initialize()
	var points: Array[Vector2]=[Vector2(-28,-5),Vector2(-28,5)]
	_check(city.add_terrain_stroke(points,"plateau",5,1,2).ok,"author raised valley ridge through public terrain brush")
	points=[Vector2(-25,-7),Vector2(-25,7)]
	_check(city.add_road(points).ok,"author contour road on the ridge shoulder")
	return city
func _cpu(city: RefCounted)->void:
	var renderer:=Renderer.new();renderer.state=city
	city.prepare_ground_height();renderer._prepare_road_layout()
	var road: Dictionary=city.roads[-1]
	var profile: Dictionary=city.road_profile(road)
	var original: Dictionary=city.snapshot()
	var data: Dictionary=Earthworks.prepare(renderer,road,profile)
	var cuts:=0;var fills:=0;var grounded:=true
	for row: Dictionary in data.sections:
		if row.kind=="cut": cuts+=1
		else: fills+=1
		grounded=grounded and row.bottom_a<=city.raw_terrain_height(row.a)-.119 and row.bottom_b<=city.raw_terrain_height(row.b)-.119
	_check(cuts>0 and fills>0,"same contour road derives uphill cut walls and downhill fill masonry")
	_check(grounded and data.faces.size()==data.sections.size()*30,"closed five-face masonry sections descend into actual natural ground")
	_check(Earthworks.prepare(renderer,road,profile)==data and city.snapshot()==original,"CPU preparation is deterministic and leaves authored city untouched")
	var clone:=State.new()
	_check(clone.restore(JSON.parse_string(JSON.stringify(original))).ok,"old schema JSON remains loadable without earthworks fields")
	var other:=Renderer.new();other.state=clone;clone.prepare_ground_height();other._prepare_road_layout()
	_check(Earthworks.prepare(other,clone.roads[-1],clone.road_profile(clone.roads[-1]))==data,"save roundtrip reconstructs identical cut/fill geometry")
	var before: int=renderer._road_fingerprint(road)
	var points: Array[Vector2]=[Vector2(-23.4,0)]
	_check(city.add_terrain_stroke(points,"raise",1.5,.25,1).ok,"edit only local road shoulder")
	city.prepare_ground_height()
	_check(renderer._road_fingerprint(road)!=before,"shoulder terrain participates in the road cache fingerprint")
	_check(city.undo().ok,"undo shoulder sculpt")
	city.prepare_ground_height()
	_check(renderer._road_fingerprint(road)==before and Earthworks.prepare(renderer,road,city.road_profile(road))==data,"undo restores exact road cache and derived masonry")
	var heights=city._road_heights
	var samples: Array=[{"y":0.0,"distance":0.0,"bridge":false},{"y":.23,"distance":1.0,"bridge":false}]
	_check(heights._steep(samples,0),"grade .23 triggers steps above new .22 threshold")
	var maximum_rise:=0.0
	var previous: Dictionary={}
	for tread: Dictionary in profile.treads:
		if not previous.is_empty() and tread.run==previous.run: maximum_rise=maxf(maximum_rise,absf(float(tread.y)-float(previous.y)))
		previous=tread
	_check(not profile.treads.is_empty() and maximum_rise<=.12001,"contour road derives real treads with risers no larger than .12m")
	var house: Dictionary=city.houses[0]
	var entry: Dictionary=city.house_entrances(str(house.id))[0]
	var flat: Dictionary=Frontage.porch_plan(city,house,entry)
	var lifted: Dictionary=house.duplicate(true);lifted.base_y=1.0
	var tall: Dictionary=Frontage.porch_plan(city,lifted,entry)
	_check(flat.count==3 and tall.count==10 and tall.bottom<-.8,"door plan keeps three flat treads and adapts to raised doorway within ten steps")
	var porch:=Node3D.new()
	renderer._door_porch(porch,false,tall)
	var tops: Array[float]=[]
	for part: Node in porch.get_children():
		if part is MeshInstance3D and part.mesh is BoxMesh and is_equal_approx(part.mesh.size.z,.29):
			tops.append(part.position.y+part.mesh.size.y*.5)
	_check(porch.get_meta("porch_steps")==10 and tops.size()==10 and is_equal_approx(tops[0],.15) and is_equal_approx(tops[-1],float(tall.bottom)+(.15-float(tall.bottom))/10),"real porch mesh publishes all ten continuous treads between ground and doorway")
	porch.free()
	facts={"cuts":cuts,"fills":fills,"triangles":data.faces.size()/3,"treads":profile.treads.size(),"max_riser":maximum_rise,"flat_porch":flat,"raised_porch":tall}
	for owner: Node in [other,renderer]:
		# These CPU-only renderers never run setup(), which normally parents
		# their eagerly-created visual modules to the scene tree.
		for property: Dictionary in owner.get_script().get_script_property_list():
			var value: Variant=owner.get(property.name)
			if value is Node and value.get_parent()==null: value.free()
		owner.free()
func _live(city: RefCounted)->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);demo.ui_layer.visible=false
	var restored: Dictionary=demo.state.restore(city.snapshot());demo._after_edit(restored,"history");await _wait()
	var road: Dictionary=demo.state.roads[-1]
	var mesh: MeshInstance3D=demo.town.roads_layer.get_node(str(road.id)).get_node_or_null("RoadCutFillMasonry")
	_check(restored.ok and mesh!=null,"production budget rebuild installs contour cut/fill mesh")
	if mesh!=null:
		facts.wall_body_layer=demo.town.roads_layer.get_node(str(road.id)).get_node("EarthworksGroundPick").collision_layer
		_check(mesh.material_override is StandardMaterial3D and mesh.material_override.albedo_texture!=null and mesh.material_override.uv1_world_triplanar,"retaining masonry uses shared recovered stone texture in world metres")
		var ray_ok:=true;var probed:=0
		facts.rays=[]
		for section: Dictionary in mesh.get_meta("sections"):
			if section.kind!="cut" or probed>=5: continue
			var at: Vector2=(Vector2(section.a)+Vector2(section.b))*.5
			var normal: Vector2=(Vector2(section.b)-Vector2(section.a)).orthogonal().normalized()
			# Probe both offsets because road orientation determines wall's outer side.
			var found:=false
			for side: float in [-.08,.08]:
				var p:=at+normal*side
				var hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(p.x,9,p.y),Vector3(p.x,-2,p.y),2))
				facts.rays.append({"p":p,"section":section,"ground":demo.state.ground_height(p),"collider":str(hit.collider.name) if not hit.is_empty() else "none","hit_y":hit.position.y if not hit.is_empty() else -99})
				if not hit.is_empty() and str(hit.collider.name)=="EarthworksGroundPick": found=true
			ray_ok=ray_ok and found;probed+=1
		_check(ray_ok and probed>0,"actual layer-two rays hit installed cut-wall coping")
	var views: Array=[]
	for angle: float in [-.7,2.5]:
		demo.focus=Vector3(-25,1.3,0);demo.zoom=18;demo.pitch=.65;demo.yaw=angle;demo._update_camera();demo.town.clear_preview()
		for ignored in range(20): await process_frame
		await RenderingServer.frame_post_draw
		root.get_texture().get_image().save_png(OUT+"/contour_"+str(angle)+".png")
	var times: Array[float]=[];var last:=Time.get_ticks_usec()
	for ignored in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();times.append((now-last)/1000.0);last=now
	times.sort();facts.performance={"p95_ms":times[113],"max_ms":times[-1],"frames":120}
	var retained_id: int=mesh.get_instance_id() if mesh!=null else 0
	var points: Array[Vector2]=[Vector2(-23.4,0)]
	var edit: Dictionary=demo.state.add_terrain_stroke(points,"raise",1.5,.25,1)
	demo._after_edit(edit,"terrain");await _wait()
	var updated: Node=demo.town.roads_layer.get_node(str(road.id)).get_node_or_null("RoadCutFillMasonry")
	_check(updated!=null and updated.get_instance_id()!=retained_id,"real shoulder edit publishes a new dependent masonry mesh")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated terrain/undo inspection leaves personal save bytes intact")
	demo.queue_free();await process_frame;await create_timer(.2).timeout
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var city:=_fixture();_cpu(city)
	if "--live" in OS.get_cmdline_user_args() and failures.is_empty(): await _live(city)
	var report: Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+("/live.json" if "--live" in OS.get_cmdline_user_args() else "/state.json"),FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("PHASE_TWO ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

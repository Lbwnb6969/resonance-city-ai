extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Layout = preload("res://scripts/world/city_creation_cafe_layout.gd")
var checks:=0
var failures:Array[String]=[]

func _initialize() -> void: _run.call_deferred()
func _check(value:bool,label:String) -> void:
	checks+=1
	if not value: failures.append(label)

func _run() -> void:
	var city:=State.new()
	city.initialize()
	_check(city.set_house_role("h3","garden_cafe").ok,"default double-room house accepts garden cafe")
	var plan:=Layout.layout(city,"h3")
	_check(not plan.is_empty(),"default h3 has a complete actual three-seat courtyard")
	if plan.is_empty(): _finish(); return
	_check(plan.seats.size()==3,"one table has exactly three real places")
	_check(Layout.clear(city,plan.center,Layout.TABLE_RADIUS+0.05),"table avoids doors roads house water and parcel boundary")
	var routes:Array=[]
	for seat:Vector2 in plan.seats:
		_check(Layout.clear(city,seat,Layout.CHAIR_RADIUS+0.05),"chair footprint clear")
		var path:=Layout.route(city,"h3",plan.entrance,seat)
		_check(not path.is_empty() and path.front()==plan.entrance and path.back()==seat,"actual entrance connects to actual seat")
		var back:=Layout.route(city,"h3",seat,plan.entrance)
		_check(not back.is_empty() and back.front()==seat and back.back()==plan.entrance,"seated visitor has an actual route home")
		routes.append(path)
		for leg in range(1,path.size()):
			var near:Vector2=Geometry2D.get_closest_point_to_segment(plan.center,path[leg-1],path[leg])
			_check(near.distance_to(plan.center)>=Layout.TABLE_RADIUS+Layout.GUEST_RADIUS-0.001,"guest walks around table and center pole")
			var middle:Vector2=path[leg-1].lerp(path[leg],0.5)
			_check(not Layout.route(city,"h3",middle,plan.entrance).is_empty(),"cancelled midway guest can leave without teleport")
	var borrowed:Dictionary=Layout.layout(city,"h3")
	borrowed.seats.clear()
	_check(Layout.layout(city,"h3").seats.size()==3,"layout return cannot mutate its shared cache")
	var town:=Renderer.new()
	root.add_child(town)
	town.setup(city)
	await physics_frame
	var cafe:Node3D=town.cafes.roots.h3
	_check(cafe.get_node_or_null("GardenTable")!=null and cafe.get_node("ThreeChairs").multimesh.instance_count==3,"rendered table and three chairs share Life footprint")
	_check(cafe.get_node("GardenTable").multimesh.use_colors,"GPU batch enables authored canvas and wood vertex colors")
	if DisplayServer.get_name()!="headless": _check(cafe.get_node("GardenTable").multimesh.get_instance_color(0).is_equal_approx(Color.WHITE),"actual GPU instance white preserves authored colors")
	_check(not cafe.get_node("Cup0").visible and not cafe.get_node("Chat0").visible,"empty table invents no cups or chatter")
	var id:int=cafe.get_instance_id()
	var nodes:int=cafe.get_child_count()
	var builds:int=town.cafes.build_count
	var house_id:int=town.house_roots.h3.get_instance_id()
	for index in range(20): town.update_cafes({"h3":{"phase":"tea","seated_count":2,"seated_seats":[0,2]}})
	_check(cafe.get_node("Cup0").visible and not cafe.get_node("Cup1").visible and cafe.get_node("Cup2").visible,"cups correspond to actual occupied seat numbers")
	_check(cafe.get_node("Chat0").visible and not cafe.get_node("Chat1").visible and cafe.get_node("Chat2").visible,"only actual tea participants have conversation dots")
	_check(town.cafes.roots.h3.get_instance_id()==id and cafe.get_child_count()==nodes and town.cafes.build_count==builds,"twenty life refreshes allocate zero furniture or nodes")
	_check(town.house_roots.h3.get_instance_id()==house_id,"tea activity preserves structural house and music rig")
	town.update_cafes({"h3":{"phase":"tea","seated_count":2,"seated_seats":[0,2],"music_audible":true}})
	var activity:ShaderMaterial=cafe.get_meta("activity_material")
	_check(float(activity.get_shader_parameter("musical_light"))==1.0,"only actual audible short flute lights the tea table")
	town.update_cafes({"h3":{"phase":"tea","seated_count":2,"seated_seats":[0,2],"music_audible":false}})
	_check(float(activity.get_shader_parameter("musical_light"))==0.0 and cafe.get_node("Chat0").visible,"mute clears musical light while physical conversation continues")
	var arrays:Array=cafe.get_node("GardenTable").multimesh.mesh.surface_get_arrays(0)
	var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
	var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
	var up_canvas:=false
	var down_canvas:=false
	for vertex in range(vertices.size()):
		if vertices[vertex].y<1.75 or Vector2(vertices[vertex].x,vertices[vertex].z).length()<0.90: continue
		if normals[vertex].y>0.90: up_canvas=true
		if normals[vertex].y< -0.90: down_canvas=true
	_check(up_canvas and down_canvas,"thin canvas has explicit bright upper and underside normals")
	town.update_cafes({"h3":{"phase":"gathering","seated_count":1,"seated_seats":[1]}})
	_check(cafe.get_node("Cup1").visible and not cafe.get_node("Chat1").visible,"single waiting guest has cup but no invented group conversation")
	if "--cafe-capture" in OS.get_cmdline_user_args():
		root.size=Vector2i(1440,900)
		var camera:=Camera3D.new()
		camera.projection=Camera3D.PROJECTION_ORTHOGONAL
		camera.size=9.0
		camera.position=Vector3(float(plan.center.x)+5,7,float(plan.center.y)+7)
		root.add_child(camera)
		camera.look_at(Vector3(plan.center.x,0.8,plan.center.y))
		camera.current=true
		var sun:=DirectionalLight3D.new()
		sun.rotation_degrees=Vector3(-48,-30,0)
		sun.light_color=Color("fff0d5")
		sun.light_energy=1.05
		sun.shadow_enabled=true
		root.add_child(sun)
		var env:=WorldEnvironment.new()
		env.environment=Environment.new()
		env.environment.background_mode=Environment.BG_COLOR
		env.environment.background_color=Color("d4ddd4")
		env.environment.ambient_light_source=Environment.AMBIENT_SOURCE_COLOR
		env.environment.ambient_light_color=Color("cedcda")
		env.environment.ambient_light_energy=0.6
		root.add_child(env)
		town.update_cafes({"h3":{"phase":"tea","seated_count":3,"seated_seats":[0,1,2]}})
		for index in range(8): await process_frame
		await RenderingServer.frame_post_draw
		DirAccess.make_dir_recursive_absolute("res://验证记录/花圃茶座_2026-10-15/geometry")
		root.get_texture().get_image().save_png("res://验证记录/花圃茶座_2026-10-15/geometry/01_courtyard.png")
		_check(RenderingServer.get_rendering_device()==null,"capture uses production Compatibility renderer")
	_check(city.set_house_role("h4","garden_cafe").ok,"second real cafe can be built")
	var second:=Layout.layout(city,"h4")
	_check(not second.is_empty() and Vector2(second.center).distance_to(plan.center)>=2.5,"adjacent cafes reserve distinct physical table courtyards")
	town.rebuild()
	_check(town.cafes.roots.h3.get_node("GardenTable").multimesh.mesh==town.cafes.roots.h4.get_node("GardenTable").multimesh.mesh,"two cafes share immutable furniture GPU geometry")
	for seat:Vector2 in second.seats:
		var path:=Layout.route(city,"h4",second.entrance,seat)
		_check(not path.is_empty(),"second cafe can reach each actual seat around both courtyards")
		for leg in range(1,path.size()):
			_check(Vector2(plan.center).distance_to(Geometry2D.get_closest_point_to_segment(plan.center,path[leg-1],path[leg]))>=Layout.TABLE_RADIUS+Layout.GUEST_RADIUS-0.001,"second cafe visitor cannot cross first cafe table")
	_check(city.set_house_role("h3","residential").ok,"cafe can return to dwelling")
	town.rebuild()
	_check(not town.cafes.roots.has("h3"),"role change removes cafe capacity and furniture")
	_check(Layout.layout(city,"h3").is_empty(),"non-cafe has no false guest seats")
	town.queue_free()
	_finish()

func _finish() -> void:
	if failures.is_empty():
		print("PASS cafe geometry ",checks," checks")
		quit()
	else:
		for failure:String in failures: push_error(failure)
		print("FAIL cafe geometry ",failures.size()," / ",checks)
		quit(1)

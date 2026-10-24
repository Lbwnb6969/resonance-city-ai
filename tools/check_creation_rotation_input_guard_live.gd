extends "res://tools/check_creation_music_experience_live.gd"
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
func key(code:Key)->void:
	var event:=InputEventKey.new();event.keycode=code;event.pressed=true;root.push_input(event);await process_frame
	event=InputEventKey.new();event.keycode=code;root.push_input(event);await process_frame
func run()->void:
	OUT="res://验证记录/M44/input_guard";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var city:=State.new();city.initialize_empty();var id:String=city.add_house(Vector2(-25,-17)).house_id
	check(city.add_cell(id,1,0,0).ok,"real two room host");await show(city,Vector2(-25,-17),"input_guard");demo.life.set_process(false)
	demo.selected_house=id;demo.house_module_mode=true;demo.pointer=Vector2(700,450)
	demo.candidate={"house_id":id,"cell":{"x":0,"z":1,"level":0,"kind":"room"}};demo.hovered={"position":Vector3(-25,0,-17)};demo._begin_house_stroke()
	await key(KEY_R);check(demo.house_drawing and str(demo.get_meta("house_rotation_input").target).is_empty(),"native R during real construction draft does not steal input")
	await key(KEY_ESCAPE);check(not demo.house_drawing,"native Escape still cancels original draft")
	demo.house_module_mode=false;demo.spatial_popover.open_for_house(id);demo.orbiting=true;await key(KEY_R)
	check(demo.orbiting and str(demo.get_meta("house_rotation_input").target).is_empty(),"R does not enter modal during camera drag")
	var release:=InputEventMouseButton.new();release.button_index=MOUSE_BUTTON_RIGHT;release.pressed=false;root.push_input(release);await process_frame
	check(not demo.orbiting,"actual right release clears original camera drag")
	demo.select_tool(2);var straight:bool=demo.road_straight;var snapshot:Dictionary=demo.state.snapshot();await key(KEY_R)
	check(demo.road_straight!=straight and str(demo.get_meta("house_rotation_input").target).is_empty(),"road tool R retains straight/curved toggle after selecting a house")
	check(demo.state.snapshot()==snapshot,"road mode R does not rotate retained house selection")
	demo.select_tool(0)
	demo._after_edit(demo.state.rotate_house(id,PI*.25),"room");await settle();await physics_frame
	var h:Dictionary=demo.town._house_record(id);var normal:=Frame.direction(h,Vector2.DOWN);var wall:=Frame.point(h,Vector2(-25-.6,-17+.9))
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(wall.x+normal.x*.45,.8,wall.y+normal.y*.45),Vector3(wall.x-normal.x*.10,.8,wall.y-normal.y*.10),1))
	check(not hit.is_empty(),"actual non-door angled wall ray")
	if not hit.is_empty():
		demo.pointer=demo.camera.unproject_position(hit.position)
		var point:Variant=demo.get_meta("house_rotation_input").road_point(hit)
		check(point!=null and Vector2(point).distance_to(demo._ground_at(demo.pointer))<.00001,"rotated non-door wall falls to ground without legacy axis snap")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures},"\t"));print("ROTATION_INPUT_GUARD ",checks," ",failures);quit(0 if failures.is_empty() else 1)

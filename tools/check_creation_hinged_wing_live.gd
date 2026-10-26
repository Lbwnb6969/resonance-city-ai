extends "res://tools/check_creation_organic_corners_live.gd"
const Actions=preload("res://scripts/world/city_creation_hinge_actions.gd")
const Hug=preload("res://scripts/world/city_creation_curve_hug.gd")
func curved_path()->Array[Vector2]:
	var points:Array[Vector2]=[]
	for i in range(61):var x:float=-30.+i*.25;points.append(Vector2(x,-18.+.05*pow(x+24.,2.)))
	return points
func pointer3(at:Vector3,click:bool=false,index:int=MOUSE_BUTTON_LEFT)->void:
	var position:Vector2=demo.camera.unproject_position(at);var motion:=InputEventMouseMotion.new();motion.device=92;motion.position=position;motion.global_position=position;root.push_input(motion);await process_frame
	if click:
		for down:bool in [true,false]:var event:=InputEventMouseButton.new();event.device=92;event.position=position;event.global_position=position;event.button_index=index;event.pressed=down;root.push_input(event);await process_frame
func wheel(count:int)->void:
	var position:Vector2=stamp().get_global_rect().get_center()
	for i in range(absi(count)):
		for down:bool in [true,false]:
			var event:=InputEventMouseButton.new();event.device=92;event.position=position;event.global_position=position;event.button_index=MOUSE_BUTTON_WHEEL_UP if count>0 else MOUSE_BUTTON_WHEEL_DOWN;event.pressed=down;root.push_input(event);await process_frame
		await settle()
func right_seal()->void:
	var position:Vector2=stamp().get_global_rect().get_center()
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=position;event.global_position=position;event.button_index=MOUSE_BUTTON_RIGHT;event.pressed=down;root.push_input(event);await process_frame
	await settle()
func roof_at(house:Dictionary,at:Vector2,end_y:float)->Dictionary:
	var world:Vector2=Frame.origin(house)+(at-Frame.origin(house)).rotated(-Frame.yaw(house))
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(world.x,end_y+4.,world.y),Vector3(world.x,end_y,world.y),1))
func check_joint(id:String)->void:
	var house:=record_house(id);var plan:=Frame.Hinge.layout(house);var across:=Vector2(-plan.axis.y,plan.axis.x)*signf(Frame.Hinge.angle(house));var count:=0
	for t:float in [.25,.5,.75,.95]:
		var old:Vector2=Vector2(plan.pivot)+across*.9*t;var next:=Frame.Hinge.rotate(house,old);var at:Vector2=(old+next)*.5
		var hit:=roof_at(house,at,float(house.get("base_y",0.))+int(plan.floors)*1.7+.005)
		if not hit.is_empty() and hit.collider.get_meta("house_id","")==id:count+=1
	check(count==4,"actual closed roof fan has picking at four points over the opened joint")
func run()->void:
	OUT="res://验证记录/M63/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty();check(city.add_road(curved_path(),"promenade","none").ok,"authored curved street")
	check(city.add_house(Vector2(-25,-14.3)).ok and city.add_cell("h1",1,0,0).ok,"actual extension automatically follows the real curved street")
	check(city.houses[0].has("bend_angle_deg") and city.houses[0].get("corner_bevel",0)==2,"one placement transaction persists real angle and round preference")
	await show(city,Vector2(-24,-14.7),"弯街自然生长");quiet();demo.select_tool(0);demo.house_module_mode=false
	demo.focus=Vector3(-24,1.,-14.7);demo.zoom=9.;demo.yaw=.6;demo.pitch=.65;demo._update_camera();await settle()
	check(demo.town.house_roots.h1.has_meta("hinged_wing"),"published actual wing receives rigid transform and seam geometry")
	facts.auto_hug=Hug.sample(demo.state,record_house("h1"));facts.auto_geometry=demo.town.house_roots.h1.get_meta("hinged_wing");check_joint("h1");await capture("auto_curve_hug_roman_greek")
	await select_house("h1");var follow:=Hug.sample(demo.state,record_house("h1"));await right_seal()
	check(is_equal_approx(float(record_house("h1").get("bend_angle_deg",0.)),float(follow.angle)) and record_house("h1").organic_manual,"native right click follows actual current end tangents and protects the new manual choice")
	var house:=record_house("h1");var cell:Dictionary=house.cells[-1];var center:=Frame.center(house,cell);var normal:=Frame.direction(house,Vector2.UP,cell)
	var approach:Array[Vector2]=[center+normal*1.01,center+normal*4.5];var result:Dictionary=demo.state.add_road(approach,"promenade","none")
	check(result.ok,"public road terminal meets the actually rotated wing doorway")
	if result.ok:demo._after_edit(result,"road");await settle()
	check(demo.life.house_connected("h1") and demo.life.selected_entrances.h1.cell_id==str(cell.id),"real Life network uses the rotated wing doorway")
	var entrance:Dictionary=demo.life.selected_entrances.get("h1",{});facts.actual_wing_entry=entrance
	check(not entrance.is_empty() and Vector2(entrance.outward).distance_to(normal)<.001,"saved integer side and actual world door normal agree")
	await capture("actual_bent_wing_road_terminal")
	# A longer authored row makes the manual hinge, proxy and extension visible.
	city=State.new();city.initialize_empty();check(city.add_house(Vector2(-25,-12)).ok,"manual wing household")
	for x:int in [1,2,3]:check(city.add_cell("h1",x,0,0).ok,"authored long side wing")
	await show(city,Vector2(-22,-12),"手捏侧翼");quiet();demo.select_tool(0);demo.house_module_mode=false
	demo.focus=Vector3(-22,1.,-12);demo.zoom=12.;demo.yaw=.8;demo.pitch=.7;demo._update_camera();await settle();await select_house("h1")
	await ui_click(stamp());await settle();await ui_click(stamp());await settle()
	check(record_house("h1").get("corner_bevel",0)==1 and not record_house("h1").has("bend_angle_deg"),"same leaf seal retains the existing round and chamfer stages")
	var watcher:=FrameProbe.new();root.add_child(watcher);await ui_click(stamp())
	check(demo.edit_pending() and not demo.pending_modules.records.is_empty(),"actual committed hinge exposes editable proxies while hidden geometry assembles")
	var wing:Dictionary=record_house("h1").cells[-1];center=Frame.center(record_house("h1"),wing)
	var proxy:Dictionary=demo.pending_modules.pick(Vector3(center.x,8.,center.y),Vector3.DOWN)
	check(not proxy.is_empty() and proxy.cell_id==str(wing.id),"pending picking follows the new turned wing instead of an old AABB")
	await settle();watcher.samples.sort();facts.manual_edit_frames={"count":watcher.samples.size(),"max_ms":watcher.samples[-1],"p95_ms":watcher.samples[int(watcher.samples.size()*.95)]};watcher.queue_free()
	check(absf(float(record_house("h1").get("bend_angle_deg",0.))-15.)<.001 and stamp().caption.contains("15"),"native third leaf click authors a15degree hinge")
	await wheel(3);check(absf(float(record_house("h1").get("bend_angle_deg",0.))-28.)<.001,"native wheel adjusts and clamps actual hinge at28degrees")
	facts.manual_geometry=demo.town.house_roots.h1.get_meta("hinged_wing");check_joint("h1")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await settle();demo.spatial_popover.refresh();await settle();check(demo.spatial_popover.ring.placement_ok and stamp().is_visible_in_tree(),"one leaf seal still clears the turned house at"+str(size.x));await capture("manual_bend_"+str(size.x))
	root.size=Vector2i(1440,900);await settle()
	await key(KEY_Z,true);await settle();check(absf(float(record_house("h1").get("bend_angle_deg",0.))-25.)<.001,"native undo restores the previous precise angle")
	await key(KEY_Y,true);await settle();check(absf(float(record_house("h1").get("bend_angle_deg",0.))-28.)<.001,"native redo restores actual28degree wing")
	var swatch_root:int=demo.town.house_roots.h1.get_instance_id();await ui_click(demo.spatial_popover.swatches[1]);await settle()
	check(demo.town.house_roots.h1.get_instance_id()==swatch_root and demo.town.house_roots.h1.has_meta("hinged_wing"),"color fast path retains the true bent mesh")
	# Hover the actual far end wall, then extend it with native press/release.
	await ui_click(demo.spatial_popover.card.find_child("ExtendHouse",true,false));await settle()
	house=record_house("h1");wing=house.cells[-1];center=Frame.center(house,wing);normal=Frame.direction(house,Vector2.RIGHT,wing)
	var at:=Vector3(center.x+normal.x*.965,.85,center.y+normal.y*.965)
	await pointer3(at);for i in range(20):await process_frame
	check(demo.candidate.get("house_id","")=="h1" and int(demo.candidate.get("cell",{}).get("x",-9))==4,"native turned end-wall hover chooses the correct authored next cell")
	check(demo.town.preview.get_meta("hinge_preview",{}).get("angle",0.)==28.,"live extension preview uses the same actual hinge")
	await capture("turned_end_wall_preview");var count:int=house.cells.size();await pointer3(at,true);await settle()
	check(record_house("h1").cells.size()==count+1 and float(record_house("h1").get("bend_angle_deg",0.))==28.,"native extension keeps authored angle and original host")
	check_joint("h1");demo.house_module_mode=false;await select_house("h1");await key(KEY_E);await settle()
	check(absf(Frame.yaw(record_house("h1")))>1.5 and demo.town.house_roots.h1.has_meta("hinged_wing"),"whole-house native90degree yaw composes with the wing hinge")
	var saved:Dictionary=demo.state.snapshot();var reader:=State.new();check(reader.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"bent row cold JSON restores through normal save validation")
	await show(reader,Vector2(-24,-14),"折翼冷读");quiet();demo.select_tool(0);demo.house_module_mode=false;await settle()
	check(demo.state.houses==reader.houses and demo.town.house_roots.h1.has_meta("hinged_wing"),"cold GL publication retains actual float angle and original integer cells")
	demo.spatial_popover.close();demo.set_process(false);demo.town.clear_preview();demo.focus=Vector3(-24,1.,-14);demo.zoom=11.;demo.yaw=.1;demo.pitch=.65;demo._update_camera();await capture("cold_bent_wing_and_sealed_roof")
	facts.master=await Probe.record(OUT+"/hinged_wing_neighborhood_Master.wav",3.2);check(facts.master.ok,"actual bent-neighborhood Master stays unclipped")
	facts.final_houses=demo.state.houses.duplicate(true);await finish(personal,voices)

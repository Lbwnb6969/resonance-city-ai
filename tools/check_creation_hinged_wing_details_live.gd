extends "res://tools/check_creation_hinged_wing_live.gd"
func run()->void:
	OUT="res://验证记录/M63/details"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-26,-15),Vector2(-18,-15)]:check(city.add_house(at).ok,"actual axis comparison home")
	check(city.add_cell("h1",0,1,0).ok and city.add_cell("h2",-1,0,0).ok,"actual Z row and negative X row")
	check(city.add_cells("h1",[{"x":0,"z":0,"level":1,"kind":"room"},{"x":0,"z":1,"level":1,"kind":"room"}]).ok,"full upper Z wing")
	check(city.add_cells("h2",[{"x":0,"z":0,"level":1,"kind":"room"},{"x":-1,"z":0,"level":1,"kind":"room"}]).ok,"full upper negative X wing")
	check(Actions.set_angle(city,"h1",-22.).ok and Actions.set_angle(city,"h2",24.).ok,"two real two-storey signed hinges")
	await show(city,Vector2(-22,-15),"双层折翼与真实接缝");quiet();demo.select_tool(0);demo.house_module_mode=false
	demo.focus=Vector3(-22,1.8,-14.5);demo.zoom=16.;demo.yaw=.6;demo.pitch=.65;demo._update_camera();await settle()
	for id:String in ["h1","h2"]:
		check(demo.town.house_roots[id].has_meta("hinged_wing"),"actual two-storey bent publication "+id);check_joint(id)
		var house:=record_house(id);var cell:Dictionary=house.cells[-1];var at:=Frame.center(house,cell)
		var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,8,at.y),Vector3(at.x,.1,at.y),1))
		check(not hit.is_empty() and hit.collider.get_meta("cell_id","")==str(cell.id),"real upper roof ray identifies transformed authored cell "+id)
		facts[id]=demo.town.house_roots[id].get_meta("hinged_wing")
	await capture("two_storey_positive_negative_axes")
	var active_house:=record_house("h1");var ground_wing:Dictionary=active_house.cells.filter(func(c):return int(c.level)==0 and int(c.z)==1)[0]
	var center:=Frame.center(active_house,ground_wing);var normal:=Frame.direction(active_house,Vector2.RIGHT,ground_wing)
	var approach:Array[Vector2]=[center+normal*1.01,center+normal*4.5]
	var road:Dictionary=demo.state.add_road(approach,"promenade","none")
	check(road.ok,"real current Z wing door receives an external terminal")
	if road.ok:demo._after_edit(road,"road");await settle()
	check(demo.life.house_connected("h1"),"published Life network connects through the actual turned door")
	var prior_entry:Dictionary=demo.life.selected_entrances.get("h1",{}).duplicate(true)
	var altered:=Actions.set_angle(demo.state,"h1",-17.);check(altered.ok,"angle-only change leaves the same road legal")
	if altered.ok:demo._after_edit(altered,"room");await settle()
	var expected:Dictionary={}
	for entry:Dictionary in demo.state.house_entrances("h1"):
		if str(entry.cell_id)==str(ground_wing.id) and entry.active:expected=entry;break
	var current:Dictionary=demo.life.selected_entrances.get("h1",{})
	check(not expected.is_empty() and not current.is_empty() and Vector2(current.outward).distance_to(expected.outward)<.0001 and Vector2(current.outward).distance_to(prior_entry.outward)>.01,"angle-only edit invalidates Life cache and adopts the newly rotated doorway normal")
	facts.angle_only_entries={"before":prior_entry,"after":current,"expected":expected}
	demo.focus=Vector3(-26,2.,-14);demo.zoom=8.;demo.pitch=.52;demo.yaw=.7;demo._update_camera();await capture("z_axis_two_storey_closed_joint")
	# Returning straight must reject a new neighbour occupying the old pose.
	var h:Dictionary=record_house("h2");var initial:Dictionary=demo.state.snapshot();var chosen:=Vector2(INF,INF)
	for x in range(-8,9):
		for z in range(-8,9):
			var point:=Vector2(-19.8,-15)+Vector2(x,z)*.25;var probe:Dictionary=demo.state.validate_add_house(point)
			if not probe.ok:continue
			var straight:=h.duplicate(true);straight.erase("bend_angle_deg");var candidate:Dictionary={"origin":[point.x,point.y],"cells":[{"x":0,"z":0,"level":0,"kind":"room"}]}
			if Frame.overlaps(straight,candidate):chosen=point;break
		if chosen.is_finite():break
	if chosen.is_finite():
		var added:Dictionary=demo.state.add_house(chosen);check(added.ok,"actual neighbour fits the bent footprint but occupies the old straight pose")
		var before:Dictionary=demo.state.snapshot();var returned:=Actions.corner(demo.state,"h2",0,"直墙")
		check(not returned.ok and demo.state.snapshot()==before,"straight reset rejects occupied original pose atomically")
		check(demo.state.restore(initial).ok,"restore isolated comparison fixture after occupancy check")
	else:check(false,"fixture must expose a space vacated by the turned wing")
	facts.master=await Probe.record(OUT+"/two_storey_hinges_Master.wav",3.2);check(facts.master.ok,"actual two-storey hinge scene Master has no clipping")
	await finish(personal,voices)

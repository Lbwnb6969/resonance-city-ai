extends "res://tools/check_creation_music_experience_live.gd"
const Fixture=preload("res://tests/test_city_creation_street_wonders.gd")
const Plan=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
func key(code:Key)->void:
	for pressed:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.physical_keycode=code;event.pressed=pressed;root.push_input(event);await process_frame
	await settle()
func run()->void:
	OUT="res://验证记录/M47/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	await show(Fixture.fixture(),Vector2(-23,-15),"street_wonders");demo.life.set_process(false)
	for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).poll();demo.get_meta(meta).set_process(false)
	var layer:Node3D=demo.get_meta("street_wonders");var data:=Plan.derive(demo.state)
	check(DisplayServer.get_name()!="headless" and layer.layers.size()==4,"native GL publishes two piers, one pocket and one real fountain flowerbed")
	for node:Node3D in layer.layers:
		check(not node.find_children("*","StaticBody3D",true,false).size(),"decorations never add house/road collision entities")
		if str(node.name).begins_with("WatersidePier"):
			var dir:Vector3=node.global_basis*Vector3.BACK;var planned:Vector2=node.get_meta("plan").dir
			check(Vector2(dir.x,dir.z).dot(planned)>.9999,"actual built pier transform aligns with the pond normal")
			check(node.get_meta("material_batching",{}).size()>0,"actual pier meshes use the production material batcher")
	var original:Dictionary=demo.state.snapshot()
	demo.focus=Vector3(-23,0,-14);demo.zoom=10.;demo.pitch=.70;demo.yaw=.35;demo._update_camera();await settle();await capture("pond_piers_day_1440")
	demo.focus=Vector3(-30.7,.2,-22.5);demo.zoom=8.;demo._update_camera();await settle();await capture("corner_garden_day_1440")
	demo.spatial_popover.open_for_house("h3");await key(KEY_E)
	check(is_equal_approx(Frame.yaw(demo.state.houses[2]),.58+PI*.5),"actual E quarter-turn preserves the arbitrary house orientation")
	check(Plan.derive(demo.state).pockets.size()==1,"quarter-turn rederives a clear garden instead of rotating into the door")
	await key(KEY_Q);demo.spatial_popover.open_for_house("h3");await key(KEY_R)
	var move:=InputEventMouseMotion.new();move.relative=Vector2(27.5,0);move.position=Vector2(700,450);root.push_input(move);await process_frame;await key(KEY_R)
	check(absf(Frame.yaw(demo.state.houses[2])-.80)<.000001,"actual R continuous rotation commits the new .80-radian footprint")
	check(Plan.derive(demo.state).pockets.size()==1,"free rotation republishes a collision-clear corner pocket")
	demo.spatial_popover.close();demo._set_light_phase(2);await settle();await capture("corner_garden_night_1440")
	demo._set_light_phase(0);demo.focus=Vector3(-11,.3,-2);demo.zoom=10.;demo._update_camera();await settle();await capture("roundabout_flowerbed_1440")
	check(demo.town.roads_layer.find_children("RoundaboutPlaza","Node3D",true,false).size()==1,"one original two-tier fountain remains; the new bed does not duplicate the plaza")
	root.size=Vector2i(1024,768);await settle();await capture("roundabout_flowerbed_1024")
	var old:Dictionary=demo.state.snapshot();var erase:Dictionary=demo.state.remove_house("h5");check(erase.ok,"real house removal reduces the fountain neighborhood")
	demo._after_edit(erase,"house");await settle();check(Plan.derive(demo.state).fountains.is_empty(),"one remaining nearby house deactivates the two-house flowerbed")
	demo.state.undo();demo._after_edit({"ok":true,"message":"恢复街坊"},"history");await settle();check(Plan.derive(demo.state).fountains.size()==1,"undo restores the exact real fountain neighborhood")
	var saved:Dictionary=demo.state.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"real rotated scenery city cold-restores through full precision JSON")
	var left:Dictionary=Plan.derive(demo.state).duplicate(true);var right:Dictionary=Plan.derive(copy).duplicate(true);left.erase("key");right.erase("key")
	check(left==right,"all three actual scenic plans rederive exactly after cold load")
	FileAccess.open(OUT+"/city.json",FileAccess.WRITE).store_string(JSON.stringify(saved,"\t",true,true))
	facts.plan={"piers":left.piers.size(),"pockets":left.pockets.size(),"fountains":left.fountains.size()}
	facts.recording=await Probe.record(OUT+"/Master.wav",3.3);check(facts.recording.ok,"actual street scenery Master has no clipping")
	await finish(personal,voices)

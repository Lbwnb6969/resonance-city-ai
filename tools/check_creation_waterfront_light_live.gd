extends "res://tools/check_creation_music_experience_live.gd"
const Crowns=preload("res://tests/test_city_creation_legendary_wonders.gd")
const Ancient=preload("res://tools/fixtures/city_creation_ancient_fixture.gd")
func quiet()->void:
	for key:String in ["inspiration_draft","vignette_journey"]:
		var paper=demo.get_meta(key);paper.poll();paper.set_process(false);paper.paper.hide()
	demo.get_meta("vignette_journey").marker.hide();demo.ui_layer.hide()
func frame(at:Vector3,size:float,pitch:float,phase:int,label:String)->void:
	demo.focus=at;demo.zoom=size;demo.pitch=pitch;demo.yaw=.6;demo._set_light_phase(phase);demo._update_camera()
	await settle();demo.get_meta("waterfront_light").refresh();await capture(label)
func run()->void:
	OUT="res://验证记录/M55/review"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:RefCounted=Crowns.fixture()
	check(city.add_water([Vector2(-30,26)] as Array[Vector2],3.2,"pond").ok,"actual pond")
	check(city.add_house(Vector2(-30,30.1)).ok and city.add_house(Vector2(-33.7,26)).ok,"actual two shores")
	Crowns.choose_crowns(city)
	await show(city,Vector2(-30,26),"waterfront");quiet();demo.life.set_process(false)
	await frame(Vector3(-30,.6,26),11.,.65,0,"pier_day")
	var light:Node3D=demo.get_meta("waterfront_light");var scenery:Node3D=demo.get_meta("street_wonders")
	check(DisplayServer.get_name()!="headless" and light.sources.size()>=2,"real GL and published pier lamps")
	var actual:Array[Vector3]=[]
	for node:Node3D in scenery.layers:
		if node.has_meta("water_lamp"):actual.append(node.to_global(node.get_meta("water_lamp")))
	check(actual==light.sources,"every reflection source comes from an actual lamp transform")
	check(scenery.crowns.any(func(n):return n.has_meta("water_lamp")),"earned real Poseidon crown has a visible lantern source")
	await frame(Vector3(-30,.6,26),8.,.48,2,"pier_night")
	check(demo.town.water_material.get_shader_parameter("water_lamp_count")==mini(16,light.sources.size()),"native water shader binds actual source count")
	if "--glint-only" in OS.get_cmdline_user_args():
		light.set_process(false);demo.set_process(false);Engine.time_scale=0.
		for i in range(4):await process_frame
		await RenderingServer.frame_post_draw
		var on:Image=root.get_texture().get_image();on.save_png(OUT+"/glint_on.png")
		demo.town.water_material.set_shader_parameter("water_lamp_count",0)
		for i in range(4):await process_frame
		await RenderingServer.frame_post_draw
		var off:Image=root.get_texture().get_image();off.save_png(OUT+"/glint_off.png")
		var rows:Array=[]
		for lamp:Vector3 in light.sources:
			var dir:Vector2=(Vector2(demo.camera.global_position.x,demo.camera.global_position.z)-Vector2(lamp.x,lamp.z)).normalized()
			rows.append({"at":str(lamp),"water_distance":demo.state.water_clearance(Vector2(lamp.x,lamp.z)+dir*.8)})
		FileAccess.open(OUT+"/glint_diagnostic.json",FileAccess.WRITE).store_string(JSON.stringify({"sources":rows,"night":demo.town.water_material.get_shader_parameter("night"),"shader_lamps":str(demo.town.water_material.get_shader_parameter("water_lamps")),"camera":str(demo.camera.global_position)},"\t"))
		Engine.time_scale=1.;quit();return
	demo.town.water_material.set_shader_parameter("water_lamp_count",0);light.set_process(false);await capture("pier_night_without_glint")
	light.set_process(true);light.refresh()
	demo.yaw=3.8;demo._update_camera();await settle();await capture("pier_night_across_pond")
	root.size=Vector2i(1024,768);await frame(Vector3(-30,.6,26),8.,.48,2,"pier_night_1024")
	var saved:Dictionary=demo.state.snapshot();var before:int=light.sources.size()
	var pier:Node3D=scenery.layers.filter(func(n):return str(n.name).begins_with("WatersidePier"))[-1]
	var removed:String=str(pier.get_meta("plan").house_id)
	demo._after_edit(demo.state.remove_house(removed),"history");await settle();light.refresh()
	check(light.sources.size()<before,"demolishing actual pier host removes its reflected lamp")
	demo._after_edit(demo.state.undo(),"history");await settle();light.refresh()
	check(light.sources.size()==before and demo.state.houses==saved.houses,"undo restores the actual lamp and authored home")
	var grass:Node3D=demo.town.meadow
	var mesh:Mesh=grass._mesh("lawn")
	check(mesh.get_faces().size()/3==908,"near grass keeps exactly908 triangles")
	var finite:=true
	for point:Vector3 in mesh.get_faces():finite=finite and point.is_finite()
	check(finite and mesh.get_aabb().size.x<.7 and mesh.get_aabb().size.z<.7,"slender curled blades retain finite bounded footprint")
	await frame(Vector3(-29,.25,30.1),4.,.31,0,"grass_day_low")
	await frame(Vector3(-29,.25,30.1),4.,.31,2,"grass_night_low")
	# Diagnostic macro uses the real world batch/mesh, with a closer orthographic
	# crop than the ordinary 9m player limit. No substitute exemplar is inserted.
	for phase:int in [0,2]:
		demo._set_light_phase(phase);demo.focus=Vector3(-28.5,.12,31.8);demo.pitch=.4;demo._update_camera();demo.camera.size=1.8
		await settle();await capture("grass_macro_"+str(phase))
	var ancient:Dictionary=Ancient.build();await show(ancient.city,Vector2(-20,-10),"dusk_columns");quiet();demo.life.set_process(false)
	print("DUSK_OPEN ",demo.gallery.current_title," houses=",demo.state.houses.size()," status=",demo.gallery.panel._status)
	check(demo.gallery.current_title=="dusk_columns" and demo.state.houses.size()==4,"actual ancient work opens before photographing its columns")
	var h:Dictionary=demo.town._house_record(str(ancient.ids[0]));var at:=Vector3(h.origin[0],1.1,h.origin[1])
	root.size=Vector2i(1440,900);await frame(at,8.,.31,1,"columns_dusk_low")
	light=demo.get_meta("waterfront_light")
	check(light.targets.size()>0 and float(light.get_meta("diagnostics").strength)>0.,"low dusk view binds real colonnade atmospheric cards")
	check(light.veils.all(func(n):return n.find_children("*","StaticBody3D",true,false).is_empty()),"atmospheric cards do not modify collision")
	await frame(at,8.,.7,1,"columns_dusk_high")
	check(float(light.get_meta("diagnostics").strength)==0.,"high camera extinguishes dusk veil")
	await frame(at,8.,.31,0,"columns_day_low")
	check(float(light.get_meta("diagnostics").strength)==0.,"daylight extinguishes dusk veil")
	var dense:=State.new();dense.initialize_empty()
	for x in range(7):
		for z in range(4):
			var built:Dictionary=dense.add_house(Vector2(-35+x*4,-32+z*4))
			check(built.ok and dense.set_house_architecture(str(built.house_id),"portico").ok,"actual dense colonnade "+str(x)+"/"+str(z))
	# Low diagnostic framing above can be below the ordinary collection range.
	# Restore a legal authoring pitch before the gallery's switch checkpoint.
	demo.pitch=.31;demo._update_camera()
	await show(dense,Vector2(-35,-32),"dusk_pool");quiet();demo.life.set_process(false);light=demo.get_meta("waterfront_light")
	check(demo.gallery.current_title=="dusk_pool" and demo.state.houses.size()==28,"actual28-home work opens before pool test")
	await frame(Vector3(-35,1,-32),12.,.31,1,"dense_dusk_first")
	var first:Array=light.targets.duplicate(true);var revision:int=demo.state.revision
	await frame(Vector3(-11,1,-20),12.,.31,1,"dense_dusk_pan")
	check(light.candidates.size()==28 and light.targets.size()==24 and light.targets!=first,"without editing camera pan reselects24 of28 actual colonnades")
	check(demo.state.revision==revision,"atmospheric pool follows view without city edits")
	facts.dusk_pool={"candidates":light.candidates.size(),"selected":light.targets.size(),"changed":light.targets!=first,"revision_before":revision,"revision_after":demo.state.revision}
	var recording:Dictionary=await Probe.record(OUT+"/Master.wav",4.2);facts.recording=recording;check(recording.ok,"actual Master remains unclipped")
	var reader:=State.new();var snapshot:Dictionary=demo.state.snapshot()
	check(reader.restore(snapshot).ok and reader.snapshot()==snapshot,"visual changes preserve exact cold save")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	await finish(personal,voices)

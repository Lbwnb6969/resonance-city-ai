extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
## Keep the same authored fixture and camera for before/after timing and pixels.
func edit(mode:String,at:Vector2,radius:float,strength:float=.7)->void:
	var points:Array[Vector2]=[at,at+Vector2(.2,.3)]
	var began:=Time.get_ticks_usec()
	var result:Dictionary=demo.state.add_terrain_stroke(points,mode,radius,strength)
	var command_ms:float=(Time.get_ticks_usec()-began)/1000.
	await transaction(result,"raise")
	facts.edits[-1].mode=mode;facts.edits[-1].command_ms=command_ms
func run()->void:
	OUT="res://验证记录/M70/baseline"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var original:Dictionary=pool();facts={"edits":[]}
	var city:=State.new();city.initialize_empty();city.add_house(Vector2(10,20));city.add_house(Vector2(10,22))
	await show(city,Vector2(15,20),"柔化后继续塑形");quiet()
	await edit("raise",Vector2(15,20),5.,1.)
	await edit("plateau",Vector2(15,20),4.,1.)
	await edit("smooth",Vector2(15,20),5.)
	for mode:String in ["raise","lower","reset","plateau"]:await edit(mode,Vector2(15,20),2.)
	var final:Dictionary=demo.state.snapshot()
	var incremental:PackedFloat32Array=demo.state._ground_terrain.vertices.duplicate()
	var offsets:PackedFloat32Array=demo.state._ground_terrain.offsets.duplicate()
	await transaction(demo.state.undo(),"undo");await transaction(demo.state.redo(),"redo")
	check(demo.state.snapshot().terrain_strokes==final.terrain_strokes and demo.state._ground_terrain.vertices==incremental,"actual Undo/Redo restores ordered smoothed terrain exactly")
	await freeze_view(Vector2i(1440,900),1)
	var before:Image=await saved_image("incremental_side_light")
	var world:Dictionary=JSON.parse_string(JSON.stringify(final))
	FileAccess.open(OUT+"/world.json",FileAccess.WRITE).store_string(JSON.stringify(world))
	var cold:=State.new();check(cold.restore(world).ok,"same ordered history loads cold JSON")
	demo.set_process(true);await show(cold,Vector2(15,20),"冷回放同一地形")
	check(demo.state._ground_terrain.vertices==incremental and demo.state._ground_terrain.offsets==offsets,"fresh renderer has exact protected height and offset buffers")
	await freeze_view(Vector2i(1440,900),1)
	var after:Image=await saved_image("cold_side_light")
	facts.pixels=pixels(before,after,Vector2(720,450));check(facts.pixels.changed_pixels==0,"incremental and cold side-light pixels agree exactly")
	# Restore the complete production city after the ground-only pixel oracle.
	for child:Node in demo.town.get_children():
		if child is Node3D:child.show()
	root.size=Vector2i(1024,768);demo.zoom=13.;demo.focus=Vector3(14,1,20);demo._update_camera();demo._set_light_phase(0)
	demo.set_process(true);demo.town.set_process(true);demo.life.set_process(true)
	await capture("city_1024_day")
	facts.master=await Probe.record(OUT+"/Master.wav",3.1);check(facts.master.ok,"actual two-house Master zero clipping")
	check(pool()==original,"original voice pool identity retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/terrain_append.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("TERRAIN_APPEND_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

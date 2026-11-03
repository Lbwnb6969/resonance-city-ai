extends "res://tools/check_creation_wide_passage_live.gd"
const Channel=preload("res://tests/test_city_creation_channel_return.gd")
func screen(at:Vector2)->Vector2:
	var height:float=demo.state.ground_height(at)
	if demo.state.water_clearance(at)<=0.:height=maxf(height,State.Terrain.WATER_LEVEL)
	return demo.camera.unproject_position(Vector3(at.x,height,at.y))
func draw_ring()->void:
	var points:=Channel.loop_points();await motion(points[0]);await button(points[0],true)
	for i in range(1,points.size()):
		for step in range(1,11):await motion(points[i-1].lerp(points[i],float(step)/10))
	await button(points[-1],false);await settle();quiet()
func water_hash()->String:
	var context:=HashingContext.new();context.start(HashingContext.HASH_SHA256)
	for node:MeshInstance3D in demo.town.water_layer.find_children("*","MeshInstance3D",true,false):context.update(var_to_bytes(node.mesh.get_faces()))
	return context.finish().hex_encode()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	await show(Channel.fixture(),Vector2(-22.5,-17.5),"环渠回接");quiet();demo.select_tool(6)
	demo.focus=Vector3(-22.5,.3,-17.5);demo.zoom=19.;demo.pitch=1.;demo.yaw=0.;demo._update_camera();await settle()
	await ui_click(demo.tactile_dock.button_for("WaterMode",1));await settle()
	await ui_click(demo.tactile_dock.button_for("WaterWidth",0));await settle()
	check(demo.water_kind=="channel" and demo.water_width==1.8,"native dock selects channel and real 1.8m width")
	var before:Dictionary=demo.state.snapshot();await motion(Vector2(-25,-20));await button(Vector2(-25,-20),true)
	for at:Vector2 in [Vector2(-25,-15),Vector2(-20,-15),Vector2(-20,-20),Vector2(-25,-20)]:await motion(at)
	var preview:Dictionary=demo.state.preview_water(demo.water_points,1.8,"channel")
	check(preview.ok and demo.state.snapshot()==before,"native closed preview returns to wet start without author writes")
	await capture("return_preview");await button(Vector2(-25,-20),false);await settle();quiet()
	check(demo.state.waters.size()==2 and demo.state.water_clearance(Vector2(-22.5,-17.5))>0. and demo.state.water_clearance(Vector2(-25,-17.5))<0.,"native gesture publishes ring and dry island")
	var saved:Dictionary=demo.state.snapshot();var revision:int=demo.state.revision;var history:int=demo.state._undo.size();var geometry:=water_hash()
	await draw_ring();check(demo.state.snapshot()==saved and demo.state.revision==revision and demo.state._undo.size()==history,"native repeated ring is zero-write no-op")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.waters.size()==1,"native Undo removes one whole ring")
	await key(KEY_Y,true);await settle();quiet();check(demo.state.waters==saved.waters and water_hash()==geometry,"native Redo restores exact rendered water union")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"ordinary cold ring restore")
	await show(cold,Vector2(-22.5,-17.5),"环渠冷读");quiet();check(water_hash()==geometry,"independent cold water geometry matches incremental publication")
	await capture("return_finished")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CHANNEL_RETURN_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

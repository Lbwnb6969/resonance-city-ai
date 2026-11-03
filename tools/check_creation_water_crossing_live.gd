extends "res://tools/check_creation_channel_return_live.gd"
const Crossing=preload("res://tests/test_city_creation_water_crossing.gd")
func gesture()->void:
	var path:=Crossing.points();await motion(path[0]);await button(path[0],true)
	for i in range(1,25):await motion(path[0].lerp(path[-1],float(i)/24))
	await button(path[-1],false);await process_frame
func road_hash(renderer:Node3D)->String:
	var context:=HashingContext.new();context.start(HashingContext.HASH_SHA256)
	for id:String in ["r1","r2"]:
		for node:MeshInstance3D in renderer.road_roots[id].find_children("*","MeshInstance3D",true,false):context.update(var_to_bytes(node.mesh.get_faces()))
	return context.finish().hex_encode()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	await show(Crossing.fixture(),Vector2(-20,-20),"引水过路");quiet();demo.life.set_process(false);demo.select_tool(6)
	demo.focus=Vector3(-20,.4,-20);demo.zoom=21.;demo.pitch=.95;demo.yaw=.1;demo._update_camera();await settle()
	await ui_click(demo.tactile_dock.button_for("WaterMode",1));await settle();await ui_click(demo.tactile_dock.button_for("WaterWidth",0));await settle()
	var before:Dictionary=demo.state.snapshot();var original_hash:=road_hash(demo.town);await gesture()
	var input=demo.get_meta("water_crossing_input")
	check(input.dialog!=null and input.dialog.visible and input.model!=null and not demo.town.visible,"native drag opens explicit crossing review with real candidate renderer")
	check(demo.state.snapshot()==before and demo.state.waters.size()==1 and demo.state.roads.all(func(r):return not r.bridge),"review cannot silently change live water, roads or IDs")
	var preview_hash:=road_hash(input.model)
	check(preview_hash!=original_hash and input.model.road_roots.r1.get_meta("stepping_runs",[]).size()>0,"candidate displays actual stepping and changed road geometry")
	await capture("crossing_review")
	await key(KEY_Z,true);check(demo.state.snapshot()==before,"review blocks construction Undo shortcuts")
	await ui_click(input.cancel_button);await process_frame
	check(input.reviewed.is_empty() and demo.town.visible and demo.state.snapshot()==before,"native cancel button cancels the entire candidate without author writes")
	await gesture();input=demo.get_meta("water_crossing_input");preview_hash=road_hash(input.model)
	await ui_click(input.confirm_button)
	var deadline:=Time.get_ticks_msec()+15000
	while (input.accepting or demo.edit_pending()) and Time.get_ticks_msec()<deadline:await process_frame
	await settle();quiet();demo.life.set_process(false)
	check(demo.state.waters.size()==2 and demo.state.roads.all(func(r):return r.bridge),"native confirmation commits water and both crossings")
	check(demo.state._undo.size()==1 and road_hash(demo.town)==preview_hash,"one author history item publishes the exact reviewed road geometry")
	var backups:Array=demo.gallery.library.entries().items.filter(func(e):return e.reason=="before_water_crossing")
	check(backups.size()==1 and demo.gallery.library.read(backups[0].id).world.waters==before.waters and demo.gallery.library.read(backups[0].id).world.roads==before.roads,"confirmed edit first preserves an immutable original work in the isolated library")
	var saved:Dictionary=demo.state.snapshot();await capture("crossing_committed")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.waters==before.waters and demo.state.roads==before.roads and road_hash(demo.town)==original_hash,"native Undo restores source water and original roads")
	await key(KEY_Y,true);await settle();quiet();check(demo.state.waters==saved.waters and road_hash(demo.town)==preview_hash,"native Redo restores reviewed crossings")
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"cold compound work restore")
	await show(cold,Vector2(-20,-20),"过水冷读");quiet();check(road_hash(demo.town)==preview_hash,"independent cold production geometry equals reviewed and incremental roads")
	# Invalidate an in-flight confirmation while its immutable capture awaits
	# frame_post_draw. The old callback must not publish its discarded plan.
	await show(Crossing.fixture(),Vector2(-20,-20),"确认失效");quiet();demo.life.set_process(false)
	var controller=demo.get_meta("water_crossing_input");var stale_before:Dictionary=demo.state.snapshot()
	demo.life.set_process(true);controller.review(demo.state.preview_water_crossing(Crossing.points(),1.8));controller.accept();controller.close()
	for i in range(4):await process_frame
	check(demo.state.waters==stale_before.waters and demo.state.roads==stale_before.roads and not controller.accepting,"invalidated confirmation callback cannot publish a discarded city edit")
	check(not demo.gallery.busy and controller.reviewed.is_empty() and demo.town.visible,"discarded callback leaves original scene and gallery usable")
	check(demo.life.is_processing(),"cancelled capture cannot pause the resumed original life")
	demo.life.set_process(false)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WATER_CROSSING_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

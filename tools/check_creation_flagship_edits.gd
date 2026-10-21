extends SceneTree
## Actual flagship input, render publication and Life route publication costs.
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var output:="res://验证记录/旗舰编辑收口_2026-10-19/before"
var demo
var checks:=0
var failures:Array[String]=[]
var edits:Array=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+180000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"latest complete geometry routes and UI publish")
func _edit(kind:String)->void:
	var published:Dictionary={}
	for id:String in demo.town.house_roots:published[id]=demo.town.house_roots[id].get_instance_id()
	var merge_observations:=0;var assembly_observations:=0;var atomic:=true
	var began:=Time.get_ticks_usec();var result:Dictionary
	if kind=="palette":result=demo.state.set_house_palette("h61",posmod(int(demo.town._house_record("h61").palette)+1,4))
	elif kind=="terrain":
		var points:Array[Vector2]=[Vector2(-36,-32)]
		result=demo.state.add_terrain_stroke(points,"raise",2.5,.20)
	else:result=demo.state.add_cell("h61",0,0,3)
	var author_ms:float=(Time.get_ticks_usec()-began)/1000.
	_check(result.ok,"actual "+kind+" authoring succeeds")
	if not result.ok:return
	demo._after_edit(result,"history" if kind=="palette" else kind)
	var input_ms:float=(Time.get_ticks_usec()-began)/1000.
	var frames:Array[float]=[];var slow:Array=[];var last:=Time.get_ticks_usec();var deadline:=Time.get_ticks_msec()+180000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
		var staged:Node3D=demo.town.budget_rebuild.staging
		if staged!=null and (not staged.mesh_batcher.pending_merges.is_empty() or not staged.house_assemblies.is_empty()):
			if not staged.mesh_batcher.pending_merges.is_empty():merge_observations+=1
			if not staged.house_assemblies.is_empty():assembly_observations+=1
			for id:String in staged.house_roots:
				if published.has(id):atomic=atomic and demo.town.house_roots[id].get_instance_id()==int(published[id])
				atomic=atomic and not staged.house_roots[id].is_visible_in_tree()
				for body:StaticBody3D in staged.house_roots[id].find_children("*","StaticBody3D",true,false):atomic=atomic and body.collision_layer==0
		if frames[-1]>20.:
			var budget=demo.town.budget_rebuild
			slow.append({"ms":frames[-1],"frame":Engine.get_process_frames(),"engine_process_ms":Performance.get_monitor(Performance.TIME_PROCESS)*1000.,"physics_ms":Performance.get_monitor(Performance.TIME_PHYSICS_PROCESS)*1000.,
				"budget_work_ms":budget._frame_work_ms,"budget_frame":budget._work_frame,"step":budget.stats.get("last_step",{}).duplicate(),"poll":budget.stats.get("last_poll",{}).duplicate(),"retirement":budget.stats.get("last_retirement",{}).duplicate()})
	_check(not demo.edit_pending(),"actual "+kind+" completes its current revision")
	if kind=="house":_check(merge_observations>0 and assembly_observations>0 and atomic,"unfinished geometry and material batches preserve original visible houses and picking until the complete revision publishes")
	for ignored in range(8):await process_frame
	frames.sort()
	var report:Dictionary=demo.edit_budget_report()
	var life_published:bool=float(report.get("life_commit_ms",0.))>0.
	var row:Dictionary={"kind":kind,"author_ms":author_ms,"input_ms":input_ms,"report":report,
		"cafe_sync":demo.life.cafe.sync_stats.duplicate() if life_published else {},"cafe_context":demo.life.cafe.layout_api.stats.duplicate() if life_published else {},
		"life_commit":demo.life.budget_commit_stats.duplicate(true) if life_published else {},"merge_observations":merge_observations,"assembly_observations":assembly_observations,"house_assembly":demo.town.house_roots["h61"].get_meta("house_assembly",{}).duplicate(true),"atomic":atomic,"task_peak_ms":demo.town.budget_rebuild._task_peak_ms.duplicate(),"retirement_main_peak_ms":demo.town.budget_rebuild.stats.get("retirement_max_ms",0.),"retirement_worker":demo.town.budget_rebuild._cpu_retirement.stats.duplicate(),"frame_count":frames.size(),"slow_frames":slow,
		"max_frame_ms":frames[-1] if not frames.is_empty() else 0.,"p95_frame_ms":frames[int(frames.size()*.95)] if not frames.is_empty() else 0.}
	edits.append(row)
	print("FLAGSHIP_EDIT ",JSON.stringify({"kind":kind,"input_ms":input_ms,"poll_max_ms":report.get("poll_max_ms",0.),"life_commit_ms":report.get("life_commit_ms",0.),"ui_ms":report.get("ui_ms",0.)}))
func _run()->void:
	for argument:String in OS.get_cmdline_user_args():
		if argument.begins_with("--out-dir="):output=argument.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	var source:=FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json")
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=output+"/isolated";root.add_child(demo);demo.life.set_process(false)
	var restored:Dictionary=demo.state.restore(JSON.parse_string(source.get_string_from_utf8()));_check(restored.ok,"shipped flagship restores")
	demo._after_edit(restored,"history");await _wait();demo.life.set_process(false)
	var far_mask:RefCounted=demo.town.meadow.query_masks[Vector2i(4,4)]
	var players:Array=[]
	for key:String in demo.music.STEMS:players.append(demo.music._players[key].get_instance_id())
	var kinds:Array[String]=["palette","terrain","house"]
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--edit-only="):kinds.assign([arg.trim_prefix("--edit-only=")])
	for kind:String in kinds:await _edit(kind)
	var current:Array=[]
	for key:String in demo.music.STEMS:current.append(demo.music._players[key].get_instance_id())
	_check(players==current,"edits retain original live music player identities")
	_check(demo.town.meadow.query_masks[Vector2i(4,4)]==far_mask,"successive actual edits preserve the unchanged published far grass index")
	var retire_deadline:=Time.get_ticks_msec()+5000
	while demo.town.budget_rebuild.retirement_pending() and Time.get_ticks_msec()<retire_deadline:await process_frame
	_check(not demo.town.budget_rebuild.retirement_pending() and int(demo.town.budget_rebuild._cpu_retirement.stats.batches)>0,"all obsolete CPU values finish off-thread retirement and no staging contexts remain")
	var expected:Dictionary=demo.music.Catalog.prepare(demo.state)
	_check(demo.town.music_catalog==expected,"published worker catalogue includes current authored geometry and household traits")
	_check(demo.music._house_music==expected.houses and demo.music.canon.groups==expected.canon,"actual live playback adopts current worker household and ring values")
	_check(demo.state._growth_geometry_revision==demo.state.revision and demo.state._growth_geometry_cache==demo.state.Growth.geometry_summary(demo.state),"published worker has prepared every current structural journal goal")
	var complete:=true
	for house:Dictionary in demo.state.houses:
		complete=complete and demo.town._frontage_views.has(str(house.id)) and demo.town._frontage_views[str(house.id)]==demo.town._derive_frontage_signature(house)
	_check(complete,"every published frontage clearance view equals independent actual derivation")
	_check(demo.town.buildings.get_child_count()==127 and demo.life.last_revision==demo.state.revision,"current rendered houses and Life routes share the latest revision")
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(output+"/edited.png")==OK,"actual edited flagship image saves")
	_check(source==FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json") and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"source example and personal save bytes remain unchanged")
	var assembly_parts:Dictionary={}
	for id:String in demo.town.house_roots:assembly_parts[id]=demo.town.house_roots[id].get_meta("house_assembly",{}).duplicate(true)
	var report:Dictionary={"house_assemblies":assembly_parts,"ok":failures.is_empty(),"performance_policy":"reference_only","checks":checks,"failures":failures,"edits":edits,"retirement_final":demo.town.budget_rebuild.stats.duplicate(),"retirement_worker":demo.town.budget_rebuild._cpu_retirement.stats.duplicate()}
	var file:=FileAccess.open(output+"/report.json",FileAccess.WRITE);file.store_string(JSON.stringify(report,"\t",true,true));file.close()
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

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
	var deadline:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"latest complete geometry routes and UI publish")
func _edit(kind:String)->void:
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
	var frames:Array[float]=[];var slow:Array=[];var last:=Time.get_ticks_usec();var deadline:=Time.get_ticks_msec()+90000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
		if frames[-1]>20.:
			var budget=demo.town.budget_rebuild
			slow.append({"ms":frames[-1],"frame":Engine.get_process_frames(),"engine_process_ms":Performance.get_monitor(Performance.TIME_PROCESS)*1000.,"physics_ms":Performance.get_monitor(Performance.TIME_PHYSICS_PROCESS)*1000.,
				"budget_work_ms":budget._frame_work_ms,"budget_frame":budget._work_frame,"step":budget.stats.get("last_step",{}).duplicate(),"poll":budget.stats.get("last_poll",{}).duplicate(),"retirement":budget.stats.get("last_retirement",{}).duplicate()})
	_check(not demo.edit_pending(),"actual "+kind+" completes its current revision")
	for ignored in range(8):await process_frame
	frames.sort()
	var report:Dictionary=demo.edit_budget_report()
	var life_published:bool=float(report.get("life_commit_ms",0.))>0.
	var row:Dictionary={"kind":kind,"author_ms":author_ms,"input_ms":input_ms,"report":report,
		"cafe_sync":demo.life.cafe.sync_stats.duplicate() if life_published else {},"cafe_context":demo.life.cafe.layout_api.stats.duplicate() if life_published else {},
		"life_commit":demo.life.budget_commit_stats.duplicate(true) if life_published else {},"frame_count":frames.size(),"slow_frames":slow,
		"within_four_ms":maxf(input_ms,maxf(float(report.get("poll_max_ms",0.)),float(report.get("ui_ms",0.))))<4.,
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
	var players:Array=[]
	for key:String in demo.music.STEMS:players.append(demo.music._players[key].get_instance_id())
	for kind:String in ["palette","terrain","house"]:await _edit(kind)
	var current:Array=[]
	for key:String in demo.music.STEMS:current.append(demo.music._players[key].get_instance_id())
	_check(players==current,"edits retain original live music player identities")
	var expected:Dictionary=demo.music.Catalog.prepare(demo.state)
	_check(demo.town.music_catalog==expected,"published worker catalogue includes current authored geometry and household traits")
	_check(demo.music._house_music==expected.houses and demo.music.canon.groups==expected.canon,"actual live playback adopts current worker household and ring values")
	_check(demo.town.buildings.get_child_count()==127 and demo.life.last_revision==demo.state.revision,"current rendered houses and Life routes share the latest revision")
	await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(output+"/edited.png")==OK,"actual edited flagship image saves")
	_check(source==FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json") and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"source example and personal save bytes remain unchanged")
	var within_budget:=true
	for edit:Dictionary in edits:within_budget=within_budget and bool(edit.within_four_ms)
	var report:Dictionary={"ok":failures.is_empty(),"within_four_ms":within_budget,"checks":checks,"failures":failures,"edits":edits}
	var file:=FileAccess.open(output+"/report.json",FileAccess.WRITE);file.store_string(JSON.stringify(report,"\t",true,true));file.close()
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

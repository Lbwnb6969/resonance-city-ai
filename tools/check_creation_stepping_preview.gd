extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Plan=preload("res://scripts/world/city_creation_stepping_plan.gd")
const OUT="res://验证记录/汀步预览_2026-10-17"
var demo
var checks:Array=[]
var failures:Array[String]=[]

func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)

func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900)
	demo=Scene.instantiate();demo.persistence=false;root.add_child(demo)
	for ignored in range(8):await process_frame
	demo.life.set_process(false)
	var source:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/汀步河湾样例.json"))
	var restored:Dictionary=demo.state.restore(source)
	demo._after_edit(restored,"history")
	var deadline:=Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<deadline:await process_frame
	var snapshot:Dictionary=demo.state.snapshot()
	var points:Array[Vector2]=[]
	var road={}
	var runs:Array=[]
	for x in [-9.0,-8.0,-7.0,-6.0,-5.0,-4.0,-3.0,-2.0,-1.0,0.0,1.0,2.0]:
		var candidate={"id":"preview","points":[[x,-13.0],[x,-10.0]],"width":1.25,"style":"path","bridge":false}
		var candidate_runs:Array=Plan.for_road(demo.state,candidate)
		if not candidate_runs.is_empty():
			road=candidate;runs=candidate_runs;points=[Vector2(x,-13.0),Vector2(x,-10.0)];break
	_check(restored.ok and not runs.is_empty(),"narrow channel path derives a real stepping run")
	var stones:=0
	for run:Dictionary in runs: stones+=run.stones.size()
	demo.town.preview_road(points,true,1.25)
	_check(int(demo.town.preview.get_meta("stepping_previews",0))==stones and stones>=2,"road preview uploads the same number of temporary stepping stones")
	_check(demo.state.snapshot()==snapshot,"stepping preview does not mutate authored road or water state")
	var mesh:Node=demo.town.preview.get_node_or_null("SteppingPreview")
	_check(mesh!=null,"temporary stepping mesh is visible in the preview layer")
	if DisplayServer.get_name()!="headless":
		await RenderingServer.frame_post_draw
		_check(root.get_texture().get_image().save_png(OUT+"/汀步预览.png")==OK,"actual GL stepping preview captured")
	var report={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":{"runs":runs.size(),"stones":stones}}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("STEPPING_PREVIEW ",JSON.stringify(report))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values():player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

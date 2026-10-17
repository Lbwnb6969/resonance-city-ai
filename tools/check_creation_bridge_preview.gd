extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/桥梁预览_2026-10-17"
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
	var snapshot:Dictionary=demo.state.snapshot()
	var plan:Dictionary={}
	var preview_z:=999
	for distance in range(0,39):
		for z in ([0] if distance==0 else [distance,-distance]):
			var candidate:Array[Vector2]=[Vector2(-10.0,float(z)),Vector2(15.0,float(z))]
			var checked:Dictionary=demo.state.preview_road(candidate)
			if bool(checked.get("ok",false)) and bool(checked.get("bridge",false)):
				plan=checked
				preview_z=z
				break
		if not plan.is_empty():break
	_check(bool(plan.get("ok",false)) and bool(plan.get("bridge",false)),"road planner recognizes the river crossing as a bridge")
	if not plan.is_empty():
		demo.town.preview_road(plan.points,true,float(plan.get("width",1.25)),bool(plan.get("bridge",false)))
	var rail_parts:=int(demo.town.preview.get_meta("bridge_previews",0))
	_check(rail_parts>0,"planner-approved bridge preview creates temporary rail runs")
	_check(demo.town.preview.get_node_or_null("BridgePreviewRails")!=null,"bridge preview owns a visible temporary rail layer")
	_check(demo.state.snapshot()==snapshot,"bridge preview does not mutate State")
	var passage_count:=int(demo.town.preview.get_meta("passage_previews",0))
	_check(passage_count>=0,"bridge preview keeps the regular road preview path")
	if DisplayServer.get_name()!="headless":
		await RenderingServer.frame_post_draw
		_check(root.get_texture().get_image().save_png(OUT+"/桥梁预览.png")==OK,"actual GL bridge preview captured")
	var report={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":{"rail_parts":rail_parts,"passage_previews":passage_count,"preview_z":preview_z}}
	FileAccess.open(OUT+"/结果.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("BRIDGE_PREVIEW ",JSON.stringify(report))
	demo.set_process(false);demo.music.set_process(false);demo.ambience.set_process(false)
	for player:AudioStreamPlayer in demo.music._players.values():player.stop()
	for player:AudioStreamPlayer in demo.music._effects:player.stop()
	for player:AudioStreamPlayer in demo.ambience.players.values():player.stop()
	await create_timer(.15).timeout;demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

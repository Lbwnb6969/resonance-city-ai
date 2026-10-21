extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/聚落成歌_2026-10-20"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/问答作品";root.add_child(demo);demo.life.set_process(false)
	var data:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/街坊连奏样例.json"))
	var result:Dictionary=demo.state.restore(data);check(result.ok,"existing cross-district work restores: "+str(result.get("message","")))
	if not result.ok:demo.queue_free();await process_frame;quit(1);return
	demo._after_edit(result,"history")
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await process_frame
	demo.life.set_process(false);demo.focus=Vector3(-5,.7,-1);demo.zoom=24.;demo.pitch=.78;demo._update_camera()
	var until:=Time.get_ticks_msec()+20000;var call:Dictionary={};var answer:Dictionary={}
	while Time.get_ticks_msec()<until:
		await process_frame
		var heard:Dictionary=demo.music.reply.report()
		if heard.audible:
			if str(heard.phase)=="call":call=heard.duplicate()
			elif str(heard.phase)=="answer":answer=heard.duplicate()
		if not demo.state.district_answers.is_empty():break
	check(demo.music.choir_mode,"new choir mode is active")
	check(not call.is_empty() and not answer.is_empty(),"real question and next-phrase answer both play")
	check(not answer.is_empty() and not call.is_empty() and answer.get("pair_id")==call.get("pair_id") and int(answer.get("phrase",-2))==int(call.get("phrase",-1))+1,"answer preserves real pair and phrase identity")
	check(not demo.state.district_answers.is_empty(),"actual completed audio still records progression for era unlocks")
	check(demo.music._players.size()==12 and demo.music._effects.size()==4,"intentional reply uses the bounded original pool")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"answers":demo.state.district_answers}
	FileAccess.open(OUT+"/reply_report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CHOIR_REPLY_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

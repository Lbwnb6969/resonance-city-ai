extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const OUT="res://验证记录/四库路线_2026-10-17/Phase9"
var demo
var checks:Array=[]
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var end:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	await physics_frame;await process_frame
func _run()->void:
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	var city:=Fixture.city();var a:String=city.districts[0].id;var b:String=city.districts[1].id;var c:String=city.districts[2].id
	city.link_districts(a,b);city.link_districts(b,c)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	demo._after_edit(demo.state.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))),"history");await _wait()
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	demo.ui_layer.visible=false;demo.focus=Vector3(-10,1,-2);demo.zoom=14;demo.yaw=.2;demo.pitch=.65;demo._update_camera();demo.town.clear_preview()
	_check(demo.state.houses.size()==50 and not demo.state.era_unlocks.has("modern_eco") and demo.state.era_answers.is_empty(),"fifty actual buildings and three painted eras remain locked before actual musical dialogue")
	var deadline:=Time.get_ticks_msec()+50000;var heard_call:=false
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var reply:Dictionary=demo.music.reply.report()
		if reply.audible and reply.phase=="call":heard_call=true;break
	_check(heard_call and demo.state.era_answers.is_empty(),"production PCM question starts without granting any era achievement")
	if heard_call:
		var active:Dictionary=demo.music.reply.report();var source:String=active.from_id
		var previous:String=demo.state.house_era(demo.state.houses[demo.state._house_index(source)])
		var changed:Dictionary=demo.state.set_house_era(source,"clockwork" if previous!="clockwork" else "pastoral")
		demo._after_edit(changed,"history");await _wait()
		_check(not demo.music.reply.report().audible and demo.state.era_answers.is_empty(),"actual source era edit during question cancels old attribution and pending answer")
		demo._after_edit(demo.state.undo(),"history");await _wait()
	deadline=Time.get_ticks_msec()+60000
	while not demo.state.era_unlocks.has("modern_eco") and Time.get_ticks_msec()<deadline:await process_frame
	_check(demo.state.era_answers.size()>=2 and demo.state.Eras.three_era_resonance(demo.state.era_answers) and demo.state.era_unlocks.has("modern_eco"),"naturally finished question-answer PCM in connected three-era districts permanently earns modern era")
	var valid_pairs:=true
	for row:Dictionary in demo.state.era_answers:
		valid_pairs=valid_pairs and row.from_era!=row.to_era and row.from_era in ["pastoral","renaissance","clockwork"] and row.to_era in ["pastoral","renaissance","clockwork"]
	_check(valid_pairs and demo.music.reply.calls>=3 and demo.music.reply.answers>=2,"stored era evidence belongs to actual heard source and destination eras after interruption")
	var fresh:=State.new();var snapshot:Dictionary=demo.state.snapshot()
	_check(snapshot.schema==16 and fresh.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok and fresh.era_answers==demo.state.era_answers,"production heard-era history survives modern schema save restoration")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated modern era validation preserves personal save bytes")
	var report:Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"eras":demo.state.era_unlocks,"evidence":demo.state.era_answers,"reply":demo.music.reply.report()}
	FileAccess.open(OUT+"/unlock_live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("MODERN_UNLOCK_LIVE ",JSON.stringify({"ok":report.ok,"count":checks.size(),"failures":failures}))
	demo.queue_free();await process_frame;await create_timer(.1).timeout;quit(0 if failures.is_empty() else 1)

extends SceneTree
## Unaccelerated residents and real PCM completion earn a fresh second era.
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_renaissance_milestone_fixture.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/文艺复兴解锁_2026-10-18"
var demo
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
var events: Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	_check(not demo.edit_pending() and not demo._edit_ui_pending,"normal asynchronous scene publication finishes")
	await process_frame;await process_frame
func _capture(name_value: String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false
	demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo)
	demo.music.set_muted(true)
	var city: RefCounted=Fixture.build()
	_check(demo.state.restore(city.snapshot()).ok,"fresh fourteen-house town has no pre-earned tea or answer")
	demo.state.era_unlocked.connect(func(era: String)->void:events.append(era))
	demo._after_edit({"ok":true,"message":"fresh milestone town"},"history");await _wait()
	demo.focus=Vector3(-7,.7,0);demo.zoom=24;demo.yaw=.25;demo.pitch=.8;demo._update_camera();demo.town.clear_preview()
	var started:=Time.get_ticks_msec()
	var deadline:=started+100000
	while int(demo.state.life_progress.tea_parties)==0 and Time.get_ticks_msec()<deadline:await process_frame
	facts.tea_seconds=(Time.get_ticks_msec()-started)/1000.0
	facts.tea=demo.state.cafe_progress.duplicate(true);facts.production=demo.state.bakery_supply.duplicate(true)
	FileAccess.open(OUT+"/real_tea_snapshot.json",FileAccess.WRITE).store_string(JSON.stringify(demo.state.snapshot(),"\t",true,true))
	_check(int(demo.state.life_progress.tea_parties)>0,"unaccelerated residents buy bread, walk to cafe, sit and complete real tea")
	_check(demo.state.era_unlocks==["pastoral"] and demo.state.district_answers.is_empty(),"actual tea and fourteen houses remain locked before music completes")
	demo.journal.open_panel();demo.journal.refresh(false)
	_check(demo.journal.era_label.tooltip_text.contains("房屋 14/14") and demo.journal.era_label.tooltip_text.contains("跨区问答 0/1"),"real locked journal shows remaining completed-answer requirement")
	await _capture("01_real_tea_before_answer");demo.journal.close_panel()
	demo.life.set_process(false)
	demo.music.set_muted(false)
	deadline=Time.get_ticks_msec()+60000
	var trace: Array=[];var last_reply: Array=[]
	while not demo.state.era_unlocks.has("renaissance") and Time.get_ticks_msec()<deadline:
		await process_frame
		var reply: RefCounted=demo.music.reply
		var stamp: Array=[reply._last_phrase,reply.calls,reply.answers,reply.skipped,reply._pending.get("call_complete",false),reply._active.get("phase","")]
		if stamp!=last_reply:
			last_reply=stamp;trace.append({"clock":demo.music._playback_clock(),"state":stamp.duplicate(),"pending":reply._pending.duplicate(true),"busy":reply._foreground_busy(),"cafe":demo.music.cafe_music_report(),"travel":demo.music.travel_music_report(),"tower":demo.music.tower_music_report()})
	facts.reply_trace=trace
	await process_frame;await process_frame
	facts.reply=demo.music.reply.report();facts.answers=demo.state.district_answers.duplicate(true)
	_check(demo.state.era_unlocks.has("renaissance") and events==["renaissance"] and not demo.state.district_answers.is_empty(),"real completed question and answer grants the second era exactly once")
	_check(int(facts.reply.calls)>0 and int(facts.reply.answers)>0,"actual short PCM question and answer both played on shared transport")
	_check(demo.state.house_era(demo.state.houses[0])=="pastoral" and demo.state.districts[0].get("era_theme","pastoral")=="pastoral","new era reward keeps existing district and house facades")
	demo.journal.open_panel();demo.journal.refresh(false)
	_check(demo.journal.era_label.tooltip_text.contains("时代 2 · "+State.Eras.NAMES[1]+" · 已开启"),"real journal refresh presents earned second era")
	await _capture("02_earned_renaissance");demo.journal.close_panel()
	var copy:=State.new();var saved: Dictionary=demo.state.snapshot()
	_check(copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"real tea and completed PCM evidence save and restore under the new gate")
	var frames: Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append((now-last)/1000.0);last=now
	frames.sort();facts.performance={"p95_ms":frames[113],"max_ms":frames[-1]}
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated real-window town preserves personal save bytes")
	var result: Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true))
	print("RENAISSANCE_MILESTONE_LIVE ",JSON.stringify({"ok":result.ok,"checks":checks.size(),"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)

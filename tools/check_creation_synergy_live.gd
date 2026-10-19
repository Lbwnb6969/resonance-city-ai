extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/街坊规划加成_2026-10-19"
var demo
var checks:Array=[]
var failures:Array[String]=[]
var facts:Dictionary={}
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _settle()->void:
	var start:=Time.get_ticks_msec();var end:=start+180000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await process_frame
	var sample:Dictionary={"elapsed_ms":Time.get_ticks_msec()-start,"render":demo.town.budget_rebuild.stats.duplicate(true),"life_pending":demo.life.budget_sync_pending()}
	if not facts.has("edits"):facts.edits=[]
	facts.edits.append(sample);print("SYNERGY_EDIT ",JSON.stringify(sample))
	_check(not demo.edit_pending(),"authored edit publishes its actual GL geometry")
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated";root.add_child(demo);demo.life.set_process(false)
	var end:=Time.get_ticks_msec()+30000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<end:await process_frame
	demo._after_edit(demo.state.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))),"history");await _settle()
	_check(demo.state.houses.size()==127,"real flagship remains intact")
	var authored:Dictionary=demo.state.snapshot();var bonuses:Dictionary=demo.state.synergy_buffs()
	_check(bonuses.connected_identities==4 and is_equal_approx(bonuses.expansion_multiplier,1.36),"four actual connected era voices grant thirty six percent production")
	_check(demo.state._synergy_revision==demo.state.revision,"worker publishes planning with the same geometry revision")
	_check(is_equal_approx(demo.state.planning_bonus("h55").water_power_mult,1.35) and is_equal_approx(demo.state.planning_bonus("h115").water_power_mult,1.),"real watermill receives its drive while remote workshops do not")
	demo.selected_district="d7";demo._refresh_ui();demo._refresh_district()
	var details:Control=demo.quest.get_parent()
	details.show();demo.select_tool(7);demo.ledger.open_panel();demo.ledger.refresh()
	_check(demo.quest.text.contains("36%") and demo.district_description.text.contains("8～16") and demo.district_description.text.contains("36%"),"actual target card and district drawer show expansion and capacity")
	_check(demo.ledger.body.text.contains("水力工坊带") and demo.ledger.body.text.contains("36%"),"real operating ledger explains local drive and global production")
	demo.ledger.panel.hide();demo.focus=Vector3(-15,.8,-4);demo.zoom=35.;demo.pitch=.8;demo.yaw=.3;demo._update_camera()
	await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/实际街坊规划.png")==OK,"actual GL planning image saved")
	var baseline:float=demo.state.site_production_multiplier("h56")
	demo._after_edit(demo.state.unlink_districts("d6","d7"),"terrace");await _settle()
	# One edge removal leaves an alternate path through d8/d9, so the
	# reward must stay. This catches accidental edge-count multipliers.
	_check(is_equal_approx(demo.state.site_production_multiplier("h56"),baseline),"alternate connected path retains the actual production reward")
	demo._after_edit(demo.state.unlink_districts("d7","d9"),"terrace");await _settle()
	_check(is_equal_approx(demo.state.synergy_buffs().expansion_multiplier,1.24),"isolating one real voice drops expansion to twenty four percent")
	demo._after_edit(demo.state.undo(),"history");await _settle()
	_check(is_equal_approx(demo.state.site_production_multiplier("h56"),baseline),"actual undo and worker publication restore production")
	root.size=Vector2i(1024,768);details.hide();demo._refresh_ui()
	for i in range(4):await process_frame
	var toolbar:Control=demo.tool_buttons[0].get_parent().get_parent()
	_check(demo.district_panel.get_global_rect().end.y<toolbar.get_global_rect().position.y,"1024 by 768 district drawer stays above the toolbar")
	_check(absf(demo.district_panel.get_global_rect().end.x-1000.)<1.,"resized district drawer retains its right screen margin")
	var scroll:ScrollContainer=demo.district_panel.get_node("DistrictScroll")
	scroll.scroll_vertical=int(scroll.get_v_scroll_bar().max_value)
	await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/1024街坊抽屉.png")==OK,"small real viewport keeps the final drawer controls reachable by scrolling")
	var times:Array[float]=[]
	for frame in range(600):
		var start:=Time.get_ticks_usec()
		for house:Dictionary in demo.state.houses:demo.state.planning_bonus(str(house.id))
		times.append((Time.get_ticks_usec()-start)/1000.);await process_frame
	times.sort();var sum:=0.
	for value:float in times:sum+=value
	facts.cached_127_house_queries_ms={"mean":sum/times.size(),"p95":times[int(times.size()*.95)],"max":times[-1]};facts.bonuses=bonuses
	_check(demo.state.snapshot().bakery_supply==authored.bakery_supply and demo.state.snapshot().life_progress==authored.life_progress,"planning checks never invent household visits or oven stock")
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save remains byte identical")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts},"\t",true,true))
	demo.queue_free();await process_frame;await create_timer(.2).timeout
	print("SYNERGY_LIVE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks.size(),"failures":failures,"queries":facts.cached_127_house_queries_ms}));quit(0 if failures.is_empty() else 1)

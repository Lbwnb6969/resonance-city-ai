extends "res://tools/check_creation_curved_lane_live.gd"
const TaskFixture=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
const Tasks=preload("res://scripts/world/city_creation_vignettes.gd")
func task_journey()->Node:return demo.get_meta("vignette_journey")
func calm_draft()->void:
	var draft:Node=demo.get_meta("inspiration_draft");draft.postponed=true;draft.paper.hide()
func reveal_history()->Node:
	await key(KEY_J);await settle();calm_draft()
	var history:Node=demo.get_meta("historical_tasks");demo.journal.cards.get_parent().ensure_control_visible(history.read);await create_timer(.3).timeout
	return history
func read_history()->Node:
	var history:Node=await reveal_history();await ui_click(history.read);await create_timer(.15).timeout;return history
func retained(ready:bool,label:String)->RefCounted:
	var city:=TaskFixture.start(Tasks.IDS[0]);check(city.CreationPolicy.convert(city,OUT+"/"+label+".json").ok,"real isolated legacy conversion "+label)
	if ready:
		var changes:=TaskFixture.construct(city);check(changes.all(func(r):return r.ok),"real retained quest construction "+label)
	return city
func publish_tasks(city:RefCounted,at:Vector2,title:String)->void:
	await show(city,at,title);demo.life.set_process(true)
func journal_roundtrip()->void:
	await key(KEY_J);await settle()
	check(demo.journal.cards.get_node("FreeJournalSummary").visible and demo.journal.goal_buttons.is_empty(),"new free journal never builds classic goal controls")
	check(demo.get_meta("historical_tasks").get_index()<demo.journal.cards.get_node("FreeJournalSummary").get_index(),"historical entry remains above the free summary after HUD migration")
	await capture("journal_new_free");await key(KEY_ESCAPE)
	var classic:=State.new();classic.initialize_empty();classic.add_house(Vector2(-25,-12))
	await publish_tasks(classic,Vector2(-25,-12),"经典手记保留");calm_draft();await key(KEY_J);await settle()
	check(not demo.journal.goal_buttons.is_empty() and demo.journal.goal_buttons.any(func(b):return b.is_visible_in_tree()),"legacy restores real original chapter controls")
	check(not demo.journal.cards.get_node("FreeJournalSummary").visible,"free summary leaves legacy journal")
	check(not demo.journal.next_label.visible and not demo.journal.next_button.visible,"mode switch retains the existing compact journal layout")
	await capture("journal_legacy");var memories:Array=demo.state.growth_memories.duplicate()
	var converted:Dictionary=demo.state.CreationPolicy.convert(demo.state,OUT+"/journal_conversion.json");demo._after_edit(converted,"history");await settle();calm_draft();await key(KEY_J);await settle()
	check(converted.ok and demo.journal.cards.get_node("FreeJournalSummary").visible and demo.journal.goal_buttons.all(func(b):return not b.is_visible_in_tree()),"converted free journal retires previously built classic instructions")
	check(demo.state.growth_memories==memories,"journal mode switch preserves earned classic memorials")
	await capture("journal_converted_free")
func run()->void:
	OUT="res://验证记录/M84/free_task_retirement_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();calm_draft();var voices:=pool()
	if "--journal-roundtrip-only" in OS.get_cmdline_user_args():
		await journal_roundtrip()
		var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
		FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("FREE_JOURNAL_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
	await create_timer(2.2).timeout
	check(task_journey().is_processing() and demo.wish_pins.is_processing(),"task nodes run their real production mode guards")
	check(demo.state.harmony_journey.get("active_vignette",{}).is_empty() and task_journey().get_node_or_null("SiteSearch")==null,"new free setup and periodic ticks never dispatch hidden letters")
	check(not task_journey().paper.visible and not task_journey().marker.visible and demo.wish_pins.offers().is_empty() and not demo.wish_pins.visible,"new free has no needs, marker or letter prompts")
	await capture("new_free_no_tasks")
	var pending:=retained(false,"pending");var original:Dictionary=pending.harmony_journey.active_vignette.duplicate(true)
	await publish_tasks(pending,Vector2(original.anchor[0],original.anchor[1]),"保留未完成来信");calm_draft();await create_timer(1.2).timeout
	check(demo.state.harmony_journey.active_vignette==original and not demo.state.has_meta("vignette_proposal_cache"),"free load preserves old invitation without scanning new plots")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;var history:Node=await read_history()
		check(demo.journal.panel.visible and history.last_result.status=="progress" and "尚未领取" in history.detail.text,"native J and historical button retain incomplete conditions "+str(size.x))
		check(demo.journal.scrollbook.get_global_rect().end.y<=size.y and history.read.get_global_rect().end.x<=size.x,"historical controls fit "+str(size.x))
		await capture("pending_history_"+str(size.x));await key(KEY_ESCAPE)
	root.size=Vector2i(1440,900);var history:Node=await read_history();demo.journal.cards.get_parent().ensure_control_visible(history.locate);await create_timer(.2).timeout;await ui_click(history.locate)
	check(not demo.journal.panel.visible and task_journey().marker.visible and task_journey().look_until>Time.get_ticks_msec(),"explicit continue action locates the retained quest")
	var marker_target:=Vector2(original.anchor[0],original.anchor[1])
	check(task_journey().marker.position.distance_to(Vector3(marker_target.x,demo.state.ground_height(marker_target)+.06,marker_target.y))<.0001,"manual marker really moves to the retained source anchor")
	check(float(task_journey().marker.material_override.get_shader_parameter("metronome_strength"))>.3,"manual marker publishes visible shader intensity without polling")
	await capture("manual_old_location")
	var blank:=State.new();blank.initialize_free();await publish_tasks(blank,Vector2(-25,-12),"换城不继承旧标记");calm_draft()
	check(task_journey().look_until==0 and not task_journey().marker.visible and demo.wish_pins.target.is_empty(),"new city retires previous look clock, marker and target")
	var ready:=retained(true,"ready");var active:Dictionary=ready.harmony_journey.active_vignette.duplicate(true)
	await publish_tasks(ready,Vector2(active.anchor[0],active.anchor[1]),"已满足但未领取来信");calm_draft();await create_timer(1.2).timeout
	check(not demo.state.harmony_journey.active_vignette.is_empty() and int(demo.state.harmony_journey.get("completed_vignettes",{}).get(Tasks.IDS[0],0))==0,"free periodic ticks cannot silently claim an eligible old quest")
	history=await read_history()
	check(history.last_result.status=="claimed" and int(demo.state.harmony_journey.completed_vignettes[Tasks.IDS[0]])==1 and demo.state.harmony_journey.active_vignette.is_empty(),"actual journal button pays old reward exactly once")
	check("已领取" in history.detail.text,"actual claimed history explains the original reward");await capture("historical_reward_claimed")
	check(not "待继续" in history.heading.text and demo.journal.goal_buttons.all(func(b):return not b.is_visible_in_tree()),"free journal removes stale quest header and classic business instructions")
	var earned:Dictionary=demo.state.harmony_journey.get("completed_vignettes",{}).duplicate(true);await ui_click(history.read)
	check(history.last_result.status=="empty" and demo.state.harmony_journey.completed_vignettes==earned,"repeated real button does not reissue reward")
	await key(KEY_ESCAPE);var saved:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"real claimed old quest cold restore")
	await publish_tasks(cold,Vector2(active.anchor[0],active.anchor[1]),"已领取来信冷读");calm_draft();await create_timer(1.2).timeout
	check(demo.state.harmony_journey.completed_vignettes==earned and demo.state.harmony_journey.active_vignette.is_empty(),"cold free city neither reclaims nor offers a replacement")
	var legacy:=State.new();legacy.initialize_empty();check(legacy.add_house(Vector2(-25,-12)).ok,"real classic isolated house")
	await publish_tasks(legacy,Vector2(-25,-12),"经典自动来信保留");calm_draft()
	check(await wait_for(func():return not demo.state.harmony_journey.get("active_vignette",{}).is_empty(),10000),"legacy production ticks really search and offer")
	check(not demo.wish_pins.offers().is_empty() and task_journey().get_node_or_null("SiteSearch")!=null,"legacy official needs and background site worker remain available")
	await capture("legacy_official_offer")
	var old_quest:Dictionary=demo.state.harmony_journey.active_vignette.duplicate(true)
	if demo.state.has_meta("vignette_proposal_cache"):demo.state.remove_meta("vignette_proposal_cache")
	task_journey().replace();var worker:Node=task_journey().get_node("SiteSearch")
	check(worker.worker!=null and worker.manual,"real manual replacement is in flight before conversion")
	var feedback:Node=demo.get_meta("juice_feedback");feedback.enqueue({"kind":"vignette","source":"h1","members":["h1"],"label":"旧来信"});task_journey().look_at()
	var changed:Dictionary=demo.state.CreationPolicy.convert(demo.state,OUT+"/inflight_conversion.json");check(changed.ok,"actual conversion while worker is in flight")
	task_journey().poll();demo._after_edit(changed,"history");await settle();calm_draft();await create_timer(1.2).timeout
	check(worker.worker==null and not worker.manual and not task_journey().marker.visible and task_journey().look_until==0,"finished old worker and marker cannot publish into converted free city")
	check(demo.state.harmony_journey.active_vignette==old_quest and feedback.chains.all(func(c):return c.event.kind not in ["wish","vignette"]),"conversion preserves old invitation and cancels pending task feedback")
	await capture("converted_worker_retired")
	await publish_tasks(cold,Vector2(active.anchor[0],active.anchor[1]),"历史权益最终冷读");calm_draft()
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual Master and original voice pool")
	check(task_journey().is_processing() and demo.wish_pins.is_processing(),"verification never disables the target task controllers")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save remains unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("FREE_TASKS_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

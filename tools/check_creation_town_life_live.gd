extends SceneTree
## Three actual wall-clock minutes. No Life._process calls or invented ledgers.
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
const Growth = preload("res://scripts/world/city_creation_growth.gd")
const OUT := "res://验证记录/经营河湾_2026-10-16"
const EXAMPLE := "res://数据/经营河湾样例.json"
var demo
var checks: Array = []
var failures: Array[String] = []
var facts: Dictionary = {}
var personal := PackedByteArray()
var sample_bytes := PackedByteArray()
var identities: Array = []
var events: Array = []
var invariant_errors: Array[String] = []
var timeline: Array = []
var profiles: Dictionary = {}
var monitor_began := 0
var started_performance: Dictionary = {}
var last_phase := ""
var observed_cargo := false
var observed_seated_tea := false
var observed_phases: Dictionary = {}
var clock_start := 0.0

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _error(label: String) -> void:
	if not invariant_errors.has(label): invariant_errors.append(label)
func _key(code: int,ctrl: bool=false) -> void:
	for down: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=down;event.ctrl_pressed=ctrl
		root.push_input(event);await process_frame
func _click(at: Vector2) -> void:
	var motion := InputEventMouseMotion.new();motion.position=at;motion.global_position=at
	root.push_input(motion);await process_frame
	for down: bool in [true,false]:
		var event := InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down
		root.push_input(event);await process_frame
func _wait() -> void:
	var deadline := Time.get_ticks_msec()+20000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline: await process_frame
	await physics_frame;await process_frame
func _capture(name_value: String) -> void:
	demo.town.clear_preview();await process_frame;await RenderingServer.frame_post_draw
	_check(root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")==OK,"actual GL screenshot saved: "+name_value)
func _identity() -> Array:
	var rows: Array = []
	for key: String in demo.music.STEMS:
		var player: AudioStreamPlayer = demo.music._players[key]
		var data: PackedByteArray = player.stream.data
		var digest := HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(data)
		rows.append([key,player.get_instance_id(),player.stream.get_instance_id(),digest.finish().hex_encode()])
	for player: AudioStreamPlayer in demo.music._effects: rows.append(player.get_instance_id())
	return rows
func _sum(rows: Dictionary,key: String) -> int:
	var result := 0
	for row: Dictionary in rows.values(): result+=int(row.get(key,0))
	return result
func _storage_matches(a: Variant,b: Variant,path: String,roundoff: Array) -> bool:
	# JSON decimal parsing can move a real-valued actor yaw by one double ULP.
	# Integer ledgers, identifiers, booleans, structure and every field remain exact.
	if typeof(a)!=typeof(b): return false
	if a is float:
		var error := absf(a-b)
		if error>0.0: roundoff.append({"path":path,"absolute_error":error,"before":a,"after":b})
		return is_finite(a) and is_finite(b) and error<=1.0e-12
	if a is Dictionary:
		if a.size()!=b.size(): return false
		for key: Variant in a:
			if not b.has(key) or not _storage_matches(a[key],b[key],path+"/"+str(key),roundoff): return false
		return true
	if a is Array:
		if a.size()!=b.size(): return false
		for index in range(a.size()):
			if not _storage_matches(a[index],b[index],path+"/"+str(index),roundoff): return false
		return true
	return a==b
func _event(kind: String,data: Dictionary) -> void:
	if events.size()>=512: return
	var row := {"kind":kind,"wall_seconds":float(Time.get_ticks_msec()-monitor_began)/1000.0 if monitor_began>0 else 0.0,"life_time":demo.life.time,"music_clock":demo.music._playback_clock()}
	row.merge(data);events.append(row)
func _observe_callbacks() -> void:
	var production: Callable = demo.life.production_callback
	demo.life.production_callback=func(id: String,quantity: int)->void:
		if production.is_valid(): production.call(id,quantity)
		_event("bread_produced",{"shop":id,"quantity":quantity})
	var craft: Callable = demo.life.craft_callback
	demo.life.craft_callback=func(kind: String,shop: String,target: String,level: int)->void:
		if craft.is_valid(): craft.call(kind,shop,target,level)
		_event("craft_"+kind,{"shop":shop,"target":target,"level_or_quantity":level})
	var cafe: Callable = demo.life.cafe_callback
	demo.life.cafe_callback=func(id: String,homes: Array)->void:
		if cafe.is_valid(): cafe.call(id,homes)
		_event("tea_completed",{"cafe":id,"homes":homes.duplicate(),"tea_parties":demo.state.life_progress.tea_parties})
	var concert: Callable = demo.life.concert_callback
	demo.life.concert_callback=func(kind: String,venue: String)->void:
		if concert.is_valid(): concert.call(kind,venue)
		if kind=="started": started_performance={"wall_ms":Time.get_ticks_msec(),"clock":demo.music._playback_clock(),"source":str(demo.life.concert_status().get("source","manual"))}
		var row := {"venue":venue,"progress":demo.state.life_progress.duplicate(),"festival":demo.state.festival_status(venue)}
		if kind=="finished" and not started_performance.is_empty():
			row["playing_wall_seconds"]=float(Time.get_ticks_msec()-int(started_performance.wall_ms))/1000.0
			row["playing_music_seconds"]=demo.music._playback_clock()-float(started_performance.clock)
			row["source"]=started_performance.source
		_event("concert_"+kind,row)
func _ledger_matches() -> bool:
	var expected := 0
	for house: Dictionary in demo.state.houses:
		if str(house.role)!="residential": expected+=1
	if demo.ledger.rows.size()!=expected: return false
	for row: Dictionary in demo.ledger.rows:
		var status: Dictionary = {}
		match str(row.role):
			"bakery": status=demo.state.bakery_status(str(row.id))
			"workshop": status=demo.state.workshop_status(str(row.id))
			"venue": status=demo.state.festival_status(str(row.id))
			"garden_cafe": status=demo.state.cafe_progress.get(str(row.id),{})
		if row.status!=status or row.connected!=demo.life.house_connected(str(row.id)): return false
	var progress: Dictionary = demo.state.life_progress
	return demo.ledger.body.text.contains("采购 %d 次" % int(progress.purchases)) and demo.ledger.body.text.contains("茶聚 %d 桌 / %d 人次" % [int(progress.tea_parties),int(progress.tea_visits)]) and demo.ledger.body.text.contains("演出 %d 场" % int(progress.concerts))
func _balances() -> Dictionary:
	for id: String in demo.state.bakery_supply:
		var row: Dictionary = demo.state.bakery_supply[id]
		if int(row.produced)!=int(row.stock)+int(row.served) or int(row.stock)<0 or int(row.stock)>demo.state.bakery_capacity(id): _error("bread balance/capacity "+id)
	if _sum(demo.state.bakery_supply,"served")!=int(demo.state.life_progress.purchases): _error("bread sales differ from completed purchases")
	var reserved := {}
	var festival_reserved := {}
	for id: String in demo.state.workshop_supply:
		var row: Dictionary = demo.state.workshop_supply[id]
		var transit: Dictionary = row.transit
		if int(row.produced)!=int(row.stock)+int(row.delivered)+(0 if transit.is_empty() else 1) or int(row.stock)<0 or int(row.stock)>demo.state.workshop_capacity(id): _error("craft balance/capacity "+id)
		if not transit.is_empty():
			var ledger: Dictionary = festival_reserved if str(transit.get("kind","upgrade"))=="festival" else reserved
			ledger[str(transit.target_id)]=int(ledger.get(str(transit.target_id),0))+1
	var installed := 0
	for id: String in demo.state.house_improvements:
		var level: int = demo.state.house_improvements[id];installed+=level
		if level<0 or level>3 or level+int(reserved.get(id,0))>3: _error("permanent craft level/reservation "+id)
	if _sum(demo.state.workshop_supply,"delivered")!=installed+_sum(demo.state.venue_commissions,"delivered"): _error("craft delivered differs from actual installed and festival gifts")
	for id: String in demo.state.venue_commissions:
		var row: Dictionary = demo.state.venue_commissions[id]
		if int(row.used)>int(row.delivered) or int(row.delivered)>int(row.requested) or int(row.requested)-int(row.used)>1 or int(festival_reserved.get(id,0))>int(row.requested)-int(row.delivered): _error("festival balance/reservation "+id)
	if _sum(demo.state.venue_commissions,"requested")>int(demo.state.life_progress.concerts): _error("festival demand exceeds actual concerts")
	for group: String in ["cafe_credits","matinee_credits"]:
		var rows: Dictionary = demo.state.get(group)
		for id: String in rows:
			var row: Dictionary = rows[id]
			if int(row.spent)<0 or int(row.earned)<int(row.spent) or int(row.earned)-int(row.spent)>1: _error(group+" balance "+id)
	if _sum(demo.state.cafe_progress,"groups")!=int(demo.state.life_progress.tea_parties) or _sum(demo.state.cafe_progress,"visits")!=int(demo.state.life_progress.tea_visits) or _sum(demo.state.cafe_credits,"spent")!=int(demo.state.life_progress.tea_visits): _error("tea completion and consumed credits differ")
	if _sum(demo.state.matinee_progress,"completed")!=int(demo.state.life_progress.auto_concerts) or _sum(demo.state.matinee_progress,"sponsors")!=_sum(demo.state.matinee_credits,"spent"): _error("actual auto concert sponsorship differs")
	return {"wall_seconds":float(Time.get_ticks_msec()-monitor_began)/1000.0,"bread_produced":_sum(demo.state.bakery_supply,"produced"),"purchases":int(demo.state.life_progress.purchases),"tea_parties":int(demo.state.life_progress.tea_parties),"tea_visits":int(demo.state.life_progress.tea_visits),"craft_produced":_sum(demo.state.workshop_supply,"produced"),"craft_delivered":_sum(demo.state.workshop_supply,"delivered"),"concerts":int(demo.state.life_progress.concerts),"auto_concerts":int(demo.state.life_progress.auto_concerts),"festival_delivered":_sum(demo.state.venue_commissions,"delivered"),"festival_used":_sum(demo.state.venue_commissions,"used"),"chapters":demo.state.growth_memories.duplicate(),"phase":str(demo.life._concert.get("phase","idle")),"invariant_errors":invariant_errors.size()}
func _observe_people() -> void:
	for artisan: Dictionary in demo.life.workshop.workers:
		observed_phases["artisan/"+str(artisan.phase)]=true
		var transit: Dictionary = demo.state.workshop_status(str(artisan.workshop_id)).transit
		if not transit.is_empty() and artisan.carry.visible and str(artisan.phase) in ["to_target","installing"]:
			if not observed_cargo: _event("actual_carried_object",{"home":artisan.home_id,"shop":artisan.workshop_id,"target":artisan.target_id,"transit":transit.duplicate()})
			observed_cargo=true
	for id: String in demo.life.cafe.layouts:
		var status: Dictionary = demo.life.cafe.status(id)
		observed_phases["cafe/"+str(status.phase)]=true
		if str(status.phase)=="tea" and int(status.seated_count)>=2:
			if not observed_seated_tea: _event("actual_seated_tea",{"cafe":id,"status":status.duplicate(true)})
			observed_seated_tea=true
func _profile(phase: String,wall_ms: float,sample_frame: bool) -> void:
	var key := phase if phase in ["gathering","playing"] else "normal"
	if not profiles.has(key): profiles[key]={"frames":0,"wall_max_ms":0.0,"wall_total_ms":0.0,"samples":[],"draws":[]}
	var row: Dictionary = profiles[key]
	row.frames=int(row.frames)+1;row.wall_max_ms=maxf(float(row.wall_max_ms),wall_ms);row.wall_total_ms=float(row.wall_total_ms)+wall_ms
	if sample_frame and row.samples.size()<2048:
		row.samples.append(wall_ms);row.draws.append(Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME))

func _run() -> void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	sample_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	var source: Dictionary = JSON.parse_string(sample_bytes.get_string_from_utf8())
	var zero := true
	for key: String in ["bakery_supply","workshop_supply","cafe_credits","cafe_progress","matinee_credits","matinee_progress","matinee_pending","house_improvements","venue_commissions","growth_memories","journey_checkpoint","resonance_afterglow"]:
		if not source.get(key,{}).is_empty(): zero=false
	for value: Variant in source.life_progress.values():
		if value!=0: zero=false
	_check(zero and float(source.get("matinee_cooldown",0.0))==0.0,"authored source sample contains no prefabricated business events stock memories or journeys")
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	if "--town-example" not in OS.get_cmdline_user_args():
		var restored: Dictionary = demo.state.restore(source)
		demo._after_edit(restored,"history");await _wait()
	var deadline := Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty() and demo.state.houses.size()==28 and demo.state.roads.size()==16,"actual GL production scene loads authored twenty-eight-house sixteen-road town")
	if demo.music.audio_report.is_empty(): await _finish();return
	identities=_identity()
	var route_failures: Array[String] = []
	var maximum_route := 0.0
	var destination: String = str(demo.life.connected_houses.get("h7",""))
	for house: Dictionary in demo.state.houses:
		var id := str(house.id)
		if not demo.life.connected_houses.has(id) or destination.is_empty(): route_failures.append(id);continue
		var route: Array = demo.life._route(str(demo.life.connected_houses[id]),destination)
		if route.is_empty(): route_failures.append(id)
		var length := 0.0
		for index in range(1,route.size()): length+=route[index-1].distance_to(route[index])
		maximum_route=maxf(maximum_route,length)
	_check(route_failures.is_empty(),"every actual selected house port has a real route to the unique h7 venue")
	var homes := {}
	var unique_workers := true
	for worker: Dictionary in demo.life.bakery.workers+demo.life.workshop.workers:
		if homes.has(str(worker.home_id)): unique_workers=false
		homes[str(worker.home_id)]=true
	_check(demo.life.bakery.workers.size()==3 and demo.life.workshop.workers.size()==2 and unique_workers and demo.life.cafe.layouts.has("h12") and demo.life.cafe.layouts.has("h15"),"three genuine bakers two distinct artisans and both actual cafe layouts are assigned")
	facts.preflight={"houses":28,"roads":16,"selected_ports":demo.life.connected_houses.size(),"route_failures":route_failures,"maximum_selected_port_route_m":maximum_route,"worker_homes":homes.keys()}
	await _key(KEY_L)
	_check(demo.ledger.visible() and demo.ledger.rows.size()==8 and _ledger_matches(),"actual L opens eight business rows mapped to current real State; source zero is checked separately")
	var before: Dictionary = demo.state.snapshot()
	var tool: int = demo.tool
	await _key(KEY_1);await _key(KEY_Z,true)
	await _click(demo.camera.unproject_position(Vector3(11,0,10)))
	_check(demo.ledger.visible() and demo.tool==tool and demo.state.snapshot()==before,"real modal ledger blocks world click tool change and construction history keys")
	root.size=Vector2i(1024,768)
	for ignored in range(4): await process_frame
	var paper: Rect2 = demo.ledger.paper.get_global_rect()
	var visible_bounds := Rect2(Vector2.ZERO,Vector2(root.size))
	_check(visible_bounds.encloses(paper) and paper.encloses(demo.ledger.scroll.get_global_rect()) and demo.ledger.scroll.get_v_scroll_bar().max_value>demo.ledger.scroll.get_v_scroll_bar().page,"1024 ledger paper fits viewport and eight entries use actual vertical scroll")
	# The earlier text click correctly moved focus into selectable contents.
	# Test Enter on a fresh opening, where the real return button owns focus.
	await _key(KEY_ESCAPE);await _key(KEY_L)
	await _key(KEY_ENTER)
	_check(not demo.ledger.visible(),"real Enter activates freshly focused ledger return button")
	await _key(KEY_L);await _key(KEY_ESCAPE);var escaped: bool = not demo.ledger.visible()
	await _key(KEY_L);await _key(KEY_L)
	_check(escaped and not demo.ledger.visible(),"real Esc and second L both return from ledger")
	facts.ledger_1024={"paper":paper,"scroll_max":demo.ledger.scroll.get_v_scroll_bar().max_value}
	root.size=Vector2i(1440,900)
	demo.focus=Vector3(-9.5,2,-7);demo.zoom=18;demo.pitch=0.88;demo.yaw=0.62;demo._update_camera()
	await _key(KEY_5);await _click(demo.camera.unproject_position(Vector3(-9.5,5.8,-7)))
	var scroll: ScrollContainer = demo.place_panel.find_child("PlaceScroll",true,false)
	scroll.ensure_control_visible(demo.concert_button);await process_frame
	_observe_callbacks();monitor_began=Time.get_ticks_msec();clock_start=demo.music._playback_clock()
	demo.life.set_process(true)
	await _click(demo.concert_button.get_global_rect().get_center())
	_check(demo.tool==4 and demo.selected_house=="h7" and str(demo.life.concert_status().phase)=="gathering","actual tool-five house pick and invite button begin first real audience gathering")
	demo.select_tool(0);demo.focus=Vector3(-1,0.7,0);demo.zoom=43;demo.pitch=0.85;demo._update_camera()
	deadline=monitor_began+180000
	var previous := Time.get_ticks_usec()
	var next_balance := monitor_began
	var next_people := monitor_began
	var next_frame_sample := monitor_began
	var next_print := monitor_began+10000
	while Time.get_ticks_msec()<deadline:
		await process_frame
		var now := Time.get_ticks_msec()
		var usec := Time.get_ticks_usec()
		var phase: String = str(demo.life._concert.get("phase","idle"))
		_profile(phase,float(usec-previous)/1000.0,now>=next_frame_sample);previous=usec
		if now>=next_frame_sample: next_frame_sample=now+100
		if phase!=last_phase: last_phase=phase;_event("phase",{"status":demo.life.concert_status()})
		if now>=next_people: _observe_people();next_people=now+250
		if now>=next_balance: timeline.append(_balances());next_balance=now+1000
		if now>=next_print:
			print("TOWN_LIFE_PROGRESS ",JSON.stringify(timeline[-1]));next_print+=10000
	demo.life.set_process(false)
	var final := _balances();timeline.append(final)
	var counts := {}
	var full_performance := false
	for event: Dictionary in events:
		counts[str(event.kind)]=int(counts.get(str(event.kind),0))+1
		if event.kind=="concert_finished" and float(event.get("playing_wall_seconds",0.0))>23.8 and float(event.get("playing_music_seconds",0.0))>23.8: full_performance=true
	_check(int(final.purchases)>0 and int(counts.get("bread_produced",0))>0,"real attended ovens produce stock and residents complete genuine purchases")
	_check(int(final.tea_parties)>0 and int(counts.get("tea_completed",0))>0 and observed_seated_tea,"real residents occupy at least two seats and finish actual six-second tea")
	_check(int(final.craft_delivered)>0 and int(counts.get("craft_installed",0))+int(counts.get("craft_festival",0))>0 and observed_cargo,"actual artisan carrying and installation settle genuine delivered objects")
	_check(int(final.concerts)>=1 and full_performance,"at least one full actual twenty-four-second performance completes on advancing wall and PCM clocks")
	_check(invariant_errors.is_empty(),"all one-second stock credit delivery festival and sponsorship checks remain conserved")
	_check(Engine.time_scale==1.0 and demo.music._playback_clock()-clock_start>175.0,"three-minute observation uses unaccelerated real production music clock")
	for key: String in profiles:
		var row: Dictionary = profiles[key];row.samples.sort();row.draws.sort()
		row["sample_count"]=row.samples.size()
		row["sampled_wall_p95_ms"]=row.samples[floori((row.samples.size()-1)*0.95)] if not row.samples.is_empty() else 0.0
		row["draws_median"]=row.draws[row.draws.size()/2] if not row.draws.is_empty() else 0.0
		row.erase("samples");row.erase("draws")
	facts.observation={"wall_seconds":float(Time.get_ticks_msec()-monitor_began)/1000.0,"end":final,"event_counts":counts,"events":events,"timeline":timeline,"invariant_errors":invariant_errors,"actual_artisan_cargo":observed_cargo,"actual_seated_tea":observed_seated_tea,"phases":observed_phases.keys(),"chapters":Growth.report(demo.state),"remaining":Growth.report(demo.state).filter(func(row: Dictionary)->bool: return not row.earned),"note":"auto_concerts, festival used and all three chapters are observed outcomes, never hard completion guarantees"}
	facts.performance={"phases":profiles,"sample_scope":"10Hz frame-duration samples, up to 2048 per phase; frame count and maximum include every observed frame, not every-frame world snapshots","engine_max_fps":Engine.max_fps,"vsync":DisplayServer.window_get_vsync_mode()}
	demo.select_tool(0);demo.focus=Vector3(-1,0.7,0);demo.zoom=43;demo.pitch=0.85;demo._update_camera()
	await _capture("01_三分钟真实经营河湾")
	await _key(KEY_L)
	_check(demo.ledger.visible() and demo.ledger.rows.size()==8 and _ledger_matches(),"final actual ledger rows and headline totals match frozen completed State exactly")
	await _capture("02_真实库存与完成账本")
	await _key(KEY_ESCAPE)
	var saved: Dictionary = demo.state.snapshot()
	var path := OUT+"/实际三分钟河湾.json"
	var written: Dictionary = demo.state.save_city(path)
	var loaded := State.new()
	var read: Dictionary = loaded.load_city(path) if written.ok else {"ok":false}
	var restored_snapshot: Dictionary = loaded.snapshot()
	var exact_ledgers := true
	for key: String in ["life_progress","bakery_supply","workshop_supply","cafe_credits","cafe_progress","matinee_credits","matinee_progress","matinee_pending","house_improvements","venue_commissions","growth_memories"]:
		if saved.get(key)!=restored_snapshot.get(key): exact_ledgers=false
	var roundoff: Array = []
	var semantic_match := _storage_matches(saved,restored_snapshot,"$",roundoff)
	facts.storage={"save":written,"load":read,"exact_business_ledgers":exact_ledgers,"exact_snapshot":restored_snapshot==saved,"float_roundoff":roundoff,"maximum_allowed_float_error":1.0e-12,"comparison":"all fields and types preserved; integer ledgers and cargo IDs exact, float-only decimal roundoff bounded"}
	_check(written.ok and read.ok and exact_ledgers and semantic_match,"strict real JSON save/load preserves exact business ledgers and complete city with bounded float-only decimal roundoff")
	_check(_identity()==identities and demo.music.get_child_count()==13,"three minutes of genuine production preserve nine PCM bytes and all thirteen original players")
	await _finish()

func _finish() -> void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal continuing-city bytes remain untouched")
	_check(FileAccess.get_file_as_bytes(EXAMPLE)==sample_bytes,"authored operating-town sample bytes remain untouched")
	var result := {"ok":failures.is_empty(),"checks":checks,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"failures":failures,"facts":facts,"scope":"180 actual wall seconds with natural Life node processing and production music. First concert is invited through actual tool-five button; further matinees are natural. Callback observers chain original production callbacks. UI reference checks freeze Life only outside the observation. No manual Life._process, clock changes, fabricated stocks/credits/ledgers, or guaranteed all-chapter claim. Godot Window injection, not OS input.","command":"Godot_v4.7.2-stable_win64_console.exe --max-fps 180 --path . --script tools/check_creation_town_life_live.gd -- --town-example"}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("CREATION_TOWN_LIFE_LIVE ",JSON.stringify(result))
	demo.life.set_process(false);demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)

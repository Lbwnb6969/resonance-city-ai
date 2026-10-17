extends SceneTree
## Thirty real seconds; wrappers call the unchanged production implementation.
const State=preload("res://scripts/world/city_creation_state.gd")
const EXAMPLE="res://数据/经营河湾样例.json"
const BASE="res://验证记录/经营刷新_2026-10-16"
var demo
var trace:Trace
var out:String
var checks:Array=[]
var failures:Array[String]=[]
var personal:=PackedByteArray()
var source_bytes:=PackedByteArray()

class Trace extends RefCounted:
	var active:bool=false
	var began:int=0
	var frames:Array=[]
	var current:Dictionary={}
	var events:Array=[]
	var functions:Dictionary={}
	func begin_frame()->void:
		var now:int=Time.get_ticks_usec()
		if not current.is_empty():
			current.wall_end_us=now
			current.wall_interval_ms=float(now-int(current.wall_begin_us))/1000.0
		current={"frame":frames.size(),"wall_begin_us":now,"wall_end_us":now,"wall_seconds":float(now-began)/1000000.0,"process_begin_us":now,"process_end_us":now,"process_cpu_ms":0.0,"wall_interval_ms":0.0,"cpu_ms":{},"calls":{},"markers":[],"events":[],"draws":Performance.get_monitor(Performance.RENDER_TOTAL_DRAW_CALLS_IN_FRAME)}
		frames.append(current)
	func mark(label:String)->void:
		if active and not current.is_empty(): current.markers.append(label)
	func timing(label:String,start:int)->void:
		if not active: return
		var elapsed:float=float(Time.get_ticks_usec()-start)/1000.0
		if not functions.has(label): functions[label]=[]
		functions[label].append(elapsed)
		if not current.is_empty():
			current.cpu_ms[label]=float(current.cpu_ms.get(label,0.0))+elapsed
			current.calls[label]=int(current.calls.get(label,0))+1
	func event(kind:String,data:Dictionary)->void:
		if not active: return
		var row:Dictionary={"kind":kind,"time_us":Time.get_ticks_usec(),"wall_seconds":float(Time.get_ticks_usec()-began)/1000000.0,"frame":int(current.get("frame",-1)),"data":data}
		events.append(row)
		if not current.is_empty(): current.events.append(row)
	func finish()->void:
		if not current.is_empty():
			current.wall_end_us=Time.get_ticks_usec()
			current.wall_interval_ms=float(int(current.wall_end_us)-int(current.wall_begin_us))/1000.0
		active=false
	func stats(values:Array)->Dictionary:
		var sorted:Array=values.duplicate();sorted.sort()
		if sorted.is_empty(): return {"count":0}
		var total:float=0.0
		for value:float in sorted: total+=value
		return {"count":sorted.size(),"p50_ms":sorted[int((sorted.size()-1)*0.5)],"p95_ms":sorted[int((sorted.size()-1)*0.95)],"max_ms":sorted[-1],"total_ms":total}
	func report()->Dictionary:
		var sorted:Array=frames.duplicate()
		sorted.sort_custom(func(a:Dictionary,b:Dictionary)->bool:return float(a.wall_interval_ms)>float(b.wall_interval_ms))
		var slow:Array=[]
		for i in range(mini(10,sorted.size())):
			var row:Dictionary=sorted[i].duplicate(true)
			var previous:int=int(row.frame)-1
			if previous>=0: row.previous_frame={"frame":previous,"process_cpu_ms":frames[previous].process_cpu_ms,"cpu_ms":frames[previous].cpu_ms.duplicate(),"markers":frames[previous].markers.duplicate(),"events":frames[previous].events.duplicate(true)}
			slow.append(row)
		var cpu:Dictionary={}
		for label:String in functions: cpu[label]=stats(functions[label])
		var wall:Array=[]
		var periodic:Array=[]
		var event_frames:Array=[]
		for row:Dictionary in frames:
			wall.append(row.wall_interval_ms)
			if row.markers.has("periodic_ui_refresh"): periodic.append(row.duplicate(true))
			if not row.events.is_empty(): event_frames.append(row.duplicate(true))
		return {"frame_count":frames.size(),"wall":stats(wall),"functions":cpu,"slowest_10_wall_frames":slow,"event_frames":event_frames,"periodic_frames":periodic,"events":events,"timing_scope":"Function timings are inclusive script CPU around each original super call; nested functions must not be added. wall_begin_us to wall_end_us spans this parent process invocation through the next parent invocation, including renderer/driver/scheduler/other nodes. Events after parent _process remain on that frame. Draw count is the last completed render monitor. A wall spike is not attributed to CPU or GPU without a corresponding timed cause."}

class ProfileDemo extends "res://scripts/ui/city_creation_demo.gd":
	var trace:RefCounted
	func _process(delta:float)->void:
		if trace==null or not trace.active: super._process(delta);return
		trace.begin_frame()
		if life_ui_timer-delta<0.0 and not _edit_pending: trace.mark("periodic_ui_refresh")
		var start:int=Time.get_ticks_usec()
		super._process(delta)
		trace.timing("Demo._process",start)
		trace.current.process_end_us=Time.get_ticks_usec()
		trace.current.process_cpu_ms=float(trace.current.process_end_us-start)/1000.0
	func _refresh_place()->void:
		var start:int=Time.get_ticks_usec();super._refresh_place()
		if trace!=null: trace.timing("Demo._refresh_place",start)
	func _refresh_bakeries()->void:
		var start:int=Time.get_ticks_usec();super._refresh_bakeries()
		if trace!=null: trace.timing("Demo._refresh_bakeries",start)
	func _refresh_workshops()->void:
		var start:int=Time.get_ticks_usec();super._refresh_workshops()
		if trace!=null: trace.timing("Demo._refresh_workshops",start)
	func _refresh_concert()->void:
		var start:int=Time.get_ticks_usec();super._refresh_concert()
		if trace!=null: trace.timing("Demo._refresh_concert",start)
	func _capture_journeys()->void:
		var start:int=Time.get_ticks_usec();super._capture_journeys()
		if trace!=null: trace.mark("capture_journeys");trace.timing("Demo._capture_journeys",start)
	func _on_craft_event(kind:String,shop_id:String,target_id:String,level:int)->void:
		var start:int=Time.get_ticks_usec()
		if trace!=null: trace.mark("craft_callback/"+kind)
		super._on_craft_event(kind,shop_id,target_id,level)
		if trace!=null: trace.timing("Demo._on_craft_event",start)

class ProfileCraft extends "res://scripts/visual/city_creation_craft.gd":
	var trace:RefCounted
	func progress(renderer)->void:
		var start:int=Time.get_ticks_usec();super.progress(renderer)
		if trace!=null: trace.timing("Craft.progress",start)
	func supply(renderer,statuses:Dictionary)->void:
		var start:int=Time.get_ticks_usec();super.supply(renderer,statuses)
		if trace!=null: trace.timing("Craft.supply",start)

func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks.append({"label":label,"passed":ok})
	if not ok: failures.append(label);push_error(label)
func _sum(rows:Dictionary,key:String)->int:
	var total:int=0
	for row:Dictionary in rows.values(): total+=int(row.get(key,0))
	return total
func _identity()->Array:
	var result:Array=[]
	for key:String in demo.music.STEMS:
		var player:AudioStreamPlayer=demo.music._players[key]
		result.append([key,player.get_instance_id(),player.stream.get_instance_id()])
	for player:AudioStreamPlayer in demo.music._effects: result.append(player.get_instance_id())
	return result
func _event(kind:String,data:Dictionary)->void:
	data["life_progress"]=demo.state.life_progress.duplicate()
	data["music_clock"]=demo.music._playback_clock()
	data["concert"]=demo.life.concert_status()
	trace.event(kind,data)
func _callbacks()->void:
	var production:Callable=demo.life.production_callback
	demo.life.production_callback=func(id:String,quantity:int)->void:
		if production.is_valid(): production.call(id,quantity)
		_event("bread_produced",{"shop":id,"quantity":quantity})
	var craft:Callable=demo.life.craft_callback
	demo.life.craft_callback=func(kind:String,shop:String,target:String,level:int)->void:
		if craft.is_valid(): craft.call(kind,shop,target,level)
		_event("craft_"+kind,{"shop":shop,"target":target,"level_or_quantity":level})
	var concert:Callable=demo.life.concert_callback
	demo.life.concert_callback=func(kind:String,id:String)->void:
		if concert.is_valid(): concert.call(kind,id)
		_event("concert_"+kind,{"venue":id})
func _balances()->Dictionary:
	var errors:Array=[]
	for id:String in demo.state.bakery_supply:
		var row:Dictionary=demo.state.bakery_supply[id]
		if int(row.produced)!=int(row.stock)+int(row.served) or int(row.stock)<0 or int(row.stock)>demo.state.bakery_capacity(id): errors.append("bread "+id)
	if _sum(demo.state.bakery_supply,"served")!=int(demo.state.life_progress.purchases): errors.append("purchase settlement")
	for id:String in demo.state.workshop_supply:
		var row:Dictionary=demo.state.workshop_supply[id]
		if int(row.produced)!=int(row.stock)+int(row.delivered)+(0 if row.transit.is_empty() else 1) or int(row.stock)<0 or int(row.stock)>demo.state.workshop_capacity(id): errors.append("craft "+id)
	var installed:int=0
	for value:int in demo.state.house_improvements.values(): installed+=value
	if _sum(demo.state.workshop_supply,"delivered")!=installed+_sum(demo.state.venue_commissions,"delivered"): errors.append("installed settlement")
	return {"errors":errors,"bread_produced":_sum(demo.state.bakery_supply,"produced"),"bread_served":_sum(demo.state.bakery_supply,"served"),"craft_produced":_sum(demo.state.workshop_supply,"produced"),"craft_delivered":_sum(demo.state.workshop_supply,"delivered"),"installed":installed,"life_progress":demo.state.life_progress.duplicate()}
func _run()->void:
	var label:String="before"
	var args:PackedStringArray=OS.get_cmdline_user_args()
	for i in range(args.size()):
		if args[i]=="--profile-output" and i+1<args.size(): label=args[i+1]
		elif args[i].begins_with("--profile-output="): label=args[i].get_slice("=",1)
	assert(label in ["before","after"])
	out=BASE+"/"+label
	assert(not FileAccess.file_exists(out+"/profile.json"),"Preserve the existing capture; use the other named output.")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	personal=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	source_bytes=FileAccess.get_file_as_bytes(EXAMPLE)
	var source:Dictionary=JSON.parse_string(source_bytes.get_string_from_utf8())
	var zero:bool=true
	for value:Variant in source.life_progress.values(): zero=zero and value==0
	for key:String in ["bakery_supply","workshop_supply","house_improvements","venue_commissions","journey_checkpoint","growth_memories"]: zero=zero and source.get(key,{}).is_empty()
	_check(zero,"authored operating-town source begins with no fabricated inventory or achievements")
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	trace=Trace.new()
	demo=ProfileDemo.new();demo.name="CityCreation";demo.persistence=false;demo.trace=trace
	demo.collection_directory=out+"/临时作品库_"+str(Time.get_ticks_usec())
	root.add_child(demo);demo.life.set_process(false)
	if "--town-example" not in args:
		demo._after_edit(demo.state.restore(source),"history")
		while demo.edit_pending() or demo._edit_ui_pending: await process_frame
	var deadline:int=Time.get_ticks_msec()+25000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<deadline: await process_frame
	_check(DisplayServer.get_name()!="headless" and not demo.music.audio_report.is_empty() and demo.state.houses.size()==28,"actual GL twenty-eight-house production scene and original music are ready")
	if DisplayServer.get_name()=="headless" or demo.music.audio_report.is_empty(): await _finish({});return
	var old=demo.town.craft
	var replacement=ProfileCraft.new();replacement.trace=trace
	for field:String in ["roots","fingerprints","placement_inputs","stock_roots","stock_fingerprints","meshes","material","layer","build_count"]: replacement.set(field,old.get(field))
	demo.town.craft=replacement
	_check(replacement.layer==old.layer and replacement.material==old.material and replacement.roots==old.roots and replacement.stock_roots==old.stock_roots,"craft timing subclass retains original live nodes resources and public caches")
	demo.selected_house="h7";demo.select_tool(0)
	demo.focus=Vector3(-1,0.7,0);demo.zoom=43;demo.pitch=0.85;demo._update_camera()
	FileAccess.open(out+"/start_snapshot.json",FileAccess.WRITE).store_string(JSON.stringify(demo.state.snapshot(),"\t",true,true))
	var identity:Array=_identity()
	var clock:float=demo.music._playback_clock()
	_callbacks();trace.began=Time.get_ticks_usec();trace.active=true
	demo.life.set_process(true)
	var invitation:Dictionary=demo.life.invite_concert("h7")
	_check(invitation.ok,"unchanged real Life invitation starts h7 gathering with h7 selected and tool0")
	_event("initial_invitation",{"result":invitation})
	deadline=Time.get_ticks_msec()+30000
	var next_print:int=Time.get_ticks_msec()+10000
	while Time.get_ticks_msec()<deadline:
		await process_frame
		if Time.get_ticks_msec()>=next_print:
			print("SUPPLY_PROFILE_PROGRESS ",JSON.stringify({"seconds":float(Time.get_ticks_usec()-trace.began)/1000000.0,"events":trace.events.size(),"frames":trace.frames.size()}));next_print+=10000
	trace.finish();demo.life.set_process(false)
	var report:Dictionary=trace.report()
	report.elapsed_wall_seconds=float(Time.get_ticks_usec()-trace.began)/1000000.0
	report.balances=_balances()
	report.music_clock_elapsed=demo.music._playback_clock()-clock
	report.mode={"label":label,"window":[root.size.x,root.size.y],"fps_cap":180,"vsync_disabled":DisplayServer.window_get_vsync_mode()==DisplayServer.VSYNC_DISABLED,"selected_house":demo.selected_house,"tool":demo.tool}
	var event_counts:Dictionary={}
	for event:Dictionary in trace.events: event_counts[event.kind]=int(event_counts.get(event.kind,0))+1
	report.event_counts=event_counts
	_check(int(event_counts.get("bread_produced",0))>0 and int(event_counts.get("craft_crafted",0))>0 and int(event_counts.get("craft_installed",0))>0,"thirty natural seconds contain actual bread craft production and permanent delivery events")
	_check(report.balances.errors.is_empty(),"actual bread inventory purchases crafts and installed improvements conserve their real balances")
	_check(_identity()==identity and demo.music._players.size()==9 and demo.music._effects.size()==4 and float(report.music_clock_elapsed)>29.0,"thirteen original players and stream identities persist while actual device transport advances naturally")
	await _finish(report)
func _finish(report:Dictionary)->void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal city-save bytes remain unchanged")
	_check(FileAccess.get_file_as_bytes(EXAMPLE)==source_bytes,"authored operating-town bytes remain unchanged")
	report.merge({"ok":failures.is_empty(),"checks":checks,"failures":failures,"check_count":checks.size(),"passed_count":checks.size()-failures.size(),"scope":"One actual GL thirty-second natural Life+Music capture. No accelerated process calls inventory writes prefilled rewards or product edits. ProfileDemo/ProfileCraft override only measures inclusive super calls and retains original craft objects. Nested CPU timings are not additive; wall spikes include later frame work and are not presumed script CPU or GPU stalls.","command":"Godot_v4.7.2-stable_win64_console.exe --path . --rendering-method gl_compatibility --max-fps 180 --script tools/profile_creation_supply_live.gd -- --isolated-session --town-example --profile-output "+out.get_file()})
	FileAccess.open(out+"/profile.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("CREATION_SUPPLY_PROFILE ",JSON.stringify({"ok":report.ok,"checks":report.get("passed_count",0),"events":report.get("event_counts",{}),"wall":report.get("wall",{}),"functions":report.get("functions",{})}))
	if is_instance_valid(demo):
		demo.life.set_process(false);demo.music.set_process(false)
		for player:AudioStreamPlayer in demo.music._players.values(): player.stop()
		for player:AudioStreamPlayer in demo.music._effects: player.stop()
		await create_timer(0.15).timeout
		demo.queue_free();await process_frame;await create_timer(0.15).timeout
	quit(0 if failures.is_empty() else 1)

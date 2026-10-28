class_name CityCreationLife
extends Node3D
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Small, purposeful daily trips on the real continuous street graph.
const UNIT := 1.8
const CitizenMotion=preload("res://scripts/world/city_creation_citizen_motion.gd")
var greetings=preload("res://scripts/world/city_creation_greetings.gd").new()
const CitizenSchedule=preload("res://scripts/world/city_creation_citizen_schedule.gd")
var _citizen_schedule:=CitizenSchedule.new()
const State=preload("res://scripts/world/city_creation_state.gd")
var _published_surface:RefCounted
var view_camera:Camera3D
var worker_lod=preload("res://scripts/world/city_creation_worker_lod.gd").new(self)
var _visual_lod_cursor:=0
var _lod_scalar_count:=0
var _lod_visible_count:=0
var _quality_inputs:Variant=null
var _quality_cursor:=-1
var _planning_walking_pending:=true
var profile_tick:=false
var tick_profile:Dictionary={}
var citizen_lod_stats:Dictionary={"scalar":0,"visible":0,"publications":0,"scheduled_steps":0}
const Bakery := preload("res://scripts/world/city_creation_bakery.gd")
const Workshop := preload("res://scripts/world/city_creation_workshop.gd")
const Frontage := preload("res://scripts/world/city_creation_frontage.gd")
const Passage := preload("res://scripts/world/city_creation_passage.gd")
const Matinee := preload("res://scripts/world/city_creation_matinee.gd")
const ConcertRelay := preload("res://scripts/world/city_creation_concert_relay.gd")
const GrandFestival=preload("res://scripts/world/city_creation_grand_festival.gd")
const Network := preload("res://scripts/world/city_creation_network.gd")
const Terrain := preload("res://scripts/world/city_creation_terrain.gd")
const TerrainProtection := preload("res://scripts/world/city_creation_terrain_protection.gd")
const RoadHeights=preload("res://scripts/world/city_creation_road_heights.gd")
const DistrictLinks=preload("res://scripts/world/city_creation_district_links.gd")
var _district_link_network: RefCounted
var _district_link_signature: Variant=null
var _district_link_pairs: Array=[]
var district_link_rebuilds:=0
const Cafe := preload("res://scripts/world/city_creation_cafe.gd")
const Travel := preload("res://scripts/world/city_creation_travel.gd")
const Tram := preload("res://scripts/world/city_creation_tram.gd")
var tram: RefCounted
var travel: RefCounted = Travel.new()
var bakery: RefCounted
var workshop: RefCounted
var cafe: RefCounted
var matinee: RefCounted
var state: RefCounted
var residents: Array[Dictionary] = []
var connected_houses: Dictionary = {}
var selected_entrances: Dictionary = {}
var graph: Dictionary = {}
var positions: Dictionary = {}
var last_revision := -1
var purchases := 0
var gatherings := 0
var current_population := 0
var time := 0.0
var arrival_callback: Callable
var concert_callback: Callable
var last_completed_movement:Dictionary={}
var concert_start_gate: Callable
var production_callback: Callable
var wish_callback:Callable
var site_wishes:RefCounted
var purchase_callback: Callable
var quality_callback: Callable
var _quality_timer:=0.0
var craft_callback: Callable
var cafe_callback: Callable
var travel_callback: Callable
var tram_callback: Callable
const CONCERT_DURATION := 24.0
var _concert: Dictionary = {}
const ConductorParade=preload("res://scripts/world/city_creation_conductor_parade.gd")
var conductor_parade:=ConductorParade.new()
var _finale:Dictionary={}
var _relay: Dictionary = {}
var _resonance_signature: Array = []
var _chorus_house_ids: Array[String] = []
var _ambient_house_ids: Array[String] = []
var _wake_house_ids: Dictionary = {}
var _resonance_bins: Dictionary = {}
var resonance_membership_rebuilds := 0

var _network_signature: Array = []
var _roles: Dictionary = {}
var _route_cache: Dictionary = {}
var _route_cache_entries := 0
const NETWORK_BIN_SIZE := 2.0
const ROUTE_CACHE_LIMIT := 1024
var _network: RefCounted = Network.new()
var _budget_thread: Thread
var _budget_request: Dictionary = {}
var _budget_generation := 0
var _budget_running_generation := -1
var _budget_worker: RefCounted
var _budget_ready_network: RefCounted
var _budget_hold := false
var _budget_delta := 0.0
var _budget_catching_up := false
var budget_prepare_ms := 0.0
var budget_commit_ms := 0.0
var budget_commit_stats: Dictionary = {}
var _position_cache_stats: Dictionary = {}
var _budget_started_usec := 0

func flush_citizen(resident:Dictionary)->void:
	var motion:RefCounted=resident.get("offscreen_motion")
	if motion==null:return
	_citizen_schedule.wake(resident)
	var before: Vector3=motion.start+motion.direction*motion.progress
	if motion.deferred:
		motion.settle()
		resident.motion_advanced_at=time
	var surface:RefCounted=_published_surface if _published_surface!=null and state.revision!=last_revision else state
	var point:Vector3=motion.point();point.y=surface.street_height(Vector2(point.x,point.z))+.10
	if motion.watch_travel:record_travel("resident/"+str(resident.home_id),Vector2(before.x,before.z),Vector2(point.x,point.z))
	resident.node.position=point;resident.node.rotation.y=motion.yaw
	resident.node.get_child(0).visible=true
	resident.erase("offscreen_motion")
	citizen_lod_stats.publications+=1

func flush_workers()->void:
	if bakery!=null:
		for worker: Dictionary in bakery.workers:worker_lod.flush(worker)
	if workshop!=null:
		for worker: Dictionary in workshop.workers:worker_lod.flush(worker)

func _capture_published_surface()->void:
	# Two read-only grid buffers and immutable road profiles freeze actual
	# published heights. Flushing a hidden actor after an edit must not prepare
	# the new live terrain on the main thread before the worker can start.
	state.prepare_ground_height()
	var frozen:=State.new();frozen.revision=state.revision
	frozen.waters.assign(state.waters.duplicate(true))
	frozen._ground_terrain.vertices=state._ground_terrain.vertices
	frozen._ground_terrain.raw_vertices=state._ground_terrain.raw_vertices
	frozen._road_heights.copy_cache_from(state._road_heights)
	frozen._ground_revision=frozen.revision;frozen._raw_ground_revision=frozen.revision
	frozen._street_markers=state.Roundabouts.all(state.roads);frozen._street_marker_revision=frozen.revision
	_published_surface=frozen

func flush_citizens()->void:
	for resident:Dictionary in residents:flush_citizen(resident)

func citizen_position(resident:Dictionary)->Vector3:
	var motion:RefCounted=resident.get("offscreen_motion")
	if motion==null:return resident.node.position
	var point:Vector3=motion.point()
	var surface:RefCounted=_published_surface if _published_surface!=null and state.revision!=last_revision else state
	point.y=surface.street_height(Vector2(point.x,point.z))+.10
	return point

func _update_citizen_lod(delta:float)->void:
	if _visual_lod_cursor==0:_lod_scalar_count=0;_lod_visible_count=0
	var end:=mini(residents.size(),_visual_lod_cursor+16)
	for index in range(_visual_lod_cursor,end):
		var resident:Dictionary=residents[index]
		# Frustum selection only needs the cheap route envelope. Exact sampled
		# tread height is resolved by citizen_position/flush at observation.
		var motion:RefCounted=resident.get("offscreen_motion")
		var point:Vector3=motion.point() if motion!=null else resident.node.position
		var visible:=view_camera==null or view_camera.is_position_in_frustum(point+Vector3.UP*.35)
		var ticket:Dictionary=tram.tickets.get(str(resident.home_id),{})
		var scalar:bool=not visible and not resident.has("solo_listen") and not resident.has("balcony_visit") and not resident.has("bench_visit") and not resident.paused and resident.wait<=0. and str(resident.dwell_id).is_empty() and not resident.has("cafe_visit") and not conductor_parade.owns(self,resident) and ticket.get("state","")!="onboard"
		if scalar:
			if not resident.has("offscreen_motion"):resident.offscreen_motion=CitizenMotion.new(point,resident.node.rotation.y)
			resident.node.get_child(0).visible=false;_lod_scalar_count+=1
		else:
			flush_citizen(resident);_lod_visible_count+=1
			if ticket.get("state","")=="onboard":resident.node.get_child(0).visible=int(ticket.seat)<Tram.CAPACITY
	_visual_lod_cursor=end
	if end>=residents.size():
		_visual_lod_cursor=0;citizen_lod_stats.scalar=_lod_scalar_count;citizen_lod_stats.visible=_lod_visible_count

func set_budget_hold(held: bool) -> void:
	_budget_hold = held
	if not held and not budget_sync_pending() and state._region_network_revision!=state.revision:state.prepare_regional_echo(_network)
	if not held and not budget_sync_pending() and _budget_delta > 0.0:
		_process(0.0)

func begin_budget_sync() -> bool:
	_planning_walking_pending=true
	flush_citizens()
	flush_workers()
	budget_prepare_ms=0.0
	budget_commit_ms=0.0
	var signature := _signature()
	if signature == _network_signature:
		cancel_budget_sync()
		last_revision = state.revision
		_read_progress()
		if not _budget_hold:state.prepare_regional_echo(_network)
		return false
	_budget_generation += 1
	_budget_ready_network = null
	var actors: Array[Dictionary] = []
	for resident: Dictionary in residents:
		actors.append({"point":resident.node.position,"targets":[str(resident.home_id),str(resident.destination_id)]})
	for worker: Dictionary in bakery.workers:
		actors.append({"point":worker.node.position,"targets":[str(worker.home_id),str(worker.bakery_id)]})
	for worker: Dictionary in workshop.workers:
		actors.append({"point":worker.node.position,"targets":[str(worker.home_id),str(worker.workshop_id),str(worker.target_id)]})
	# Capture an independent incremental seed on the owning thread. Packed
	# grids are COW; history/region dictionaries are copied by copy_cache_from.
	# A queued request never reads the live State from its worker thread.
	var terrain_seed := Terrain.new()
	terrain_seed.copy_cache_from(state._ground_terrain)
	var protection_seed := TerrainProtection.new()
	protection_seed.copy_cache_from(state._terrain_protection)
	var road_seed:=RoadHeights.new();road_seed.copy_cache_from(state._road_heights)
	_budget_request = {"generation":_budget_generation,"revision":state.revision,"signature":signature,
		"snapshot":{"houses":state.houses.duplicate(true),"roads":state.roads.duplicate(true),"waters":state.waters.duplicate(true),"districts":state.districts.duplicate(true),"terrain_strokes":state.terrain_strokes.duplicate(true),"ground_cache":terrain_seed,"protection_cache":protection_seed,"road_height_cache":road_seed},
		"prior":connected_houses.duplicate(),"actors":actors}
	_budget_request.snapshot["cafe_layouts"]=cafe.layouts.duplicate(true)
	_budget_request.snapshot["cafe_context"]=cafe.layout_api.snapshot_city(state)
	_budget_request.snapshot["network_reuse"]=preload("res://scripts/visual/city_creation_local_service_cache.gd").network_seed(_network)
	_budget_request.snapshot["biome_seed"]=state.biome_seed.duplicate()
	_budget_request.snapshot["era_modifiers"]=state.era_modifiers.duplicate()
	_budget_request.snapshot["harmony_journey"]=state.harmony_journey.duplicate(true)
	var resident_stops:Dictionary={}
	for resident:Dictionary in residents:resident_stops[str(resident.home_id)]=resident.stops.duplicate()
	_budget_request.snapshot["resident_stops"]=resident_stops
	_budget_started_usec = Time.get_ticks_usec()
	if _budget_thread == null: _start_budget_worker()
	return true

func _start_budget_worker() -> void:
	_budget_running_generation = int(_budget_request.generation)
	var network := Network.new()
	_budget_worker = network
	_budget_thread = Thread.new()
	# Callable owns only the isolated RefCounted network and copied values.
	_budget_thread.start(network.prepare.bind(_budget_request.snapshot,_budget_request.prior,_budget_request.actors))

func budget_sync_pending() -> bool:
	return not _budget_request.is_empty()

func poll_budget_sync(commit: bool = true) -> bool:
	if _budget_ready_network != null:
		return commit_budget_sync() if commit else true
	if _budget_thread == null: return not budget_sync_pending()
	if _budget_thread.is_alive(): return false if budget_sync_pending() else true
	var prepared: RefCounted = _budget_thread.wait_to_finish()
	_budget_thread = null
	_budget_worker = null
	if not budget_sync_pending(): return true
	if _budget_running_generation != int(_budget_request.generation):
		_start_budget_worker()
		return false
	if int(_budget_request.revision) != state.revision or _budget_request.signature != _signature():
		begin_budget_sync()
		return not budget_sync_pending()
	budget_prepare_ms = (Time.get_ticks_usec()-_budget_started_usec)/1000.0
	_budget_ready_network = prepared
	return commit_budget_sync() if commit else true

func commit_budget_sync() -> bool:
	if _budget_ready_network == null:
		if not budget_sync_pending():site_wishes.poll()
		return not budget_sync_pending()
	# The joined worker already validated the full routing signature. Exact
	# native value comparisons cover every captured geometry input here without
	# reconstructing all held actors' remaining route bounds a second time.
	var captured:Dictionary=_budget_request.snapshot
	if int(_budget_request.revision) != state.revision or captured.houses!=state.houses or captured.roads!=state.roads or captured.waters!=state.waters or captured.districts!=state.districts or captured.terrain_strokes!=state.terrain_strokes or captured.biome_seed!=state.biome_seed or captured.era_modifiers!=state.era_modifiers or captured.harmony_journey.get("traditions",[])!=state.harmony_journey.get("traditions",[]):
		begin_budget_sync()
		return false
	var started := Time.get_ticks_usec()
	_network_signature = _budget_request.signature
	last_revision = state.revision
	# These exact frontage/passages records belong to the same copied geometry.
	# Publish after join so helpers do not repeat that work on the active State.
	state._frontage_cache = _budget_ready_network.state._frontage_cache
	_adopt_network(_budget_ready_network)
	cafe.layout_api=_network.prepared_cafe_context
	cafe.layout_api.rebind_city(_network.state,state)
	var adopted_ms := float(Time.get_ticks_usec()-started)/1000.0
	var travel_started := Time.get_ticks_usec()
	var travel_changed: bool = travel.adopt_prepared(_budget_ready_network.prepared_travel)
	var travel_adopt_ms := float(Time.get_ticks_usec()-travel_started)/1000.0
	var travel_worker_ms: float = _budget_ready_network.travel_prepare_ms
	_read_progress()
	_budget_request = {}
	_budget_ready_network = null
	_position_cache_stats={"exact_hits":0,"planar_hits":0,"street_misses":0,"exterior_hits":0,"exterior_misses":0,"street_miss_ms":0.0,"exterior_miss_ms":0.0}
	_network.route_cache_stats={"hits":0,"misses":0,"invalid":0}
	_network.route_counting=true
	_sync_people()
	_network.route_counting=false
	budget_commit_stats.merge({"network_adopt_ms":adopted_ms,"travel_adopt_ms":travel_adopt_ms,"travel_changed":travel_changed,"travel_prepare_worker_ms":travel_worker_ms},true)
	budget_commit_stats["position_cache"]=_position_cache_stats.duplicate()
	budget_commit_stats["pair_route_cache"]=_network.route_cache_stats.duplicate()
	budget_commit_stats["attachments"]=_network.attachment_stats.duplicate()
	budget_commit_stats["prepare_stages"]=_network.prepare_stats.duplicate()
	budget_commit_ms = (Time.get_ticks_usec()-started)/1000.0
	return true

func cancel_budget_sync() -> void:
	_budget_generation += 1
	_budget_request = {}
	_budget_ready_network = null
	# A superseded worker finishes privately; the next poll joins only after
	# completion. At most one Thread and one latest request exist at any time.
	if _budget_thread != null and not _budget_thread.is_alive():
		_budget_thread.wait_to_finish()
		_budget_thread = null
		_budget_worker = null

func _exit_tree() -> void:
	if _budget_thread != null:
		_budget_thread.wait_to_finish()
		_budget_thread = null
		_budget_worker = null

func setup(city: RefCounted, defer_sync:bool=false) -> void:
	cancel_budget_sync()
	var fresh := state != city
	if state != city:
		conductor_parade.clear()
		if tram!=null:tram.clear()
		if bakery != null: bakery.clear()
		if workshop != null: workshop.clear()
		if cafe != null: cafe.clear()
		for resident: Dictionary in residents: resident.node.queue_free()
		residents.clear()
		_network_signature.clear()
		last_revision = -1
		_concert.clear()
		_finale.clear()
		_relay.clear()
		_resonance_signature.clear()
		_wake_house_ids.clear()
	state = city
	if fresh:
		site_wishes=State.WishFulfilment.new(self)
		_quality_inputs=null;_quality_cursor=-1
		tram=Tram.new(self)
		travel = Travel.new()
		bakery = Bakery.new(self)
		workshop = Workshop.new(self)
		cafe = Cafe.new(self)
		matinee = Matinee.new(self)
	_read_progress()
	if defer_sync:return
	_sync()
	if fresh:finish_initial_setup()

func finish_initial_setup()->void:
	var saved:Variant=state.get("journey_checkpoint")
	if saved is Dictionary:restore_checkpoint(saved)
	workshop.refund_orphans=true
	workshop.sync()

func _read_progress() -> void:
	purchases = int(state.life_progress.purchases)
	gatherings = int(state.life_progress.gatherings)

func _process(delta: float) -> void:
	if state == null: return
	if _budget_hold or budget_sync_pending():
		_budget_delta += delta
		return
	# Repay elapsed preparation time in bounded real updates. Releasing a hold
	# never runs hundreds of catch-up ticks or jumps one giant route leg.
	var catch_up := minf(0.1,_budget_delta)
	_budget_delta -= catch_up
	_budget_catching_up = catch_up > 0.0
	_tick_life(delta+catch_up)
	_budget_catching_up = false

func _tick_life(delta: float) -> void:
	var sampled:=Time.get_ticks_usec() if profile_tick else 0
	if profile_tick:tick_profile.height=0;tick_profile.travel=0;tick_profile.cafe_attempts=0;tick_profile.quality_rules=0;tick_profile.quality_callback=0
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	if _planning_walking_pending:
		var bonuses:Dictionary=state.synergy_buffs().houses
		for resident:Dictionary in residents:resident.planning_walking_mult=float(bonuses.get(str(resident.home_id),{}).get("walking_mult",1.))
		_planning_walking_pending=false
	if str(_concert.get("phase", "idle")) == "playing":
		var until_completion := CONCERT_DURATION - float(_concert.elapsed)
		if until_completion > 0.0 and delta > until_completion:
			# Split at the real completion instant so bakery work after the
			# finish receives exactly its new bonus and the remaining timer ages.
			_tick_life(until_completion)
			_tick_life(delta - until_completion)
			return
	_quality_timer-=delta
	if _quality_timer<=0.0:
		_quality_timer=.5
		var inputs:=hash([state.revision,state.Quality.data(state)])
		if inputs!=_quality_inputs:_quality_inputs=inputs;_quality_cursor=0
	if _quality_cursor>=0:
		_refresh_quality(_quality_cursor,16);_quality_cursor+=16
		if _quality_cursor>=state.houses.size():_quality_cursor=-1
	if profile_tick:tick_profile.quality=Time.get_ticks_usec()-sampled;sampled=Time.get_ticks_usec()
	var tram_started:=Time.get_ticks_usec() if profile_tick else 0
	tram.tick(delta)
	if profile_tick:tick_profile.tram=Time.get_ticks_usec()-tram_started
	var work_started:=Time.get_ticks_usec() if profile_tick else 0
	site_wishes.poll()
	bakery.tick(delta)
	if profile_tick:tick_profile.bakery=Time.get_ticks_usec()-work_started;work_started=Time.get_ticks_usec()
	workshop.tick(delta)
	if profile_tick:tick_profile.workshop=Time.get_ticks_usec()-work_started
	state.advance_resonance_afterglow(delta)
	state.advance_matinee_rest(delta)
	time += delta
	greetings.update(time)
	if profile_tick:tick_profile.production=Time.get_ticks_usec()-sampled;sampled=Time.get_ticks_usec()
	_update_citizen_lod(delta)
	var has_trams:bool=not tram.cars.is_empty()
	var base_walk_step:=delta*.83*float(state.signature_bonuses().walking)
	var already_playing := str(_concert.get("phase", "idle")) == "playing"
	if str(_concert.get("phase", "idle")) == "gathering": _refresh_resonance_membership()
	if profile_tick:tick_profile.lod=Time.get_ticks_usec()-sampled;sampled=Time.get_ticks_usec()
	for resident: Dictionary in _citizen_schedule.take(time):
		_tick_citizen(resident,delta,base_walk_step,has_trams)
		var motion: RefCounted=resident.get("offscreen_motion")
		if motion!=null and motion.deferred:_citizen_schedule.sleep(resident,motion)
		else:_citizen_schedule.retain(resident)
	if profile_tick:tick_profile.citizens=Time.get_ticks_usec()-sampled;sampled=Time.get_ticks_usec()
	cafe.tick(delta)
	if already_playing and str(_concert.get("phase", "idle")) == "playing":
		var until_finish := CONCERT_DURATION - float(_concert.elapsed)
		_concert.elapsed = minf(CONCERT_DURATION, float(_concert.elapsed) + delta)
		if float(_concert.elapsed) >= CONCERT_DURATION: _end_concert(true, maxf(0.0, delta - until_finish))
	elif str(_concert.get("phase", "idle")) == "gathering":
		if not _budget_catching_up and int(concert_status().arrived) == int(concert_status().invited) and (not concert_start_gate.is_valid() or bool(concert_start_gate.call())):
			_concert.phase = "playing"
			if concert_callback.is_valid(): concert_callback.call("started", str(_concert.venue_id))
	# A newly started PCM performance belongs to the current real boundary.
	# Old held time must never be spent inside that new twenty-four seconds.
	if not _budget_catching_up: matinee.tick(delta)
	conductor_parade.update(self)
	preload("res://scripts/visual/city_creation_citizen_props.gd").update(self)
	if profile_tick:tick_profile.tail=Time.get_ticks_usec()-sampled

func _tick_citizen(resident: Dictionary,delta: float,base_walk_step: float,has_trams: bool)->void:
	if preload("res://scripts/world/city_creation_balcony_visits.gd").tick(self,resident,delta):return
	if preload("res://scripts/world/city_creation_bench_visits.gd").tick(self,resident,delta):return
	if preload("res://scripts/world/city_creation_solo_listeners.gd").tick(self,resident,delta):return
	if conductor_parade.owns(self,resident):return
	if time<float(resident.get("greeting_until",-1.)):return
	if resident.has("cafe_visit"): return
	if float(resident.get("motion_advanced_at",-1.))==time:return
	var motion:RefCounted=resident.get("offscreen_motion")
	if motion!=null and motion.deferred:
		if time<motion.due_at:return
		var speed: float=motion.deferred_speed
		var previous: Vector3=motion.start+motion.direction*motion.progress
		motion.settle()
		if motion.watch_travel:
			var point: Vector3=motion.point()
			record_travel("resident/"+str(resident.home_id),Vector2(previous.x,previous.z),Vector2(point.x,point.z))
		if motion.progress>=motion.length:resident.index=int(resident.index)+1
		else:motion.defer(self,speed)
		citizen_lod_stats.scheduled_steps+=1
		return
	var walk_step: float=state.ScoreModifiers.walking(state,str(resident.home_id))*base_walk_step*preload("res://scripts/world/city_creation_tradition_rules.gd").bridge_walk(state,resident.node.position,travel)*(1.08 if state.level_tier(str(resident.home_id))>=2 else 1.0)*float(resident.get("planning_walking_mult",1.))
	if has_trams:
		var ticket: Dictionary=tram.tickets.get(str(resident.home_id),{})
		var status: String=str(ticket.get("state",""))
		# A decision belongs to this resident's current trip. A tram elsewhere
		# must not force every declined/completed pedestrian back into scene
		# transforms. New routes still get a fresh real boarding decision.
		if (status!="declined" and status!="completed") or ticket.route!=resident.route:
			flush_citizen(resident)
			if tram.intercept(resident,delta):return
			motion=resident.get("offscreen_motion")
	# A legal hidden leg needs only a scalar increment. At leg boundaries
	# the normal route/state machine below still owns every transition.
	if motion!=null and motion.leg==int(resident.index) and motion.progress+walk_step<motion.length:
		var observe:bool=motion.watch_travel or (resident.has("daily_snapshot") and str(_concert.get("phase","idle"))=="gathering")
		var previous:Vector3=motion.point() if observe else Vector3.ZERO
		motion.progress+=walk_step
		if observe:
			var point:Vector3=motion.point()
			record_travel("resident/"+str(resident.home_id),Vector2(previous.x,previous.z),Vector2(point.x,point.z))
			if resident.has("daily_snapshot"):_wake_passed_houses(Vector2(previous.x,previous.z),Vector2(point.x,point.z))
		elif delta>0.:motion.defer(self,walk_step/delta)
		return
	if resident.paused: return
	if resident.has("daily_snapshot") and str(resident.dwell_id) == str(_concert.get("venue_id", "")):
		return
	if resident.wait > 0.0:
		resident.wait = maxf(0.0, float(resident.wait) - delta)
		return
	if not str(resident.get("dwell_id", "")).is_empty():
		# Foundation's Visit Building graph separates reaching, waiting and
		# filling the need. An edit never counts as finishing that sequence.
		var reached := str(resident.dwell_id)
		var service := str(resident.service_pending)
		# An empty shelf retains a completed visit until real bread arrives.
		if service == "bakery" and not state.serve_bread(reached, str(resident.home_id)): return
		if service == "bakery":resident.visual_bread=true
		if service == "bakery" and purchase_callback.is_valid(): purchase_callback.call(reached,str(resident.home_id))
		resident.dwell_id = ""
		resident.service_pending = ""
		if service == "venue":
			state.record_life_event("gatherings")
			if arrival_callback.is_valid(): arrival_callback.call("venue")
		_read_progress()
		var visit_started:=Time.get_ticks_usec() if profile_tick else 0
		var visiting: bool=service=="bakery" and not state.shares_chord(str(resident.home_id),reached,"pastoral_triad") and cafe.try_visit(resident,reached)
		if profile_tick:tick_profile.cafe_attempts+=Time.get_ticks_usec()-visit_started
		if visiting:return
		_depart(resident, reached)
		if resident.paused: return
	var route: Array[Vector3] = resident.route
	var index := int(resident.index)
	if index >= route.size():
		_arrive(resident)
		return
	if motion!=null:
		var old_leg:int=motion.leg
		var previous:Vector3=motion.point()
		resident.index=motion.advance(route,index,walk_step)
		if old_leg!=motion.leg:motion.watch_travel=travel.has_sites_between(Vector2(previous.x,previous.z),Vector2(motion.target.x,motion.target.z))
		var point:Vector3=motion.point()
		record_travel("resident/"+str(resident.home_id),Vector2(previous.x,previous.z),Vector2(point.x,point.z))
		if resident.has("daily_snapshot") and str(_concert.get("phase","idle"))=="gathering":_wake_passed_houses(Vector2(previous.x,previous.z),Vector2(point.x,point.z))
		elif delta>0.:motion.defer(self,walk_step/delta)
		return
	var node: Node3D = resident.node
	var point:=node.position
	var previous_position := Vector2(point.x,point.z)
	var target: Vector3 = route[index]
	var travel_leg:=Vector2i(index,travel.rebuilds)
	if resident.get("travel_leg",Vector2i(-1,-1))!=travel_leg or resident.get("travel_route")!=route:
		resident.travel_leg=travel_leg;resident.travel_route=route
		resident.travel_watch=travel.has_sites_between(previous_position,Vector2(target.x,target.z))
	var remaining := Vector2(point.x,point.z).distance_to(Vector2(target.x,target.z))
	if remaining <= walk_step:
		point = target
		resident.index = index + 1
	else:
		var direction := (target - point)/remaining
		point += direction * walk_step
		node.rotation.y = atan2(direction.x, direction.z)
	var height_started:=Time.get_ticks_usec() if profile_tick else 0
	point.y = state.street_height(Vector2(point.x,point.z))+0.10
	if profile_tick:tick_profile.height+=Time.get_ticks_usec()-height_started
	# Publish the complete transform once, after resolving the physical
	# street height; no transient route-interpolated Y reaches the scene.
	node.position=point
	if bool(resident.travel_watch):record_travel("resident/"+str(resident.home_id),previous_position,Vector2(point.x,point.z))
	if resident.has("daily_snapshot") and str(_concert.get("phase", "idle")) == "gathering":
		_wake_passed_houses(previous_position, Vector2(point.x,point.z))
	var body: Node3D = node.get_child(0)
	body.position.y = sin(time * 9.0 + float(resident.phase)) * 0.025

func _signature() -> Array:
	var result: Array = [preload("res://scripts/world/city_creation_bridge_plan.gd").era_signature(state),state.era_modifiers.duplicate(),state.harmony_journey.get("traditions",[]).duplicate()]
	if "arcade_market" in state.era_modifiers:
		for house:Dictionary in state.houses:result.append([house.id,str(house.get("style","classic")),state.house_era(house),house.cells.duplicate(true)])
	# Only finite-support edits which can change walking or an activity need
	# a new network. These are analytic AABBs: never prepare the height field
	# on the main thread merely to decide whether preparation is necessary.
	var regions: Array[Rect2] = []
	for road: Dictionary in state.roads:
		for index in range(1,road.points.size()):
			var a := Vector2(float(road.points[index-1][0]),float(road.points[index-1][1]))
			var b := Vector2(float(road.points[index][0]),float(road.points[index][1]))
			# Includes raw samples, .35m smoothing, bridge approaches, 2.4m
			# door anchors, protection transitions and grid interpolation.
			regions.append(Rect2(a,Vector2.ZERO).expand(b).grow(float(road.width)*0.5+4.0))
	for house: Dictionary in state.houses:
		var bounds := Rect2()
		var first := true
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var at := Vector2(float(house.origin[0])+int(cell.x)*1.8,float(house.origin[1])+int(cell.z)*1.8)
			var footprint:Rect2=Frame.bounds(Frame.footprint(house,cell))
			bounds=footprint if first else bounds.merge(footprint)
			first=false
		if not first:
			var role := str(house.get("role","residential"))
			var reach := 10.5 if role=="garden_cafe" else (8.0 if role in ["venue","symphony_hall"] else 3.5)
			regions.append(bounds.grow(reach))
	# Published courtyards and tea approaches may lie inside a wide room ring.
	for court: Dictionary in state._courtyard_plans_cache: regions.append(Rect2(court.bounds).grow(1.7))
	if cafe!=null:
		for plan: Dictionary in cafe.layouts.values():
			if plan.is_empty(): continue
			regions.append(Rect2(Vector2(plan.entrance),Vector2.ZERO).expand(Vector2(plan.center)).grow(4.2))
	var actors: Array = residents.duplicate()
	if bakery!=null: actors.append_array(bakery.workers)
	if workshop!=null: actors.append_array(workshop.workers)
	for actor: Dictionary in actors:
		var point: Vector3 = actor.node.position
		var previous := Vector2(point.x,point.z)
		regions.append(Rect2(previous,Vector2.ZERO).grow(1.5))
		var route: Array = actor.get("route",[])
		for index in range(clampi(int(actor.get("index",0)),0,route.size()),route.size()):
			var next := Vector2(route[index].x,route[index].z)
			regions.append(Rect2(previous,Vector2.ZERO).expand(next).grow(1.5))
			previous=next
	var affects := func(row: Dictionary, reach: float) -> bool:
		var bounds := Rect2(Vector2(float(row.points[0][0]),float(row.points[0][1])),Vector2.ZERO)
		for encoded: Array in row.points: bounds=bounds.expand(Vector2(float(encoded[0]),float(encoded[1])))
		bounds=bounds.grow(reach)
		for region: Rect2 in regions:
			if region.intersects(bounds,true): return true
		return false
	var terrain: Array = []
	for stroke: Dictionary in state.terrain_strokes:
		if affects.call(stroke,float(stroke.radius)+0.5): terrain.append(stroke.duplicate(true))
	result.append(terrain)
	for road: Dictionary in state.roads:
		result.append([road.points.duplicate(true), float(road.width),str(road.get("style","path")),road.get("roundabouts",[]).duplicate(true)])
	# Water geometry changes bridge elevations even when roads and entrances
	# are untouched. Names, IDs and vegetation never invalidate a journey.
	for water: Dictionary in state.waters:
		# Same 3.8m bank/hill halo as Terrain, plus one .5m grid neighbour.
		if affects.call(water,float(water.width)*0.5+4.3):
			result.append([str(water.kind), water.points.duplicate(true), float(water.width)])
	for house: Dictionary in state.houses:
		var entrances: Array = []
		for cell: Dictionary in house.cells:
			if int(cell.level) == 0:
				# A terrace can cover a neighboring door even without adding a room.
				entrances.append([int(cell.x), int(cell.z),str(cell.kind)])
		result.append([str(house.id), house.origin.duplicate(), str(house.get("role", "residential")),float(house.get("base_y",0.0)), entrances,Frame.yaw(house),Frame.Hinge.key(house)])
	return result

func _sync() -> void:
	_planning_walking_pending=true
	flush_citizens()
	flush_workers()
	cancel_budget_sync()
	last_revision = state.revision
	_read_progress()
	if _concert.get("landmark_movement",false) and not state.LandmarkMovement.validate(state,{"schema":state.PERSONALIZATION_SCHEMA,"houses":state.houses,"roads":state.roads,"journey_checkpoint":{"concert":_concert}}).ok:_end_concert(false)
	if _concert.get("grand_festival",false) and not GrandFestival.validate(state,{"schema":state.MODERN_SCHEMA,"houses":state.houses,"districts":state.districts,"era_unlocks":state.era_unlocks,"journey_checkpoint":{"concert":_concert}}).ok:_end_concert(false)
	var signature := _signature()
	if signature == _network_signature:
		state.prepare_regional_echo(_network);site_wishes.poll();return
	_network_signature = signature
	_build_graph()
	_sync_people()

func _sync_people() -> void:
	_visual_lod_cursor=0
	var started := Time.get_ticks_usec()
	tram.sync()
	travel.sync(state)
	var travel_sync_ms := float(Time.get_ticks_usec()-started)/1000.0
	started=Time.get_ticks_usec()
	_roles.clear()
	var old_by_home: Dictionary = {}
	for resident: Dictionary in residents: old_by_home[resident.home_id] = resident
	var next_residents: Array[Dictionary] = []
	var shops: Array[String] = []
	var venues: Array[String] = []
	var homes: Array[String] = []
	current_population = 0
	var concert_invalid := false
	for house: Dictionary in state.houses:
		var role := str(house.get("role", "residential"))
		_roles[str(house.id)] = "venue" if role=="symphony_hall" else role
		if role == "residential":
			current_population += 2
			homes.append(str(house.id))
		elif connected_houses.has(house.id):
			if role == "bakery": shops.append(str(house.id))
			elif role in ["venue","symphony_hall"]: venues.append(str(house.id))
	var roles_scan_ms := float(Time.get_ticks_usec()-started)/1000.0
	var stops_pair_routes_ms := 0.0
	var node_height_ms := 0.0
	var height_hits:=0;var height_misses:=0
	var stop_hits:=0;var stop_misses:=0
	var resume_ms := 0.0
	for home: String in homes:
		var serial := next_residents.size()
		var resident: Dictionary = old_by_home.get(home, {})
		var previous_stops: Array = resident.get("stops", [])
		var stops: Array[String] = [home]
		var stage_started := Time.get_ticks_usec()
		if _network.prepared_home_stops.has(home):
			stops.assign(_network.prepared_home_stops[home]);stop_hits+=1
		elif connected_houses.has(home):
			stop_misses+=1
			_append_reachable(stops, home, shops, serial, previous_stops)
			_append_reachable(stops, home, venues, serial, previous_stops)
		stops_pair_routes_ms+=float(Time.get_ticks_usec()-stage_started)/1000.0
		if resident.is_empty():
			var traveling := stops.size() >= 2
			var node := _person(serial)
			add_child(node)
			var destination := stops[1] if traveling else home
			var route: Array[Vector3] = []
			if traveling:
				node.position = positions[connected_houses[home]] + Vector3(0,0.10,0)
				route = _route(connected_houses[home],connected_houses[destination])
			resident = {"node":node,"home_id":home,"destination_id":destination,"stops":stops,"stop":1 if traveling else 0,"index":0,"route":route,"wait":serial*2.4 if traveling else 0.0,"phase":serial*1.7,"paused":not traveling,"dwell_id":"","service_pending":""}
			# A new home has a real neighbor even before shops or roads exist.
			# Services start journeys; they do not create or erase inhabitants.
			if not traveling: _pause_at_home(resident,true)
		else:
			old_by_home.erase(home)
			var node: Node3D = resident.node
			stage_started=Time.get_ticks_usec()
			var at:=Vector2(node.position.x,node.position.z)
			if _network.prepared_street_heights.has(at):
				node.position.y=float(_network.prepared_street_heights[at])+.10;height_hits+=1
			else:
				node.position.y=state.street_height(at)+.10;height_misses+=1
			node_height_ms+=float(Time.get_ticks_usec()-stage_started)/1000.0
			resident.stops = stops
			stage_started=Time.get_ticks_usec()
			if resident.has("cafe_visit"):
				pass
			elif resident.has("daily_snapshot"):
				if not _resume_concert_participant(resident): concert_invalid = true
			elif stops.size() < 2:
				_pause_at_home(resident)
			else:
				_resume(resident)
			resume_ms+=float(Time.get_ticks_usec()-stage_started)/1000.0
		resident.erase("travel_leg")
		next_residents.append(resident)
	for resident: Dictionary in old_by_home.values():
		if resident.has("daily_snapshot"): concert_invalid = true
		resident.node.queue_free()
	residents = next_residents
	_citizen_schedule.reset(residents)
	var residents_ms := float(Time.get_ticks_usec()-started)/1000.0
	budget_commit_stats = {"travel_sync_ms":travel_sync_ms,"travel_sites":travel.sites.size(),"residents_ms":residents_ms,
		"roles_scan_ms":roles_scan_ms,"stops_pair_routes_ms":stops_pair_routes_ms,"prepared_stop_hits":stop_hits,"prepared_stop_misses":stop_misses,"node_height_ms":node_height_ms,"prepared_height_hits":height_hits,"prepared_height_misses":height_misses,"resume_ms":resume_ms,
		"residents_other_ms":residents_ms-roles_scan_ms-stops_pair_routes_ms-node_height_ms-resume_ms}
	started = Time.get_ticks_usec()
	cafe.sync()
	budget_commit_stats.cafe_ms = (Time.get_ticks_usec()-started)/1000.0
	started = Time.get_ticks_usec()
	if _concert.get("grand_festival",false) and not GrandFestival.validate(state,{"schema":state.MODERN_SCHEMA,"houses":state.houses,"districts":state.districts,"era_unlocks":state.era_unlocks,"journey_checkpoint":{"concert":_concert}}).ok:concert_invalid=true
	if _concert.get("landmark_movement",false) and not state.LandmarkMovement.validate(state,{"schema":state.PERSONALIZATION_SCHEMA,"houses":state.houses,"roads":state.roads,"journey_checkpoint":{"concert":_concert}}).ok:concert_invalid=true
	if not _concert.is_empty() and (concert_invalid or not state.can_host_concert(str(_concert.venue_id))):
		_end_concert(false)
	elif not _relay.is_empty() and not ConcertRelay.remaining_reachable(self,_relay):
		# A removed or disconnected later stop ends the remaining itinerary;
		# the valid performance already in progress continues normally.
		_relay.clear()
	workshop.prune()
	bakery.sync()
	budget_commit_stats.bakery_ms = (Time.get_ticks_usec()-started)/1000.0
	started = Time.get_ticks_usec()
	workshop.sync()
	budget_commit_stats.workshop_ms = (Time.get_ticks_usec()-started)/1000.0
	site_wishes.poll()
	_capture_published_surface()

func _refresh_quality(first:int=0,count:int=-1) -> Array[Dictionary]:
	var workplaces := {}
	for worker: Dictionary in bakery.workers: workplaces[str(worker.bakery_id)]=str(worker.home_id)
	for worker: Dictionary in workshop.workers: workplaces[str(worker.workshop_id)]=str(worker.home_id)
	var rules_started:=Time.get_ticks_usec() if profile_tick else 0
	var changes: Array[Dictionary]=state.refresh_quality(connected_houses,workplaces,first,count)
	if profile_tick:tick_profile.quality_rules+=Time.get_ticks_usec()-rules_started
	if not changes.is_empty():
		var homes: Dictionary={}
		for change: Dictionary in changes:homes[str(change.house_id)]=true
		for resident: Dictionary in residents:
			var motion: RefCounted=resident.get("offscreen_motion")
			if motion==null or not motion.deferred or not homes.has(str(resident.home_id)):continue
			# A newly earned walking boost starts now, including on a sampled
			# hidden leg. Settle the old speed before replacing its forecast.
			motion.settle()
			_citizen_schedule.wake(resident)
			motion.defer(self,.83*state.walking_multiplier(str(resident.home_id)))
	if not changes.is_empty() and quality_callback.is_valid():
		var callback_started:=Time.get_ticks_usec() if profile_tick else 0
		quality_callback.call(changes)
		if profile_tick:tick_profile.quality_callback+=Time.get_ticks_usec()-callback_started
	return changes

func bakery_status(id: String) -> Dictionary:
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	return bakery.status(id)

func workshop_status(id: String) -> Dictionary:
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	return workshop.status(id)

func cafe_status(id: String) -> Dictionary:
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	return cafe.status(id)

func cafe_view() -> Dictionary:
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	return cafe.view()

func _append_reachable(stops: Array[String], home: String, candidates: Array[String], serial: int, previous_stops: Array = []) -> void:
	# Deleting another home shifts serial numbers, not an existing household's
	# legal shopping destination or the remaining time of an actual visit.
	for candidate: String in previous_stops:
		if candidates.has(candidate) and not _route(connected_houses[home], connected_houses[candidate]).is_empty():
			stops.append(candidate)
			return
	for offset in range(candidates.size()):
		var candidate := candidates[(serial + offset) % candidates.size()]
		if not _route(connected_houses[home], connected_houses[candidate]).is_empty():
			stops.append(candidate)
			return

func _pause_at_home(resident: Dictionary, place_at_door: bool=false) -> void:
	flush_citizen(resident)
	resident.paused = true
	resident.wait = 0.0
	resident.dwell_id = ""
	resident.service_pending = ""
	var empty_route: Array[Vector3] = []
	resident.route = empty_route
	resident.index = 0
	resident.destination_id = resident.home_id
	# A missing route pauses the person where the edit stranded them. Only a
	# newly spawned household is placed at its first door.
	if not place_at_door: return
	for house: Dictionary in state.houses:
		if str(house.id) != str(resident.home_id): continue
		var doors: Array[Dictionary]=state.house_entrances(str(house.id))
		if doors.is_empty():
			# A fully enclosed new home has no exterior spawn point. The person
			# stays indoors until a real exit and street connection exist.
			resident.node.position=Vector3(float(house.origin[0]),float(house.get("base_y",0.0))+0.1,float(house.origin[1]))
			resident.node.visible=false
			return
		var entrance := Vector2(float(house.origin[0]),float(house.origin[1])+1.52) if doors.is_empty() else Vector2(doors[0].at)
		if connected_houses.has(house.id):
			resident.node.position = positions[connected_houses[house.id]]+Vector3(0,0.10,0)
		else:
			resident.node.position = Vector3(entrance.x,state.street_height(entrance)+0.10,entrance.y)

func greet_house(house_id:String)->int:
	var index:int=state._house_index(house_id)
	if index<0:return 0
	var house:Dictionary=state.houses[index]
	return greetings.greet(self,Vector2(house.origin[0],house.origin[1]))

func _resume(resident: Dictionary) -> void:
	if not resident.node.visible:
		if not connected_houses.has(resident.home_id): return
		resident.node.position=positions[connected_houses[resident.home_id]]+Vector3(0,0.10,0)
		resident.node.visible=true
	var stops: Array[String] = resident.stops
	var destination := str(resident.destination_id)
	if resident.paused or not stops.has(destination):
		destination = stops[1]
		resident.dwell_id = ""
		resident.service_pending = ""
		resident.wait = 0.0
	resident.destination_id = destination
	resident.stop = stops.find(destination)
	# A resident already dwelling may keep that exact visit only while the
	# same entrance and use survive. Otherwise the pending event is cancelled.
	if not str(resident.dwell_id).is_empty():
		var target: Vector3 = positions[connected_houses[destination]]+Vector3(0,0.10,0)
		if str(_roles[destination]) == str(resident.service_pending) and resident.node.position.distance_to(target) < 0.15:
			resident.paused = false
			return
		resident.dwell_id = ""
		resident.service_pending = ""
		resident.wait = 0.0
	var route := _route_from_position(resident.node.position, connected_houses[destination])
	if route.is_empty():
		_pause_at_home(resident)
		return
	resident.route = route
	resident.index = 0
	resident.paused = false

func _route_from_position(point: Vector3, finish: String) -> Array[Vector3]:
	_network.graph = graph
	_network.positions = positions
	var pkey: String = _network._key(Vector2(point.x,point.z))
	var rows: Dictionary = _network.prepared_positions.get(pkey,{})
	var best: Array[Vector3] = []
	if rows.has(finish):
		best.assign(rows[finish])
		_position_cache_stats.planar_hits=int(_position_cache_stats.get("planar_hits",0))+1
	else:
		var started := Time.get_ticks_usec()
		best = _network._route_from_position(point,finish)
		_position_cache_stats.street_misses=int(_position_cache_stats.get("street_misses",0))+1
		_position_cache_stats.street_miss_ms=float(_position_cache_stats.get("street_miss_ms",0.0))+float(Time.get_ticks_usec()-started)/1000.0
	if best.is_empty() and cafe != null: best = cafe.street_attachment(point,finish)
	if best.is_empty():
		var exterior: Dictionary = _network.prepared_exterior.get(pkey,{})
		if exterior.has(finish):
			best.assign(exterior[finish])
			_position_cache_stats.exterior_hits=int(_position_cache_stats.get("exterior_hits",0))+1
		else:
			var started := Time.get_ticks_usec()
			best = _network._exterior_route_from_position(point,finish)
			_position_cache_stats.exterior_misses=int(_position_cache_stats.get("exterior_misses",0))+1
			_position_cache_stats.exterior_miss_ms=float(_position_cache_stats.get("exterior_miss_ms",0.0))+float(Time.get_ticks_usec()-started)/1000.0
	return best

func _attachment_crosses_wall(a: Vector2,b: Vector2) -> bool:
	return _network._attachment_crosses_wall(a,b)

func _arrive(resident: Dictionary) -> void:
	flush_citizen(resident)
	var reached := str(resident.destination_id)
	if not connected_houses.has(reached):
		_pause_at_home(resident)
		return
	var target: Vector3 = positions[connected_houses[reached]]+Vector3(0,0.10,0)
	if resident.node.position.distance_to(target) > 0.15:
		_pause_at_home(resident)
		return
	var role := str(_roles[reached])
	if reached==str(resident.home_id):resident.erase("visual_bread")
	resident.dwell_id = reached
	if resident.has("daily_snapshot"):
		resident.service_pending = "concert"
		resident.wait = 0.0
		_concert_formation(resident)
		if arrival_callback.is_valid(): arrival_callback.call("concert")
		return
	resident.service_pending = role
	resident.wait = 5.0 if role == "venue" else 3.0

func _depart(resident: Dictionary, reached: String) -> void:
	if str(_roles.get(reached,""))=="bakery" and state.shares_chord(str(resident.home_id),reached,"pastoral_triad") and state.has_cafe_credit(str(resident.home_id)):
		if cafe.try_visit(resident,reached):return
		if cafe.can_wait_after_bread(resident,reached):
			# Bread is already paid for. Reuse an ordinary saved doorstep dwell
			# with no pending service so retries cannot buy another loaf.
			resident.destination_id=reached;resident.dwell_id=reached;resident.service_pending="";resident.wait=1.
			return
	# Retry unspent invitations at real daily trip boundaries, never per frame.
	var visit_started:=Time.get_ticks_usec() if profile_tick else 0
	var visiting: bool=str(_roles.get(reached,""))!="bakery" and cafe.try_visit(resident,reached)
	if profile_tick:tick_profile.cafe_attempts+=Time.get_ticks_usec()-visit_started
	if visiting:return
	var stops: Array[String] = resident.stops
	var next := (stops.find(reached)+1) % stops.size()
	resident.destination_id = stops[next]
	resident.stop = next
	resident.route = _route(connected_houses[reached],connected_houses[stops[next]])
	resident.index = 0
	if resident.route.is_empty(): _pause_at_home(resident)

func relay_candidates(venue_id: String) -> Array[String]:
	if _budget_hold or budget_sync_pending(): return []
	if state.revision!=last_revision: _sync()
	return ConcertRelay.candidates(self,venue_id)

func relay_status() -> Dictionary:
	var venues: Array[String] = []
	if not _relay.is_empty(): venues.assign(_relay.venues)
	var active := not _relay.is_empty()
	var index := int(_relay.index) if active else 0
	return {"active":active,"index":index,"total":venues.size(),"venue_ids":venues,"venue_id":venues[index] if active else ""}

func start_relay(venue_id: String) -> Dictionary:
	if _budget_hold or budget_sync_pending(): return {"ok":false,"message":"街道正在接合，完成后再邀请。"}
	if state.revision!=last_revision: _sync()
	if not _concert.is_empty(): return {"ok":false,"message":"这一场结束后，再邀请庆典接力。"}
	var venues := relay_candidates(venue_id)
	if venues.size()<2: return {"ok":false,"message":"先用小路连起至少两座演奏庭。"}
	var result := invite_concert(venue_id)
	if not result.ok: return result
	_relay={"venues":venues,"index":0,"concerts_before":int(state.life_progress.concerts)}
	return {"ok":true,"message":"庆典从这里出发，沿小路在 %d 座演奏庭依次奏响。" % venues.size()}

func invite_concert(venue_id: String, automatic: bool = false, landmark: bool = false) -> Dictionary:
	flush_citizens()
	if _budget_hold or budget_sync_pending(): return {"ok":false,"message":"街道正在接合，完成后再邀请。"}
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	if not _concert.is_empty(): return {"ok":false,"message":"街坊正在赴约，这场结束后再邀请。"}
	if not state.can_host_concert(venue_id) or not connected_houses.has(venue_id):
		return {"ok":false,"message":"先为音乐屋接上一条能走到的路。"}
	var candidates: Array[Dictionary] = []
	var routes: Array = []
	var venue_house: Dictionary=state.houses[state._house_index(venue_id)]
	var venue_at:=Vector2(float(venue_house.origin[0]),float(venue_house.origin[1]))
	var coverage: float=INF if landmark else state.concert_radius(venue_id)
	for resident: Dictionary in residents:
		if resident.paused or (automatic and resident.has("cafe_visit")): continue
		var home: Dictionary=state.houses[state._house_index(str(resident.home_id))]
		if Vector2(float(home.origin[0]),float(home.origin[1])).distance_to(venue_at)>coverage and not tram.direct(str(home.id),venue_id):continue
		var route := _route_from_position(resident.node.position, str(connected_houses[venue_id]))
		if route.is_empty(): continue
		candidates.append(resident)
		routes.append(route)
	if candidates.is_empty(): return {"ok":false,"message":"这座音乐屋还没有街坊能步行抵达。"}
	var sponsors: Array[String] = []
	if automatic:
		for resident: Dictionary in candidates:
			if state.has_matinee_credit(str(resident.home_id)): sponsors.append(str(resident.home_id))
		if not state.reserve_matinee(venue_id, sponsors): return {"ok":false,"message":"等待至少两位街坊的新灵感。"}
	else: cafe.cancel_all()
	var participants: Array[String] = []
	for index in range(candidates.size()):
		var resident: Dictionary = candidates[index]
		resident.daily_snapshot = _resident_checkpoint(resident)
		resident.destination_id = venue_id
		resident.dwell_id = ""
		resident.service_pending = ""
		resident.wait = 0.0
		resident.route = routes[index]
		resident.index = 0
		participants.append(str(resident.home_id))
	_concert = {"phase":"gathering","venue_id":venue_id,"participants":participants,"elapsed":0.0,"duration":CONCERT_DURATION}
	_concert.source = "auto" if automatic else "manual"
	if automatic: _concert.sponsors = sponsors
	if not automatic and not landmark and _relay.is_empty() and state.houses[state._house_index(venue_id)].get("signature","")=="music_academy":
		var venues:=ConcertRelay.candidates(self,venue_id)
		if venues.size()>1:_relay={"venues":venues,"index":0,"concerts_before":int(state.life_progress.concerts)}
	_wake_house_ids.clear()
	_refresh_resonance_membership()
	if automatic and concert_callback.is_valid(): concert_callback.call("invited", venue_id)
	return {"ok":true,"message":"已邀请 %d 位街坊沿路来听演出。" % participants.size()}

func invite_landmark_movement(venue_id:String)->Dictionary:
	var index:int=state._house_index(venue_id)
	if index<0 or state.houses[index].get("signature","") not in state.Signatures.IDS:return {"ok":false,"message":"传世乐章由特殊地标指挥。"}
	var sequence:Array[String]=state.LandmarkMovement.order(state)
	if sequence.is_empty():return {"ok":false,"message":"先让三座邻屋聚成一片合唱街巷。"}
	var result:=invite_concert(venue_id,false,true)
	if not result.ok:return result
	_concert.landmark_movement=true;_concert.movement_order=sequence
	_resonance_signature.clear();_refresh_resonance_membership()
	return {"ok":true,"message":"传世共鸣乐章 · 街坊到齐后，全城聚落接力24秒。"}

func invite_conductor_movement(venue_id:String,sequence:Array[String],stroke:Array[Vector2])->Dictionary:
	var snapshot:Dictionary=state.snapshot()
	var path_rows:Array=[]
	for at:Vector2 in stroke:path_rows.append([at.x,at.y])
	snapshot.schema=maxi(int(snapshot.schema),state.PERSONALIZATION_SCHEMA)
	snapshot.journey_checkpoint={"concert":{"landmark_movement":true,"source":"manual","duration":24.,"venue_id":venue_id,"movement_order":sequence,"conductor":true,"conductor_path":path_rows}}
	var valid:Dictionary=state.LandmarkMovement.validate(state,snapshot)
	if not valid.ok:return valid
	if state.revision!=last_revision:_sync()
	if ConductorParade.street_route(self,venue_id,sequence).size()<2:return {"ok":false,"message":"先把手绘经过的聚落与地标接到相通的街道。"}
	var result:=invite_concert(venue_id,false,true)
	if not result.ok:return result
	_concert.landmark_movement=true;_concert.movement_order=sequence.duplicate();_concert.conductor=true;_concert.conductor_path=path_rows
	_resonance_signature.clear();_refresh_resonance_membership()
	return {"ok":true,"message":"手绘乐章已备好 · 街坊到齐后提灯巡游，依次传过%d处声部。"%sequence.size()}

func invite_grand_festival(venue_id:String)->Dictionary:
	if state.revision!=last_revision and not budget_sync_pending():_sync()
	var index:int=state._house_index(venue_id)
	if index<0 or state.houses[index].role!="symphony_hall" or not connected_houses.has(venue_id):return {"ok":false,"message":"先为交响音乐厅接上街道。"}
	var cast:Dictionary=GrandFestival.cast(self,venue_id)
	if cast.size()!=4:return {"ok":false,"message":"沿街道连起田园、文艺复兴、钟表与现代四种风貌，便能全城合奏。"}
	var result:=invite_concert(venue_id)
	if not result.ok:return result
	_concert.grand_festival=true;_concert.era_cast=cast
	return {"ok":true,"message":"四时代交响盛典 · %d位街坊沿路赴约，到齐后接力24秒。"%_concert.participants.size()}

## Whole-neighborhood membership is derived from actual positions/districts,
## independent of which residents can reach the invitation. Rebuild only when
## these values change; the walking hot path uses a small spatial bucket index.
func _refresh_resonance_membership() -> void:
	var signature: Array = [str(_concert.get("venue_id", "")), _concert.get("participants", []).duplicate()]
	for house: Dictionary in state.houses: signature.append([str(house.id), house.origin.duplicate()])
	for district: Dictionary in state.districts: signature.append([str(district.id), district.points.duplicate(true), float(district.width)])
	if signature == _resonance_signature: return
	_resonance_signature = signature
	resonance_membership_rebuilds += 1
	_chorus_house_ids.clear()
	_ambient_house_ids.clear()
	_resonance_bins.clear()
	var venue_id := str(_concert.get("venue_id", ""))
	var venue_origin := Vector2.ZERO
	var has_venue := false
	for house: Dictionary in state.houses:
		if str(house.id) == venue_id:
			venue_origin = Vector2(float(house.origin[0]), float(house.origin[1]))
			has_venue = true
	var venue_district := str(state.district_at(venue_origin).get("id", "")) if has_venue else ""
	var existing := {}
	var natural:Dictionary=state.natural_clusters() if _concert.get("landmark_movement",false) else {}
	for house: Dictionary in state.houses:
		var id := str(house.id)
		existing[id] = true
		var at := Vector2(float(house.origin[0]), float(house.origin[1]))
		var bucket := Vector2i(floori(at.x / 2.5), floori(at.y / 2.5))
		if not _resonance_bins.has(bucket): _resonance_bins[bucket] = []
		_resonance_bins[bucket].append({"id":id,"at":at})
		if not has_venue: continue
		var distance := at.distance_to(venue_origin)
		if (_concert.get("landmark_movement",false) and int(natural[id].size)>=3) or id == venue_id or _concert.get("participants", []).has(id) or distance <= state.concert_radius(venue_id) or (not venue_district.is_empty() and str(state.district_at(at).get("id", "")) == venue_district):
			_chorus_house_ids.append(id)
		elif distance <= state.concert_radius(venue_id)+10.0:
			_ambient_house_ids.append(id)
	for id in _wake_house_ids.keys():
		if not existing.has(id): _wake_house_ids.erase(id)

func _wake_passed_houses(from: Vector2, to: Vector2) -> void:
	var low := Vector2i(floori((minf(from.x, to.x) - 2.5) / 2.5), floori((minf(from.y, to.y) - 2.5) / 2.5))
	var high := Vector2i(floori((maxf(from.x, to.x) + 2.5) / 2.5), floori((maxf(from.y, to.y) + 2.5) / 2.5))
	for x in range(low.x, high.x + 1):
		for z in range(low.y, high.y + 1):
			for house: Dictionary in _resonance_bins.get(Vector2i(x, z), []):
				if house.at.distance_to(Geometry2D.get_closest_point_to_segment(house.at, from, to)) <= 2.5:
					_wake_house_ids[house.id] = true

func concert_view() -> Dictionary:
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	_refresh_resonance_membership()
	var result := concert_status()
	result.completed_concerts = int(state.life_progress.concerts)
	result.participants = _concert.get("participants", []).duplicate()
	result.chorus_house_ids = _chorus_house_ids.duplicate()
	result.ambient_house_ids = _ambient_house_ids.duplicate()
	result.wake_house_ids = _wake_house_ids.keys()
	result.afterglow = state.resonance_afterglow.duplicate()
	result.afterglow_house_ids = state.resonance_afterglow.keys()
	result.festival_ready_ids = state.festival_ready_venues()
	if _concert.get("grand_festival",false):result.grand_festival=true;result.era_cast=_concert.era_cast.duplicate()
	if _concert.get("landmark_movement",false):result.landmark_movement=true;result.movement_order=_concert.movement_order.duplicate()
	if _concert.get("conductor",false):result.conductor=true;result.conductor_path=_concert.conductor_path.duplicate(true)
	return result

func finale_view()->Dictionary:
	if _finale.is_empty():return {}
	var elapsed:=maxf(0.,time-float(_finale.started_at))
	if elapsed>=12.:return {}
	var result:=_finale.duplicate(true)
	result.elapsed=elapsed;result.strength=1.-smoothstep(9.,12.,elapsed)
	return result

func matinee_status(venue_id: String) -> Dictionary:
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	return matinee.status(venue_id)

func concert_status() -> Dictionary:
	if _concert.is_empty(): return {"phase":"idle","venue_id":"","invited":0,"arrived":0,"elapsed":0.0,"duration":CONCERT_DURATION}
	var arrived := 0
	if _concert.get("conductor",false) and _concert.phase=="playing":arrived=_concert.participants.size()
	for resident: Dictionary in residents:
		if not (_concert.get("conductor",false) and _concert.phase=="playing") and _concert.participants.has(str(resident.home_id)) and str(resident.dwell_id) == str(_concert.venue_id): arrived += 1
	return {"phase":str(_concert.phase),"venue_id":str(_concert.venue_id),"invited":_concert.participants.size(),"arrived":arrived,"elapsed":float(_concert.elapsed),"duration":CONCERT_DURATION,"source":str(_concert.get("source", "manual")),"sponsors":_concert.get("sponsors", []).duplicate()}

func cancel_concert() -> Dictionary:
	_relay.clear()
	if _concert.is_empty(): return {"ok":false,"message":"当前没有街坊演出。"}
	_end_concert(false)
	return {"ok":true,"message":"演出已结束，街坊继续自己的日常。"}

func _resume_concert_participant(resident: Dictionary) -> bool:
	var venue := str(_concert.get("venue_id", ""))
	if not state.can_host_concert(venue) or not connected_houses.has(venue) or not connected_houses.has(resident.home_id): return false
	# A participant's home and the venue must still belong to one network.
	if _route(str(connected_houses[resident.home_id]), str(connected_houses[venue])).is_empty(): return false
	if conductor_parade.owns(self,resident):return conductor_parade.resume(self,resident)
	var target: Vector3 = positions[connected_houses[venue]] + Vector3(0,0.10,0)
	if str(resident.dwell_id) == venue:
		return resident.node.position.distance_to(target) < 0.15
	var route := _route_from_position(resident.node.position, str(connected_houses[venue]))
	if route.is_empty(): return false
	resident.route = route
	resident.index = 0
	return true

func _end_concert(completed: bool, completion_remainder: float = 0.0) -> void:
	flush_citizens()
	if _concert.is_empty(): return
	last_completed_movement={}
	var venue := str(_concert.venue_id)
	if completed and _concert.get("source", "manual") == "auto":
		completed = state.complete_matinee(venue, _concert.get("sponsors", []))
	state.rest_after_concert(venue)
	if completed:
		_refresh_resonance_membership()
		var duration: float = state.record_concert_completion(venue)
		if _concert.get("landmark_movement",false) or _concert.get("grand_festival",false):
			var eras:Array[String]=[]
			for id:String in _chorus_house_ids:
				var index:int=state._house_index(id)
				if index<0:continue
				var era:String=state.house_era(state.houses[index])
				if era not in eras:eras.append(era)
			last_completed_movement={"signature":str(state.houses[state._house_index(venue)].get("signature","")),"duration":24.,"houses":state.houses.size(),"eras":eras,"concerts":int(state.life_progress.concerts)}
		var districts := {}
		for id: String in _concert.participants:
			var district: Dictionary=state.district_for_house(id)
			if not district.is_empty(): districts[str(district.id)]=true
		var venue_district: Dictionary=state.district_for_house(venue)
		if not venue_district.is_empty(): districts[str(venue_district.id)]=true
		state.record_concert_participants(venue,_concert.participants,not _relay.is_empty() or districts.size()>1 or bool(_concert.get("grand_festival",false)))
		state.grant_concert_afterglow(venue,_chorus_house_ids, duration, completion_remainder)
		var grand:bool=(bool(_concert.get("grand_festival",false)) or bool(_concert.get("landmark_movement",false))) and state.houses[state._house_index(venue)].get("signature","")=="floating_amphitheater"
		var checked:Array[String]=[]
		if grand:
			for house:Dictionary in state.houses:
				if state.afterglow_remaining(str(house.id))>0. and state.level_tier(str(house.id))<5:checked.append(str(house.id))
		var changes:=_refresh_quality()
		for change:Dictionary in changes:
			if int(change.to)==5 and str(change.house_id) in _chorus_house_ids:state.grant_concert_afterglow(venue,[str(change.house_id)],duration,completion_remainder)
		if grand:
			var house:Dictionary=state.houses[state._house_index(venue)];var plan:Dictionary=state.AmphitheaterPlan.for_house(state,house)
			_finale={"venue_id":venue,"origin":plan.stage,"started_at":time-completion_remainder,"checked_house_ids":checked,"changes":changes,"finale":true,"active":true,"audible":true}
	var next_venue := ""
	if completed and not _relay.is_empty() and ConcertRelay.remaining_reachable(self,_relay):
		_relay.index=int(_relay.index)+1
		if int(_relay.index)<_relay.venues.size(): next_venue=str(_relay.venues[int(_relay.index)])
		else: _relay.clear()
	else: _relay.clear()
	_concert.clear()
	conductor_parade.clear()
	_wake_house_ids.clear()
	for resident: Dictionary in residents:
		if not resident.has("daily_snapshot"): continue
		var daily: Dictionary = resident.daily_snapshot
		resident.erase("daily_snapshot")
		var body: Node3D = resident.node.get_child(0)
		body.position = Vector3.ZERO
		var original_stops := _saved_stops(str(resident.home_id), daily.get("stops", null))
		if original_stops.size() > 1: resident.stops = original_stops
		resident.destination_id = str(daily.get("destination_id", resident.home_id))
		resident.dwell_id = ""
		resident.service_pending = ""
		resident.wait = 0.0
		resident.paused = false
		if resident.stops.size() < 2: _pause_at_home(resident)
		else: _resume(resident)
	# No await/callback between settlement and the next invitation: any
	# checkpoint captured by finished sees the advanced, unsettled next stop.
	if not next_venue.is_empty():
		var invitation := invite_concert(next_venue)
		if not invitation.ok: _relay.clear()
	if concert_callback.is_valid(): concert_callback.call("finished" if completed else "cancelled", venue)

func _concert_formation(resident: Dictionary) -> void:
	var index: int = _concert.get("participants", []).find(str(resident.home_id))
	if index < 0: return
	var body: Node3D = resident.node.get_child(0)
	# Visual offsets leave the logical arrival on the real venue entrance.
	body.position.x = float(index % 3 - 1) * 0.24
	body.position.z = floorf(float(index) / 3.0) * 0.24

func _resident_checkpoint(resident: Dictionary) -> Dictionary:
	var node: Node3D = resident.node
	var result := {"home_id":str(resident.home_id),"position":[node.position.x,node.position.z],"yaw":node.rotation.y,"destination_id":str(resident.destination_id),"dwell_id":str(resident.dwell_id),"service_pending":str(resident.service_pending),"wait":float(resident.wait),"paused":bool(resident.paused),"phase":float(resident.phase),"stops":resident.stops.duplicate()}
	preload("res://scripts/world/city_creation_balcony_visits.gd").checkpoint(resident,result)
	preload("res://scripts/world/city_creation_bench_visits.gd").checkpoint(resident,result)
	if resident.has("daily_snapshot"): result.daily_snapshot = resident.daily_snapshot.duplicate(true)
	if resident.has("cafe_visit"): result.cafe_visit = resident.cafe_visit.duplicate(true)
	return result

func checkpoint() -> Dictionary:
	flush_citizens()
	# Manual save may follow an edit before the next process frame.
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	var people: Array[Dictionary] = []
	for resident: Dictionary in residents: people.append(_resident_checkpoint(resident))
	var concert := _concert.duplicate(true)
	if not concert.is_empty(): concert.wake_house_ids = _wake_house_ids.keys()
	var result := {"schema":1,"residents":people,"concert":concert,"bakery_workers":bakery.checkpoint(),"workshop_workers":workshop.checkpoint(),"cafe_groups":cafe.checkpoint()}
	if not _relay.is_empty():
		result.schema=2
		result.relay=_relay.duplicate(true)
	return result

func restore_checkpoint(data: Dictionary) -> void:
	flush_citizens()
	_relay.clear()
	travel.clear_observations()
	if state.revision != last_revision and not budget_sync_pending(): _sync()
	if (data.get("schema")!=1 and data.get("schema")!=2) or not data.get("residents", null) is Array: return
	var saved_concert: Dictionary = data.get("concert", {}) if data.get("concert", {}) is Dictionary else {}
	var saved_relay := ConcertRelay.from_checkpoint(data,saved_concert,int(state.life_progress.concerts))
	var phase := str(saved_concert.get("phase", "idle"))
	var venue := str(saved_concert.get("venue_id", ""))
	var elapsed_value: Variant = saved_concert.get("elapsed", -1.0)
	var saved_elapsed := float(elapsed_value) if elapsed_value is float or elapsed_value is int else -1.0
	var eligible_concert: bool = phase in ["gathering", "playing"] and state.can_host_concert(venue) and connected_houses.has(venue) and is_finite(saved_elapsed) and saved_elapsed >= 0.0 and saved_elapsed < CONCERT_DURATION and saved_concert.get("participants", null) is Array and not saved_concert.get("participants", []).is_empty()
	if (data.get("schema")==2 and saved_relay.is_empty()) or (data.get("schema")==1 and data.has("relay")): eligible_concert=false
	if saved_concert.get("source", "manual") not in ["manual", "auto"]: eligible_concert = false
	if saved_concert.get("source", "manual") == "manual" and (saved_concert.has("sponsors") or not state.matinee_pending.is_empty()): eligible_concert = false
	if eligible_concert and saved_concert.get("source", "manual") == "auto":
		eligible_concert = saved_concert.get("sponsors", []) == state.matinee_pending.get("sponsors", []) and state.matinee_pending.get("venue_id", "") == venue and saved_concert.get("sponsors", []).size() >= 2
		var authorized := {}
		for home in saved_concert.get("sponsors", []):
			if authorized.has(home) or not state.has_matinee_credit(str(home)) or not saved_concert.participants.has(home): eligible_concert = false
			authorized[home] = true
	if not eligible_concert and not state.matinee_pending.is_empty(): state.rest_after_concert(str(state.matinee_pending.venue_id))
	var restored: Dictionary = {}
	for entry: Variant in data.residents:
		if not entry is Dictionary: continue
		if entry.has("cafe_visit"): continue
		var home := str(entry.get("home_id", ""))
		if restored.has(home): continue
		if bool(entry.get("paused", false)) and _restore_paused_home(home, entry):
			restored[home] = true
			continue
		for resident: Dictionary in residents:
			if str(resident.home_id) != home: continue
			var visiting_concert: bool = eligible_concert and saved_concert.participants.has(home) and str(entry.get("destination_id", "")) == venue and entry.get("daily_snapshot", null) is Dictionary
			var semantic: Dictionary = entry
			if not visiting_concert and entry.get("daily_snapshot", null) is Dictionary:
				# A stale invitation may not masquerade as an ordinary venue visit.
				semantic = entry.daily_snapshot.duplicate(true)
				semantic.position = entry.get("position", [])
				semantic.yaw = entry.get("yaw", 0.0)
				semantic.dwell_id = ""
				semantic.service_pending = ""
				semantic.wait = 0.0
			if not _restore_resident(resident, semantic, visiting_concert): continue
			if visiting_concert: resident.daily_snapshot = entry.daily_snapshot.duplicate(true)
			restored[home] = true
	if eligible_concert:
		_concert = saved_concert.duplicate(true)
		_wake_house_ids.clear()
		for id in saved_concert.get("wake_house_ids", []):
			if _roles.has(str(id)): _wake_house_ids[str(id)] = true
		_concert.erase("wake_house_ids")
		_concert.duration = CONCERT_DURATION
		var unique: Dictionary = {}
		var valid := true
		for home: Variant in _concert.participants:
			if not home is String or unique.has(home) or not restored.has(home):
				valid = false
				continue
			unique[home] = true
			for resident: Dictionary in residents:
				if str(resident.home_id) == str(home):
					if not resident.has("daily_snapshot") or not _resume_concert_participant(resident): valid = false
					elif str(resident.dwell_id) == venue: _concert_formation(resident)
		if phase == "playing" and int(concert_status().arrived) != int(concert_status().invited): valid = false
		if not valid: _end_concert(false)
		elif not saved_relay.is_empty() and ConcertRelay.remaining_reachable(self,saved_relay): _relay=saved_relay
	cafe.restore(data)
	bakery.clear()
	workshop.clear()
	workshop.restore(data.get("workshop_workers", []))
	bakery.restore(data.get("bakery_workers", []))
	workshop.sync()
	_citizen_schedule.reset(residents)

func _restore_paused_home(home: String, saved: Dictionary) -> bool:
	if str(_roles.get(home, "")) != "residential" or str(saved.get("destination_id", "")) != home or not str(saved.get("dwell_id", "")).is_empty() or not str(saved.get("service_pending", "")).is_empty() or saved.has("daily_snapshot"): return false
	if connected_houses.has(home):
		for destination: String in _roles:
			if _roles[destination] in ["bakery", "venue"] and connected_houses.has(destination) and not _route(str(connected_houses[home]), str(connected_houses[destination])).is_empty(): return false
	var resident: Dictionary = {}
	for candidate: Dictionary in residents:
		if str(candidate.home_id) == home: resident = candidate
	if resident.is_empty():
		var node := _person(residents.size())
		add_child(node)
		var route: Array[Vector3] = []
		var stops: Array[String] = [home]
		resident = {"node":node,"home_id":home,"destination_id":home,"stops":stops,"stop":0,"index":0,"route":route,"wait":0.0,"phase":residents.size()*1.7,"paused":true,"dwell_id":"","service_pending":""}
		residents.append(resident)
	_pause_at_home(resident)
	return true

func _restore_resident(resident: Dictionary, saved: Dictionary, concert: bool) -> bool:
	var values: Variant = saved.get("position", null)
	if not values is Array or values.size() != 2 or not (values[0] is float or values[0] is int) or not (values[1] is float or values[1] is int): return false
	for key: String in ["yaw", "wait", "phase"]:
		if not saved.get(key, 0.0) is float and not saved.get(key, 0.0) is int: return false
	var planar := Vector2(float(values[0]), float(values[1]))
	var yaw := float(saved.get("yaw", 0.0))
	var wait := float(saved.get("wait", 0.0))
	var phase := float(saved.get("phase", 0.0))
	if not is_finite(planar.x) or not is_finite(planar.y) or not is_finite(yaw) or not is_finite(wait) or not is_finite(phase) or wait < 0.0: return false
	var destination := str(saved.get("destination_id", ""))
	var stops := _saved_stops(str(resident.home_id), saved.get("stops", null))
	if stops.is_empty(): stops.assign(resident.stops)
	if not concert and not stops.has(destination): return false
	if not connected_houses.has(destination): return false
	var point := Vector3(planar.x,state.street_height(planar)+0.10,planar.y)
	var route := _route_from_position(point, str(connected_houses[destination]))
	if route.is_empty(): return false
	var dwell := str(saved.get("dwell_id", ""))
	var service := str(saved.get("service_pending", ""))
	if not dwell.is_empty():
		var target: Vector3 = positions[connected_houses[destination]]+Vector3(0,0.10,0)
		var tea_wait:bool=not concert and service.is_empty() and str(_roles.get(destination,""))=="bakery" and state.has_cafe_credit(str(resident.home_id)) and state.shares_chord(str(resident.home_id),destination,"pastoral_triad")
		if dwell != destination or point.distance_to(target) > 0.15: return false
		if not tea_wait and service != ("concert" if concert else str(_roles.get(destination, ""))): return false
		if wait > (1.0 if tea_wait else 0.0 if concert else 5.0 if service == "venue" else 3.0): return false
	elif not service.is_empty(): return false
	resident.node.position = point
	resident.node.rotation.y = yaw
	resident.destination_id = destination
	resident.dwell_id = dwell
	resident.service_pending = service
	resident.wait = wait
	resident.phase = phase
	resident.paused = false
	resident.route = route
	resident.index = 0
	resident.stops = stops
	resident.stop = resident.stops.find(destination)
	return true

func _saved_stops(home: String, data: Variant) -> Array[String]:
	var result: Array[String] = []
	if not data is Array or data.size() < 2 or data.size() > 3 or data[0] != home or not connected_houses.has(home): return result
	for index in range(data.size()):
		var id: Variant = data[index]
		if not id is String or result.has(id) or not connected_houses.has(id):
			result.clear()
			return result
		if index > 0 and (str(_roles.get(id, "")) not in ["bakery", "venue"] or _route(str(connected_houses[home]), str(connected_houses[id])).is_empty()):
			result.clear()
			return result
		result.append(id)
	return result

func summary() -> String:
	return "%d 位居民 · %d 趟采购 · %d 次小聚\n♫ 已完成 %d 场街坊演出" % [current_population, purchases, gatherings+int(state.life_progress.tea_parties),int(state.life_progress.concerts)]

func house_connected(id: String) -> bool:
	return connected_houses.has(id)

func record_travel(actor_id: String, from: Vector2, to: Vector2) -> void:
	if _budget_hold or budget_sync_pending(): return
	var started:=Time.get_ticks_usec() if profile_tick else 0
	for event: Dictionary in travel.observe(actor_id,from,to,time):
		if event.kind in ["arch","arcade_tea"] and "arcade_market" in state.era_modifiers:
			var home:=actor_id.get_slice("/",1)
			if _roles.get(home,"")=="residential":state.grant_resonance_afterglow([home],30.)
		if event.kind!="arcade_tea" and travel_callback.is_valid(): travel_callback.call(actor_id,str(event.kind),str(event.id),Vector2(event.at))
	if profile_tick:tick_profile.travel+=Time.get_ticks_usec()-started

func travel_source_valid(kind: String, source_id: String, at: Vector2) -> bool:
	if _budget_hold or budget_sync_pending(): return false
	var row: Dictionary = travel.site(source_id)
	return not row.is_empty() and str(row.kind)==kind and Vector2(row.at).distance_to(at)<=0.15

func _key(p: Vector2) -> String:
	return _network._key(p)

func district_reply_pairs() -> Array:
	if _budget_hold or budget_sync_pending(): return []
	var district_rows: Array=[]
	for district: Dictionary in state.districts:
		district_rows.append([district.id,district.points,district.width,district.style])
	var signature:=hash([district_rows,state.microclimate,preload("res://scripts/world/city_creation_spatial_voice.gd").authored_signature(state)])
	if _district_link_network!=_network or _district_link_signature!=signature:
		_district_link_network=_network
		_district_link_signature=signature
		_district_link_pairs=DistrictLinks.new().derive(state,_network)
		district_link_rebuilds+=1
	return _district_link_pairs

func _build_graph() -> void:
	_network = Network.new()
	_network.state = state
	_network.connected_houses = connected_houses.duplicate()
	_network._build_graph()
	_adopt_network(_network)

func _adopt_network(network: RefCounted) -> void:
	_network = network
	graph = network.graph
	positions = network.positions
	connected_houses = network.connected_houses
	selected_entrances = network.selected_entrances
	_route_cache = network._route_cache
	_route_cache_entries = network._route_cache_entries
	state.prepare_regional_echo(network)

func _route(start: String, finish: String) -> Array[Vector3]:
	# Test tools may assign graph/positions directly; they are still authoritative.
	_network.graph = graph
	_network.positions = positions
	var route: Array[Vector3] = _network._route(start,finish)
	_route_cache = _network._route_cache
	_route_cache_entries = _network._route_cache_entries
	return route

func _route_length(start:String,finish:String)->float:
	_network.graph=graph;_network.positions=positions
	return _network.route_length(start,finish)

func _person(index: int) -> Node3D:
	return preload("res://scripts/visual/city_creation_citizen_visual.gd").person(index)

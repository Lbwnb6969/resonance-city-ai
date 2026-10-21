extends RefCounted
## Hidden jobs keep original production/reservation/completion state machines.
## Only straight movement and unfinished normalized work sleep until a deadline.
const Motion=preload("res://scripts/world/city_creation_citizen_motion.gd")
var life: Node3D
var stats: Dictionary={"movement_sleeps":0,"work_sleeps":0,"movement_steps":0,"work_steps":0,"publications":0}
func _init(owner: Node3D)->void:life=owner
func position(worker: Dictionary)->Vector3:
	var motion: RefCounted=worker.get("worker_motion")
	if motion==null:return worker.node.position
	var point:Vector3=motion.point()
	var surface:RefCounted=life._published_surface if life._published_surface!=null and life.state.revision!=life.last_revision else life.state
	point.y=surface.street_height(Vector2(point.x,point.z))+.10
	return point
func _visible(worker: Dictionary)->bool:
	if life.view_camera==null:return true
	var motion:RefCounted=worker.get("worker_motion")
	var point:Vector3=motion.point() if motion!=null else worker.node.position
	return life.view_camera.is_position_in_frustum(point+Vector3.UP*.35)
func _actor(worker: Dictionary)->String:
	return ("baker/" if worker.has("bakery_id") else "artisan/")+str(worker.home_id)
func _observe(worker: Dictionary,motion: RefCounted,before: Vector3)->void:
	if motion.watch_travel:
		var at: Vector3=motion.point();life.record_travel(_actor(worker),Vector2(before.x,before.z),Vector2(at.x,at.z))
func _settle_motion(worker: Dictionary)->void:
	var motion: RefCounted=worker.get("worker_motion")
	if motion==null or not motion.deferred:return
	var before: Vector3=motion.start+motion.direction*motion.progress
	motion.settle();_observe(worker,motion,before)
func _work_elapsed(row: Dictionary,now: float)->float:
	var span:=maxf(0.,now-float(row.at))
	var bonus:=clampf(float(row.bonus_end)-float(row.at),0.,span) if bool(row.production) else 0.
	return minf(float(row.duration),float(row.elapsed)+(span+bonus*.25)*float(row.speed)) if bool(row.active) else float(row.elapsed)
func elapsed(worker: Dictionary)->float:
	var row: Dictionary=worker.get("worker_work",{})
	return _work_elapsed(row,life.time) if not row.is_empty() else float(worker.elapsed)
func _settle_work(worker: Dictionary)->void:
	var row: Dictionary=worker.get("worker_work",{})
	if row.is_empty():return
	worker.elapsed=_work_elapsed(row,life.time);worker.erase("worker_work")
func flush(worker: Dictionary)->void:
	_settle_work(worker)
	var motion: RefCounted=worker.get("worker_motion")
	if motion!=null:
		_settle_motion(worker)
		var point: Vector3=motion.point()
		var surface: RefCounted=life._published_surface if life._published_surface!=null and life.state.revision!=life.last_revision else life.state
		point.y=surface.street_height(Vector2(point.x,point.z))+.10
		worker.node.position=point;worker.node.rotation.y=motion.yaw
		worker.erase("worker_motion");stats.publications+=1
	worker.node.get_child(0).visible=true
func _inputs(worker: Dictionary,phase: String)->int:
	var city: RefCounted=life.state
	var shop:=str(worker.bakery_id if worker.has("bakery_id") else worker.workshop_id)
	if phase=="baking":return hash([city.revision,city.bakery_supply.get(shop,{}),city.level_tier(shop)])
	if phase=="crafting":return hash([city.revision,city._echo_epoch,city.workshop_supply,city.venue_commissions,city.house_improvements,city.house_culture,city.house_clockwork,city.level_tier(shop)])
	if phase=="installing":return hash([city.revision,city._echo_epoch,city.workshop_supply.get(shop,{}),city.level_tier(str(worker.target_id))])
	return int(city.revision)
func before(worker: Dictionary,delta: float,moving: Array)->bool:
	if _visible(worker):flush(worker);return true
	var phase:=str(worker.phase)
	worker.node.get_child(0).visible=false
	if phase in moving:
		_settle_work(worker)
		var route: Array[Vector3]=[];route.assign(worker.route)
		if int(worker.index)>=route.size():flush(worker);return true
		var speed: float=.83*life.state.walking_multiplier(str(worker.home_id))*life.state.temperament_walk(str(worker.bakery_id)) if worker.has("bakery_id") else .83*life.state.walking_multiplier(str(worker.home_id))
		if worker.has("workshop_id"):speed=.83*life.state.artisan_walking_multiplier(str(worker.home_id),str(worker.workshop_id),str(worker.target_id),phase)
		var motion: RefCounted=worker.get("worker_motion")
		if motion==null:
			motion=Motion.new(worker.node.position,worker.node.rotation.y);worker.worker_motion=motion
		if motion.deferred and is_equal_approx(float(motion.deferred_speed),speed) and float(motion.due_at)>life.time+delta+.000000001:
			stats.movement_sleeps+=1;return false
		_settle_motion(worker)
		var before: Vector3=motion.point()
		var index:=int(worker.index)
		worker.index=motion.advance(route,index,delta*speed)
		motion.watch_travel=life.travel.has_sites_between(Vector2(before.x,before.z),Vector2(motion.target.x,motion.target.z))
		_observe(worker,motion,before)
		if int(worker.index)==index:motion.defer(life,speed,life.time+delta)
		stats.movement_steps+=1;return false
	var row: Dictionary=worker.get("worker_work",{})
	if not row.is_empty():
		var shop:=str(worker.bakery_id if worker.has("bakery_id") else worker.workshop_id)
		var glow: float=life.state.afterglow_remaining(shop)
		var expected:=maxf(0.,float(row.bonus_end)-life.time)
		var changed:=int(row.inputs)!=_inputs(worker,phase) or (bool(row.production) and absf(glow-expected)>.00001)
		if not changed and float(row.due)>life.time+delta+.000000001:
			stats.work_sleeps+=1;return false
		_settle_work(worker);stats.work_steps+=1
	return true
func after(worker: Dictionary,delta: float)->void:
	if _visible(worker):return
	var phase:=str(worker.phase)
	if phase not in ["baking","crafting","installing","resting"]:return
	var city: RefCounted=life.state
	var production:=phase in ["baking","crafting"]
	var shop:=str(worker.bakery_id if worker.has("bakery_id") else worker.workshop_id)
	var duration:=4. if phase=="resting" else 2. if phase=="installing" else 6. if phase=="baking" else 8.
	var speed: float=city.site_production_multiplier(shop) if production else city.installation_multiplier(shop,str(worker.target_id)) if phase=="installing" else 1.
	var active:=true
	if production:
		var supply: Dictionary=city.bakery_status(shop) if phase=="baking" else city.workshop_status(shop)
		active=bool(supply.open) and int(supply.stock)+int(supply.batch_size)<=int(supply.capacity)
		# A freshly crafted object is collected on the next original tick.
		# Reservations remain in Workshop, including the global order cache.
		if phase=="crafting" and int(supply.stock)>0 and not str(life.workshop._recipient_order(worker).target).is_empty():return
	var at: float=life.time+delta
	var bonus_end: float=life.time+city.afterglow_remaining(shop) if production else 0.
	var needed:=maxf(0.,duration-float(worker.elapsed))/speed
	var bonus_left:=maxf(0.,bonus_end-at) if production else 0.
	var until:=needed/1.25 if needed<=bonus_left*1.25 else needed-bonus_left*.25
	worker.worker_work={"at":at,"elapsed":float(worker.elapsed),"duration":duration,"speed":speed,"active":active,"production":production,"bonus_end":bonus_end,"inputs":_inputs(worker,phase),"due":at+until if active else INF}

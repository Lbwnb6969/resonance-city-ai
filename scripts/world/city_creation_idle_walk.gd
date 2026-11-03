extends RefCounted
## Active-account idle behavior reuses quiet walking, on the actual resident node.
const Routes=preload("res://scripts/world/city_creation_quiet_walk_routes.gd")
const Balcony=preload("res://scripts/world/city_creation_balcony_visits.gd")
const Bench=preload("res://scripts/world/city_creation_bench_visits.gd")
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
const Gait=preload("res://scripts/visual/city_creation_citizen_gait.gd")
static func eligible(life,r:Dictionary)->bool:
	if life.state.cozy_progression.is_empty() or not life.state.cozy_progression.enabled:return false
	for field:String in ["daily_snapshot","solo_listen","cafe_visit"]:
		if r.has(field):return false
	if life.conductor_parade.owns(life,r) or life.time<float(r.get("greeting_until",-1.)):return false
	return r.paused or (r.dwell_id==r.home_id and r.service_pending=="residential" and r.wait>0.)
static func shelter(life,r:Dictionary)->Array[Vector3]:
	var index:int=life.state._house_index(str(r.home_id))
	if index<0 or not life.connected_houses.has(str(r.home_id)):return []
	var house:Dictionary=life.state.houses[index];var entrance:Dictionary=life.selected_entrances.get(str(r.home_id),{})
	for row:Dictionary in Arcade.for_house(life.state,house):
		if str(row.cell_id)!=str(entrance.get("cell_id","")) or Vector2i(row.side)!=Vector2i(entrance.get("side",Vector2i.ZERO)):continue
		var path:Array[Vector3]=life._route_from_position(r.node.position,life.connected_houses[str(r.home_id)])
		if path.is_empty() or path.any(func(p):return Routes.planar(p).distance_to(Routes.planar(life.positions[life.connected_houses[str(r.home_id)]]))>Routes.RADIUS):continue
		var at:Vector2=entrance.wall_at-Arcade.Frame.normal(entrance)*Arcade.RETREAT*.5
		path.append(Vector3(at.x,float(house.get("base_y",0.))+.10,at.y));return path
	return []
static func checkpoint(r:Dictionary,result:Dictionary)->void:
	var walk:Dictionary=r.get("idle_walk",{})
	if not walk.get("cooldown",false):return
	# Like a bench rest, a transient excursion resumes from a valid logical doorstep.
	var safe:Vector3=walk.safe;result.position=[safe.x,safe.z]
static func tick(life,r:Dictionary,delta:float)->bool:
	if not eligible(life,r):r.erase("idle_walk");return false
	# Home cooldown still expires on the economic clock; it never becomes a new visit.
	if not r.paused:
		r.wait=maxf(0.,float(r.wait)-delta)
		if r.wait==0.:
			r.erase("idle_walk");r.dwell_id="";r.service_pending=""
			life._depart(r,str(r.home_id))
			if not r.paused and not r.has("cafe_visit"):
				r.route=life._route_from_position(r.node.position,life.connected_houses[str(r.destination_id)]);r.index=0
				if r.route.is_empty():life._pause_at_home(r)
			return false
	if life.get_meta("idle_walk_frame",-1.)!=life.time:life.set_meta("idle_walk_frame",life.time);life.set_meta("idle_walk_count",0)
	var count:int=life.get_meta("idle_walk_count",0)
	if count>=life.quiet_walk.LIMIT:return true
	if not r.node.visible or life.view_camera!=null and not life.view_camera.is_position_in_frustum(r.node.global_position+Vector3.UP*.35):return true
	life.set_meta("idle_walk_count",count+1)
	if life.state.microclimate!="sun_shower" or r.has("balcony_visit") or r.has("bench_visit"):
		if Balcony.tick(life,r,delta) or Bench.tick(life,r,delta):r.erase("idle_walk");return true
	var revision:=[life.last_revision,life._network.get_instance_id(),life.state.microclimate]
	var walk:Dictionary=r.get("idle_walk",{})
	if walk.is_empty() or walk.revision!=revision:
		life.flush_citizen(r)
		walk=Routes.start(life._network,r.node.position,str(r.home_id))
		if walk.is_empty():r.erase("idle_walk");return true
		walk.node=r.node;walk.revision=revision;walk.shelter=false;walk.cooldown=not r.paused
		if walk.cooldown:walk.safe=life.positions[life.connected_houses[str(r.home_id)]]+Vector3.UP*.1
		if life.state.microclimate=="sun_shower":
			var covered:=shelter(life,r)
			if not covered.is_empty():walk.route=covered;walk.index=0;walk.shelter=true
		r.idle_walk=walk
	var step:=minf(maxf(delta,0.),.1);var moving:=false
	if walk.shelter:
		var remaining:float=step*life.quiet_walk.SPEED
		while remaining>0. and walk.index<walk.route.size():
			var target:Vector3=walk.route[walk.index];var distance:float=r.node.position.distance_to(target)
			var stride:=minf(distance,remaining);var direction:Vector3=target-r.node.position
			if direction.length_squared()>.000001:r.node.rotation.y=atan2(direction.x,direction.z)
			r.node.position=r.node.position.move_toward(target,stride);moving=moving or stride>0.;remaining-=stride
			if stride>=distance:walk.index+=1
	else:moving=life.quiet_walk._advance(walk,step)
	Gait.pose(r.node,life.time,moving,not str(walk.get("ghat_rest","")).is_empty());return true

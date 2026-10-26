extends RefCounted
## A transient route on the real pedestrian graph. Daily destinations/services
## stay intact; checkpoints store the real new position and rebuild that trip.
const Gait=preload("res://scripts/visual/city_creation_citizen_gait.gd")
static func gather(life:Node3D,host:String,until:float)->Array[String]:
	var result:Array[String]=[]
	if not life.connected_houses.has(host):return result
	var port:=str(life.connected_houses[host]);var center:Vector3=life.positions[port]
	for r:Dictionary in life.residents:
		if result.size()>=6:break
		if r.paused or r.wait>0. or r.has("daily_snapshot") or r.has("cafe_visit") or not str(r.dwell_id).is_empty() or not str(r.service_pending).is_empty():continue
		if life.tram.tickets.get(str(r.home_id),{}).get("state","")=="onboard" or life.time<float(r.get("greeting_until",-1.)):continue
		life.flush_citizen(r)
		if r.node.position.distance_to(center)>9.:continue
		var route:Array[Vector3]=life._route_from_position(r.node.position,port)
		if route.size()<2:continue
		# Stop on the actual approach, never inside the building or in a job.
		var length:=0.;var chosen:Array[Vector3]=[route[0]]
		for i in range(1,route.size()):
			length+=route[i-1].distance_to(route[i]);chosen.append(route[i])
		if length>10.:continue
		var setback:=minf(length*.5,.35+result.size()*.32)
		while chosen.size()>1 and setback>0.:
			var last:int=chosen.size()-1;var segment:=chosen[last].distance_to(chosen[last-1])
			if setback>=segment:setback-=segment;chosen.pop_back()
			else:chosen[last]=chosen[last].move_toward(chosen[last-1],setback);setback=0.
		r["solo_listen"]={"path":chosen,"index":0,"until":until,"host":host,"revision":life.state.revision,"source":center}
		life._citizen_schedule.wake(r);result.append(str(r.home_id))
	return result
static func release(life:Node3D,r:Dictionary)->void:
	if not r.has("solo_listen"):return
	r.erase("solo_listen");r.node.remove_meta("solo_listening")
	if r.stops.size()>1 and life.connected_houses.has(str(r.destination_id)):life._resume(r)
	else:life._pause_at_home(r)
static func clear(life:Node3D)->void:
	for r:Dictionary in life.residents:release(life,r)
static func tick(life:Node3D,r:Dictionary,delta:float)->bool:
	if not r.has("solo_listen"):return false
	var solo:Dictionary=r.solo_listen
	if life.time>=float(solo.until) or life.state.revision!=int(solo.revision) or not life._concert.is_empty():release(life,r);return false
	var path:Array[Vector3]=solo.path;var index:int=solo.index;var at:Vector3=r.node.position
	var remaining:=maxf(0.,delta)*.95
	while remaining>0. and index<path.size():
		var distance:=at.distance_to(path[index])
		if distance<=remaining:at=path[index];remaining-=distance;index+=1
		else:at=at.move_toward(path[index],remaining);remaining=0.
	var direction:Vector3=at-r.node.position
	at.y=life.state.street_height(Vector2(at.x,at.z))+.1
	var previous:Vector3=r.node.position;r.node.position=at;solo.index=index
	var moving:=index<path.size()
	if moving and direction.length_squared()>.000001:r.node.rotation.y=atan2(direction.x,direction.z)
	elif not moving:
		var h:Dictionary=life.state.houses[life.state._house_index(str(solo.host))]
		var toward:=Vector3(h.origin[0],at.y,h.origin[1])-at;r.node.rotation.y=atan2(toward.x,toward.z)
	r.node.set_meta("solo_listening",not moving)
	Gait.pose(r.node,life.time,moving)
	if not moving:r.node.set_meta("visible_activity","listening")
	life.record_travel("resident/"+str(r.home_id),Vector2(previous.x,previous.z),Vector2(at.x,at.z))
	return true

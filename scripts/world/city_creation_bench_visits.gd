extends RefCounted
## Reuse actual residents, street routes and the existing seated gait. Runtime only.
const Seats=preload("res://scripts/world/city_creation_bench_seats.gd")
const Gait=preload("res://scripts/visual/city_creation_citizen_gait.gd")
static func start(life,r:Dictionary,preferred:String="")->bool:
	if r.has("bench_visit") or r.has("balcony_visit") or r.has("cafe_visit") or r.has("daily_snapshot") or r.has("solo_listen") or not life._concert.is_empty() or life.conductor_parade.owns(life,r):return false
	if life.time<float(r.get("bench_next",8.)) or r.wait>0. or not str(r.dwell_id).is_empty():return false
	if not r.paused and int(r.index)<r.route.size():return false
	life.flush_citizen(r)
	var seats:=Seats.plans(life.state);var keys:Array=seats.keys()
	keys.sort_custom(func(a,b):return r.node.position.distance_squared_to(Vector3(seats[a].at.x,seats[a].y,seats[a].at.y))<r.node.position.distance_squared_to(Vector3(seats[b].at.x,seats[b].y,seats[b].at.y)))
	for id:String in keys:
		if not preferred.is_empty() and id!=preferred:continue
		if Seats.occupied(life,id):continue
		var path:=Seats.approach(life,r.node.position,seats[id])
		if path.is_empty():continue
		r.bench_visit={"seat":id,"signature":seats[id].signature,"revision":life.state.revision,"phase":"walking","path":path,"index":0,"elapsed":0.,"safe":r.node.position}
		r.node.set_meta("bench_seat",id);return true
	r.bench_next=life.time+12.;return false
static func release(life,r:Dictionary)->void:
	if not r.has("bench_visit"):return
	var safe:Vector3=r.bench_visit.safe;var best:=INF
	for point:Vector3 in life.positions.values():
		var distance:=point.distance_squared_to(r.node.position)
		if distance<best:best=distance;safe=point+Vector3.UP*.1
	if life.connected_houses.has(str(r.home_id)):safe=life.positions[life.connected_houses[str(r.home_id)]]+Vector3.UP*.1
	r.node.position=safe;r.node.get_child(0).position.y=0.;r.node.remove_meta("bench_seat");r.node.remove_meta("bench_seated");r.erase("bench_visit");r.bench_next=life.time+35.;Gait.pose(r.node,life.time,false)
static func tick(life,r:Dictionary,delta:float)->bool:
	if not r.has("bench_visit") and not start(life,r):return false
	var visit:Dictionary=r.bench_visit;var seat:Dictionary=Seats.plans(life.state).get(str(visit.seat),{})
	if seat.is_empty() or seat.signature!=visit.signature or life.state.revision!=visit.revision or not life._concert.is_empty() or r.has("solo_listen"):release(life,r);return false
	if visit.phase=="seated":
		visit.elapsed+=delta;r.node.set_meta("bench_seated",true);Gait.pose(r.node,life.time,false,true)
		if visit.elapsed>=8.:
			visit.phase="leaving";visit.path.reverse();visit.index=0;r.node.remove_meta("bench_seated");r.node.get_child(0).position.y=0.
		return true
	var path:Array[Vector3]=visit.path;var index:=int(visit.index);var at:Vector3=r.node.position;var remaining:=maxf(0.,delta)*.83
	while remaining>0. and index<path.size():
		var distance:=at.distance_to(path[index])
		if distance<=remaining:at=path[index];remaining-=distance;index+=1
		else:at=at.move_toward(path[index],remaining);remaining=0.
	var direction:Vector3=at-r.node.position
	if Vector2(direction.x,direction.z).length_squared()>.000001:r.node.rotation.y=atan2(direction.x,direction.z)
	r.node.position=at;visit.index=index;Gait.pose(r.node,life.time,true)
	if index>=path.size():
		if visit.phase=="leaving":release(life,r)
		else:
			visit.phase="seated";r.node.get_child(0).position.y=.28;r.node.rotation.y=atan2(seat.face.x,seat.face.y);r.node.set_meta("bench_seated",true);Gait.pose(r.node,life.time,false,true)
	return true
static func checkpoint(r:Dictionary,result:Dictionary)->void:
	if not r.has("bench_visit"):return
	var at:Vector3=r.bench_visit.safe;result.position=[at.x,at.z]

extends RefCounted
## Own residents use a continuous 3D route through the host's actual U stair.
const Plan=preload("res://scripts/world/city_creation_balcony_plan.gd")
const Gait=preload("res://scripts/visual/city_creation_citizen_gait.gd")
static func plans(life)->Dictionary:
	if life.get_meta("balcony_revision",-1)!=life.state.revision:
		var result:Dictionary={}
		for house:Dictionary in life.state.houses:
			if int(house.get("balcony_arc",0))==0:continue
			var p:=Plan.plan(life.state,house)
			if not p.is_empty():result[str(house.id)]={"house":house,"plan":p}
		life.set_meta("balcony_plans",result);life.set_meta("balcony_revision",life.state.revision)
	return life.get_meta("balcony_plans",{})
static func start(life,r:Dictionary)->bool:
	if r.has("bench_visit"):return false
	var reached_home:bool=str(r.destination_id)==str(r.home_id) and int(r.index)>=r.route.size()
	if not (r.paused or reached_home) or r.wait>0. or r.has("daily_snapshot") or r.has("solo_listen") or r.has("cafe_visit") or not str(r.dwell_id).is_empty() or not life._concert.is_empty():return false
	if life.time<float(r.get("balcony_next",6.)):return false
	var host:=str(r.home_id);var available:=plans(life)
	if life.get_meta("player_bench","")=="balcony/"+host:return false
	if not available.has(host) or not life.connected_houses.has(host):return false
	var row:Dictionary=available[host];var entrance:Dictionary=life.selected_entrances.get(host,{})
	if entrance.is_empty() or str(entrance.cell_id)!=str(row.plan.lower.id) or Vector2i(entrance.side)!=row.plan.side:return false
	life.flush_citizen(r)
	var door:Vector3=life.positions[life.connected_houses[host]]+Vector3.UP*.1
	if r.node.position.distance_to(door)>.25:return false
	var path:=Plan.route(row.house,row.plan,door)
	r.balcony_visit={"path":path,"index":0,"revision":life.state.revision,"phase":"climb","wait":0.,"entry":door}
	r.node.set_meta("balcony_host",host);return true
static func clear(life,r:Dictionary)->void:
	var visit:Dictionary=r.balcony_visit;r.node.position=life.positions[life.connected_houses[str(r.home_id)]]+Vector3.UP*.1 if life.connected_houses.has(str(r.home_id)) else visit.entry;r.erase("balcony_visit");r.balcony_next=life.time+40.
	r.node.remove_meta("balcony_host");r.node.remove_meta("balcony_listening")
	Gait.pose(r.node,life.time,false)
static func tick(life,r:Dictionary,delta:float)->bool:
	if not r.has("balcony_visit") and not start(life,r):return false
	var visit:Dictionary=r.balcony_visit
	if life.state.revision!=int(visit.revision) or not life._concert.is_empty() or r.has("solo_listen"):clear(life,r);return false
	if visit.phase=="listen":
		visit.wait+=delta;r.node.set_meta("balcony_listening",true);Gait.pose(r.node,life.time,false)
		if float(visit.wait)>=8.:
			visit.phase="descend";visit.path.reverse();visit.index=0;r.node.set_meta("balcony_listening",false)
		return true
	var path:Array[Vector3]=visit.path;var index:=int(visit.index);var at:Vector3=r.node.position;var remaining:=maxf(0.,delta)*.65
	while remaining>0. and index<path.size():
		var distance:=at.distance_to(path[index])
		if distance<=remaining:at=path[index];remaining-=distance;index+=1
		else:at=at.move_toward(path[index],remaining);remaining=0.
	var direction:Vector3=at-r.node.position
	if Vector2(direction.x,direction.z).length_squared()>.000001:r.node.rotation.y=atan2(direction.x,direction.z)
	r.node.position=at;visit.index=index;Gait.pose(r.node,life.time,true)
	if index>=path.size():
		if visit.phase=="descend":clear(life,r)
		else:
			visit.phase="listen";r.node.set_meta("balcony_listening",true)
			var row:Dictionary=plans(life)[str(r.home_id)];var side:=Plan.Frame.direction(row.house,Vector2(row.plan.side),row.plan.upper);r.node.rotation.y=atan2(side.x,side.y)
			Gait.pose(r.node,life.time,false)
			if life.arrival_callback.is_valid():life.arrival_callback.call("balcony")
	return true
static func checkpoint(r:Dictionary,result:Dictionary)->void:
	if not r.has("balcony_visit"):return
	var entry:Vector3=r.balcony_visit.entry
	result.position=[entry.x,entry.z]

extends RefCounted
## Derived transport, retaining the passenger's exact service destination/route.
const Plan=preload("res://scripts/world/city_creation_tram_plan.gd")
const Visual=preload("res://scripts/visual/city_creation_tram_visual.gd")
const SPEED := 2.8
const DWELL := .9
const CAPACITY := 6
const MIN_RIDE := 6.0
var life: Node3D
var cars: Array[Dictionary]=[]
var tickets: Dictionary={}
var _active_tickets: Dictionary={}
var plan: Dictionary={"graph":{},"positions":{},"lines":[],"stations":[],"station_keys":{},"edges":[],"length":0.}
var root: Node3D
var night := false
var boarded := 0
var completed := 0
var arrivals := 0
var _revision := -1
var _network_signature: Variant=null
var _rail_signature: Variant=null
var _unlocked := false
var _depot_station := ""
var _depot_id := ""

func speed()->float:
	return SPEED*float(life.state.signature_bonuses().tram_speed) if not _depot_station.is_empty() else SPEED

func _dispatch_station(next: Dictionary,depot_id: String)->String:
	if depot_id.is_empty() or not life.connected_houses.has(depot_id):return ""
	var port: String=life.connected_houses[depot_id]
	var origin: Vector3=life.positions[port]
	var best := "";var distance := 6.5
	for station: Dictionary in next.stations:
		if life._network.component_of.get(station.key,"")!=life._network.component_of.get(port,""):continue
		var gap:=Vector2(origin.x,origin.z).distance_to(Vector2(station.at.x,station.at.z))
		if gap<distance:distance=gap;best=str(station.key)
	return best

func _init(owner: Node3D)->void:life=owner

func clear()->void:
	for ticket: Dictionary in tickets.values():
		if ticket.get("state","")=="onboard":
			var resident: Dictionary=ticket.resident
			var at: Vector3=resident.node.position
			resident.node.position=Vector3(at.x,life.state.street_height(Vector2(at.x,at.z))+.10,at.z)
			resident.node.get_child(0).position.y=0.
	tickets.clear();_active_tickets.clear()
	if root!=null:root.queue_free();root=null
	cars.clear()
	_depot_station="";_depot_id=""
	_revision=-1
	_network_signature=null;_rail_signature=null

func sync()->void:
	var unlocked: bool=life.state.era_unlocks.has("clockwork")
	if _revision==life.state.revision and _unlocked==unlocked:return
	_revision=life.state.revision
	# Negative trip decisions are cached until a new route. Only live waiting
	# and onboard tickets need per-frame validation; prune removed homes here.
	var homes: Dictionary={}
	for house: Dictionary in life.state.houses:
		if house.get("role","residential")=="residential":homes[str(house.id)]=true
	for home: String in tickets.keys():
		if not homes.has(home):_release_ticket(home,tickets[home])
	var network_signature:=hash(life._network_signature)
	if network_signature==_network_signature and unlocked==_unlocked:return
	_network_signature=network_signature;_unlocked=unlocked
	var next := Plan.from_network(life.state,life._network) if unlocked else {"graph":{},"positions":{},"lines":[],"stations":[],"station_keys":{},"edges":[],"length":0.}
	var depot_id: String=life.state.signature_bonuses().depot_id
	var dispatch:=_dispatch_station(next,depot_id)
	var signature:=hash([next.graph,next.positions,next.lines,next.station_keys,dispatch,depot_id])
	if signature==_rail_signature:plan=next;return
	clear()
	_revision=life.state.revision;_network_signature=network_signature;_rail_signature=signature;_unlocked=unlocked
	plan=next
	_depot_station=dispatch;_depot_id=depot_id if not dispatch.is_empty() else ""
	if plan.lines.is_empty():return
	root=Node3D.new();root.name="MusicalTramNetwork";life.add_child(root)
	var lines: Array=plan.lines.duplicate(true)
	if not dispatch.is_empty():lines.sort_custom(func(a:Dictionary,b:Dictionary)->bool:
		if a.tour.has(dispatch)!=b.tour.has(dispatch):return a.tour.has(dispatch)
		return float(a.length)>float(b.length) if not is_equal_approx(a.length,b.length) else str(a.id)<str(b.id))
	for index in range(mini(2,lines.size())):
		var line: Dictionary=lines[index]
		var visual:=Visual.car(root,index+1)
		var tour: Array=line.tour
		if not dispatch.is_empty() and tour.has(dispatch):
			var first:=tour.find(dispatch)
			var body: Array=tour.slice(0,tour.size()-1)
			tour=body.slice(first)+body.slice(0,first);tour.append(tour[0]);line.tour=tour
		visual.node.position=plan.positions[tour[0]]
		cars.append({"id":"tram_%d"%(index+1),"node":visual.node,"glass":visual.glass,"line":line,"cursor":1,"key":tour[0],"wait":DWELL,"riders":[],"distance":0.})
	set_night(night)

func set_night(value: bool)->void:
	night=value
	for car: Dictionary in cars:car.glass.emission_energy_multiplier=.70 if night else .10

func _release_ticket(home: String,ticket: Dictionary)->void:
	for car: Dictionary in cars:car.riders.erase(home)
	var resident: Dictionary=ticket.resident
	if ticket.state=="onboard" and is_instance_valid(resident.node):
		var at: Vector3=resident.node.position
		resident.node.position.y=life.state.street_height(Vector2(at.x,at.z))+.1
	tickets.erase(home);_active_tickets.erase(home)

func tick(delta: float)->void:
	sync()
	# Invitations, tea exits and editing can replace a route while a person is
	# seated. Release that old ticket before a later stop can change its index.
	for home: String in _active_tickets.keys():
		var ticket: Dictionary=_active_tickets[home];var resident: Dictionary=ticket.resident
		if not is_instance_valid(resident.node):
			_release_ticket(home,ticket);continue
		if ticket.route==resident.route:continue
		_release_ticket(home,ticket)
	for car: Dictionary in cars:
		var remaining:=delta
		while remaining>.00001:
			if float(car.wait)>0.:
				var consumed:=minf(remaining,float(car.wait));car.wait-=consumed;remaining-=consumed
				continue
			var tour: Array=car.line.tour
			var key: String=tour[int(car.cursor)]
			var target: Vector3=plan.positions[key]
			var position: Vector3=car.node.position
			var distance:=Vector2(position.x,position.z).distance_to(Vector2(target.x,target.z))
			var velocity:=speed()
			var consumed:=minf(remaining,distance/velocity)
			if distance>.00001:
				var direction: Vector3=(target-position).normalized()
				car.node.position=position.lerp(target,minf(1.,consumed*velocity/distance))
				car.node.rotation.y=atan2(direction.x,direction.z)
				var at: Vector3=car.node.position
				car.node.position.y=life.state.street_height(Vector2(at.x,at.z))
				_charge_waltz(car,Vector2(at.x,at.z),Vector2(position.x,position.z))
			car.distance+=consumed*velocity;remaining-=consumed
			if distance-consumed*velocity>.00001:break
			car.node.position=target;car.key=key;car.wait=DWELL if plan.station_keys.has(key) else 0.
			car.cursor=1 if int(car.cursor)>=tour.size()-1 else int(car.cursor)+1
			if int(car.cursor)==1:car.synergy_charged={}
			_drop(car)
			if plan.station_keys.has(key):
				arrivals+=1
				if life.tram_callback.is_valid():life.tram_callback.call(str(car.id),key,Vector2(target.x,target.z))
		_seat(car)

func _charge_waltz(car:Dictionary,at:Vector2,from:Vector2=Vector2.INF)->void:
	var did:=str(life.state.district_at(at).get("id",""))
	var changed:=did!=str(car.get("synergy_district",""))
	if changed:car.synergy_charged={}
	var previous:Vector2=car.get("synergy_at",from if from.is_finite() else at)
	if not changed and car.has("synergy_at") and previous.distance_to(at)<1.:return
	car.synergy_district=did;car.synergy_at=at
	if not car.has("synergy_charged"):car.synergy_charged={}
	var houses:Array[String]=[]
	for id:String in life.state.tram_synergy_houses(at,previous):
		if not car.synergy_charged.has(id):houses.append(id);car.synergy_charged[id]=true
	if not houses.is_empty():life.state.grant_resonance_afterglow(houses,30.)

func _seat(car: Dictionary)->void:
	for home: String in car.riders:
		var ticket: Dictionary=tickets[home];var resident: Dictionary=ticket.resident
		var seat: int=ticket.seat
		resident.node.position=car.node.transform*Vector3(-.29 if seat%2==0 else .29,.49,(seat/2-1)*.43)
		resident.node.rotation.y=car.node.rotation.y+(-PI*.5 if seat%2==0 else PI*.5)
		resident.node.get_child(0).position.y=0.

func _drop(car: Dictionary)->void:
	for home: String in car.riders.duplicate():
		var ticket: Dictionary=tickets[home]
		if str(ticket.exit)!=str(car.key):continue
		var resident: Dictionary=ticket.resident
		resident.node.position=Vector3(plan.positions[ticket.exit])+Vector3(0,.1,0)
		resident.index=int(ticket.exit_index)+1
		resident.node.get_child(0).position.y=0.
		car.riders.erase(home);ticket.state="completed";_active_tickets.erase(home);completed+=1

func intercept(resident: Dictionary,delta: float)->bool:
	if cars.is_empty() or resident.paused or resident.wait>0. or not str(resident.dwell_id).is_empty():return false
	var home:=str(resident.home_id)
	var old: Dictionary=tickets.get(home,{})
	if not old.is_empty() and old.route!=resident.route:
		_release_ticket(home,old);old={}
	if old.is_empty():
		var trip:=_trip(resident)
		trip.merge({"route":resident.route,"resident":resident})
		tickets[home]=trip;old=trip
		if trip.state=="approach":_active_tickets[home]=trip
	if old.state in ["declined","completed"]:return false
	if old.state=="onboard":return true
	if int(resident.index)<int(old.board_index):return false
	if resident.node.position.distance_to(Vector3(plan.positions[old.board])+Vector3(0,.1,0))>.20:
		old.state="declined";_active_tickets.erase(home);return false
	old.wait+=delta
	if float(old.wait)>5.:
		old.state="declined";_active_tickets.erase(home);return false
	for car: Dictionary in cars:
		if str(car.id)!=str(old.car_id) or str(car.key)!=str(old.board) or float(car.wait)<=0. or car.riders.size()>=CAPACITY:continue
		var seats: Dictionary={}
		for id: String in car.riders:seats[int(tickets[id].seat)]=true
		var seat:=0
		while seats.has(seat):seat+=1
		old.seat=seat;old.state="onboard";car.riders.append(home);boarded+=1
		_seat(car);return true
	return true

func _trip(resident: Dictionary)->Dictionary:
	var route: Array=resident.route
	var first := -1;var last := -1;var distance:=0.;var approach:=0.
	var exit_index := -1;var exit_distance := 0.
	for index in range(maxi(0,int(resident.index)),route.size()):
		var point: Vector3=route[index]
		if first<0 and index>int(resident.index):approach+=Vector3(route[index-1]).distance_to(point)
		var key: String=life._network._key(Vector2(point.x,point.z))
		if not plan.graph.has(key):
			if first>=0:break
			continue
		if first<0 and not plan.station_keys.has(key):continue
		if first<0:first=index;last=index;continue
		var previous: Vector3=route[last]
		var prior: String=life._network._key(Vector2(previous.x,previous.z))
		if key==prior:last=index;continue
		if not plan.graph[prior].has(key):break
		distance+=float(plan.graph[prior][key]);last=index
		if plan.station_keys.has(key):exit_index=index;exit_distance=distance
	last=exit_index;distance=exit_distance
	if first<0 or last<=first or distance<MIN_RIDE:return {"state":"declined"}
	var from: Vector3=route[first];var to: Vector3=route[last]
	var board: String=life._network._key(Vector2(from.x,from.z));var exit: String=life._network._key(Vector2(to.x,to.z))
	approach+=resident.node.position.distance_to(Vector3(route[int(resident.index)]))
	var ready:=approach/(.83*float(life.state.signature_bonuses().walking))
	var best:=INF;var vehicle:=""
	for car: Dictionary in cars:
		var forecast:=_forecast(car,board,exit,ready)
		if forecast.is_empty():continue
		var time: float=forecast.exit_time
		if float(forecast.board_time)-ready>5. or time-ready>=distance/(.83*float(life.state.signature_bonuses().walking))-.5:continue
		if time<best:best=time;vehicle=str(car.id)
	if vehicle.is_empty():return {"state":"declined"}
	return {"state":"approach","car_id":vehicle,"board":board,"exit":exit,"board_index":first,"exit_index":last,"wait":0.,"distance":distance}

func _forecast(car: Dictionary,board: String,exit: String,ready: float)->Dictionary:
	var tour: Array=car.line.tour
	var time: float=car.wait
	var boarded_at:=0. if str(car.key)==board and float(car.wait)>0. and ready<=.05 else -1.
	var previous: Vector3=car.node.position
	for step in range(tour.size()*2):
		var index:=1+posmod(int(car.cursor)-1+step,tour.size()-1)
		var key: String=tour[index]
		var point: Vector3=plan.positions[key]
		time+=Vector2(previous.x,previous.z).distance_to(Vector2(point.x,point.z))/speed()
		if key==board and boarded_at<0. and time>=ready:boarded_at=time
		elif key==exit and boarded_at>=0.:return {"board_time":boarded_at,"exit_time":time}
		if plan.station_keys.has(key):time+=DWELL
		previous=point
	return {}

func report()->Dictionary:
	var vehicles: Array=[]
	for car: Dictionary in cars:vehicles.append({"id":car.id,"position":car.node.position,"station":car.key,"waiting":car.wait,"distance":car.distance,"passengers":car.riders.duplicate()})
	return {"unlocked":_unlocked,"cars":vehicles,"stations":plan.stations.size(),"track_metres":plan.length,"boarded":boarded,"completed":completed,"arrivals":arrivals,"tickets":tickets.size(),"active_tickets":_active_tickets.size(),"depot_id":_depot_id,"dispatch_station":_depot_station,"speed":speed()}

func source_valid(car_id: String,station: String)->bool:
	if not plan.station_keys.has(station):return false
	for car: Dictionary in cars:
		if str(car.id)==car_id:return station in car.line.tour
	return false

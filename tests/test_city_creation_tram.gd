extends SceneTree
const Life=preload("res://scripts/world/city_creation_life.gd")
const Fixture=preload("res://tests/test_city_creation_clockwork.gd")
const Plan=preload("res://scripts/world/city_creation_tram_plan.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture()->RefCounted:
	var city:RefCounted=Fixture.fixture()
	city.set_house_role("h4","venue")
	var points:Array[Vector2]=[Vector2(-16,0),Vector2(-1,0)]
	city.add_road(points,"tram")
	return city
func _run()->void:
	var city:=fixture();var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var report:Dictionary=life.tram.report()
	_check(report.cars.size()==1 and report.track_metres>14.9 and report.stations>=4,"actual third-era rail graph spawns one carriage and real stops")
	var first:Vector3=life.tram.cars[0].node.position
	for i in range(40):life.tram.tick(.1)
	_check(life.tram.cars[0].node.position.distance_to(first)>1. and float(life.tram.cars[0].distance)>1.,"production carriage advances on connected track rather than a display animation")
	var station: String=life._network._key(Vector2(-16,0))
	for i in range(1000):
		var car:Dictionary=life.tram.cars[0]
		if car.key==station and float(car.wait)>.1:break
		life.tram.tick(.05)
	var invitation:Dictionary=life.invite_concert("h4")
	var seen:=false;var moving:=false;var former:=Vector3.ZERO;var before_concerts:int=city.life_progress.concerts
	for i in range(2200):
		life._process(.05)
		var ticket:Dictionary=life.tram.tickets.get("h1",{})
		if ticket.get("state","")=="onboard":
			var at:Vector3=ticket.resident.node.position
			if seen and at.distance_to(former)>.01:moving=true
			seen=true;former=at
		if life.tram.completed>0:break
	_check(invitation.ok and seen and moving and life.tram.boarded>0 and life.tram.completed>0,"real invited audience boards waits rides a moving carriage and alights at its planned stop")
	_check(int(city.life_progress.concerts)==before_concerts and life.concert_status().phase in ["gathering","playing"],"riding does not fabricate a completed performance")
	var home:Dictionary={}
	for resident:Dictionary in life.residents:
		if resident.home_id=="h1":home=resident
	var ticket:Dictionary=life.tram.tickets.get("h1",{})
	_check(ticket.state=="completed" and int(home.index)==int(ticket.exit_index)+1 and absf(home.node.position.y-city.street_height(Vector2(home.node.position.x,home.node.position.z))-.1)<.001,"alighting resumes the original walking route with correct street elevation")
	for i in range(2000):
		life._process(.05)
		if str(home.dwell_id)=="h4":break
	_check(str(home.dwell_id)=="h4","transport passenger physically reaches the intended concert venue after final walking leg")
	var before:Vector3=home.node.position
	var points:Array[Vector2]=[Vector2(-25,15),Vector2(-15,15)]
	city.add_road(points,"tram");life._sync()
	_check(life.tram.cars.size()==2,"disconnected second rail component receives a second carriage within fixed fleet cap")
	var separated:=true
	for edge:Dictionary in life.tram.plan.edges:
		var a:Vector3=edge.a;var b:Vector3=edge.b
		if absf(a.z-b.z)>1.:separated=false
	_check(separated,"ordinary streets never bridge disconnected tram components")
	city.roads[0].style="promenade";city.roads[0].width=1.75;city.revision+=1;life._sync()
	_check(life.tram.cars.size()==1 and life.tram.plan.length<11.,"replacing original rail street removes its carriage and track service")
	var cancel_city:=fixture();var cancel_life:=Life.new();root.add_child(cancel_life);cancel_life.set_process(false);cancel_life.setup(cancel_city)
	for i in range(1000):
		var car:Dictionary=cancel_life.tram.cars[0]
		if car.key==station and float(car.wait)>.1:break
		cancel_life.tram.tick(.05)
	cancel_life.invite_concert("h4")
	for i in range(300):
		cancel_life._process(.05)
		if cancel_life.tram.tickets.get("h1",{}).get("state","")=="onboard":break
	var had_passenger:bool=cancel_life.tram.cars[0].riders.has("h1")
	cancel_life.cancel_concert();cancel_life._process(.05)
	var released:bool=not cancel_life.tram.cars[0].riders.has("h1")
	var in_range:=true
	for resident:Dictionary in cancel_life.residents:
		if resident.home_id=="h1":in_range=int(resident.index)<=resident.route.size() and absf(resident.node.position.y-cancel_city.street_height(Vector2(resident.node.position.x,resident.node.position.z))-.1)<.002
	_check(had_passenger and released and in_range and cancel_life.tram.completed==0,"cancelling an invitation during an actual ride releases the old ticket before it can alter the replacement route or grant a completed ride")
	cancel_life.free()
	var branch_city:=fixture()
	points=[Vector2(-32,12),Vector2(-14,12)];var horizontal:Dictionary=branch_city.add_road(points,"tram")
	points=[Vector2(-23,3),Vector2(-23,22)];var vertical:Dictionary=branch_city.add_road(points,"tram")
	points=[Vector2(-32,12),Vector2(-32,22),Vector2(-23,22)];var loop:Dictionary=branch_city.add_road(points,"tram")
	var plaza:Dictionary=branch_city.add_roundabout(Vector2(-23,12))
	var branch_life:=Life.new();root.add_child(branch_life);branch_life.set_process(false);branch_life.setup(branch_city)
	_check(horizontal.ok and vertical.ok and loop.ok and plaza.ok and branch_life.tram.cars.size()==2,"real edits create connected branched loop and roundabout within two-car fleet")
	var traversed:Dictionary={};var closed:=true;var ring_edges:=0;var avoids:=true
	var rail:Dictionary=branch_life.tram.plan
	for line:Dictionary in rail.lines:
		closed=closed and line.tour.front()==line.tour.back()
		for i in range(1,line.tour.size()):
			var a:String=line.tour[i-1];var b:String=line.tour[i]
			closed=closed and rail.graph.get(a,{}).has(b)
			traversed[a+"/"+b if a<b else b+"/"+a]=true
	for edge:Dictionary in rail.edges:
		var a:Vector2=Vector2(edge.a.x,edge.a.z);var b:Vector2=Vector2(edge.b.x,edge.b.z);var center:=Vector2(-23,12)
		if a.distance_to(center)<2.5 and b.distance_to(center)<2.5:
			ring_edges+=1;avoids=avoids and Geometry2D.get_closest_point_to_segment(center,a,b).distance_to(center)>1.7
	_check(closed and traversed.size()==rail.edges.size(),"closed dispatch tours traverse every actual branch and non-tree loop edge without phantom shortcuts")
	_check(ring_edges>=48 and avoids,"filtered tram graph follows actual roundabout perimeter and never cuts through central fountain")
	var on_rails:=true
	for i in range(2000):
		branch_life.tram.tick(.05)
		for car:Dictionary in branch_life.tram.cars:
			var target:String=car.line.tour[car.cursor];var a:Vector3=rail.positions[car.key];var b:Vector3=rail.positions[target];var p:Vector3=car.node.position
			on_rails=on_rails and Geometry2D.get_closest_point_to_segment(Vector2(p.x,p.z),Vector2(a.x,a.z),Vector2(b.x,b.z)).distance_to(Vector2(p.x,p.z))<.002
	_check(on_rails and branch_life.tram.arrivals>10,"actual fleet advances and stops through branch-loop service while always remaining on the current real rail edge")
	branch_life.free()
	print("TRAM ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"boarded":life.tram.boarded,"completed":life.tram.completed,"arrivals":life.tram.arrivals}));life.free();quit(0 if failures.is_empty() else 1)

extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Seats=preload("res://scripts/world/city_creation_bench_seats.gd")
const Visits=preload("res://scripts/world/city_creation_bench_visits.gd")
var checks:=0
var failures:Array=[]
static func fixture():
	var city=State.new();city.initialize_free()
	for i in range(5):city.add_house(Vector2(-30+i*3.,-20))
	city.add_road([Vector2(-40,-17.8),Vector2(0,-17.8)] as Array[Vector2],"gravel","none",1.25,"benches")
	return city
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city=fixture();var seats:=Seats.plans(city)
	check(not seats.is_empty(),"real road generates seats")
	var records:Array=Seats.Promenade.new().prepare({"state":city},city.roads[0]).filter(func(r):return r.kind=="bench")
	check(seats.size()==records.size(),"seat count equals production model count")
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	check(life.residents.size()>=2,"existing connected homes provide real residents")
	life.time=10.
	var reserved:="";var first:Dictionary={}
	for r:Dictionary in life.residents:
		r.paused=true;r.wait=0.;r.dwell_id="";r.index=r.route.size()
		if Visits.start(life,r):first=r;reserved=r.bench_visit.seat;break
	check(not reserved.is_empty(),"resident reserves reachable seat using real graph")
	if not reserved.is_empty():
		for r:Dictionary in life.residents:
			if r==first:continue
			r.paused=true;r.wait=0.;r.dwell_id="";r.index=r.route.size()
			check(not Visits.start(life,r,reserved),"second resident cannot reserve occupied seat");break
		for i in range(600):
			if first.bench_visit.phase=="seated":break
			Visits.tick(life,first,.1)
		check(first.bench_visit.phase=="seated" and first.node.get_meta("visible_activity","")=="bench_rest","continuous route reaches real seated gait")
		check(first.node.get_meta("life_foley").kind=="","bench rest does not fabricate tea cup contacts")
		var checkpoint:Dictionary={};Visits.checkpoint(first,checkpoint)
		check(checkpoint.position==[first.bench_visit.safe.x,first.bench_visit.safe.z],"checkpoint stores street position without runtime occupancy")
		var snapshot:Dictionary=city.snapshot();var copy:=State.new()
		check(copy.restore(JSON.parse_string(JSON.stringify(snapshot))).ok and Seats.plans(copy)==seats,"cold JSON reconstructs identical model seats")
		city.add_road([Vector2(-40,-17.8),Vector2(0,-17.8)] as Array[Vector2],"gravel","none",1.25,"none")
		Visits.tick(life,first,.1)
		check(not first.has("bench_visit") and not Seats.occupied(life,reserved) and first.node.get_child(0).position.y==0.,"deleting street furniture releases seat and resets body")
		check(city.undo().ok and Seats.plans(city)==seats,"Undo restores exact seat identities")
		first.bench_next=0.;check(Visits.start(life,first,reserved),"restored seat can be reserved again")
		if first.has("bench_visit"):
			Visits.tick(life,first,50.);Visits.tick(life,first,8.1);Visits.tick(life,first,50.)
			check(not first.has("bench_visit"),"normal leave path releases reservation")
	life.queue_free();await process_frame
	print("BENCH_VISITS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

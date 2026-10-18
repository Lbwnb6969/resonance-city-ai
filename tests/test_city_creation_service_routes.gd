extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=Fixture.build(300,true);var network:=Network.new()
	var actors:Array[Dictionary]=[];network.prepare(city.snapshot(),{},actors)
	var pairs:=0;var exact:=true;var immutable:=true
	# Discard every transient path and search. Publication still requires all
	# legal household/service pairs, not just the last 1024 route requests.
	network._route_cache.clear();network._route_cache_entries=0;network._route_searches.clear();network.route_counting=true
	var actual:Array=[]
	for start:String in network._service_routes:
		for finish:String in network._service_routes[start]:
			var route:Array[Vector3]=network._route(start,finish);pairs+=1
			exact=exact and route==network._service_routes[start][finish]
			actual.append([start,finish,route.duplicate()]);route.push_front(Vector3(99,99,99))
			immutable=immutable and network._route(start,finish)==network._service_routes[start][finish]
	_check(pairs>1024,"real three-hundred-house service table exceeds the transient cache limit")
	_check(exact and network.route_cache_stats.misses==0,"every prepared service pair survives transient cache eviction without main-thread Dijkstra")
	_check(immutable,"returned route arrays cannot mutate prepared service paths")
	# Independently rerun the original Dijkstra with all prepared paths absent.
	network._service_routes.clear();network.route_counting=false
	for row:Array in actual:exact=exact and network._route(row[0],row[1])==row[2]
	_check(exact,"all pinned routes exactly match fresh original sorted-queue shortest paths including tie order")
	var empty:Dictionary=city.snapshot();empty.roads=[];network.prepare(empty,{},actors)
	_check(network._service_routes.is_empty() and network.connected_houses.is_empty(),"removing the real street graph invalidates every prepared service route")
	print("SERVICE_ROUTES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"pairs":pairs,"failures":failures}));quit(0 if failures.is_empty() else 1)

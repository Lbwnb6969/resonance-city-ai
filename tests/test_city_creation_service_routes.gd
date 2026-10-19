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
	var pairs:=0;var exact:=true;var immutable:=true;var lengths_match:=true
	# Discard every transient path and search. Publication still requires all
	# legal household/service pairs, not just the last 1024 route requests.
	network._route_cache.clear();network._route_cache_entries=0;network.route_counting=true
	var actual:Array=[]
	for start:String in network._service_routes:
		for finish:String in network._service_routes[start]:
			var route:Array[Vector3]=network._route(start,finish);pairs+=1
			var distance:=INF if route.is_empty() else 0.
			for i in range(1,route.size()):distance+=route[i-1].distance_to(route[i])
			lengths_match=lengths_match and network.route_length(start,finish)==distance
			exact=exact and route==network._service_routes[start][finish]
			actual.append([start,finish,route.duplicate()]);route.push_front(Vector3(99,99,99))
			immutable=immutable and network._route(start,finish)==network._service_routes[start][finish]
	_check(pairs>1024,"real three-hundred-house service table exceeds the transient cache limit")
	_check(exact and network.route_cache_stats.misses==0,"every prepared service pair survives transient cache eviction without main-thread searches")
	_check(immutable,"returned route arrays cannot mutate prepared service paths")
	_check(lengths_match,"every service length equals the exact original three-dimensional route sum including ramps and bridges")
	var began:=Time.get_ticks_usec();var old_total:=0.;var new_total:=0.
	for row:Array in actual:
		var path:Array[Vector3]=network._route(row[0],row[1])
		for i in range(1,path.size()):old_total+=path[i-1].distance_to(path[i])
	var copy_sum_us:=Time.get_ticks_usec()-began;began=Time.get_ticks_usec()
	for row:Array in actual:new_total+=network.route_length(row[0],row[1])
	var prepared_us:=Time.get_ticks_usec()-began
	_check(absf(old_total-new_total)<.000001,"prepared lengths preserve the total three-dimensional service distance")
	# Re-query every native shortest path with all prepared paths absent.
	network._service_routes.clear();network.route_counting=false
	for row:Array in actual:exact=exact and network._route(row[0],row[1])==row[2]
	_check(exact,"all pinned routes match fresh native shortest paths")
	var empty:Dictionary=city.snapshot();empty.roads=[];network.prepare(empty,{},actors)
	_check(network._service_routes.is_empty() and network._service_lengths.is_empty() and network.connected_houses.is_empty() and is_inf(network.route_length("absent","absent")),"removing the real street graph invalidates paths and lengths and cannot grant zero-distance service")
	print("SERVICE_ROUTES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"pairs":pairs,"copy_sum_us":copy_sum_us,"prepared_us":prepared_us,"failures":failures}));quit(0 if failures.is_empty() else 1)

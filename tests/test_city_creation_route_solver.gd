extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
var failures: Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func distances(graph: Dictionary,start: String)->Dictionary:
	# Independent exhaustive minimum scan, with no native solver/cache reuse.
	var result: Dictionary={start:0.};var settled: Dictionary={}
	while true:
		var next:="";var cheapest:=INF
		for id: String in result:
			if not settled.has(id) and float(result[id])<cheapest:next=id;cheapest=result[id]
		if next.is_empty():return result
		settled[next]=true
		for neighbor: String in graph[next]:
			result[neighbor]=minf(float(result.get(neighbor,INF)),cheapest+float(graph[next][neighbor]))
	return result
func route_cost(network: RefCounted,route: Array[Vector3])->float:
	var cost:=0.
	for i in range(1,route.size()):
		var a: String=network._key(Vector2(route[i-1].x,route[i-1].z))
		var b: String=network._key(Vector2(route[i].x,route[i].z))
		if not network.graph.get(a,{}).has(b):return INF
		cost+=float(network.graph[a][b])
	return cost
func _run()->void:
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"real flagship restores")
	var network:=Network.new();network.state=city;network._build_graph()
	var nodes: Array=network.graph.keys();var cold: Array[float]=[];var routes:=0;var valid:=true
	for offset in [0,nodes.size()/4,nodes.size()/2,nodes.size()-1]:
		var start: String=nodes[int(offset)];var expected:=distances(network.graph,start)
		for index in range(0,nodes.size(),maxi(1,nodes.size()/24)):
			var finish: String=nodes[index];network._route_cache.clear();network._route_cache_entries=0
			var began:=Time.get_ticks_usec();var route: Array[Vector3]=network._route(start,finish);cold.append((Time.get_ticks_usec()-began)/1000.);routes+=1
			valid=valid and not route.is_empty() and absf(route_cost(network,route)-float(expected[finish]))<.0001
			for point: Vector3 in route:
				var id: String=network._key(Vector2(point.x,point.z))
				valid=valid and point.distance_to(Vector3(network.positions[id])+Vector3(0,.1,0))<.00001
	check(valid and routes>=96,"real cold routes follow only legal edges, match independent shortest costs and retain every 3D road height")
	var start: String=nodes[0];var end: String=nodes[-1];var original: Array[Vector3]=network._route(start,end)
	var returned: Array[Vector3]=network._route(start,end);returned[0]=Vector3(99,99,99)
	check(network._route(start,end)==original,"mutable caller routes cannot corrupt cached paths")
	check(network._route("missing",end).is_empty() and network._route(start,"missing").is_empty(),"invalid endpoints return no route")
	var solver=network.RouteSolver.new()
	solver.build({"s":{"s":.001,"a":2.,"b":1.},"a":{"f":1.},"b":{"f":8.},"f":{},"island":{}},{"s":Vector3.ZERO,"a":Vector3(100,4,0),"b":Vector3(1,2,0),"f":Vector3(2,3,0),"island":Vector3(2,3,.1)})
	var path:=solver.get_id_path(solver.ids.s,solver.ids.f)
	check(path.size()==3 and solver.keys[path[1]]=="a","exact authored directed edge costs override Euclidean geometry; positive self-loop cannot create a shortcut")
	check(solver.get_id_path(solver.ids.f,solver.ids.s).is_empty() and solver.get_id_path(solver.ids.s,solver.ids.island).is_empty(),"solver cannot invent reverse edges or jump disconnected components")
	var old_id:=network._route_solver.get_instance_id();city.roads.clear();network._build_graph()
	check(network._route_solver.get_instance_id()==old_id and network._route(start,end).is_empty() and network._route_solver.get_point_count()==0,"publishing an empty edited graph clears the old solver and route cache")
	cold.sort();print("NATIVE_ROUTES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"routes":routes,"vertices":nodes.size(),"cold_p95_ms":cold[int(cold.size()*.95)],"cold_max_ms":cold[-1],"failures":failures}));quit(0 if failures.is_empty() else 1)

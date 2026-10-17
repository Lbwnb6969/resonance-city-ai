extends SceneTree
## Compare spatial attachment against the previous full-graph/wall scan.
const State = preload("res://scripts/world/city_creation_state.gd")
const Network = preload("res://scripts/world/city_creation_network.gd")
const Life = preload("res://scripts/world/city_creation_life.gd")
const Passage = preload("res://scripts/world/city_creation_passage.gd")
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
const SAMPLE = "res://数据/经营河湾样例.json"
var failures: Array[String] = []
var comparisons := 0
var baseline_edge_tests := 0
var baseline_wall_tests := 0

func _initialize() -> void: _run.call_deferred()
func _check(ok: bool,label: String) -> void:
	if not ok:
		failures.append(label)
		push_error(label)

func _old_wall(network: RefCounted,a: Vector2,b: Vector2) -> bool:
	for house: Dictionary in network.state.houses:
		var passages: Array[Dictionary] = network.state.house_passages(str(house.id))
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			baseline_wall_tests += 1
			if Passage.segment_blocked(house,cell,a,b,passages): return true
	return false

func _old_attachment(network: RefCounted,point: Vector3,finish: String) -> Array[Vector3]:
	var planar := Vector2(point.x,point.z)
	var best: Array[Vector3] = []
	if not network.graph.has(finish): return best
	var reachable := {finish:true}
	var queue: Array[String] = [finish]
	var cursor := 0
	while cursor < queue.size():
		var current: String = queue[cursor]
		cursor += 1
		for neighbor: String in network.graph[current]:
			if reachable.has(neighbor): continue
			reachable[neighbor] = true
			queue.append(neighbor)
	var best_distance := INF
	var best_length := INF
	var attachments: Array[Dictionary] = []
	for start: String in network.graph:
		if not reachable.has(start): continue
		for end: String in network.graph[start]:
			if start > end: continue
			baseline_edge_tests += 1
			var a: Vector3 = network.positions[start]
			var b: Vector3 = network.positions[end]
			var projected := Geometry2D.get_closest_point_to_segment(planar,Vector2(a.x,a.z),Vector2(b.x,b.z))
			var distance := planar.distance_squared_to(projected)
			if distance > 0.81 or distance > best_distance + 0.000001: continue
			if _old_wall(network,planar,projected): continue
			if distance < best_distance - 0.000001: attachments.clear()
			best_distance = distance
			attachments.append({"start":start,"end":end,"point":projected})
	for attachment: Dictionary in attachments:
		var projected: Vector2 = attachment.point
		var projection := Vector3(projected.x,network.state.street_height(projected)+0.10,projected.y)
		for endpoint: String in [str(attachment.start),str(attachment.end)]:
			var candidate: Array[Vector3] = network._route(endpoint,finish)
			if candidate.is_empty(): continue
			var length := projection.distance_to(candidate[0])
			for i in range(1,candidate.size()): length += candidate[i-1].distance_to(candidate[i])
			if length < best_length:
				best_length = length
				best = candidate
				best.push_front(projection)
	return best

func _same(a: Array[Vector3],b: Array[Vector3]) -> bool:
	if a.size()!=b.size(): return false
	for i in range(a.size()):
		if a[i].distance_to(b[i])>0.00001: return false
	return true

func _compare(network: RefCounted,oracle: RefCounted,points: Array[Vector3],targets: Array) -> void:
	for point: Vector3 in points:
		for finish: String in targets:
			var actual: Array[Vector3] = network._route_from_position(point,finish)
			var expected := _old_attachment(oracle,point,finish)
			comparisons += 1
			_check(_same(actual,expected),"full scan parity at %s to %s" % [point,finish])

func _run() -> void:
	var city := State.new()
	var source: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(SAMPLE))
	_check(bool(city.restore(source).ok),"economy sample restores")
	var oracle := Network.new()
	oracle.state = city
	oracle._build_graph()
	var points: Array[Vector3] = []
	for id: String in oracle.connected_houses:
		points.append(Vector3(oracle.positions[oracle.connected_houses[id]])+Vector3(0,0.1,0))
	for road: Dictionary in city.roads:
		for i in range(0,road.points.size(),maxi(1,road.points.size()/3)):
			var p: Array = road.points[i]
			points.append(Vector3(float(p[0])+0.44,0.1,float(p[1])))
	var actors: Array[Dictionary] = []
	var targets: Array[String] = []
	for house: Dictionary in city.houses:
		if str(house.role)!="residential" and oracle.connected_houses.has(house.id):
			targets.append(str(oracle.connected_houses[house.id]))
	for point: Vector3 in points:
		actors.append({"point":point,"targets":[]})
		actors.append({"point":point+Vector3(0,1.7,0),"targets":[]})
	var network := Network.new()
	var started := Time.get_ticks_usec()
	network.prepare(city.snapshot(),oracle.connected_houses.duplicate(),actors)
	var prepare_ms := float(Time.get_ticks_usec()-started)/1000.0
	_compare(network,oracle,points,targets)
	var unique: Dictionary = {}
	for actor: Dictionary in actors: unique[network._key(Vector2(actor.point.x,actor.point.z))]=true
	_check(network.prepared_positions.size()==unique.size(),"different actor heights share one prepared origin")
	var life := Life.new()
	life.state = city
	life._adopt_network(network)
	var prepared_hits := 0
	for point: Vector3 in points:
		for finish: String in targets:
			var expected: Array[Vector3] = network.prepared_positions[network._key(Vector2(point.x,point.z))][finish]
			# Only use successful street routes here: empty routes intentionally
			# proceed to cafe/exterior fallback in the production Life method.
			if expected.is_empty(): continue
			_check(_same(life._route_from_position(point+Vector3(0,4.2,0),finish),expected),"life cache survives terrain Y adjustment")
			prepared_hits += 1
	_check(prepared_hits>0 and int(life._position_cache_stats.get("street_misses",0))==0,"prepared street resumes need no fallback search")
	life.free()
	var stats: Dictionary = network.attachment_stats.duplicate()
	_check(int(stats.edge_projections)<baseline_edge_tests,"spatial cache projects fewer edges than full scan")
	_check(int(stats.wall_tests)<baseline_wall_tests,"wall index checks fewer room cells than full scan")
	# One local edit should update an isolated copy of the published grid,
	# producing the exact same terrain/routes as a fresh whole-field rebuild.
	var terrain_seed := Terrain.new()
	terrain_seed.copy_cache_from(city._ground_terrain)
	var brush: Array[Vector2] = [Vector2(-7,-5)]
	_check(bool(city.add_terrain_stroke(brush,"raise",2.0,1.0).ok),"local terrain edit succeeds")
	var published_hash := hash([city._ground_terrain.raw_vertices,city._ground_terrain.vertices])
	var seeded_snapshot: Dictionary = city.snapshot()
	seeded_snapshot["ground_cache"] = terrain_seed
	var seeded := Network.new()
	seeded.prepare(seeded_snapshot,network.connected_houses.duplicate(),actors)
	_check(hash([city._ground_terrain.raw_vertices,city._ground_terrain.vertices])==published_hash,"worker cache writes leave live terrain unchanged")
	var cold := Network.new()
	cold.prepare(city.snapshot(),network.connected_houses.duplicate(),actors)
	_check(seeded.state._ground_terrain.raw_vertices==cold.state._ground_terrain.raw_vertices,"incremental and cold raw terrain are identical")
	_check(seeded.state._ground_terrain.vertices==terrain_seed.vertices and cold.state._ground_terrain.vertices.is_empty(),"navigation worker does not rebuild or publish protected terrain")
	_check(seeded.positions==cold.positions and seeded.connected_houses==cold.connected_houses,"incremental terrain preserves road heights and doors")
	_check(int(seeded.prepare_stats.terrain_changed_vertices)>0 and int(cold.prepare_stats.terrain_changed_vertices)>int(seeded.prepare_stats.terrain_changed_vertices),"navigation worker measures local raw terrain work without rebuilding the protected field")
	print("NETWORK_TERRAIN_SEED_RESULT ",JSON.stringify({"seeded":seeded.prepare_stats,"cold":cold.prepare_stats}))
	# Long segments, negative bucket boundaries and overlapping disconnected
	# components ensure the nearest global edge never hides a valid component.
	var isolated := Network.new()
	isolated.state = State.new()
	isolated.state._prepare_raw_height()
	isolated.state._road_heights.prepare(isolated.state)
	isolated.graph={"a":{"b":40.0},"b":{"a":40.0},"c":{"d":40.0},"d":{"c":40.0}}
	isolated.positions={"a":Vector3(-20,0,-2.01),"b":Vector3(20,0,-2.01),"c":Vector3(-20,0,-2.8),"d":Vector3(20,0,-2.8)}
	isolated.component_of={"a":"a","b":"a","c":"c","d":"c"}
	isolated._build_attachment_index()
	var edge_points: Array[Vector3] = [Vector3(-2,0,-2.4),Vector3(2,0,-2.01),Vector3(-.001,0,-2.0001),Vector3(0,0,8)]
	_compare(isolated,isolated,edge_points,["b","d"])
	print("NETWORK_SPATIAL_RESULT ",JSON.stringify({"ok":failures.is_empty(),"comparisons":comparisons,"origins":unique.size(),"height_cache_hits":prepared_hits,"prepare_ms":prepare_ms,"spatial":stats,"baseline_edge_tests":baseline_edge_tests,"baseline_wall_tests":baseline_wall_tests,"failures":failures}))
	quit(0 if failures.is_empty() else 1)

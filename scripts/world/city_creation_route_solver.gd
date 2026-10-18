extends AStar2D
## Each published Network owns its solver; worker preparation never shares it
## with the currently live town. Keep exact authored edge costs, including
## sub-millimetre intersections which share a rounded position key.
var keys: Array[String] = []
var ids: Dictionary = {}
var costs: Array[Dictionary] = []

func build(graph: Dictionary, positions: Dictionary) -> void:
	clear();keys.clear();ids.clear();costs.clear()
	if graph.is_empty(): return
	reserve_space(graph.size())
	for key: String in graph:
		var id := keys.size()
		keys.append(key);ids[key]=id;costs.append({})
		var at: Vector3=positions[key]
		add_point(id,Vector2(at.x,at.z))
	for key: String in graph:
		var id: int=ids[key]
		for neighbor: String in graph[key]:
			var target: int=ids[neighbor]
			if id==target: continue
			costs[id][target]=float(graph[key][neighbor])
			connect_points(id,target,false)

func _compute_cost(from_id: int, to_id: int) -> float:
	return costs[from_id][to_id]

func _estimate_cost(_from_id: int, _to_id: int) -> float:
	# Zero is admissible even where key rounding makes planar distance differ
	# slightly from the original segment cost. The native queue runs Dijkstra.
	return 0.0

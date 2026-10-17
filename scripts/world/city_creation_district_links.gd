extends RefCounted
## Derived links use the already published Network's selected door ports and
## exact shortest routes. This helper creates no graph, actor or audio source.
const HOUSE_RANGE := 14.0
const ROUTE_RANGE := 22.0
const SAMPLE_STEP := 0.75
const MAX_EMPTY_GAP := 2.7
const TIE_EPSILON := 0.000001

func derive(city: RefCounted,network: RefCounted) -> Array[Dictionary]:
	var houses: Array[Dictionary] = []
	for house: Dictionary in city.houses:
		var id := str(house.id)
		if not network.connected_houses.has(id): continue
		var position := Vector2(float(house.origin[0]),float(house.origin[1]))
		var district: Dictionary = city.district_at(position)
		if district.is_empty(): continue
		houses.append({"id":id,"position":position,"district":str(district.id),"style":str(district.style),
			"port":str(network.connected_houses[id])})
	houses.sort_custom(func(a: Dictionary,b: Dictionary) -> bool: return str(a.id)<str(b.id))
	var best: Dictionary = {}
	for first in range(houses.size()):
		var from: Dictionary = houses[first]
		for second in range(first+1,houses.size()):
			var to: Dictionary = houses[second]
			if from.district==to.district or from.style==to.style: continue
			var planar: float = Vector2(from.position).distance_to(Vector2(to.position))
			if planar>HOUSE_RANGE: continue
			# Each connected house has one selected real entrance/component.
			# A port-to-port straight distance is only a lower bound, never a link.
			var port_a: Vector3 = network.positions[from.port]
			var port_b: Vector3 = network.positions[to.port]
			if Vector2(port_a.x,port_a.z).distance_to(Vector2(port_b.x,port_b.z))>ROUTE_RANGE: continue
			var route: Array[Vector3] = network._route(str(from.port),str(to.port))
			if route.is_empty(): continue
			var distance := 0.0
			for index in range(1,route.size()):
				distance += Vector2(route[index-1].x,route[index-1].z).distance_to(Vector2(route[index].x,route[index].z))
			if distance>ROUTE_RANGE: continue
			var district_ids: Array[String] = [str(from.district),str(to.district)]
			district_ids.sort()
			var id := "district_link_"+"_".join(district_ids)
			if best.has(id) and not _shorter(distance,planar,str(from.id),str(to.id),best[id]): continue
			var adjacency := _adjacency(city,route,str(from.district),str(to.district))
			if not bool(adjacency.valid): continue
			best[id] = {"id":id,"from_id":str(from.id),"to_id":str(to.id),
				"from_district":str(from.district),"to_district":str(to.district),
				"from_style":str(from.style),"to_style":str(to.style),
				"from_position":from.position,"to_position":to.position,
				"route":route,"distance":distance,"empty_gap":adjacency.empty_gap,"_planar":planar}
	var ids: Array = best.keys()
	ids.sort()
	var result: Array[Dictionary] = []
	for id: String in ids:
		var row: Dictionary = best[id]
		row.erase("_planar")
		result.append(row)
	return result

func _shorter(distance: float,planar: float,from: String,to: String,prior: Dictionary) -> bool:
	if absf(distance-float(prior.distance))>TIE_EPSILON: return distance<float(prior.distance)
	if absf(planar-float(prior._planar))>TIE_EPSILON: return planar<float(prior._planar)
	if from!=str(prior.from_id): return from<str(prior.from_id)
	return to<str(prior.to_id)

func _district_id(city: RefCounted,at: Vector2) -> String:
	return str(city.district_at(at).get("id",""))

func _adjacency(city: RefCounted,route: Array[Vector3],from: String,to: String) -> Dictionary:
	var gap:=0.0
	var maximum:=0.0
	var previous:=Vector2(route[0].x,route[0].z)
	var previous_id:=_district_id(city,previous)
	if not previous_id.is_empty() and previous_id!=from and previous_id!=to: return {"valid":false,"empty_gap":maximum}
	for index in range(1,route.size()):
		var a:=Vector2(route[index-1].x,route[index-1].z)
		var b:=Vector2(route[index].x,route[index].z)
		var steps:=maxi(1,ceili(a.distance_to(b)/(SAMPLE_STEP*0.5)))
		for sample in range(1,steps+1):
			var point:=a.lerp(b,float(sample)/float(steps))
			var id:=_district_id(city,point)
			if not id.is_empty() and id!=from and id!=to: return {"valid":false,"empty_gap":maximum}
			if id==previous_id:
				gap=gap+previous.distance_to(point) if id.is_empty() else 0.0
			else:
				# Refine observed zone transitions, so a 2.5m bridge gap is not
				# rounded up to whole sampling cells and falsely rejected.
				var low:=previous
				var high:=point
				for iteration in range(12):
					var middle:=low.lerp(high,0.5)
					var middle_id:=_district_id(city,middle)
					if not middle_id.is_empty() and middle_id!=from and middle_id!=to: return {"valid":false,"empty_gap":maximum}
					if middle_id==previous_id: low=middle
					else: high=middle
				var boundary:=low.lerp(high,0.5)
				if previous_id.is_empty(): maximum=maxf(maximum,gap+previous.distance_to(boundary))
				gap=boundary.distance_to(point) if id.is_empty() else 0.0
			maximum=maxf(maximum,gap)
			if maximum>MAX_EMPTY_GAP+TIE_EPSILON: return {"valid":false,"empty_gap":maximum}
			previous=point
			previous_id=id
	return {"valid":true,"empty_gap":maximum}

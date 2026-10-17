extends RefCounted
## Fixed manual route; no clocks, rewards, nodes or audio resources of its own.

static func candidates(life: Node3D, first: String) -> Array[String]:
	var result: Array[String] = []
	if str(life._roles.get(first,""))!="venue" or not life.connected_houses.has(first): return result
	var others: Array[String] = []
	for house: Dictionary in life.state.houses:
		var id := str(house.id)
		if id==first or str(house.role) not in ["venue","symphony_hall"] or not life.connected_houses.has(id): continue
		if not life._route(str(life.connected_houses[first]),str(life.connected_houses[id])).is_empty(): others.append(id)
	others.sort_custom(func(a: String,b: String)->bool: return int(a.substr(1))<int(b.substr(1)))
	result.append(first);result.append_array(others)
	return result

static func remaining_reachable(life: Node3D, relay: Dictionary) -> bool:
	if relay.is_empty(): return false
	var anchor: String = str(relay.venues[int(relay.index)])
	if str(life._roles.get(anchor,""))!="venue" or not life.connected_houses.has(anchor): return false
	for index in range(int(relay.index)+1,relay.venues.size()):
		var id: String = str(relay.venues[index])
		if str(life._roles.get(id,""))!="venue" or not life.connected_houses.has(id): return false
		if life._route(str(life.connected_houses[anchor]),str(life.connected_houses[id])).is_empty(): return false
	return true

static func from_checkpoint(data: Dictionary, concert: Dictionary, concerts: int) -> Dictionary:
	if data.get("schema")!=2 or not data.get("relay") is Dictionary: return {}
	var row: Dictionary = data.relay
	if row.size()!=3 or not row.get("venues") is Array or row.venues.size()<2: return {}
	for key: String in ["index","concerts_before"]:
		var value: Variant = row.get(key)
		if not (value is int or value is float) or not is_finite(float(value)) or float(value)!=floor(float(value)) or float(value)<0.0: return {}
	var index := int(row.index)
	if index>=row.venues.size() or concerts!=int(row.concerts_before)+index: return {}
	if concert.get("phase","idle") not in ["gathering","playing"] or concert.get("source","manual")!="manual" or concert.has("sponsors") or concert.get("venue_id")!=row.venues[index]: return {}
	var venues: Array[String] = []
	for id: Variant in row.venues:
		if not id is String or not id.begins_with("h"): return {}
		var number: String = id.substr(1)
		if not number.is_valid_int() or int(number)<=0 or str(int(number))!=number or venues.has(id): return {}
		venues.append(id)
	return {"venues":venues,"index":index,"concerts_before":int(row.concerts_before)}

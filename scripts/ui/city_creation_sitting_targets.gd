extends RefCounted
## Views use published benches and the same reachable balcony landing as residents.
const Seats=preload("res://scripts/world/city_creation_bench_seats.gd")
const Balconies=preload("res://scripts/world/city_creation_balcony_visits.gd")
const Plan=preload("res://scripts/world/city_creation_balcony_plan.gd")
static func plans(demo)->Dictionary:
	var result:=Seats.plans(demo.state).duplicate()
	for host:String in Balconies.plans(demo.life):
		if not demo.life.connected_houses.has(host):continue
		var row:Dictionary=Balconies.plans(demo.life)[host]
		var entry:Dictionary=demo.life.selected_entrances.get(host,{})
		if entry.is_empty() or str(entry.cell_id)!=str(row.plan.lower.id) or Vector2i(entry.side)!=row.plan.side:continue
		var door:Vector3=demo.life.positions[demo.life.connected_houses[host]]+Vector3.UP*.1
		var path:=Plan.route(row.house,row.plan,door);var point:Vector3=path[-1]
		var face:=Plan.Frame.direction(row.house,Vector2(row.plan.side),row.plan.upper)
		var id:="balcony/"+host
		result[id]={"id":id,"host":host,"at":Vector2(point.x,point.z),"y":point.y,"eye_height":.48,"face":face,"signature":hash([row.house,row.plan,door])}
	return result
static func occupied(demo,id:String)->bool:
	if Seats.occupied(demo.life,id):return true
	if not id.begins_with("balcony/"):return false
	var host:=id.trim_prefix("balcony/")
	return demo.life.residents.any(func(r):return str(r.home_id)==host and r.has("balcony_visit"))

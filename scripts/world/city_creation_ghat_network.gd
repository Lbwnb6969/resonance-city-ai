extends RefCounted
const Plan=preload("res://scripts/world/city_creation_water_ghat.gd")
static func walk_height(life,at:Vector2)->float:
	var y:=height(life._network,at)
	return float(life.state.street_height(at)) if is_nan(y) else y
static func height(network,at:Vector2)->float:
	for seat:Dictionary in network.ghat_seats.values():
		for rank in range(2):
			var step:Dictionary=seat.ghat.steps[rank]
			if Plan.Frame.contains({"polygon":step.polygon},at):return float(step.y)
	return NAN
static func attach(network)->void:
	network.ghat_seats.clear()
	for seat:Dictionary in Plan.seats(network.state).values():
		var street:String=network._key(seat.street)
		if not network.graph.has(street):continue
		var previous:=street
		for rank in range(2):
			var step:Dictionary=seat.ghat.steps[rank];var id:String=seat.id if rank==1 else seat.id+"/landing";var at:=Vector3(step.center.x,step.y,step.center.y)
			network.positions[id]=at;network.graph[id]={};network.component_of[id]=network.component_of[street]
			var length:float=at.distance_to(network.positions[previous]);network.graph[id][previous]=length;network.graph[previous][id]=length;previous=id
		network.ghat_seats[seat.id]=seat
static func rest(life,actor:Dictionary)->bool:
	var id:=str(actor.current)
	if not life._network.ghat_seats.has(id) or actor.get("ghat_turn",-1)==actor.turn:return false
	actor.ghat_turn=actor.turn
	if preload("res://scripts/world/city_creation_bench_seats.gd").occupied(life,id):return false
	var seat:Dictionary=life._network.ghat_seats[id];actor.ghat_rest=id;actor.wait=8.;actor.node.rotation.y=atan2(seat.face.x,seat.face.y);return true

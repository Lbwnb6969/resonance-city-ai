extends RefCounted
## One branch off an original road edge; never a shortcut or economic activity.
const Plan=preload("res://scripts/world/city_creation_plaza_pergola.gd")
static func _link(network,a:String,b:String)->void:
	var length:float=network.positions[a].distance_to(network.positions[b]);network.graph[a][b]=length;network.graph[b][a]=length
static func attach(network)->void:
	var seats:Dictionary={};network.set_meta("plaza_seats",seats);var city=network.state;var rows:=Plan.plans(city)
	if rows.is_empty():return
	var obstacles:=Plan.Obstacles.collect(city)
	for row:Dictionary in rows:
		var best:Dictionary={};var distance:=INF
		for side in range(4):
			var at:=Plan.point(row,Vector2(cos(side*PI*.5),sin(side*PI*.5))*1.40)
			for a:String in network.road_edges:
				for b:String in network.road_edges[a]:
					if a>=b:continue
					var from:=Vector2(network.positions[a].x,network.positions[a].z);var to:=Vector2(network.positions[b].x,network.positions[b].z);var projected:=Geometry2D.get_closest_point_to_segment(at,from,to);var length:float=projected.distance_to(at)
					if length<distance and length>.15 and Plan.clear_leg(city,row,projected,at,obstacles):distance=length;best={"a":a,"b":b,"street":projected,"side":side}
		if best.is_empty():continue
		var prefix:="plaza_rest/"+str(row.loop_key);var port:=prefix+"/street";network.positions[port]=Vector3(best.street.x,city.street_height(best.street),best.street.y);network.graph[port]={};network.component_of[port]=network.component_of[best.a];_link(network,port,best.a);_link(network,port,best.b)
		for i in range(8):
			var id:=prefix+"/"+str(i);var at:=Plan.point(row,Vector2(cos(i*TAU/8.),sin(i*TAU/8.))*1.40);network.positions[id]=Vector3(at.x,city.ground_height(at)+.075,at.y);network.graph[id]={};network.component_of[id]=network.component_of[port]
			if i%2==0:seats[id]={"id":id,"at":at,"center":row.center,"loop_key":row.loop_key}
		for i in range(8):_link(network,prefix+"/"+str(i),prefix+"/"+str((i+1)%8))
		_link(network,port,prefix+"/"+str(int(best.side)*2))
static func next_key(network,actor:Dictionary)->String:
	var at:=str(actor.current)
	if not at.begins_with("plaza_rest/") or not at.ends_with("/street") or str(actor.previous).begins_with("plaza_rest/"):return ""
	var seats:Dictionary=network.get_meta("plaza_seats",{})
	for neighbor:String in network.graph[at]:
		if seats.has(neighbor) and Vector2(network.positions[neighbor].x,network.positions[neighbor].z).distance_to(Vector2(actor.origin.x,actor.origin.z))<=preload("res://scripts/world/city_creation_quiet_walk_routes.gd").RADIUS:return neighbor
	return ""
static func rest(life,actor:Dictionary)->bool:
	var seats:Dictionary=life._network.get_meta("plaza_seats",{});var id:=str(actor.current)
	if not seats.has(id) or actor.get("plaza_turn",-1)==actor.turn:return false
	for other:Dictionary in life.quiet_walk.actors.values():
		if other.get("plaza_rest","")==id:return false
	if life.residents.any(func(r):return r.get("idle_walk",{}).get("plaza_rest","")==id):return false
	actor.plaza_turn=actor.turn;actor.plaza_rest=id;actor.wait=7.+posmod(actor.seed,3);var face:Vector2=Vector2(seats[id].center)-Vector2(seats[id].at);actor.node.rotation.y=atan2(face.x,face.y);return true

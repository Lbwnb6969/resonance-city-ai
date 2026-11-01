extends RefCounted
## Local street edges only. No service search, travel observation or State writes.
const RADIUS:=14.
static func planar(point:Vector3)->Vector2:return Vector2(point.x,point.z)
static func next_key(graph:Dictionary,positions:Dictionary,at:String,previous:String,origin:Vector3,seed:int,turn:int)->String:
	var choices:Array[String]=[]
	for neighbor:String in graph.get(at,{}):
		if neighbor==at or float(graph[at][neighbor])<=.0001:continue
		if planar(positions[neighbor]).distance_to(planar(origin))>RADIUS:continue
		choices.append(neighbor)
	choices.sort()
	if choices.size()>1:choices.erase(previous)
	return "" if choices.is_empty() else choices[posmod(seed+turn,choices.size())]
static func start(network:RefCounted,point:Vector3,home:String)->Dictionary:
	var port:String=network.connected_houses.get(home,"")
	if port.is_empty() or not network.graph.has(port):return {}
	var origin:Vector3=network.positions[port]
	var component:String=network.component_of[port]
	var attachments:Dictionary=network._attachments_for_planar(planar(point))
	var best:Dictionary={};var distance:=INF
	for entry:Dictionary in attachments.get(component,[]):
		for endpoint:String in [str(entry.start),str(entry.end)]:
			if planar(network.positions[endpoint]).distance_to(planar(origin))>RADIUS:continue
			var length:=planar(point).distance_to(planar(entry.projection))+planar(entry.projection).distance_to(planar(network.positions[endpoint]))
			if length<distance:
				distance=length;best={"key":endpoint,"projection":entry.projection}
	if best.is_empty():return {}
	var route:Array[Vector3]=[point,best.projection,network.positions[best.key]+Vector3.UP*.10]
	return {"current":best.key,"previous":"","origin":origin,"seed":home.hash(),"turn":0,"route":route,"index":1,"wait":0.}

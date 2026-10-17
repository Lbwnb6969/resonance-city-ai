extends RefCounted
## Shared pure rail graph supplies actual overhead wires, stops and plaza rails.
const Network=preload("res://scripts/world/city_creation_network.gd")
const Plan=preload("res://scripts/world/city_creation_tram_plan.gd")
var _revision := -1
var _plan: Dictionary={}

static func signature(city: RefCounted,road: Dictionary)->Array:
	if str(road.get("style","path"))!="tram":return []
	var houses: Array=[]
	for house: Dictionary in city.houses:houses.append([house.id,house.origin,house.cells,house.get("base_y",0.)])
	return [city.roads,houses]

func prepare(renderer,road: Dictionary)->Dictionary:
	var result: Dictionary={"parts":[],"lamps":[],"stations":[],"wire_segments":0,"ring_rails":0}
	if str(road.get("style","path"))!="tram":return result
	if _revision!=renderer.state.revision:
		var network:=Network.new();network.state=renderer.state;network._build_graph()
		_plan=Plan.from_network(renderer.state,network);_revision=renderer.state.revision
	var bronze:=Color("a98a54");var iron:=Color("4a6158")
	var markers: Array=renderer.state.Roundabouts.all(renderer.state.roads)
	for edge: Dictionary in _plan.edges:
		if str(edge.owner)!=str(road.id):continue
		var a:=Vector2(edge.a.x,edge.a.z);var b:=Vector2(edge.b.x,edge.b.z)
		var direction: Vector2=(b-a).normalized();var normal:=Vector2(-direction.y,direction.x)
		var count:=maxi(1,ceili(a.distance_to(b)/.35))
		for i in range(count):
			var p:=a.lerp(b,float(i)/count);var q:=a.lerp(b,float(i+1)/count)
			var y0: float=renderer.state.street_height(p);var y1: float=renderer.state.street_height(q)
			var midpoint: Vector2=(p+q)*.5;var y: float=(y0+y1)*.5
			var rotation:=Vector3(-atan2(y1-y0,p.distance_to(q)),atan2(direction.x,direction.y),0)
			_box(result,Vector3(.018,.018,Vector3(p.x,y0,p.y).distance_to(Vector3(q.x,y1,q.y))+.004),Vector3(midpoint.x,y+1.73,midpoint.y),bronze,rotation)
			result.wire_segments+=1
			for marker: Dictionary in markers:
				if midpoint.distance_to(marker.center)>float(marker.radius)+.1:continue
				for side: float in [-1.,1.]:
					var at: Vector2=midpoint+normal*.32*side
					_box(result,Vector3(.035,.025,p.distance_to(q)+.008),Vector3(at.x,y+.014,at.y),Color("67716b"),rotation);result.ring_rails+=1
				break
	for station: Dictionary in _plan.stations:
		var key: String=station.key;var owner := ""
		for edge: Dictionary in _plan.edges:
			if Vector3(edge.a).distance_to(station.at)<.01 or Vector3(edge.b).distance_to(station.at)<.01:owner=str(edge.owner);break
		if owner!=str(road.id):continue
		var at: Vector3=station.at
		if renderer.state.water_clearance(Vector2(at.x,at.z))<.3:continue
		var neighbor: String=_plan.graph[key].keys()[0]
		var direction:=Vector2(_plan.positions[neighbor].x-at.x,_plan.positions[neighbor].z-at.z).normalized()
		var normal:=Vector2(-direction.y,direction.x)
		var post:=Vector2(at.x,at.z)+normal*(float(road.width)*.5+.30)
		if not _clear(renderer.state,post):post=Vector2(at.x,at.z)-normal*(float(road.width)*.5+.30)
		if not _clear(renderer.state,post):continue
		var y: float=renderer.state.ground_height(post)
		_box(result,Vector3(.065,1.95,.065),Vector3(post.x,y+.975,post.y),iron)
		var arm_center: Vector2=(post+Vector2(at.x,at.z))*.5
		_box(result,Vector3(.04,.04,post.distance_to(Vector2(at.x,at.z))+.08),Vector3(arm_center.x,at.y+1.73,arm_center.y),iron,Vector3(0,atan2(normal.x,normal.y),0))
		_box(result,Vector3(.29,.32,.07),Vector3(post.x,y+1.60,post.y),Color("e4d9b8"))
		_box(result,Vector3(.20,.03,.075),Vector3(post.x,y+1.69,post.y+.005),iron)
		_box(result,Vector3(.035,.18,.075),Vector3(post.x,y+1.59,post.y+.005),iron)
		result.lamps.append(Vector3(post.x,y+1.99,post.y));result.stations.append(key)
	return result

static func _clear(city: RefCounted,at: Vector2)->bool:
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var center:=Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8)
			if Rect2(center-Vector2.ONE*.9,Vector2.ONE*1.8).grow(.20).has_point(at):return false
	return city.WORLD_RECT.has_point(at)

static func _box(data: Dictionary,size: Vector3,at: Vector3,color: Color,rotation:=Vector3.ZERO)->void:data.parts.append([size,at,color,rotation])

static func install(renderer,parent: Node3D,data: Dictionary)->void:
	if data.parts.is_empty():return
	var root:=Node3D.new();root.name="TramWiresAndStops";parent.add_child(root)
	root.set_meta("stations",data.stations);root.set_meta("wire_segments",data.wire_segments);root.set_meta("ring_rails",data.ring_rails)
	var batches: Dictionary={}
	for part: Array in data.parts:renderer._append_road_box(batches,part[0],part[1],renderer._material(part[2]),part[3])
	for batch: Dictionary in batches.values():
		var mesh:=MeshInstance3D.new();mesh.mesh=batch.surface.commit();mesh.material_override=batch.material;root.add_child(mesh)
	for point: Vector3 in data.lamps:renderer._cylinder(root,.065,.065,.10,point,renderer.promenade.lamp_material(),8)

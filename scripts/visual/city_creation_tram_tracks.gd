extends RefCounted
## One routed graph compiles continuous street/plaza rails, wires and stops.
const Network=preload("res://scripts/world/city_creation_network.gd")
const Plan=preload("res://scripts/world/city_creation_tram_plan.gd")
const GAUGE_HALF:=.32
const RAIL_OVERLAP:=.008
var _revision := -1
var _plan: Dictionary={}
var _tip_cache:Dictionary={}
# Preserve the navigation graph identity function without duplicating its rounding.
var _key_api:=Network.new()

static func signature(city: RefCounted,road: Dictionary)->Array:
	if str(road.get("style","path"))!="tram":return []
	var houses: Array=[]
	for house: Dictionary in city.houses:
		var id:=str(house.id)
		houses.append([id,city.house_entrances(id),city.house_passages(id)])
	return [city.roads,houses]

func prepare(renderer,road: Dictionary)->Dictionary:
	var result: Dictionary={"parts":[],"lamps":[],"stations":[],"wire_segments":0,"ring_rails":0}
	if str(road.get("style","path"))!="tram":return result
	if _revision!=renderer.state.revision:
		var network:=Network.new();network.state=renderer.state;network._build_graph()
		_plan=Plan.from_network(renderer.state,network);_revision=renderer.state.revision;_tip_cache.clear()
	var bronze:=Color("a98a54");var iron:=Color("4a6158")
	var markers: Array=renderer.state.Roundabouts.all(renderer.state.roads)
	for edge: Dictionary in _plan.edges:
		if str(edge.owner)!=str(road.id):continue
		var a:=Vector2(edge.a.x,edge.a.z);var b:=Vector2(edge.b.x,edge.b.z)
		var direction: Vector2=(b-a).normalized()
		var ka:String=_key_api._key(a);var kb:String=_key_api._key(b)
		var offsets:Array=[]
		for side:float in [-1.,1.]:offsets.append([_rail_tip(_plan,ka,kb,side),_rail_tip(_plan,kb,ka,-side)])
		var count:=maxi(1,ceili(a.distance_to(b)/.35))
		for i in range(count):
			var p:=a.lerp(b,float(i)/count);var q:=a.lerp(b,float(i+1)/count)
			var y0: float=renderer.state.street_height(p);var y1: float=renderer.state.street_height(q)
			var midpoint: Vector2=(p+q)*.5;var y: float=(y0+y1)*.5
			var rotation:=Vector3(-atan2(y1-y0,p.distance_to(q)),atan2(direction.x,direction.y),0)
			_box(result,Vector3(.018,.018,Vector3(p.x,y0,p.y).distance_to(Vector3(q.x,y1,q.y))+.004),Vector3(midpoint.x,y+1.73,midpoint.y),bronze,rotation)
			result.wire_segments+=1
			var in_ring:=false
			for marker:Dictionary in markers:
				if midpoint.distance_to(marker.center)<=float(marker.radius)+.1:in_ring=true;break
			for ends:Array in offsets:
				var rp:Vector2=p+Vector2(ends[0]).lerp(ends[1],float(i)/count)
				var rq:Vector2=q+Vector2(ends[0]).lerp(ends[1],float(i+1)/count)
				var delta:=Vector3(rq.x-rp.x,y1-y0,rq.y-rp.y)
				_box(result,Vector3(.055,.028,delta.length()+RAIL_OVERLAP),Vector3((rp.x+rq.x)*.5,y+.014,(rp.y+rq.y)*.5),Color("67716b"),Vector3(-atan2(delta.y,Vector2(delta.x,delta.z).length()),atan2(delta.x,delta.z),0))
				if in_ring:result.ring_rails+=1
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

static func _xz(plan:Dictionary,key:String)->Vector2:
	var at:Vector3=plan.positions[key]
	return Vector2(at.x,at.z)

static func _continuation(plan:Dictionary,key:String,other:String)->String:
	var at:=_xz(plan,key);var direction:=(_xz(plan,other)-at).normalized()
	var neighbors:Array=plan.graph[key].keys();neighbors.sort()
	var best:=INF;var next:=""
	for neighbor:String in neighbors:
		if neighbor==other:continue
		var alignment:=direction.dot((_xz(plan,neighbor)-at).normalized())
		if alignment<best:best=alignment;next=neighbor
	return next

static func _node_offset(plan:Dictionary,key:String,other:String)->Vector2:
	var at:=_xz(plan,key);var direction:=(_xz(plan,other)-at).normalized()
	var normal:=Vector2(-direction.y,direction.x)
	var next:=_continuation(plan,key,other)
	if next.is_empty():return normal*GAUGE_HALF
	var continuation:=(_xz(plan,next)-at).normalized()
	var miter:Vector2=(normal-Vector2(-continuation.y,continuation.x)).normalized()
	return miter*(GAUGE_HALF/maxf(.5,miter.dot(normal)))

func _rail_tip(plan:Dictionary,key:String,other:String,side:float)->Vector2:
	var cache_key:Array=[key,other,side]
	if _tip_cache.has(cache_key):return _tip_cache[cache_key]
	var basic:=_node_offset(plan,key,other)*side
	var mate:=_continuation(plan,key,other)
	# Through pairs retain their shared miter, including both axes of a cross.
	if mate.is_empty() or _continuation(plan,key,mate)==other:
		_tip_cache[cache_key]=basic;return basic
	# A turnout has two independently fitted heads. Its inner head must land
	# on the curved through rail, rather than stopping on an infinite tangent.
	var neighbors:Array=plan.graph[key].keys();neighbors.sort()
	var at:=_xz(plan,key);var primary:Array=[];var alignment:=INF
	for i:int in range(neighbors.size()):
		for j:int in range(i+1,neighbors.size()):
			var dot_value:=(_xz(plan,neighbors[i])-at).normalized().dot((_xz(plan,neighbors[j])-at).normalized())
			if dot_value<alignment:alignment=dot_value;primary=[neighbors[i],neighbors[j]]
	var wanted:=at+basic;var fitted:=wanted;var distance:=INF
	for first:String in primary:
		var previous:=key;var current:=first;var walked:=0.
		while walked<GAUGE_HALF*4.:
			var a:=_xz(plan,previous);var b:=_xz(plan,current)
			var n0:=_node_offset(plan,previous,current);var n1:=-_node_offset(plan,current,previous)
			for rail_side:float in [-1.,1.]:
				var candidate:=Geometry2D.get_closest_point_to_segment(wanted,a+n0*rail_side,b+n1*rail_side)
				var gap:=wanted.distance_squared_to(candidate)
				if gap<distance:distance=gap;fitted=candidate
			walked+=a.distance_to(b)
			var next:=_continuation(plan,current,previous)
			if next.is_empty() or next==key:break
			previous=current;current=next
	_tip_cache[cache_key]=fitted-at
	return fitted-at

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

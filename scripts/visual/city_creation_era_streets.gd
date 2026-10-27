extends RefCounted
## Era decorations are compiled from the same road arc, height and district map.
const BridgePlan=preload("res://scripts/world/city_creation_bridge_plan.gd")
const WaterShader=preload("res://scripts/visual/shaders/creation_palace_water.gdshader")
const SHRUB_RADIUS:=.48
const STONE_RADIUS:=.25
const SHRUB_SCALE:=Vector3(.65,.70,.65)
var _owner:WeakRef
var _revision:=-1
var _cache:Dictionary={}
var _cache_signatures:Dictionary={}
var water_material:ShaderMaterial
func prepare(renderer,road:Dictionary)->Dictionary:
	if str(road.get("decoration","legacy"))!="legacy":return {"notes":[],"water":[],"gateways":[],"gardens":[]}
	var city:RefCounted=renderer.state;var profile:Dictionary=city.road_profile(road);var samples:Array=profile.samples
	renderer.promenade._prepare_clearance(city)
	var junctions:RefCounted=renderer.road_junctions()
	var inputs:Array=[road,profile.signature,city.districts,city.plants,renderer.promenade._clearance_signature,renderer.promenade.height_signature(city,road),junctions.signature(str(road.id))]
	var input:int=hash(inputs)
	if _cache_signatures.get(str(road.id))==input and _cache.has(str(road.id)):return _cache[str(road.id)]
	_cache_signatures[str(road.id)]=input
	var data:Dictionary={"notes":[],"water":[],"gateways":[],"gardens":[]}
	for i in range(1,samples.size()):
		var from:String=_era(city,samples[i-1].xz);var to:String=_era(city,samples[i].xz)
		if from==to:continue
		var low:float=samples[i-1].distance;var high:float=samples[i].distance
		for step in range(12):
			var middle:float=(low+high)*.5
			if _era(city,BridgePlan._point(samples,middle).at)==from:low=middle
			else:high=middle
		var arc:float=(low+high)*.5;var point:=BridgePlan._point(samples,arc)
		var normal:=Vector2(-point.tangent.y,point.tangent.x);var bridge:=false
		for run:Dictionary in profile.get("bridge_runs",[]):
			if arc>=float(run.start) and arc<=float(run.end):bridge=true;break
		var clear:=true
		for side:float in [-1.,1.]:
			if not bridge and not renderer.promenade._clear(city,road,point.at+normal*side*(float(road.width)*.5+.35),.20):clear=false
		if not clear:continue
		var busy:=false
		for marker:Dictionary in city.Roundabouts.all(city.roads):
			if point.at.distance_to(marker.center)<float(marker.radius)+1.:busy=true
		for other:Dictionary in city.roads:
			if other.id==road.id:continue
			for j in range(1,other.points.size()):
				if Geometry2D.get_closest_point_to_segment(point.at,Vector2(other.points[j-1][0],other.points[j-1][1]),Vector2(other.points[j][0],other.points[j][1])).distance_to(point.at)<2.:busy=true
		data.gateways.append({"at":point.at,"normal":normal,"tangent":point.tangent,"y":city.street_height(point.at)+(.55 if bridge else 0.),"from":from,"to":to,"width":road.width,"arc":arc,"kind":"bridge_lamps" if bridge else "welcome_lamps" if busy else "arch"})
	if str(road.get("style","path")) in ["promenade","avenue","tram"]:
		var length:float=samples[-1].distance;var arc:=1.6;var serial:=0
		while arc<length-1.:
			var point:=BridgePlan._point(samples,arc);var at:Vector2=point.at;var skip:bool=_era(city,at)!="modern_eco" or city.water_clearance(at)<=float(road.width)*.5+.6
			for marker:Dictionary in city.Roundabouts.all(city.roads):
				if at.distance_to(marker.center)<float(marker.radius)+.7:skip=true
			for tread:Dictionary in profile.treads:
				if arc>=float(tread.s0)-.5 and arc<=float(tread.s1)+.5:skip=true
			if not skip:
				var normal:=Vector2(-point.tangent.y,point.tangent.x)
				for side:float in [-1.,1.]:
					var note:Vector2=at+normal*side*(float(road.width)*.5-.20)
					data.notes.append({"at":note,"y":city.street_height(note)+.025,"yaw":atan2(point.tangent.x,point.tangent.y),"arc":arc})
					if serial%2==0:
						var basin:Vector2=at+normal*side*(float(road.width)*.5+.29);var clear:=true
						for offset:float in [-.75,0.,.75]:
							if not renderer.promenade._clear(city,road,basin+point.tangent*offset,.16):clear=false
						if clear:data.water.append({"at":basin,"y":city.ground_height(basin)+.02,"yaw":atan2(point.tangent.x,point.tangent.y),"arc":arc})
			arc+=3.2;serial+=1
	var furniture:Array=renderer.promenade.prepare(renderer,road) if not data.gateways.is_empty() else []
	for gateway:Dictionary in data.gateways:
		if gateway.kind=="bridge_lamps":continue
		for side:float in [-1.,1.]:
			var garden:=_boundary_garden(renderer,road,gateway,side,data,furniture,junctions)
			if not garden.is_empty():data.gardens.append(garden)
	_cache[str(road.id)]=data
	return data
func _boundary_garden(renderer,road:Dictionary,gateway:Dictionary,side:float,data:Dictionary,furniture:Array,junctions:RefCounted)->Dictionary:
	var city:RefCounted=renderer.state;var stones:Array=[]
	# Pick each footprint independently: existing avenue trees/flower boxes
	# often occupy opposite longitudinal positions on the two verges.
	for outward:float in [.55,.85]:
		for along:float in [-.4,.4,-1.,1.]:
			var at:Vector2=gateway.at+gateway.normal*side*(float(road.width)*.5+outward)+gateway.tangent*along*side
			if not _boundary_clear(renderer,road,at,STONE_RADIUS,data,furniture,junctions):continue
			var floor:=_seat(city,at,STONE_RADIUS)
			if floor.y-floor.x<=.14:stones.append({"at":at,"y":floor.x-.025})
	for outward:float in [1.,1.5]:
		for along:float in [.8,-.8,.35,-.35]:
			var shrub:Vector2=gateway.at+gateway.normal*side*(float(road.width)*.5+outward)+gateway.tangent*along*side
			if not _boundary_clear(renderer,road,shrub,SHRUB_RADIUS,data,furniture,junctions):continue
			var floor:=_seat(city,shrub,SHRUB_RADIUS)
			if floor.y-floor.x>.12:continue
			for stone:Dictionary in stones:
				if shrub.distance_to(stone.at)<SHRUB_RADIUS+STONE_RADIUS+.05:continue
				return {"shrub":shrub,"shrub_y":floor.x-.015,"stone":stone.at,"stone_y":stone.y,"side":side,
					"yaw":atan2(gateway.tangent.x,gateway.tangent.y),"arc":gateway.arc,"from":gateway.from,"to":gateway.to,
					"variant":posmod(hash([gateway.from,gateway.to,side]),3)}
	return {}

func _boundary_clear(renderer,road:Dictionary,at:Vector2,radius:float,data:Dictionary,furniture:Array,junctions:RefCounted)->bool:
	var city:RefCounted=renderer.state
	if not renderer.promenade._clear(city,road,at,radius):return false
	# The promenade helper excludes its own road. A curved street's other
	# limb still owns its full lane, and authored shrubs keep their footprint.
	for i in range(1,road.points.size()):
		var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<float(road.width)*.5+radius+.03:return false
	if not junctions.at(at).is_empty():return false
	for plant:Dictionary in city.plants:
		if str(plant.kind)=="shrub" and at.distance_to(Vector2(plant.position[0],plant.position[1]))<radius+.65*float(plant.scale)+.04:return false
	for row:Dictionary in furniture:
		if str(row.kind)=="rail":continue
		var reach:float=.38 if row.kind=="flower" else .22 if row.kind=="tree" else .18
		if at.distance_to(row.at)<radius+reach+.04:return false
	for row:Dictionary in data.water:
		var tangent:=Vector2(sin(float(row.yaw)),cos(float(row.yaw)))
		if at.distance_to(Geometry2D.get_closest_point_to_segment(at,row.at-tangent*.825,row.at+tangent*.825))<radius+.16+.03:return false
	for row:Dictionary in data.gardens:
		if at.distance_to(row.shrub)<radius+SHRUB_RADIUS+.05 or at.distance_to(row.stone)<radius+STONE_RADIUS+.05:return false
	return true

static func _seat(city:RefCounted,at:Vector2,radius:float)->Vector2:
	var low:float=city.ground_height(at);var high:=low
	for offset:Vector2 in [Vector2(radius,0),Vector2(-radius,0),Vector2(0,radius),Vector2(0,-radius)]:
		var height:float=city.ground_height(at+offset);low=minf(low,height);high=maxf(high,height)
	return Vector2(low,high)

static func _era(city:RefCounted,at:Vector2)->String:return str(city.district_at(at).get("era_theme","pastoral"))
func install(renderer,parent:Node3D,data:Dictionary)->void:
	if data.notes.is_empty() and data.water.is_empty() and data.gateways.is_empty():return
	var root:=Node3D.new();root.name="EraStreetDetails";root.set_meta("records",data);parent.add_child(root)
	var batches:Dictionary={};var white:Material=renderer._material(Color("dadfd1"));var iron:Material=renderer._material(Color("547365"));var brass:Material=renderer._material(Color("b49b65"));var glow:Material=renderer.promenade.lamp_material()
	for row:Dictionary in data.notes:
		var at:=Vector3(row.at.x,row.y,row.at.y);var basis:=Basis(Vector3.UP,float(row.yaw))
		_box(renderer,batches,at,basis,Vector3(.10,.017,.075),Vector3(-.025,0,-.075),glow)
		_box(renderer,batches,at,basis,Vector3(.018,.017,.22),Vector3(.02,0,.005),glow)
		_box(renderer,batches,at,basis,Vector3(.11,.017,.018),Vector3(.065,0,.105),glow)
		_box(renderer,batches,at,basis,Vector3(.15,.01,.29),Vector3(.02,-.012,.015),iron)
	if water_material==null:water_material=ShaderMaterial.new();water_material.shader=WaterShader
	for row:Dictionary in data.water:
		var at:=Vector3(row.at.x,row.y,row.at.y);var basis:=Basis(Vector3.UP,float(row.yaw))
		_box(renderer,batches,at,basis,Vector3(.28,.10,1.65),Vector3(0,.05,0),white)
		_box(renderer,batches,at,basis,Vector3(.17,.012,1.50),Vector3(0,.104,0),water_material)
		for z:float in [-.77,.77]:_box(renderer,batches,at,basis,Vector3(.25,.05,.035),Vector3(0,.13,z),brass)
	for row:Dictionary in data.gateways:
		var at:=Vector3(row.at.x,row.y,row.at.y);var basis:=Basis(Vector3.UP,atan2(row.tangent.x,row.tangent.y))
		var side:=float(row.width)*.5+(.09 if row.kind=="bridge_lamps" else .35)
		for sign:float in [-1.,1.]:
			_box(renderer,batches,at,basis,Vector3(.24,.14,.26),Vector3(sign*side,.07,0),white)
			_box(renderer,batches,at,basis,Vector3(.08,1.72,.09),Vector3(sign*side,.96,0),iron)
			_box(renderer,batches,at,basis,Vector3(.16,.24,.16),Vector3(sign*side,1.94,0),glow)
			_box(renderer,batches,at,basis,Vector3(.24,.055,.24),Vector3(sign*side,2.10,0),brass)
		if row.kind=="arch":
			for i in range(20):
				var t:=float(i)*PI/20.;var u:=float(i+1)*PI/20.
				var a:=at+basis*Vector3(cos(t)*side,2.10+sin(t)*.62,0);var b:=at+basis*Vector3(cos(u)*side,2.10+sin(u)*.62,0)
				var delta:Vector3=b-a;var along:=delta.normalized();var right:=Vector3.FORWARD.cross(along).normalized();var frame:=Basis(right,along,right.cross(along))
				renderer._append_road_box(batches,Vector3(.11,delta.length()+.009,.16),(a+b)*.5,white,frame.get_euler())
	for row:Dictionary in data.get("gardens",[]):
		var at:=Vector3(row.stone.x,row.stone_y,row.stone.y);var basis:=Basis(Vector3.UP,float(row.yaw))
		var stone:Material=renderer.Highland.masonry_material(renderer,Color("c7b896"))
		_box(renderer,batches,at,basis,Vector3(.34,.25,.28),Vector3(0,.125,0),stone)
		_box(renderer,batches,at,basis,Vector3(.38,.055,.32),Vector3(0,.2675,0),renderer._material(Color("e1d3b2")))
		_box(renderer,batches,at,basis,Vector3(.012,.07,.16),Vector3(float(row.side)*.176,.16,0),glow)
		var leaves:Mesh=renderer.foliage.parts("shrub",int(row.variant)).canopy
		var material:Material=renderer.foliage.material("canopy");var key:=material.get_instance_id()
		if not batches.has(key):
			var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES)
			batches[key]={"surface":surface,"material":material}
		batches[key].surface.append_from(leaves,0,Transform3D(basis.scaled(SHRUB_SCALE),Vector3(row.shrub.x,row.shrub_y,row.shrub.y)))
	for batch:Dictionary in batches.values():
		var mesh:=MeshInstance3D.new();mesh.mesh=batch.surface.commit();mesh.material_override=batch.material;root.add_child(mesh)
func _box(renderer,batches:Dictionary,at:Vector3,basis:Basis,size:Vector3,offset:Vector3,material:Material)->void:
	renderer._append_road_box(batches,size,at+basis*offset,material,basis.get_euler())

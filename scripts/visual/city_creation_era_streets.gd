extends RefCounted
## Era decorations are compiled from the same road arc, height and district map.
const BridgePlan=preload("res://scripts/world/city_creation_bridge_plan.gd")
const WaterShader=preload("res://scripts/visual/shaders/creation_palace_water.gdshader")
var _revision:=-1
var _cache:Dictionary={}
var water_material:ShaderMaterial
func prepare(renderer,road:Dictionary)->Dictionary:
	if _revision!=renderer.state.revision:_revision=renderer.state.revision;_cache.clear()
	if _cache.has(str(road.id)):return _cache[str(road.id)]
	var city:RefCounted=renderer.state;var profile:Dictionary=city.road_profile(road);var samples:Array=profile.samples
	var data:Dictionary={"notes":[],"water":[],"gateways":[]}
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
	_cache[str(road.id)]=data
	return data
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
	for batch:Dictionary in batches.values():
		var mesh:=MeshInstance3D.new();mesh.mesh=batch.surface.commit();mesh.material_override=batch.material;root.add_child(mesh)
func _box(renderer,batches:Dictionary,at:Vector3,basis:Basis,size:Vector3,offset:Vector3,material:Material)->void:
	renderer._append_road_box(batches,size,at+basis*offset,material,basis.get_euler())

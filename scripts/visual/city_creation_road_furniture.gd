extends RefCounted
## Real open slats, legs and backs follow the street tangent, outside its floor.
static func bench_fits(city,road:Dictionary,at:Vector2,yaw:float)->bool:
	var corners:Array[Vector2]=[]
	for local:Vector2 in [Vector2(-.28,-.55),Vector2(-.28,.55),Vector2(.28,.55),Vector2(.28,-.55)]:
		corners.append(at+Vector2(cos(yaw)*local.x+sin(yaw)*local.y,-sin(yaw)*local.x+cos(yaw)*local.y))
	for i in range(road.points.size()-1):
		var a:=Vector2(road.points[i][0],road.points[i][1]);var b:=Vector2(road.points[i+1][0],road.points[i+1][1])
		for edge in range(4):
			if city._segment_distance(a,b,corners[edge],corners[(edge+1)%4])<float(road.width)*.5+.03:return false
	return true

static func bench(owner,renderer,batches:Dictionary,record:Dictionary,metal:Material)->void:
	var origin:=Vector3(record.at.x,record.y,record.at.y)
	var frame:=Basis(Vector3.UP,float(record.yaw));var side:=-float(record.side)
	var wood:Material=renderer._material(Color("94704e"))
	for x:float in [-.16,0.,.16]:owner._box(renderer,batches,origin,Vector3(.135,.055,1.1),frame*Vector3(x,.44,0),wood,record.yaw)
	for x:float in [-.17,.17]:
		for z:float in [-.42,.42]:owner._box(renderer,batches,origin,Vector3(.055,.41,.065),frame*Vector3(x,.22,z),metal,record.yaw)
	for z:float in [-.42,.42]:owner._box(renderer,batches,origin,Vector3(.045,.52,.055),frame*Vector3(side*.24,.65,z),metal,record.yaw)
	for y:float in [.60,.73,.86]:owner._box(renderer,batches,origin,Vector3(.05,.09,1.1),frame*Vector3(side*.255,y,0),wood,record.yaw)

extends RefCounted
const Geometry=preload("res://scripts/world/city_creation_road_curve_geometry.gd")
const Ruler=preload("res://scripts/world/city_creation_road_ruler.gd")
const RANGE:=1.8
static func target(city:RefCounted,raw:Vector2,path:Array[Vector2])->Dictionary:
	var best:=RANGE;var result:Dictionary={}
	for road:Dictionary in city.roads:
		for i in range(1,road.points.size()):
			var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
			if a.distance_to(b)<.00001:continue
			var at:=Geometry2D.get_closest_point_to_segment(raw,a,b);var distance:=raw.distance_to(at)
			if distance>best:continue
			best=distance;result={"at":at,"axis":(b-a).normalized(),"owner":str(road.id),"segment":i-1,"self":false,"a":a,"b":b}
	var length:=0.
	for i in range(1,path.size()):length+=path[i-1].distance_to(path[i])
	if path.size()>3 and length>6. and raw.distance_to(path[0])<=best:
		result={"at":path[0],"axis":(path[1]-path[0]).normalized(),"owner":"self","segment":0,"self":true}
	return result
static func resolve(city:RefCounted,path:Array[Vector2],raw:Vector2,control:Vector2,mode:int)->Dictionary:
	var result:Dictionary={"points":path.duplicate(),"closure":{},"control":control,"label":""}
	if path.size()<2:return result
	var hit:=target(city,raw,path)
	if hit.is_empty():return result
	var a:=path[0];var end:Vector2=hit.at
	if a.distance_to(end)<.2 and path.size()<4:return result
	var points:Array[Vector2]=path.duplicate();var kind:="接入";var adjusted:=control
	if mode==2 and control.is_finite():
		var incoming:=control-a;var outgoing:=end-control
		var axis:Vector2=hit.axis;var normal:=Vector2(-axis.y,axis.x)
		var alignment:=absf(outgoing.normalized().dot(axis))
		var exit:=axis if alignment>cos(deg_to_rad(10.)) else normal if alignment<sin(deg_to_rad(10.)) else Vector2.ZERO
		if exit!=Vector2.ZERO:
			if exit.dot(outgoing)<0.:exit=-exit
			var candidate:Variant=Geometry2D.line_intersects_line(a,incoming.normalized(),end,-exit)
			if candidate is Vector2 and candidate.distance_to(control)<=RANGE and (candidate-a).dot(incoming)>0. and (end-candidate).dot(exit)>.2:
				adjusted=candidate;kind="顺接" if alignment>.5 else "正交"
		# At an equal-arm lock this remains a true circular arc; otherwise use
		# the exact endpoint/control, without reapplying independent angle snaps.
		var curve:=Ruler.curve(a,adjusted,end,false)
		if absf(a.distance_to(adjusted)-adjusted.distance_to(end))<.6:
			var circle:=Ruler.curve(a,adjusted,end,true)
			if circle.circle:
				var on_target:bool=Vector2(circle.end).distance_to(end)<.0001 if hit.self else Vector2(circle.end).distance_to(Geometry2D.get_closest_point_to_segment(circle.end,hit.a,hit.b))<.0001
				if on_target and raw.distance_to(circle.end)<=RANGE:curve=circle;hit.at=circle.end
		points.assign(curve.points)
		result.shape=curve
	elif mode==1 and path.size()>2 and not hit.self:points=Geometry.straight(a,end)
	else:
		points[-1]=end
		if mode==0 and points.size()>3:
			var direction:Vector2=(points[-2]-end).normalized();var axis:Vector2=hit.axis
			if absf(direction.dot(axis))>cos(deg_to_rad(10.)):
				if direction.dot(axis)<0.:axis=-axis
				points[-2]=end+axis*points[-2].distance_to(end);kind="顺接"
	hit["lock"]=kind;result.points=points;result.closure=hit;result.control=adjusted
	result.label="✦ %s闭合"%kind
	return result

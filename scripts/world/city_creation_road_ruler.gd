extends RefCounted
## Angles are measured against the actual saved segment, never a world grid.
const Geometry=preload("res://scripts/world/city_creation_road_curve_geometry.gd")
const STRONG=[0.,30.,45.,60.,90.,120.,135.,150.,180.]
static func road_reference(city:RefCounted,at:Vector2,radius:float=.9)->Dictionary:
	var result:Dictionary={};var best:=radius
	for road:Dictionary in city.roads:
		for i in range(1,road.points.size()):
			var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
			if a.distance_squared_to(b)<.000001:continue
			var point:=Geometry2D.get_closest_point_to_segment(at,a,b);var distance:=point.distance_to(at)
			if distance>best:continue
			best=distance;result={"road_id":str(road.id),"segment":i-1,"at":point,"axis":(b-a).normalized(),"distance":distance}
	return result
static func direction(origin:Vector2,target:Vector2,axis:Vector2,enable:bool)->Dictionary:
	var offset:=target-origin;var length:=offset.length()
	var signed:=axis.angle_to(offset) if length>.0001 else 0.
	var raw:=rad_to_deg(signed);var degrees:=raw;var strong:=false
	if enable and length>.15:
		degrees=snappedf(raw,15.)
		for mark:float in STRONG:
			if absf(absf(raw)-mark)<=2.5:degrees=mark*signf(raw);strong=true;break
	var resolved:=origin+axis.rotated(deg_to_rad(degrees))*length if enable and length>.15 else target
	return {"target":resolved,"raw_degrees":raw,"degrees":absf(degrees),"signed":deg_to_rad(degrees),"acute":minf(absf(degrees),180.-absf(degrees)),"snapped":enable and length>.15,"strong":strong}
static func curve(a:Vector2,control:Vector2,raw:Vector2,enable:bool)->Dictionary:
	var incoming:=control-a;var first:=incoming.length();var second:=control.distance_to(raw)
	if first<.1 or second<.1:return {"points":Geometry.quadratic(a,control,raw),"end":raw,"circle":false,"label":"定终点弯曲","arcs":[]}
	var angle:=direction(control,raw,incoming.normalized(),enable)
	var b:Vector2=angle.target;var turn:float=angle.signed
	var symmetric:=enable and absf(first-second)<.6 and absf(turn)>.025 and absf(turn)<deg_to_rad(170.)
	var radius:=INF;var center:=Vector2.INF;var points:Array[Vector2]=[]
	if symmetric:
		b=control+(b-control).normalized()*first
		radius=first/tan(absf(turn)*.5)
		var axis:=incoming.normalized();center=a+Vector2(-axis.y,axis.x)*radius*signf(turn)
		var count:=maxi(2,ceili(radius*absf(turn)/.35));var radial:=a-center
		for i in range(count+1):points.append(center+radial.rotated(turn*float(i)/count))
		points[0]=a;points[-1]=b
	else:
		points=Geometry.quadratic(a,control,b)
		var velocity:=b-a;var acceleration:Vector2=(a-2.*control+b)*2.
		if absf(velocity.cross(acceleration))>.000001:radius=pow(velocity.length(),3.)/absf(velocity.cross(acceleration))
	var radius_text:="∞" if not is_finite(radius) else "%.1fm"%radius
	var label:="✦ 等臂圆弧 %.0f° · R %s"%[angle.degrees,radius_text] if symmetric else "弯度 %.1f° · 中点R %s"%[angle.degrees,radius_text]
	return {"points":points,"end":b,"circle":symmetric,"radius":radius,"center":center,"turn":turn,"angle":angle,"label":label,"arcs":[{"at":control,"axis":(a-control).normalized(),"turn":wrapf(turn-PI,-PI,PI),"radius":minf(2.2,minf(first,second)*.4),"strong":symmetric or angle.strong}]}
static func plan(a:Vector2,control:Vector2,target:Vector2,ref:Dictionary,enable:bool)->Dictionary:
	var result:Dictionary={"points":Geometry.straight(a,target),"end":target,"circle":false,"arcs":[],"label":""}
	if control.is_finite():result=curve(a,control,target,enable)
	elif not ref.is_empty():
		var angle:=direction(a,target,ref.axis,enable);result.points=Geometry.straight(a,angle.target);result.end=angle.target
	if not ref.is_empty():
		var to:Vector2=control if control.is_finite() else result.end
		var angle:=direction(a,to,ref.axis,false)
		var magnetic:=direction(a,to,ref.axis,enable)
		var exact_snap:bool=magnetic.strong and absf(float(magnetic.degrees)-float(angle.degrees))<.001
		var label:="θ %.1f°"%angle.degrees
		if angle.degrees>90.01 and angle.degrees<179.99:label+="（锐角 %.1f°）"%angle.acute
		if exact_snap:label="✦ %.0f° %s"%[angle.degrees,"正交" if is_equal_approx(angle.degrees,90.) else "顺延" if angle.degrees<.01 or angle.degrees>179.99 else "相交"]
		result.label=label+("\n"+result.label if not str(result.label).is_empty() else "")
		result.arcs.push_front({"at":a,"axis":ref.axis,"turn":angle.signed,"radius":2.2,"strong":exact_snap})
		result.intersection=angle;result.reference=ref
	result.control=control
	result.snap_enabled=enable
	return result

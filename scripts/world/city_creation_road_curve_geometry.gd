extends RefCounted
## Mouse authoring only. Saved roads remain ordinary X/Z coordinate arrays.
const Stroke=preload("res://scripts/world/city_creation_stroke.gd")
static func sample(points:Array[Vector2],spacing:float)->Array[Vector2]:
	if points.size()<2:return points.duplicate()
	var result:Array[Vector2]=[points[0]];var remaining:=spacing
	for i in range(1,points.size()):
		var a:=points[i-1];var b:=points[i];var length:=a.distance_to(b)
		while length>=remaining:
			a=a.lerp(b,remaining/length);result.append(a);length=a.distance_to(b);remaining=spacing
		remaining-=length
	if result[-1].distance_to(points[-1])>.000001:result.append(points[-1])
	else:result[-1]=points[-1]
	return result
static func straight(a:Vector2,b:Vector2)->Array[Vector2]:return sample([a,b],2.)
static func quadratic(a:Vector2,control:Vector2,b:Vector2)->Array[Vector2]:
	var result:Array[Vector2]=[]
	var steps:=maxi(8,ceili((a.distance_to(control)+control.distance_to(b))/.08))
	for i in range(steps+1):
		var t:=float(i)/steps;result.append(a*(1.-t)*(1.-t)+control*2.*(1.-t)*t+b*t*t)
	return sample(result,.35)
static func freehand(raw:Array[Vector2])->Array[Vector2]:
	var points:=Stroke.polyline_points(raw)
	if points.size()<3:return points
	points=Stroke._simplify(points,.035)
	var fine:Array[Vector2]=[points[0]]
	for i in range(points.size()-1):
		var a:=points[maxi(0,i-1)] if i>0 else points[0]*2.-points[1]
		var b:=points[i];var c:=points[i+1]
		var d:=points[mini(points.size()-1,i+2)] if i+2<points.size() else c*2.-b
		var t1:=sqrt(a.distance_to(b));var t2:=t1+sqrt(b.distance_to(c));var t3:=t2+sqrt(c.distance_to(d))
		var steps:=maxi(4,ceili(b.distance_to(c)/.07))
		for j in range(1,steps+1):
			var t:=lerpf(t1,t2,float(j)/steps)
			var p:=a.lerp(b,t/t1);var q:=b.lerp(c,(t-t1)/(t2-t1));var r:=c.lerp(d,(t-t2)/(t3-t2))
			var u:=p.lerp(q,t/t2);var v:=q.lerp(r,(t-t1)/(t3-t1))
			fine.append(u.lerp(v,(t-t1)/(t2-t1)))
	return sample(fine,.2)

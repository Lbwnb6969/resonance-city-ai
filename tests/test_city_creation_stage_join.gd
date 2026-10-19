extends SceneTree
const Stage=preload("res://scripts/visual/city_creation_amphitheater.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:
	for direction:Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.UP,Vector2.DOWN]:_direction(direction)
	print("STAGE_JOIN ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _area(polygon:PackedVector2Array)->float:
	var sum:=0.
	for i in range(polygon.size()):sum+=polygon[i].cross(polygon[(i+1)%polygon.size()])
	return absf(sum)*.5
func _direction(direction:Vector2)->void:
	var center:=Vector2(4.3,16.9);var plan:Dictionary={"stage":center,"direction":direction,"radius":1.65,"jetty_start":center-direction*2.95,"jetty_end":center}
	var cut:=Stage.jetty_polygon(plan);var circle:=PackedVector2Array()
	for i in range(48):circle.append(center+Vector2.from_angle(TAU*float(i)/48.)*1.65)
	var faces:=Stage.top_faces(circle,cut,.24);var area:=0.;var overlap:=0.;var up:=true
	for i in range(0,faces.size(),3):
		var a:Vector3=faces[i];var b:Vector3=faces[i+1];var c:Vector3=faces[i+2]
		var triangle:=PackedVector2Array([Vector2(a.x,a.z),Vector2(b.x,b.z),Vector2(c.x,c.z)])
		area+=_area(triangle);up=up and (b-a).cross(c-a).y>0.
		for piece:PackedVector2Array in Geometry2D.intersect_polygons(triangle,cut):overlap+=_area(piece)
	var expected:=_area(circle)
	for piece:PackedVector2Array in Geometry2D.intersect_polygons(circle,cut):expected-=_area(piece)
	_check(faces.size()>0 and absf(area-expected)<.0001,"circle and jetty cover exact complementary floor area: "+str(direction))
	_check(overlap<.0001 and up,"no coplanar stone covers the wooden floor, all top normals face up: "+str(direction))
	var tangent:=Vector2(-direction.y,direction.x);var tier_area:=0.;var tier_overlap:=0.
	for segment in range(20):
		var a:=lerpf(-1.2,1.2,float(segment)/20.);var b:=lerpf(-1.2,1.2,float(segment+1)/20.)
		var quad:=PackedVector2Array([center+(-direction*cos(a)+tangent*sin(a))*2.08,center+(-direction*cos(b)+tangent*sin(b))*2.08,center+(-direction*cos(b)+tangent*sin(b))*2.56,center+(-direction*cos(a)+tangent*sin(a))*2.56])
		var top:=Stage.top_faces(quad,cut,.24)
		for i in range(0,top.size(),3):
			var tri:=PackedVector2Array([Vector2(top[i].x,top[i].z),Vector2(top[i+1].x,top[i+1].z),Vector2(top[i+2].x,top[i+2].z)])
			tier_area+=_area(tri)
			for piece:PackedVector2Array in Geometry2D.intersect_polygons(tri,cut):tier_overlap+=_area(piece)
	_check(tier_area>1. and tier_overlap<.0001,"lowest stand keeps its landing while yielding the jetty crossing: "+str(direction))

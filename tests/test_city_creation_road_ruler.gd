extends SceneTree
const Ruler=preload("res://scripts/world/city_creation_road_ruler.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();city.initialize_empty()
	var first:=Vector2(-30,-22);var axis:=Vector2.from_angle(.37);var second:=first+axis*10.
	var points:Array[Vector2]=[first,second,second+axis.rotated(.4)*4.]
	check(city.add_road(points).ok,"real oblique saved road authored")
	var at:=first+axis*4.;var before:=city.snapshot()
	var ref:=Ruler.road_reference(city,at+axis.orthogonal()*.3)
	check(not ref.is_empty() and Vector2(ref.at).distance_to(at)<.00001 and Vector2(ref.axis).distance_to(axis)<.00001 and ref.segment==0,"reference projects to real segment interior and uses its oblique tangent")
	check(city.snapshot()==before,"reference computation does not author or mutate saved roads")
	for sign_side:float in [-1.,1.]:
		for degrees:float in [0.,30.,45.,60.,90.,120.,135.,150.,180.]:
			var raw:=at+axis.rotated(deg_to_rad((degrees+(-1. if degrees==180. else 1.))*sign_side))*8.
			var result:=Ruler.direction(at,raw,axis,true)
			check(is_equal_approx(float(result.degrees),degrees) and result.strong and absf(Vector2(result.target).distance_to(at)-8.)<.00001,"strong angle and unchanged length on both sides: "+str(degrees))
	var grid:=Ruler.direction(at,at+axis.rotated(deg_to_rad(73.))*7.,axis,true)
	check(is_equal_approx(grid.degrees,75.) and not grid.strong,"ordinary fifteen degree steps are distinct from strong attraction")
	var free:=Ruler.direction(at,at+axis.rotated(deg_to_rad(73.27))*7.,axis,false)
	check(absf(float(free.degrees)-73.27)<.0001 and not free.snapped,"Alt preserves continuous degree direction")
	for sign_side:float in [-1.,1.]:
		for degrees:float in [30.,45.,60.,90.,120.,135.]:
			var a:=Vector2(-26,-20);var c:=a+Vector2.UP*5.;var turn:=deg_to_rad(degrees)*sign_side
			var end:=c+Vector2.UP.rotated(turn)*5.2
			var arc:=Ruler.curve(a,c,end,true)
			check(arc.circle and absf(float(arc.radius)-5./tan(deg_to_rad(degrees)*.5))<.0001,"symmetric true-circle radius for left/right "+str(degrees))
			check(arc.points.all(func(p):return absf(p.distance_to(arc.center)-float(arc.radius))<.00002),"every actual sample lies on the same circle for "+str(degrees))
			var first_tangent:Vector2=(arc.points[1]-arc.points[0]).normalized();var last_tangent:Vector2=(arc.points[-1]-arc.points[-2]).normalized()
			check(first_tangent.dot(Vector2.UP)>.995 and last_tangent.dot(Vector2.UP.rotated(turn))>.995,"true-circle endpoint tangents match both control arms")
	var a:=Vector2(-28,-20);var c:=Vector2(-28,-12);var b:=Vector2(-17,-12)
	var unequal:=Ruler.curve(a,c,b,false)
	var v:=b-a;var accel:Vector2=(a-c*2.+b)*2.;var radius:float=pow(v.length(),3.)/absf(v.cross(accel))
	check(not unequal.circle and absf(float(unequal.radius)-radius)<.000001 and unequal.label.contains("中点R"),"unequal Bezier displays measured midpoint curvature without claiming a circle")
	var straight:=Ruler.curve(a,(a+b)*.5,b,true)
	check(not straight.circle and is_inf(straight.radius) and straight.label.contains("∞"),"zero curvature reports infinity without a degenerate circle")
	var turnback:=Ruler.curve(a,c,a,true)
	check(not turnback.circle and turnback.points.all(func(p):return p.is_finite()),"180degree reversal remains finite ordinary geometry")
	var planner:=Ruler.plan(at,Vector2.INF,at+axis.rotated(deg_to_rad(134.))*8.,ref,true)
	check(planner.label.contains("135") and planner.label.contains("相交") and planner.intersection.acute<45.001,"obtuse measured angle keeps its actual135degree label")
	var frozen_control:=at+axis.rotated(deg_to_rad(88.4))*5.
	var frozen:=Ruler.plan(at,frozen_control,frozen_control+axis*5.,ref,true)
	check(not frozen.arcs[0].strong and frozen.label.contains("88.4") and not frozen.label.contains("正交"),"releasing Alt cannot falsely label a previously frozen unsnapped control as exact orthogonal")
	city.remove_road(str(city.roads[0].id));check(Ruler.road_reference(city,at).is_empty(),"removed source no longer supplies a tangent")
	city.undo();check(not Ruler.road_reference(city,at).is_empty(),"Undo restores the actual tangent source")
	print("ROAD_RULER ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

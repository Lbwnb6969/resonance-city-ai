extends SceneTree
const Geometry=preload("res://scripts/world/city_creation_road_curve_geometry.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func encoded(points:Array[Vector2])->Array:
	return points.map(func(p):return [p.x,p.y])
func run()->void:
	var a:=Vector2(-30,-20);var b:=Vector2(-18,-20);var control:=Vector2(-30,-8);var end:=Vector2(-18,-8)
	var line:=Geometry.straight(a,b)
	check(line[0]==a and line[-1]==b and line.size()==7,"precise line keeps both endpoints and two metre spacing")
	check(line.all(func(p):return is_zero_approx((p-a).cross(b-a))),"every point lies on the authored straight line")
	var curve:=Geometry.quadratic(a,control,end)
	check(curve[0]==a and curve[-1]==end,"Bezier preserves start and end")
	check(curve.all(func(p):return p.x>=a.x and p.x<=end.x and p.y>=a.y and p.y<=end.y),"ordinary quadratic stays in its actual control triangle bounds")
	check((curve[1]-a).normalized().dot((control-a).normalized())>.999 and (end-curve[-2]).normalized().dot((end-control).normalized())>.999,"entry and exit follow the two independently authored tangent arms")
	var near_middle:=Vector2(-27,-11)
	check(curve.any(func(p):return p.distance_to(near_middle)<.18),"curve passes near true quadratic midpoint rather than a copied circular arc")
	var gaps:Array[float]=[]
	for i in range(1,curve.size()):gaps.append(curve[i].distance_to(curve[i-1]))
	check(gaps.slice(0,-1).all(func(d):return absf(d-.35)<.002) and gaps[-1]<=.351,"quadratic resamples by actual arc length")
	var raw:Array[Vector2]=[a,Vector2(-29.9,-19.999),Vector2(-28,-19),Vector2(-25,-16),Vector2(-23,-17),b]
	var free:=Geometry.freehand(raw)
	check(free[0]==a and free[-1]==b and free.size()>raw.size(),"RDP and centripetal Catmull-Rom produce a smooth freehand path with original endpoints")
	check(free.all(func(p):return p.is_finite()) and free.any(func(p):return p.y>-17.),"freehand retains the drawn bend with finite geometry")
	for path:Array[Vector2] in [line,curve,free]:
		var city:=State.new();city.initialize_empty();var before:=city.snapshot()
		var preview:Dictionary=city.preview_road(path,"path","none")
		check(preview.ok and city.snapshot()==before,"preview remains purely derived")
		var added:Dictionary=city.add_road(preview.points,"path","none")
		check(added.ok and city.roads[0].points==encoded(preview.points),"saved coordinate arrays exactly match the displayed path")
		var saved:=city.snapshot();var cold:=State.new()
		check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok and cold.roads==city.roads,"geometry roundtrips without a new road schema or mode field")
		check(city.undo().ok and city.roads.is_empty() and city.redo().ok and city.roads==saved.roads,"whole path is one undoable authored operation while earned high-watermarks remain monotone")
	print("ROAD_CURVE_GEOMETRY ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

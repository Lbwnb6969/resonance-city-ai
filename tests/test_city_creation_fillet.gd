extends SceneTree

const Stroke = preload("res://scripts/world/city_creation_stroke.gd")
var failures: Array[String] = []
var checks := 0

func _initialize() -> void:
	var right: Array[Vector2] = [Vector2.ZERO,Vector2(3,0),Vector2(3,3)]
	var curved := Stroke.road_points(right)
	_circle(curved,Vector2(2.15,0.85),0.85,Vector2(2.15,0),Vector2(3,0.85),"full-radius quarter circle")
	_check(curved[0] == right[0] and curved[-1] == right[-1],"authored endpoints preserved")
	_check(curved == Stroke.road_points(right),"preview and commit deterministic")
	var left: Array[Vector2] = [Vector2.ZERO,Vector2(3,0),Vector2(3,-3)]
	var reflected := Stroke.road_points(left)
	_check(reflected.size() == curved.size(),"left/right equivalent sampling")
	for index in range(mini(reflected.size(),curved.size())):
		_check(reflected[index].distance_to(Vector2(curved[index].x,-curved[index].y)) < 0.00001,"left turn mirror")
	var tiny: Array[Vector2] = [Vector2.ZERO,Vector2(0.2,0),Vector2(0.2,0.2)]
	_circle(Stroke.road_points(tiny),Vector2(0.11,0.09),0.09,Vector2(0.11,0),Vector2(0.2,0.09),"short-edge radius capped by 45% trim")
	for degrees in [80.0,120.0,135.0,-80.0,-120.0,-135.0]:
		var angle: float = deg_to_rad(degrees)
		var outgoing := Vector2.RIGHT.rotated(angle)
		var trim := 0.85 * tan(absf(angle) * 0.5)
		var entry := Vector2(5.0 - trim,0.0)
		var exit := Vector2(5,0) + outgoing * trim
		var center := entry + Vector2(0,signf(angle) * 0.85)
		var angled: Array[Vector2] = [Vector2.ZERO,Vector2(5,0),Vector2(5,0) + outgoing * 5.0]
		_circle(Stroke.road_points(angled),center,0.85,entry,exit,"signed non-right-angle circle " + str(degrees))
	var adjacent: Array[Vector2] = [Vector2.ZERO,Vector2(3,0),Vector2(3,0.2),Vector2(6,0.2)]
	var adjacent_curve := Stroke.road_points(adjacent)
	_valid(adjacent_curve,"adjacent short-edge corners")
	_check(adjacent_curve.has(Vector2(3,0.09)) and adjacent_curve.has(Vector2(3,0.11)),"adjacent trims leave a positive straight connector")
	var dense: Array[Vector2] = [right[0]]
	for index in range(1,right.size()):
		for step in range(1,17): dense.append(right[index - 1].lerp(right[index],float(step) / 16.0))
	_check(Stroke.road_points(dense) == curved,"pointer frequency does not change circle")
	_check(Stroke.road_points(right,true) == [right[0],right[-1]],"single straight drag remains exactly two points")
	var locked: Array[Vector2] = [Vector2.ZERO,Vector2(1,0),Vector2(2,0),Vector2(2,2),Vector2.ZERO]
	_check(Stroke.polyline_points(locked) == locked,"locked collinear/corner/closure points retain exact author semantics")
	var repeated: Array[Vector2] = [Vector2.ZERO,Vector2.ZERO,Vector2(3,0),Vector2(3,0),Vector2(3,3)]
	_check(Stroke.road_points(repeated) == curved,"duplicate samples do not change arc")
	_check(Stroke.polyline_points(repeated) == right,"polyline only removes consecutive exact duplicates")
	var cases: Array = [[],[Vector2.ONE],[Vector2.ZERO,Vector2.ZERO],[Vector2.ZERO,Vector2(3,0),Vector2.ZERO,Vector2(-2,0)],[Vector2.ZERO,Vector2(3,0),Vector2(0,0.00001)],[Vector2.ZERO,Vector2(3,0),Vector2(3,3),Vector2(0,3),Vector2.ZERO],[Vector2.ZERO,Vector2(3,3),Vector2(0,3),Vector2(3,0)]]
	for item in cases:
		var raw: Array[Vector2] = []
		raw.assign(item)
		var result := Stroke.road_points(raw)
		_valid(result,"degenerate, reversal, closed or self-crossing path")
		if not raw.is_empty(): _check(result[0] == raw[0] and result[-1] == raw[-1],"edge-case endpoints")
	var timing: Array[Vector2] = []
	for index in range(71): timing.append(Vector2(index * 0.25,sin(index * 0.13) * 2.0))
	var started := Time.get_ticks_usec()
	for iteration in range(500): Stroke.road_points(timing)
	var ordinary_usec := float(Time.get_ticks_usec() - started) / 500.0
	started = Time.get_ticks_usec()
	for iteration in range(500): Stroke.road_points(right)
	print("FILLET_MEASURE ",JSON.stringify({"ordinary_71_samples_usec":ordinary_usec,"sharp_3_samples_usec":float(Time.get_ticks_usec() - started) / 500.0,"radius":0.85,"radius_short":0.09,"checks":checks}))
	if failures.is_empty():
		print("CITY_CREATION_FILLET PASS ",checks)
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)

func _circle(points: Array[Vector2], center: Vector2, radius: float, entry: Vector2, exit: Vector2, label: String) -> void:
	var start := -1
	var end := -1
	for index in range(points.size()):
		if points[index].distance_to(entry) < 0.00001: start = index
		if points[index].distance_to(exit) < 0.00001: end = index
	_check(start > 0 and end > start and end < points.size() - 1,label + " has exact tangent entry/exit")
	if start < 1 or end <= start or end >= points.size() - 1: return
	for index in range(start,end + 1):
		_check(absf(points[index].distance_to(center) - radius) < 0.00001,label + " exact radius")
	_check(absf((points[start] - points[start - 1]).dot(points[start] - center)) < 0.00001,label + " incoming connector tangent")
	_check(absf((points[end + 1] - points[end]).dot(points[end] - center)) < 0.00001,label + " outgoing connector tangent")
	_valid(points,label)

func _valid(points: Array[Vector2], label: String) -> void:
	for index in range(points.size()):
		_check(points[index].is_finite(),label + " finite")
		if index > 0: _check(points[index] != points[index - 1],label + " no duplicate")

func _check(condition: bool, label: String) -> void:
	checks += 1
	if not condition: failures.append(label)

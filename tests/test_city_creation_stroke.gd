extends SceneTree

const Stroke := preload("res://scripts/world/city_creation_stroke.gd")
var failures: Array[String] = []

func _initialize() -> void:
	var raw: Array[Vector2] = [Vector2(-5,-2),Vector2(-2,-1),Vector2(0,1),Vector2(3,2),Vector2(5,2)]
	var smooth := Stroke.road_points(raw)
	_check(smooth[0] == raw[0] and smooth[-1] == raw[-1],"free path preserves exact endpoints")
	_check(_valid(smooth),"free path is finite without consecutive duplicate points")
	_check(smooth == Stroke.road_points(raw),"preview and commit use the same deterministic curve")
	var dense: Array[Vector2] = [raw[0]]
	for index in range(1,raw.size()):
		for step in range(1,9): dense.append(raw[index - 1].lerp(raw[index],float(step) / 8.0))
	_check(smooth == Stroke.road_points(dense),"collinear event densification does not change the road")
	var straight_samples: Array[Vector2] = []
	for index in range(501): straight_samples.append(Vector2(-5 + index * 0.02,1.0))
	var straight := Stroke.road_points(straight_samples)
	_check(straight.size() == 2 and straight[0] == straight_samples[0] and straight[-1] == straight_samples[-1],"long straight stroke stays two points")
	_check(Stroke.road_points(raw,true) == [raw[0],raw[-1]],"straight mode ignores intermediate cursor motion")
	var max_angle := 0.0
	for index in range(1,smooth.size() - 1):
		var first := smooth[index] - smooth[index - 1]
		var last := smooth[index + 1] - smooth[index]
		max_angle = maxf(max_angle,absf(first.angle_to(last)))
	_check(max_angle < deg_to_rad(25.0),"ordinary bend has approximately continuous sampled tangents")
	var corner: Array[Vector2] = [Vector2.ZERO,Vector2(2,0),Vector2(2,2)]
	var rounded := Stroke.road_points(corner)
	var deviation := 0.0
	for point in rounded:
		deviation = maxf(deviation,minf(_distance(point,corner[0],corner[1]),_distance(point,corner[1],corner[2])))
	# Exact R=.85 quarter circle has max distance to the original two line
	# segments R * (1 - 1/sqrt(2)) = .249m (not distance to the corner).
	_check(deviation > 0.24 and deviation < 0.25,"corner uses the designed .85m tangent-circle radius")
	var duplicate: Array[Vector2] = [Vector2.ZERO,Vector2.ZERO,Vector2(2,0),Vector2(2,0),Vector2(2,2),Vector2(2,2)]
	_check(Stroke.road_points(duplicate) == rounded,"repeated samples are ignored")
	var loop: Array[Vector2] = [Vector2.ZERO,Vector2(2,0),Vector2(2,2),Vector2(0,2),Vector2.ZERO]
	var closed := Stroke.road_points(loop)
	_check(_valid(closed) and closed[0] == loop[0] and closed[-1] == loop[-1],"closed free path preserves closure without NaN")
	var seam_angle := absf((closed[1] - closed[0]).angle_to(closed[-1] - closed[-2]))
	_check(seam_angle < deg_to_rad(35.0),"closed path shares its endpoint tangent")
	var fold: Array[Vector2] = [Vector2.ZERO,Vector2(2,0),Vector2.ZERO,Vector2(-1,0)]
	var folded := Stroke.road_points(fold)
	_check(_valid(folded) and folded[0] == fold[0] and folded[-1] == fold[-1],"backtracking remains finite and preserves endpoints")
	_check(Stroke.road_points([]).is_empty() and Stroke.road_points([Vector2.ONE]) == [Vector2.ONE],"empty and single-point strokes stay well formed")
	if failures.is_empty():
		print("CITY_CREATION_STROKE PASS: endpoints, free curves, density invariance, straight mode, closure and backtracking")
		quit(0)
	else:
		for failure in failures: push_error(failure)
		quit(1)

func _valid(points: Array[Vector2]) -> bool:
	for index in range(points.size()):
		if not points[index].is_finite(): return false
		if index > 0 and points[index - 1].distance_squared_to(points[index]) <= 0.000000000001: return false
	return true

func _distance(point: Vector2, first: Vector2, last: Vector2) -> float:
	var segment := last - first
	return point.distance_to(first + segment * clampf((point - first).dot(segment) / segment.length_squared(),0.0,1.0))

func _check(condition: bool, label: String) -> void:
	if not condition: failures.append(label)

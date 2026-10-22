extends RefCounted
## GLES3 must never receive a singular inverse-transpose, even for unused capacity.
const HIDDEN := Transform3D(Basis(Vector3(.0001,0,0),Vector3(0,.0001,0),Vector3(0,0,.0001)),Vector3(0,-500,0))
static func valid(transform: Transform3D) -> bool:
	var determinant := transform.basis.determinant()
	return transform.is_finite() and is_finite(determinant) and absf(determinant) > 1.e-20
static func initialize(multi: MultiMesh, capacity: int) -> void:
	multi.instance_count = capacity
	multi.visible_instance_count = 0
	for i: int in range(capacity): multi.set_instance_transform(i, HIDDEN)
static func safe_set_instance(multi: MultiMesh, index: int, transform: Transform3D) -> bool:
	var accepted := valid(transform)
	multi.set_instance_transform(index, transform if accepted else HIDDEN)
	return accepted
static func append(multi: MultiMesh, transform: Transform3D, color: Color = Color.WHITE, custom: Color = Color(0,0,0,0)) -> int:
	var index := multi.visible_instance_count
	if not safe_set_instance(multi, index, transform): return -1
	if multi.use_colors: multi.set_instance_color(index, color)
	if multi.use_custom_data: multi.set_instance_custom_data(index, custom)
	multi.visible_instance_count = index + 1
	return index
static func show_prefix(multi: MultiMesh, count: int) -> void:
	for i: int in range(count, multi.visible_instance_count): multi.set_instance_transform(i, HIDDEN)
	multi.visible_instance_count = count
static func clean_points(points: Array[Vector2], closed: bool = false) -> Array[Vector2]:
	var result: Array[Vector2] = []
	for at: Vector2 in points:
		if at.is_finite() and (result.is_empty() or result[-1].distance_squared_to(at) >= .000004): result.append(at)
	if closed and result.size() > 1 and result[-1].distance_squared_to(result[0]) < .000004: result.pop_back()
	return result
static func clean_path(raw: Array) -> Array[Vector2]:
	var points: Array[Vector2] = []
	for at: Variant in raw: points.append(at if at is Vector2 else Vector2(float(at[0]),float(at[1])))
	return clean_points(points)
static func clean_contour(raw: PackedVector2Array) -> PackedVector2Array:
	var points: Array[Vector2] = []
	points.assign(raw)
	return PackedVector2Array(clean_points(points,true))
static func clean_samples(raw: Array) -> Array:
	var result: Array = []
	for sample: Dictionary in raw:
		if result.is_empty() or Vector2(result[-1].xz).distance_squared_to(sample.xz) >= .000004: result.append(sample)
	return result

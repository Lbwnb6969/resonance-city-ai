extends RefCounted
## Fixed neighbouring controls seal old spans; only the last two spans change.
const Stroke=preload("res://scripts/world/city_creation_stroke.gd")
const CONTROL_SPACING:=.30
var controls: Array[Vector2]=[]
var _sealed: Array[Vector2]=[]
var _sealed_spans:=0
var tip:=Vector2.INF
var points: Array[Vector2]=[]

func clear()->void:
	controls.clear();_sealed.clear();_sealed_spans=0;tip=Vector2.INF;points.clear()

func move(at: Vector2)->Array[Vector2]:
	if not at.is_finite() or at==tip:return points
	tip=at
	if controls.is_empty():controls.append(at);_sealed.append(at)
	elif controls[-1].distance_to(at)>=CONTROL_SPACING:controls.append(at)
	var current: Array[Vector2]=controls.duplicate()
	if current[-1].distance_squared_to(at)>Stroke.DUPLICATE_EPSILON_SQUARED:current.append(at)
	# A control's tangent/fillet is final once both neighbours are fixed.
	while _sealed_spans<controls.size()-2:
		_append(_sealed,_span(current,_sealed_spans));_sealed_spans+=1
	points=_sealed.duplicate()
	for span in range(_sealed_spans,current.size()-1):_append(points,_span(current,span))
	return points

func _span(source: Array[Vector2],index: int)->Array[Vector2]:
	var first:=maxi(0,index-1)
	var local: Array[Vector2]=source.slice(first,mini(source.size(),index+3))
	return Stroke.segment_points(local,Stroke._tangents(local),Stroke._fillets(local),index-first)

func _append(target: Array[Vector2],source: Array[Vector2])->void:
	for at: Vector2 in source:
		if not target.is_empty() and target[-1].distance_squared_to(at)<=Stroke.DUPLICATE_EPSILON_SQUARED:continue
		# Remove redundant collinear vertices as the line grows; preserve bends
		# and reversals. A straight drag remains a small saved road.
		while target.size()>1:
			var a: Vector2=target[-2];var b: Vector2=target[-1]
			if (b-a).dot(at-b)<=0.0 or Stroke._segment_distance(b,a,at)>.00005:break
			target.pop_back()
		target.append(at)

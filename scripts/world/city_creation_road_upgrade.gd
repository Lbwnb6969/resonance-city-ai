extends RefCounted
## A retraced stroke upgrades one existing centreline, never a crossing or an
## arbitrary small overlap. Evaluate original points before endpoint snapping.
const SAMPLE_STEP := 0.28
const MATCH_DISTANCE := 0.28
const COVERAGE := 0.90
const MIN_LENGTH_RATIO := 0.80
const MAX_LENGTH_RATIO := 1.25
const ALIGNMENT := 0.85

static func match_road(points: Array[Vector2],roads: Array) -> String:
	var stroke: Array = []
	for point: Vector2 in points: stroke.append([point.x,point.y])
	var length := _length(stroke)
	if length<0.2: return ""
	var best := ""
	var best_error := INF
	for road: Dictionary in roads:
		var old_length := _length(road.points)
		if old_length<0.2: continue
		var ratio := length/old_length
		if ratio<MIN_LENGTH_RATIO or ratio>MAX_LENGTH_RATIO: continue
		var forward := _coverage(stroke,road.points)
		if float(forward.fraction)<COVERAGE: continue
		var reverse := _coverage(road.points,stroke)
		if float(reverse.fraction)<COVERAGE: continue
		var error := float(forward.error)+float(reverse.error)
		if error<best_error:
			best_error=error
			best=str(road.id)
	return best

static func _length(points: Array) -> float:
	var value := 0.0
	for i in range(points.size()-1): value+=_point(points[i]).distance_to(_point(points[i+1]))
	return value

static func _point(row: Array) -> Vector2:
	return Vector2(float(row[0]),float(row[1]))

static func _coverage(source: Array,target: Array) -> Dictionary:
	var total := 0.0
	var covered := 0.0
	var error := 0.0
	for i in range(source.size()-1):
		var a := _point(source[i])
		var b := _point(source[i+1])
		var length := a.distance_to(b)
		if length<0.000001: continue
		var direction := (b-a)/length
		var count := maxi(1,ceili(length/SAMPLE_STEP))
		var weight := length/float(count)
		for step in range(count):
			var at := a.lerp(b,(float(step)+0.5)/float(count))
			var nearest := INF
			for j in range(target.size()-1):
				var c := _point(target[j])
				var d := _point(target[j+1])
				if c.distance_squared_to(d)<0.000001: continue
				if absf(direction.dot((d-c).normalized()))<ALIGNMENT: continue
				nearest=minf(nearest,Geometry2D.get_closest_point_to_segment(at,c,d).distance_to(at))
			total+=weight
			if nearest<=MATCH_DISTANCE:
				covered+=weight
				error+=nearest*weight
	return {"fraction":covered/maxf(0.000001,total),"error":error/maxf(0.000001,covered)}

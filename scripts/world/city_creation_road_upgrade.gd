extends RefCounted
## A retraced stroke upgrades one existing centreline, never a crossing or an
## arbitrary small overlap. Evaluate original points before endpoint snapping.
const SAMPLE_STEP := 0.28
const MATCH_DISTANCE := 0.28
const COVERAGE := 0.90
const MIN_LENGTH_RATIO := 0.80
const MAX_LENGTH_RATIO := 1.25
const ALIGNMENT := 0.85
const WIDTHS := {"path":1.25,"cobble":1.25,"promenade":1.75,"avenue":2.10,"tram":2.10,"brick":1.75,"fanstone":2.10,"gravel":1.25}
const NAMES := {"path":"乡间小径","cobble":"圆卵石路","promenade":"石板灯街","avenue":"林荫大道","tram":"叮当轨街","brick":"赤陶砖路","fanstone":"扇形铺石","gravel":"细碎石路"}

static func width_for(style: String) -> float:
	return float(WIDTHS[style])

static func match_road(points: Array[Vector2],roads: Array) -> String:
	var stroke: Array = []
	for point: Vector2 in points: stroke.append([point.x,point.y])
	var length := _length(stroke)
	if length<0.2: return ""
	var bounds:=_bounds(stroke).grow(MATCH_DISTANCE)
	var best := ""
	var best_error := INF
	for road: Dictionary in roads:
		var old_length := _length(road.points)
		if old_length<0.2: continue
		if not bounds.intersects(_bounds(road.points),true):continue
		var ratio := length/old_length
		if ratio<MIN_LENGTH_RATIO or ratio>MAX_LENGTH_RATIO: continue
		var forward := _coverage(stroke,road.points,length)
		if float(forward.fraction)<COVERAGE: continue
		var reverse := _coverage(road.points,stroke,old_length)
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

static func _bounds(points: Array)->Rect2:
	var bounds:=Rect2(_point(points[0]),Vector2.ZERO)
	for point: Array in points:bounds=bounds.expand(_point(point))
	return bounds

static func _coverage(source: Array,target: Array,path_length: float) -> Dictionary:
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
			# Once even perfect remaining samples cannot reach 90%, the retrace
			# is already disproved. Stop scanning unrelated long saved curves.
			if total-covered>path_length*(1.0-COVERAGE)+.000001:return {"fraction":0.,"error":0.}
	return {"fraction":covered/maxf(0.000001,total),"error":error/maxf(0.000001,covered)}

static func sizes_for(style:String)->Array:
	if style in ["path","gravel"]:return [.8,1.25,1.8,3.2]
	if style=="cobble":return [1.25,1.6,2.1,4.8]
	if style=="tram":return [2.1,2.6,3.2,4.8]
	return [1.6,2.1,3.2,4.8]

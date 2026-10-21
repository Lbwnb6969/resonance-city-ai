extends RefCounted
## Exact capsule union. Bounds reject only strokes/segments which cannot
## improve the current signed distance; no grid approximation or radius cap.
class Segment extends RefCounted:
	var a:Vector2
	var b:Vector2
	var delta:Vector2
	var length_squared:float
	var low:Vector2
	var high:Vector2
class Stroke extends RefCounted:
	var radius:float
	var low:Vector2
	var high:Vector2
	var segments:Array[Segment]=[]
var strokes:Array[Stroke]=[]
var _hash:=0
var builds:=0

func prepare(rows:Array)->void:
	var signature:=hash(rows)
	if builds>0 and signature==_hash:return
	_hash=signature;builds+=1;strokes.clear()
	for row:Dictionary in rows:
		var stroke:=Stroke.new();stroke.radius=float(row.width)*.5
		stroke.low=Vector2(row.points[0][0],row.points[0][1]);stroke.high=stroke.low
		for i in range(maxi(1,row.points.size()-1)):
			var part:=Segment.new()
			part.a=Vector2(row.points[i][0],row.points[i][1])
			var j:=mini(i+1,row.points.size()-1)
			part.b=Vector2(row.points[j][0],row.points[j][1]);part.delta=part.b-part.a
			part.length_squared=part.a.distance_squared_to(part.b)
			part.low=part.a.min(part.b);part.high=part.a.max(part.b)
			stroke.low=stroke.low.min(part.low);stroke.high=stroke.high.max(part.high)
			stroke.segments.append(part)
		strokes.append(stroke)

func distance(at:Vector2,river:float)->float:
	var result:=river
	for stroke:Stroke in strokes:
		var reach:=result+stroke.radius
		if reach<0.:continue
		var outside:Vector2=(stroke.low-at).max(at-stroke.high).max(Vector2.ZERO)
		if outside.length_squared()>reach*reach:continue
		var nearest:=INF
		for part:Segment in stroke.segments:
			outside=(part.low-at).max(at-part.high).max(Vector2.ZERO)
			if outside.length_squared()>minf(nearest*nearest,reach*reach):continue
			var d:float
			if part.length_squared<=.000001:d=at.distance_to(part.a)
			else:
				var t:=clampf((at-part.a).dot(part.delta)/part.length_squared,0.,1.)
				d=at.distance_to(part.a.lerp(part.b,t))
			nearest=minf(nearest,d)
		result=minf(result,nearest-stroke.radius)
	return result

extends RefCounted
## Immutable bridges share the road profile used by geometry and journeys.
const GRADE := 0.18

static func era_signature(city: RefCounted) -> Array:
	var enabled := false
	for district: Dictionary in city.districts:
		if str(district.get("era_theme","pastoral")) in ["renaissance","clockwork","modern_eco"]: enabled=true;break
	if not enabled: return []
	var result: Array=[]
	for district: Dictionary in city.districts: result.append([district.points,district.width,district.get("era_theme","pastoral")])
	return result

static func apply(city: RefCounted,road: Dictionary,samples: Array,stones: Array,doors: Array,junctions: Array) -> Array:
	var result: Array=[]
	var cursor := 0
	while cursor<samples.size():
		if not samples[cursor].bridge: cursor+=1;continue
		var first := cursor
		while cursor+1<samples.size() and samples[cursor+1].bridge: cursor+=1
		var last := cursor
		cursor+=1
		if first==0 or last==samples.size()-1: continue
		var low: float=samples[first].distance
		var high: float=samples[last].distance
		if high-low<0.8: continue
		var middle: Vector2=_point(samples,(low+high)*.5).at
		var era: String=str(city.district_at(middle).get("era_theme","pastoral"))
		var truss := era=="clockwork"
		var modern := era=="modern_eco"
		var classical := str(road.get("style","path")) in ["promenade","avenue","tram"] or era in ["renaissance","clockwork","modern_eco"]
		if not classical: continue
		var stepping := false
		for run: Dictionary in stones:
			if float(run.start)<=high and float(run.end)>=low: stepping=true;break
		if stepping: continue
		var base := maxf(float(samples[first].y),float(samples[last].y))
		var deck := base if truss else maxf(base,-.16+minf(1.15,(high-low)*.42))
		# An existing doorstep or crossing is a hard elevation constraint.
		# Short approaches retain a low elliptical arch rather than moving doors.
		for door: Dictionary in doors:
			var gap := maxf(low-float(door.distance),float(door.distance)-high)
			deck=minf(deck,maxf(base,float(door.y)+maxf(0.0,gap-.65)*GRADE))
		for junction: Dictionary in junctions:
			var gap := INF
			for index in range(first,last+1): gap=minf(gap,Vector2(samples[index].xz).distance_to(junction.at))
			deck=minf(deck,maxf(base,float(junction.y)+maxf(0.0,gap-float(junction.radius)-.5)*GRADE))
		for sample: Dictionary in samples:
			var gap := maxf(0.0,maxf(low-float(sample.distance),float(sample.distance)-high))
			sample.y=maxf(float(sample.y),deck-gap*GRADE)
		var run: Dictionary={"id":str(road.id)+("/truss/" if truss else "/modern_arch/" if modern else "/double_arch/")+str(first),"start":low,"end":high,"deck_y":deck,"width":float(road.width),"arch_count":1 if truss or modern else 2,"samples":samples}
		if truss:run.family="clockwork_truss"
		if modern:run.family="modern_single_arch"
		result.append(run)
	return result

static func _point(samples: Array,arc: float) -> Dictionary:
	for index in range(samples.size()-1):
		if arc>float(samples[index+1].distance): continue
		var a: Vector2=samples[index].xz
		var b: Vector2=samples[index+1].xz
		var ratio := clampf((arc-float(samples[index].distance))/maxf(.000001,float(samples[index+1].distance)-float(samples[index].distance)),0.0,1.0)
		return {"at":a.lerp(b,ratio),"tangent":(b-a).normalized()}
	return {"at":samples[-1].xz,"tangent":(Vector2(samples[-1].xz)-Vector2(samples[-2].xz)).normalized()}

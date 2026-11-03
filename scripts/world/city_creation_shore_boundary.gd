extends RefCounted
## Exposed boundary candidates from the same analytic water union as State.
const EPS:=.002
static func river_bank(city:RefCounted,from:Vector2,side:float)->Vector2:
	# Over the authored parcel this sine-bank distance is strictly convex.
	# Minimise the full world-space distance, not a horizontal cross-section.
	var low:float=city.Bounds.LAND_RECT.position.y;var high:float=city.Bounds.LAND_RECT.end.y
	for i in range(56):
		var first:=lerpf(low,high,1./3.);var second:=lerpf(low,high,2./3.)
		var a:=Vector2(city.river_x(first)+side*city.RIVER_HALF_WIDTH,first)
		var b:=Vector2(city.river_x(second)+side*city.RIVER_HALF_WIDTH,second)
		if a.distance_squared_to(from)<b.distance_squared_to(from):high=second
		else:low=first
	var z:float=(low+high)*.5
	return Vector2(city.river_x(z)+side*city.RIVER_HALF_WIDTH,z)
static func sources(city:RefCounted,bank:Vector2)->Array[String]:
	var result:Array[String]=[]
	if absf(absf(bank.x-city.river_x(bank.y))-city.RIVER_HALF_WIDTH)<=EPS:result.append("river")
	for water:Dictionary in city.waters:
		if absf(city._water_stroke_distance(bank,water.points)-float(water.width)*.5)<=EPS:result.append(str(water.id))
	result.sort();return result
static func append(city:RefCounted,result:Array,from:Vector2,bank:Vector2,id:String)->void:
	if absf(city.water_clearance(bank))>EPS:return
	var outward:Vector2=(from-bank).normalized()
	if outward.is_zero_approx() or city.water_clearance(bank+outward*.01)<=0.:return
	var wet:=bank-outward*.6
	if city.water_clearance(wet)>=0.:return
	var ids:=sources(city,bank)
	var row:={"bank":bank,"wet":wet,"water_id":id,"water_ids":ids}
	if not result.has(row):result.append(row)
static func candidates(city:RefCounted,from:Vector2)->Array:
	var result:Array=[]
	for side:float in [-1.,1.]:append(city,result,from,river_bank(city,from,side),"river")
	for water:Dictionary in city.waters:
		for i in range(maxi(1,water.points.size()-1)):
			var a:=Vector2(water.points[i][0],water.points[i][1]);var row:Array=water.points[mini(i+1,water.points.size()-1)];var b:=Vector2(row[0],row[1])
			var near:=Geometry2D.get_closest_point_to_segment(from,a,b)
			append(city,result,from,near+(from-near).normalized()*float(water.width)*.5,str(water.id))
	return result

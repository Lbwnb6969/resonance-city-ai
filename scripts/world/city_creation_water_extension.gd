extends RefCounted
## Search the swept capsules, including their round caps, against the actual
## analytic water union. Two millimetres is the edit equality tolerance.
const EPS:=.002
const LIPSCHITZ:=1.004
static func covered(city:RefCounted,a:Vector2,b:Vector2,radius:float)->bool:
	for water:Dictionary in city.waters:
		var allowance:=float(water.width)*.5-radius
		if allowance<0.:continue
		for i in range(maxi(1,water.points.size()-1)):
			var c:=Vector2(water.points[i][0],water.points[i][1]);var row:Array=water.points[mini(i+1,water.points.size()-1)];var d:=Vector2(row[0],row[1])
			# A capsule is convex: if both endpoints are inside its eroded
			# centreline capsule, the entire new swept segment is contained.
			if a.distance_to(Geometry2D.get_closest_point_to_segment(a,c,d))<=allowance+EPS and b.distance_to(Geometry2D.get_closest_point_to_segment(b,c,d))<=allowance+EPS:return true
	return false
static func assess(city:RefCounted,points:Array[Vector2],width:float)->Dictionary:
	if city.water_clearance(points[0])>0.:return {"ok":false,"message":"引水需要从已有水域起笔","conflicts":[]}
	var radius:=width*.5
	for i in range(points.size()-1):
		var a:Vector2=points[i];var b:Vector2=points[i+1]
		if covered(city,a,b,radius):continue
		var bounds:=Rect2(a.min(b)-Vector2.ONE*radius,a.max(b)-a.min(b)+Vector2.ONE*radius*2.)
		var pending:Array[Rect2]=[bounds]
		while not pending.is_empty():
			var tile:Rect2=pending.pop_back();var at:=tile.get_center();var reach:=tile.size.length()*.5
			var candidate:=at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))-radius
			if candidate>reach:continue
			var old:float=city.water_clearance(at)
			if old+reach*LIPSCHITZ<=EPS:continue
			if candidate<=0. and old>EPS:return {"ok":true,"no_op":false,"extension_at":at}
			if reach<=EPS*.5:continue
			var half:=tile.size*.5
			for offset:Vector2 in [Vector2.ZERO,Vector2(half.x,0),Vector2(0,half.y),half]:pending.append(Rect2(tile.position+offset,half))
	return {"ok":true,"no_op":true,"message":"笔画已在现有水面内，未新增水域","conflicts":[]}

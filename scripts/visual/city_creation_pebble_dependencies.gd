extends RefCounted
## An exact-input cache for the existing stone solver. Keep whole intersecting
## roads/profiles: ramps and junctions can propagate beyond a point edit box.
static func key(solver:RefCounted,road:Dictionary)->int:
	var bounds:=Rect2(Vector2(road.points[0][0],road.points[0][1]),Vector2.ZERO)
	for p:Array in road.points:bounds=bounds.expand(Vector2(p[0],p[1]))
	bounds=bounds.grow(float(road.width)*.5+2.)
	var rows:Array=[road,solver.city.waters]
	for fp:Rect2 in solver.footprints:
		if bounds.intersects(fp,true):rows.append(fp)
	for at:Vector2 in solver.doors:
		if bounds.has_point(at):rows.append(at)
	for segment:Dictionary in solver.segments:
		if bounds.intersects(Rect2(segment.a,Vector2.ZERO).expand(segment.b).grow(segment.radius),true):rows.append(segment)
	for other:Dictionary in solver.city.roads:
		var region:=Rect2(Vector2(other.points[0][0],other.points[0][1]),Vector2.ZERO)
		for p:Array in other.points:region=region.expand(Vector2(p[0],p[1]))
		for marker:Dictionary in other.get("roundabouts",[]):
			var at:=Vector2(marker.center[0],marker.center[1]);region=region.merge(Rect2(at,Vector2.ZERO).grow(float(marker.radius)))
		# Junction polygons extend at most REACH+EXTRA outside the road core.
		if not bounds.intersects(region.grow(float(other.width)*.5+2.),true):continue
		rows.append([other,solver.city._junctions.signature(str(other.id)),solver.city.road_profile(other).signature])
	rows.append(solver.city._ground_terrain.region_signature(bounds))
	return hash(rows)

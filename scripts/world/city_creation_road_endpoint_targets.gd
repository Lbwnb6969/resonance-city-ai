extends RefCounted
## Geometric authoring candidates, never a declaration of navigable connectivity.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
static func pick(city:RefCounted,at:Vector2,radius:float=1.8,doors:bool=true,neighbor:Vector2=Vector2.INF)->Dictionary:
	var rows:Array[Dictionary]=[];var nearby:Array[Dictionary]=[]
	if doors:
		for house:Dictionary in city.houses:
			if not Frame.house_bounds(house).grow(radius+1.).has_point(at):continue
			for entry:Dictionary in city.house_entrances(str(house.id)):
				var point:Vector2=entry.wall_at+Frame.normal(entry)*Frontage.CONTACT
				if at.distance_to(point)>.95:continue
				if neighbor.is_finite() and (neighbor-point).normalized().dot(Frame.normal(entry))<.72:continue
				rows.append({"at":point,"entry_at":entry.at,"wall_at":entry.wall_at,"axis":Frame.normal(entry),"owner":str(house.id),"segment":-1,"self":false,"kind":"door","rank":0,"distance":at.distance_to(point),"key":str(house.id)+"/"+str(entry.cell_id)+"/"+str(entry.side)})
	for road:Dictionary in city.roads:
		for i in range(1,road.points.size()):
			var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
			if a.distance_to(b)<.00001:continue
			var point:=Geometry2D.get_closest_point_to_segment(at,a,b)
			var record:={"at":point,"axis":(b-a).normalized(),"owner":str(road.id),"segment":i-1,"self":false,"kind":"segment","rank":2,"distance":at.distance_to(point),"key":"%s/%08d"%[road.id,i],"a":a,"b":b}
			if record.distance<=radius:rows.append(record);nearby.append(record)
			for end:Vector2 in [a] if i==1 else []:
				if at.distance_to(end)<=radius:var row:=record.duplicate();row.at=end;row.distance=at.distance_to(end);row.rank=1;row.kind="endpoint";rows.append(row)
			if i==road.points.size()-1 and at.distance_to(b)<=radius:
				var row:=record.duplicate();row.at=b;row.distance=at.distance_to(b);row.rank=1;row.kind="endpoint";row.key+="/end";rows.append(row)
	for i in range(nearby.size()):
		for j in range(i):
			var a:Dictionary=nearby[i];var b:Dictionary=nearby[j]
			if a.owner==b.owner:continue
			var hit:Variant=Geometry2D.segment_intersects_segment(a.a,a.b,b.a,b.b)
			if not hit is Vector2 or at.distance_to(hit)>radius:continue
			var row:Dictionary=(a if str(a.key)<str(b.key) else b).duplicate();row.at=hit;row.distance=at.distance_to(hit);row.rank=1;row.kind="intersection";rows.append(row)
	rows.sort_custom(func(a:Dictionary,b:Dictionary)->bool:
		if a.rank!=b.rank:return a.rank<b.rank
		if absf(float(a.distance)-float(b.distance))>.000001:return a.distance<b.distance
		if a.kind!=b.kind:return str(a.kind)<str(b.kind)
		return str(a.key)<str(b.key))
	return rows[0] if not rows.is_empty() else {}

extends RefCounted
## Faces of the actual planar road graph, including segment-interior junctions.
const Stroke=preload("res://scripts/world/city_creation_stroke.gd")
const BIN:=8.
static func faces(roads:Array)->Array[Dictionary]:
	var segments:Array[Dictionary]=[];var bins:Dictionary={}
	for road:Dictionary in roads:
		var points:Array[Vector2]=[]
		for p:Array in road.points:points.append(Vector2(p[0],p[1]))
		points=Stroke._collinear(Stroke.polyline_points(points))
		for i in range(1,points.size()):
			if points[i].distance_to(points[i-1])<.00001:continue
			var row:Dictionary={"a":points[i-1],"b":points[i],"cuts":[0.,1.],"owner":str(road.id)};var index:=segments.size();segments.append(row)
			var low:Vector2i=Vector2i((row.a.min(row.b)/BIN).floor());var high:Vector2i=Vector2i((row.a.max(row.b)/BIN).floor())
			for x in range(low.x,high.x+1):
				for y in range(low.y,high.y+1):
					var key:=Vector2i(x,y)
					if not bins.has(key):bins[key]=[]
					bins[key].append(index)
	var seen:Dictionary={}
	for entries:Array in bins.values():
		for i in range(entries.size()):
			for j in range(i+1,entries.size()):
				var pair:=Vector2i(entries[i],entries[j])
				if seen.has(pair):continue
				seen[pair]=true;var a:Dictionary=segments[pair.x];var b:Dictionary=segments[pair.y]
				var crossing:Variant=Geometry2D.segment_intersects_segment(a.a,a.b,b.a,b.b)
				if crossing is Vector2:_cut(a,crossing);_cut(b,crossing)
				for point:Vector2 in [a.a,a.b]:
					if point.distance_to(Geometry2D.get_closest_point_to_segment(point,b.a,b.b))<.0001:_cut(b,point)
				for point:Vector2 in [b.a,b.b]:
					if point.distance_to(Geometry2D.get_closest_point_to_segment(point,a.a,a.b))<.0001:_cut(a,point)
	var graph:Dictionary={};var positions:Dictionary={};var owners:Dictionary={}
	for row:Dictionary in segments:
		row.cuts.sort()
		for i in range(1,row.cuts.size()):
			var a:Vector2=row.a.lerp(row.b,row.cuts[i-1]);var b:Vector2=row.a.lerp(row.b,row.cuts[i]);var u:=_key(a);var v:=_key(b)
			if u==v:continue
			positions[u]=a;positions[v]=b
			if not graph.has(u):graph[u]=[]
			if not graph.has(v):graph[v]=[]
			if v not in graph[u]:graph[u].append(v)
			if u not in graph[v]:graph[v].append(u)
			owners[u+">"+v]=row.owner;owners[v+">"+u]=row.owner
	for key:String in graph:
		graph[key].sort_custom(func(a:String,b:String)->bool:return (Vector2(positions[a])-Vector2(positions[key])).angle()<(Vector2(positions[b])-Vector2(positions[key])).angle())
	var visited:Dictionary={};var result:Array[Dictionary]=[]
	for u:String in graph:
		for v:String in graph[u]:
			var edge:=u+">"+v
			if visited.has(edge):continue
			var first:=u;var previous:=u;var current:=v;var poly:=PackedVector2Array();var members:Array[String]=[]
			for step in range(positions.size()*2):
				var id:=previous+">"+current
				if visited.has(id):break
				visited[id]=true;poly.append(positions[previous]);members.append(owners[id])
				var neighbors:Array=graph[current];var next:String=neighbors[posmod(neighbors.find(previous)-1,neighbors.size())]
				previous=current;current=next
				if previous==first and current==v:break
			if poly.size()<3 or previous!=first or current!=v:continue
			var area:=0.;var center:=Vector2.ZERO
			for i in range(poly.size()):
				var p:=poly[i];var q:=poly[(i+1)%poly.size()];var cross:=p.cross(q);area+=cross;center+=(p+q)*cross
			if area<56.-.0001 or area>440.+.0001:continue
			center/=3.*area
			if not Geometry2D.is_point_in_polygon(center,poly):continue
			members.sort();result.append({"center":center,"area":area*.5,"polygon":poly,"owner_id":members[0],"owners":members})
	return result
static func _key(at:Vector2)->String:return "%d,%d"%[roundi(at.x*10000.),roundi(at.y*10000.)]
static func _cut(row:Dictionary,at:Vector2)->void:
	var edge:Vector2=row.b-row.a;var t:=clampf((at-Vector2(row.a)).dot(edge)/edge.length_squared(),0.,1.)
	for old:float in row.cuts:
		if absf(old-t)<.000001:return
	row.cuts.append(t)

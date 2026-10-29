extends RefCounted
## Concave ground-room pockets, bounded by real walls and a hull mouth.
## The hull is a candidate envelope only; it never becomes paving or a wall.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
const UNIT:=Frontage.UNIT
const ALIGN:=.002

static func for_house(city:RefCounted,house:Dictionary,water_distance:Callable,context:Dictionary)->Array:
	var solids:Array=[];var cells:Array=[]
	var local_house:Dictionary=Frame.zero(house);local_house.origin=[0.,0.]
	for cell:Dictionary in house.cells:
		if int(cell.level)!=0 or cell.kind!="room":continue
		var polygon:=Frame.corners(Frame.footprint(local_house,cell))
		for i in range(polygon.size()):polygon[i]=polygon[i].snapped(Vector2.ONE*ALIGN)
		cells.append(cell.id);_merge(solids,polygon)
	for polygon:PackedVector2Array in solids:
		for i in range(polygon.size()):polygon[i]=Frame.origin(house)+polygon[i].rotated(-Frame.yaw(house))
	var plans:Array=[]
	for solid:PackedVector2Array in solids:
		if Geometry2D.is_polygon_clockwise(solid):continue
		var hull:=Geometry2D.convex_hull(solid)
		if hull.size()>1 and hull[0].is_equal_approx(hull[-1]):hull.resize(hull.size()-1)
		for pocket:PackedVector2Array in Geometry2D.clip_polygons(hull,solid):
			if Geometry2D.is_polygon_clockwise(pocket):continue
			var boundary:=_boundary(pocket,solid)
			if boundary.mouths.is_empty() or not _surrounds(boundary.normals):continue
			if not context.has("obstacles"):
				context.obstacles=[]
				for other:Dictionary in city.houses:
					for cell:Dictionary in other.cells:context.obstacles.append({"house":other.id,"cell":cell.id,"box":Frame.footprint(other,cell)})
			var obstacles:Array=context.obstacles
			var tiles:=_tiles(house,pocket,obstacles,water_distance)
			if tiles.is_empty():continue
			var openings:=_openings(boundary.mouths,tiles,obstacles,water_distance)
			var key:Array=[]
			for point:Vector2 in pocket:key.append([roundi(point.x*1000.),roundi(point.y*1000.)])
			plans.append({"id":"open_court_"+JSON.stringify([house.id,key]).sha256_text().left(16),"cells":cells.duplicate(),"polygon":pocket,"wall_segments":boundary.walls,"mouths":openings,"usable_tiles":tiles.size(),"area_m2":tiles.size()*UNIT*UNIT,"open_access":openings.any(func(o):return o.clear)})
	plans.sort_custom(func(a,b):return a.id<b.id)
	return plans

static func _merge(solids:Array,polygon:PackedVector2Array)->void:
	var index:=0
	while index<solids.size():
		var merged:=Geometry2D.merge_polygons(solids[index],polygon)
		if merged.size()==1 or merged.any(func(p):return Geometry2D.is_polygon_clockwise(p)):
			# Internal holes belong to the closed-court planner. This pass needs
			# only the outer silhouette; actual rooms still block usable tiles.
			polygon=merged.filter(func(p):return not Geometry2D.is_polygon_clockwise(p))[0];solids.remove_at(index);index=0
		else:index+=1
	solids.append(polygon)

static func _boundary(pocket:PackedVector2Array,solid:PackedVector2Array)->Dictionary:
	var walls:Array=[];var mouths:Array=[];var normals:Array=[]
	var sign_value:=1. if _signed_area(pocket)>0. else -1.
	for i in range(pocket.size()):
		var a:=pocket[i];var b:=pocket[(i+1)%pocket.size()];var edge:=b-a
		if edge.length()<ALIGN:continue
		var normal:=Vector2(-edge.y,edge.x).normalized()*sign_value
		var middle:=(a+b)*.5;var wall:=false
		for j in range(solid.size()):
			var c:=solid[j];var d:=solid[(j+1)%solid.size()]
			if middle.distance_to(Geometry2D.get_closest_point_to_segment(middle,c,d))<=ALIGN and absf(edge.normalized().cross((d-c).normalized()))<ALIGN:
				wall=true;break
		var record:={"a":a,"b":b,"inward":normal}
		if wall:
			walls.append(record)
			if not normals.any(func(n):return n.distance_to(normal)<ALIGN):normals.append(normal)
		else:mouths.append(record)
	return {"walls":walls,"mouths":mouths,"normals":normals}

static func _surrounds(normals:Array)->bool:
	# Three wall directions reaching at least a half-turn distinguish a pocket
	# from an ordinary two-wall corner. This is topology, not a district score.
	if normals.size()<3:return false
	var angles:Array=normals.map(func(n):return fposmod(n.angle(),TAU));angles.sort()
	for i in range(angles.size()):
		var next:float=angles[(i+1)%angles.size()]+(TAU if i==angles.size()-1 else 0.)
		if next-float(angles[i])>PI+ALIGN:return false
	return true

static func _tiles(house:Dictionary,pocket:PackedVector2Array,obstacles:Array,water_distance:Callable)->Array:
	var local:=Rect2(Frame.inverse(house,pocket[0]),Vector2.ZERO)
	for point:Vector2 in pocket:local=local.expand(Frame.inverse(house,point))
	var origin:=Frame.origin(house);var result:Array=[]
	for x in range(ceili((local.position.x-origin.x)/UNIT),floori((local.end.x-origin.x)/UNIT)+1):
		for z in range(ceili((local.position.y-origin.y)/UNIT),floori((local.end.y-origin.y)/UNIT)+1):
			var box:Variant=Frame.footprint(house,{"x":x,"z":z,"level":0,"kind":"room"})
			var inset:Variant=Frame.grow(box,-ALIGN)
			var remainder:=Geometry2D.clip_polygons(Frame.corners(inset),pocket)
			if remainder.any(func(p):return absf(_signed_area(p))>ALIGN*ALIGN):continue
			if obstacles.any(func(o):return Frame.boxes_overlap(inset,Frame.grow(o.box,-ALIGN))):continue
			if float(water_distance.call(box))<.05:continue
			result.append(box)
	return result

static func _openings(mouths:Array,tiles:Array,obstacles:Array,water_distance:Callable)->Array:
	var result:Array=[];var margin:=Frontage.HALF_DOOR
	for mouth:Dictionary in mouths:
		var a:Vector2=mouth.a;var b:Vector2=mouth.b;var length:=a.distance_to(b)
		var record:Dictionary=mouth.duplicate();record.clear=false;record.blocked_by=[]
		var count:=maxi(1,ceili(length/margin))
		for i in range(1,count):
			var at:=a.lerp(b,float(i)/count)
			if minf(at.distance_to(a),at.distance_to(b))<margin:continue
			var outside:Vector2=at-Vector2(mouth.inward)*UNIT*.5
			for tile:Variant in tiles:
				var inside:=Frame.box_center(tile);var direction:=inside-outside
				var corridor:={"center":(inside+outside)*.5,"angle":-direction.angle(),"half":Vector2(direction.length()*.5,margin)}
				var blocked:=false
				for obstacle:Dictionary in obstacles:
					if not Frame.boxes_overlap(corridor,obstacle.box):continue
					blocked=true
					if not record.blocked_by.has(obstacle.house):record.blocked_by.append(obstacle.house)
				if blocked or float(water_distance.call(corridor))<.05:continue
				record.clear=true;record.at=at;record.inside=inside;break
			if record.clear:break
		record.blocked_by.sort();result.append(record)
	return result

static func _signed_area(polygon:PackedVector2Array)->float:
	var value:=0.
	for i in range(polygon.size()):value+=polygon[i].cross(polygon[(i+1)%polygon.size()])
	return value*.5

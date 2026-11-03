extends RefCounted
## A measured approach to a real street surface; never moves an authored door.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Obstacles=preload("res://scripts/world/city_creation_public_space_obstacles.gd")
const Roads=preload("res://scripts/world/city_creation_road_heights.gd")
const HALF_WIDTH:=.35
const SPACING:=.04
static func assess(city:RefCounted,house:Dictionary,entry:Dictionary,target:Vector2,road:Dictionary,surface:Callable)->Dictionary:
	var normal:=Frame.normal(entry)
	var start:Vector2=entry.wall_at+normal*.18
	var result:={"ok":false,"reason":"street_target_missing","half_width":HALF_WIDTH,"from":start,"entry_at":entry.at,"street_at":target,"source_ids":[house.id,entry.cell_id,road.id],"samples":0,"max_rise":0.,"max_grade":0.}
	if city._water_stroke_distance(target,road.points)>float(road.width)*.5+.002:return diagnostic(result)
	if (target-Vector2(entry.wall_at)).dot(normal)<.18:result.reason="street_behind_wall";return diagnostic(result)
	var path:Array[Vector2]=[start,entry.at]
	if target.distance_to(entry.at)>.00001:path.append(target)
	result.path=PackedVector2Array(path);result.polygons=[]
	var obstacles:=Obstacles.collect(city)
	for segment in range(1,path.size()):
		var from:Vector2=path[segment-1];var to:Vector2=path[segment]
		var direction:Vector2=(to-from).normalized();var tangent:=Vector2(-direction.y,direction.x)
		var box:={"polygon":PackedVector2Array([from-tangent*HALF_WIDTH,from+tangent*HALF_WIDTH,to+tangent*HALF_WIDTH,to-tangent*HALF_WIDTH])}
		result.polygons.append(box.polygon)
		for row:Dictionary in obstacles:
			if Frame.boxes_overlap(box,row.shape) or Frame.distance(row.shape,entry.at)<HALF_WIDTH:
				result.reason="column_obstruction" if row.attachment else "solid_obstruction";result.blocker_id=row.owner;return diagnostic(result)
		if not leg(city,from,to,tangent,road,surface,result):return diagnostic(result)
	if path.size()==3 and absf((path[1]-path[0]).normalized().cross((path[2]-path[1]).normalized()))>.00001:
		if not corner(city,entry.at,surface,result):return diagnostic(result)
	result.ok=true;result.reason="supported"
	return diagnostic(result)
static func leg(city:RefCounted,start:Vector2,target:Vector2,tangent:Vector2,road:Dictionary,surface:Callable,result:Dictionary)->bool:
	var count:=maxi(1,ceili(start.distance_to(target)/SPACING));var previous:Array=[]
	var lateral_count:=ceili(2.*HALF_WIDTH/SPACING)
	for i in range(count+1):
		var current:Array=[]
		var center:=start.lerp(target,float(i)/count)
		if not result.has("road_edge_at") and city._water_stroke_distance(center,road.points)<=float(road.width)*.5+.002:result.road_edge_at=center
		for column in range(lateral_count+1):
			var side:=lerpf(-HALF_WIDTH,HALF_WIDTH,float(column)/lateral_count)
			var at:=start.lerp(target,float(i)/count)+tangent*side
			var sample:Dictionary=surface.call(at);sample=sample.duplicate();sample.at=at
			var peers:Array=[]
			if i>0:peers.append(previous[current.size()])
			if not current.is_empty():peers.append(current[-1])
			if not supported(city,sample,peers,result):return false
			current.append(sample)
		previous=current
	return true
static func corner(city:RefCounted,at:Vector2,surface:Callable,result:Dictionary)->bool:
	var radius:=ceili(HALF_WIDTH/SPACING);var grid:Dictionary={};var samples_before:int=result.samples
	for z in range(-radius,radius+1):
		for x in range(-radius,radius+1):
			if x*x+z*z>radius*radius:continue
			var key:=Vector2i(x,z);var point:=at+Vector2(key)*(HALF_WIDTH/radius)
			var sample:Dictionary=surface.call(point);sample=sample.duplicate();sample.at=point
			var peers:Array=[]
			for neighbor:Vector2i in [key+Vector2i.LEFT,key+Vector2i.UP]:
				if grid.has(neighbor):peers.append(grid[neighbor])
			if not supported(city,sample,peers,result):return false
			grid[key]=sample
	result.corner_samples=int(result.samples)-samples_before
	return true
static func supported(city:RefCounted,sample:Dictionary,peers:Array,result:Dictionary)->bool:
	if sample.kind=="road_gap":result.reason="road_surface_gap";result.blocked_at=sample.at;return false
	# A road/step deck can support a wet footprint; bare water cannot.
	if sample.kind=="ground" and city.water_clearance(sample.at)<.05:result.reason="water_obstruction";result.blocked_at=sample.at;return false
	for peer:Dictionary in peers:
		var rise:=absf(float(sample.y)-float(peer.y));var distance:float=Vector2(sample.at).distance_to(peer.at)
		var allowed:=Roads.MAX_GRADE*distance+.002
		var stepped:bool=sample.kind!=peer.kind or "step" in str(sample.kind)
		if stepped:allowed+=Roads.STEP_HEIGHT
		result.max_rise=maxf(float(result.max_rise),rise)
		if not stepped:result.max_grade=maxf(float(result.max_grade),rise/maxf(distance,.000001))
		if rise>allowed:result.reason="unsupported_corridor_height";result.blocked_at=sample.at;return false
	result.samples+=1
	return true
static func diagnostic(result:Dictionary)->Dictionary:
	result.max_rise=snappedf(result.max_rise,.000001);result.max_grade=snappedf(result.max_grade,.000001)
	return result

extends RefCounted
## Derived crossings over low, narrow authored channels. This planner reads
## water geometry and the immutable raw grid only, never protected/street height.
const Terrain := preload("res://scripts/world/city_creation_terrain.gd")
const SCAN_STEP := 0.08
const STONE_SPACING := 0.48
const STONE_Y := Terrain.WATER_LEVEL+0.12
const STONE_ALONG := 0.17
const STONE_CROSS := 0.38
const APPROACH := 1.6

static func for_road(city: RefCounted,road: Dictionary) -> Array:
	var result: Array = []
	if str(road.get("style","path")) not in ["path","cobble"] or float(road.width)>1.3: return result
	var nearby := false
	var road_bounds := Rect2(Vector2(float(road.points[0][0]),float(road.points[0][1])),Vector2.ZERO)
	for row: Array in road.points: road_bounds=road_bounds.expand(Vector2(float(row[0]),float(row[1])))
	for water: Dictionary in city.waters:
		if str(water.kind)!="channel" or float(water.width)>=2.6: continue
		var bounds := Rect2(Vector2(float(water.points[0][0]),float(water.points[0][1])),Vector2.ZERO)
		for row: Array in water.points: bounds=bounds.expand(Vector2(float(row[0]),float(row[1])))
		if bounds.grow(float(water.width)*0.5+0.2).intersects(road_bounds,true): nearby=true;break
	if not nearby: return result
	# Public raw sampling can initialize an isolated CPU State safely: unlike
	# ground_height/road_profile it never invokes protection or this planner.
	city.raw_terrain_height(Vector2(float(road.points[0][0]),float(road.points[0][1])))
	var samples := _samples(road.points)
	if samples.size()<2: return result
	var index := 0
	while index<samples.size():
		if float(city.water_clearance(samples[index].at))>=0.0: index+=1;continue
		var first := index
		while index+1<samples.size() and float(city.water_clearance(samples[index+1].at))<0.0: index+=1
		var last := index
		index+=1
		if first==0 or last==samples.size()-1: continue
		var wet_start := _boundary(city,samples[first-1],samples[first])
		var wet_end := _boundary(city,samples[last+1],samples[last])
		var span := float(wet_end.distance)-float(wet_start.distance)
		if span<0.45 or span>3.4: continue
		var water_id := ""
		var valid := true
		var tangent := Vector2.ZERO
		var deepest := 0.0
		for sample_index in range(first,last+1):
			var sample: Dictionary = samples[sample_index]
			var at: Vector2 = sample.at
			# The main river or any pond wins over the channel classification.
			if absf(at.x-float(city.river_x(at.y)))-float(city.RIVER_HALF_WIDTH)<=0.15: valid=false;break
			var channel: Dictionary = {}
			for water: Dictionary in city.waters:
				var clearance := _water_distance(at,water)-float(water.width)*0.5
				if clearance>=0.0: continue
				if str(water.kind)!="channel" or float(water.width)>=2.6: valid=false;break
				if not water_id.is_empty() and str(water.id)!=water_id: valid=false;break
				channel=water
				water_id=str(water.id)
				deepest=minf(deepest,clearance)
			if not valid or channel.is_empty(): valid=false;break
			tangent=_water_tangent(at,channel)
			if tangent.is_zero_approx() or absf(Vector2(sample.axis).dot(tangent))>0.55: valid=false;break
		if not valid or deepest> -0.25: continue
		var start := maxf(0.0,float(wet_start.distance)-0.20)
		var end := minf(float(samples[-1].distance),float(wet_end.distance)+0.20)
		var a := point_at(samples,start)
		var b := point_at(samples,end)
		if float(city.water_clearance(a.at))<0.08 or float(city.water_clearance(b.at))<0.08: continue
		if not _other_roads_clear(city,road,samples,start,end): continue
		var channel: Dictionary = {}
		for water: Dictionary in city.waters:
			if str(water.id)==water_id: channel=water;break
		var middle: Vector2 = (Vector2(wet_start.at)+Vector2(wet_end.at))*0.5
		var center := _water_nearest(middle,channel)
		var normal := Vector2(tangent.y,-tangent.x)
		# Opposite banks exclude hooks around a channel's rounded end cap.
		if (Vector2(a.at)-center).dot(normal)*(Vector2(b.at)-center).dot(normal)>=-0.01: continue
		# A high bank remains a bridge. Stones cannot tunnel into a plateau.
		for at: Vector2 in [a.at,b.at]:
			if float(city._ground_terrain.raw_height_at(at))>0.16: valid=false
		if not valid: continue
		var count := maxi(2,ceili((end-start)/STONE_SPACING)+1)
		var stones: Array = []
		var points: Array[Vector2] = []
		var bounds := Rect2(a.at,Vector2.ZERO).expand(b.at)
		for stone_index in range(count):
			var arc := lerpf(start,end,float(stone_index)/float(count-1))
			var point := point_at(samples,arc)
			stones.append({"at":point.at,"y":STONE_Y,"axis":point.axis,"distance":arc,"radius_along":STONE_ALONG,"radius_cross":STONE_CROSS})
			points.append(point.at)
			bounds=bounds.expand(point.at)
		result.append({"id":str(road.id)+"/stepping/"+water_id+"/"+str(result.size()),"road_id":str(road.id),"water_id":water_id,"start":start,"end":end,"wet_start":float(wet_start.distance),"wet_end":float(wet_end.distance),"wet_a":wet_start.at,"wet_b":wet_end.at,"transition_start":maxf(0.0,start-APPROACH),"transition_end":minf(float(samples[-1].distance),end+APPROACH),"bounds":bounds.grow(STONE_CROSS),"stones":stones,"points":points,"y":STONE_Y,"spacing":(end-start)/float(count-1)})
	return result

static func _other_roads_clear(city: RefCounted,road: Dictionary,samples: Array,start: float,end: float) -> bool:
	# Another bridge has a continuous deck and can win the shared street-height
	# projection. Keep that junction as a bridge instead of hiding stones under
	# it. Include the complete local strip plus the original junction extra.
	var own_radius := float(road.width)*0.5+0.38+SCAN_STEP
	for other: Dictionary in city.roads:
		if str(other.id)==str(road.id): continue
		var reach := own_radius+float(other.width)*0.5
		for sample: Dictionary in samples:
			if float(sample.distance)<start or float(sample.distance)>end: continue
			var at: Vector2 = sample.at
			for index in range(other.points.size()-1):
				var a := Vector2(float(other.points[index][0]),float(other.points[index][1]))
				var b := Vector2(float(other.points[index+1][0]),float(other.points[index+1][1]))
				if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<=reach: return false
	return true

static func _samples(points: Array) -> Array:
	var result: Array = []
	var arc := 0.0
	for i in range(points.size()-1):
		var a := Vector2(float(points[i][0]),float(points[i][1]))
		var b := Vector2(float(points[i+1][0]),float(points[i+1][1]))
		var count := maxi(1,ceili(a.distance_to(b)/SCAN_STEP))
		for step in range(count+1):
			if i>0 and step==0: continue
			var at := a.lerp(b,float(step)/float(count))
			if not result.is_empty(): arc+=at.distance_to(Vector2(result[-1].at))
			result.append({"at":at,"axis":(b-a).normalized(),"distance":arc})
	return result

static func point_at(samples: Array,arc: float) -> Dictionary:
	for i in range(samples.size()-1):
		if arc>float(samples[i+1].distance): continue
		var a: Dictionary = samples[i]
		var b: Dictionary = samples[i+1]
		var t := clampf((arc-float(a.distance))/maxf(0.000001,float(b.distance)-float(a.distance)),0.0,1.0)
		return {"at":Vector2(a.at).lerp(b.at,t),"axis":b.axis,"distance":arc}
	return {"at":samples[-1].at,"axis":samples[-1].axis,"distance":arc}

static func _boundary(city: RefCounted,dry: Dictionary,wet: Dictionary) -> Dictionary:
	var a: Vector2 = dry.at
	var b: Vector2 = wet.at
	var da: float = dry.distance
	var db: float = wet.distance
	for ignored in range(10):
		var mid := (a+b)*0.5
		var arc := (da+db)*0.5
		if float(city.water_clearance(mid))<0.0: b=mid;db=arc
		else: a=mid;da=arc
	return {"at":(a+b)*0.5,"distance":(da+db)*0.5}

static func _water_distance(at: Vector2,water: Dictionary) -> float:
	var nearest := INF
	for i in range(maxi(1,water.points.size()-1)):
		var a := Vector2(float(water.points[i][0]),float(water.points[i][1]))
		var row: Array = water.points[mini(i+1,water.points.size()-1)]
		var b := Vector2(float(row[0]),float(row[1]))
		nearest=minf(nearest,Geometry2D.get_closest_point_to_segment(at,a,b).distance_to(at))
	return nearest

static func _water_tangent(at: Vector2,water: Dictionary) -> Vector2:
	var nearest := INF
	var result := Vector2.ZERO
	for i in range(water.points.size()-1):
		var a := Vector2(float(water.points[i][0]),float(water.points[i][1]))
		var b := Vector2(float(water.points[i+1][0]),float(water.points[i+1][1]))
		var distance := Geometry2D.get_closest_point_to_segment(at,a,b).distance_to(at)
		if distance<nearest: nearest=distance;result=(b-a).normalized()
	return result

static func _water_nearest(at: Vector2,water: Dictionary) -> Vector2:
	var nearest := INF
	var result := Vector2.ZERO
	for i in range(water.points.size()-1):
		var a := Vector2(float(water.points[i][0]),float(water.points[i][1]))
		var b := Vector2(float(water.points[i+1][0]),float(water.points[i+1][1]))
		var point := Geometry2D.get_closest_point_to_segment(at,a,b)
		if point.distance_squared_to(at)<nearest: nearest=point.distance_squared_to(at);result=point
	return result

static func crossing_height(run: Dictionary,arc: float) -> float:
	var stones: Array = run.stones
	for i in range(stones.size()-1):
		var a: Dictionary = stones[i]
		var b: Dictionary = stones[i+1]
		if arc>float(b.distance): continue
		var gap_start := float(a.distance)+STONE_ALONG
		var gap_end := float(b.distance)-STONE_ALONG
		if arc<=gap_start or arc>=gap_end or gap_end<=gap_start: return STONE_Y
		return STONE_Y+sin((arc-gap_start)/(gap_end-gap_start)*PI)*0.035
	return STONE_Y

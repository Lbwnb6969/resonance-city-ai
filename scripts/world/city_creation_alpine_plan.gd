extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
enum Kind { SPLIT_GABLE_CHALET, MONO_PITCH_PAVILION, STEPPED_TERRACE_HOUSE, TIMBER_PANORAMA, TWIN_GABLE, GREEN_LODGE }
static func kind_for(house: Dictionary) -> int:
	var selected: int=preload("res://scripts/world/city_creation_architecture_choice.gd").ALPINE.find(str(house.get("architecture","")))
	if selected>=0:return selected
	if float(house.get("base_y",0.))>=.6: return Kind.STEPPED_TERRACE_HOUSE
	return posmod(hash([str(house.id),int(house.get("seed",0))]),2)

static func front(city, house: Dictionary) -> Vector2i:
	var at := Vector2(house.origin[0],house.origin[1])
	var nearest := INF; var toward := Vector2.DOWN
	if kind_for(house)==Kind.STEPPED_TERRACE_HOUSE:
		for side: Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
			var sample := at+Vector2(side)*1.3
			var distance := 10.
			for road: Dictionary in city.roads:
				for i in range(1,road.points.size()):
					var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
					distance=minf(distance,sample.distance_to(Geometry2D.get_closest_point_to_segment(sample,a,b)))
			var height: float = city.raw_terrain_height(sample)+distance*.001
			if height<nearest: nearest=height; toward=Vector2(side)
	else:
		for source: Dictionary in city.roads+city.waters:
			for i in range(1,source.points.size()):
				var a := Vector2(source.points[i-1][0],source.points[i-1][1]); var b := Vector2(source.points[i][0],source.points[i][1])
				var delta := Geometry2D.get_closest_point_to_segment(at,a,b)-at
				if delta.length_squared()<nearest: nearest=delta.length_squared(); toward=delta
	if kind_for(house)==Kind.SPLIT_GABLE_CHALET:
		var low := Vector2i.ZERO; var high := Vector2i.ZERO
		for cell: Dictionary in house.cells:
			low=Vector2i(mini(low.x,int(cell.x)),mini(low.y,int(cell.z))); high=Vector2i(maxi(high.x,int(cell.x)),maxi(high.y,int(cell.z)))
		if high.x-low.x>high.y-low.y: return Vector2i.RIGHT
		if high.y-low.y>high.x-low.x: return Vector2i.DOWN
	return Vector2i(int(signf(toward.x)),0) if absf(toward.x)>absf(toward.y) else Vector2i(0,int(signf(toward.y)))

static func top(house: Dictionary, cell: Dictionary) -> bool:
	return not house.cells.any(func(c):return c.kind=="room" and c.x==cell.x and c.z==cell.z and int(c.level)>int(cell.level))

static func seams(city, house: Dictionary, cell: Dictionary, direction: Vector2i) -> Array[bool]:
	var result: Array[bool] = [false,false]
	var at := Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8)
	for index in range(2):
		var target := at+Vector2(direction)*1.8*(-1. if index==0 else 1.)
		for other: Dictionary in city.houses:
			if str(other.id)!=str(house.id) and (not is_zero_approx(Frame.yaw(house)) or not is_zero_approx(Frame.yaw(other))):continue
			if city.house_era(other)!="modern_eco" or absf(float(other.get("base_y",0.))-float(house.get("base_y",0.)))>.002: continue
			if kind_for(other)!=kind_for(house) or front(city,other)!=direction: continue
			for room: Dictionary in other.cells:
				if room.kind!="room" or int(room.level)!=int(cell.level) or not top(other,room): continue
				var center := Vector2(other.origin[0]+room.x*1.8,other.origin[1]+room.z*1.8)
				if center.distance_to(target)<.002: result[index]=true
	return result

extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Shared derived bridges connect real second/third floors without new save IDs.
const UNIT:=1.8
const FLOOR:=1.7
const WIDTH:=.84
static func for_house(city:RefCounted,house:Dictionary)->Array[Dictionary]:
	var result:Array[Dictionary]=[]
	if city.house_era(house)!="modern_eco":return result
	for cell:Dictionary in house.cells:
		if cell.kind!="room" or int(cell.level) not in [1,2]:continue
		var at:=_center(house,cell);var y:=float(house.get("base_y",0.))+int(cell.level)*FLOOR+.15
		for direction:Vector2i in [Vector2i.RIGHT,Vector2i.DOWN,Vector2i.LEFT,Vector2i.UP]:
			if _neighbor(house,cell,direction):continue
			var normal:=Frame.direction(house,Vector2(direction))
			var closest:=INF;var selected:Dictionary={}
			for other:Dictionary in city.houses:
				if str(house.id)==str(other.id) or city.house_era(other)!="modern_eco" or absf(Frame.yaw(house)-Frame.yaw(other))>.00001:continue
				for target:Dictionary in other.cells:
					if target.kind!="room" or int(target.level) not in [1,2] or _neighbor(other,target,-direction):continue
					var height:=float(other.get("base_y",0.))+int(target.level)*FLOOR+.15
					if absf(height-y)>.02:continue
					var to:=_center(other,target);var offset:=to-at;var distance:=offset.dot(normal)
					if distance<2.2 or distance>preload("res://scripts/world/city_creation_tradition_rules.gd").bridge_distance(city) or absf(offset.cross(normal))>.02 or distance>=closest:continue
					var a:=at+normal*.87;var b:=to-normal*.87
					if not _clear(city,a,b,y,str(cell.id),str(target.id)):continue
					closest=distance;selected={"from_house":str(house.id),"to_house":str(other.id),"from_cell":str(cell.id),"to_cell":str(target.id),"a":a,"b":b,"floor_y":y,"width":WIDTH,"level":int(cell.level),"length":a.distance_to(b)}
			if not selected.is_empty() and int(str(house.id).substr(1))<int(str(selected.to_house).substr(1)):result.append(selected)
	result.sort_custom(func(a:Dictionary,b:Dictionary)->bool:return float(a.floor_y)>float(b.floor_y) if not is_equal_approx(a.floor_y,b.floor_y) else float(a.length)<float(b.length))
	var selected_pairs:Dictionary={};var unique:Array[Dictionary]=[]
	for bridge:Dictionary in result:
		if selected_pairs.has(bridge.to_house):continue
		selected_pairs[bridge.to_house]=true;unique.append(bridge)
	return unique
static func _center(house:Dictionary,cell:Dictionary)->Vector2:
	return Frame.center(house,cell)
static func _neighbor(house:Dictionary,cell:Dictionary,direction:Vector2i)->bool:
	for other:Dictionary in house.cells:
		if other.kind=="room" and int(other.level)==int(cell.level) and int(other.x)==int(cell.x)+direction.x and int(other.z)==int(cell.z)+direction.y:return true
	return false
static func _clear(city:RefCounted,a:Vector2,b:Vector2,y:float,from_cell:String,to_cell:String)->bool:
	var corridor:=Rect2(a,Vector2.ZERO).expand(b).grow(WIDTH*.5+.04)
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if str(cell.id) in [from_cell,to_cell]:continue
			var bottom:=float(house.get("base_y",0.))+int(cell.level)*FLOOR
			var top:=bottom+(.18 if cell.kind=="terrace" else FLOOR)
			if cell.kind=="room":
				var covered:=false
				for above:Dictionary in house.cells:
					if int(above.x)==int(cell.x) and int(above.z)==int(cell.z) and int(above.level)>int(cell.level):covered=true;break
				if not covered:top+=.70 if city.house_era(house)=="modern_eco" else 1.8 if city.house_era(house)=="renaissance" or house.get("style","")=="round_tower" else 1.0
			if top<y-.1 or bottom>y+1.4:continue
			if Frame.segment(Frame.footprint(house,cell,WIDTH*.5+.04),a,b):return false
	for i in range(1,6):
		var p:=a.lerp(b,float(i)/6.)
		if city.ground_height(p)>y-.2:return false
		for road:Dictionary in city.roads:
			for j in range(1,road.points.size()):
				var u:=Vector2(road.points[j-1][0],road.points[j-1][1]);var v:=Vector2(road.points[j][0],road.points[j][1])
				if Geometry2D.get_closest_point_to_segment(p,u,v).distance_to(p)<float(road.width)*.5+.45 and y<city.street_height(p)+2.25:return false
	return true
static func adjacency_signature(city:RefCounted,house:Dictionary)->Array:
	if city.house_era(house)!="modern_eco":return []
	var bounds:=Rect2(Vector2(house.origin[0],house.origin[1]),Vector2.ZERO)
	for cell:Dictionary in house.cells:bounds=bounds.expand(_center(house,cell))
	var result:Array=[city.terrain_policy]
	for other:Dictionary in city.houses:
		for cell:Dictionary in other.cells:
			if bounds.grow(preload("res://scripts/world/city_creation_tradition_rules.gd").bridge_distance(city)+1.).has_point(_center(other,cell)):result.append([other.id,other.origin,other.get("base_y",0.),other.cells,other.get("architecture",""),Frame.yaw(other),city.house_era(other)]);break
	for field:String in ["roads","terrain_strokes","waters","districts"]:
		for row:Dictionary in city.get(field):
			var influence:=_stroke_bounds(row.points).grow(float(row.get("radius",row.get("width",0.)))*1.5)
			if bounds.grow(preload("res://scripts/world/city_creation_tradition_rules.gd").bridge_distance(city)+1.).intersects(influence):result.append([field,row])
	return result

static func _stroke_bounds(points:Array)->Rect2:
	var result:=Rect2(Vector2(points[0][0],points[0][1]),Vector2.ZERO)
	for point:Array in points:result=result.expand(Vector2(point[0],point[1]))
	return result.grow(.001)

extends RefCounted
## Read-only, height-matched upper entrances. Ground door/road anchors stay separate.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const SIDES=[Vector2i.DOWN,Vector2i.RIGHT,Vector2i.LEFT,Vector2i.UP]
static func anchor_y(city,door:Dictionary,samples:Array,arc:float)->float:
	var index:int=city._house_index(str(door.house_id))
	if index<0:return float(door.y)
	var house:Dictionary=city.houses[index]
	if not eligible(house) or not house.cells.any(func(c):return int(c.level)==1 and c.kind=="room"):return float(door.y)
	var closest:Dictionary=samples[0]
	for sample:Dictionary in samples:
		if absf(float(sample.distance)-arc)<absf(float(closest.distance)-arc):closest=sample
	if absf(float(closest.y)-(float(house.get("base_y",0.))+1.85))<=.48:return float(closest.y)
	return float(door.y)
static func with_ground(city,house:Dictionary,ground:Array)->Array:
	var result:Array=ground.duplicate();result.append_array(entries(city,house));return result
static func eligible(house:Dictionary)->bool:
	return not house.has("signature") and house.get("style","")!="round_tower" and house.get("architecture","") in ["","townhouse","recessed_townhouse","chalet","green_lodge","terrace"]
static func entries(city,house:Dictionary,prepared:bool=false)->Array[Dictionary]:
	var result:Array[Dictionary]=[]
	if not eligible(house):return result
	if not prepared:
		for road:Dictionary in city.roads:city.road_profile(road)
	for cell:Dictionary in house.cells:
		if cell.kind!="room" or int(cell.level)!=1:continue
		for side:Vector2i in SIDES:
			if house.cells.any(func(c):return int(c.level)==1 and int(c.x)==int(cell.x)+side.x and int(c.z)==int(cell.z)+side.y):continue
			var normal:=Frame.direction(house,Vector2(side),cell);var wall:=Frame.center(house,cell)+normal*.9;var found:=false
			for road:Dictionary in city.roads:
				for first:bool in [true,false]:
					var index:int=0 if first else road.points.size()-1;var point:=Vector2(road.points[index][0],road.points[index][1]);var next:=Vector2(road.points[1 if first else index-1][0],road.points[1 if first else index-1][1]);var delta:=point-wall;var along:=delta.dot(normal)
					if along<.55 or along>1.65 or absf(delta.cross(normal))>.10 or (next-point).normalized().dot(normal)<.90:continue
					var surface:Dictionary=city._road_heights.surface_at(point);var low:=float(house.get("base_y",0.))+1.85
					if surface.is_empty() or not surface.get("supported",true):continue
					var high:float=float(surface.get("top_y",surface.y))
					if absf(high-low)>.48:continue
					var plan:={"upper_stoop":true,"cell_id":str(cell.id),"cell_x":int(cell.x),"cell_z":int(cell.z),"side":side,"outward":normal,"wall_at":wall,"at":point,"clearance_at":point,"active":true,"road_id":str(road.id),"sill_y":low,"street_y":high,"distance":along,"count":1 if absf(high-low)<.002 else ceili(absf(high-low)/.12)+1,"house_id":str(house.id)}
					if clear(city,plan):result.append(plan);found=true;break
				if found:break
	return result
static func polygon(plan:Dictionary,start:float,end:float,half:float=.48)->PackedVector2Array:
	var normal:Vector2=plan.outward;var tangent:=Vector2(-normal.y,normal.x);var a:Vector2=plan.wall_at+normal*start;var b:Vector2=plan.wall_at+normal*end
	return PackedVector2Array([a-tangent*half,b-tangent*half,b+tangent*half,a+tangent*half])
static func clear(city,plan:Dictionary)->bool:
	var shape:={"polygon":polygon(plan,.12,plan.distance)};var low:=minf(plan.sill_y,plan.street_y)-.12;var high:=maxf(plan.sill_y,plan.street_y)+1.5
	for other:Dictionary in city.houses:
		for cell:Dictionary in other.cells:
			var base:=float(other.get("base_y",0.))+int(cell.level)*1.7
			if base<high and base+1.7>low and Frame.boxes_overlap(shape,Frame.footprint(other,cell)):return false
	for item:Dictionary in city.placed_landmarks:
		if Frame.boxes_overlap(shape,city.PlacedLandmarks.footprint(item)):return false
	return true
static func height(plan:Dictionary,at:Vector2)->float:
	var delta:Vector2=at-Vector2(plan.wall_at);var along:=delta.dot(plan.outward)
	if along<.119 or along>float(plan.distance)+.01 or absf(delta.cross(plan.outward))>.481:return -INF
	if along>=float(plan.distance)-.001:return float(plan.street_y)
	var rank:=clampi(floori((along-.12)/(float(plan.distance)-.12)*int(plan.count)),0,int(plan.count)-1)
	return lerpf(plan.sill_y,plan.street_y,float(rank)/maxi(1,int(plan.count)-1))

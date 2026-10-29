extends RefCounted
## Wall-supported volumes: no ground furniture, no authored role changes.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const WIDTH:=1.62
const DEPTH:=1.10
const LOW:=1.38
const HIGH:=1.63
const SUPPORT_LOW:=1.32
const SUPPORT_HIGH:=1.66
static func prepare(city:RefCounted)->Dictionary:
	var result:Dictionary={}
	if not city.CreationPolicy.is_free(city) or not city.creative_settings.presentation.automatic_decoration:return result
	var zones:Dictionary=city.functional_zones();var accepted:Array=[]
	var houses:Array=city.houses.duplicate();houses.sort_custom(func(a,b):return str(a.id)<str(b.id))
	for house:Dictionary in houses:
		var id:String=house.id
		if house.has("signature") or house.role not in ["residential","bakery","garden_cafe"] or "waterfront" not in zones.houses[id].kinds:continue
		var rows:Array=[]
		for entry:Dictionary in city.house_entrances(id):
			if entry.get("passage",false):continue
			var normal:Vector2=Frame.normal(entry);var base:float=house.get("base_y",0.)
			var road_id:=_road(city,entry)
			if road_id.is_empty():continue
			var row:Dictionary={"house_id":id,"cell_id":str(entry.cell_id),"road_id":road_id,"wall":entry.wall_at,"normal":normal,"base_y":base,"yaw":atan2(normal.x,normal.y)}
			row.footprint={"center":Vector2(entry.wall_at)+normal*DEPTH*.5,"half":Vector2(WIDTH*.5,DEPTH*.5),"angle":row.yaw}
			if not clear(city,row,accepted):continue
			rows.append(row);accepted.append(row)
		if not rows.is_empty():result[id]=rows
	return result
static func _road(city:RefCounted,entry:Dictionary)->String:
	if entry.active:return str(entry.road_id)
	for road:Dictionary in city.roads:
		for i in range(1,road.points.size()):
			var a:=Vector2(road.points[i-1][0],road.points[i-1][1]);var b:=Vector2(road.points[i][0],road.points[i][1])
			var nearest:=Geometry2D.get_closest_point_to_segment(entry.at,a,b)
			if nearest.distance_to(entry.at)<=float(road.width)*.5+.35 and (nearest-Vector2(entry.wall_at)).dot(Frame.normal(entry))>.1:return str(road.id)
	return ""
static func clear(city:RefCounted,row:Dictionary,accepted:Array=[])->bool:
	var fp:Dictionary=row.footprint;var low:float=row.base_y+SUPPORT_LOW;var high:float=row.base_y+SUPPORT_HIGH
	var samples:Array[Vector2]=[];samples.append_array(Frame.corners(fp))
	for x in range(5):
		for z in range(4):samples.append(Frame.sample(fp,Vector2(x/4.,z/3.)))
	for at:Vector2 in samples:
		if not city.WORLD_RECT.has_point(at) or low-city.street_height(at)<.95:return false
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if house.id==row.house_id and str(cell.id)==row.cell_id:continue
			var bottom:float=float(house.get("base_y",0.))+int(cell.level)*1.7
			if bottom>=high or bottom+1.7<=low:continue
			if Frame.boxes_overlap(fp,Frame.footprint(house,cell,.04)):return false
	for plant:Dictionary in city.plants:
		if plant.kind in ["olive","cypress"] and city.vegetation_visible(plant) and Frame.distance(fp,Vector2(plant.position[0],plant.position[1]))<.70:return false
	for other:Dictionary in accepted:
		if other.base_y+SUPPORT_HIGH>low and other.base_y+SUPPORT_LOW<high and Frame.boxes_overlap(fp,other.footprint):return false
	for landmark:Dictionary in city.placed_landmarks:
		if Frame.boxes_overlap(fp,city.PlacedLandmarks.footprint(landmark,.1)):return false
	return true

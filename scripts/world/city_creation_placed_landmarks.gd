extends RefCounted
## Free build access is separate from historical earned blueprint records.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Legacy=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd")
const SIZES:={"riverbank":Vector2(3.6,3.6),"highland":Vector2(5.,4.4),"courtyard":Vector2(4.8,4.8),"artisan":Vector2(3.8,3.8)}
const HEIGHTS:={"riverbank":5.6,"highland":3.6,"courtyard":3.8,"artisan":6.2}
const FIELDS:=["id","blueprint","position","yaw","base_y"]
static func available_blueprints(settings:Dictionary,journey:Dictionary)->Dictionary:
	if settings.get("creation_policy","legacy")!="free":return Legacy.unlocked_journey(journey)
	var result:Dictionary={}
	for family:String in SIZES:result[family]=true
	return result
static func position(row:Dictionary)->Vector2:return Vector2(row.position[0],row.position[1])
static func footprint(row:Dictionary,margin:float=0.)->Dictionary:return {"center":position(row)+Vector2(0,.27).rotated(-float(row.yaw)),"half":Vector2(SIZES[row.blueprint])*.5+Vector2(0,.27)+Vector2.ONE*margin,"angle":float(row.yaw)}
static func entrance(row:Dictionary)->Vector2:return position(row)+Vector2(0,SIZES[row.blueprint].y*.5+1.).rotated(-float(row.yaw))
static func row(city:RefCounted,id:String)->Dictionary:
	for item:Dictionary in city.placed_landmarks:
		if item.id==id:return item
	return {}
static func occupies(city:RefCounted,at:Vector2,radius:float=0.)->bool:
	for item:Dictionary in city.placed_landmarks:
		if Frame.distance(footprint(item),at)<radius+.15:return true
	return false
static func hits_house(city:RefCounted,house:Dictionary)->bool:
	for item:Dictionary in city.placed_landmarks:
		for cell:Dictionary in house.cells:
			if Frame.boxes_overlap(footprint(item,.18),Frame.footprint(house,cell)):return true
	return false
static func stroke_hits(box:Variant,points:Array,radius:float)->bool:
	var expanded:Variant=Frame.grow(box,radius)
	for i in range(maxi(1,points.size()-1)):
		if Frame.segment(expanded,Vector2(points[i][0],points[i][1]),Vector2(points[mini(i+1,points.size()-1)][0],points[mini(i+1,points.size()-1)][1])):return true
	return false
static func stroke_conflicts(city:RefCounted,points:Array,radius:float)->bool:
	if points.is_empty():return false
	for item:Dictionary in city.placed_landmarks:
		if stroke_hits(footprint(item,.2),points,radius):return true
	return false
static func water_conflicts(city:RefCounted,points:Array,width:float)->Array[Dictionary]:
	var out:Array[Dictionary]=[]
	for item:Dictionary in city.placed_landmarks:
		if stroke_hits(footprint(item,.3),points,width*.5):out.append({"kind":"landmark","id":item.id,"position":item.position,"source":"player"})
	return out
static func site(city:RefCounted,item:Dictionary,except_id:String="")->Dictionary:
	var fp:=footprint(item);var at:=position(item);var low:=INF;var high:=-INF
	var samples:Array[Vector2]=[at,entrance(item)];samples.append_array(Frame.corners(fp))
	for side:Vector2 in [Vector2.LEFT,Vector2.RIGHT,Vector2.UP,Vector2.DOWN]:samples.append(at+(side*Vector2(SIZES[item.blueprint])*.5).rotated(-float(item.yaw)))
	var bounds:=Frame.bounds(fp)
	for x in range(floori(bounds.position.x*2.),ceili(bounds.end.x*2.)+1):
		for z in range(floori(bounds.position.y*2.),ceili(bounds.end.y*2.)+1):
			var point:=Vector2(x,z)*.5
			if Frame.contains(fp,point):samples.append(point)
	for p:Vector2 in samples:
		if not city.WORLD_RECT.grow(-.2).has_point(p) or city.water_clearance(p)<.4:return city._fail("地标与入口需要完整的干燥用地")
		var y:float=city.ground_height(p);low=minf(low,y);high=maxf(high,y)
	if high-low>.18:return city._fail("地标底座需要平缓地面，请先整平台地")
	for house:Dictionary in city.houses:
		if city.AmphitheaterPlan.occupies(city.AmphitheaterPlan.for_house(city,house),at,maxf(SIZES[item.blueprint].x,SIZES[item.blueprint].y)*.5):return city._fail("请避开水上舞台与桥头")
		for cell:Dictionary in house.cells:
			if Frame.boxes_overlap(Frame.grow(fp,.18),Frame.footprint(house,cell)) or Frame.distance(Frame.footprint(house,cell),entrance(item))<.5:return city._fail("地标与入口需要避开房屋")
		for door:Dictionary in city.house_entrances(str(house.id)):
			if Frame.segment(Frame.grow(fp,.65),door.wall_at,door.at):return city._fail("请留出房屋入口")
	for road:Dictionary in city.roads:
		if stroke_hits(fp,road.points,float(road.width)*.5+.4):return city._fail("请避开道路与桥头")
		for marker:Dictionary in road.get("roundabouts",[]):
			if Frame.distance(fp,Vector2(marker.center[0],marker.center[1]))<float(marker.radius)+.3:return city._fail("请留出环岛广场")
	for other:Dictionary in city.placed_landmarks:
		if other.id!=except_id and Frame.boxes_overlap(Frame.grow(fp,.3),footprint(other)):return city._fail("地标足迹重叠")
		if other.id!=except_id and Frame.distance(fp,entrance(other))<.65:return city._fail("请留出地标入口")
		if other.id!=except_id and Frame.distance(footprint(other),entrance(item))<.65:return city._fail("地标入口需要通向净空")
	for plant:Dictionary in city.plants:
		if city.vegetation_visible(plant) and (Frame.distance(fp,Vector2(plant.position[0],plant.position[1]))<.3 or entrance(item).distance_to(Vector2(plant.position[0],plant.position[1]))<.65):return city._fail("请先移动或移除足迹与入口内的植物")
	var cafes=load("res://scripts/world/city_creation_cafe_layout_context.gd").new()
	for house:Dictionary in city.houses:
		if house.role!="garden_cafe":continue
		var cafe:Dictionary=cafes.layout(city,str(house.id))
		if not cafe.is_empty() and (Frame.distance(fp,Vector2(cafe.center))<1.3 or Frame.segment(Frame.grow(fp,.3),cafe.entrance,cafe.center)):return city._fail("请留出茶桌、座椅与实际入座通道")
	return {"ok":true,"message":"地基与入口净空，可放置","base_y":maxf(0.,high)}
static func preview(city:RefCounted,blueprint:String,at:Vector2,yaw:float=0.,moving:String="")->Dictionary:
	if blueprint not in SIZES or not is_finite(at.x) or not is_finite(at.y) or not is_finite(yaw):return city._fail("地标蓝图或位置无效")
	if not city.CreationPolicy.is_free(city):return city._fail("先备份转换为自由创作，再放置传世蓝图")
	if not available_blueprints(city.creative_settings,city.harmony_journey).has(blueprint):return city._fail("这张传世蓝图尚未获得")
	if not moving.is_empty() and row(city,moving).get("blueprint","")!=blueprint:return city._fail("移动地标身份无效")
	for other:Dictionary in city.placed_landmarks:
		if other.blueprint==blueprint and other.id!=moving:return city._fail("每张传世蓝图限一处，可移动已有地标")
	var item:={"id":moving,"blueprint":blueprint,"position":[at.x,at.y],"yaw":wrapf(yaw,-PI,PI),"base_y":0.}
	var valid:=site(city,item,moving)
	if valid.ok:item.base_y=valid.base_y;valid.entity=item
	return valid
static func place(city:RefCounted,blueprint:String,at:Vector2,yaw:float=0.,moving:String="")->Dictionary:
	var valid:=preview(city,blueprint,at,yaw,moving)
	if not valid.ok:return valid
	var before:Dictionary=city.snapshot();var item:Dictionary=valid.entity
	if moving.is_empty():
		var issued:=maxi(city._next_landmark_id,city._landmark_high_watermark+1);item.id="lm%d"%issued;city._next_landmark_id=issued+1;city._landmark_high_watermark=issued;city.placed_landmarks.append(item)
	else:
		for i in range(city.placed_landmarks.size()):
			if city.placed_landmarks[i].id==moving:city.placed_landmarks[i]=item;break
	city._commit(before,"放置传世地标" if moving.is_empty() else "移动传世地标")
	return {"ok":true,"landmark_id":item.id,"message":Legacy.TITLES[blueprint]+"已落位"}
static func remove(city:RefCounted,id:String)->Dictionary:
	for i in range(city.placed_landmarks.size()):
		if city.placed_landmarks[i].id!=id:continue
		var before:Dictionary=city.snapshot();city.placed_landmarks.remove_at(i);city._commit(before,"回收传世地标")
		return {"ok":true,"message":"实体已回收，永久蓝图保留"}
	return city._fail("未找到这座传世地标")
static func validate_fields(city:RefCounted,data:Dictionary)->Dictionary:
	var items:Variant=data.get("placed_landmarks");var high:Variant=data.get("landmark_high_watermark");var next:Variant=data.get("next_landmark_id")
	if not items is Array or items.size()>4 or not city._is_integer(high) or high<0 or high>2147483646 or not city._is_integer(next) or next<1 or next>high+1:return city._fail("地标计数或高水位无效")
	var ids:Dictionary={};var families:Dictionary={}
	for item:Variant in items:
		if not item is Dictionary or item.size()!=FIELDS.size() or not item.has_all(FIELDS):return city._fail("地标实体字段无效")
		if not item.id is String or not item.id.begins_with("lm") or not item.id.trim_prefix("lm").is_valid_int():return city._fail("地标身份无效")
		var number:=int(item.id.trim_prefix("lm"))
		if number<1 or number>high or number>=next or item.id!="lm%d"%number or ids.has(item.id):return city._fail("地标身份重复或计数冲突")
		if item.blueprint not in SIZES or families.has(item.blueprint):return city._fail("未知或重复的地标蓝图")
		if not city._valid_point(item.position) or not city._is_number(item.yaw) or absf(float(item.yaw))>PI+.00001 or not city._is_number(item.base_y) or item.base_y<0 or item.base_y>6.5:return city._fail("地标位置、朝向或地基无效")
		ids[item.id]=true;families[item.blueprint]=true
	return {"ok":true}
static func validate_geometry(city:RefCounted,data:Dictionary)->Dictionary:
	if data.get("placed_landmarks",[]).is_empty():return {"ok":true}
	var rights:=available_blueprints(data.get("creative_settings",{}),data.get("harmony_journey",{}))
	for item:Dictionary in data.placed_landmarks:
		if not rights.has(item.blueprint):return city._fail("地标蓝图尚未获得")
	var copy=load("res://scripts/world/city_creation_state.gd").new()
	for key:String in ["houses","roads","waters","plants","terrain_strokes","placed_landmarks"]:copy.get(key).assign(data.get(key,[]).duplicate(true))
	copy.terrain_policy=int(data.get("terrain_policy",1));copy.creative_settings=data.get("creative_settings",{}).duplicate(true)
	copy.revision=1
	for item:Dictionary in copy.placed_landmarks:
		var valid:=site(copy,item,str(item.id))
		if not valid.ok:return valid
		if absf(float(item.base_y)-float(valid.base_y))>.2:return city._fail("地标底座与地面不接合")
	return {"ok":true}

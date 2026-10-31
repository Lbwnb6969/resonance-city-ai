extends RefCounted
## A city rule, independent of stroke algorithms. Old works default to v1.
const VERSION:=2
const SCHEMA:=23
const Surface=preload("res://scripts/world/city_creation_activity_surface.gd")
const Visits=preload("res://scripts/world/city_creation_cafe_terrain_visits.gd")
static func enabled(city)->bool:return city.terrain_policy==VERSION and city.CreationPolicy.is_free(city)
static func walk_height(city,at:Vector2)->float:return city._ground_terrain.height_at(at)+.075
static func validate(city,data:Dictionary)->Dictionary:
	if data.has("terrain_policy"):
		if data.schema<SCHEMA or not city._is_integer(data.terrain_policy) or (data.terrain_policy!=1 and data.terrain_policy!=VERSION) or not city.CreationPolicy.data_is_free(data):return city._fail("自由街景地形需要版本23自由作品")
	var journeys:Variant=data.get("journey_checkpoint",{})
	if journeys is Dictionary and journeys.has("cafe_terrain") and (data.schema<SCHEMA or not data.has("terrain_policy")):return city._fail("街景地形行程需要新城市规则")
	return {"ok":true}
static func signature(city)->int:
	return hash([city.terrain_policy,city.houses,city.roads,city.waters,city.terrain_strokes,city.districts,city.placed_landmarks,city.plants,city.creative_settings])
static func plan(city)->Dictionary:
	if not city.CreationPolicy.is_free(city):return city._fail("旧经营作品保留原地形规则")
	if enabled(city):return {"ok":true,"no_op":true,"message":"街景已随地形调整"}
	var began:=Time.get_ticks_usec();city.prepare_ground_height();var before:Dictionary=city.snapshot();var candidate=city.get_script().new()
	var restored:Dictionary=candidate.restore(before)
	if not restored.ok:return restored
	candidate._ground_terrain.copy_cache_from(city._ground_terrain);candidate._road_heights.copy_cache_from(city._road_heights);candidate._terrain_protection.copy_cache_from(city._terrain_protection)
	candidate.terrain_policy=VERSION;candidate.revision+=1;candidate.prepare_ground_height()
	var field=city._ground_terrain;var changed:=0;var bounds:=Rect2();var first:=true
	for z in range(field.ROWS):
		for x in range(field.COLUMNS):
			var index:int=z*field.COLUMNS+x
			if absf(candidate._ground_terrain.vertices[index]-field.vertices[index])<.00001:continue
			var at:Vector2=field.LAND_RECT.position+Vector2(x,z)*field.STEP
			bounds=Rect2(at,Vector2.ZERO) if first else bounds.expand(at);first=false;changed+=1
	var layouts:Dictionary={};var planner=load("res://scripts/world/city_creation_cafe_layout_context.gd").new()
	for house:Dictionary in candidate.houses:
		if house.role=="garden_cafe":layouts[house.id]=planner.layout(candidate,house.id)
	var message:="解除茶座与聚会坪的广域平地\n桌椅重新择地，屋基与路床保留";var no_space:=0
	for layout:Dictionary in layouts.values():
		if layout.is_empty():no_space+=1
	if no_space>0:message+="\n%d处茶座暂缺空地，保留茶聚进度"%no_space
	return {"ok":true,"city_instance":city.get_instance_id(),"revision":city.revision,"signature":signature(city),"before":before,"candidate":candidate,"bounds":bounds.grow(field.STEP) if not first else Rect2(),"changed_vertices":changed,"layouts":layouts,"message":message,"elapsed_ms":(Time.get_ticks_usec()-began)/1000.}
static func commit(city,plan:Dictionary)->Dictionary:
	if not plan.get("ok",false) or plan.get("no_op",false):return plan
	if city.get_instance_id()!=plan.city_instance or city.revision!=plan.revision or signature(city)!=plan.signature:return city._fail("城市已变化，请重新预览街景地形")
	if not city.CreationPolicy.is_free(city):return city._fail("旧经营作品保留原地形规则")
	var before:Dictionary=city.snapshot();city.terrain_policy=VERSION;city._commit(before,"街景随地形调整")
	return {"ok":true,"message":"街景已随地形调整，原作品备份保留","backup_snapshot":before}

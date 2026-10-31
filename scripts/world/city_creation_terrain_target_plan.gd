extends RefCounted
const Rules=preload("res://scripts/world/city_creation_terrain_target_rules.gd")
static func signature(city:RefCounted)->int:
	return hash([city.houses,city.roads,city.waters,city.terrain_strokes,city.placed_landmarks,city.districts,city.creative_settings])
static func create(city:RefCounted,points:Array[Vector2],radius:float,target_y:float,natural:bool=false)->Dictionary:
	var began:=Time.get_ticks_usec();var encoded:Array=[]
	for at:Vector2 in points:encoded.append([at.x,at.y])
	var row:={"mode":"plateau","points":encoded,"radius":radius,"strength":1.,"terrain_version":Rules.VERSION,"target_y":target_y}
	if natural:row.natural=true
	var valid:Dictionary=city._validate_terrain_fields(row)
	if not valid.ok:return valid
	if city.PlacedLandmarks.stroke_conflicts(city,encoded,radius):return city._fail("先移动传世地标，再调整它的地基")
	city.prepare_ground_height();var before:Dictionary=city.snapshot();var candidate:RefCounted=city.get_script().new()
	var restored:Dictionary=candidate.restore(before)
	if not restored.ok:return restored
	candidate._ground_terrain.copy_cache_from(city._ground_terrain)
	candidate._terrain_protection.copy_cache_from(city._terrain_protection)
	candidate._road_heights.copy_cache_from(city._road_heights)
	candidate.terrain_strokes.append(row.duplicate(true));candidate.revision+=1;candidate.prepare_ground_height()
	var bounds:Rect2=city._ground_terrain._stroke_bounds(row);var field=city._ground_terrain
	var low:Vector2=((bounds.position-field.LAND_RECT.position)/field.STEP).floor().max(Vector2.ZERO)
	var high:Vector2=((bounds.end-field.LAND_RECT.position)/field.STEP).ceil().min(Vector2(field.COLUMNS-1,field.ROWS-1))
	var changed:=0;var protected_count:=0;var limited:=0
	for z in range(int(low.y),int(high.y)+1):
		for x in range(int(low.x),int(high.x)+1):
			var index:int=z*field.COLUMNS+x;var at:Vector2=field.LAND_RECT.position+Vector2(x,z)*field.STEP
			if absf(candidate._ground_terrain.vertices[index]-field.vertices[index])>.00001:changed+=1
			if field._sculpt_weight(at,row)<.9999:continue
			if absf(candidate._ground_terrain.raw_vertices[index]-target_y)>.001:limited+=1
			if absf(candidate._ground_terrain.vertices[index]-candidate._ground_terrain.raw_vertices[index])>.001:protected_count+=1
	var message:="目标绝对高度 %.2f 米" % target_y
	if protected_count>0:message+=" · 屋基、内院和路床保持"
	if limited>0:message+=" · 岸线或边界限制部分平顶"
	if changed==0:message+=" · 当前范围没有可改变的地面"
	return {"ok":true,"city_instance":city.get_instance_id(),"revision":city.revision,"signature":signature(city),"row":row,"row_hash":hash(row),"before":before,"candidate":candidate,"bounds":bounds,"changed_vertices":changed,"protected_samples":protected_count,"limited_samples":limited,"message":message,"elapsed_ms":(Time.get_ticks_usec()-began)/1000.}
static func commit(city:RefCounted,plan:Dictionary)->Dictionary:
	if not plan.get("ok",false):return plan
	if plan.city_instance!=city.get_instance_id() or plan.revision!=city.revision or plan.signature!=signature(city):return city._fail("地形已变化，请重新预览这一笔")
	if hash(plan.row)!=plan.row_hash:return city._fail("台地笔画已变化，请重新预览")
	var valid:Dictionary=city._validate_terrain_fields(plan.row)
	if not valid.ok:return valid
	if city.PlacedLandmarks.stroke_conflicts(city,plan.row.points,plan.row.radius):return city._fail("先移动传世地标，再调整它的地基")
	if plan.changed_vertices==0:return {"ok":true,"no_op":true,"message":plan.message}
	var before:Dictionary=city.snapshot();city.terrain_strokes.append(plan.row.duplicate(true));city._commit(before,"定高台地")
	return {"ok":true,"message":plan.message,"terrain_version":Rules.VERSION,"backup_snapshot":before}

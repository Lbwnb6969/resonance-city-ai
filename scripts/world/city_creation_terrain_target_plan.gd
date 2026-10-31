extends RefCounted
const Rules=preload("res://scripts/world/city_creation_terrain_target_rules.gd")
static func signature(city:RefCounted)->int:
	return hash([city.terrain_policy,city.houses,city.roads,city.waters,city.terrain_strokes,city.placed_landmarks,city.districts,city.creative_settings])
static func create(city:RefCounted,points:Array[Vector2],radius:float,target_y:float,natural:bool=false)->Dictionary:
	var began:=Time.get_ticks_usec();var encoded:Array=[]
	for at:Vector2 in points:encoded.append([at.x,at.y])
	var row:={"mode":"plateau","points":encoded,"radius":radius,"strength":1.,"terrain_version":Rules.VERSION,"target_y":target_y}
	if natural:row.natural=true
	return _create(city,row,began)
static func create_smooth(city:RefCounted,points:Array[Vector2],radius:float,strength:float=.65)->Dictionary:
	var began:=Time.get_ticks_usec();var encoded:Array=[]
	for at:Vector2 in points:encoded.append([at.x,at.y])
	return _create(city,Rules.Smooth.row(encoded,radius,strength),began)
static func _create(city:RefCounted,row:Dictionary,began:int)->Dictionary:
	var valid:Dictionary=city._validate_terrain_fields(row)
	if not valid.ok:return valid
	if city.PlacedLandmarks.stroke_conflicts(city,row.points,row.radius):return city._fail("先移动传世地标，再调整它的地基")
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
			if absf(candidate._ground_terrain.vertices[index]-field.vertices[index])>.00001 or absf(candidate._ground_terrain.raw_vertices[index]-field.raw_vertices[index])>.00001:changed+=1
			if row.mode=="plateau" and field._sculpt_weight(at,row)<.9999:continue
			if row.mode=="plateau" and absf(candidate._ground_terrain.raw_vertices[index]-float(row.target_y))>.001:limited+=1
			if absf(candidate._ground_terrain.vertices[index]-candidate._ground_terrain.raw_vertices[index])>.001:protected_count+=1
	var message:="目标绝对高度 %.2f 米" % float(row.target_y) if row.mode=="plateau" else "柔化坡肩 · 1.5米邻域"
	if protected_count>0:message+="\n屋基、内院和路床保持"
	if limited>0:message+="\n岸线或边界限制部分平顶"
	if changed==0:message+="\n当前范围没有可改变的地面"
	return {"ok":true,"city_instance":city.get_instance_id(),"revision":city.revision,"signature":signature(city),"row":row,"row_hash":hash(row),"before":before,"candidate":candidate,"bounds":bounds,"changed_vertices":changed,"protected_samples":protected_count,"limited_samples":limited,"message":message,"elapsed_ms":(Time.get_ticks_usec()-began)/1000.}
static func commit(city:RefCounted,plan:Dictionary)->Dictionary:
	if not plan.get("ok",false):return plan
	if plan.city_instance!=city.get_instance_id() or plan.revision!=city.revision or plan.signature!=signature(city):return city._fail("地形已变化，请重新预览这一笔")
	if hash(plan.row)!=plan.row_hash:return city._fail("地形笔画已变化，请重新预览")
	var valid:Dictionary=city._validate_terrain_fields(plan.row)
	if not valid.ok:return valid
	if city.PlacedLandmarks.stroke_conflicts(city,plan.row.points,plan.row.radius):return city._fail("先移动传世地标，再调整它的地基")
	if plan.changed_vertices==0:return {"ok":true,"no_op":true,"message":plan.message}
	var before:Dictionary=city.snapshot();city.terrain_strokes.append(plan.row.duplicate(true));city._commit(before,"定高台地" if plan.row.mode=="plateau" else "柔化坡肩")
	return {"ok":true,"message":plan.message,"terrain_version":plan.row.terrain_version,"backup_snapshot":before}

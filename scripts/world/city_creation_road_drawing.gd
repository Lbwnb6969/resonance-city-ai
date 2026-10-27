extends RefCounted
## Public road preview and commit share exactly one transaction and identity.
const Upgrade=preload("res://scripts/world/city_creation_road_upgrade.gd")
const Intent=preload("res://scripts/world/city_creation_road_intent.gd")
const Decor=preload("res://scripts/world/city_creation_road_decoration.gd")
static func preview(city:RefCounted,points: Array[Vector2],style: String = "path",assistance: String="snap",requested_width:float=0.,decoration:String="") -> Dictionary:
	if not Decor.valid(decoration):return city._fail("道路街具无效")
	if style not in city.ROAD_STYLES: return city._fail("未知的道路样式")
	if not is_finite(requested_width) or (requested_width!=0. and requested_width not in Upgrade.sizes_for(style)):return city._fail("道路宽度无效")
	for point: Vector2 in points:
		if not is_finite(point.x) or not is_finite(point.y): return city._fail("无效的道路位置")
	var upgrade_id := Upgrade.match_road(points,city.roads)
	if not upgrade_id.is_empty():
		for road: Dictionary in city.roads:
			if str(road.id)!=upgrade_id: continue
			var original: Array[Vector2] = []
			for row: Array in road.points: original.append(Vector2(float(row[0]),float(row[1])))
			var wanted := style if style!="path" or not decoration.is_empty() else ("promenade" if str(road.get("style","path")) in ["path","cobble"] else str(road.style))
			var same_surface:bool=str(road.get("style","path"))==wanted
			var width := requested_width if requested_width>0. else (float(road.width) if same_surface and not decoration.is_empty() else Upgrade.width_for(wanted))
			var check:Dictionary = city._validate_road_site(road.points,width)
			var no_op := str(road.get("style","path"))==wanted and is_equal_approx(float(road.width),width)
			check.merge({"points":original,"upgrade_road_id":upgrade_id,"style":wanted,"width":width,"upgraded":not no_op,"no_op":no_op,"anchored_start":false,"anchored_end":false,"snapped_start":false,"snapped_end":false})
			if check.ok: check.message="这条%s已经铺好" % Upgrade.NAMES[wanted] if no_op else "原位铺成%s，保留路口与门阶" % Upgrade.NAMES[wanted]
			return Decor.preview(check,decoration,road)
	var width := requested_width if requested_width>0. else Upgrade.width_for(style)
	# The held brush uses gradual attraction; its final displayed points already
	# contain assistance and need only exact site validation when released.
	var intent: Dictionary=Intent.resolve(city,points,width,assistance=="soft") if assistance!="none" else {"points":points.duplicate(),"anchored_start":false,"anchored_end":false,"snapped_start":false,"snapped_end":false}
	var resolved: Array[Vector2] = intent.points
	var encoded: Array = []
	var finite := true
	for point in resolved:
		encoded.append([point.x,point.y])
		finite = finite and is_finite(point.x) and is_finite(point.y)
	var check: Dictionary
	if encoded.size() < 2: check = city._fail("拖出一条路，松开铺好")
	elif not finite: check = city._fail("无效的道路位置")
	elif intent.has("site_check"): check = intent.site_check
	else: check = city._validate_road_site(encoded,width)
	intent.erase("site_check")
	check.merge(intent)
	check.merge({"upgrade_road_id":"","style":style,"width":width,"upgraded":false,"no_op":false})
	return check

static func add(city:RefCounted,points: Array[Vector2],style: String = "path",assistance: String="snap",requested_width:float=0.,decoration:String="") -> Dictionary:
	if points.size() < 2:
		return city._fail("道路需要两个以上的点")
	var valid := preview(city,points,style,assistance,requested_width,decoration)
	if not valid.ok: return valid
	if bool(valid.no_op):
		return {"ok":true,"message":valid.message,"road_id":valid.upgrade_road_id,"upgrade_road_id":valid.upgrade_road_id,"width":valid.width,"style":valid.style,"upgraded":false,"no_op":true}
	if not str(valid.upgrade_road_id).is_empty():
		for index in range(city.roads.size()):
			if str(city.roads[index].id)!=str(valid.upgrade_road_id): continue
			var before:Dictionary = city.snapshot()
			var road: Dictionary = city.roads[index].duplicate(true)
			Decor.assign(road,decoration)
			road.style = valid.style
			road.width = valid.width
			if requested_width>0.:road.sized=true
			elif decoration.is_empty() or str(city.roads[index].get("style","path"))!=str(valid.style):road.erase("sized")
			road.bridge = bool(valid.bridge)
			city.roads[index] = road
			city._commit(before,"升级"+str(Upgrade.NAMES[valid.style]))
			return {"ok":true,"message":valid.message,"road_id":road.id,"upgrade_road_id":road.id,"width":valid.width,"style":valid.style,"upgraded":true,"no_op":false}
	var resolved: Array[Vector2] = valid.points
	var encoded: Array = []
	var length := 0.0
	for i in range(resolved.size()):
		if not is_finite(resolved[i].x) or not is_finite(resolved[i].y):
			return city._fail("无效的道路位置")
		encoded.append([resolved[i].x, resolved[i].y])
		if i > 0:
			length += resolved[i - 1].distance_to(resolved[i])
	if length < 0.2:
		return city._fail("道路太短")
	var before:Dictionary = city.snapshot()
	var road_number := maxi(city._next_road_id, int(city._high_watermark.road) + 1)
	var road := {"id": "r%d" % road_number, "points": encoded, "width":float(valid.width), "bridge": valid.bridge, "source": "player"}
	if style!="path": road.style = style
	if requested_width>0.:road.sized=true
	Decor.assign(road,decoration)
	city.roads.append(road)
	city._next_road_id = road_number + 1
	city._high_watermark.road = road_number
	city._commit(before, "铺设道路")
	return {"ok": true, "message": str(Upgrade.NAMES[style])+"已铺好", "road_id": road.id,"upgrade_road_id":"","width":float(road.width),"style":style,"upgraded":false,"no_op":false}

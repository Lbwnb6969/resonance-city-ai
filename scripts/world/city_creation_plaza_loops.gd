extends RefCounted
const SCHEMA:=34
const Faces=preload("res://scripts/world/city_creation_road_loop_faces.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const PAVING:=["fan_stone","brick_stone"]
static func key(polygon:PackedVector2Array)->String:
	var points:Array=[]
	for p:Vector2 in polygon:
		var at:=Vector2i((p*1000.).round())
		if points.is_empty() or at!=points[-1]:points.append(at)
	var changed:=true
	while changed and points.size()>3:
		changed=false
		for i in range(points.size()):
			var a:=Vector2(points[posmod(i-1,points.size())]);var b:=Vector2(points[i]);var c:=Vector2(points[(i+1)%points.size()])
			if absf((b-a).cross(c-b))<.01:points.remove_at(i);changed=true;break
	var tokens:PackedStringArray=[]
	for p:Vector2i in points:tokens.append("%d,%d"%[p.x,p.y])
	var first:=0
	for i in range(1,tokens.size()):
		if tokens[i]<tokens[first]:first=i
	var ordered:PackedStringArray=[]
	for i in range(tokens.size()):ordered.append(tokens[(first+i)%tokens.size()])
	return "loop/"+"|".join(ordered).sha256_text().substr(0,24)
static func faces(city)->Array:
	var stamp:=hash(city.roads);var cache:Dictionary=city.get_meta("public_plaza_faces",{})
	if cache.get("stamp",-1)==stamp:return cache.rows
	var result:Array=Faces.faces(city.roads,36.,320.)
	for row:Dictionary in result:row.loop_key=key(row.polygon)
	city.set_meta("public_plaza_faces",{"stamp":stamp,"rows":result});return result
static func plans(city)->Array:
	var result:Array=[]
	if not city.CreationPolicy.is_free(city):return result
	for face:Dictionary in faces(city):
		for choice:Dictionary in city.plaza_loops:
			if choice.loop_key==face.loop_key:
				var row:=face.duplicate(true);row.merge(choice,true);result.append(row);break
	return result
static func choose(city,id:String,paving:String)->Dictionary:
	if not city.CreationPolicy.is_free(city) or (not paving.is_empty() and paving not in PAVING):return city._fail("自由创作可选择草坪、扇石或砖石广场")
	if not faces(city).any(func(row):return row.loop_key==id):return city._fail("请选择36～320平方米的真实闭合路环")
	var next:Array=city.plaza_loops.filter(func(row):return row.loop_key!=id)
	if not paving.is_empty():next.append({"loop_key":id,"paving":paving,"centerpiece":"none"})
	next.sort_custom(func(a,b):return a.loop_key<b.loop_key)
	if next==city.plaza_loops:return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();city.plaza_loops.assign(next);city._commit(before,"恢复环内草坪" if paving.is_empty() else "铺设石板广场")
	return {"ok":true,"message":"已恢复原草坪" if paving.is_empty() else "广场铺装已更新"}
static func change_rows(city)->Array:
	var result:Array=[]
	for row:Dictionary in plans(city):
		var points:Array=[]
		for p:Vector2 in row.polygon:points.append([p.x,p.y])
		result.append({"id":row.loop_key,"points":points,"paving":row.paving})
	return result
static func prune(city)->void:
	if city.plaza_loops.is_empty():return
	var valid:Dictionary={}
	for row:Dictionary in faces(city):valid[row.loop_key]=true
	city.plaza_loops.assign(city.plaza_loops.filter(func(row):return valid.has(row.loop_key)))
static func write(city,result:Dictionary)->void:
	if city.plaza_loops.is_empty():return
	result.plaza_loops=city.plaza_loops.duplicate(true);result.schema=maxi(int(result.schema),SCHEMA)
static func validate(city,data:Dictionary)->Dictionary:
	if not data.has("plaza_loops"):return {"ok":true}
	if data.schema<SCHEMA or not city.CreationPolicy.data_is_free(data) or not data.plaza_loops is Array:return city._fail("石板广场需要版本34自由作品")
	var valid:Dictionary={};var seen:Dictionary={}
	for row:Dictionary in Faces.faces(data.roads,36.,320.):valid[key(row.polygon)]=true
	for row:Variant in data.plaza_loops:
		if not row is Dictionary or row.size()!=3 or not row.get("loop_key") is String or not valid.has(row.loop_key) or seen.has(row.loop_key) or row.get("paving") not in PAVING or row.get("centerpiece")!="none":return city._fail("广场环路、铺装或中心构件无效")
		seen[row.loop_key]=true
	return {"ok":true}
static func spaces(city)->Array:
	var result:Array=[]
	for row:Dictionary in plans(city):
		if city.water_clearance(row.center)<1.:continue
		result.append({"id":row.loop_key,"kind":"civic","stage":"district","members":[],"source_ids":row.owners,"component":"","connected":false,"evidence":{"geometry":"paved_plaza","polygon":row.polygon,"plaza_loop":row.loop_key,"paving":row.paving},"eligibility":{"district":true,"lyrical":false,"virtuoso":false,"reason":"authored_paving"}})
	return result

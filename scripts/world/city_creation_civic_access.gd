extends RefCounted
## Ground support from the shipped civic shells; no invented ordinary doorstep.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Height=preload("res://scripts/world/city_creation_entry_height.gd")
const Mass=preload("res://scripts/world/city_creation_ancient_extension_plan.gd")

static func approach_offset(house:Dictionary,entry:Dictionary,prototype:String)->float:
	if prototype!="ionic_stoa":return 0.
	var p:=Mass.rectangle(house);var count:=maxi(2,ceili(p.width/1.2)+1)
	var local:=Frame.inverse(house,entry.wall_at)-Vector2(p.center);var positions:Array=[]
	for i in range(count):positions.append(lerpf(-float(p.width)*.5+.20,float(p.width)*.5-.20,float(i)/(count-1)))
	var candidates:Array=[local.x]
	for i in range(1,count):candidates.append((positions[i-1]+positions[i])*.5)
	candidates.sort_custom(func(a,b):return absf(a-local.x)<absf(b-local.x))
	for x:float in candidates:
		if absf(x-local.x)>.35:continue
		var path:Array=[Vector2(local.x,.10),Vector2(x,.20),Vector2(x,1.)]
		var clear:=_clear_path(positions,path)
		if clear:return x-local.x
	return INF

static func _clear_path(positions:Array,path:Array)->bool:
	for column:float in positions:
		var box:=Rect2(Vector2(column-.105*1.4,.58-.105*1.4),Vector2.ONE*.105*2.8)
		for i in range(1,path.size()):
			var count:=maxi(1,ceili(Vector2(path[i-1]).distance_to(path[i])/.02))
			for sample in range(count+1):
				if Frame.distance(box,Vector2(path[i-1]).lerp(path[i],float(sample)/count))<.35:return false
	return true

static func assess(city:RefCounted,house:Dictionary,entry:Dictionary,target:Vector2,road:Dictionary,prototype:String)->Dictionary:
	if prototype=="guildhall" or (prototype=="rotunda" and not (city.house_era(house)=="pastoral" and house.cells.size()==1 and house.get("architecture","")=="rotunda")):return Height.assess(city,house,entry,target,road)
	var base:float=house.get("base_y",0.)
	var sill:float=base+(.12 if prototype=="roman_basilica" else .17 if prototype=="rotunda" else .105)
	var start:Vector2=entry.wall_at+Frame.normal(entry)*(.10 if prototype=="ionic_stoa" else .18)
	var previous:=_surface(city,house,entry,start,road,prototype)
	var result:={"ok":false,"kind":prototype+"_support","sill_y":sill,"street_y":city.street_height(target),"samples":0,"max_rise":0.,"max_grade":0.,"reason":"unsupported_sill"}
	# The existing .18m doorway allowance applies to a real single sill drop.
	if float(previous.y)>sill+Height.EPS or sill-float(previous.y)>Height.MODERN_SILL_DROP+Height.EPS:return result
	var route:Array=[start]
	if prototype=="ionic_stoa":
		var offset:=approach_offset(house,entry,prototype)
		if not is_finite(offset):return result
		var tangent:=Frame.direction(house,Vector2.RIGHT)
		route.append(entry.wall_at+Frame.normal(entry)*.20+tangent*offset)
	route.append(target)
	if prototype=="ionic_stoa":
		var p:=Mass.rectangle(house);var count:=maxi(2,ceili(p.width/1.2)+1);var positions:Array=[];var local_route:Array=[]
		for i in range(count):positions.append(lerpf(-float(p.width)*.5+.20,float(p.width)*.5-.20,float(i)/(count-1)))
		for point:Vector2 in route:local_route.append(Frame.inverse(house,point)-Vector2(p.center)-Vector2(0,p.depth*.5))
		if not _clear_path(positions,local_route):result.reason="column_obstruction";return result
	result.path=PackedVector2Array(route)
	var last:=start
	for segment in range(1,route.size()):
		var from:Vector2=route[segment-1];var to:Vector2=route[segment]
		var count:=maxi(1,ceili(from.distance_to(to)/Height.SAMPLE))
		for i in range(1,count+1):
			var at:=from.lerp(to,float(i)/count);var sample:=_surface(city,house,entry,at,road,prototype)
			var rise:float=absf(float(sample.y)-float(previous.y));var distance:=at.distance_to(last)
			result.max_rise=maxf(result.max_rise,rise);result.samples+=1
			var allowed:=Height.Roads.MAX_GRADE*distance+Height.EPS
			if sample.kind!=previous.kind or sample.kind=="steps":allowed+=Height.Roads.STEP_HEIGHT
			if rise>allowed:result.reason="unsupported_height_break";result.blocked_at=at;return Height._diagnostic(result)
			previous=sample;last=at
	result.ok=true;result.reason="supported";return Height._diagnostic(result)

static func _surface(city:RefCounted,house:Dictionary,entry:Dictionary,at:Vector2,road:Dictionary,prototype:String)->Dictionary:
	var on_road:bool=city._water_stroke_distance(at,road.points)<=float(road.width)*.5
	var y:float=city.street_height(at) if on_road else city.ground_height(at)
	var kind:="road" if on_road else "ground";var base:float=house.get("base_y",0.)
	var relative:Vector2=at-Vector2(entry.wall_at);var along:=relative.dot(Frame.normal(entry));var lateral:=absf(relative.cross(Frame.normal(entry)))
	var top:=-INF
	if prototype=="ionic_stoa" and along>=-.11 and along<=.71:top=base+.10
	if prototype=="roman_basilica" and along<=.06:top=base+.12
	if prototype=="rotunda":
		for i in range(3):
			if absf(along-(.48-i*.16))<=.275 and lateral<=.75:top=maxf(top,base+.06+i*.05)
	if top>=y:y=top;kind="steps"
	return {"y":y,"kind":kind}

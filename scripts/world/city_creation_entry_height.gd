extends RefCounted
## Ordinary door-to-street support, sampled on the existing terrain/step mesh.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Frontage=preload("res://scripts/world/city_creation_frontage.gd")
const Roads=preload("res://scripts/world/city_creation_road_heights.gd")
const EPS:=.002
const SAMPLE:=.04

static func assess(city:RefCounted,house:Dictionary,entry:Dictionary,target:Vector2,road:Dictionary)->Dictionary:
	# Through arches keep their existing road-floor semantics in this batch.
	if entry.get("passage",false):return {"ok":true,"kind":"existing_passage","scope":"unchanged"}
	if not entry.active and city.house_era(house)=="modern_eco":return {"ok":true,"kind":"existing_modern_facade","scope":"unchanged"}
	var plan:Dictionary=Frontage.porch_plan(city,house,entry) if entry.active else {}
	var profile:Dictionary=city.road_profile(road)
	var start:Vector2=entry.wall_at+Frame.normal(entry)*.18
	var previous:=_surface(city,house,entry,start,road,profile,plan)
	var top:float=float(house.get("base_y",0.))+(.15 if entry.active else .105)
	var result:={"ok":false,"kind":"ordinary_door","sill_y":top,"street_y":city.street_height(target),"active_steps":bool(entry.active),"step_count":int(plan.get("count",0)),"max_rise":0.,"max_grade":0.,"samples":0,"reason":"door_buried"}
	if float(previous.y)>top+EPS:result.blocked_at=start;return _diagnostic(result)
	var count:=maxi(1,ceili(start.distance_to(target)/SAMPLE));var last:=start
	for i in range(1,count+1):
		var at:=start.lerp(target,float(i)/count);var surface:=_surface(city,house,entry,at,road,profile,plan)
		var rise:float=absf(surface.y-previous.y);var distance:=at.distance_to(last)
		result.max_rise=maxf(result.max_rise,rise);result.samples=i
		if rise>Roads.STEP_HEIGHT+Roads.MAX_GRADE*distance+EPS:
			result.reason="unsupported_height_break";result.blocked_at=at;return _diagnostic(result)
		if surface.kind==previous.kind and surface.kind in ["ground","road"]:
			var grade:=rise/maxf(distance,.000001);result.max_grade=maxf(result.max_grade,grade)
			if rise>Roads.MAX_GRADE*distance+EPS:result.reason="steep_unstepped_ground";result.blocked_at=at;return _diagnostic(result)
		previous=surface;last=at
	if absf(float(previous.y)-float(result.street_y))>Roads.STEP_HEIGHT+EPS:
		result.reason="steps_miss_street";result.blocked_at=target;return _diagnostic(result)
	result.ok=true;result.reason="supported";return _diagnostic(result)

static func _diagnostic(result:Dictionary)->Dictionary:
	# Canonical diagnostics exclude sub-micron profile interpolation noise.
	# All access decisions above still use the original, unrounded heights.
	for key:String in ["sill_y","street_y","max_rise","max_grade"]:result[key]=snappedf(float(result[key]),.000001)
	return result

static func _surface(city:RefCounted,house:Dictionary,entry:Dictionary,at:Vector2,road:Dictionary,profile:Dictionary,plan:Dictionary)->Dictionary:
	var result:={"y":city.ground_height(at),"kind":"ground"}
	if city._water_stroke_distance(at,road.points)<=float(road.width)*.5+EPS:
		var y:float=city.street_height(at)
		if y>=float(result.y):result={"y":y,"kind":"road_steps" if not profile.treads.is_empty() else "road"}
	var relative:Vector2=at-Vector2(entry.wall_at);var along:=relative.dot(Frame.normal(entry));var lateral:=absf(relative.cross(Frame.normal(entry)))
	var base:float=house.get("base_y",0.)
	if entry.active:
		var count:int=plan.count;var rise:float=.15-float(plan.bottom)
		for i in range(count):
			var center:=.18+i*.23;var top:=base+.15-i*rise/count
			if absf(along-center)<=.145+EPS and lateral<=.47+i*.045+EPS and top>=float(result.y):result={"y":top,"kind":"porch_step"}
	else:
		for row:Array in [[.3,.27,.48,.105],[.55,.34,.52,.0445]]:
			if absf(along-float(row[0]))<=float(row[1])+EPS and lateral<=float(row[2])+EPS and base+float(row[3])>=float(result.y):result={"y":base+float(row[3]),"kind":"door_step"}
	return result

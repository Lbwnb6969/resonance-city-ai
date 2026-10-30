extends RefCounted
## The four placed entities share the foundation and three physical front steps.
const Roads=preload("res://scripts/world/city_creation_road_heights.gd")
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")

static func assess(city:RefCounted,item:Dictionary,target:Vector2,road:Dictionary)->Dictionary:
	var center:=Plan.position(item);var normal:=Vector2.DOWN.rotated(-float(item.yaw))
	var front:float=Plan.SIZES[item.blueprint].y*.5
	var start:=center+normal*(front-.10);var previous:=_surface(city,item,start,road)
	var result:={"ok":false,"kind":"placed_foundation_steps","reason":"unsupported_height_break","samples":0,"max_rise":0.,"path":PackedVector2Array([start,target])}
	var count:=maxi(1,ceili(start.distance_to(target)/.04));var last:=start
	for i in range(1,count+1):
		var at:=start.lerp(target,float(i)/count);var sample:=_surface(city,item,at,road)
		var rise:float=absf(sample.y-previous.y);var allowed:=Roads.MAX_GRADE*last.distance_to(at)+.002
		if sample.kind!=previous.kind or sample.kind=="steps":allowed+=Roads.STEP_HEIGHT
		result.max_rise=maxf(result.max_rise,rise);result.samples=i
		if rise>allowed:result.blocked_at=at;return result
		previous=sample;last=at
	result.ok=true;result.reason="supported";result.max_rise=snappedf(result.max_rise,.000001);return result

static func _surface(city:RefCounted,item:Dictionary,at:Vector2,road:Dictionary)->Dictionary:
	var local:Vector2=(at-Plan.position(item)).rotated(float(item.yaw));var size:Vector2=Plan.SIZES[item.blueprint]
	var on_road:bool=city._water_stroke_distance(at,road.points)<=float(road.width)*.5
	var result:={"y":city.street_height(at) if on_road else city.ground_height(at),"kind":"road" if on_road else "ground"}
	var top:=-INF
	if absf(local.x)<=size.x*.5 and local.y<=size.y*.5:top=.225
	if absf(local.x)<=(size.x-.12)*.5 and local.y<=(size.y-.12)*.5:top=.2775
	for i in range(3):
		if absf(local.x)<=.575 and absf(local.y-(size.y*.5+.35-i*.16))<=.13:top=maxf(top,.07+i*.07)
	top+=float(item.base_y)
	if top>=float(result.y):result.y=top;result.kind="steps"
	return result

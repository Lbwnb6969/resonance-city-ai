extends RefCounted
const SCHEMA:=33
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const WATER:=-.16
const DEPTH:=.42
static func preview(city,road:Dictionary,value:bool=true)->Dictionary:
	var candidate:=road.duplicate(true)
	for first:bool in [true,false]:
		var index:int=0 if first else road.points.size()-1;var p:=Vector2(road.points[index][0],road.points[index][1]);var prior:=Vector2(road.points[1 if first else index-1][0],road.points[1 if first else index-1][1]);var normal:Vector2=(p-prior).normalized();var d:float=city.water_clearance(p)
		if value and d>.35 and d<=float(road.width)*.5+.8:
			for i in range(1,71):
				var at:=p+normal*i*.02
				if city.water_clearance(at)<=.10:candidate.points[index]=[at.x,at.y];break
		elif not value and d<float(road.width)*.5+.05:
			for i in range(1,101):
				var at:=p-normal*i*.02
				if city.water_clearance(at)>=float(road.width)*.5+.05:candidate.points[index]=[at.x,at.y];break
	if value:candidate.water_ghat=true
	else:candidate.erase("water_ghat")
	var derived:Array=[]
	if value:
		var shadow:RefCounted=load("res://scripts/world/city_creation_chemistry_preview.gd").fork(city)
		for i in range(shadow.roads.size()):
			if shadow.roads[i].id==road.id:shadow.roads[i]=candidate
		shadow.revision+=1;shadow.prepare_ground_height();derived=plans(shadow,candidate,true)
	return {"road":candidate,"plans":derived}
static func water_site(city,points:Array,width:float,waters:Array,roads:Array)->Dictionary:
	var original:Dictionary=city._road_water_crossings(points,width,waters)
	if original.ok:return original
	var marked:=roads.any(func(r):return r.get("water_ghat",false)==true and r.points==points and is_equal_approx(float(r.width),width))
	if not marked:return original
	for i in range(1,points.size()):
		var a:=Vector2(points[i-1][0],points[i-1][1]);var b:=Vector2(points[i][0],points[i][1]);var count:=maxi(1,ceili(a.distance_to(b)/.04))
		for j in range(count+1):
			var at:=a.lerp(b,float(j)/count);var d:float=city._water_clearance_in(at,waters)
			if d>=width*.5+.002:continue
			var authorized:=false
			for first:bool in [true,false]:
				var index:int=0 if first else points.size()-1;var end:=Vector2(points[index][0],points[index][1]);var next:=Vector2(points[1 if first else index-1][0],points[1 if first else index-1][1]);var normal:Vector2=(end-next).normalized();var edge:float=city._water_clearance_in(end,waters)
				if edge>=-.15 and edge<=.35 and city._water_clearance_in(end+normal*.55,waters)<edge-.20 and at.distance_to(end)<=width*.5+.4 and d>=-.15:authorized=true
			if not authorized:return original
	return {"ok":true,"bridge":false}
static func plans(city,road:Dictionary,force:bool=false)->Array:
	var result:Array=[]
	if not city.CreationPolicy.is_free(city) or not (force or road.get("water_ghat",false)):return result
	city.road_profile(road)
	for first:bool in [true,false]:
		var index:int=0 if first else road.points.size()-1;var endpoint:=Vector2(road.points[index][0],road.points[index][1]);var prior:=Vector2(road.points[1 if first else index-1][0],road.points[1 if first else index-1][1]);var normal:Vector2=(endpoint-prior).normalized();var distance:float=city.water_clearance(endpoint)
		if distance<-.15 or distance>.35 or city.water_clearance(endpoint+normal*.55)>=distance-.20:continue
		var top:float=city.street_height(endpoint);var last:=WATER-.12
		if top<WATER+.20 or top-last>.54+.002:continue
		var plan:={"id":"ghat/"+str(road.id)+("/start" if first else "/end"),"road_id":str(road.id),"at":endpoint,"normal":normal,"top":top,"last":last,"width":2.,"depth":DEPTH,"first":first,"steps":[]}
		var valid:=true
		for rank in range(4):
			var center:=endpoint+normal*(rank*DEPTH+.06);var y:=lerpf(top,last,float(rank)/3.);var polygon:=corners(center,normal,1.,DEPTH*.5)
			for along:float in [-.19,0.,.19]:
				for side:float in [-.94,0.,.94]:
					var at:=center+normal*along+Vector2(-normal.y,normal.x)*side
					if not city.WORLD_RECT.has_point(at) or city.ground_height(at)>y+.02:valid=false
			for house:Dictionary in city.houses:
				for cell:Dictionary in house.cells:
					if Frame.boxes_overlap({"polygon":polygon},Frame.footprint(house,cell,.05)):valid=false
			for item:Dictionary in city.placed_landmarks:
				if Frame.boxes_overlap({"polygon":polygon},city.PlacedLandmarks.footprint(item)):valid=false
			plan.steps.append({"center":center,"y":y,"polygon":polygon})
		if valid:result.append(plan)
	return result
static func corners(center:Vector2,normal:Vector2,half:float,depth:float)->PackedVector2Array:
	var side:=Vector2(-normal.y,normal.x)*half;var along:=normal*depth
	return PackedVector2Array([center-side-along,center+side-along,center+side+along,center-side+along])
static func all(city)->Array:
	var result:Array=[]
	for road:Dictionary in city.roads:result.append_array(plans(city,road))
	return result
static func outlines(city,road:Dictionary,original:Array)->Array:
	var result:Array=original.duplicate()
	for plan:Dictionary in plans(city,road):
		var cut:=corners(plan.at+plan.normal*4.85,plan.normal,float(road.width)*.5+2.,5.);var next:Array=[]
		for polygon:PackedVector2Array in result:next.append_array(Geometry2D.clip_polygons(polygon,cut))
		result=next
	return result
static func choose(city,id:String,value:Variant)->Dictionary:
	if not value is bool or not city.CreationPolicy.is_free(city):return city._fail("自由创作可选择亲水石埠")
	for road:Dictionary in city.roads:
		if str(road.id)!=id:continue
		if bool(road.get("water_ghat",false))==value:return {"ok":true,"no_op":true}
		var draft:=preview(city,road,value)
		if value and draft.plans.is_empty():return city._fail("路尾需要正对低平水岸，并留出四级石阶")
		var proposed:Array=city.roads.duplicate(true)
		for i in range(proposed.size()):
			if proposed[i].id==id:proposed[i]=draft.road
		var valid:Dictionary=city._validate_road_site(draft.road.points,float(road.width),null,null,proposed)
		if not valid.ok:return valid
		var before:Dictionary=city.snapshot()
		road.points=draft.road.points
		if value:road.water_ghat=true
		else:road.erase("water_ghat")
		city._commit(before,"开启亲水石埠" if value else "收起亲水石埠")
		return {"ok":true,"message":"亲水石埠已开启" if value else "已恢复原水际路尾","before_upgrade":before if value and before.schema<SCHEMA else {}}
	return city._fail("道路已变化")
static func write(city,result:Dictionary)->void:
	if city.roads.any(func(r):return r.has("water_ghat")):result.schema=maxi(int(result.schema),SCHEMA)
static func validate(city,data:Dictionary)->Dictionary:
	for road:Variant in data.get("roads",[]):
		if road is Dictionary and road.has("water_ghat") and (data.schema<SCHEMA or not city.CreationPolicy.data_is_free(data) or not road.water_ghat is bool or not road.water_ghat):return city._fail("亲水石埠需要版本33自由作品及显式开启")
	return {"ok":true}
static func seats(city)->Dictionary:
	var result:Dictionary={}
	for plan:Dictionary in all(city):
		var step:Dictionary=plan.steps[1];result[plan.id]={"id":plan.id,"road_id":plan.road_id,"at":step.center,"y":step.y,"face":plan.normal,"approach":plan.steps[0].center,"street":plan.at,"eye_height":.48,"body_offset":0.,"ghat":plan,"signature":hash(plan)}
	return result
static func approach(life,point:Vector3,seat:Dictionary)->Array[Vector3]:
	return life._route_from_position(point,str(seat.id))

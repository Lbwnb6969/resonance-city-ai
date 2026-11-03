extends RefCounted
## v1 structural floor, side landing and rails. Water remains real water below it.
const ID:="cantilever_tea_deck"
const VERSION:=1
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const SIDES:=[Vector2i.DOWN,Vector2i.RIGHT,Vector2i.LEFT,Vector2i.UP]
static func selected(city,house:Dictionary)->bool:
	return house.get("architecture","")==ID and city.house_era(house)=="modern_eco" and not house.has("signature") and is_zero_approx(Frame.Hinge.angle(house))
static func at(plan:Dictionary,p:Vector2)->Vector2:return Vector2(plan.wall)+Vector2(plan.tangent)*p.x+Vector2(plan.normal)*p.y
static func local(plan:Dictionary,p:Vector2)->Vector2:
	var delta:=p-Vector2(plan.wall);return Vector2(delta.dot(Vector2(plan.tangent)),delta.dot(Vector2(plan.normal)))
static func shape(plan:Dictionary,rect:Rect2)->Dictionary:
	return {"polygon":PackedVector2Array([at(plan,rect.position),at(plan,Vector2(rect.end.x,rect.position.y)),at(plan,rect.end),at(plan,Vector2(rect.position.x,rect.end.y))])}
static func contains(plan:Dictionary,p:Vector2,margin:float=0.)->bool:
	var q:=local(plan,p)
	return plan.floors.any(func(r):return Rect2(r).grow(-margin).has_point(q))
static func supported(plan:Dictionary,p:Vector2,radius:float)->bool:
	if not contains(plan,p):return false
	var q:=local(plan,p);var outline:PackedVector2Array=plan.outline
	for i in range(outline.size()):
		if q.distance_to(Geometry2D.get_closest_point_to_segment(q,outline[i],outline[(i+1)%outline.size()]))<radius-.000001:return false
	return true
static func for_house(city,house:Dictionary)->Dictionary:
	if not selected(city,house):return {}
	for cell:Dictionary in house.cells:
		if int(cell.level)!=0 or cell.kind!="room":continue
		for side:Vector2i in SIDES:
			var normal:=Frame.direction(house,Vector2(side),cell);var wall:=Frame.center(house,cell)+normal*.9
			var top:=float(house.get("base_y",0.))+.15
			for wing:float in [-1.,1.]:
				var plan:={"version":VERSION,"house_id":str(house.get("id","preview")),"cell_id":str(cell.id),"side":side,"wall":wall,"normal":normal,"tangent":Vector2(normal.y,-normal.x),"top":top,"wing":wing,"floors":[Rect2(-.9,0.,1.8,1.4),Rect2(-1.6 if wing<0. else .9,-.65,.7,1.4)]}
				if not _clear(city,house,plan):continue
				plan["outline"]=Geometry2D.merge_polygons(Frame.corners(plan.floors[0]),Frame.corners(plan.floors[1]))[0]
				plan["landing"]=at(plan,Vector2(wing*1.25,-.65));plan["gate"]=at(plan,Vector2(wing*1.25,.35));plan["lookout"]=at(plan,Vector2(0,1.17))
				plan["rails"]=_rails(plan);return plan
	return {}
static func preview(city,house:Dictionary)->Dictionary:
	var plan:=for_house(city,house)
	if plan.is_empty():return {}
	for other:Dictionary in all(city):
		if str(other.house_id).naturalnocasecmp_to(str(plan.house_id))>=0:continue
		if plan.floors.any(func(rect):return other.floors.any(func(r):return Frame.boxes_overlap(shape(plan,rect),shape(other,r)))):return {}
	return plan
static func _clear(city,source:Dictionary,plan:Dictionary)->bool:
	var wet:=true
	for x:float in [-.72,0.,.72]:
		var p:=at(plan,Vector2(x,1.30))
		wet=wet and city.water_clearance(p)<-.04 and city.raw_terrain_height(p)<plan.top-.15
	if not wet:return false
	var landing:=at(plan,Vector2(plan.wing*1.25,-.65))
	if city.water_clearance(landing)<.15 or absf(city.raw_terrain_height(landing)+.075-float(plan.top))>.13:return false
	for rect:Rect2 in plan.floors:
		var footprint:=shape(plan,rect)
		for p:Vector2 in Frame.corners(footprint):
			if not city.WORLD_RECT.has_point(p) or city.raw_terrain_height(p)>plan.top-.025:return false
		for house:Dictionary in city.houses:
			if str(house.id)==str(source.get("id","preview")):continue
			for cell:Dictionary in house.cells:
				var bottom:=float(house.get("base_y",0.))+int(cell.level)*1.7
				if bottom>=plan.top+1.7 or bottom+1.7<=plan.top-.55:continue
				if Frame.boxes_overlap(footprint,Frame.footprint(house,cell,-.002)):return false
		for item:Dictionary in city.placed_landmarks:
			if Frame.boxes_overlap(footprint,city.PlacedLandmarks.footprint(item,.03)):return false
		for road:Dictionary in city.roads:
			if stroke_hits(footprint,road.points,float(road.width)*.5+.04):return false
	# The candidate may not yet be inside city.houses during a public preview.
	for cell:Dictionary in source.cells:
		var bottom:=float(source.get("base_y",0.))+int(cell.level)*1.7
		if bottom>=plan.top+1.7 or bottom+1.7<=plan.top-.55:continue
		for rect:Rect2 in plan.floors:
			if Frame.boxes_overlap(shape(plan,rect),Frame.footprint(source,cell,-.002)):return false
	return true
static func stroke_hits(footprint:Dictionary,points:Array,radius:float)->bool:
	for i in range(1,points.size()):
		var a:=Vector2(points[i-1][0],points[i-1][1]);var b:=Vector2(points[i][0],points[i][1])
		if Frame.segment(footprint,a,b) or Frame.distance(footprint,a)<radius or Frame.distance(footprint,b)<radius:return true
		for p:Vector2 in Frame.corners(footprint):
			if p.distance_to(Geometry2D.get_closest_point_to_segment(p,a,b))<radius:return true
	return false
static func _rails(plan:Dictionary)->Array:
	var wing:float=plan.wing;var rows:Array=[Rect2(-.89,1.35,1.78,.04),Rect2(-.89 if wing>0. else .85,.025,.04,1.325),Rect2(.85 if wing>0. else -.89,.75,.04,.6),Rect2(-1.575 if wing<0. else 1.535,-.625,.04,1.35),Rect2(-1.575 if wing<0. else .89,.70,.685,.04)]
	return rows.map(func(r):return shape(plan,r))
static func all(city)->Array:
	var cached:Dictionary=city.get_meta("tea_deck_plans",{})
	if cached.get("revision",-1)==city.revision:return cached.plans
	var key:=hash([city.houses,city.roads,city.waters,city.terrain_strokes,city.placed_landmarks,city.districts])
	if cached.get("key") == key:cached["revision"]=city.revision;city.set_meta("tea_deck_plans",cached);return cached.plans
	var plans:Array=[]
	var houses:Array=city.houses.duplicate();houses.sort_custom(func(a,b):return str(a.id).naturalnocasecmp_to(str(b.id))<0)
	for house:Dictionary in houses:
		if house.get("architecture","")!=ID:continue
		var plan:=for_house(city,house)
		if not plan.is_empty():
			if plans.any(func(other):return plan.floors.any(func(rect):return other.floors.any(func(r):return Frame.boxes_overlap(shape(plan,rect),shape(other,r))))):continue
			plans.append(plan)
	city.set_meta("tea_deck_plans",{"key":key,"revision":city.revision,"plans":plans});return plans
static func find(city,id:String)->Dictionary:
	for plan:Dictionary in all(city):
		if plan.house_id==id:return plan
	return {}
static func height(city,p:Vector2)->float:
	for plan:Dictionary in all(city):
		if contains(plan,p):return float(plan.top)
	return NAN
static func floor_support(city,p:Vector2,radius:float)->Dictionary:
	for plan:Dictionary in all(city):
		if supported(plan,p,radius):return {"base_y":float(plan.top)-.08,"deck_id":plan.house_id}
	return {}

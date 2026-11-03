extends RefCounted
## v1: a private wet slip, twin real piers and a shore-side house. No earned perks.
const ID:="creek_boathouse"
const VERSION:=1
const EXTENT:=2.25
const Deck=preload("res://scripts/world/city_creation_tea_deck_plan.gd")
const Frame=Deck.Frame
const SIDES:=[Vector2i.DOWN,Vector2i.RIGHT,Vector2i.LEFT,Vector2i.UP]
static func selected(city:RefCounted,house:Dictionary)->bool:
	return house.get("architecture","")==ID and city.house_era(house)=="pastoral" and not house.has("signature")
static func at(plan:Dictionary,p:Vector2)->Vector2:return Deck.at(plan,p)
static func local(plan:Dictionary,p:Vector2)->Vector2:return Deck.local(plan,p)
static func shape(plan:Dictionary,rect:Rect2)->Dictionary:return Deck.shape(plan,rect)
static func contains(plan:Dictionary,p:Vector2)->bool:return Deck.contains(plan,p)
static func supported(plan:Dictionary,p:Vector2,radius:float)->bool:return Deck.supported(plan,p,radius)
static func for_house(city:RefCounted,house:Dictionary)->Dictionary:
	if not selected(city,house) or not is_zero_approx(Frame.Hinge.angle(house)):return {}
	var top:=float(house.get("base_y",0.))+.15
	if top-float(city.Terrain.WATER_LEVEL)>.75:return {}
	for cell:Dictionary in house.cells:
		if cell.kind!="room" or int(cell.level)!=0:continue
		for side:Vector2i in SIDES:
			var normal:=Frame.direction(house,Vector2(side),cell)
			var plan:={"version":VERSION,"house_id":str(house.get("id","preview")),"cell_id":str(cell.id),"side":side,"wall":Frame.center(house,cell)+normal*.9,"normal":normal,"tangent":Vector2(normal.y,-normal.x),"top":top,"reserved":Rect2(-1.15,0.,2.3,EXTENT),"floors":[Rect2(-1.,0.,.40,2.),Rect2(.60,0.,.40,2.),Rect2(-1.,0.,2.,.28)]}
			if not _clear(city,house,plan):continue
			var outline:PackedVector2Array=Frame.corners(plan.floors[2])
			for i in range(2):outline=Geometry2D.merge_polygons(outline,Frame.corners(plan.floors[i]))[0]
			plan.outline=outline;plan.boat=at(plan,Vector2(0,1.15));return plan
	return {}
static func _clear(city:RefCounted,source:Dictionary,plan:Dictionary)->bool:
	for x:float in [-.32,0.,.32]:
		for z:float in [.63,1.15,1.85]:
			var p:=at(plan,Vector2(x,z))
			if city.water_clearance(p)>-.045 or city.raw_terrain_height(p)>float(city.Terrain.WATER_LEVEL)-.075:return false
	for x:float in [-.82,.82]:
		var p:=at(plan,Vector2(x,.05))
		if city.raw_terrain_height(p)>float(plan.top)-.025:return false
	var footprint:=shape(plan,plan.reserved)
	for p:Vector2 in Frame.corners(footprint):
		if not city.WORLD_RECT.has_point(p):return false
	for house:Dictionary in city.houses:
		if str(house.id)==str(source.get("id","preview")):continue
		for cell:Dictionary in house.cells:
			var low:=float(house.get("base_y",0.))+int(cell.level)*1.7
			if low>=float(plan.top)+2.3 or low+1.7<=float(city.Terrain.WATER_LEVEL)-.10:continue
			if Frame.boxes_overlap(footprint,Frame.footprint(house,cell,-.002)):return false
	for cell:Dictionary in source.cells:
		if int(cell.level)>1:continue
		if Frame.boxes_overlap(footprint,Frame.footprint(source,cell,-.002)):return false
	for landmark:Dictionary in city.placed_landmarks:
		if Frame.boxes_overlap(footprint,city.PlacedLandmarks.footprint(landmark,.03)):return false
	for road:Dictionary in city.roads:
		if Deck.stroke_hits(footprint,road.points,float(road.width)*.5+.04):return false
	for plant:Dictionary in city.plants:
		if Frame.distance(footprint,Vector2(plant.position[0],plant.position[1]))<city.GardenSpecies.clearance(plant.kind,float(plant.scale))+.04:return false
	for deck:Dictionary in Deck.all(city):
		for rect:Rect2 in deck.floors:
			if Frame.boxes_overlap(footprint,Deck.shape(deck,rect)):return false
	return true
static func all(city:RefCounted)->Array:
	var cached:Dictionary=city.get_meta("boathouse_plans",{})
	if cached.get("revision",-1)==city.revision:return cached.plans
	var key:=hash([city.houses,city.roads,city.waters,city.terrain_strokes,city.placed_landmarks,city.plants,city.districts])
	if cached.get("key")==key:cached.revision=city.revision;return cached.plans
	var houses:Array=city.houses.duplicate();houses.sort_custom(func(a,b):return str(a.id).naturalnocasecmp_to(str(b.id))<0);var plans:Array=[]
	for house:Dictionary in houses:
		if house.get("architecture","")!=ID:continue
		var plan:=for_house(city,house)
		if plan.is_empty():continue
		if plans.any(func(other):return Frame.boxes_overlap(shape(plan,plan.reserved),shape(other,other.reserved))):continue
		plans.append(plan)
	city.set_meta("boathouse_plans",{"key":key,"revision":city.revision,"plans":plans});return plans
static func find(city:RefCounted,id:String)->Dictionary:
	for plan:Dictionary in all(city):
		if plan.house_id==id:return plan
	return {}
static func preview(city:RefCounted,house:Dictionary)->Dictionary:
	var plan:=for_house(city,house)
	if plan.is_empty():return {}
	for other:Dictionary in all(city):
		if other.house_id==plan.house_id:continue
		if Frame.boxes_overlap(shape(plan,plan.reserved),shape(other,other.reserved)):return {}
	return plan
static func height(city:RefCounted,p:Vector2)->float:
	for plan:Dictionary in all(city):
		if contains(plan,p):return float(plan.top)
	return NAN
static func floor_support(city:RefCounted,p:Vector2,radius:float)->Dictionary:
	for plan:Dictionary in all(city):
		if supported(plan,p,radius):return {"base_y":float(plan.top)-.08,"boat_dock_id":plan.house_id}
	return {}
static func ground_masks(city:RefCounted)->Array:
	var result:Array=[]
	for plan:Dictionary in all(city):
		for rect:Rect2 in plan.floors:result.append(shape(plan,rect))
	return result

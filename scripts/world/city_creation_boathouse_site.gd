extends RefCounted
const Plan=preload("res://scripts/world/city_creation_boathouse_plan.gd")
static func house_conflict(city:RefCounted,house:Dictionary,except_id:String)->bool:
	for plan:Dictionary in Plan.all(city):
		if plan.house_id==except_id or plan.house_id==str(house.get("id","")):continue
		for cell:Dictionary in house.cells:
			var low:=float(house.get("base_y",0.))+int(cell.level)*1.7
			if low>=float(plan.top)+2.3 or low+1.7<=float(city.Terrain.WATER_LEVEL)-.10:continue
			if Plan.Frame.boxes_overlap(Plan.shape(plan,plan.reserved),Plan.Frame.footprint(house,cell)):return true
	return false
static func road_conflict(city:RefCounted,points:Array,width:float)->bool:
	for plan:Dictionary in Plan.all(city):
		if Plan.Deck.stroke_hits(Plan.shape(plan,plan.reserved),points,width*.5+.04):return true
	return false
static func plant_conflict(city:RefCounted,p:Vector2,radius:float)->bool:
	for plan:Dictionary in Plan.all(city):
		if Plan.Frame.distance(Plan.shape(plan,plan.reserved),p)<=radius:return true
	return false

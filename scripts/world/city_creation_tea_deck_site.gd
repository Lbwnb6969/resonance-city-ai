extends RefCounted
## Existing structural platforms reserve their actual floor and occupied height.
const Plan=preload("res://scripts/world/city_creation_tea_deck_plan.gd")
const Frame=Plan.Frame
static func house_conflict(city,candidate:Dictionary,except_id:String)->bool:
	for plan:Dictionary in Plan.all(city):
		if plan.house_id==except_id or plan.house_id==str(candidate.get("id","")):continue
		for cell:Dictionary in candidate.cells:
			var low:=float(candidate.get("base_y",0.))+int(cell.level)*1.7
			if low>=plan.top+1.7 or low+1.7<=plan.top-.55:continue
			for rect:Rect2 in plan.floors:
				if Frame.boxes_overlap(Plan.shape(plan,rect),Frame.footprint(candidate,cell)):return true
	return false
static func road_conflict(city,points:Array,width:float)->bool:
	for plan:Dictionary in Plan.all(city):
		for rect:Rect2 in plan.floors:
			if Plan.stroke_hits(Plan.shape(plan,rect),points,width*.5+.04):return true
	return false
static func plant_conflict(city,at:Vector2,clearance:float)->bool:
	for plan:Dictionary in Plan.all(city):
		for rect:Rect2 in plan.floors:
			if Frame.distance(Plan.shape(plan,rect),at)<=clearance:return true
	return false

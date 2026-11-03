extends RefCounted
## Frozen v1 roof recipe. Authoring still owns rooms, eras, entrances and seeds.
const ID:="corner_loggia_tower"
const VERSION:=1
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const SIDES:=[Vector2i.DOWN,Vector2i.RIGHT,Vector2i.UP,Vector2i.LEFT]
static func supported(house:Dictionary)->bool:
	return not house.has("signature") and is_zero_approx(Frame.Hinge.angle(house)) and house.cells.any(func(c):return c.kind=="room")
static func authored(house:Dictionary)->bool:
	return house.get("architecture","")==ID and house.get("style","") not in ["timber","round_tower"] and supported(house)
static func active(city:RefCounted,house:Dictionary)->bool:return city.house_era(house)=="renaissance" and authored(house)
static func crown(context:RefCounted,house:Dictionary,roofs:Array)->Dictionary:
	if roofs.is_empty():return {}
	var height:float=roofs[0].base
	for i:int in [0,3,1,2]:
		for row:Dictionary in roofs:
			if not is_equal_approx(float(row.base),height):break
			var sides:Array=[SIDES[i],SIDES[(i+1)%4]];var clear:=true
			for side:Vector2i in sides:
				for level:int in [0,1]:
					if not context.neighbor(house,row.cell,side,level,true).is_empty():clear=false
			if clear:return row.merged({"sides":sides,"angle":atan2(float(sides[0].x),float(sides[0].y))})
	return {}

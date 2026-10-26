extends RefCounted
## Optional authored genes; absent fields keep the exact old recipe.
const RADIUS:=.35
const HALF:=.965
const LABELS:=["规整直墙","斜切导角","温润圆角"]
static func valid(value:Variant)->bool:return (value is int or value is float and value==floor(value)) and value>=0 and value<=2
static func supported(city,house:Dictionary)->bool:
	if house.has("signature") or house.get("style","")=="round_tower":return false
	if city.house_era(house) not in ["pastoral","renaissance"]:return false
	if house.get("architecture","") not in ["","portico","townhouse"]:return false
	if city.house_era(house)=="pastoral" and house.get("style","")!="timber" and not preload("res://scripts/visual/city_creation_ancient_villa.gd").plan(house).is_empty():return false
	if not preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(city,house).is_empty():return false
	if not preload("res://scripts/world/city_creation_passage.gd").for_house(house,city.roads).is_empty():return false
	if not preload("res://scripts/world/city_creation_renaissance_plan.gd").for_house(city,house).is_empty():return false
	if not preload("res://scripts/world/city_creation_towers.gd").derive(city.houses,city.roads).get(str(house.id),[]).is_empty():return false
	return true
static func mode(city,house:Dictionary)->int:return int(house.get("corner_bevel",0)) if int(house.get("corner_bevel",0))!=0 and supported(city,house) else 0
static func set_corner(city,id:String,value:int)->Dictionary:
	var index:int=city._house_index(id)
	if index<0 or value<0 or value>2:return city._fail("房屋微雕无效")
	var house:Dictionary=city.houses[index]
	if value!=0 and not supported(city,house):return city._fail("此屋保留原型轮廓")
	if house.has("bend_angle_deg"):return preload("res://scripts/world/city_creation_hinge_actions.gd").corner(city,id,value,LABELS[value])
	if int(house.get("corner_bevel",0))==value and house.get("organic_manual",false):return {"ok":true,"no_op":true,"message":LABELS[value]}
	var before:Dictionary=city.snapshot();house.organic_manual=true
	if value==0:house.erase("corner_bevel")
	else:house.corner_bevel=value
	city._commit(before,"建筑有机微雕")
	return {"ok":true,"message":LABELS[value],"house_id":id}
static func corners(house:Dictionary,cell:Dictionary)->Array:
	var result:Array=[]
	if cell.kind!="room":return result
	for side:Vector2 in [Vector2(-1,-1),Vector2(1,-1),Vector2(1,1),Vector2(-1,1)]:
		var exposed:=true
		for other:Dictionary in house.cells:
			if int(other.level)!=int(cell.level) or other.kind!="room":continue
			var delta:=Vector2(int(other.x)-int(cell.x),int(other.z)-int(cell.z))
			if delta==Vector2(side.x,0) or delta==Vector2(0,side.y):exposed=false;break
		if exposed:result.append(side)
	return result
static func exposed(city,house:Dictionary,cell:Dictionary)->Array:
	var result:=corners(house,cell);var frame=preload("res://scripts/world/city_creation_house_frame.gd")
	var center:Vector2=frame.center(house,cell)
	for side:Vector2 in result.duplicate():
		var blocked:=false
		for other:Dictionary in city.houses:
			if str(other.id)==str(house.id):continue
			for room:Dictionary in other.cells:
				if int(room.level)!=int(cell.level) or absf(float(other.get("base_y",0.))-float(house.get("base_y",0.)))>.05:continue
				for axis:Vector2 in [Vector2(side.x,0),Vector2(0,side.y)]:
					if frame.distance(frame.footprint(other,room),center+frame.direction(house,axis)*1.8)<.1:blocked=true
		if blocked:result.erase(side)
	return result
static func geometry_key(city,house:Dictionary)->Array:
	if int(house.get("corner_bevel",0))==0:return []
	var result:Array=[mode(city,house)]
	for cell:Dictionary in house.cells:result.append(exposed(city,house,cell))
	return result
static func mapped(at:Vector2,side:Vector2,value:int)->Vector2:
	var start:=Vector2.ONE*(HALF-RADIUS);var uv:=at*side-start
	if uv.x<=0. or uv.y<=0.:return at
	var next:Vector2
	if value==1:
		next=Vector2(uv.x-.5*uv.y,.5*uv.y) if uv.x>=uv.y else Vector2(.5*uv.x,uv.y-.5*uv.x)
	elif uv.y<=.5*uv.x:next=Vector2(uv.x-.2679491924*uv.y,uv.y)
	elif uv.y<=uv.x:next=Vector2(1.2320508076*uv.x-.7320508076*uv.y,.1339745962*uv.x+.7320508076*uv.y)
	else:next=Vector2(.5*uv.x,uv.y-.1339745962*uv.x)
	return (start+next)*side
static func point(at:Vector3,sides:Array,value:int)->Vector3:
	var p:=Vector2(at.x,at.z)
	for side:Vector2 in sides:p=mapped(p,side,value)
	return Vector3(p.x,at.y,p.y)
static func planes(side:Vector2,value:int)->Array:
	var c:=HALF-RADIUS
	var result:Array=[Vector3(side.x,0,c),Vector3(0,side.y,c),Vector3(side.x,-side.y,0)]
	if value==2:result.append(Vector3(-.5*side.x,side.y,c*.5))
	return result

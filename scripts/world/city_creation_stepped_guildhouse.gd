extends RefCounted
## Frozen v1 recipe, selected explicitly; no seed changes or automatic replacement.
const ID:="stepped_guildhouse"
const VERSION:=1
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func layout(house:Dictionary)->Dictionary:
	if house.has("signature") or house.cells.is_empty() or not is_zero_approx(Frame.Hinge.angle(house)):return {}
	var low:=Vector2i(house.cells[0].x,house.cells[0].z);var high:=low;var top:=0;var occupied:Dictionary={}
	for cell:Dictionary in house.cells:
		if cell.kind!="room":return {}
		low=Vector2i(mini(low.x,cell.x),mini(low.y,cell.z));high=Vector2i(maxi(high.x,cell.x),maxi(high.y,cell.z));top=maxi(top,cell.level)
		occupied[Vector3i(cell.x,cell.level,cell.z)]=true
	var size:=high-low+Vector2i.ONE
	if occupied.size()!=size.x*size.y*(top+1):return {}
	return {"low":low,"size":size,"top":top,"center":Frame.origin(house)+Vector2(low+high)*.9,"base":float(house.get("base_y",0.))+(top+1)*1.7}
static func authored(house:Dictionary)->bool:
	return house.get("architecture","")==ID and house.get("style","") not in ["timber","round_tower"] and not layout(house).is_empty()
static func active(city,house:Dictionary)->bool:return city.house_era(house)=="renaissance" and authored(house)
static func bays(city,house:Dictionary)->Array:
	var plan:=layout(house)
	if plan.is_empty():return []
	var entries:Array=city.house_entrances(str(house.id));var primary:Dictionary={}
	for entry:Dictionary in entries:
		if entry.active:primary=entry;break
	var turn:bool=not primary.is_empty() and int(primary.side.x)!=0
	var angle:=PI*.5 if turn else 0.;var count:int=plan.size.y if turn else plan.size.x;var depth:float=(plan.size.x if turn else plan.size.y)*1.8;var result:Array=[]
	for i in range(count):
		var center:Vector2=plan.center+Vector2((i-(count-1)*.5)*1.8,0).rotated(-angle);var nearest:Dictionary={};var distance:=INF
		for cell:Dictionary in house.cells:
			if int(cell.level)!=int(plan.top):continue
			var delta:float=(Frame.origin(house)+Vector2(cell.x,cell.z)*1.8).distance_squared_to(center)
			if delta<distance:distance=delta;nearest=cell
		result.append({"center":Vector3(center.x,plan.base,center.y),"angle":angle,"depth":depth,"cell":nearest})
	return result

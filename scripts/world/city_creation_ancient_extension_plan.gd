extends RefCounted
## Whole rectangular prisms support civic massing; edits retain every saved cell.
const IDS:=["ionic_stoa","roman_basilica"]
const NAMES:=["爱奥尼长馆","罗马巴西利卡"]
static func rectangle(house:Dictionary)->Dictionary:
	if house.cells.is_empty() or not is_zero_approx(float(house.get("bend_angle_deg",0.))):return {}
	var low:=Vector2i(house.cells[0].x,house.cells[0].z);var high:=low;var top:=0;var occupied:Dictionary={}
	for cell:Dictionary in house.cells:
		if cell.kind!="room":return {}
		low=Vector2i(mini(low.x,cell.x),mini(low.y,cell.z));high=Vector2i(maxi(high.x,cell.x),maxi(high.y,cell.z));top=maxi(top,int(cell.level))
		occupied[Vector3i(cell.x,cell.z,cell.level)]=true
	if occupied.size()!=(high.x-low.x+1)*(high.y-low.y+1)*(top+1):return {}
	var doors:Array[float]=[]
	for x in range(low.x,high.x+1):doors.append((x-(low.x+high.x)*.5)*1.8)
	return {"center":Vector2(house.origin[0],house.origin[1])+Vector2(low+high)*.9,"width":(high.x-low.x+1)*1.8,"depth":(high.y-low.y+1)*1.8,"floors":top+1,"height":(top+1)*1.7,"cell":house.cells[0],"door_xs":doors}
static func massing(city,house:Dictionary)->Dictionary:
	var plan:=rectangle(house)
	if house.get("architecture","")=="roman_basilica":
		if not city.house_passages(str(house.id)).is_empty():return {}
		for entrance:Dictionary in city.house_entrances(str(house.id)):
			if entrance.side!=Vector2i.DOWN:return {}
	return plan
static func selected(house:Dictionary)->bool:return house.get("architecture","") in IDS

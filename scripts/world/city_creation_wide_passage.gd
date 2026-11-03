extends RefCounted
## A shared lintel spans contiguous ground rooms; outer pier limits stay intact.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const UNIT:=1.8
const HALF:=.9
const PIER:=.08
const MARGIN:=.04
static func for_cell(house:Dictionary,cell:Dictionary,points:Array,width:float,road_id:String,cut:Callable)->Dictionary:
	if not is_equal_approx(width,1.75) or house.has("signature") or house.get("style","")=="round_tower" or house.get("architecture","")!="townhouse" or house.get("era_theme","") not in ["pastoral","renaissance"] or absf(float(house.get("base_y",0.)))>.05:return {}
	var base:=Frame.origin(house);var origin:=base+Vector2(cell.x,cell.z)*UNIT
	for axis:Vector2i in [Vector2i.RIGHT,Vector2i.DOWN]:
		var direction:=Vector2(axis);var lateral:=Vector2(-axis.y,axis.x) if axis.x==1 else Vector2.RIGHT
		var row:Dictionary={};var coordinate:int=cell.z if axis.x==1 else cell.x
		for room:Dictionary in house.cells:
			if room.level==0 and room.kind=="room" and (room.x==cell.x if axis.x==1 else room.z==cell.z):row[int(room.z if axis.x==1 else room.x)]=room
		var low_index:=coordinate;var high_index:=coordinate
		while row.has(low_index-1):low_index-=1
		while row.has(high_index+1):high_index+=1
		if high_index==low_index:continue
		var bounds:=Rect2(origin-Vector2.ONE*HALF,Vector2.ONE*UNIT)
		for index in range(low_index,high_index+1):
			var room:Dictionary=row[index];bounds=bounds.merge(Rect2(base+Vector2(room.x,room.z)*UNIT-Vector2.ONE*HALF,Vector2.ONE*UNIT))
		if bounds.grow(-.003).has_point(Vector2(points[0][0],points[0][1])) or bounds.grow(-.003).has_point(Vector2(points[-1][0],points[-1][1])):continue
		var crossing:=false;var run:Array=[];var near:Array=[]
		for index in range(1,points.size()):
			var a:=Vector2(points[index-1][0],points[index-1][1]);var b:=Vector2(points[index][0],points[index][1])
			var section:Array=cut.call(a,b,bounds)
			if section.is_empty() or (not run.is_empty() and Vector2(run[-1]).distance_to(section[0])>.0001):run=[]
			run.append_array(section)
			if not run.is_empty():
				var lo:=INF;var hi:=-INF
				for at:Vector2 in run:lo=minf(lo,(at-origin).dot(direction));hi=maxf(hi,(at-origin).dot(direction))
				if lo<=-HALF+.001 and hi>=HALF-.001:crossing=true
			near.append_array(cut.call(a,b,bounds.grow(width*.5-MARGIN)))
		if not crossing:continue
		var low:=INF;var high:=-INF
		for at:Vector2 in near:low=minf(low,(at-origin).dot(lateral)-width*.5-MARGIN);high=maxf(high,(at-origin).dot(lateral)+width*.5+MARGIN)
		var row_low:float=(base-origin).dot(lateral)+low_index*UNIT-HALF
		var row_high:float=(base-origin).dot(lateral)+high_index*UNIT+HALF
		if low<row_low+PIER or high>row_high-PIER:continue
		low=maxf(low,-HALF);high=minf(high,HALF)
		if high-low<.001:continue
		return {"cell_id":str(cell.id),"axis":axis,"offset":(low+high)*.5,"half_width":(high-low)*.5,"center":origin,"road_id":road_id,"sides":[axis,-axis],"profile":"wide_lintel"}
	return {}
static func incompatible(house:Dictionary,roads:Array,derive:Callable)->bool:
	if not roads.any(func(r):return is_equal_approx(float(r.width),1.75)):return false
	var records:Array=derive.call(house,roads)
	for first:Dictionary in records:
		if first.get("profile","")!="wide_lintel":continue
		for second:Dictionary in records:
			if first.cell_id==second.cell_id and first.axis!=second.axis:return true
	return false
static func site(houses:Array,roads:Array,points:Array,width:float,derive:Callable)->bool:
	var proposed:Array=roads.duplicate();proposed.append({"id":"candidate","points":points,"width":width})
	var bounds:=Rect2(Vector2(points[0][0],points[0][1]),Vector2.ZERO)
	for point:Array in points:bounds=bounds.expand(Vector2(point[0],point[1]))
	for house:Dictionary in houses:
		if not bounds.grow(width*.5).intersects(Frame.house_bounds(house),true):continue
		if incompatible(house,proposed,derive):return false
	return true
static func retained(city:RefCounted,original:Dictionary,target:Dictionary)->bool:
	if not city.roads.any(func(r):return is_equal_approx(float(r.width),1.75)):return true
	if not city.Passage.for_house(original,city.roads).any(func(p):return p.get("profile","")=="wide_lintel"):return true
	return city._validate_house_site(target).ok
static func preserve(city:RefCounted,before:Dictionary,index:int)->bool:
	if retained(city,before.houses[index],city.houses[index]):return true
	city.houses[index]=before.houses[index].duplicate(true)
	return false
static func preserve_all(city:RefCounted,before:Dictionary)->bool:
	for index in range(city.houses.size()):
		if not retained(city,before.houses[index],city.houses[index]):city.houses.assign(before.houses.duplicate(true));return false
	return true

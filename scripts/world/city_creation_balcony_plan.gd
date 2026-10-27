extends RefCounted
## Authored facade identity stays with its original room across edits and yaw.
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const SIDES:=[Vector2i.DOWN,Vector2i.RIGHT,Vector2i.UP,Vector2i.LEFT]
const LABELS:=["规整直墙","二层外挑","六角飘窗","半圆阳台","转角阳台"]
static func valid(value:Variant)->bool:return (value is int or value is float and value==floor(value)) and value>=0 and value<=2
static func authored(house:Dictionary)->int:return int(house.get("overhang",0)) if int(house.get("overhang",0))>0 else int(house.get("balcony_arc",0))+2 if int(house.get("balcony_arc",0))>0 else 0
static func prune(city)->void:
	for house:Dictionary in city.houses:
		if not house.has("organic_cell_id"):continue
		if house.cells.any(func(c):return str(c.id)==str(house.organic_cell_id) and c.kind=="room" and int(c.level)==1):continue
		for field:String in ["overhang","balcony_arc","organic_cell_id","organic_facade"]:house.erase(field)
static func cell_at(house:Dictionary,x:int,z:int,level:int)->Dictionary:
	for cell:Dictionary in house.cells:
		if int(cell.x)==x and int(cell.z)==z and int(cell.level)==level and cell.kind=="room":return cell
	return {}
static func obstruction(house:Dictionary,cell:Dictionary,base:float)->Variant:
	var y:=float(house.get("base_y",0.))+int(cell.level)*1.7
	if y>=base+3.4:return null
	var roof:bool=cell.kind=="room" and cell_at(house,int(cell.x),int(cell.z),int(cell.level)+1).is_empty()
	var height:=1.7 if cell.kind=="room" else .20
	if y+height+(.60 if roof else 0.)<=base+1.7:return null
	return Frame.footprint(house,cell,.14 if roof else 0.)
static func layout(house:Dictionary)->Dictionary:
	var upper:Dictionary={}
	for cell:Dictionary in house.cells:
		if str(cell.id)==str(house.get("organic_cell_id","")):upper=cell;break
	if upper.is_empty() or int(upper.level)!=1 or upper.kind!="room":return {}
	var lower:=cell_at(house,int(upper.x),int(upper.z),0)
	if lower.is_empty():return {}
	var side:Vector2i=SIDES[int(house.get("organic_facade",0))]
	if not cell_at(house,int(upper.x)+side.x,int(upper.z)+side.y,1).is_empty():return {}
	var turn:=Vector2i(side.y,-side.x)
	if int(house.get("balcony_arc",0))==2 and not cell_at(house,int(upper.x)+turn.x,int(upper.z)+turn.y,1).is_empty():return {}
	var result:={"upper":upper,"lower":lower,"side":side,"angle":atan2(float(side.x),float(side.y)),"mode":authored(house),"house_id":str(house.id)}
	var poly:=polygon(house,result)
	for other:Dictionary in house.cells:
		if str(other.id)==str(upper.id):continue
		var box:Variant=obstruction(house,other,float(house.get("base_y",0.)))
		if box!=null and not Geometry2D.intersect_polygons(poly,Frame.corners(box)).is_empty():return {}
	return result
static func plan(city,house:Dictionary)->Dictionary:
	return layout(house) if authored(house)>0 and Form.supported(city,house) else {}
static func choose(city,house:Dictionary)->Dictionary:
	for cell:Dictionary in house.cells:
		if int(cell.level)!=1 or cell.kind!="room":continue
		for side in range(4):
			var candidate:=house.duplicate(true);candidate.organic_cell_id=str(cell.id);candidate.organic_facade=side
			var next:=layout(candidate)
			if next.is_empty():continue
			for door:Dictionary in city.house_entrances(str(house.id)):
				if str(door.cell_id)==str(next.lower.id) and Vector2i(door.side)==next.side and door.active:return next
	# No connected entrance yet: deterministic facade, still available as a toy.
	for cell:Dictionary in house.cells:
		if int(cell.level)!=1 or cell.kind!="room":continue
		for side in range(4):
			var candidate:=house.duplicate(true);candidate.organic_cell_id=str(cell.id);candidate.organic_facade=side
			var next:=layout(candidate)
			if not next.is_empty():return next
	return {}
static func set_mode(city,id:String,value:int)->Dictionary:
	var index:int=city._house_index(id)
	if index<0 or value<0 or value>4:return city._fail("外挑微雕无效")
	var house:Dictionary=city.houses[index];var candidate:=house.duplicate(true)
	for field:String in ["overhang","balcony_arc","organic_cell_id","organic_facade"]:candidate.erase(field)
	if value>0:
		if not Form.supported(city,house):return city._fail("此屋保留原型轮廓")
		if value<=2:candidate.overhang=value
		else:candidate.balcony_arc=value-2
		var chosen:=choose(city,candidate)
		if chosen.is_empty():return city._fail("在房间上方加建二层后可外挑")
		candidate.organic_cell_id=str(chosen.upper.id);candidate.organic_facade=SIDES.find(chosen.side);candidate.erase("corner_bevel")
	candidate.organic_manual=true
	var site:=validate_site(city,candidate)
	if not site.ok:return site
	var before:Dictionary=city.snapshot();city.houses[index]=candidate;city._commit(before,"建筑有机微雕")
	return {"ok":true,"house_id":id,"message":LABELS[value]}
static func outline(data:Dictionary)->PackedVector2Array:
	var mode:=int(data.mode);var result:=PackedVector2Array()
	if mode<=2:return PackedVector2Array([Vector2(-.74,.9),Vector2(.74,.9),Vector2(.74,1.18),Vector2(.42,1.48 if mode==2 else 1.2),Vector2(-.42,1.48 if mode==2 else 1.2),Vector2(-.74,1.18)])
	var center:=Vector2(0,.965) if mode==3 else Vector2(.9,.9)
	result.append(center)
	var segments:=12 if mode==3 else 18
	for i in range(segments+1):
		var angle:=float(i)/segments*PI if mode==3 else -PI*.5+float(i)/segments*PI*1.5
		result.append(center+Vector2(cos(angle),sin(angle))*.95)
	return result
static func world(house:Dictionary,data:Dictionary,local:Vector3)->Vector3:
	var origin:=Frame.origin(house)+Vector2(data.upper.x,data.upper.z)*1.8
	var p:=Basis(Vector3.UP,float(data.angle))*local
	return Frame.world3(house,Vector3(origin.x+p.x,float(house.get("base_y",0.))+p.y,origin.y+p.z))
static func polygon(house:Dictionary,data:Dictionary)->PackedVector2Array:
	var result:=PackedVector2Array()
	for p:Vector2 in outline(data):var at:=world(house,data,Vector3(p.x,1.85,p.y));result.append(Vector2(at.x,at.z))
	return result
static func conflict(city,a:Dictionary,b:Dictionary)->bool:
	for pair:Array in [[a,b],[b,a]]:
		var data:=plan(city,pair[0])
		if data.is_empty():continue
		var poly:=polygon(pair[0],data);var base:=float(pair[0].get("base_y",0.))
		for cell:Dictionary in pair[1].cells:
			var box:Variant=obstruction(pair[1],cell,base)
			if box!=null and not Geometry2D.intersect_polygons(poly,Frame.corners(box)).is_empty():return true
	var first:=plan(city,a);var second:=plan(city,b)
	return not first.is_empty() and not second.is_empty() and absf(float(a.get("base_y",0.))-float(b.get("base_y",0.)))<1.7 and not Geometry2D.intersect_polygons(polygon(a,first),polygon(b,second)).is_empty()
static func validate_site(city,house:Dictionary)->Dictionary:
	var data:=plan(city,house)
	if data.is_empty():return {"ok":true}
	for other:Dictionary in city.houses:
		if str(other.id)==str(house.id):continue
		if conflict(city,house,other):return city._fail("外挑位置与邻屋重叠")
	return {"ok":true}
static func route(house:Dictionary,data:Dictionary,entrance:Vector3)->Array[Vector3]:
	var local:Array[Vector3]=[Vector3(0,.25,.70),Vector3(-.46,.25,.62)]
	for i in range(1,7):local.append(Vector3(-.46,.25+float(i)*.85/6.,.56-float(i)*.96/6.))
	local.append(Vector3(-.46,1.1,-.60));local.append(Vector3(.46,1.1,-.60))
	for i in range(1,7):local.append(Vector3(.46,1.1+float(i)*.85/6.,-.56+float(i)*.96/6.))
	local.append(Vector3(.46,1.95,.68));local.append(Vector3(.46 if int(data.mode)==4 else 0.,1.95,.68));local.append(Vector3(.46 if int(data.mode)==4 else 0.,1.95,1.08))
	local.append(Vector3(.9 if int(data.mode)==4 else 0.,1.95,1.69 if int(data.mode)==4 else 1.76))
	var result:Array[Vector3]=[entrance]
	for point:Vector3 in local:result.append(world(house,data,point))
	return result

extends RefCounted
## Pure design-space hinge. The original integer room identities remain intact.
const LIMIT:=28.
const AXES:=[Vector2.RIGHT,Vector2.LEFT,Vector2.DOWN,Vector2.UP]
static func valid(value:Variant)->bool:return (value is int or value is float) and is_finite(float(value)) and absf(float(value))<=LIMIT
static func layout(house:Dictionary)->Dictionary:
	if preload("res://scripts/world/city_creation_ancient_extension_plan.gd").selected(house):return {}
	if house.has("signature") or house.get("style","")=="round_tower" or house.get("architecture","") in ["rotunda","peristyle","guildhall","venetian_loggia","belvedere_villa","iron_conservatory","twin_gable","pavilion","panorama"]:return {}
	var along_x:=true;var along_z:=true;var columns:Dictionary={};var top:=-1
	for cell:Dictionary in house.cells:
		if cell.kind!="room" or int(cell.level)>1:return {}
		along_x=along_x and int(cell.z)==0;along_z=along_z and int(cell.x)==0;top=maxi(top,int(cell.level))
	if not along_x and not along_z:return {}
	var axis:=Vector2.RIGHT if along_x else Vector2.DOWN
	for cell:Dictionary in house.cells:
		var key:=int(cell.x) if along_x else int(cell.z);columns[key]=int(columns.get(key,0))+1
	if columns.size()<2:return {}
	for count:int in columns.values():
		if count!=top+1:return {}
	var sign_value:=1. if columns.has(1) and columns.has(0) else -1. if columns.has(-1) and columns.has(0) else 0.
	if house.has("bend_axis"):
		axis=AXES[int(house.bend_axis)]
		if axis.x!=0. and not along_x or axis.y!=0. and not along_z:return {}
		sign_value=axis.x if along_x else axis.y;axis=Vector2.RIGHT if along_x else Vector2.DOWN
		if not columns.has(0) or not columns.has(int(sign_value)):return {}
	if sign_value==0.:return {}
	axis*=sign_value
	return {"axis":axis,"pivot":Vector2(house.origin[0],house.origin[1])+axis*.9,"floors":top+1}
static func axis_id(house:Dictionary)->int:return AXES.find(layout(house).axis)
static func angle(house:Dictionary)->float:
	var value:=float(house.get("bend_angle_deg",0.))
	return deg_to_rad(value) if not is_zero_approx(value) and not layout(house).is_empty() else 0.
static func wing(house:Dictionary,cell:Dictionary)->bool:
	var plan:=layout(house)
	return not plan.is_empty() and Vector2(cell.x,cell.z).dot(plan.axis)>=1.
static func cell_angle(house:Dictionary,cell:Dictionary)->float:
	var value:=angle(house)
	return value if not is_zero_approx(value) and wing(house,cell) else 0.
static func rotate(house:Dictionary,at:Vector2)->Vector2:
	var plan:=layout(house)
	return at if plan.is_empty() else Vector2(plan.pivot)+(at-Vector2(plan.pivot)).rotated(-angle(house))
static func point(house:Dictionary,at:Vector2)->Vector2:
	if is_zero_approx(angle(house)):return at
	var plan:=layout(house)
	return rotate(house,at) if (at-Vector2(plan.pivot)).dot(plan.axis)>.000001 else at
static func inverse(house:Dictionary,at:Vector2)->Vector2:
	if is_zero_approx(angle(house)):return at
	var plan:=layout(house);var candidate:Vector2=Vector2(plan.pivot)+(at-Vector2(plan.pivot)).rotated(angle(house))
	return candidate if (candidate-Vector2(plan.pivot)).dot(plan.axis)>.000001 else at
static func joint(house:Dictionary,cell:Dictionary,half:float=.9)->PackedVector2Array:
	if is_zero_approx(float(house.get("bend_angle_deg",0.))):return PackedVector2Array()
	var plan:=layout(house)
	if is_zero_approx(angle(house)) or plan.is_empty() or Vector2(cell.x,cell.z)!=Vector2.ZERO:return PackedVector2Array()
	var axis:Vector2=plan.axis;var across:=Vector2(-axis.y,axis.x);var center:=Vector2(house.origin[0],house.origin[1])
	var points:=PackedVector2Array()
	for side:Vector2 in [Vector2(-1,-1),Vector2(1,-1),Vector2(1,1),Vector2(-1,1)]:points.append(center+side*half)
	for side:float in [-1.,1.]:points.append(rotate(house,Vector2(plan.pivot)+across*half*side))
	var hull:=Geometry2D.convex_hull(points);hull.resize(hull.size()-1);return hull
static func key(house:Dictionary)->Array:return [house.get("bend_angle_deg",0.),layout(house)] if house.has("bend_angle_deg") else []

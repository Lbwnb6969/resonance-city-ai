extends RefCounted
## Read the actual pre-batch roof and occupied triangles in the house's design frame.
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func roof_part(part:MeshInstance3D)->bool:
	return part.get_meta("creation_detail_roof",false) or part.get_meta("creation_tiled_roof",false) or str(part.name).begins_with("GreekContinuousTileRoof") or str(part.name).begins_with("AncientLowTileRoof") or str(part.name)=="JoinedRoofSurface"
static func faces(parent:Node3D,roof:bool)->Array[Vector3]:
	var result:Array[Vector3]=[];var inverse:=parent.global_transform.affine_inverse()
	for mesh:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		if roof_part(mesh)!=roof:continue
		var transform:=inverse*mesh.global_transform
		for vertex:Vector3 in mesh.mesh.get_faces():result.append(transform*vertex)
	return result
static func height(surface:Array[Vector3],at:Vector2)->float:
	var y:=-INF
	for i in range(0,surface.size(),3):
		var a:=surface[i];var b:=surface[i+1];var c:=surface[i+2];var n:=(b-a).cross(c-a)
		if absf(n.y)<.000001:continue
		if Geometry2D.is_point_in_polygon(at,PackedVector2Array([Vector2(a.x,a.z),Vector2(b.x,b.z),Vector2(c.x,c.z)])):y=maxf(y,a.y-(n.x*(at.x-a.x)+n.z*(at.y-a.z))/n.y)
	return y
static func plan(city,parent:Node3D,house:Dictionary,diagnostics:Dictionary={})->Dictionary:
	if not Choice.dormer_supported(city,house):return {}
	var surface:=faces(parent,true)
	if surface.is_empty():diagnostics.no_roof_surface=true;return {}
	var occupied:=faces(parent,false);var ridges:=ridge_lines(surface);var top:=-1
	for cell:Dictionary in house.cells:
		if cell.kind=="room":top=maxi(top,int(cell.level))
	var rooms:Array=house.cells.filter(func(c):return c.kind=="room" and int(c.level)==top)
	rooms.sort_custom(func(a,b):return str(a.id).naturalnocasecmp_to(str(b.id))<0)
	var seed_value:int=Choice.record(house,"dormer").get("seed",posmod(hash([house.id,house.origin,"dormer/v1"]),2147483647))
	var offsets:Array[Vector2]=[Vector2(-.48,.48),Vector2(.48,.48),Vector2(-.48,-.48),Vector2(.48,-.48),Vector2(.9,-.48),Vector2(.9,.48),Vector2(-.9,-.48),Vector2(-.9,.48),Vector2(-.48,.9),Vector2(.48,.9),Vector2(-.48,-.9),Vector2(.48,-.9),Vector2(-.48,0),Vector2(.48,0),Vector2(0,-.48),Vector2(0,.48),Vector2(-.62,.48),Vector2(.62,.48),Vector2(-.62,-.48),Vector2(.62,-.48),Vector2(-.48,.62),Vector2(.48,.62),Vector2(-.48,-.62),Vector2(.48,-.62)]
	for room:Dictionary in rooms:
		for index in range(offsets.size()):
			var at:=Vector2(house.origin[0]+room.x*1.8,house.origin[1]+room.z*1.8)+offsets[posmod(index+seed_value,4) if index<4 else index]
			var footprint:=Rect2(at-Vector2(.38,.40),Vector2(.76,.80));var low:=INF;var high:=-INF;var supported:=true
			if not clear_ridges(ridges,footprint):diagnostics.ridge_intersection=true;continue
			for x in range(11):
				for z in range(11):
					var y:=height(surface,footprint.position+Vector2(x*.076,z*.08))
					if not is_finite(y):supported=false;break
					low=minf(low,y);high=maxf(high,y)
				if not supported:break
			if not supported:diagnostics.roof_support_missing=true;continue
			if high-low>.55:diagnostics.roof_too_steep=true;continue
			if blocked(occupied,footprint,low+.025,high+.62):diagnostics.roof_obstructed=true;continue
			if foreign_blocked(city,house,footprint,low+.025,high+.62):diagnostics.neighbor_obstructed=true;continue
			return {"version":1,"cell_id":str(room.id),"at":at,"low":low,"high":high,"footprint":footprint,"samples":121,"ridges_checked":ridges.size()}
	return {}
static func ridge_lines(surface:Array[Vector3])->Array:
	var edges:Dictionary={};var ridges:Dictionary={}
	for i in range(0,surface.size(),3):
		var a:=surface[i];var b:=surface[i+1];var c:=surface[i+2];var n:=(b-a).cross(c-a)
		if absf(n.y)<.000001:continue
		var direction:=Vector2(n.x,n.z)*(1. if n.y>0. else -1.)
		if direction.length_squared()<.000001:continue
		direction=direction.normalized()
		for pair:Array in [[a,b],[b,c],[c,a]]:
			var p:=Vector3(pair[0]);var q:=Vector3(pair[1]);var first:=str(Vector3i(roundi(p.x*10000.),roundi(p.y*10000.),roundi(p.z*10000.)));var last:=str(Vector3i(roundi(q.x*10000.),roundi(q.y*10000.),roundi(q.z*10000.)))
			var key:=first+"|"+last if first<last else last+"|"+first
			var directions:Array=edges.get(key,[])
			if directions.any(func(old):return old.dot(direction)<.95):ridges[key]=[Vector2(p.x,p.z),Vector2(q.x,q.z)]
			directions.append(direction);edges[key]=directions
	return ridges.values()
static func clear_ridges(ridges:Array,footprint:Rect2)->bool:
	return not ridges.any(func(edge):return Frame.segment(footprint.grow(.01),edge[0],edge[1]))
static func foreign_blocked(city,house:Dictionary,footprint:Rect2,low:float,high:float)->bool:
	for other:Dictionary in city.houses:
		if str(other.id)==str(house.id):continue
		for cell:Dictionary in other.cells:
			var bottom:=float(other.get("base_y",0.))+int(cell.level)*1.7
			if bottom>=high or bottom+1.7<=low:continue
			var points:=PackedVector2Array()
			for p:Vector2 in Frame.corners(Frame.footprint(other,cell)):points.append(Frame.inverse(house,p))
			if Frame.boxes_overlap(footprint,{"polygon":points}):return true
	return false
static func foreign_signature(city,house:Dictionary)->Array:
	var result:Array=[]
	var trim:bool=not Choice.trim(house).is_empty() and Choice.trim_supported(city,house)
	if not (not Choice.dormer(house).is_empty() and Choice.dormer_supported(city,house)) and not Choice.chimney_active(city,house) and not trim:return result
	var region:=Frame.house_bounds(house).grow(.28 if trim else .1)
	for other:Dictionary in city.houses:
		if str(other.id)==str(house.id) or not region.intersects(Frame.house_bounds(other),true):continue
		for cell:Dictionary in other.cells:result.append([other.id,cell.id,Frame.footprint(other,cell),float(other.get("base_y",0.))+int(cell.level)*1.7])
	return result
static func clip_y(poly:Array[Vector3],plane:float,above:bool)->Array[Vector3]:
	var result:Array[Vector3]=[]
	for i in range(poly.size()):
		var a:=poly[i];var b:=poly[(i+1)%poly.size()];var a_in:bool=a.y>=plane if above else a.y<=plane;var b_in:bool=b.y>=plane if above else b.y<=plane
		if a_in:result.append(a)
		if a_in!=b_in:result.append(a.lerp(b,(plane-a.y)/(b.y-a.y)))
	return result
static func blocked(occupied:Array[Vector3],footprint:Rect2,low:float,high:float)->bool:
	for i in range(0,occupied.size(),3):
		var tri:Array[Vector3]=[occupied[i],occupied[i+1],occupied[i+2]]
		tri=clip_y(clip_y(tri,low,true),high,false)
		if tri.is_empty():continue
		var polygon:=PackedVector2Array()
		for v:Vector3 in tri:polygon.append(Vector2(v.x,v.z))
		for p:Vector2 in polygon:
			if footprint.has_point(p):return true
		if Geometry2D.is_point_in_polygon(footprint.get_center(),polygon):return true
		for edge in range(polygon.size()):
			if Frame.segment(footprint,polygon[edge],polygon[(edge+1)%polygon.size()]):return true
	return false

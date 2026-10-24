extends RefCounted
## Saved yaw is Godot's Y rotation. All 2D points use X/Z, hence -yaw.
static func yaw(house:Dictionary)->float:return float(house.get("yaw",0.))
static func origin(house:Dictionary)->Vector2:return Vector2(house.origin[0],house.origin[1])
static func point(house:Dictionary,design:Vector2)->Vector2:
	return design if is_zero_approx(yaw(house)) else origin(house)+(design-origin(house)).rotated(-yaw(house))
static func inverse(house:Dictionary,world:Vector2)->Vector2:
	return world if is_zero_approx(yaw(house)) else origin(house)+(world-origin(house)).rotated(yaw(house))
static func direction(house:Dictionary,side:Vector2)->Vector2:return side.rotated(-yaw(house))
static func center(house:Dictionary,cell:Dictionary)->Vector2:return point(house,origin(house)+Vector2(cell.x,cell.z)*1.8)
static func zero(house:Dictionary)->Dictionary:
	var result:=house.duplicate(false);result.erase("yaw");return result
static func points_local(house:Dictionary,points:Array)->Array:
	var result:Array=[]
	for p:Array in points:var at:=inverse(house,Vector2(p[0],p[1]));result.append([at.x,at.y])
	return result
static func normal(entry:Dictionary)->Vector2:return Vector2(entry.get("outward",entry.side))
static func footprint(house:Dictionary,cell:Dictionary,margin:float=0.)->Variant:
	var at:=center(house,cell)
	if is_zero_approx(yaw(house)):return Rect2(at-Vector2.ONE*.9,Vector2.ONE*1.8).grow(margin)
	return {"center":at,"angle":yaw(house),"half":Vector2.ONE*(.9+margin)}
static func grow(box:Variant,margin:float)->Variant:
	if box is Rect2:return box.grow(margin)
	var result:Dictionary=box.duplicate();result.half+=Vector2.ONE*margin;return result
static func corners(box:Variant)->PackedVector2Array:
	if box is Rect2:return PackedVector2Array([box.position,Vector2(box.end.x,box.position.y),box.end,Vector2(box.position.x,box.end.y)])
	var result:=PackedVector2Array()
	for side:Vector2 in [Vector2(-1,-1),Vector2(1,-1),Vector2(1,1),Vector2(-1,1)]:result.append(Vector2(box.center)+(side*Vector2(box.half)).rotated(-float(box.angle)))
	return result
static func bounds(box:Variant)->Rect2:
	if box is Rect2:return box
	var poly:=corners(box);var result:=Rect2(poly[0],Vector2.ZERO)
	for p:Vector2 in poly:result=result.expand(p)
	return result
static func local_point(box:Variant,at:Vector2)->Vector2:
	return at if box is Rect2 else (at-Vector2(box.center)).rotated(float(box.angle))
static func rect(box:Variant)->Rect2:return box if box is Rect2 else Rect2(-Vector2(box.half),Vector2(box.half)*2.)
static func contains(box:Variant,at:Vector2)->bool:return rect(box).has_point(local_point(box,at))
static func distance(box:Variant,at:Vector2)->float:
	var p:=local_point(box,at);var r:=rect(box)
	return Vector2(maxf(maxf(r.position.x-p.x,p.x-r.end.x),0.),maxf(maxf(r.position.y-p.y,p.y-r.end.y),0.)).length()
static func segment(box:Variant,a:Vector2,b:Vector2)->bool:
	a=local_point(box,a);b=local_point(box,b);var r:=rect(box)
	if r.has_point(a) or r.has_point(b):return true
	var poly:=corners(r)
	for i in range(4):
		if Geometry2D.segment_intersects_segment(a,b,poly[i],poly[(i+1)%4])!=null:return true
	return false
static func stroke_hits(house:Dictionary,cell:Dictionary,points:Array,radius:float)->bool:
	var box:Variant=footprint(house,cell);var poly:=corners(box)
	for i in range(maxi(1,points.size()-1)):
		var a:=Vector2(points[i][0],points[i][1]);var b:=Vector2(points[mini(i+1,points.size()-1)][0],points[mini(i+1,points.size()-1)][1])
		if segment(box,a,b) or distance(box,a)<=radius or distance(box,b)<=radius:return true
		for p:Vector2 in poly:
			if p.distance_to(Geometry2D.get_closest_point_to_segment(p,a,b))<=radius:return true
	return false
static func overlaps(first:Dictionary,second:Dictionary)->bool:
	for a:Dictionary in first.cells:
		for b:Dictionary in second.cells:
			if int(a.level)!=int(b.level):continue
			var pa:=corners(footprint(first,a));var pb:=corners(footprint(second,b));var separated:=false
			for angle:float in [yaw(first),yaw(first)+PI*.5,yaw(second),yaw(second)+PI*.5]:
				var axis:=Vector2.from_angle(-angle);var amin:=INF;var amax:=-INF;var bmin:=INF;var bmax:=-INF
				for p:Vector2 in pa:amin=minf(amin,p.dot(axis));amax=maxf(amax,p.dot(axis))
				for p:Vector2 in pb:bmin=minf(bmin,p.dot(axis));bmax=maxf(bmax,p.dot(axis))
				if minf(amax,bmax)-maxf(amin,bmin)<=.001:separated=true;break
			if not separated:return true
	return false
static func apply(root:Node3D,house:Dictionary)->void:
	if not root.has_meta("design_transform"):root.set_meta("design_transform",root.transform)
	var at:=origin(house);var pivot:=Vector3(at.x,0,at.y);var basis:=Basis(Vector3.UP,yaw(house))
	root.transform=Transform3D(basis,pivot-basis*pivot)*Transform3D(root.get_meta("design_transform"))
	root.set_meta("house_yaw",yaw(house))
static func world3(house:Dictionary,design:Vector3)->Vector3:
	var at:=point(house,Vector2(design.x,design.z));return Vector3(at.x,design.y,at.y)
static func design3(house:Dictionary,world:Vector3)->Vector3:
	var at:=inverse(house,Vector2(world.x,world.z));return Vector3(at.x,world.y,at.y)

static func design_normal(house:Dictionary,normal:Vector3)->Vector3:return Basis(Vector3.UP,-yaw(house))*normal

static func box_center(box:Variant)->Vector2:return box.get_center() if box is Rect2 else Vector2(box.center)
static func sample(box:Variant,t:Vector2)->Vector2:
	if box is Rect2:return box.position+box.size*t
	return Vector2(box.center)+((t*2.-Vector2.ONE)*Vector2(box.half)).rotated(-float(box.angle))
static func boxes_overlap(a:Variant,b:Variant)->bool:
	if a is Rect2 and b is Rect2:return a.intersects(b)
	var pa:=corners(a);var pb:=corners(b)
	for poly:PackedVector2Array in [pa,pb]:
		for i in range(2):
			var edge:Vector2=poly[i+1]-poly[i];var axis:=Vector2(-edge.y,edge.x).normalized();var amin:=INF;var amax:=-INF;var bmin:=INF;var bmax:=-INF
			for p:Vector2 in pa:amin=minf(amin,p.dot(axis));amax=maxf(amax,p.dot(axis))
			for p:Vector2 in pb:bmin=minf(bmin,p.dot(axis));bmax=maxf(bmax,p.dot(axis))
			if minf(amax,bmax)-maxf(amin,bmin)<=.000001:return false
	return true

extends RefCounted
## Real holes through the 130mm facade shell; room physics and entrances stay authored.
const Rhythm=preload("res://scripts/visual/city_creation_street_rhythm.gd")
const HALF:=.065
static func shell(r,job,frame,wall:Node3D,direction:Vector2i,width:float,center:Vector3)->bool:
	if not r.Classical.Ancient.active(job.house,job.era) or width<1.4 or not center.is_zero_approx():return false
	var door:bool=frame.level==0 and job.doors.has([str(frame.cell.id),direction])
	var holes:Array=[]
	if door:holes.append({"x":0.,"radius":.25,"bottom":.18,"spring":1.32,"arched":false})
	else:
		var rhythm:=Rhythm.opening(r,job.house,frame.cell,wall);wall.set_meta("street_openings",rhythm)
		for x:float in rhythm.positions:holes.append({"x":x,"radius":float(rhythm.radius),"bottom":.60,"spring":.99,"arched":true})
	var plan:={"version":1,"door":door,"width":width,"height":1.7,"holes":holes,"thickness":HALF*2.}
	var mesh:MeshInstance3D=r._triangles(wall,faces(plan),job.palette[0]);mesh.material_override=job.walls;mesh.name="RecessedFacadeShell"
	if job.style=="stone":r._stone_arch_surface(mesh,job.walls)
	wall.set_meta("recessed_facade",plan)
	return true
static func outline(hole:Dictionary)->PackedVector2Array:
	var x:float=hole.x;var radius:float=hole.radius;var low:float=hole.bottom;var spring:float=hole.spring
	var points:=PackedVector2Array([Vector2(x-radius,low),Vector2(x+radius,low),Vector2(x+radius,spring)])
	if hole.arched:
		for i in range(1,13):points.append(Vector2(x+radius*cos(PI*i/12.),spring+radius*sin(PI*i/12.)))
	else:points.append(Vector2(x-radius,spring))
	return points
static func top(hole:Dictionary,x:float)->float:
	if not hole.arched:return hole.spring
	var points:=outline(hole)
	for i in range(2,points.size()-1):
		var a:=points[i];var b:=points[i+1]
		if x>=b.x-.00001 and x<=a.x+.00001:return lerpf(a.y,b.y,clampf((a.x-x)/(a.x-b.x),0.,1.))
	return hole.spring
static func band(out:Array[Vector3],x0:float,x1:float,low0:float,low1:float,high0:float,high1:float)->void:
	if maxf(high0-low0,high1-low1)<.00001:return
	var a:=Vector3(x0,low0,HALF);var b:=Vector3(x1,low1,HALF);var c:=Vector3(x1,high1,HALF);var d:=Vector3(x0,high0,HALF)
	out.append_array([a,b,c,a,c,d])
	for p:Vector3 in [a,c,b,a,d,c]:out.append(Vector3(p.x,p.y,-HALF))
static func edge(out:Array[Vector3],a:Vector2,b:Vector2)->void:
	var p:=Vector3(a.x,a.y,-HALF);var q:=Vector3(b.x,b.y,-HALF);var u:=Vector3(a.x,a.y,HALF);var v:=Vector3(b.x,b.y,HALF)
	out.append_array([p,q,v,p,v,u])
static func faces(plan:Dictionary)->Array[Vector3]:
	var out:Array[Vector3]=[];var xs:Array=[-float(plan.width)*.5,float(plan.width)*.5]
	for hole:Dictionary in plan.holes:
		for p:Vector2 in outline(hole):
			if not xs.any(func(x):return absf(float(x)-p.x)<.000001):xs.append(p.x)
	xs.sort()
	for i in range(xs.size()-1):
		var x0:float=xs[i];var x1:float=xs[i+1];var middle:float=(x0+x1)*.5;var selected:Dictionary={}
		for hole:Dictionary in plan.holes:
			if absf(middle-float(hole.x))<float(hole.radius):selected=hole;break
		if selected.is_empty():band(out,x0,x1,0.,0.,plan.height,plan.height)
		else:
			band(out,x0,x1,0.,0.,selected.bottom,selected.bottom)
			band(out,x0,x1,top(selected,x0),top(selected,x1),plan.height,plan.height)
	var outer:=PackedVector2Array([Vector2(-plan.width*.5,0),Vector2(plan.width*.5,0),Vector2(plan.width*.5,plan.height),Vector2(-plan.width*.5,plan.height)])
	for i in range(outer.size()):edge(out,outer[i],outer[(i+1)%outer.size()])
	for hole:Dictionary in plan.holes:
		var points:=outline(hole)
		for i in range(points.size()):edge(out,points[(i+1)%points.size()],points[i])
	return out

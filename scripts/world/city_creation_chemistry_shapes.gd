extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Thin semantic outlines derived from the production plans, in world metres.
const Bridge = preload("res://scripts/world/city_creation_bridge_plan.gd")
static func row(kind: String, label: String, lines: Array, at: Vector3) -> Dictionary:
	return {"kind":kind,"label":label,"lines":lines,"at":at}
static func circle(at: Vector3, radius: float) -> Array[Vector3]:
	var points: Array[Vector3] = []
	for i in range(33): points.append(at+Vector3(cos(i*TAU/32.),0,sin(i*TAU/32.))*radius)
	return points
static func court(plan: Dictionary) -> Dictionary:
	var at: Vector2 = plan.fountain.at; var center := Vector3(at.x,float(plan.base_y)+.15,at.y)
	return row("courtyard","围院清泉",[circle(center,.73),circle(center+Vector3.UP*.3,.38)],center+Vector3.UP*.65)
static func arcade(house: Dictionary, face: Dictionary) -> Dictionary:
	var cell := {}
	for item: Dictionary in house.cells:
		if item.id == face.cell_id: cell = item; break
	var normal:=Basis(Vector3.UP,Frame.yaw(house))*Vector3(face.side.x,0,face.side.y); var tangent := Vector3(normal.z,0,-normal.x)
	var center := Frame.world3(house,Vector3(float(house.origin[0])+cell.x*1.8,float(house.get("base_y",0.)),float(house.origin[1])+cell.z*1.8))+normal*.94
	var arch: Array[Vector3] = [center-tangent*.72+Vector3.UP*.1,center-tangent*.72+Vector3.UP*.91]
	for i in range(17):
		var angle := PI-float(i)*PI/16.; arch.append(center+tangent*cos(angle)*.72+Vector3.UP*(.91+sin(angle)*.63))
	arch.append(center+tangent*.72+Vector3.UP*.1)
	return row("arcade","临街连拱",[arch],center+Vector3.UP*1.83)
static func glass(plan: Dictionary) -> Dictionary:
	var box: Rect2 = plan.bounds; var lines: Array = []; var center: Vector2 = plan.center
	for fraction: float in [0.08,.5,.92]:
		var rib: Array[Vector3] = []
		for i in range(17):
			var angle := PI-float(i)*PI/16.; var across := cos(angle)
			var at := Vector2(lerpf(box.position.x,box.end.x,fraction),center.y+across*box.size.y*.46) if plan.axis=="x" else Vector2(center.x+across*box.size.x*.46,lerpf(box.position.y,box.end.y,fraction))
			rib.append(Vector3(at.x,float(plan.base_y)+.6+sin(angle)*1.1,at.y))
		lines.append(rib)
	return row("conservatory","连格玻璃花房",lines,Vector3(center.x,float(plan.roof_top_y)+.25,center.y))
static func skybridge(plan: Dictionary) -> Dictionary:
	var a := Vector3(plan.a.x,plan.floor_y,plan.a.y); var b := Vector3(plan.b.x,plan.floor_y,plan.b.y)
	var across := Vector3(-(b-a).z,0,(b-a).x).normalized()*float(plan.width)*.5
	return row("skybridge","空中和鸣",[[a-across,b-across,b+across,a+across,a-across],[a-across+Vector3.UP*1.3,b-across+Vector3.UP*1.3,b+across+Vector3.UP*1.3,a+across+Vector3.UP*1.3,a-across+Vector3.UP*1.3]],(a+b)*.5+Vector3.UP*1.6)
static func bridge(plan: Dictionary) -> Dictionary:
	var lines: Array = []
	for side: float in [-1.,1.]:
		for span in range(2):
			var arch: Array[Vector3] = []
			for i in range(17):
				var t := float(i)/16.; var p := Bridge._point(plan.samples,lerpf(plan.start,plan.end,(span+t)*.5))
				var at: Vector2 = p.at+Vector2(-p.tangent.y,p.tangent.x)*float(plan.width)*side*.5
				arch.append(Vector3(at.x,float(plan.deck_y)-.9+sin(t*PI)*.75,at.y))
			lines.append(arch)
	var center: Vector2 = Bridge._point(plan.samples,(plan.start+plan.end)*.5).at
	return row("bridge","双孔石拱桥",lines,Vector3(center.x,float(plan.deck_y)+.8,center.y))
static func stairs(treads: Array) -> Dictionary:
	var lines: Array = []
	for tread: Dictionary in treads:
		var a: Vector2 = tread.a; var b: Vector2 = tread.b; var normal := Vector2(-(b-a).y,(b-a).x).normalized()*.55
		lines.append([Vector3(a.x-normal.x,tread.y+.04,a.y-normal.y),Vector3(a.x+normal.x,tread.y+.04,a.y+normal.y)])
	var mid: Dictionary = treads[treads.size()/2]
	return row("stairs","跨阶石琴",lines,Vector3(mid.a.x,mid.y+.65,mid.a.y))

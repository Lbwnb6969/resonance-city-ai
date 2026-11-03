extends RefCounted
const Sites=preload("res://scripts/visual/city_creation_chimney_sites.gd")
const Choice=Sites.Choice
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func build(r,parent:Node3D,house:Dictionary,palette:Array)->void:
	if not Choice.chimney_active(r.state,house):return
	var key:=Choice.chimney(house);parent.set_meta("chimneys",[]);parent.set_meta("chimney_detail",{"version":1,"id":key,"active":false})
	if key=="off":return
	var diagnostics:Dictionary={};var site:=Sites.plan(r.state,parent,house,diagnostics)
	if site.is_empty():parent.set_meta("chimney_detail",{"id":key,"active":false,"dormant_reason":"roof_site_unavailable","rejected":diagnostics});return
	var node:=Node3D.new();node.name="ChimneyDetail_"+key;parent.add_child(node);node.position=Vector3(site.at.x,site.low-.025,site.at.y)
	var brick:=Wall.component(r,palette[0].darkened(.06),Wall.Kind.STONE);var stone:=Wall.component(r,palette[0].lightened(.045),Wall.Kind.STONE);var clay:=Wall.component(r,palette[1],Wall.Kind.TERRACOTTA)
	var top:float=site.high-site.low+.025+.50
	for x:float in [-.135,.135]:r._box(node,Vector3(.04,top,.27),Vector3(x,top*.5,0),brick)
	for z:float in [-.115,.115]:r._box(node,Vector3(.23,top,.04),Vector3(0,top*.5,z),brick)
	var outlets:Array[Vector3]=[]
	if key=="brick_twin_pots":
		for side:float in [-1.,1.]:
			var center:=Vector2(side*.075,0);var half:=Rect2(-.18 if side<0 else 0.,-.17,.18,.34)
			var cap:MeshInstance3D=r._roof_surface(node,ring(center,.034,half,top,top+.055),palette[0].lightened(.045));cap.material_override=stone;cap.name="TwinPotStoneCap"
			var pot:MeshInstance3D=r._roof_surface(node,ring(center,.034,Rect2(),top+.04,top+.25,.052),palette[1]);pot.material_override=clay;pot.name="HollowTerracottaPot"
			outlets.append(Vector3(center.x,top+.26,0))
	else:
		var copper:=Wall.component(r,Color("6a8877"),Wall.Kind.METAL)
		var collar:MeshInstance3D=r._roof_surface(node,ring(Vector2.ZERO,.085,Rect2(-.17,-.16,.34,.32),top,top+.035),palette[0].lightened(.045));collar.material_override=stone
		for x:float in [-.13,.13]:
			for z:float in [-.12,.12]:r._box(node,Vector3(.025,.22,.025),Vector3(x,top+.145,z),copper)
		var cover:MeshInstance3D=r._roof_surface(node,hood(top+.25,top+.40),Color("6a8877"));cover.material_override=copper;cover.name="CopperVentHood"
		outlets.append(Vector3(.24,top+.13,0))
	var body:=StaticBody3D.new();body.name="ChimneyPick";node.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",site.cell_id);body.set_meta("chimney_detail",key)
	for cell:Dictionary in house.cells:
		if str(cell.id)==site.cell_id:body.set_meta("cell",cell.duplicate(true));break
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		mesh.visibility_range_end=64.
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(mesh.mesh.get_faces());var collider:=CollisionShape3D.new();collider.shape=shape;collider.transform=node.global_transform.affine_inverse()*mesh.global_transform;body.add_child(collider)
	var points:Array[Vector3]=[]
	for point:Vector3 in outlets:points.append(node.transform*point)
	node.set_meta("chimney_detail",site.merged({"id":key,"outlets":outlets,"top":top}));parent.set_meta("chimneys",points);parent.set_meta("chimney_detail",{"version":1,"id":key,"active":true,"site":site,"outlets":points})
static func quad(out:Array[Vector3],a:Vector3,b:Vector3,c:Vector3,d:Vector3)->void:out.append_array([a,b,c,a,c,d])
static func ring(center:Vector2,inside:float,rect:Rect2,low:float,high:float,outside:float=0.)->Array[Vector3]:
	var result:Array[Vector3]=[]
	for i in range(20):
		var inner:Array[Vector2]=[];var outer:Array[Vector2]=[]
		for angle:float in [i*TAU/20.,(i+1)*TAU/20.]:
			var direction:=Vector2(sin(angle),cos(angle));var radius:=outside
			if radius==0.:
				var tx:float=(rect.end.x-center.x)/direction.x if direction.x>.000001 else (rect.position.x-center.x)/direction.x if direction.x<-.000001 else INF
				var tz:float=(rect.end.y-center.y)/direction.y if direction.y>.000001 else (rect.position.y-center.y)/direction.y if direction.y<-.000001 else INF;radius=minf(tx,tz)
			inner.append(center+direction*inside);outer.append(center+direction*radius)
		var a:=Vector3(outer[0].x,low,outer[0].y);var b:=Vector3(outer[1].x,low,outer[1].y);var c:=Vector3(inner[0].x,low,inner[0].y);var d:=Vector3(inner[1].x,low,inner[1].y);var up:=Vector3(0,high-low,0)
		quad(result,a,b,b+up,a+up);quad(result,c,c+up,d+up,d);quad(result,a+up,b+up,d+up,c+up);quad(result,a,c,d,b)
	return result
static func hood(eave:float,peak:float)->Array[Vector3]:
	var result:Array[Vector3]=[];var corners:Array[Vector3]=[Vector3(-.22,eave,-.22),Vector3(.22,eave,-.22),Vector3(.22,eave,.22),Vector3(-.22,eave,.22)];var tip:=Vector3(0,peak,0);var down:=Vector3(0,.025,0)
	for i in range(4):
		var a:=corners[i];var b:=corners[(i+1)%4];result.append_array([a,tip,b,b-down,tip-down,a-down]);quad(result,a,b,b-down,a-down)
	return result

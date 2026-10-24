extends RefCounted
## Metric roof parts share the established wall/AO, glazing and frame builders.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Frame=preload("res://scripts/visual/city_creation_conservatory.gd")
static func material(r,color:Color,kind:int)->Material:
	var key:="clockwork_prototype/%s/%d"%[str(color),kind]
	if not r.materials.has(key):r.materials[key]=Wall.source(color,null,"component",kind)
	return r.materials[key]
static func beam(r,parent:Node3D,a:Vector3,b:Vector3,width:float,mat:Material)->void:
	Frame._beam(r,parent,a,b,width,mat)
static func face(r,parent:Node3D,points:Array,mat:Material,name:String)->MeshInstance3D:
	# Roof sheets face the sky; vertical end cheeks face away from the roof centre.
	var outward:Array=[]
	for i in range(0,points.size(),3):
		var a:Vector3=points[i];var b:Vector3=points[i+1];var c:Vector3=points[i+2]
		var normal:Vector3=(b-a).cross(c-a);var center:Vector3=(a+b+c)/3.
		var flip:bool=normal.y<0. if absf(normal.y)>.001 else normal.dot(Vector3(center.x,0,center.z))<0.
		outward.append_array([a,c,b] if flip else [a,b,c])
	points=outward
	var mesh:MeshInstance3D=r._triangles(parent,points,Color.WHITE);mesh.material_override=mat;mesh.name=name
	if mat is ShaderMaterial:mesh.set_meta("creation_live_visual",true);mesh.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	return mesh
static func quad(r,parent:Node3D,a:Vector3,b:Vector3,c:Vector3,d:Vector3,mat:Material,name:String)->void:
	face(r,parent,[a,b,c,a,c,d],mat,name)
static func arch(r,parent:Node3D,z:float,bottom:float,radius:float,rise:float,mat:Material,width:float=.055)->void:
	for i in range(14):
		var a:=PI*float(i)/14.;var b:=PI*float(i+1)/14.
		beam(r,parent,Vector3(cos(a)*radius,bottom+sin(a)*rise,z),Vector3(cos(b)*radius,bottom+sin(b)*rise,z),width,mat)
static func dial(r,parent:Node3D,angle:float,stone:Material,dark:Material,copper:Material)->void:
	var frame:=Node3D.new();parent.add_child(frame);frame.name="RomanClockFace_%d"%roundi(angle*2./PI);frame.rotation.y=angle
	frame.position=Vector3(sin(angle)*.555,.89,cos(angle)*.555)
	var disc:MeshInstance3D=r._cylinder(frame,.225,.225,.035,Vector3.ZERO,stone,24);disc.rotation.x=PI*.5
	for i in range(12):
		var theta:=TAU*float(i)/12.;var center:=Vector3(sin(theta)*.186,cos(theta)*.186,.023)
		beam(r,frame,center*.95,Vector3(center.x*1.07,center.y*1.07,.023),.008,copper)
	for row:Array in [["XII",Vector2(0,.143)],["III",Vector2(.15,0)],["VI",Vector2(0,-.15)],["IX",Vector2(-.15,0)]]:
		var text:String=row[0];var offset:Vector2=row[1]
		for index in range(text.length()):
			var x:float=offset.x+(float(index)-float(text.length()-1)*.5)*.023
			var y:float=offset.y;var strokes:Array=[]
			if text[index]=="I":strokes=[[Vector2(x,y-.022),Vector2(x,y+.022)]]
			elif text[index]=="V":strokes=[[Vector2(x-.009,y+.022),Vector2(x,y-.022)],[Vector2(x,y-.022),Vector2(x+.009,y+.022)]]
			else:strokes=[[Vector2(x-.009,y-.022),Vector2(x+.009,y+.022)],[Vector2(x-.009,y+.022),Vector2(x+.009,y-.022)]]
			for stroke:Array in strokes:beam(r,frame,Vector3(stroke[0].x,stroke[0].y,.027),Vector3(stroke[1].x,stroke[1].y,.027),.005,dark)
	beam(r,frame,Vector3(0,0,.04),Vector3(.09,.08,.04),.013,dark)
	beam(r,frame,Vector3(0,0,.044),Vector3(-.045,.14,.044),.009,dark)
	r._cylinder(frame,.02,.02,.025,Vector3(0,0,.04),copper,8).rotation.x=PI*.5

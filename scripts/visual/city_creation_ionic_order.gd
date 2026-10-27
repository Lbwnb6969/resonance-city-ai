extends RefCounted
## Attic bases, tapered 24-flute shafts and solid paired spiral volutes.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Arch=preload("res://scripts/visual/city_creation_architecture.gd")
static func column(r,parent:Node3D,at:Vector3,height:float,radius:float,stone:Material)->void:
	var node:=Node3D.new();node.name="IonicColumn";node.position=at;parent.add_child(node)
	r._box(node,Vector3(radius*2.8,.07,radius*2.8),Vector3(0,.035,0),stone).name="IonicPlinth"
	for ring:Vector3 in [Vector3(1.25,.055,.10),Vector3(1.05,.035,.145),Vector3(1.18,.045,.185)]:
		r._cylinder(node,radius*ring.x,radius*ring.x,ring.y,Vector3(0,ring.z,0),stone,24).name="IonicAtticBase"
	var faces:Array[Vector3]=[]
	for level in range(4):
		for sector in range(48):
			var quad:Array[Vector3]=[]
			for ij:Vector2i in [Vector2i(sector,level),Vector2i(sector+1,level),Vector2i(sector+1,level+1),Vector2i(sector,level+1)]:
				var t:=ij.y/4.;var angle:=TAU*ij.x/48.;var rad:=radius*(1.-.18*t+.04*sin(PI*t))*(1.-.07*cos(angle*24.))
				quad.append(Vector3(cos(angle)*rad,.20+t*(height-.43),sin(angle)*rad))
			faces.append_array([quad[0],quad[2],quad[1],quad[0],quad[3],quad[2]])
	var shaft:MeshInstance3D=r._triangles(node,faces,stone.albedo_color);shaft.material_override=stone;shaft.name="IonicFlutedShaft"
	r._box(node,Vector3(radius*3.8,.065,radius*2.5),Vector3(0,height-.02,0),stone).name="IonicAbacus"
	for side:float in [-1.,1.]:
		var scroll_faces:Array[Vector3]=[]
		for segment in range(28):
			var polygon:=PackedVector2Array()
			for step:Vector2 in [Vector2(segment,1),Vector2(segment+1,1),Vector2(segment+1,-1),Vector2(segment,-1)]:
				var t:=step.x/28.;var angle:=t*TAU*1.35;var rad:=radius*(.82*(1.-t)+.12)+step.y*.008
				polygon.append(Vector2(side*radius*1.12+side*cos(angle)*rad,height-.12+sin(angle)*rad))
			scroll_faces.append_array(Arch._extrude(polygon,radius*1.9))
		var scroll:MeshInstance3D=r._triangles(node,scroll_faces,stone.albedo_color);scroll.material_override=stone;scroll.name="IonicSpiralVolute"

extends RefCounted
const Meshes=preload("res://scripts/visual/city_creation_ancient_civic_mesh.gd")
const Ionic=preload("res://scripts/visual/city_creation_ionic_order.gd")
static func node(parent:Node3D,house:Dictionary,plan:Dictionary,label:String)->Node3D:
	var result:=Node3D.new();result.name=label;parent.add_child(result);result.position=Vector3(plan.center.x,float(house.get("base_y",0.)),plan.center.y);return result
static func roof(r,parent:Node3D,house:Dictionary,palette:Array,p:Dictionary)->void:
	var root:=node(parent,house,p,"IonicStoaRoof");var half:float=p.width*.5+.14;var back:float=-p.depth*.5-.12;var front:float=p.depth*.5+.84
	var eave:float=p.height+.12;var ridge:float=eave+minf(.65,p.depth*.25);var faces:Array[Vector3]=[]
	for side:float in [-1.,1.]:
		var edge:=back if side<0. else front
		var a:=Vector3(-half,eave,edge);var b:=Vector3(half,eave,edge);var c:=Vector3(half,ridge,0);var d:=Vector3(-half,ridge,0)
		faces.append_array([a,b,c,a,c,d] if side>0. else [a,c,b,a,d,c])
	Meshes.roof(r,root,faces,palette[1],"IonicContinuousTileRoof",0,ridge)
	for side:float in [-1.,1.]:Meshes.gable(r,root,PackedVector2Array([Vector2(back,eave),Vector2(front,eave),Vector2(0,ridge)]),Vector3(side*half,0,0),palette[0],-PI*.5)
	Meshes.pick(root,house);parent.set_meta("ancient_roof_patches",1)
static func build(r,parent:Node3D,house:Dictionary,palette:Array,p:Dictionary)->void:
	var root:=node(parent,house,p,"IonicStoaColonnade");var mat:=Meshes.stone(palette[0]);var half:float=p.width*.5;var front:float=p.depth*.5+.58
	var count:=maxi(2,ceili(p.width/1.2)+1)
	for floor_index in range(int(p.floors)):
		var base:=floor_index*1.7
		for i in range(count):
			var x:=lerpf(-half+.20,half-.20,float(i)/(count-1))
			Ionic.column(r,root,Vector3(x,base+.10,front),1.49,.105,mat)
		r._box(root,Vector3(p.width+.12,.14,.32),Vector3(0,base+1.67,front),mat).name="IonicContinuousEntablature"
		r._box(root,Vector3(p.width+.25,.075,.40),Vector3(0,base+1.77,front),mat).name="IonicDentilCornice"
		for i in range(int(p.width/.20)):
			r._box(root,Vector3(.07,.065,.09),Vector3(-half+.10+i*.20,base+1.70,front+.20),mat).name="IonicDentil"
		r._box(root,Vector3(p.width+.12,.10,.82),Vector3(0,base+.05,front-.28),mat).name="StoaOpenWalkway"
		if floor_index>0:
			for i in range(count*3):r._box(root,Vector3(.035,.37,.035),Vector3(lerpf(-half+.15,half-.15,float(i)/(count*3-1)),base+.31,front),mat)
			r._box(root,Vector3(p.width-.22,.055,.07),Vector3(0,base+.52,front),mat).name="StoaUpperBalustrade"
	Meshes.pick(root,house);parent.set_meta("ionic_stoa",{"columns":count*p.floors,"floors":p.floors,"walkway_depth":.82})

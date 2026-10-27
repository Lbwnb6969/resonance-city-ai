extends RefCounted
const Meshes=preload("res://scripts/visual/city_creation_ancient_civic_mesh.gd")
const Arch=preload("res://scripts/visual/city_creation_architecture.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func build(r,parent:Node3D,house:Dictionary,palette:Array,p:Dictionary)->void:
	# Replace only a complete prism; irregular additions retain the module shell.
	for child:Node in parent.get_children():child.free()
	var root:=Node3D.new();root.name="RomanBasilicaMassing";parent.add_child(root);root.position=Vector3(p.center.x,float(house.get("base_y",0.)),p.center.y)
	var stone:=Meshes.stone(palette[0]);var half:float=p.width*.5;var depth:float=p.depth*.5;var nave:float=p.width*.23;var h:float=p.height
	var radius:=minf(half*.72,depth*.65);var apse_z:float=-depth+radius
	r._box(root,Vector3(p.width+.12,.12,p.depth+.12),Vector3(0,.06,0),stone).name="BasilicaContactPlinth"
	# Three aisles: real outer walls below a taller, independently lit nave.
	for side:float in [-1.,1.]:
		r._box(root,Vector3(.12,h,p.depth-radius),Vector3(side*(half-.06),h*.5,radius*.5),stone).name="BasilicaAisleWall"
		r._box(root,Vector3(half-radius,h,.12),Vector3(side*(half+radius)*.5,h*.5,apse_z),stone).name="BasilicaApseShoulder"
		for i in range(maxi(1,int((p.depth-radius)/.8))):
			var z:float=lerpf(apse_z+.25,depth-.25,(i+.5)/maxi(1,int((p.depth-radius)/.8)))
			r._box(root,Vector3(.20,h*.90,.20),Vector3(side*nave,h*.45,z),stone).name="BasilicaInteriorPier"
	# The apse is a closed-thickness semicircle, with a true hollow interior.
	var apse_faces:Array[Vector3]=[]
	for i in range(32):
		var a:=PI*i/32.;var b:=PI*(i+1)/32.
		var outer_a:=Vector3(cos(a)*radius,.12,apse_z-sin(a)*radius);var outer_b:=Vector3(cos(b)*radius,.12,apse_z-sin(b)*radius)
		var inner_a:=Vector3(cos(a)*(radius-.10),.12,apse_z-sin(a)*(radius-.10));var inner_b:=Vector3(cos(b)*(radius-.10),.12,apse_z-sin(b)*(radius-.10))
		for pair:Array in [[outer_a,outer_b],[inner_b,inner_a]]:
			var u:Vector3=pair[0];var v:Vector3=pair[1];apse_faces.append_array([u,v,u+Vector3.UP*(h-.12),v,v+Vector3.UP*(h-.12),u+Vector3.UP*(h-.12)])
		apse_faces.append_array([outer_a+Vector3.UP*(h-.12),inner_a+Vector3.UP*(h-.12),inner_b+Vector3.UP*(h-.12),outer_a+Vector3.UP*(h-.12),inner_b+Vector3.UP*(h-.12),outer_b+Vector3.UP*(h-.12)])
	Wall.apply(r._triangles(root,apse_faces,palette[0]),Wall.Kind.STONE).name="BasilicaHollowApse"
	# Front arch has no invisible full-width collision wall.
	var front:=Node3D.new();root.add_child(front);front.position.z=depth
	var opening:=minf(.40,half*.48);var front_faces:Array[Vector3]=[]
	var edge:=-half
	for door_x:float in p.door_xs:
		var right:float=door_x-opening
		front_faces.append_array(Arch._extrude(PackedVector2Array([Vector2(edge,0),Vector2(right,0),Vector2(right,h),Vector2(edge,h)]),.12));edge=door_x+opening
		for i in range(16):
			var a:=PI*i/16.;var b:=PI*(i+1)/16.;var u:=Vector2(door_x+cos(a)*opening,.8+sin(a)*opening);var v:=Vector2(door_x+cos(b)*opening,.8+sin(b)*opening)
			front_faces.append_array(Arch._extrude(PackedVector2Array([u,v,Vector2(v.x,h),Vector2(u.x,h)]),.12))
	front_faces.append_array(Arch._extrude(PackedVector2Array([Vector2(edge,0),Vector2(half,0),Vector2(half,h),Vector2(edge,h)]),.12))
	Wall.apply(r._triangles(front,front_faces,palette[0]),Wall.Kind.STONE).name="BasilicaOpenEntranceArch"
	var trim:=Meshes.stone(palette[0].lerp(Color("e6d8b8"),.48))
	for side:float in [-1.,1.]:
		r._box(root,Vector3(.18,h,.20),Vector3(side*(half-.13),h*.5,depth+.04),trim).name="BasilicaCornerPilaster"
		r._box(root,Vector3(.18,.14,p.depth-radius+.18),Vector3(side*half,h-.05,radius*.5),trim).name="BasilicaAisleCornice"
	for level in range(int(p.floors)):
		for side:float in [-1.,1.]:
			r._box(root,Vector3(.16,.08,p.depth-radius+.12),Vector3(side*half,level*1.7+.18,radius*.5),trim).name="BasilicaStringCourse"
			for i in range(maxi(2,roundi((p.depth-radius)/1.25))):
				var z:=lerpf(apse_z+.3,depth-.3,(i+.5)/maxi(2,roundi((p.depth-radius)/1.25)))
				var recess:=Node3D.new();root.add_child(recess);recess.position=Vector3(side*half,level*1.7,z);recess.rotation.y=side*PI*.5
				var polygon:=PackedVector2Array([Vector2(-.21,.55),Vector2(.21,.55),Vector2(.21,1.03)])
				for j in range(1,13):polygon.append(Vector2(cos(PI*j/12.)*.21,1.03+sin(PI*j/12.)*.21))
				var panel:MeshInstance3D=r._triangles(recess,Arch._extrude(polygon,.035),palette[2].darkened(.42));panel.name="BasilicaArchedRecess"
	for door_x:float in p.door_xs:
		for i in range(16):
			var a:=PI*i/16.;var b:=PI*(i+1)/16.
			var polygon:=PackedVector2Array([Vector2(door_x+cos(a)*opening,.8+sin(a)*opening),Vector2(door_x+cos(b)*opening,.8+sin(b)*opening),Vector2(door_x+cos(b)*(opening+.10),.8+sin(b)*(opening+.10)),Vector2(door_x+cos(a)*(opening+.10),.8+sin(a)*(opening+.10))])
			var block:MeshInstance3D=r._triangles(front,Arch._extrude(polygon,.19),trim.albedo_color);block.material_override=trim;block.name="BasilicaArchVoussoir"
		for side:float in [-1.,1.]:r._box(root,Vector3(.10,.8,.19),Vector3(door_x+side*(opening+.05),.4,depth+.02),trim).name="BasilicaEntryJamb"
	r._box(root,Vector3(p.width+.08,.13,.21),Vector3(0,h-.05,depth+.03),trim).name="BasilicaFrontCornice"
	var upper:=h+.64;var ridge:=upper+.38
	var nave_faces:Array[Vector3]=[];var aisle_faces:Array[Vector3]=[]
	for side:float in [-1.,1.]:
		var x:=side*(nave+.10);var outer:=side*(half+.10)
		var a:=Vector3(x,upper,-depth-.08);var b:=Vector3(x,upper,depth+.10);var c:=Vector3(0,ridge,depth+.10);var d:=Vector3(0,ridge,-depth-.08)
		nave_faces.append_array([a,c,b,a,d,c] if side>0. else [a,b,c,a,c,d])
		var u:=Vector3(outer,h+.06,apse_z);var v:=Vector3(outer,h+.06,depth+.10);var w:=Vector3(side*nave,h+.31,depth+.10);var t:=Vector3(side*nave,h+.31,apse_z)
		aisle_faces.append_array([u,w,v,u,t,w] if side>0. else [u,v,w,u,w,t])
		clerestory(r,root,side*nave,h+.31,upper,depth,palette,stone)
	Meshes.roof(r,root,nave_faces,palette[1],"BasilicaNaveTileRoof",1,ridge)
	Meshes.roof(r,root,aisle_faces,palette[1],"BasilicaAisleTileRoof",1,h+.64)
	for z:float in [-depth,depth]:Meshes.gable(r,root,PackedVector2Array([Vector2(-nave,h),Vector2(nave,h),Vector2(nave,upper),Vector2(0,ridge),Vector2(-nave,upper)]),Vector3(0,0,z),palette[0])
	var cap:Array[Vector3]=[];var uv:=PackedVector2Array();var columns:=maxi(8,roundi(PI*radius/.22))
	for i in range(32):
		var a:=PI*i/32.;var b:=PI*(i+1)/32.;var rise:=.30
		cap.append_array([Vector3(0,h+rise,apse_z),Vector3(cos(a)*(radius+.07),h+.04,apse_z-sin(a)*(radius+.07)),Vector3(cos(b)*(radius+.07),h+.04,apse_z-sin(b)*(radius+.07))])
		uv.append_array(PackedVector2Array([Vector2((i+.5)*columns/32.,0),Vector2(float(i)*columns/32.,Vector2(radius+.07,rise-.04).length()/.28),Vector2(float(i+1)*columns/32.,Vector2(radius+.07,rise-.04).length()/.28)]))
	Meshes.tiled(r,root,cap,uv,palette[1],"BasilicaApseTileRoof")
	Meshes.pick(root,house);parent.set_meta("roman_basilica",{"floors":p.floors,"nave_height":ridge,"apse_radius":radius,"open_door_width":opening*2.});parent.set_meta("ancient_roof_patches",3)
static func clerestory(r,parent:Node3D,x:float,bottom:float,top:float,depth:float,palette:Array,stone:Material)->void:
	var count:=maxi(2,roundi(depth*2/.75));var step:=depth*2/count
	r._box(parent,Vector3(.10,.07,depth*2),Vector3(x,bottom+.035,0),stone).name="BasilicaClerestorySill"
	r._box(parent,Vector3(.13,.07,depth*2+.12),Vector3(x,top-.035,0),stone).name="BasilicaClerestoryLintel"
	var glass:Material=r._material(palette[2].darkened(.42));glass.roughness=.35
	for i in range(count):
		r._box(parent,Vector3(.11,top-bottom,.09),Vector3(x,(top+bottom)*.5,-depth+i*step),stone).name="BasilicaClerestoryPier"
		r._box(parent,Vector3(.018,top-bottom-.14,step-.12),Vector3(x,(top+bottom)*.5,-depth+(i+.5)*step),glass).name="BasilicaClerestoryGlass"
	r._box(parent,Vector3(.11,top-bottom,.09),Vector3(x,(top+bottom)*.5,depth),stone).name="BasilicaClerestoryPier"

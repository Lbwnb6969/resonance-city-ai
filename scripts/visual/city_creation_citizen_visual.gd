extends RefCounted
## One merged body draw and at most one merged hand prop, sharing pooled assets.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const COLORS=[Color("b67755"),Color("709694"),Color("c9b273"),Color("889574")]
static var meshes:Dictionary={}
static var materials:Dictionary={}
static func tint(color:Color)->StandardMaterial3D:
	var key:=color.to_html()
	if not materials.has(key):
		var m:=StandardMaterial3D.new();m.albedo_color=color;m.roughness=.93;materials[key]=m
	return materials[key]
static func paper()->ShaderMaterial:
	if not materials.has("paper"):materials.paper=Wall.merged(Wall.source(Color.WHITE,null,"component",Wall.Kind.STONE),0.,.6,Wall.WallShader,Vector2(0.,.65))
	return materials.paper
static func person(index:int)->Node3D:
	var root:=Node3D.new();root.set_meta("citizen_index",index)
	var body:=Node3D.new();root.add_child(body)
	var tunic:=MeshInstance3D.new();tunic.name="CitizenBody";tunic.material_override=paper();body.add_child(tunic)
	# Retain the original skin slot used by the existing temporary greeting arm.
	var skin:=MeshInstance3D.new();skin.name="SkinPalette";skin.material_override=tint(Color("e2bb8e"));skin.hide();body.add_child(skin)
	var prop:=MeshInstance3D.new();prop.name="HandProp";prop.position=Vector3(.15,.27,.10);prop.material_override=paper();prop.hide();body.add_child(prop)
	identify(root,"resident");return root
static func identify(root:Node3D,role:String)->void:
	var index:int=posmod(int(root.get_meta("citizen_index")),4);var cup:bool=root.get_meta("citizen_prop","")=="cup";var key:="person/%s/%d%s"%[role,index,"/cup" if cup else ""]
	if not meshes.has(key):meshes[key]=preload("res://scripts/visual/city_creation_citizen_gait.gd").mesh(_body(role,index,cup),role)
	root.get_child(0).get_child(0).mesh=meshes[key]
	root.get_child(0).get_child(0).set_meta("sleeve_material",tint(_cloth(role,index)))
	root.set_meta("citizen_role",role)
static func _cloth(role:String,index:int)->Color:
	return {"bakery":Color("eee0b8"),"workshop":Color("6f9e98"),"atelier":Color("a477a5"),"clockmaker":Color("aa8956")}.get(role,COLORS[index])
static func _body(role:String,index:int,cup:bool=false)->ArrayMesh:
	var s:=SurfaceTool.new();s.begin(Mesh.PRIMITIVE_TRIANGLES);var cloth:=_cloth(role,index);var skin:=Color("e2bb8e")
	_capsule(s,.10,.34,Vector3(0,.22,0),cloth);_sphere(s,Vector3(.09,.09,.09),Vector3(0,.45,0),skin)
	for side:float in [-1.,1.]:
		_capsule(s,.025,.18,Vector3(side*.11,.28,0),cloth,3 if side<0. else 4);_sphere(s,Vector3.ONE*.031,Vector3(side*.11,.17,0),skin,7 if side<0. else 6)
		_capsule(s,.027,.14,Vector3(side*.045,.0,0),cloth.darkened(.28),1 if side<0. else 2)
		_box(s,Vector3(.065,.06,.11),Vector3(side*.045,-.075,.018),Color("5c5143"),1 if side<0. else 2)
	if role=="bakery":
		_cylinder(s,.16,.16,.025,Vector3(0,.525,0),Color("dfc387"));_cylinder(s,.085,.095,.065,Vector3(0,.56,0),Color("dfc387"))
		_box(s,Vector3(.15,.20,.035),Vector3(0,.22,.09),Color("f1e8cc"))
	elif role in ["workshop","atelier"]:
		_sphere(s,Vector3(.115,.038,.10),Vector3(.014,.535,0),Color("974e40"))
		_box(s,Vector3(.22,.13,.07),Vector3(0,.34,-.065),cloth.darkened(.19))
	elif role=="clockmaker":
		_cylinder(s,.115,.115,.018,Vector3(0,.525,0),Color("425256"));_cylinder(s,.075,.072,.12,Vector3(0,.585,0),Color("425256"))
		_cylinder(s,.078,.078,.023,Vector3(0,.542,0),Color("c7a05c"))
		_box(s,Vector3(.13,.18,.03),Vector3(0,.25,.092),Color("425256"))
	else:
		_cylinder(s,.105,.105,.043,Vector3(0,.365,0),Color("bd704d"));_box(s,Vector3(.045,.12,.035),Vector3(.048,.29,.09),Color("bd704d"))
	if cup:
		_cylinder(s,.033,.025,.058,Vector3(.11,.23,0),Color("eee1be"),8)
		_sphere(s,Vector3.ONE*.014,Vector3(.14,.22,0),skin,8)
	s.index();return s.commit()
static func prop_mesh(kind:String)->ArrayMesh:
	if meshes.has(kind):return meshes[kind]
	var s:=SurfaceTool.new();s.begin(Mesh.PRIMITIVE_TRIANGLES);var wood:=Color("ab7344");var gold:=Color("e4b55d")
	var skin:=Color("e2bb8e")
	if kind=="lantern":
		_box(s,Vector3(.04,.16,.045),Vector3(-.025,.04,-.05),skin);_sphere(s,Vector3.ONE*.03,Vector3(0,.12,0),skin)
	else:
		_box(s,Vector3(.045,.045,.14),Vector3(-.025,-.035,-.065),skin);_sphere(s,Vector3.ONE*.03,Vector3(0,-.035,-.015),skin)
	match kind:
		"bread":
			_box(s,Vector3(.19,.08,.14),Vector3.ZERO,wood)
			for x:float in [-.075,0.,.075]:_sphere(s,Vector3(.042,.032,.065),Vector3(x,.06,0),gold)
			for x:float in [-.09,.09]:_box(s,Vector3(.018,.09,.16),Vector3(x,.02,0),gold.darkened(.25))
		"workshop":
			_box(s,Vector3(.24,.035,.12),Vector3.ZERO,wood)
			for i in range(6):_box(s,Vector3(.028,.025,.12-i*.008),Vector3(-.09+i*.036,.029,0),gold)
		"atelier":
			_box(s,Vector3(.23,.25,.035),Vector3.ZERO,gold);_box(s,Vector3(.18,.20,.045),Vector3(0,0,.003),Color("e0cba3"))
			_sphere(s,Vector3(.06,.045,.006),Vector3(.025,.02,.029),Color("819b83"))
		"clockmaker":
			_box(s,Vector3(.19,.11,.15),Vector3.ZERO,gold.darkened(.20));_box(s,Vector3(.20,.025,.16),Vector3(0,.065,0),gold)
			_cylinder(s,.033,.033,.018,Vector3(0,.086,0),wood)
		"lantern":
			_box(s,Vector3(.065,.095,.065),Vector3.ZERO,Color("ffdc8a"))
			for y:float in [-.06,.06]:_box(s,Vector3(.09,.025,.09),Vector3(0,y,0),Color("66543b"))
			for x:float in [-.038,.038]:
				for z:float in [-.038,.038]:_box(s,Vector3(.012,.13,.012),Vector3(x,0,z),Color("66543b"))
			_cylinder(s,.02,.02,.06,Vector3(0,.10,0),gold)
		"cup":_cylinder(s,.033,.025,.058,Vector3.ZERO,Color("eee1be"))
	s.index();meshes[kind]=s.commit();return meshes[kind]
static func hand(root:Node3D,kind:String,time:float=0.)->void:
	var prop:MeshInstance3D=root.get_child(0).get_node("HandProp")
	var previous:String=root.get_meta("citizen_prop","")
	if root.get_meta("citizen_prop","")!=kind:
		root.set_meta("citizen_prop",kind);prop.visible=not kind.is_empty() and kind!="cup"
		if not kind.is_empty():prop.mesh=prop_mesh(kind)
		if kind=="cup" or previous=="cup":identify(root,str(root.get_meta("citizen_role","resident")))
		prop.material_override=paper()
		if kind=="lantern":
			if not materials.has("lantern"):
				var shader:=Shader.new();shader.code=Wall.WallShader.code.replace("ROUGHNESS = roughness;","ROUGHNESS = roughness; EMISSION = ALBEDO * vec3(.45,.32,.12);")
				var m:ShaderMaterial=paper().duplicate();m.shader=shader;materials.lantern=m
			prop.material_override=materials.lantern
static func carry(role:String)->Node3D:
	var node:=Node3D.new();node.name={"atelier":"CarriedArtwork","clockmaker":"CarriedMusicBox"}.get(role,"CarriedChime")
	node.position=Vector3(.12,.32,.10)
	var mesh:=MeshInstance3D.new();mesh.mesh=prop_mesh(role);mesh.material_override=paper();node.add_child(mesh);node.hide();return node
static func _piece(s:SurfaceTool,mesh:Mesh,at:Vector3,color:Color,scale:Vector3=Vector3.ONE,tag:int=0)->void:
	var arrays:=mesh.surface_get_arrays(0);var colors:=PackedColorArray();colors.resize(arrays[Mesh.ARRAY_VERTEX].size());colors.fill(color);arrays[Mesh.ARRAY_COLOR]=colors
	var tags:=PackedVector2Array();tags.resize(arrays[Mesh.ARRAY_VERTEX].size());tags.fill(Vector2(5 if tag==0 and at.y>.4 else tag,0));arrays[Mesh.ARRAY_TEX_UV2]=tags
	var source:=ArrayMesh.new();source.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays);s.append_from(source,0,Transform3D(Basis.from_scale(scale),at))
static func _box(s:SurfaceTool,size:Vector3,at:Vector3,color:Color,tag:int=0)->void:
	var mesh:=BoxMesh.new();mesh.size=size;_piece(s,mesh,at,color,Vector3.ONE,tag)
static func _sphere(s:SurfaceTool,radius:Vector3,at:Vector3,color:Color,tag:int=0)->void:
	var mesh:=SphereMesh.new();mesh.radius=1.;mesh.height=2.;mesh.radial_segments=10;mesh.rings=4;_piece(s,mesh,at,color,radius,tag)
static func _capsule(s:SurfaceTool,radius:float,height:float,at:Vector3,color:Color,tag:int=0)->void:
	var mesh:=CapsuleMesh.new();mesh.radius=radius;mesh.height=height;mesh.radial_segments=10;mesh.rings=4;_piece(s,mesh,at,color,Vector3.ONE,tag)
static func _cylinder(s:SurfaceTool,bottom:float,top:float,height:float,at:Vector3,color:Color,tag:int=0)->void:
	var mesh:=CylinderMesh.new();mesh.bottom_radius=bottom;mesh.top_radius=top;mesh.height=height;mesh.radial_segments=10;_piece(s,mesh,at,color,Vector3.ONE,tag)

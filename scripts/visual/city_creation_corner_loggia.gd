extends RefCounted
## A real two-sided arched gallery above an authored roof corner, not a new room.
const Plan=preload("res://scripts/world/city_creation_corner_loggia.gd")
const Roofs=preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd")
const Shell=preload("res://scripts/visual/city_creation_recessed_facade.gd")
const Arch=preload("res://scripts/visual/city_creation_architecture.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Pick=preload("res://scripts/visual/city_creation_roof_pick.gd")
static func build(r,parent:Node3D,house:Dictionary)->void:
	parent.set_meta("rigid_architecture",true)
	var palette:Array=r.HouseColors.era_palette(r,house,r.HouseColors.base_palette(r,house),house.has("custom_colors"))
	var stone:=Wall.component(r,palette[0].lerp(Color("ecdfc5"),.7),Wall.Kind.STONE)
	var plaster:=Wall.component(r,palette[0],Wall.Kind.PLASTER)
	var rows:Array=Roofs.roofs(house);var crown:=Plan.crown(r.building_context,house,rows);var records:Array=[]
	for row:Dictionary in rows:
		var node:=Node3D.new();node.name="CornerLoggiaRoof_"+str(row.cell.id);parent.add_child(node);node.position=Vector3(row.center.x,row.base,row.center.y)
		r._box(node,Vector3(1.8,.14,1.8),Vector3(0,.025,0),stone).name="LoggiaRoofPlatform"
		var crowned:bool=not crown.is_empty() and crown.cell.id==row.cell.id
		if crowned:_gallery(r,node,float(crown.angle),stone,plaster,palette)
		else:
			for side:Vector2i in Plan.SIDES:
				if not r.building_context.neighbor(house,row.cell,side,0,true).is_empty() or not r.building_context.neighbor(house,row.cell,side,1,true).is_empty():continue
				var rail:=Node3D.new();rail.name="LoggiaRoofBalustrade";node.add_child(rail);rail.rotation.y=atan2(float(side.x),float(side.y));_rail(r,rail,stone,1.64,.80)
		var body:=StaticBody3D.new();body.name="CornerLoggiaPick";node.add_child(body);body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(row.cell.id));body.set_meta("cell",row.cell.duplicate(true));Pick.from_geometry(body,node,"CornerLoggiaSurface")
		records.append({"version":Plan.VERSION,"cell_id":str(row.cell.id),"base":float(row.base),"crown":crowned,"sides":crown.get("sides",[]) if crowned else [],"roof_height":2.16 if crowned else .49})
	parent.set_meta("corner_loggia",records);parent.set_meta("prototype_caption","街角双向连拱望楼" if not crown.is_empty() else "连拱望楼 · 顶部外角净空不足");parent.set_meta("corner_loggia_clear",not crown.is_empty())
static func _gallery(r,node:Node3D,angle:float,stone:Material,plaster:Material,palette:Array)->void:
	var gallery:=Node3D.new();gallery.name="TwoSidedLoggia";node.add_child(gallery);gallery.rotation.y=angle
	for index in range(4):
		var wall:=Node3D.new();wall.name=("OpenTripleArcade_" if index<2 else "RearLookoutWall_")+str(index);gallery.add_child(wall);wall.rotation.y=index*PI*.5;wall.position=Vector3(sin(wall.rotation.y)*.735,0,cos(wall.rotation.y)*.735)
		var holes:Array=[]
		if index<2:
			for x:float in [-.47,0.,.47]:holes.append({"x":x,"radius":.205,"bottom":.26,"spring":1.18,"arched":true})
		else:holes=[{"x":0.,"radius":.17,"bottom":.60,"spring":1.04,"arched":true}]
		var plan:={"width":1.60,"height":1.52,"holes":holes}
		var mesh:MeshInstance3D=r._triangles(wall,Shell.faces(plan),palette[0]);mesh.name="LoggiaPierAndArch";mesh.material_override=plaster;wall.set_meta("loggia_holes",holes)
		var trim:Array[Vector3]=[]
		for hole:Dictionary in holes:
			for side:float in [-1.,1.]:r._box(wall,Vector3(.055,float(hole.spring)-float(hole.bottom),.17),Vector3(float(hole.x)+side*(float(hole.radius)+.0275),(float(hole.spring)+float(hole.bottom))*.5,.015),stone).name="LoggiaStoneJamb"
			for i in range(12):
				var a:=PI*i/12.;var b:=PI*(i+1)/12.;var radius:float=hole.radius;var x:float=hole.x;var y:float=hole.spring
				trim.append_array(Arch._extrude(PackedVector2Array([Vector2(x+cos(a)*radius,y+sin(a)*radius),Vector2(x+cos(b)*radius,y+sin(b)*radius),Vector2(x+cos(b)*(radius+.05),y+sin(b)*(radius+.05)),Vector2(x+cos(a)*(radius+.05),y+sin(a)*(radius+.05))]),.17))
		var surround:MeshInstance3D=r._triangles(wall,trim,Color.WHITE);surround.name="LoggiaArchStoneBand";surround.material_override=stone;surround.position.z=.015
		r._box(wall,Vector3(1.67,.09,.20),Vector3(0,.17,.015),stone).name="LoggiaGalleryPlinth"
		r._box(wall,Vector3(1.67,.09,.20),Vector3(0,1.48,.015),stone).name="LoggiaGalleryCornice"
		if index<2:_rail(r,wall,stone,1.47,.015)
		else:
			var pane:MeshInstance3D=r._triangles(wall,Arch._extrude(Shell.outline(holes[0]),.012),Color.WHITE);pane.name="LoggiaRearGlass";pane.position.z=-.035;pane.material_override=preload("res://scripts/visual/city_creation_facade_glass.gd").material(r,0)
	r._box(gallery,Vector3(1.70,.09,1.70),Vector3(0,1.56,0),stone).name="LoggiaCrownSoffit"
	var faces:Array[Vector3]=[];var peak:=Vector3(0,2.16,0)
	for edge:Array in [[Vector3(-.87,1.61,-.87),Vector3(.87,1.61,-.87)],[Vector3(.87,1.61,-.87),Vector3(.87,1.61,.87)],[Vector3(.87,1.61,.87),Vector3(-.87,1.61,.87)],[Vector3(-.87,1.61,.87),Vector3(-.87,1.61,-.87)]]:faces.append_array([edge[0],peak,edge[1]])
	var roof:MeshInstance3D=r._roof_surface(gallery,faces,palette[1]);roof.name="LoggiaTerracottaCrown"
	var tiles:=ShaderMaterial.new();tiles.shader=r.JoinedRoofShader;tiles.set_shader_parameter("roof_color",palette[1]);roof.material_override=tiles
static func _rail(r,node:Node3D,stone:Material,width:float,z:float)->void:
	for i in range(7):r._box(node,Vector3(.035,.25,.055),Vector3((i-3)*width/7.,.325,z),stone).name="LoggiaBaluster"
	r._box(node,Vector3(width,.065,.09),Vector3(0,.475,z),stone).name="LoggiaBalustradeCap"

extends RefCounted
## Greek domestic porticoes and Roman insula/rotunda vocabulary, authored cells intact.
const Mass=preload("res://scripts/visual/city_creation_ancient_mass.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Arch=preload("res://scripts/visual/city_creation_architecture.gd")
const Pick=preload("res://scripts/visual/city_creation_roof_pick.gd")
static func active(house:Dictionary,era:String)->bool:
	return era=="pastoral" and not house.has("signature") and house.get("style","") not in ["timber","round_tower"]
static func material(color:Color,kind:int=Wall.Kind.STONE)->Material:
	return Wall.source(color,null,"component",kind)
static func openings(r,job,frame,wall:Node3D,door:bool,lit:bool,width:float)->void:
	if door:
		r._facade(wall,job.palette,true,int(job.house.get("seed",0)),lit,width);return
	var stone:Material=material(job.palette[0].lerp(Color("e7d9b9"),.5))
	var shade:Material=material(job.palette[2].darkened(.42),Wall.Kind.PLASTER)
	if width<1.4:return
	# Deep shuttered openings have an arched head, no modern cross mullions.
	var rhythm:=preload("res://scripts/visual/city_creation_street_rhythm.gd").opening(r,job.house,frame.cell,wall)
	var radius:float=rhythm.radius;wall.set_meta("street_openings",rhythm)
	for x:float in rhythm.positions:
		var faces:Array[Vector3]=[]
		for i in range(12):
			var a:=Vector2(cos(PI*i/12.)*radius,.99+sin(PI*i/12.)*radius)
			var b:=Vector2(cos(PI*(i+1)/12.)*radius,.99+sin(PI*(i+1)/12.)*radius)
			faces.append_array([Vector3(x,.99,.105),Vector3(x+a.x,a.y,.105),Vector3(x+b.x,b.y,.105)])
		var pane:MeshInstance3D=r._triangles(wall,faces,Color("364238"));pane.material_override=shade;pane.name="RomanArchedShutterHead"
		r._box(wall,Vector3(radius*2.,.39,.045),Vector3(x,.795,.105),shade).name="AncientShutter"
		for side:float in [-1.,1.]:r._box(wall,Vector3(.065,.44,.12),Vector3(x+side*(radius+.035),.80,.13),stone)
		for i in range(12):
			var a:=PI*i/12.;var b:=PI*(i+1)/12.
			var polygon:=PackedVector2Array([Vector2(x+cos(a)*radius,.99+sin(a)*radius),Vector2(x+cos(b)*radius,.99+sin(b)*radius),Vector2(x+cos(b)*(radius+.07),.99+sin(b)*(radius+.07)),Vector2(x+cos(a)*(radius+.07),.99+sin(a)*(radius+.07))])
			Wall.apply(r._triangles(wall,Arch._extrude(polygon,.19),stone.albedo_color),Wall.Kind.STONE).name="RomanWindowVoussoir"
		r._box(wall,Vector3(radius*2.+.17,.07,.22),Vector3(x,.56,.15),stone)
	wall.set_meta("ancient_openings",true)
static func facade(r,job,frame,wall:Node3D,door:bool,width:float)->void:
	var color:Color=job.palette[0].lerp(Color("e6d8b8"),.48);var stone:Material=material(color)
	var detail:=Node3D.new();detail.name="AncientElevation";wall.add_child(detail)
	detail.set_meta("ancient_order","doric" if int(frame.level)==0 else "roman_insula")
	r._box(detail,Vector3(width+.04,.11,.24),Vector3(0,1.54,.07),stone).name="AncientArchitrave"
	r._box(detail,Vector3(width+.12,.08,.31),Vector3(0,1.65,.07),stone).name="AncientCornice"
	for i in range(maxi(2,int(width/.28))):
		var x:float=-width*.5+.12+i*.28
		for k in range(3):r._box(detail,Vector3(.018,.10,.035),Vector3(x+k*.035,1.57,.215),stone).name="DoricTriglyph"
	if not door or int(frame.level)>0 or width<1.4 or not Mass.temple(job.house).is_empty() or not Mass.Villa.plan(job.house).is_empty():return
	if job.primary.is_empty() or str(job.primary.cell_id)!=str(frame.cell.id) or job.primary.side!=Vector2i(roundi(wall.basis.z.x),roundi(wall.basis.z.z)):return
	# Two columns leave the original doorway and its approach clear.
	for x:float in [-.64,.64]:column(r,detail,Vector3(x,.10,.34),1.22,.10,stone)
	r._box(detail,Vector3(1.70,.11,.61),Vector3(0,1.39,.29),stone)
	if job.house.get("architecture","")=="townhouse":r._box(detail,Vector3(1.70,.08,.62),Vector3(0,1.47,.29),stone).name="RomanEntryLintel"
	else:
		var tri:=PackedVector2Array([Vector2(-.85,1.45),Vector2(.85,1.45),Vector2(0,1.74)])
		Wall.apply(r._triangles(detail,Arch._extrude(tri,.62),color),Wall.Kind.STONE).name="GreekClosedPediment"
	var body:=StaticBody3D.new();detail.add_child(body)
	for key:String in ["house_id","cell_id","cell"]:body.set_meta(key,job.house.id if key=="house_id" else (frame.cell.id if key=="cell_id" else frame.cell))
	# Per-piece mesh collisions preserve the open central aisle.
	for mesh:MeshInstance3D in detail.find_children("*","MeshInstance3D",true,false):
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(mesh.mesh.get_faces())
		var collider:=CollisionShape3D.new();collider.shape=shape;collider.transform=mesh.transform;body.add_child(collider)
	detail.set_meta("clear_door_width",1.08)
static func column(r,parent:Node3D,at:Vector3,height:float,radius:float,stone:Material)->void:
	var faces:Array[Vector3]=[];var rings:=6;var sectors:=40
	for j in range(rings):
		for i in range(sectors):
			var q:Array[Vector3]=[]
			for ij:Vector2i in [Vector2i(i,j),Vector2i(i+1,j),Vector2i(i+1,j+1),Vector2i(i,j+1)]:
				var t:=float(ij.y)/rings;var a:=TAU*ij.x/sectors;var rad:=radius*(1.-.21*t+.065*sin(PI*t))*(1.-.075*cos(a*20.))
				q.append(at+Vector3(cos(a)*rad,.12+t*(height-.27),sin(a)*rad))
			faces.append_array([q[0],q[2],q[1],q[0],q[3],q[2]])
	var shaft:MeshInstance3D=r._triangles(parent,faces,stone.albedo_color);shaft.material_override=stone;shaft.name="DoricFlutedShaft"
	r._box(parent,Vector3(radius*2.7,.09,radius*2.7),at+Vector3.UP*.045,stone).name="DoricStylobate"
	r._cylinder(parent,radius*.8,radius*1.3,.10,at+Vector3.UP*(height-.12),stone,20).name="DoricEchinus"
	r._box(parent,Vector3(radius*2.9,.08,radius*2.9),at+Vector3.UP*(height-.03),stone).name="DoricAbacus"
static func roofs(r,parent:Node3D,house:Dictionary,palette:Array)->void:
	if preload("res://scripts/visual/city_creation_ancient_extensions.gd").roofs(r,parent,house,palette):return
	if Mass.roof(r,parent,house,palette,load("res://scripts/visual/city_creation_ancient_architecture.gd")):return
	var domes:Dictionary=parent.get_meta("dome_cells",{});var count:=0
	for patch:Dictionary in r.building_context.roof_patches(str(house.id)):
		if domes.has(str(patch.cell_id)):continue
		patch=preload("res://scripts/visual/city_creation_organic_corners.gd").patch(r,house,patch,null)
		var cell:Dictionary=house.cells.filter(func(c):return str(c.id)==str(patch.cell_id))[0]
		var eave:float=float(house.get("base_y",0.))+(int(cell.level)+1)*1.7
		var faces:Array[Vector3]=[]
		for p:Vector3 in patch.vertices:faces.append(Vector3(p.x,eave+(p.y-eave)*.48,p.z))
		var tile:bool=patch.surface=="roof"
		var color:Color=palette[1] if tile else palette[0].lerp(Color("e4d5b5"),.45)
		var mesh:MeshInstance3D=preload("res://scripts/visual/city_creation_ancient_roof_finish.gd").surface(r,parent,patch,faces,color,tile)
		mesh.name="AncientLowTileRoof" if tile else "AncientPedimentTympanum"
		var body:=StaticBody3D.new();parent.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",cell.id);body.set_meta("cell",cell)
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(mesh.mesh.get_faces());var collider:=CollisionShape3D.new();collider.shape=shape;body.add_child(collider);count+=1
	parent.set_meta("ancient_roof_patches",count)
static func finish(r,parent:Node3D,house:Dictionary,plans:Array)->void:
	parent.set_meta("ancient_architecture",{"order":"greek_doric_roman","saved_cells":house.cells.size()})
	if preload("res://scripts/visual/city_creation_ancient_extensions.gd").finish(r,parent,house,parent.get_meta("palette_colors")):return
	if Mass.rotunda(r,parent,house,parent.get_meta("palette_colors"),load("res://scripts/visual/city_creation_ancient_architecture.gd")):return
	Mass.Villa.build(r,parent,house,parent.get_meta("palette_colors"),load("res://scripts/visual/city_creation_ancient_architecture.gd"))
	for plan:Dictionary in plans:
		var node:=Node3D.new();node.name="RomanOculusRotunda";parent.add_child(node);node.position=Vector3(plan.center.x,plan.drum_y,plan.center.y)
		var stone:Material=material(parent.get_meta("palette_colors")[0]);var radius:=float(plan.radius)
		var faces:Array[Vector3]=[]
		for j in range(10):
			for i in range(32):
				var q:Array[Vector3]=[]
				for ij:Vector2i in [Vector2i(i,j),Vector2i(i+1,j),Vector2i(i+1,j+1),Vector2i(i,j+1)]:
					var a:=TAU*ij.x/32.;var t:=float(ij.y)/10.*1.35
					q.append(Vector3(cos(a)*radius*cos(t),.60+radius*sin(t),sin(a)*radius*cos(t)))
				faces.append_array([q[0],q[2],q[1],q[0],q[3],q[2]])
		var dome:MeshInstance3D=r._triangles(node,faces,stone.albedo_color);dome.material_override=stone;dome.name="RomanOpenOculusDome"
		for i in range(12):
			var a:=TAU*i/12.;column(r,node,Vector3(cos(a)*radius*.82,0,sin(a)*radius*.82),.59,.045,stone)
		r._cylinder(node,radius,radius,.10,Vector3(0,.57,0),stone,32)
		var body:=StaticBody3D.new();node.add_child(body);body.set_meta("house_id",house.id);body.set_meta("cell_id",plan.cell_ids[0]);body.set_meta("cell",house.cells.filter(func(c):return c.id==plan.cell_ids[0])[0])
		Pick.from_children(body,node,"RomanRotundaPick")
		parent.set_meta("domes",plans)

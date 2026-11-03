extends RefCounted
## Geometry follows the wet-slip plan; the centre stays real water, not a floor.
const Plan=preload("res://scripts/world/city_creation_boathouse_plan.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Parts=preload("res://scripts/visual/city_creation_clockwork_parts.gd")
const Pick=preload("res://scripts/visual/city_creation_roof_pick.gd")
static func facade(r,job,frame,wall:Node3D,door:bool,width:float)->bool:
	if not Plan.selected(r.state,job.house):return false
	var wood:=Wall.component(r,job.palette[2],Wall.Kind.TIMBER);var dark:=Wall.component(r,job.palette[2].darkened(.20),Wall.Kind.TIMBER)
	for side:float in [-1.,1.]:r._box(wall,Vector3(.075,1.48,.11),Vector3(side*(width*.5-.075),.87,.10),wood).name="BoathouseWallPost"
	for y:float in [.25,1.53]:r._box(wall,Vector3(width,.075,.11),Vector3(0,y,.10),dark).name="BoathouseWallTie"
	for side:float in [-1.,1.]:Parts.beam(r,wall,Vector3(side*(width*.5-.12),.31,.11),Vector3(side*(width*.5-.42),.55,.11),.045,wood)
	return true
static func build(r,root:Node3D,house:Dictionary)->void:
	if not Plan.selected(r.state,house):return
	root.set_meta("rigid_architecture",true)
	var plan:=Plan.find(r.state,str(house.id));var index:int=r.state._house_index(str(house.id))
	if index<0 or r.state.houses[index]!=house:plan=Plan.preview(r.state,house)
	root.set_meta("prototype_caption","溪畔木船坞" if not plan.is_empty() else "木船屋 · 水岸或净空不足")
	root.set_meta("boathouse",plan)
	if plan.is_empty():return
	var palette:Array=r.HouseColors.era_palette(r,house,r.HouseColors.base_palette(r,house),house.has("custom_colors"))
	var wood:=Wall.component(r,palette[2],Wall.Kind.TIMBER);var dark:=Wall.component(r,palette[2].darkened(.20),Wall.Kind.TIMBER)
	var node:=Node3D.new();node.name="CreekBoathouseDock";root.add_child(node);var point:=Plan.Frame.inverse(house,plan.wall)
	node.position=Vector3(point.x,float(plan.top),point.y);node.rotation.y=atan2(float(plan.normal.x),float(plan.normal.y))-Plan.Frame.yaw(house)
	for rect:Rect2 in plan.floors:
		r._box(node,Vector3(rect.size.x,.055,rect.size.y),Vector3(rect.get_center().x,-.045,rect.get_center().y),dark).name="BoathousePierSubfloor"
		var count:=ceili(rect.size.y/.10)
		for i in range(count):r._box(node,Vector3(rect.size.x,.02,rect.size.y/count-.007),Vector3(rect.get_center().x,-.008,rect.position.y+(i+.5)*rect.size.y/count),wood).name="BoathousePierBoard"
	for x:float in [-.80,.80]:
		for z:float in [.10,1.90]:
			var ground:float=minf(r.state.raw_terrain_height(Plan.at(plan,Vector2(x,z))),float(r.state.Terrain.WATER_LEVEL)-.08)-float(plan.top)
			r._cylinder(node,.06,.07,1.56-ground,Vector3(x,(1.56+ground)*.5,z),dark,10).name="BoathouseTimberPile"
			for offset:float in [-.18,.18]:
				if z+offset<0. or z+offset>2.:continue
				Parts.beam(r,node,Vector3(x,1.30,z),Vector3(x+(-.18 if x>0. else .18),1.56,z+offset),.055,wood)
		r._box(node,Vector3(.075,.09,2.05),Vector3(x,1.58,1.0),wood).name="BoathouseCanopyWallPlate"
		for z:float in [.45,1.55]:r._cylinder(node,.028,.028,.13,Vector3(x,.065,z),dark,8).name="BoathouseMooringBollard"
	for z:float in [.1,1.90]:
		r._box(node,Vector3(1.75,.10,.10),Vector3(0,1.56,z),wood).name="BoathouseCanopyTie"
		for x:float in [-1.,1.]:Parts.beam(r,node,Vector3(x*1.06,1.64,z),Vector3(0,2.18,z),.075,dark)
	var faces:Array[Vector3]=[Vector3(-1.08,1.64,-.02),Vector3(-1.08,1.64,2.14),Vector3(0,2.18,2.14),Vector3(-1.08,1.64,-.02),Vector3(0,2.18,2.14),Vector3(0,2.18,-.02),Vector3(0,2.18,-.02),Vector3(0,2.18,2.14),Vector3(1.08,1.64,2.14),Vector3(0,2.18,-.02),Vector3(1.08,1.64,2.14),Vector3(1.08,1.64,-.02)]
	var roof:MeshInstance3D=r._roof_surface(node,faces,palette[1]);roof.name="BoathouseSlipRoof";var tiles:=ShaderMaterial.new();tiles.shader=r.JoinedRoofShader;tiles.set_shader_parameter("roof_color",palette[1]);roof.material_override=tiles
	var boat:=Node3D.new();boat.name="MooredWoodenSkiff";node.add_child(boat);boat.position=Vector3(0,float(r.state.Terrain.WATER_LEVEL)-float(plan.top),1.15);_skiff(r,boat,wood,dark)
	for side:float in [-1.,1.]:Parts.beam(r,node,Vector3(side*.80,.13,.45),Vector3(side*.27,float(r.state.Terrain.WATER_LEVEL)-float(plan.top)+.17,1.05),.012,dark)
	var body:=StaticBody3D.new();body.name="BoathouseDockPick";node.add_child(body);body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(plan.cell_id));body.set_meta("boat_dock",true)
	for cell:Dictionary in house.cells:
		if str(cell.id)==str(plan.cell_id):body.set_meta("cell",cell.duplicate(true));break
	Pick.from_geometry(body,node,"BoathouseDockSurface")
static func _skiff(r,node:Node3D,wood:Material,dark:Material)->void:
	var hull:=Wall.source(wood.albedo_color,null,"component",Wall.Kind.TIMBER);hull.cull_mode=BaseMaterial3D.CULL_DISABLED
	var rim:=PackedVector2Array([Vector2(0,-.82),Vector2(.21,-.57),Vector2(.30,.20),Vector2(.22,.62),Vector2(0,.84),Vector2(-.22,.62),Vector2(-.30,.20),Vector2(-.21,-.57)])
	for i in range(rim.size()):
		var a:=rim[i];var b:=rim[(i+1)%rim.size()]
		Parts.quad(r,node,Vector3(a.x,.18,a.y),Vector3(b.x,.18,b.y),Vector3(b.x*.42,-.08,b.y*.68),Vector3(a.x*.42,-.08,a.y*.68),hull,"SkiffHullPlank")
		Parts.beam(r,node,Vector3(a.x,.18,a.y),Vector3(b.x,.18,b.y),.035,dark)
	var indices:=Geometry2D.triangulate_polygon(rim);var faces:Array[Vector3]=[]
	for index:int in indices:var p:=rim[index]*.78;faces.append(Vector3(p.x,.035,p.y))
	Parts.face(r,node,faces,dark,"SkiffDryInnerFloor")
	for z:float in [-.34,.20]:r._box(node,Vector3(.43,.035,.12),Vector3(0,.135,z),wood).name="SkiffThwart"
	Parts.beam(r,node,Vector3(-.20,.22,-.40),Vector3(.21,.22,.45),.018,dark)

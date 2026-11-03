extends RefCounted
## The floor, braces and guards share the world planner's exact pose and outline.
const Plan=preload("res://scripts/world/city_creation_tea_deck_plan.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Frame=Plan.Frame
static func build(r,root:Node3D,house:Dictionary)->void:
	var plan:=Plan.find(r.state,str(house.id))
	var index:int=r.state._house_index(str(house.id))
	if index<0 or r.state.houses[index]!=house:plan=Plan.preview(r.state,house)
	if plan.is_empty():return
	var node:=Node3D.new();node.name="CantileverTeaDeck";root.add_child(node)
	var point:Vector2=Frame.inverse(house,plan.wall);var normal:Vector2=plan.normal
	node.position=Vector3(point.x,plan.top,point.y);node.rotation.y=atan2(normal.x,normal.y)-Frame.yaw(house)
	var palette:Array=r.HouseColors.era_palette(r,house,r.HouseColors.base_palette(r,house),house.has("custom_colors"))
	var wood:=Wall.component(r,palette[2],Wall.Kind.TIMBER);var dark:=Wall.component(r,palette[2].darkened(.20),Wall.Kind.TIMBER)
	var body:=StaticBody3D.new();body.name="TeaDeckPick";node.add_child(body);body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(plan.cell_id));body.set_meta("tea_deck",true)
	for cell:Dictionary in house.cells:
		if str(cell.id)==str(plan.cell_id):body.set_meta("cell",cell.duplicate(true));break
	for rect:Rect2 in plan.floors:
		r._box(node,Vector3(rect.size.x,.075,rect.size.y),Vector3(rect.get_center().x,-.055,rect.get_center().y),dark).name="TeaDeckSubfloor"
		r._cell_box_shape(body,Vector3(rect.size.x,.10,rect.size.y),Vector3(rect.get_center().x,-.05,rect.get_center().y))
		var count:=ceili(rect.size.y/.10)
		for i in range(count):r._box(node,Vector3(rect.size.x,.025,rect.size.y/count-.007),Vector3(rect.get_center().x,-.0125,rect.position.y+(i+.5)*rect.size.y/count),wood).name="TeaDeckPlank"
	for x:float in [-.65,.65]:beam(r,node,Vector3(x,-.50,-.15),Vector3(x,-.075,1.23),dark)
	beam(r,node,Vector3(plan.wing*.85,-.45,-.45),Vector3(plan.wing*1.49,-.075,.40),dark)
	for rail:Dictionary in plan.rails:
		var corners:=Frame.corners(rail);var rect:=Rect2(Plan.local(plan,corners[0]),Vector2.ZERO)
		for corner:Vector2 in corners:rect=rect.expand(Plan.local(plan,corner))
		var center:=rect.get_center();var size:=Vector3(maxf(.03,rect.size.x),.67,maxf(.03,rect.size.y))
		var pane:MeshInstance3D=r._box(node,size,Vector3(center.x,.405,center.y),wood);pane.name="TeaDeckGlassGuard";pane.material_override=r.conservatory.ensure_material(true);pane.set_meta("creation_live_visual",true)
		r._cell_box_shape(body,size,Vector3(center.x,.405,center.y))
		r._box(node,Vector3(size.x+.025,.035,size.z+.025),Vector3(center.x,.755,center.y),wood)
		var along:=Vector2(rect.size.x,0) if rect.size.x>rect.size.y else Vector2(0,rect.size.y)
		for side:float in [-.5,.5]:r._box(node,Vector3(.045,.75,.045),Vector3(center.x+along.x*side,.375,center.y+along.y*side),wood)
	umbrella(r,node,wood)
	root.set_meta("tea_deck",plan);root.set_meta("prototype_caption","悬挑亲水茶台")
static func beam(r,parent:Node3D,a:Vector3,b:Vector3,material:Material)->void:
	var part:MeshInstance3D=r._box(parent,Vector3(.085,.085,a.distance_to(b)),(a+b)*.5,material);part.name="TeaDeckDiagonalBrace";part.look_at(parent.to_global(b),Vector3.UP)
static func umbrella(r,node:Node3D,wood:Material)->void:
	r._cylinder(node,.025,.025,1.47,Vector3(0,.735,.85),wood,8)
	for i in range(8):
		var a:=Vector3(sin(i*TAU/8.)*.50,1.36,.85+cos(i*TAU/8.)*.50);var b:=Vector3(sin((i+1)*TAU/8.)*.50,1.36,.85+cos((i+1)*TAU/8.)*.50)
		var cloth:MeshInstance3D=r._triangles(node,[Vector3(0,1.55,.85),b,a],Color("eee2bf") if i%2==0 else Color("d7c8a7"));cloth.name="TeaDeckCanvas"
		cloth.material_override=cloth.material_override.duplicate();cloth.material_override.set_meta("creation_fixed_color",true);cloth.set_meta("creation_live_visual",true)

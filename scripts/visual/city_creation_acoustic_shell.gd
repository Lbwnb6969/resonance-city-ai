extends RefCounted
## Solid curved timber panels with an open mouth, exact skin and floor collision.
const Plan=preload("res://scripts/world/city_creation_acoustic_shell.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Parts=preload("res://scripts/visual/city_creation_clockwork_parts.gd")
const Pick=preload("res://scripts/visual/city_creation_roof_pick.gd")
static func base(r,job,node:Node3D,body:StaticBody3D,cell:Dictionary,bottom:float)->bool:
	if not Plan.active(r.state,job.house):return false
	if int(cell.level)==0:
		r._box(node,Vector3(1.8,.15-bottom,1.8),Vector3(0,(.15+bottom)*.5,0),Wall.component(r,job.palette[0],Wall.Kind.STONE)).name="AcousticStageBase"
		r._cell_box_shape(body,Vector3(1.8,.15-bottom,1.8),Vector3(0,(.15+bottom)*.5,0))
	return true
static func wall(r,job)->bool:return Plan.active(r.state,job.house)
static func _pick(parent:Node3D,house:Dictionary,cell:Dictionary)->void:
	var body:=StaticBody3D.new();body.name="AcousticSkinPick";parent.add_child(body);body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(cell.id));body.set_meta("cell",cell.duplicate(true));Pick.from_geometry(body,parent,"AcousticSkinSurface")
static func build(r,root:Node3D,house:Dictionary)->void:
	if not Plan.selected(house):return
	var plan:=Plan.for_house(r.state,house)
	root.set_meta("prototype_caption","现代木壳声学亭" if not plan.is_empty() else "木壳声学亭 · 随房形保留")
	if plan.is_empty():return
	root.set_meta("rigid_architecture",true);root.set_meta("acoustic_shell",plan)
	var palette:Array=r.HouseColors.era_palette(r,house,r.HouseColors.base_palette(r,house),house.has("custom_colors"))
	var wood:=Wall.component(r,palette[1].lerp(palette[2],.74),Wall.Kind.TIMBER);var dark:=Wall.component(r,palette[2].darkened(.20),Wall.Kind.TIMBER);var light:=Wall.component(r,palette[2].lightened(.13),Wall.Kind.TIMBER)
	var stage:=Node3D.new();stage.name="TimberAcousticHall";root.add_child(stage);stage.position=Vector3(plan.center.x,float(plan.base_y),plan.center.y);stage.rotation.y=float(plan.angle)
	var half:float=float(plan.width)*.5-.04;var lanes:=roundi(float(plan.width)/1.8);var steps:=maxi(12,roundi(float(plan.depth)/1.8)*12)
	for lane in range(lanes):
		var x0:float=-half+lane*(half*2.)/lanes;var x1:float=-half+(lane+1)*(half*2.)/lanes
		for i in range(steps):
			var a:=Plan.point(plan,float(i)/steps);var b:=Plan.point(plan,float(i+1)/steps);var normal:=Vector2(b.y-a.y,-(b.x-a.x)).normalized()*.07
			var face:=Node3D.new();face.name="BentTimberPanel_%d_%d"%[lane,i];stage.add_child(face)
			var points:Array[Vector3]=[Vector3(x0,a.x,a.y),Vector3(x0,b.x,b.y),Vector3(x1,b.x,b.y),Vector3(x1,a.x,a.y)]
			var inside:Array[Vector3]=[]
			for p:Vector3 in points:inside.append(p-Vector3(0,normal.x,normal.y))
			var faces:Array[Vector3]=[points[0],points[1],points[2],points[0],points[2],points[3],inside[0],inside[2],inside[1],inside[0],inside[3],inside[2]]
			for j in range(4):var k:=(j+1)%4;faces.append_array([points[j],inside[j],inside[k],points[j],inside[k],points[k]])
			var mesh:MeshInstance3D=r._triangles(face,faces,Color.WHITE);mesh.name="CurvedTimberSkin";mesh.material_override=wood
			# Quiet ribs delineate every original room bay; keep the mouth open.
			for x:float in [x0,x1] if lane==lanes-1 else [x0]:Parts.beam(r,face,Vector3(x,a.x-normal.x-.018,a.y-normal.y),Vector3(x,b.x-normal.x-.018,b.y-normal.y),.045,dark)
			var ends:Array=[]
			if lane==0:ends.append(x0)
			if lane==lanes-1:ends.append(x1)
			for x:float in ends:
				var side:Array[Vector3]=[Vector3(x,.15,a.y),Vector3(x,a.x,a.y),Vector3(x,b.x,b.y),Vector3(x,.15,a.y),Vector3(x,b.x,b.y),Vector3(x,.15,b.y)]
				if x<0.:
					for j in range(0,side.size(),3):var p:=side[j+1];side[j+1]=side[j+2];side[j+2]=p
				var cheek:MeshInstance3D=r._triangles(face,side,Color.WHITE);cheek.name="TimberReflectorCheek";cheek.material_override=wood
			_pick(face,house,Plan.cell_at(house,plan,Vector2((x0+x1)*.5,(a.y+b.y)*.5)))
	var width:float=float(plan.width);var depth:float=float(plan.depth)
	for i in range(ceili(depth/.10)):
		var z:float=-depth*.5+(i+.5)*depth/ceili(depth/.10)
		r._box(stage,Vector3(width,.02,depth/ceili(depth/.10)-.005),Vector3(0,.16,z),light).name="AcousticStageBoard"
	var mouth:=Plan.point(plan,1.);r._box(stage,Vector3(width,.085,.085),Vector3(0,mouth.x-.035,mouth.y-.025),dark).name="AcousticMouthLintel"
	for x:float in [-half,half]:r._box(stage,Vector3(.075,float(plan.height),.075),Vector3(x,.18+float(plan.height)*.5,mouth.y-.025),dark).name="AcousticMouthJamb"
	root.set_meta("acoustic_shell_stats",{"lanes":lanes,"curve_steps":steps,"open_width":width-.15,"source_cells":house.cells.size(),"version":Plan.VERSION})

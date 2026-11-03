extends RefCounted
## Narrow tile ridges behind closed stepped stone parapets, inside authored cells.
const Plan=preload("res://scripts/world/city_creation_stepped_guildhouse.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func build(r,parent:Node3D,house:Dictionary)->void:
	var palette:Array=r.HouseColors.era_palette(r,house,r.HouseColors.base_palette(r,house),house.has("custom_colors"))
	var wall:=Wall.source(palette[0],null,"component",Wall.Kind.PLASTER);var stone:=Wall.source(palette[0].lerp(Color("ecdfc5"),.7),null,"component",Wall.Kind.STONE)
	var tile:=ShaderMaterial.new();tile.shader=r.JoinedRoofShader;tile.set_shader_parameter("roof_color",palette[1])
	var records:Array=[];var chimneys:Array=[]
	for row:Dictionary in Plan.bays(r.state,house):
		var node:=Node3D.new();node.name="SteppedGuildRoof_"+str(row.cell.id);parent.add_child(node);node.position=row.center;node.rotation.y=row.angle
		var half:float=row.depth*.5;var roof_end:=half-.145
		r._box(node,Vector3(1.8,.10,row.depth),Vector3(0,.025,0),stone).name="GuildRoofSoffit"
		var faces:Array[Vector3]=[Vector3(-.9,.10,-roof_end),Vector3(-.9,.10,roof_end),Vector3(0,.88,roof_end),Vector3(-.9,.10,-roof_end),Vector3(0,.88,roof_end),Vector3(0,.88,-roof_end),Vector3(0,.88,-roof_end),Vector3(0,.88,roof_end),Vector3(.9,.10,roof_end),Vector3(0,.88,-roof_end),Vector3(.9,.10,roof_end),Vector3(.9,.10,-roof_end)]
		var roof:MeshInstance3D=r._roof_surface(node,faces,palette[1]);roof.name="GuildTilePitch";roof.material_override=tile
		for side:float in [-1.,1.]:
			var gable:=Node3D.new();gable.name="SteppedParapetFront" if side>0 else "SteppedParapetBack";node.add_child(gable);gable.position.z=side*(half-.085)
			for i in range(8):
				var column:=mini(i,7-i);var height:=.38+column*.22;var x:float=-.9+(i+.5)*.225
				r._box(gable,Vector3(.225,height,.12),Vector3(x,height*.5,0),wall).name="GuildStepBody"
				r._box(gable,Vector3(.225,.07,.17),Vector3(x,height-.035,0),stone).name="GuildStepCap"
			var badge:MeshInstance3D=r._cylinder(gable,.105,.105,.026,Vector3(0,.29,side*.073),Wall.component(r,palette[2],Wall.Kind.TIMBER),12);badge.rotation.x=PI*.5;badge.name="CarvedGuildRoundel"
			var iron:=Wall.component(r,Color("4a504a"),Wall.Kind.METAL);var vane:=Node3D.new();vane.name="GuildWeatherVane";gable.add_child(vane)
			r._box(vane,Vector3(.025,.23,.025),Vector3(0,1.15,0),iron).name="GuildWeatherStem"
			r._box(vane,Vector3(.30,.025,.025),Vector3(0,1.20,0),iron).name="GuildWeatherArrow"
			r._box(vane,Vector3(.055,.10,.025),Vector3(-.125,1.20,0),iron)
			var head:MeshInstance3D=r._triangles(vane,preload("res://scripts/visual/city_creation_architecture.gd")._extrude(PackedVector2Array([Vector2(.18,1.20),Vector2(.10,1.25),Vector2(.10,1.15)]),.025),Color("4a504a"));head.material_override=iron
			preload("res://scripts/visual/city_creation_detail_lod.gd").bind_tree(vane,64.)
		if str(house.get("role",""))=="bakery" and chimneys.is_empty():
			var at:=Vector3(.43,.10+.78*(1.-.43/.9)+.22,0)
			r._box(node,Vector3(.23,.48,.26),at,stone).name="GuildChimney"
			r._box(node,Vector3(.29,.07,.32),at+Vector3(0,.275,0),wall)
			chimneys.append(node.transform*(at+Vector3(0,.32,0)))
		pick(node,house,row.cell)
		records.append({"version":Plan.VERSION,"cell_id":str(row.cell.id),"center":row.center,"depth":row.depth,"angle":row.angle,"steps":4,"height":1.04})
	parent.set_meta("stepped_guildhouse",records);parent.set_meta("prototype_caption","阶梯山墙行会");parent.set_meta("chimneys",chimneys)
static func pick(node:Node3D,house:Dictionary,cell:Dictionary)->void:
	var faces:=PackedVector3Array();var inverse:=node.global_transform.affine_inverse()
	for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
		var transform:=inverse*mesh.global_transform
		for vertex:Vector3 in mesh.mesh.get_faces():faces.append(transform*vertex)
	var body:=StaticBody3D.new();body.name="GuildRoofPick";node.add_child(body);body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(cell.id));body.set_meta("cell",cell.duplicate())
	var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(faces);var collision:=CollisionShape3D.new();collision.shape=shape;body.add_child(collision)
static func glow(rig,root:Node3D,cell:Dictionary,side:Vector2i,surface:SurfaceTool,windows:Array)->bool:
	for wall:Node3D in root.find_children("*","Node3D",true,false):
		if not wall.has_meta("guild_shop_window") or str(wall.get_parent().name)!=str(cell.id) or Vector2(wall.basis.z.x,wall.basis.z.z).dot(Vector2(side))<.99:continue
		var frame:=root.global_transform.affine_inverse()*wall.global_transform
		var center:float=wall.get_meta("recessed_facade").holes[0].x
		for x:float in [-.18,.18]:
			for y:float in [.77,1.07]:rig._panel(surface,frame,Vector3(center+x,y,-.027),Vector2(.25,.24),0)
		windows.append({"cell_id":str(cell.id),"side":side,"at":frame*Vector3(center,.95,-.027),"guild_shop":true});return true
	return false

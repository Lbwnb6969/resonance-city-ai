extends RefCounted
const Plan=preload("res://scripts/world/city_creation_market_frontages.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Cloth=preload("res://scripts/visual/shaders/creation_market_cloth.gdshader")
static func build(renderer,parent:Node3D,rows:Array)->void:
	for row:Dictionary in rows:
		var root:=Node3D.new();root.name="MarketAwning_"+str(row.cell_id);parent.add_child(root)
		root.position=Vector3(row.wall.x,row.base_y-parent.position.y,row.wall.y);root.rotation.y=row.yaw
		root.set_meta("market_frontage",row.duplicate(true))
		var st:=SurfaceTool.new();st.begin(Mesh.PRIMITIVE_TRIANGLES)
		for strip in range(10):
			var x0:float=-Plan.WIDTH*.5+Plan.WIDTH*strip/10.;var x1:float=-Plan.WIDTH*.5+Plan.WIDTH*(strip+1)/10.
			var color:=Color("efdfba") if strip%2==0 else Color("a95e46")
			for part in range(6):
				var z0:float=Plan.DEPTH*part/6.;var z1:float=Plan.DEPTH*(part+1)/6.
				_quad(st,Vector3(x0,_height(z0),z0),Vector3(x1,_height(z0),z0),Vector3(x1,_height(z1),z1),Vector3(x0,_height(z1),z1),color)
			_quad(st,Vector3(x0,_height(Plan.DEPTH),Plan.DEPTH),Vector3(x1,_height(Plan.DEPTH),Plan.DEPTH),Vector3(x1,Plan.LOW,Plan.DEPTH),Vector3(x0,Plan.LOW,Plan.DEPTH),color)
		st.generate_normals();var mesh:=MeshInstance3D.new();mesh.name="StripedCloth";mesh.mesh=st.commit();mesh.extra_cull_margin=.04;root.add_child(mesh)
		var material:=ShaderMaterial.new();material.shader=Cloth;mesh.material_override=material
		var support:=ShaderMaterial.new();support.shader=Wall.WallShader;support.set_shader_parameter("albedo_color",Color("84644c"));support.set_shader_parameter("surface_kind",Wall.Kind.CANTILEVER);support.set_shader_parameter("component_bounds",Vector2(row.base_y+1.34,row.base_y+1.66))
		renderer._box(root,Vector3(Plan.WIDTH+.06,.06,.06),Vector3(0,Plan.HIGH,0),support)
		for x:float in [-.72,.72]:
			var strut:MeshInstance3D=renderer._box(root,Vector3(.045,.045,1.05),Vector3(x,1.44,.52),support);strut.rotation.x=.19
		var body:=StaticBody3D.new();body.name="MarketAwningPick";body.set_meta("house_id",row.house_id);body.set_meta("cell_id",row.cell_id)
		var house:Dictionary=renderer.state.houses[renderer.state._house_index(row.house_id)]
		body.set_meta("cell",house.cells.filter(func(c):return str(c.id)==row.cell_id)[0].duplicate(true));root.add_child(body)
		var faces:=ConcavePolygonShape3D.new();faces.backface_collision=true;faces.set_faces(mesh.mesh.get_faces())
		var shape:=CollisionShape3D.new();shape.shape=faces;body.add_child(shape)
static func _height(z:float)->float:return Plan.HIGH-.20*(z/Plan.DEPTH)-sin(z/Plan.DEPTH*PI)*.045
static func _quad(st:SurfaceTool,a:Vector3,b:Vector3,c:Vector3,d:Vector3,color:Color)->void:
	for p:Vector3 in [a,c,b,a,d,c]:
		st.set_color(Color(color.r,color.g,color.b,clampf(p.z/Plan.DEPTH,0.,1.)));st.set_uv(Vector2(p.x,p.z));st.add_vertex(p)

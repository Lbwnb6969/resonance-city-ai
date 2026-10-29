extends RefCounted
const Plan=preload("res://scripts/world/city_creation_water_lantern_plan.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static var glow_shader:Shader
static func build(owner:Node3D,row:Dictionary)->void:
	var r=owner.demo.town;var root:Node3D=owner._root("MarketWaterLantern_"+row.house_id,row,Vector3(row.at.x,row.y,row.at.y))
	var basket:=Wall.source(Color("9b7250"),null,"component",Wall.Kind.CANTILEVER)
	# Reuse the production paper micro-normal/contact-AO shader with opaque light.
	if glow_shader==null:
		glow_shader=Shader.new();glow_shader.code=Wall.WallShader.code.replace("uniform float roughness","uniform float lantern_night=0.;\nuniform float roughness").replace("ROUGHNESS = roughness;","ROUGHNESS = roughness;\nEMISSION=ALBEDO*lantern_night*.9;")
	var glow:=Wall.merged(Wall.source(Color("ffcc70"),null,"component",Wall.Kind.STONE),row.y,1.7,glow_shader,Vector2(row.y+.04,row.y+.23));glow.set_shader_parameter("albedo_color",Color("ffcc70"))
	r._cylinder(root,.07,.055,.13,Vector3(0,.13,0),glow,10)
	r._cylinder(root,.23,.26,.06,Vector3(0,.02,0),basket,16)
	for i in range(8):
		var angle:=i*TAU/8.;var panel:MeshInstance3D=r._box(root,Vector3(.15,.21,.025),Vector3(sin(angle)*.18,.15,cos(angle)*.18),glow)
		panel.rotation=Vector3(-.32,angle,0)
	root.set_meta("water_lamp",Vector3(0,.17,0));root.set_meta("market_water_lamp_material",glow)
	r._merge_meshes(root)
	var body:=StaticBody3D.new();body.name="MarketWaterLanternPick";body.set_meta("house_id",row.house_id);body.set_meta("cell_id",row.cell_id)
	var house:Dictionary=r._house_record(row.house_id);body.set_meta("cell",house.cells.filter(func(c):return str(c.id)==row.cell_id)[0].duplicate(true));root.add_child(body)
	var shape:=CollisionShape3D.new();var volume:=CylinderShape3D.new();volume.radius=Plan.RADIUS;volume.height=.27;shape.shape=volume;shape.position.y=.13;body.add_child(shape)

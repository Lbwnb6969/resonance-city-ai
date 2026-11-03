extends RefCounted
const Plan=preload("res://scripts/world/city_creation_plaza_pergola.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func _box(r,parent,size:Vector3,at:Vector3,material:Material,collision:bool=false)->void:
	r._box(parent,size,at,material)
	if collision:
		var shape:=CollisionShape3D.new();shape.shape=BoxShape3D.new();shape.shape.size=size;shape.position=at;parent.get_node("PergolaSolids").add_child(shape)
static func _basin(r,parent,stone:Material,water:Material)->void:
	var faces:Array[Vector3]=[]
	for i in range(8):
		var a:=Vector2(cos(i*TAU/8.+PI/8.),sin(i*TAU/8.+PI/8.));var b:=Vector2(cos((i+1)*TAU/8.+PI/8.),sin((i+1)*TAU/8.+PI/8.))
		var oa:=Vector3(a.x*.86,.38,a.y*.86);var ob:=Vector3(b.x*.86,.38,b.y*.86);var ia:=Vector3(a.x*.66,.38,a.y*.66);var ib:=Vector3(b.x*.66,.38,b.y*.66);var low_a:=Vector3(a.x*.86,0.,a.y*.86);var low_b:=Vector3(b.x*.86,0.,b.y*.86);var inner_a:=Vector3(ia.x,.10,ia.z);var inner_b:=Vector3(ib.x,.10,ib.z)
		faces.append_array([oa,ia,ib,oa,ib,ob,low_a,oa,ob,low_a,ob,low_b,ia,inner_a,inner_b,ia,inner_b,ib])
	var rim:MeshInstance3D=r._triangles(parent,faces,Color.WHITE);rim.material_override=stone;rim.name="OctagonalSpringBasin"
	r._cylinder(parent,.65,.65,.025,Vector3.UP*.18,water,8).name="SpringWaterSurface"
	r._cylinder(parent,.11,.14,.36,Vector3.UP*.30,stone,8);r._cylinder(parent,.18,.19,.055,Vector3.UP*.50,stone,8)
	r._cylinder(parent,.018,.032,.34,Vector3.UP*.68,water,8).name="SpringJet"
	var points:=PackedVector3Array()
	for y:float in [0.,.39]:
		for i in range(8):points.append(Vector3(cos(i*TAU/8.+PI/8.)*.86,y,sin(i*TAU/8.+PI/8.)*.86))
	var shape:=CollisionShape3D.new();shape.name="OctagonalBasinSolid";var hull:=ConvexPolygonShape3D.new();hull.points=points;shape.shape=hull;parent.get_node("PergolaSolids").add_child(shape)
static func build(owner,row:Dictionary)->void:
	var r=owner.demo.town;var city=owner.demo.state;var root:Node3D=owner._root("PlazaPergola_"+str(row.loop_key).trim_prefix("loop/"),row,Vector3(row.center.x,row.y,row.center.y),float(row.yaw));root.set_meta("plaza_pergola_fountain",true)
	owner._contact(root,Vector2.ONE*2.5);var body:=StaticBody3D.new();body.name="PergolaSolids";body.set_meta("plaza_loop",row.loop_key);body.collision_layer=1;root.add_child(body)
	var timber:Material=Wall.source(Color("a58960"),null,"component",Wall.Kind.TIMBER);var dark:Material=Wall.source(Color("82674b"),null,"component",Wall.Kind.TIMBER);var stone:Material=owner._stone("c7bfa7");var water:=ShaderMaterial.new();water.shader=preload("res://scripts/visual/shaders/creation_palace_water.gdshader")
	for foot:Vector3 in row.feet:
		_box(r,root,Vector3(.24,.10,.24),foot+Vector3.UP*.05,stone,true);var height:float=2.5-foot.y;_box(r,root,Vector3(.13,height,.13),foot+Vector3.UP*(.10+height*.5),timber,true)
	for x:float in [-1.32,1.32]:_box(r,root,Vector3(.16,.18,3.16),Vector3(x,2.60,0),dark,true)
	for z:float in [-1.32,1.32]:_box(r,root,Vector3(3.16,.18,.16),Vector3(0,2.60,z),dark,true)
	for i in range(7):_box(r,root,Vector3(.085,.10,3.08),Vector3(lerpf(-1.20,1.20,float(i)/6.),2.74,0),timber,true)
	for side in range(4):
		for i in range(4):
			var at:=Vector3(lerpf(-1.18,1.18,float(i)/3.),2.78,1.32).rotated(Vector3.UP,side*PI*.5);var leaf:=MeshInstance3D.new();leaf.mesh=r.foliage.parts("shrub",posmod(i,3)).canopy;leaf.material_override=r.foliage.material("canopy");leaf.scale=Vector3(.24,.24,.28);leaf.position=at;root.add_child(leaf)
			if i in [0,3]:
				var drop:MeshInstance3D=leaf.duplicate();root.add_child(drop);drop.position=at-Vector3.UP*.26;drop.scale=Vector3(.15,.40,.15)
	_basin(r,root,stone,water);r._merge_meshes(root,false);root.set_meta("collision_footprints",row.feet);root.set_meta("derived_only",true)

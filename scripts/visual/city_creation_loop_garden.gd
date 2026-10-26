extends RefCounted
static func build(owner:Node3D,row:Dictionary)->void:
	var town=owner.demo.town;var at:Vector2=row.center;var y:float=owner.demo.state.ground_height(at)
	var root:Node3D=owner._root("LoopHeart_"+str(row.owner_id),row,Vector3(at.x,y,at.y))
	owner._contact(root,Vector2.ONE*2.8)
	var stone:Material=owner._stone("c9bea5");var water:Material=town._material(Color("71aca6"))
	town._cylinder(root,1.12,1.08,.12,Vector3.UP*.06,owner._stone("a6a28e"),32)
	town._cylinder(root,.91,.91,.045,Vector3.UP*.145,water,24)
	for i in range(24):
		var a:=TAU*i/24.;var block:MeshInstance3D=town._box(root,Vector3(.24,.14,.13),Vector3(sin(a),.18,cos(a)),stone);block.rotation.y=a
	town._cylinder(root,.17,.09,.62,Vector3.UP*.43,stone,12)
	town._cylinder(root,.35,.39,.09,Vector3.UP*.78,stone,20)
	town._cylinder(root,.31,.31,.025,Vector3.UP*.84,water,20)
	town._cylinder(root,.018,.009,.32,Vector3.UP*1.0,water,8)
	for i in range(8):
		var angle:=TAU*i/8.;owner._bloom(root,Vector3(sin(angle)*1.23,.12,cos(angle)*1.23),i)
	town._merge_meshes(root)
	var body:=StaticBody3D.new();body.name="LoopFountainCollision";body.collision_layer=1;root.add_child(body)
	var shape:=CollisionShape3D.new();var cylinder:=CylinderShape3D.new();cylinder.radius=1.12;cylinder.height=1.2;shape.shape=cylinder;shape.position.y=.6;body.add_child(shape)

extends RefCounted
## Ground architecture with a full foundation, entrance and authored silhouettes.
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func ring(parent:Node3D,at:Vector3,radius:float,material:Material,tilt:Vector3=Vector3.ZERO)->MeshInstance3D:
	var mesh:=TorusMesh.new();mesh.inner_radius=radius-.035;mesh.outer_radius=radius+.035;mesh.rings=48;mesh.ring_segments=8
	var node:=MeshInstance3D.new();parent.add_child(node);node.mesh=mesh;node.material_override=material;node.position=at;node.rotation=tilt;return node
static func build(owner:Node3D,item:Dictionary,preview:bool=false)->Node3D:
	var r=owner.demo.town;var root:=Node3D.new();root.name="PlacedWonder_"+str(item.id);owner.add_child(root)
	var at:=Plan.position(item);root.position=Vector3(at.x,float(item.base_y),at.y);root.rotation.y=float(item.yaw);root.set_meta("plan",item);root.set_meta("landmark_id",item.id)
	var stone:Material=Wall.source(Color("dfd0b1"),null,"component",Wall.Kind.STONE)
	var dark:Material=Wall.source(Color("a79779"),null,"component",Wall.Kind.STONE)
	var gold:Material=r._material(Color("b6995c"));gold.metallic=.45;gold.roughness=.4
	var size:Vector2=Plan.SIZES[item.blueprint]
	owner._contact(root,size+Vector2.ONE*.3,Vector3(0,-.008,0))
	r._box(root,Vector3(size.x,.24,size.y),Vector3.UP*.105,dark)
	r._box(root,Vector3(size.x-.12,.065,size.y-.12),Vector3.UP*.245,stone)
	for i in range(3):r._box(root,Vector3(1.15,.07,.26),Vector3(0,.035+i*.07,size.y*.5+.35-i*.16),stone)
	match str(item.blueprint):
		"riverbank":lighthouse(r,root,stone,dark,gold)
		"highland":theatre(r,root,stone,gold)
		"courtyard":garden(r,root,stone,gold)
		"artisan":clocktower(r,root,stone,dark,gold)
	r._merge_meshes(root)
	if item.blueprint=="highland":
		var orbit:=Node3D.new();root.add_child(orbit);orbit.name="CelestialOrbit";orbit.position=Vector3(0,1.88,-.15);orbit.set_meta("turn",.12)
		for i in range(3):ring(orbit,Vector3.ZERO,.66+i*.07,gold,Vector3(.65+i*.67,.4*i,.3*i))
	if item.blueprint=="artisan":
		for i in range(2):
			var hand:=Node3D.new();root.add_child(hand);hand.position=Vector3(0,4.75,.635);hand.set_meta("turn",.018 if i==0 else .09)
			r._box(hand,Vector3(.045,.46+i*.26,.035),Vector3(0,.17+i*.1,0),gold)
	if not preview:
		var body:=StaticBody3D.new();root.add_child(body);body.collision_layer=1;body.collision_mask=0;body.set_meta("landmark_id",item.id)
		var collision:=CollisionShape3D.new();body.add_child(collision);var shape:=BoxShape3D.new();shape.size=Vector3(size.x,Plan.HEIGHTS[item.blueprint],size.y+.54);collision.shape=shape;collision.position=Vector3(0,shape.size.y*.5,.27)
		root.set_meta("footprint",Plan.footprint(item));root.set_meta("entrance",Plan.entrance(item))
	return root
static func lighthouse(r,root:Node3D,stone:Material,dark:Material,gold:Material)->void:
	r._cylinder(root,.98,1.16,.30,Vector3.UP*.43,dark,24)
	r._cylinder(root,.62,.82,3.2,Vector3.UP*2.16,stone,16)
	for y:float in [1.,2.3,3.8]:
		r._cylinder(root,.92,1.,.14,Vector3.UP*y,dark,32)
		for i in range(12):r._cylinder(root,.025,.03,.28,Vector3(sin(i*TAU/12.)*.83,y+.18,cos(i*TAU/12.)*.83),gold,6)
	for x:float in [-.33,.33]:r._cylinder(root,.10,.14,1.15,Vector3(x,.88,.82),stone,10)
	r._box(root,Vector3(.88,.16,.42),Vector3(0,1.5,.85),stone)
	var door:Material=r._material(Color("526b64"));r._box(root,Vector3(.45,.9,.08),Vector3(0,.78,.83),door)
	for x:float in [-.52,.52]:r._box(root,Vector3(.09,1.32,.09),Vector3(x,4.57,0),gold)
	var beam:MeshInstance3D=r._box(root,Vector3(1.22,.12,.16),Vector3(0,5.26,0),gold);beam.rotation.z=-.12
	for i in range(9):r._cylinder(root,.011,.011,1.05-i*.025,Vector3(-.4+i*.1,4.58,0),gold,6)
	var warm:Material=r._material(Color("e6b46e"));warm.emission_enabled=true;warm.emission=Color("e4a458");warm.emission_energy_multiplier=.4
	r._cylinder(root,.24,.3,.3,Vector3(0,4.13,.18),warm,12);root.set_meta("water_lamp",Vector3(0,4.13,.18))
static func theatre(r,root:Node3D,stone:Material,gold:Material)->void:
	for tier in range(4):
		var radius:=1.18+tier*.28
		for i in range(17):
			var angle:float=lerpf(-PI*.64,PI*.64,float(i)/16.)
			var step:MeshInstance3D=r._box(root,Vector3(.36,.22,.35),Vector3(sin(angle)*radius,.4+tier*.2,-cos(angle)*radius),stone);step.rotation.y=-angle
	r._cylinder(root,.95,1.02,.18,Vector3(0,.39,.45),stone,32)
	for side:float in [-1.,1.]:
		r._cylinder(root,.13,.19,2.35,Vector3(side*1.65,1.5,-1.15),stone,12)
		r._box(root,Vector3(.5,.14,.5),Vector3(side*1.65,2.72,-1.15),stone)
	r._box(root,Vector3(3.8,.2,.6),Vector3(0,2.9,-1.15),stone)
	r._cylinder(root,.13,.28,.95,Vector3(0,1.02,-.15),gold,12)
	for side:float in [-1.,1.]:ring(root,Vector3(side*1.65,3.2,-1.15),.2,gold,Vector3(PI*.5,0,0))
static func garden(r,root:Node3D,stone:Material,gold:Material)->void:
	var leaf:Material=r._material(Color("6b8d61"));var blossom:Material=r._material(Color("d7a4a2"))
	for side:float in [-1.,1.]:
		r._box(root,Vector3(.48,.44,3.65),Vector3(side*1.78,.5,-.05),stone)
		for i in range(7):
			var at:=Vector3(side*1.78,.88,-1.55+i*.48);r._box(root,Vector3(.39,.28,.38),at,leaf)
			r._box(root,Vector3(.18,.12,.18),at+Vector3.UP*.2,blossom)
	for x:float in [-1.4,1.4]:
		for z:float in [-1.4,1.4]:r._cylinder(root,.10,.16,2.15,Vector3(x,1.35,z),stone,12)
	for side in range(4):
		var frame:=Node3D.new();root.add_child(frame);frame.rotation.y=side*PI*.5
		r._box(frame,Vector3(3.25,.14,.18),Vector3(0,2.48,1.4),stone)
		for i in range(18):
			var a:=i*PI/18.;var b:=(i+1)*PI/18.;var from:=Vector3(cos(a)*1.5,2.48+sin(a)*.9,0);var to:=Vector3(cos(b)*1.5,2.48+sin(b)*.9,0)
			var rib:MeshInstance3D=r._cylinder(frame,.023,.023,from.distance_to(to),(from+to)*.5,gold,6);rib.quaternion=Quaternion(Vector3.UP,(to-from).normalized())
	var glass:Material=r._material(Color("a6cbbf",.18));glass.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA;glass.roughness=.25
	var pane:=MeshInstance3D.new();root.add_child(pane);var dome:=SphereMesh.new();dome.radius=1.48;dome.height=2.96;dome.radial_segments=32;dome.rings=16;pane.mesh=dome;pane.material_override=glass;pane.position.y=2.48;pane.scale.y=.58
	r._cylinder(root,.58,.68,.20,Vector3.UP*.42,stone,24);r._cylinder(root,.25,.38,.62,Vector3.UP*.8,stone,20)
	ring(root,Vector3.UP*1.14,.38,gold)
static func clocktower(r,root:Node3D,stone:Material,dark:Material,gold:Material)->void:
	r._box(root,Vector3(1.6,3.8,1.5),Vector3(0,2.23,-.2),stone)
	for y:float in [.65,2.1,3.9]:r._box(root,Vector3(1.95,.14,1.85),Vector3(0,y,-.2),dark)
	var window:Material=r._material(Color("526e69"))
	for side:float in [-1.,1.]:
		for y:float in [1.4,2.8]:r._box(root,Vector3(.055,.6,.45),Vector3(side*.815,y,-.2),window)
	r._box(root,Vector3(.68,1.16,.07),Vector3(0,.85,.565),window)
	for x:float in [-.55,.55]:r._cylinder(root,.08,.12,1.32,Vector3(x,.96,.78),stone,10)
	r._box(root,Vector3(1.45,.16,.5),Vector3(0,1.68,.78),stone)
	r._box(root,Vector3(1.7,1.6,1.45),Vector3(0,4.76,-.2),stone)
	ring(root,Vector3(0,4.75,.56),.64,gold,Vector3(PI*.5,0,0))
	for i in range(12):
		var a:=i*TAU/12.;var tick:MeshInstance3D=r._box(root,Vector3(.035,.11,.035),Vector3(sin(a)*.52,4.75+cos(a)*.52,.6),gold);tick.rotation.z=-a
	r._cylinder(root,.15,.95,.65,Vector3(0,5.84,-.2),gold,4)
	for i in range(7):r._cylinder(root,.04,.05,.45+sin(i*PI/6.)*.45,Vector3(-1.28+i*.19,.55,-1.2),gold,8)
static func animate(root:Node3D,time:float)->void:
	for child:Node3D in root.get_children():
		if not child.has_meta("turn"):continue
		if child.name=="CelestialOrbit":child.rotation.y=time*float(child.get_meta("turn"))
		else:child.rotation.z=-time*float(child.get_meta("turn"))

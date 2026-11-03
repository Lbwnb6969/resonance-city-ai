extends RefCounted
const Kind=preload("res://scripts/world/city_creation_grillhouse.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
static func food(r,color:Color)->Material:
	var key:="roast/"+color.to_html()
	if not r.materials.has(key):
		var material:=StandardMaterial3D.new();material.albedo_color=color;material.roughness=.56;material.set_meta("creation_solid",true);material.set_meta("creation_fixed_color",true);r.materials[key]=material
	return r.materials[key]
static func skewer(r,parent:Node3D,at:Vector3,size_value:float=1.)->void:
	var root:=Node3D.new();root.name="RoastSkewer";parent.add_child(root);root.position=at;root.scale=Vector3.ONE*size_value
	r._box(root,Vector3(.025,.025,.32),Vector3.ZERO,Wall.component(r,Color("987550"),Wall.Kind.TIMBER))
	for i in range(3):
		var meat:MeshInstance3D=r._box(root,Vector3(.095,.075,.075),Vector3(0,.035,-.085+i*.085),food(r,Color("b8703e") if i!=1 else Color("aa6038")));meat.rotation.y=(i-1)*.15
		r._box(root,Vector3(.068,.009,.015),Vector3(0,.075,-.085+i*.085),food(r,Color("e5ba80")))
		for mark:float in [-.021,.021]:r._box(root,Vector3(.008,.004,.061),Vector3(mark,.077,-.085+i*.085),food(r,Color("653f2b")))
static func clear(r,at:Vector3,own_cell:String)->bool:
	var p:=Vector2(at.x,at.z)
	for house:Dictionary in r.state.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)==0 and str(cell.id)!=own_cell and Frame.distance(Frame.footprint(house,cell),p)<.29:return false
	for road:Dictionary in r.state.roads:
		for i in range(road.points.size()-1):
			var a:=Vector2(road.points[i][0],road.points[i][1]);var b:=Vector2(road.points[i+1][0],road.points[i+1][1])
			if p.distance_to(Geometry2D.get_closest_point_to_segment(p,a,b))<float(road.get("width",1.1))*.5+.29:return false
	return true
static func signature(r,house:Dictionary)->int:
	if not Kind.active_house(house):return 0
	var bounds:Rect2=Frame.house_bounds(house).grow(2.);var nearby:Array=[]
	for other:Dictionary in r.state.houses:
		for cell:Dictionary in other.cells:
			if int(cell.level)==0 and bounds.intersects(Frame.bounds(Frame.footprint(other,cell)),true):nearby.append(Frame.corners(Frame.footprint(other,cell)))
	return hash([nearby,r.state.roads])
static func attach(r,root:Node3D,house:Dictionary)->void:
	if not Kind.active_house(house):return
	var entry:Dictionary=r._primary_entrance(house)
	if entry.is_empty():return
	for node:Node3D in root.find_children("*","Node3D",true,false):
		var data:Dictionary=node.get_meta("entrance",{})
		if data.get("cell_id","")==entry.cell_id and data.get("side",Vector2i.ZERO)==entry.side:build(r,node,entry,house,root);return
	# Curved and special shells publish the same entry but own their wall nodes.
	var wall:=Node3D.new();wall.name="GrillFrontage";root.add_child(wall)
	var frame=preload("res://scripts/world/city_creation_house_frame.gd");var at:Vector3=r._entrance_point(entry,Vector3.ZERO);var origin:Vector2=frame.origin(house);var local:=origin+(Vector2(at.x,at.z)-origin).rotated(frame.yaw(house));var side:Vector2=frame.normal(entry)
	wall.position=Vector3(local.x,at.y,local.y);wall.rotation.y=atan2(side.x,side.y)-frame.yaw(house);build(r,wall,entry,house,root)
static func build(r,wall:Node3D,entry:Dictionary,house:Dictionary,root:Node3D)->void:
	wall.set_meta("grillhouse_frontage",true)
	var wood:=Wall.component(r,Color("84604a"),Wall.Kind.TIMBER);var iron:=Wall.component(r,Color("3b413e"),Wall.Kind.METAL)
	for stripe in range(0 if wall.has_meta("arcade_recess") else 8):
		var x:float=-.78+stripe*.195;var color:=Color("a85940") if stripe%2==0 else Color("e6d4ab")
		r._quad(wall,Vector3(x,1.43,.12),Vector3(x+.195,1.43,.12),Vector3(x+.195,1.25,.69),Vector3(x,1.25,.69),color)
		r._box(wall,Vector3(.195,.12,.045),Vector3(x+.0975,1.2,.68),r._material(color))
	r._box(wall,Vector3(.40,.34,.06),Vector3(.59,.94,.11),wood)
	var sign:=Node3D.new();sign.name="GrillhouseSign";wall.add_child(sign);sign.position=Vector3(.59,.94,.17);sign.rotation.x=PI*.5;skewer(r,sign,Vector3.ZERO,.8)
	var at:=Vector3(.82,0,.16)
	var yaw_basis:=Basis(Vector3.UP,Frame.yaw(house));var pivot:=Vector3(house.origin[0],0,house.origin[1]);var pose:=Transform3D(yaw_basis,pivot-yaw_basis*pivot)*wall.global_transform*Transform3D(Basis.IDENTITY,at)
	if not clear(r,pose.origin,str(entry.cell_id)):return
	root.set_meta("grill_supply_transform",pose)
	var grill:=Node3D.new();grill.name="CharcoalGrill";wall.add_child(grill);grill.position=at
	for x:float in [-.20,.20]:r._box(grill,Vector3(.035,.45,.28),Vector3(x,.26,0),iron)
	r._box(grill,Vector3(.50,.15,.34),Vector3(0,.52,0),iron)
	r._box(grill,Vector3(.40,.035,.26),Vector3(0,.60,0),r._material(Color("302d29")))
	for x:float in [-.18,-.12,-.06,0.,.06,.12,.18]:r._box(grill,Vector3(.018,.02,.31),Vector3(x,.65,0),iron)
	var ember:MeshInstance3D=r._box(grill,Vector3(.35,.015,.20),Vector3(0,.622,0),r._material(Color("db6d32")));ember.name="GrillEmbers";ember.set_meta("creation_live_visual",true)
	var material:=StandardMaterial3D.new();material.albedo_color=Color("db6d32");material.emission_enabled=true;material.emission=Color("e99038");material.emission_energy_multiplier=.65;material.set_meta("creation_fixed_color",true);ember.material_override=material
	r.bakery_smoke.build(grill,Vector3(0,.63,0))
static func supply(r,house:Dictionary,status:Dictionary)->bool:
	if not Kind.active_house(house):return false
	var id:=str(house.id)
	if r.house_roots.has(id):
		var parent:Node3D=r.house_roots[id];r.BakerySmoke.update(parent,status)
		var ember:=parent.find_child("GrillEmbers",true,false) as MeshInstance3D
		if ember!=null:ember.visible=r.BakerySmoke.working(status)
	var pose:Variant=r.house_roots[id].get_meta("grill_supply_transform",{}) if r.house_roots.has(id) else {}
	var count:=mini(3,int(status.stock));var fingerprint:=hash([Kind.KIND,count,pose])
	if r.bread_fingerprints.get(id,-1)==fingerprint:r.bread_roots[id].set_meta("stock",int(status.stock));return true
	r._remove_cached(id,r.bread_roots,r.bread_fingerprints);var root:=Node3D.new();root.name="RoastSupply_"+id;r.bread_layer.add_child(root);r.bread_roots[id]=root;r.bread_fingerprints[id]=fingerprint;root.set_meta("stock",int(status.stock));root.set_meta("displayed_skewers",0)
	if pose is Transform3D:
		root.transform=pose
		for i in range(count):skewer(r,root,Vector3(-.14+i*.14,.67,0),.8)
		root.set_meta("displayed_skewers",count)
	r._merge_meshes(root);return true

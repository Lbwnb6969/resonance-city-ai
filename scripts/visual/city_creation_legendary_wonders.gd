extends RefCounted
## Four original silhouettes share masonry micro-normal/contact AO and real roof supports.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Support=preload("res://scripts/visual/city_creation_roof_crown_support.gd")
static func stone(color:String="e5d7ba")->Material:return Wall.source(Color(color),null,"component",Wall.Kind.STONE)
static func _ring(parent:Node3D,radius:float,tube:float,at:Vector3,material:Material,tilt:Vector3=Vector3.ZERO)->MeshInstance3D:
	var mesh:=TorusMesh.new();mesh.inner_radius=radius-tube;mesh.outer_radius=radius+tube;mesh.rings=40;mesh.ring_segments=8
	var node:=MeshInstance3D.new();node.mesh=mesh;node.material_override=material;node.position=at;node.rotation=tilt;parent.add_child(node);return node
static func build(owner:Node3D,row:Dictionary)->Node3D:
	var r=owner.demo.town;var house:Dictionary=r._house_record(str(row.house_id))
	if house.is_empty():return null
	var cell:Dictionary=house.cells[0]
	for candidate:Dictionary in house.cells:
		if candidate.kind=="room" and int(candidate.level)>int(cell.level):cell=candidate
	var at:Vector2=Frame.center(house,cell);var feet:Array=[];var height:=-INF
	for corner:Vector2 in [Vector2(-.45,-.45),Vector2(.45,-.45),Vector2(-.45,.45),Vector2(.45,.45)]:
		var point:=at+Frame.direction(house,corner)
		var query:=PhysicsRayQueryParameters3D.create(Vector3(point.x,30,point.y),Vector3(point.x,-2,point.y),1)
		var hit:Dictionary=r.get_world_3d().direct_space_state.intersect_ray(query)
		if not hit.is_empty() and str(hit.collider.get_meta("house_id",""))==str(house.id):feet.append({"at":corner,"y":hit.position.y});height=maxf(height,float(hit.position.y))
	if feet.size()<3:return null
	# Clear the actual roof under this disk, keeping distant trim out of its height.
	height=maxf(height,Support.height_for(r,str(house.id),at,.74))
	var root:=Node3D.new();root.name={"riverbank":"PoseidonLighthouseCrown","highland":"CelestialArmillaryRing","courtyard":"HangingSymphonyCanopy","artisan":"PerpetualAstronomicalDial"}[row.family]
	owner.add_child(root);root.position=Vector3(at.x,height+.035,at.y);root.rotation.y=Frame.yaw(house);root.set_meta("plan",row);root.set_meta("roof_feet",feet)
	var cream:=stone();var gold:Material=r._material(Color("c8a25d"));gold.metallic=.42;gold.roughness=.42
	for foot:Dictionary in feet:
		var depth:=height+.035-float(foot.y)
		r._cylinder(root,.055,.09,depth+.035,Vector3(foot.at.x,-depth*.5,foot.at.y),cream,8)
	r._cylinder(root,.70,.74,.10,Vector3.UP*.05,cream,32)
	match str(row.family):
		"riverbank":_lighthouse(r,root,cream,gold)
		"highland":_theatre(r,root,cream,gold)
		"courtyard":_garden(r,root,cream,gold)
		"artisan":_clock(r,root,cream,gold)
	r._merge_meshes(root)
	# Movable open rings/hands stay outside the static masonry batch.
	if row.family=="highland":
		for i in range(3):
			var ring:=_ring(root,.54+i*.045,.018,Vector3.UP*1.05,gold,Vector3(.65+i*.7,.4*i,.45*i));ring.set_meta("orbit",{"base":ring.rotation,"speed":.055+.025*i})
	if row.family=="artisan":
		for i in range(2):
			var pivot:=Node3D.new();root.add_child(pivot);pivot.position=Vector3(0,1.22,.43)
			r._box(pivot,Vector3(.018,.24+i*.12,.018),Vector3.UP*(.10+i*.06),r._material(Color("36463f")))
			pivot.set_meta("clock_hand",.018 if i==0 else .09)
	return root
static func _lighthouse(r,root:Node3D,cream:Material,gold:Material)->void:
	var wick:Material=r._material(Color("e7bc73"));wick.emission_enabled=true;wick.emission=Color("e0a456");wick.emission_energy_multiplier=.35
	r._cylinder(root,.105,.105,.16,Vector3(0,1.61,.07),wick,10)
	root.set_meta("water_lamp",Vector3(0,1.61,.07))
	r._cylinder(root,.27,.39,1.35,Vector3.UP*.77,cream,12)
	for y:float in [.65,1.35]:
		r._cylinder(root,.48,.50,.08,Vector3.UP*y,cream,24)
		_ring(root,.43,.018,Vector3.UP*(y+.17),gold)
		for i in range(8):r._cylinder(root,.012,.014,.17,Vector3(sin(i*TAU/8.)*.43,y+.08,cos(i*TAU/8.)*.43),gold,6)
	for i in range(22):
		var angle:=i*.53;var step:MeshInstance3D=r._box(root,Vector3(.17,.035,.12),Vector3(sin(angle)*.32,.18+i*.052,cos(angle)*.32),cream);step.rotation.y=angle
	r._cylinder(root,.15,.24,.08,Vector3.UP*1.47,gold,8)
	r._cylinder(root,.20,.18,.045,Vector3.UP*1.75,gold,8)
	for x:float in [-.24,.24]:r._box(root,Vector3(.045,.62,.045),Vector3(x,2.02,0),gold)
	var lintel:MeshInstance3D=r._box(root,Vector3(.56,.055,.07),Vector3(0,2.34,0),gold);lintel.rotation.z=-.18
	r._box(root,Vector3(.55,.055,.07),Vector3(0,1.72,0),gold)
	for i in range(7):r._cylinder(root,.006,.006,.50-i*.012,Vector3(-.18+i*.06,2.02,0),gold,5)
static func _theatre(r,root:Node3D,cream:Material,gold:Material)->void:
	for tier in range(3):
		var radius:=.42+tier*.12
		for i in range(15):
			var angle:=float(i)*PI/14.;var block:MeshInstance3D=r._box(root,Vector3(.13,.075,.13),Vector3(cos(angle)*radius,.15+tier*.08,sin(angle)*radius),cream);block.rotation.y=-angle
	r._cylinder(root,.29,.31,.04,Vector3.UP*.12,cream,24)
	r._cylinder(root,.075,.14,.60,Vector3.UP*.55,gold,12)
	_ring(root,.28,.025,Vector3.UP*.88,gold)
static func _garden(r,root:Node3D,cream:Material,gold:Material)->void:
	var green:Material=r._material(Color("6f986a"));var bloom:Material=r._material(Color("d995ad"))
	for x:float in [-.48,.48]:
		for z:float in [-.48,.48]:
			r._cylinder(root,.045,.065,.94,Vector3(x,.55,z),cream,8)
			r._cylinder(root,.10,.12,.05,Vector3(x,.12,z),gold,8)
	for tier in range(3):
		var radius:=.56-tier*.09;var y:=.25+tier*.26
		_ring(root,radius,.07,Vector3.UP*y,cream)
		for i in range(9):
			var angle:=i*TAU/9.+tier*.6;var at:=Vector3(sin(angle)*radius,y,cos(angle)*radius)
			preload("res://scripts/visual/city_creation_garden_vines.gd").append(r,root,at,angle,i+tier*9)
			r._crown(root,at+Vector3.UP*.035,Vector3(.065,.045,.065),Color("ae617d") if i%2 else Color("c29b55"))
	var glass:Material=r._material(Color("93c9ba",.28));glass.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA;glass.roughness=.25
	var dome:=SphereMesh.new();dome.radius=.65;dome.height=1.3;dome.radial_segments=24;dome.rings=12
	var pane:=MeshInstance3D.new();root.add_child(pane);pane.mesh=dome;pane.material_override=glass;pane.position.y=1.03;pane.scale.y=.55
	for side in range(4):
		var arch:=Node3D.new();root.add_child(arch);arch.rotation.y=side*PI*.5
		for i in range(14):
			var a:=i*PI/14.;var b:=(i+1)*PI/14.;var start:=Vector3(cos(a)*.64,1.03+sin(a)*.36,0);var end:=Vector3(cos(b)*.64,1.03+sin(b)*.36,0)
			var rib:MeshInstance3D=r._cylinder(arch,.012,.012,start.distance_to(end),(start+end)*.5,gold,6);rib.quaternion=Quaternion(Vector3.UP,(end-start).normalized())
	r._cylinder(root,.05,.13,.60,Vector3.UP*.48,gold,8)
static func _clock(r,root:Node3D,cream:Material,gold:Material)->void:
	r._cylinder(root,.26,.34,1.10,Vector3.UP*.65,cream,12)
	for x:float in [-.48,.48]:r._cylinder(root,.024,.030,1.20,Vector3(x,.75,-.21),gold,8)
	r._box(root,Vector3(1.08,.055,.10),Vector3(0,1.35,-.21),gold)
	_ring(root,.47,.045,Vector3(0,1.22,.36),gold,Vector3(PI*.5,0,0))
	_ring(root,.35,.012,Vector3(0,1.22,.38),gold,Vector3(PI*.5,0,0))
	for i in range(12):
		var angle:=i*TAU/12.;var tick:MeshInstance3D=r._box(root,Vector3(.018,.07,.025),Vector3(sin(angle)*.41,1.22+cos(angle)*.41,.39),gold);tick.rotation.z=-angle
	for i in range(9):
		var height:=.40+.60*(1.-absf(i-4.)/4.)
		r._cylinder(root,.032,.035,height,Vector3(-.48+i*.12,1.35+height*.5,-.21),gold,8)
	for side in range(4):
		var angle:=side*TAU/4.+PI*.25;var at:=Vector3(sin(angle)*.57,.18,cos(angle)*.57)
		r._cylinder(root,.045,.07,.23,at+Vector3.UP*.12,gold,8)
		r._crown(root,at+Vector3.UP*.29,Vector3(.10,.10,.10),Color("d2b26e"))
static func memorial(owner:Node3D,row:Dictionary)->Node3D:
	var r=owner.demo.town;var root:=Node3D.new();root.name="PoemResonanceMonument_"+str(row.house_id);owner.add_child(root)
	root.position=Vector3(row.at.x,row.y,row.at.y);root.rotation.y=row.yaw;root.set_meta("plan",row)
	var cream:=stone("cfc1a3");var gold:Material=r._material(Color("bd9957"))
	owner._contact(root,Vector2(1.10,1.10))
	r._cylinder(root,.39,.44,.06,Vector3.UP*.03,cream,12)
	r._cylinder(root,.20,.25,.30,Vector3.UP*.21,cream,8)
	var index:=0
	for family:String in row.groups:
		var motif:=Node3D.new();root.add_child(motif);motif.position=Vector3((index%2-.5)*.25,.40,(floori(index/2.)-.5)*.25);index+=1
		match family:
			"riverbank":
				for x:float in [-.07,.07]:r._box(motif,Vector3(.02,.22,.025),Vector3(x,.11,0),gold)
				r._box(motif,Vector3(.17,.02,.03),Vector3.UP*.22,gold)
				for i in range(3):r._cylinder(motif,.004,.004,.17,Vector3(-.04+i*.04,.11,0),gold,5)
			"highland":_ring(motif,.09,.009,Vector3.UP*.12,gold,Vector3(.6,0,.4));_ring(motif,.09,.009,Vector3.UP*.12,gold,Vector3(1.3,.5,0))
			"courtyard":r._cylinder(motif,.09,.06,.10,Vector3.UP*.06,cream,8);r._crown(motif,Vector3.UP*.15,Vector3(.16,.15,.16),Color("74976a"))
			"artisan":_ring(motif,.09,.016,Vector3.UP*.12,gold,Vector3(PI*.5,0,0));r._box(motif,Vector3(.01,.08,.015),Vector3(0,.15,.01),gold)
	r._merge_meshes(root);return root
static func animate(root:Node3D,time:float)->void:
	for node:Node in root.get_children():
		if node.has_meta("orbit"):
			var orbit:Dictionary=node.get_meta("orbit");node.rotation=Vector3(orbit.base)+Vector3(0,time*float(orbit.speed),0)
		if node.has_meta("clock_hand"):node.rotation.z=-time*float(node.get_meta("clock_hand"))

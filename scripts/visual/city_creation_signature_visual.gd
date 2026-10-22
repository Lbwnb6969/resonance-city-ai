extends RefCounted
const ClockworkLandmarks=preload("res://scripts/visual/city_creation_clockwork_landmarks.gd")
const Amphitheater=preload("res://scripts/visual/city_creation_amphitheater.gd")
## Distinct landmark details augment the same house/cell picking and jobs.
static func decorate(renderer,root: Node3D,house: Dictionary)->void:
	var kind:=str(house.get("signature",""))
	if kind.is_empty():return
	root.set_meta("signature",kind)
	if kind=="bell_keep":_keep(renderer,root,house)
	elif kind=="watermill":_mill(renderer,root,house)
	elif kind=="music_academy":_academy(renderer,root,house)
	elif kind=="botanical_palace":ClockworkLandmarks.palace(renderer,root,house)
	elif kind=="clockwork_depot":ClockworkLandmarks.depot(renderer,root,house)
	elif kind=="floating_amphitheater":Amphitheater.build(renderer,root,house)

static func _keep(renderer,root: Node3D,house: Dictionary)->void:
	var base:=Vector3(float(house.origin[0]),float(house.get("base_y",0)),float(house.origin[1]))
	var stone: Material=renderer._material(Color("c6baa0"));var bronze: Material=renderer._material(Color("af965b"))
	for level in [1,2,3]:
		renderer._box(root,Vector3(1.90,.13,1.90),base+Vector3(0,level*1.7,0),stone)
	for side: Vector2i in [Vector2i.DOWN,Vector2i.RIGHT,Vector2i.UP,Vector2i.LEFT]:
		var frame:=Node3D.new();root.add_child(frame);frame.position=base+Vector3(side.x*1.15,5.46,side.y*1.15);frame.rotation.y=atan2(float(side.x),float(side.y))
		var ring: MeshInstance3D=renderer._cylinder(frame,.34,.34,.045,Vector3.ZERO,bronze,24);ring.rotation.x=PI*.5
		var face: MeshInstance3D=renderer._cylinder(frame,.29,.29,.05,Vector3(0,0,.025),renderer._material(Color("e7dcc0")),24);face.rotation.x=PI*.5
		for i in range(12):
			var angle:=TAU*i/12;renderer._box(frame,Vector3(.025,.035,.015),Vector3(sin(angle)*.245,cos(angle)*.245,.058),bronze)
		renderer._box(frame,Vector3(.025,.20,.018),Vector3(0,.09,.068),bronze)
		var hand: MeshInstance3D=renderer._box(frame,Vector3(.16,.025,.018),Vector3(.065,0,.07),bronze);hand.rotation.z=.35
	root.set_meta("landmark_bell_asset",renderer.Tower.BELL_PATH)

static func _mill(renderer,root: Node3D,house: Dictionary)->void:
	var plan: Dictionary=renderer.state.Signatures.wheel_plan(renderer.state,house)
	var axle:=Node3D.new();axle.name="WaterwheelAxle";root.add_child(axle)
	axle.position=Vector3(plan.at.x,float(house.get("base_y",0))+.87,plan.at.y);axle.rotation.y=atan2(plan.side.x,plan.side.y)
	var rotor:=Node3D.new();rotor.name="Rotor";axle.add_child(rotor)
	var dark: Material=renderer._material(Color("71533c"));var wood: Material=renderer._material(Color("ad8556"));var iron: Material=renderer._material(Color("536356"))
	for z: float in [-.22,.22]:
		for i in range(16):
			var a:=TAU*i/16;var b:=TAU*(i+1)/16
			var edge:=MeshInstance3D.new();var mesh:=BoxMesh.new();mesh.size=Vector3(.41,.095,.075);edge.mesh=mesh;edge.material_override=dark
			edge.position=Vector3(cos((a+b)*.5),sin((a+b)*.5),z);edge.rotation.z=(a+b)*.5+PI*.5;rotor.add_child(edge)
	for i in range(16):
		var angle:=TAU*i/16
		var paddle: MeshInstance3D=renderer._box(rotor,Vector3(.20,.095,.53),Vector3(cos(angle)*.98,sin(angle)*.98,0),wood);paddle.rotation.z=angle
		if i%2==0:
			var spoke: MeshInstance3D=renderer._box(rotor,Vector3(.95,.055,.065),Vector3(cos(angle)*.46,sin(angle)*.46,0),wood);spoke.rotation.z=angle
	var hub: MeshInstance3D=renderer._cylinder(rotor,.14,.14,.65,Vector3.ZERO,iron,12);hub.rotation.x=PI*.5
	renderer._merge_meshes(rotor)
	for part: MeshInstance3D in rotor.find_children("*","MeshInstance3D",true,false):part.set_meta("creation_live_visual",true)
	root.set_meta("waterwheel",{"at":plan.at,"side":plan.side,"radius":1.08,"paddles":16,"angular_speed":TAU/12.,"river_clearance":plan.clearance})

static func _academy(renderer,root: Node3D,house: Dictionary)->void:
	var at:=Vector3(float(house.origin[0])+.9,float(house.get("base_y",0)),float(house.origin[1])-.91)
	var stone: Material=renderer._material(Color("dfcda6"));var gold: Material=renderer._material(Color("b89c5f"))
	for x: float in [-.9,.9]:
		renderer._box(root,Vector3(.72,.10,.14),at+Vector3(x,3.13,0),stone)
		for line in range(5):renderer._box(root,Vector3(.56,.012,.018),at+Vector3(x,2.99+line*.045,-.09),gold)
		for i in range(3):
			renderer._cylinder(root,.035,.035,.035,at+Vector3(x-.16+i*.16,3.02+i*.045,-.105),gold,8).rotation.x=PI*.5
	root.set_meta("academy",{"radius":renderer.state.concert_radius(str(house.id)),"ensemble":"string_quartet","free_placement":true})

static func animate(renderer,_delta: float)->void:
	var id: String=renderer.state.signature_bonuses().get("watermill_id","")
	if id.is_empty() or not renderer.house_roots.has(id):return
	var rotor: Node3D=renderer.house_roots[id].get_node_or_null("WaterwheelAxle/Rotor")
	if rotor!=null:rotor.rotation.z=-renderer.living_music.metronomes.last_clock*TAU/12.

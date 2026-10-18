extends RefCounted
## Later landmarks retain ordinary cells/roles while adding picked glass and clocks.
const VAULT_SEGMENTS := 12
const VAULT_BAYS := 6
const Water=preload("res://scripts/visual/shaders/creation_palace_water.gdshader")

static func palace(renderer,root: Node3D,house: Dictionary)->void:
	var center:=Vector3(float(house.origin[0]),float(house.get("base_y",0.))+.19,float(house.origin[1])+1.8)
	var glass: Array[Vector3]=[]
	var iron: Material=renderer._material(Color("34594d"),.7)
	var cream: Material=renderer._material(Color("d8cba9"))
	var group:=Node3D.new();group.name="CrystalBotanicalVaults";root.add_child(group)
	for nave in range(3):
		_vault(renderer,group,glass,center+Vector3((nave-1)*1.54,0,0),3.15 if nave==1 else 2.72,iron,cream,nave==1,float(nave-1))
	var mesh: MeshInstance3D=renderer._triangles(group,glass,Color.WHITE)
	mesh.name="BotanicalVaultGlass";mesh.material_override=renderer.conservatory.ensure_palace_material();mesh.set_meta("creation_live_visual",true);mesh.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	# Allocate real roof triangles to their nearest original floor cell, so
	# clicking the dome retains the usual house/cell editing identity.
	var picks: Dictionary={};var cells: Dictionary={}
	for index in range(0,glass.size(),3):
		var at: Vector3=(glass[index]+glass[index+1]+glass[index+2])/3.
		var best: Dictionary={};var distance:=INF
		for cell: Dictionary in house.cells:
			if cell.kind!="terrace":continue
			var point:=Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8)
			var gap:=point.distance_squared_to(Vector2(at.x,at.z))
			if gap<distance:best=cell;distance=gap
		var key:=str(best.id)
		if not picks.has(key):picks[key]=PackedVector3Array();cells[key]=best
		picks[key].append_array(PackedVector3Array([glass[index],glass[index+1],glass[index+2]]))
	for key: String in picks:
		var body:=StaticBody3D.new();body.name="PalaceGlassPick_"+key;body.set_meta("house_id",str(house.id));body.set_meta("cell_id",key);body.set_meta("cell",cells[key].duplicate(true))
		var shape:=ConcavePolygonShape3D.new();shape.backface_collision=true;shape.set_faces(picks[key])
		var collider:=CollisionShape3D.new();collider.shape=shape;body.add_child(collider);group.add_child(body)
	var stone: Material=renderer._material(Color("c7b693"))
	renderer._cylinder(group,.69,.72,.14,center+Vector3.UP*.07,stone,24)
	for i in range(24):
		var angle:=TAU*i/24;var rim: MeshInstance3D=renderer._box(group,Vector3(.17,.16,.20),center+Vector3(cos(angle)*.66,.20,sin(angle)*.66),cream);rim.rotation.y=-angle
	var material:=ShaderMaterial.new();material.shader=Water
	renderer._cylinder(group,.59,.59,.025,center+Vector3.UP*.20,material,24).name="PalaceFountainWater"
	renderer._cylinder(group,.12,.10,.62,center+Vector3.UP*.38,stone,12)
	renderer._cylinder(group,.26,.31,.09,center+Vector3.UP*.73,cream,20)
	renderer._cylinder(group,.023,.018,.30,center+Vector3.UP*.91,material,8)
	var soil: Material=renderer._material(Color("986d4a"))
	for i in range(12):
		var angle:=TAU*i/12
		if absf(wrapf(angle+PI*.5,-PI,PI))<.3:continue
		var at:=center+Vector3(cos(angle)*1.80,0,sin(angle)*1.80)
		renderer._cylinder(group,.20,.26,.29,at+Vector3.UP*.145,soil,10)
		for leaf in range(5):
			var heading:=TAU*leaf/5.+angle
			var crown: MeshInstance3D=renderer._crown(group,at+Vector3(cos(heading)*.17,.48+float(leaf%2)*.10,sin(heading)*.17),Vector3(.15,.34,.10),Color("56876a") if i%2==0 else Color("80a566"));crown.rotation.z=sin(heading)*.4
		for flower in range(3):renderer._crown(group,at+Vector3(sin(flower*2.1)*.16,.75+flower*.07,cos(flower*2.1)*.16),Vector3(.08,.055,.08),Color("d69eb6") if i%2==0 else Color("ebc68c"))
	root.set_meta("botanical_palace",{"radius":2.35,"height":3.15,"vaults":3,"vault_ridges":[[-1.54,2.72],[0.,3.15],[1.54,2.72]],"glass_triangles":glass.size()/3,"pick_cells":picks.size(),"plant_beds":11,"fountain":true,"afterglow_seconds":180.})

static func _vault_point(center: Vector3,angle: float,z: float,height: float)->Vector3:
	return center+Vector3(cos(angle)*.77,1.05+(height-1.05)*sin(angle),z)

static func _vault(renderer,group: Node3D,glass: Array[Vector3],center: Vector3,height: float,iron: Material,stone: Material,central: bool,outer_side: float)->void:
	# Three connected Victorian barrel vaults share an open interior. The
	# central entrance remains clear below its glazed arched fanlight.
	for bay in range(VAULT_BAYS+1):
		var z: float=lerpf(-2.25,2.25,float(bay)/VAULT_BAYS)
		for side in range(VAULT_SEGMENTS):
			var a:=PI*side/VAULT_SEGMENTS;var b:=PI*(side+1)/VAULT_SEGMENTS
			var p:=_vault_point(center,a,z,height);var q:=_vault_point(center,b,z,height)
			_beam(renderer,group,p,q,.034,iron)
			if bay<VAULT_BAYS:
				var next_z: float=lerpf(-2.25,2.25,float(bay+1)/VAULT_BAYS)
				var r:=_vault_point(center,b,next_z,height);var t:=_vault_point(center,a,next_z,height)
				glass.append_array([p,q,r,p,r,t])
				if side%3==0:_beam(renderer,group,p,t,.027,iron)
			if bay in [0,VAULT_BAYS]:
				var door:=central and bay==0 and absf(((p+q)*.5).x-center.x)<.50
				var low: float=1.72 if door else 0.
				var foot_p:=Vector3(p.x,center.y+low,p.z);var foot_q:=Vector3(q.x,center.y+low,q.z)
				glass.append_array([foot_p,p,q,foot_p,q,foot_q])
				if side%3==0:_beam(renderer,group,foot_p,p,.042,iron)
		for side: float in [-1.,1.]:
			var foot:=center+Vector3(side*.77,0,z)
			_beam(renderer,group,foot,foot+Vector3.UP*1.05,.05,iron)
	for side: float in [-1.,1.]:
		var foot:=center+Vector3(side*.77,0,-2.25);var finish:=foot+Vector3(0,0,4.5)
		_beam(renderer,group,foot,finish,.075,stone)
		_beam(renderer,group,foot+Vector3.UP*1.05,finish+Vector3.UP*1.05,.045,iron)
		# Only exterior naves need a vertical glass side; shared walls stay open.
		if side==outer_side:
			glass.append_array([foot,finish+Vector3.UP*1.05,finish,foot,foot+Vector3.UP*1.05,finish+Vector3.UP*1.05])

static func _beam(renderer,parent: Node3D,a: Vector3,b: Vector3,width: float,material: Material)->void:
	var direction: Vector3=(b-a).normalized()
	var node: MeshInstance3D=renderer._box(parent,Vector3(width,a.distance_to(b),width),(a+b)*.5,material)
	var right:=Vector3.FORWARD.cross(direction)
	if right.length_squared()<.00001:right=Vector3.RIGHT.cross(direction)
	right=right.normalized();node.basis=Basis(right,direction,right.cross(direction))

static func depot(renderer,root: Node3D,house: Dictionary)->void:
	var center:=Vector3(float(house.origin[0])+1.8,float(house.get("base_y",0.)),float(house.origin[1]))
	var iron: Material=renderer._material(Color("37594f"));var bronze: Material=renderer._material(Color("bd9b5d"));var cream: Material=renderer._material(Color("e6d6af"))
	for side: Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
		var frame:=Node3D.new();frame.name="DepotClock_%d_%d"%[side.x,side.y];root.add_child(frame);frame.position=center+Vector3(side.x*1.02,5.95,side.y*1.02);frame.rotation.y=atan2(float(side.x),float(side.y))
		var rim: MeshInstance3D=renderer._cylinder(frame,.43,.43,.06,Vector3.ZERO,bronze,24);rim.rotation.x=PI*.5
		var face: MeshInstance3D=renderer._cylinder(frame,.37,.37,.07,Vector3(0,0,.035),cream,24);face.rotation.x=PI*.5
		for i in range(12):
			var angle:=TAU*i/12;var mark: MeshInstance3D=renderer._box(frame,Vector3(.025,.05,.025),Vector3(sin(angle)*.31,cos(angle)*.31,.08),iron);mark.rotation.z=-angle
		renderer._box(frame,Vector3(.025,.25,.028),Vector3(0,.11,.10),iron)
		var hand: MeshInstance3D=renderer._box(frame,Vector3(.21,.025,.028),Vector3(.09,0,.11),iron);hand.rotation.z=.4
	for x: float in [-2.40,0.,2.40]:
		var at:=center+Vector3(x,0,2.64)
		renderer._cylinder(root,.055,.055,2.22,at+Vector3.UP*1.11,iron,8)
		_beam(renderer,root,at+Vector3.UP*1.55,at+Vector3(0,2.27,.64),.045,bronze)
	renderer._box(root,Vector3(5.65,.12,.82),center+Vector3(0,2.34,2.98),iron)
	for x: float in [-1.5,1.5]:
		renderer._box(root,Vector3(.42,.36,.07),center+Vector3(x,1.85,2.78),cream)
		renderer._box(root,Vector3(.26,.035,.08),center+Vector3(x,1.94,2.82),iron)
		renderer._box(root,Vector3(.04,.23,.08),center+Vector3(x,1.82,2.82),iron)
	root.set_meta("clockwork_depot",{"clock_faces":4,"dispatch":"connected_tram_station","speed_multiplier":1.2,"free_placement":true})

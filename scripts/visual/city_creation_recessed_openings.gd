extends RefCounted
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Shell=preload("res://scripts/visual/city_creation_recessed_facade.gd")
const Glass=preload("res://scripts/visual/city_creation_facade_glass.gd")
const Arch=preload("res://scripts/visual/city_creation_architecture.gd")
static func build(r,job,frame,wall:Node3D,active:bool)->void:
	var plan:Dictionary=wall.get_meta("recessed_facade");var stone:Material=Wall.source(job.palette[0].lerp(Color("e7d9b9"),.5),null,"component",Wall.Kind.STONE)
	for index in range(plan.holes.size()):
		var hole:Dictionary=plan.holes[index];var x:float=hole.x;var radius:float=hole.radius
		var group:=posmod(hash([job.house.seed,frame.cell.id,wall.rotation.y,index]),3)
		if plan.door:
			door(r,wall,job.palette,stone,Glass.material(r,group),active);continue
		var faces:Array[Vector3]=Arch._extrude(Shell.outline(hole),.012)
		var pane:MeshInstance3D=r._triangles(wall,faces,Color.WHITE);pane.position.z=-.035;pane.material_override=Glass.material(r,group);pane.name="RecessedArchedGlass"
		for side:float in [-1.,1.]:
			r._box(wall,Vector3(.07,.43,.10),Vector3(x+side*(radius+.035),.805,.055),stone).name="RecessedStoneJamb"
			var leaf:=Node3D.new();wall.add_child(leaf);leaf.position=Vector3(x+side*(radius+.08),.815,.075);leaf.rotation.y=side*deg_to_rad(16.);leaf.name="AngledWoodShutter"
			r._box(leaf,Vector3(.13,.47,.028),Vector3(side*.065,0,0),r._material(job.palette[2]))
			for slat in range(4):r._box(leaf,Vector3(.12,.018,.018),Vector3(side*.065,-.16+slat*.105,.022),r._material(job.palette[2].lightened(.13)))
		for i in range(12):
			var a:=PI*i/12.;var b:=PI*(i+1)/12.
			var polygon:=PackedVector2Array([Vector2(x+cos(a)*radius,.99+sin(a)*radius),Vector2(x+cos(b)*radius,.99+sin(b)*radius),Vector2(x+cos(b)*(radius+.07),.99+sin(b)*(radius+.07)),Vector2(x+cos(a)*(radius+.07),.99+sin(a)*(radius+.07))])
			var arch:MeshInstance3D=r._triangles(wall,Arch._extrude(polygon,.10),stone.albedo_color);arch.position.z=.055;arch.material_override=stone;arch.name="RecessedArchVoussoir"
		r._box(wall,Vector3(radius*2.+.20,.085,.24),Vector3(x,.565,.025),stone).name="RecessedStoneSill"
		r._box(wall,Vector3(.025,.40,.035),Vector3(x,.80,-.005),r._material(job.palette[2])).name="RecessedWoodMullion"
	wall.set_meta("ancient_openings",true)
static func door(r,wall:Node3D,palette:Array,stone:Material,glass:Material,active:bool)->void:
	var wood:Material=r._material(palette[2])
	for side:float in [-1.,1.]:r._box(wall,Vector3(.09,1.25,.10),Vector3(side*.295,.775,.055),stone).name="RecessedDoorJamb"
	r._box(wall,Vector3(.68,.09,.14),Vector3(0,1.365,.055),stone).name="RecessedDoorLintel"
	r._box(wall,Vector3(.43,1.00,.035),Vector3(0,.68,-.035),wood).name="RecessedDoorPanel"
	r._box(wall,Vector3(.43,.14,.012),Vector3(0,1.25,-.035),glass).name="RecessedDoorTransom"
	r._box(wall,Vector3(.50,.035,.055),Vector3(0,1.175,-.005),stone)
	for x:float in [-.11,0.,.11]:r._box(wall,Vector3(.015,.79,.012),Vector3(x,.68,-.01),r._material(palette[2].lightened(.13)))
	r._cylinder(wall,.025,.025,.035,Vector3(.15,.67,.015),r._material(Color("d6bb74")))
	if not active:
		r._box(wall,Vector3(.96,.10,.54),Vector3(0,.055,.3),r._material(Color("d7c8a5")))
		r._box(wall,Vector3(1.04,.045,.68),Vector3(0,.022,.55),r._material(Color("bdb797")))

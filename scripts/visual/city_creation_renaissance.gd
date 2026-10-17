extends RefCounted
## Original octagonal terracotta crown, articulated stone ribs and lit lantern.
static func build(renderer, root: Node3D, house: Dictionary, plans: Array) -> void:
	root.set_meta("domes",plans.duplicate(true))
	var covered := {}
	for plan: Dictionary in plans:
		for id: String in plan.cell_ids: covered[id]=true
		var dome := Node3D.new(); dome.name="RenaissanceDome_"+str(plan.cell_ids[0]); root.add_child(dome)
		dome.position=Vector3(plan.center.x,plan.y,plan.center.y)
		var body := StaticBody3D.new(); body.set_meta("house_id",str(house.id)); body.set_meta("cell_id",str(plan.cell_ids[0]))
		for cell: Dictionary in house.cells:
			if str(cell.id)==str(plan.cell_ids[0]): body.set_meta("cell",cell.duplicate(true))
		dome.add_child(body)
		var r := float(plan.radius); var h := float(plan.height)
		var stone: Material = renderer._material(Color("e6d2ad"))
		renderer._cylinder(dome,r*.99,r*1.02,.24,Vector3(0,.12,0),stone,8).name="OctagonalDrum"
		var tiles: Array[Vector3] = []; var ribs: Array[Vector3] = []
		for side in range(8):
			var angle := TAU*side/8.0+PI/8.0
			var next := angle+TAU/8.0
			for band in range(9):
				var t0 := float(band)/9.0; var t1 := float(band+1)/9.0
				var a := _point(angle,t0,r,h); var b := _point(next,t0,r,h)
				var c := _point(next,t1,r,h); var d := _point(angle,t1,r,h)
				tiles.append_array([a,c,b,a,d,c])
				var width := .022/r
				ribs.append_array([_point(angle-width,t0,r*1.015,h),_point(angle+width,t0,r*1.015,h),_point(angle+width,t1,r*1.015,h),_point(angle-width,t0,r*1.015,h),_point(angle+width,t1,r*1.015,h),_point(angle-width,t1,r*1.015,h)])
		var surface: MeshInstance3D = renderer._triangles(dome,tiles,Color("b76546")); surface.name="TerracottaDome"
		renderer._triangles(dome,ribs,Color("ebd6ad")).name="EightStoneRibs"
		var lantern_y := .24+h
		renderer._cylinder(dome,r*.22,r*.25,.09,Vector3(0,lantern_y,0),stone,8)
		var glass := StandardMaterial3D.new(); glass.albedo_color=Color("d8ba7d"); glass.emission_enabled=true; glass.emission=Color("f6c477"); glass.emission_energy_multiplier=.35
		renderer._cylinder(dome,r*.15,r*.15,.38,Vector3(0,lantern_y+.23,0),glass,8).name="LanternWindows"
		for side in range(8):
			var angle := TAU*side/8.0+PI/8.0
			renderer._cylinder(dome,.025,.025,.40,Vector3(cos(angle)*r*.18,lantern_y+.23,sin(angle)*r*.18),stone,6)
		renderer._cylinder(dome,0,r*.25,.27,Vector3(0,lantern_y+.56,0),renderer._material(Color("b76546")),8)
		renderer._cylinder(dome,.024,.024,.18,Vector3(0,lantern_y+.77,0),renderer._material(Color("c9ab62")),6)
		var pick_faces := PackedVector3Array()
		for mesh: MeshInstance3D in dome.find_children("*","MeshInstance3D",true,false):
			for point: Vector3 in mesh.mesh.get_faces(): pick_faces.append(mesh.transform*point)
		var shape := ConcavePolygonShape3D.new(); shape.backface_collision=true; shape.set_faces(pick_faces)
		var collision := CollisionShape3D.new(); collision.shape=shape; collision.name="DomePick"; body.add_child(collision)
	root.set_meta("dome_cells",covered)

static func _point(angle: float, t: float, radius: float, height: float) -> Vector3:
	var r := radius*(.18+.82*cos(t*PI*.5))
	return Vector3(cos(angle)*r,.24+height*sin(t*PI*.5),sin(angle)*r)

static func palette(base: Array) -> Array:
	return [base[0].lerp(Color("d8bd8c"),.55),base[1].lerp(Color("b76546"),.75),base[2]]

static func facade(renderer, wall: Node3D, door: bool, upper: bool) -> void:
	var stone: Material = renderer._material(Color("e6d2ad"))
	# Shallow triangular pediment and keystone sit outside the recessed wall.
	if not door:
		renderer._triangles(wall,[Vector3(-.38,1.16,.19),Vector3(.38,1.16,.19),Vector3(0,1.40,.19)],Color("e6d2ad")).name="ClassicalPediment"
		renderer._box(wall,Vector3(.82,.065,.12),Vector3(0,1.15,.19),stone)
	if upper:
		renderer._box(wall,Vector3(.97,.07,.35),Vector3(0,.39,.26),stone)
		var iron: Material = renderer._material(Color("46594d"))
		for i in range(7): renderer._cylinder(wall,.015,.015,.37,Vector3(-.43+i*.143,.61,.41),iron,6)
		renderer._box(wall,Vector3(.96,.035,.035),Vector3(0,.81,.41),iron)

static func art(renderer, wall: Node3D, level: int) -> void:
	# Delivered tapestry hangs beside the existing window; never across a door.
	var wood: Material = renderer._material(Color("8e7052"))
	renderer._box(wall,Vector3(.22,.53,.025),Vector3(0,.92,.20),renderer._material(Color("9e536d"))).name="DeliveredTapestry"
	renderer._box(wall,Vector3(.35,.035,.045),Vector3(0,1.20,.22),wood)
	for i in range(3): renderer._box(wall,Vector3(.17,.025,.02),Vector3(0,.77+i*.14,.22),renderer._material(Color("dcba75")))
	if level < 2: return
	for x in range(3):
		for y in range(3):
			var pane: MeshInstance3D = renderer._box(wall,Vector3(.097,.145,.022),Vector3(.46+(x-1)*.105,.80+y*.155,.185),renderer._material([Color("c48b68"),Color("7caaa5"),Color("d6bc70")][(x+y)%3]))
			pane.name="DeliveredStainedGlass"

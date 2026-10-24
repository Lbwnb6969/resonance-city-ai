extends RefCounted
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
## A real recessed frontage has this outer colonnade and a separately owned
## inner wall. Original metric geometry reuses Architecture's polygon extrusion;
## classical_frontage_details.gd contains no recovered colonnade parameters.
const Architecture := preload("res://scripts/visual/city_creation_architecture.gd")
const HALF := 0.9
const HALF_OPENING := 0.64
const SPRING := 0.80
const RISE := 0.57
const HEIGHT := 1.7
const DEPTH := 0.16
const RETREAT := 0.38
const SEGMENTS := 14

static func build(renderer,wall: Node3D,body: StaticBody3D,palette: Array,pointed:bool=false) -> Dictionary:
	if int(body.get_meta("cell").level)>0: return preload("res://scripts/visual/city_creation_neoclassical_civic.gd").terrace(renderer,wall,body,palette)
	var pieces: Array[MeshInstance3D] = []
	var base_color: Color = palette[0].lerp(Color("c9c5ae"),0.72)
	var trim_color := Color("ded4b9")
	var stone: Material = Wall.source(base_color,null,"component",Wall.Kind.STONE)
	var trim: Material = Wall.source(trim_color,null,"component",Wall.Kind.STONE)
	var upper: Array[Vector3] = []
	# The spandrel carries the upper storey; it starts above the open shaft
	# height instead of filling the walkway with an invisible full-height box.
	for side: float in [-1.0,1.0]:
		var low := -HALF if side<0.0 else HALF_OPENING
		var high := -HALF_OPENING if side<0.0 else HALF
		upper.append_array(Architecture._extrude(PackedVector2Array([Vector2(low,SPRING),Vector2(high,SPRING),Vector2(high,HEIGHT),Vector2(low,HEIGHT)]),DEPTH))
	for index in range(SEGMENTS):
		var a := _arch(float(index)/float(SEGMENTS),HALF_OPENING,RISE,pointed)
		var b := _arch(float(index+1)/float(SEGMENTS),HALF_OPENING,RISE,pointed)
		upper.append_array(Architecture._extrude(PackedVector2Array([a,b,Vector2(b.x,HEIGHT),Vector2(a.x,HEIGHT)]),DEPTH))
	var spandrel: MeshInstance3D = renderer._triangles(wall,upper,base_color)
	spandrel.name="ArcadeSpandrel"
	pieces.append(spandrel)
	# Discrete stone voussoirs clarify the arch curve. All lie outside the
	# same conservative .64m clear opening and join its actual collision.
	for index in range(SEGMENTS):
		var t0 := (float(index)+0.035)/float(SEGMENTS)
		var t1 := (float(index+1)-0.035)/float(SEGMENTS)
		var a := _arch(t0,HALF_OPENING,RISE,pointed)
		var b := _arch(t1,HALF_OPENING,RISE,pointed)
		var c := _arch(t1,HALF_OPENING+0.075,RISE+0.075,pointed)
		var d := _arch(t0,HALF_OPENING+0.075,RISE+0.075,pointed)
		var faces := Architecture._extrude(PackedVector2Array([a,b,c,d]),DEPTH+0.035)
		var block: MeshInstance3D = renderer._triangles(wall,faces,trim_color.darkened(float(index%3)*0.025))
		block.name="ArcadeVoussoir_%02d" % index
		pieces.append(block)
	for side: float in [-1.0,1.0]:
		var x := side*0.775
		var shaft: MeshInstance3D = renderer._cylinder(wall,0.075,0.067,0.57,Vector3(x,0.445,0),stone,12)
		shaft.name="ArcadeColumn"
		pieces.append(shaft)
		pieces.append(renderer._box(wall,Vector3(0.22,0.085,0.20),Vector3(x,0.0425,0),trim))
		pieces.append(renderer._box(wall,Vector3(0.17,0.085,0.17),Vector3(x,0.1275,0),stone))
		pieces.append(renderer._cylinder(wall,0.087,0.087,0.055,Vector3(x,0.748,0),trim,12))
		pieces.append(renderer._box(wall,Vector3(0.225,0.070,0.20),Vector3(x,0.792,0),trim))
	var cornice: MeshInstance3D = renderer._box(wall,Vector3(1.8,0.10,0.205),Vector3(0,HEIGHT-0.055,0),trim)
	cornice.name="ArcadeCornice"
	pieces.append(cornice)
	# Every physical face comes from the production mesh, including column
	# caps, stone soffits and trim; the central arch remains genuinely empty.
	var faces := PackedVector3Array()
	var names: Array[String] = []
	for mesh: MeshInstance3D in pieces:
		names.append(str(mesh.name))
		for point: Vector3 in mesh.mesh.get_faces(): faces.append(mesh.transform*point)
	var shape := ConcavePolygonShape3D.new()
	shape.backface_collision=true
	shape.set_faces(faces)
	var collision := CollisionShape3D.new()
	collision.name="ArcadeOuterPick"
	collision.shape=shape
	collision.transform=body.global_transform.affine_inverse()*wall.global_transform
	body.add_child(collision)
	var lamp: Material = renderer._material(Color("e8c47b"))
	lamp.emission_enabled=true; lamp.emission=Color("e8b565"); lamp.emission_energy_multiplier=.35
	renderer._cylinder(wall,.012,.012,.20,Vector3(0,1.50,-.17),stone,6).name="ArcadeLampChain"
	renderer._box(wall,Vector3(.12,.15,.12),Vector3(0,1.34,-.17),lamp).name="ArcadeHangingLamp"
	var report := {"pointed":pointed,"half_width":HALF_OPENING,"spring":SPRING,"rise":RISE,"clear_height":SPRING+RISE,"height":HEIGHT,"depth":DEPTH,"retreat":RETREAT,"segments":SEGMENTS,"column_diameter":0.15,"column_foot_width":0.22,"triangles":faces.size()/3,"mesh_names":names,"collision_name":str(collision.name),"outer_frame":wall.transform}
	wall.set_meta("arcade",report.duplicate(true))
	return report

static func _arch(t: float,radius: float = HALF_OPENING,rise: float = RISE,pointed:bool=false) -> Vector2:
	if pointed:
		var x:float=t*2.-1.
		return Vector2(x*radius,SPRING+rise*sqrt(maxf(0.,4.-pow(absf(x)+1.,2.)))/sqrt(3.))
	var angle := PI*(1.0-t)
	return Vector2(cos(angle)*radius,SPRING+sin(angle)*rise)

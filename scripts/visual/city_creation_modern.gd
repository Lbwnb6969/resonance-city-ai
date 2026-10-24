extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Warm white rounded cantilevers, full-height glass and planted roofs/walls.
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const Archetypes=preload("res://scripts/visual/city_creation_modern_archetypes.gd")
const Plan=preload("res://scripts/world/city_creation_skybridge_plan.gd")
static func palette(base:Array)->Array:
	return [base[0].lerp(Color("eee9d9"),.90),Color("71916f"),base[2].lerp(Color("b8976a"),.74)]
static func facade(renderer,wall:Node3D,door:bool,seed_value:int,p:Array,house:Dictionary={},cell:Dictionary={},direction:Vector2i=Vector2i.DOWN)->void:
	if house.is_empty():preload("res://scripts/visual/city_creation_modern_envelope.gd").facade(renderer,wall,door,seed_value,p)
	else:preload("res://scripts/visual/city_creation_alpine_modern.gd").facade(renderer,wall,door,p,house,cell,direction)

static func terrace(renderer,node:Node3D,cell:Dictionary,cells:Array,y:float,p:Array)->void:
	_slab(renderer,node,Vector3(0,y+.16,0),Vector2(2.18,2.18),.16,p[0])
	for side:Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
		var occupied:=false
		for other:Dictionary in cells:
			if int(other.x)==int(cell.x)+side.x and int(other.z)==int(cell.z)+side.y and int(other.level)==int(cell.level):occupied=true;break
		if occupied:continue
		var rail:MeshInstance3D=renderer._box(node,Vector3(.035,.54,1.9) if side.x!=0 else Vector3(1.9,.54,.035),Vector3(side.x*.99,y+.50,side.y*.99),renderer._material(Color.WHITE))
		rail.material_override=renderer.conservatory.ensure_material();rail.set_meta("creation_live_visual",true)
static func prepare(city:RefCounted,house:Dictionary)->Dictionary:
	var roofs:Array=[]
	for cell:Dictionary in house.cells:
		if cell.kind!="room":continue
		var covered:=false
		for other:Dictionary in house.cells:
			if int(other.x)==int(cell.x) and int(other.z)==int(cell.z) and int(other.level)>int(cell.level):covered=true;break
		if covered:continue
		roofs.append(cell)
	return {"roofs":roofs,"bridges":Plan.for_house(city,house)}

static func roof(renderer,root:Node3D,house:Dictionary,p:Array,cell:Dictionary)->Dictionary:
	return preload("res://scripts/visual/city_creation_alpine_modern.gd").roof(renderer,root,house,p,cell)

static func build(renderer,root:Node3D,house:Dictionary,p:Array)->void:
	var parts:=prepare(renderer.state,house);var roofs:Array=[]
	for cell:Dictionary in parts.roofs:roofs.append(roof(renderer,root,house,p,cell))
	root.set_meta("modern_roofs",roofs)
	for bridge:Dictionary in parts.bridges:_bridge(renderer,root,house,bridge,p)
	root.set_meta("skybridges",parts.bridges)
static func _slab(renderer,parent:Node3D,at:Vector3,size:Vector2,height:float,color:Color, architectural:bool=true)->void:
	var ring:Array[Vector2]=[];var r:=.18
	for corner:int in range(4):
		var a:=PI*.5*corner
		var center:=Vector2(cos(a+PI*.25),sin(a+PI*.25))*sqrt(2.)*(size*.5-Vector2.ONE*r)
		for i in range(5):ring.append(center+Vector2(cos(a+float(i)*PI*.5/4.),sin(a+float(i)*PI*.5/4.))*r)
	var faces:Array[Vector3]=[]
	for i in range(ring.size()):
		var p:=Vector3(ring[i].x,0,ring[i].y);var q:=Vector3(ring[(i+1)%ring.size()].x,0,ring[(i+1)%ring.size()].y)
		var low:=Vector3.DOWN*height*.5;var high:=-low
		faces.append_array([at+high,at+q+high,at+p+high,at+low,at+p+low,at+q+low,at+p+low,at+p+high,at+q+high,at+p+low,at+q+high,at+q+low])
	var mesh:MeshInstance3D=renderer._triangles(parent,faces,color)
	if architectural:Wall.apply(mesh,Wall.Kind.CANTILEVER)
static func _bridge(renderer,root:Node3D,house:Dictionary,plan:Dictionary,p:Array)->void:
	var node:=Node3D.new();node.name="ModernSkybridge_"+str(plan.from_cell)+"_"+str(plan.to_cell);root.add_child(node)
	var middle:Vector2=Frame.inverse(house,(plan.a+plan.b)*.5);var direction:Vector2=(plan.b-plan.a).normalized().rotated(Frame.yaw(house))
	node.position=Vector3(middle.x,plan.floor_y,middle.y);node.rotation.y=atan2(direction.x,direction.y)
	_slab(renderer,node,Vector3.ZERO,Vector2(plan.width+.16,plan.length),.14,p[0])
	var wood:Material=renderer._material(p[2]);var white:Material=Wall.source(p[0], null, "component", Wall.Kind.CANTILEVER)
	for side:float in [-1.,1.]:
		var pane:MeshInstance3D=renderer._box(node,Vector3(.028,1.24,plan.length),Vector3(side*plan.width*.5,.66,0),white)
		pane.material_override=renderer.conservatory.ensure_material(true);pane.set_meta("creation_live_visual",true)
		for z:float in [-.5,0.,.5]:renderer._box(node,Vector3(.04,1.28,.04),Vector3(side*plan.width*.5,.66,z*plan.length),wood)
		renderer._box(node,Vector3(.055,.055,plan.length),Vector3(side*plan.width*.5,1.30,0),wood)
	_slab(renderer,node,Vector3(0,1.36,0),Vector2(plan.width+.16,plan.length+.12),.07,p[0])
	for z:float in [-.28,.28]:
		renderer._box(node,Vector3(.18,.16,.28),Vector3(plan.width*.5-.13,.14,z*plan.length),wood)
		renderer._crown(node,Vector3(plan.width*.5-.13,.36,z*plan.length),Vector3(.15,.20,.19),Color("64895c"))
	var source:Dictionary={}
	for cell:Dictionary in house.cells:
		if str(cell.id)==str(plan.from_cell):source=cell
	var body:=StaticBody3D.new();body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(plan.from_cell));body.set_meta("cell",source.duplicate(true));body.set_meta("skybridge",true);node.add_child(body)
	renderer._cell_box_shape(body,Vector3(plan.width+.16,.14,plan.length),Vector3.ZERO)

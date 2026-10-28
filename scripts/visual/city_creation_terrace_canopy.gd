extends RefCounted
## A single sky-open upper terrace per house gets a small shaded garden.
const UNIT:=1.8
const FLOOR:=1.7
const FOOTPRINT:=Rect2(-.78,-.72,1.02,1.44)

static func choose(houses: Array,house: Dictionary) -> Dictionary:
	var cells: Array=house.cells.duplicate()
	cells.sort_custom(func(a,b):return str(a.id).naturalnocasecmp_to(str(b.id))<0)
	for cell: Dictionary in cells:
		if str(cell.kind)!="terrace" or int(cell.level)<=0: continue
		var center:=Vector2(float(house.origin[0])+int(cell.x)*UNIT,float(house.origin[1])+int(cell.z)*UNIT)
		var bounds:=Rect2(center+FOOTPRINT.position,FOOTPRINT.size)
		var terrace_y:=float(house.get("base_y",0.0))+int(cell.level)*FLOOR
		var covered:=false
		for other: Dictionary in houses:
			for above: Dictionary in other.cells:
				if float(other.get("base_y",0.0))+int(above.level)*FLOOR<=terrace_y+.002: continue
				var at:=Vector2(float(other.origin[0])+int(above.x)*UNIT,float(other.origin[1])+int(above.z)*UNIT)
				# Include the existing roof overhang, including misaligned hosts.
				if Rect2(at-Vector2.ONE*1.02,Vector2.ONE*2.04).intersects(bounds): covered=true;break
			if covered: break
		if not covered: return {"cell_id":str(cell.id),"level":int(cell.level),"center":center}
	return {}

static func build(renderer,node: Node3D,body: StaticBody3D,base: float,palette: Array) -> void:
	var wood: Material=renderer._material(palette[2].darkened(.20))
	for x in [-.70,.16]:
		for z in [-.63,.63]: renderer._box(node,Vector3(.065,1.24,.065),Vector3(x,base+.62,z),wood)
	for x in [-.70,.16]: renderer._box(node,Vector3(.08,.09,1.42),Vector3(x,base+1.24,0),wood)
	for z in [-.63,.63]: renderer._box(node,Vector3(1.02,.08,.08),Vector3(-.27,base+1.24,z),wood)
	for z in [-.40,0,.40]: renderer._box(node,Vector3(1.02,.045,.045),Vector3(-.27,base+1.19,z),wood)
	var cloth: Array[Vector3]=[]
	for strip in range(8):
		var z0: float=-.61+float(strip)*1.22/8.0
		var z1: float=-.61+float(strip+1)*1.22/8.0
		var y0:=base+1.29-sin(float(strip)/8.0*PI)*.11
		var y1:=base+1.29-sin(float(strip+1)/8.0*PI)*.11
		var a:=Vector3(-.73,y0,z0);var b:=Vector3(.19,y0,z0)
		var c:=Vector3(.19,y1,z1);var d:=Vector3(-.73,y1,z1)
		cloth.append_array([a,c,b,a,d,c])
	var mesh: MeshInstance3D=renderer._triangles(node,cloth,Color("e8d8ad"))
	mesh.name="TerraceCanopyCloth"
	var wind=preload("res://scripts/visual/city_creation_soft_wind.gd")
	mesh.mesh=wind.weighted_mesh(mesh.mesh,true);mesh.material_override=wind.material(Color("e8d8ad"),true)
	mesh.extra_cull_margin=.04
	# Visible fabric has the real original terrace's picking identity. The original
	# floor action and its existing support rule still decide the edit.
	var shape:=CollisionShape3D.new();shape.name="CanopyPick"
	shape.shape=mesh.mesh.create_trimesh_shape();body.add_child(shape)
	for leaf in range(8):
		var at:=Vector3(-.67+sin(leaf*2.1)*.07,base+.32+leaf*.12,.62+cos(leaf*1.7)*.035)
		renderer._crown(node,at,Vector3(.095,.045,.065),Color("78936a"))

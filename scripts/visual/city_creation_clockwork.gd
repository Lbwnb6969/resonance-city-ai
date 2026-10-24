extends RefCounted
## Red brick, bronze cornices and a joined, two-slope slate mansard envelope.
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const Brick=preload("res://scripts/visual/shaders/creation_clockwork_brick.gdshader")
const UNIT := 1.8
const FLOOR := 1.7
const EAVE := .10

static func palette(base: Array)->Array:
	return [base[0].lerp(Color("b86e53"),.84),Color("45585c"),base[2].lerp(Color("48665a"),.65)]

static func wall_material(renderer,color: Color)->ShaderMaterial:
	var key := "clockwork_brick/"+str(color)
	if not renderer.materials.has(key):
		var material:=ShaderMaterial.new();material.shader=Brick;material.set_shader_parameter("brick_color",color)
		renderer.materials[key]=material
	return renderer.materials[key]

static func facade(renderer,wall: Node3D,door: bool,upper: bool)->void:
	var bronze: Material=renderer._material(Color("b3975e"),.72)
	var stone: Material=Wall.source(Color("d4bd97"), null, "component", Wall.Kind.STONE)
	for side: float in [-1.,1.]:
		renderer._box(wall,Vector3(.14,.13,.13),Vector3(side*.80,1.43,.11),stone)
		renderer._box(wall,Vector3(.07,.20,.15),Vector3(side*.80,1.28,.09),bronze)
	if upper and not door:
		for x: float in [-.49,.49]:renderer._box(wall,Vector3(.03,.54,.06),Vector3(x,1.0,.145),bronze)
	wall.set_meta("clockwork_bronze",true)

static func _tops(city: RefCounted)->Array[Dictionary]:
	var rows: Array[Dictionary]=[]
	for house: Dictionary in city.houses:
		if city.house_era(house)!="clockwork":continue
		for cell: Dictionary in house.cells:
			if cell.kind!="room":continue
			var covered := false
			for other: Dictionary in house.cells:
				if int(other.x)==int(cell.x) and int(other.z)==int(cell.z) and int(other.level)>int(cell.level):covered=true;break
			if not covered:rows.append({"house":str(house.id),"cell":cell,"center":Vector2(house.origin[0]+cell.x*UNIT,house.origin[1]+cell.z*UNIT),"base":float(house.get("base_y",0.))+(int(cell.level)+1)*FLOOR})
	return rows

static func roof_height(distance: float)->float:
	return .06+minf(maxf(0.,distance)/.28,1.)*.72+clampf((distance-.28)/.72,0.,1.)*.22

static func adjacency_signature(city: RefCounted,house: Dictionary)->Array:
	if city.house_era(house)!="clockwork":return []
	var result: Array=[]
	var bounds:=Rect2(Vector2(house.origin[0],house.origin[1]),Vector2.ZERO)
	for cell: Dictionary in house.cells:bounds=bounds.expand(Vector2(house.origin[0]+cell.x*UNIT,house.origin[1]+cell.z*UNIT))
	for other: Dictionary in city.houses:
		for cell: Dictionary in other.cells:
			if bounds.grow(UNIT+.01).has_point(Vector2(other.origin[0]+cell.x*UNIT,other.origin[1]+cell.z*UNIT)):
				result.append([other.id,city.house_era(other),other.cells]);break
	return result

static func prepare(city: RefCounted,house: Dictionary)->Array:
	if house.get("architecture","") in preload("res://scripts/world/city_creation_architecture_choice.gd").CLOCKWORK:return preload("res://scripts/visual/city_creation_clockwork_prototypes.gd").prepare(city,house,_tops(city))
	var rows := _tops(city)
	var boundaries: Array=[]
	for row: Dictionary in rows:
		for side: Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.UP,Vector2.DOWN]:
			var neighbor := false
			for other: Dictionary in rows:
				if absf(float(other.base)-float(row.base))<.002 and Vector2(other.center).distance_to(Vector2(row.center)+side*UNIT)<.002:neighbor=true;break
			if neighbor:continue
			var tangent := Vector2(-side.y,side.x)
			boundaries.append({"a":Vector2(row.center)+side*(.9+EAVE)-tangent*(.9+EAVE),"b":Vector2(row.center)+side*(.9+EAVE)+tangent*(.9+EAVE),"base":row.base})
	var records: Array=[]
	for row: Dictionary in rows:
		if row.house!=str(house.id):continue
		var faces: Array[Vector3]=[]
		var center: Vector2=row.center
		var rect:=Rect2(center-Vector2.ONE*.9,Vector2.ONE*UNIT)
		for side: Vector2 in [Vector2.RIGHT,Vector2.LEFT,Vector2.UP,Vector2.DOWN]:
			var neighbor := false
			for other: Dictionary in rows:
				if absf(float(other.base)-float(row.base))<.002 and Vector2(other.center).distance_to(center+side*UNIT)<.002:neighbor=true;break
			if neighbor:continue
			if side.x<0:rect.position.x-=EAVE;rect.size.x+=EAVE
			elif side.x>0:rect.size.x+=EAVE
			elif side.y<0:rect.position.y-=EAVE;rect.size.y+=EAVE
			else:rect.size.y+=EAVE
		var nx:=ceili(rect.size.x/.10);var nz:=ceili(rect.size.y/.10)
		for z in range(nz):
			for x in range(nx):
				var points: Array[Vector3]=[]
				for corner: Vector2 in [Vector2(x,z),Vector2(x+1,z),Vector2(x+1,z+1),Vector2(x,z+1)]:
					var at := rect.position+corner/Vector2(nx,nz)*rect.size
					var distance:=INF
					for edge: Dictionary in boundaries:
						if absf(float(edge.base)-float(row.base))>.002:continue
						distance=minf(distance,at.distance_to(Geometry2D.get_closest_point_to_segment(at,edge.a,edge.b)))
					points.append(Vector3(at.x,float(row.base)+roof_height(distance),at.y))
				faces.append_array([points[0],points[2],points[1],points[0],points[3],points[2]])
		var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES)
		for index in range(0,faces.size(),3):
			surface.add_vertex(faces[index]);surface.add_vertex(faces[index+2]);surface.add_vertex(faces[index+1])
		surface.generate_normals();surface.index()
		var arrays:=surface.commit_to_arrays()
		var metadata:Dictionary={"cell_id":str(row.cell.id),"bounds":rect,"base":row.base,"crease_distance":.28,"triangles":faces.size()/3}
		records.append({"arrays":arrays,"cell":row.cell,"center":row.center,"base":row.base,"metadata":metadata})
	return records

static func install(renderer,root:Node3D,house:Dictionary,data:Dictionary)->void:
	if data.has("prototype"):
		preload("res://scripts/visual/city_creation_clockwork_prototypes.gd").install(renderer,root,house,data);return
	var row:Dictionary=data
	var center:Vector2=data.center
	var array_mesh:=ArrayMesh.new();array_mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,data.arrays)
	var mesh:=MeshInstance3D.new();mesh.mesh=array_mesh;mesh.material_override=Wall.source(Color("45585c"), null, "component", Wall.Kind.SLATE)
	mesh.material_override.cull_mode=BaseMaterial3D.CULL_DISABLED;root.add_child(mesh);mesh.name="ClockworkMansard_"+str(row.cell.id)
	var body:=StaticBody3D.new();body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(row.cell.id));body.set_meta("cell",row.cell.duplicate(true))
	preload("res://scripts/visual/city_creation_roof_pick.gd").attach(body,array_mesh.get_aabb(),"MansardPick")
	root.add_child(body)
	var copper: Material=renderer._material(Color("b3975e"),.7)
	for side: Vector2 in [Vector2.UP,Vector2.DOWN]:
		var at:=center+side*.68
		renderer._box(root,Vector3(.47,.46,.12),Vector3(at.x,float(row.base)+.63,at.y),Wall.source(Color("ddcba7"), null, "component", Wall.Kind.STONE))
		renderer._box(root,Vector3(.30,.30,.135),Vector3(at.x,float(row.base)+.66,at.y+side.y*.065),renderer._material(Color("718c82"),.25))
		renderer._box(root,Vector3(.55,.06,.22),Vector3(at.x,float(row.base)+.90,at.y),copper)

static func build(renderer,root:Node3D,house:Dictionary)->void:
	var records:Array=[]
	for data:Dictionary in prepare(renderer.state,house):
		install(renderer,root,house,data);records.append(data.metadata)
	root.set_meta("clockwork_mansards",records)

extends RefCounted
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
const DetailLod=preload("res://scripts/visual/city_creation_detail_lod.gd")
## Shared, immutable garden furniture. Real life drives prebuilt cup/bubble
## visibility; a status refresh never allocates geometry or invents residents.
const Layout = preload("res://scripts/world/city_creation_cafe_layout.gd")
const Surface=preload("res://scripts/world/city_creation_activity_surface.gd")
const CafeShader = preload("res://scripts/visual/shaders/creation_cafe.gdshader")
const WOOD := Color("987457")
const CREAM := Color("f0dfb2")
const LEAF := Color("6e8c68")
var layer: Node3D
var layout_api: Variant = Layout
var roots: Dictionary = {}
var fingerprints: Dictionary = {}
var placement_inputs: Dictionary = {}
var meshes: Dictionary = {}
var material: ShaderMaterial
var build_count := 0
var last_revision := -1

func setup(parent: Node3D) -> void:
	layer=Node3D.new()
	layer.name="GardenCafes"
	parent.add_child(layer)
	material=ShaderMaterial.new()
	material.shader=CafeShader

func prepare(renderer) -> Dictionary:
	var live := {}
	var changes := {}
	var market:Dictionary=preload("res://scripts/world/city_creation_market_frontages.gd").prepare(renderer.state)
	var geometry:Array=preload("res://scripts/world/city_creation_frontage.gd").ground_geometry(renderer.state.houses)
	var geometry_signature := hash([geometry,renderer.state.roads,renderer.state.waters,market,preload("res://scripts/world/city_creation_tradition_rules.gd").has(renderer.state,"garden_salons")])
	if Surface.enabled(renderer.state):geometry_signature=hash([geometry_signature,Surface.stamp(renderer.state)])
	for house: Dictionary in renderer.state.houses:
		if str(house.get("role",""))!="garden_cafe" and not market.has(str(house.id)): continue
		var id := str(house.id)
		live[id]=true
		if placement_inputs.get(id,-1)==geometry_signature: continue
		var plan: Dictionary = layout_api.layout(renderer.state,id)
		var extras := _extras(renderer.state,plan,id)
		var extra_y:Dictionary=Surface.decorate(renderer.state,extras,float(plan.get("base_y",0.)))
		var signature := hash([plan,extras,extra_y,market.get(id,[])])
		placement_inputs[id]=geometry_signature
		if fingerprints.get(id,-1)==signature: continue
		changes[id]={"plan":plan,"extras":extras,"extra_y":extra_y,"market":market.get(id,[]),"fingerprint":signature}
	return {"live":live,"changes":changes}

func install(renderer, prepared: Dictionary, statuses: Dictionary = {}) -> void:
	for id: String in prepared.changes:
		_remove(id)
		var row: Dictionary = prepared.changes[id]
		var root := Node3D.new()
		root.name="Cafe_"+id
		root.position.y=float(row.plan.get("base_y",0.0))
		root.set_meta("layout",row.plan.duplicate(true))
		root.set_meta("extras",row.extras.duplicate(true))
		layer.add_child(root)
		roots[id]=root
		fingerprints[id]=row.fingerprint
		build_count+=1
		if not row.plan.is_empty(): _build(root,row.plan,row.extras,row.get("extra_y",{}))
		preload("res://scripts/visual/city_creation_market_frontages.gd").build(renderer,root,row.get("market",[]))
	for id: String in roots.keys():
		if not prepared.live.has(id):
			_remove(id)
			placement_inputs.erase(id)
	for id: String in roots: _apply(roots[id],statuses.get(id,{}))
	last_revision = int(renderer.state.revision)

func update(renderer, statuses: Dictionary, geometry_changed: bool=false) -> void:
	if not geometry_changed and last_revision==int(renderer.state.revision):
		for id: String in roots: _apply(roots[id],statuses.get(id,{}))
		return
	install(renderer,prepare(renderer),statuses)

func _remove(id: String) -> void:
	if not roots.has(id): return
	var root: Node3D = roots[id]
	root.get_parent().remove_child(root)
	root.queue_free()
	roots.erase(id)
	fingerprints.erase(id)

func _extras(city, plan: Dictionary, id: String) -> Dictionary:
	if plan.is_empty(): return {}
	var center: Vector2=plan.center
	var result := {}
	var doubled:bool=preload("res://scripts/world/city_creation_tradition_rules.gd").has(city,"garden_salons")
	var paths: Array = []
	for seat: Vector2 in plan.seats: paths.append(layout_api.route(city,id,plan.entrance,seat))
	for index in range(6):
		var angle := float(plan.yaw)+index*TAU/6.0+PI/6.0
		var point := center+Vector2(sin(angle),cos(angle))*1.70
		var radius := 0.35 if result.has("flowers") else 0.34
		if not layout_api.clear(city,point,radius): continue
		if Surface.enabled(city) and Surface.support(city,point,radius).is_empty():continue
		# Keep every guest's actual outward approach and seat aisle open.
		var free := true
		for path: Array in paths:
			for leg in range(1,path.size()):
				if point.distance_to(Geometry2D.get_closest_point_to_segment(point,path[leg-1],path[leg]))<radius+0.20: free=false
		if not free: continue
		if not result.has("flowers"): result.flowers=point
		elif doubled and not result.has("flowers_extra"):result.flowers_extra=point
		elif not result.has("fountain"): result.fountain=point
		if result.size()==(3 if doubled else 2): break
	return result

func _build(root: Node3D, plan: Dictionary, extras: Dictionary,extra_y:Dictionary={}) -> void:
	var center: Vector2=plan.center
	var transform := Transform3D(Basis(Vector3.UP,float(plan.yaw)),Vector3(center.x,0.08,center.y))
	_batch(root,"GardenTable",[transform],"table")
	var chairs: Array = []
	for seat: Vector2 in plan.seats:
		var outward := seat-center
		chairs.append(Transform3D(Basis(Vector3.UP,atan2(outward.x,outward.y)),Vector3(seat.x,0.08,seat.y)))
	_batch(root,"ThreeChairs",chairs,"chair")
	for name: String in extras:
		var at: Vector2=extras[name]
		_batch(root,name.capitalize(),[Transform3D(Basis.IDENTITY,Vector3(at.x,0.08+float(extra_y.get(name,0.)),at.y))],"flowers" if name=="flowers_extra" else name)
	for index in range(3):
		var seat: Vector2 = plan.seats[index]
		var cup := center+(seat-center).normalized()*0.31
		_batch(root,"Cup%d"%index,[Transform3D(Basis.IDENTITY,Vector3(cup.x,0.77,cup.y))],"cup")
		_batch(root,"Chat%d"%index,[Transform3D(Basis.IDENTITY,Vector3(seat.x,1.28,seat.y))],"chat")
	var activity_material:ShaderMaterial=material.duplicate()
	for instance:MultiMeshInstance3D in root.get_children(): instance.material_override=activity_material
	root.set_meta("activity_material",activity_material)

func _apply(root: Node3D, status: Dictionary) -> void:
	var seated: Array = status.get("seated_seats",[])
	var tea := str(status.get("phase",""))=="tea"
	root.set_meta("seated_count",int(status.get("seated_count",0)))
	root.set_meta("phase",str(status.get("phase","")))
	if root.has_meta("activity_material"):
		var activity_material:ShaderMaterial=root.get_meta("activity_material")
		activity_material.set_shader_parameter("conversation",1.0 if tea else 0.0)
		activity_material.set_shader_parameter("musical_light",1.0 if bool(status.get("music_audible",false)) else 0.0)
	for index in range(3):
		var cup: Node3D=root.get_node_or_null("Cup%d"%index)
		var chat: Node3D=root.get_node_or_null("Chat%d"%index)
		if cup!=null: cup.visible=seated.has(index)
		if chat!=null: chat.visible=tea and seated.has(index)

func diagnostics() -> Dictionary:
	var ids := {}
	var layouts := {}
	for id: String in roots:
		ids[id]=roots[id].get_instance_id()
		layouts[id]=roots[id].get_meta("layout")
	return {"roots":ids,"layouts":layouts,"build_count":build_count,"shared_meshes":meshes.size()}

func _batch(parent: Node3D, name: String, transforms: Array, kind: String) -> void:
	var multi := MultiMesh.new()
	multi.transform_format=MultiMesh.TRANSFORM_3D
	multi.use_colors=true
	multi.use_custom_data=true
	multi.mesh=_mesh(kind)
	SafeInstances.initialize(multi,transforms.size())
	for index in range(transforms.size()):
		SafeInstances.append(multi,transforms[index],Color.WHITE,Color(float(index)/3.0,1.0 if kind=="chat" else 0.0,0,0))
	var instance := MultiMeshInstance3D.new()
	instance.name=name
	DetailLod.bind(instance,DetailLod.CHIME if kind in ["cup","chat"] else DetailLod.FURNITURE)
	instance.multimesh=multi
	instance.material_override=material
	instance.custom_aabb=multi.get_aabb().grow(0.08)
	parent.add_child(instance)

func _mesh(kind: String) -> ArrayMesh:
	if meshes.has(kind): return meshes[kind]
	var st := SurfaceTool.new()
	st.begin(Mesh.PRIMITIVE_TRIANGLES)
	match kind:
		"table":
			_cylinder(st,0.36,0.43,0.07,Vector3(0,0.66,0),WOOD,16)
			_cylinder(st,0.045,0.045,0.64,Vector3(0,0.32,0),WOOD,8)
			for index in range(3):
				var angle:=index*TAU/3.0
				_box(st,Vector3(0.08,0.04,0.38),Vector3(sin(angle)*0.13,0.04,cos(angle)*0.13),WOOD,angle)
			_cylinder(st,0.022,0.018,1.98,Vector3(0,1.0,0),Color("c1a374"),8)
			# Alternating hand-painted canvas panels, with a shallow curved crown.
			for index in range(16):
				var a:=index*TAU/16.0
				var b:=(index+1)*TAU/16.0
				var color:=CREAM if index%2==0 else Color("b98565")
				var va:=Vector3(sin(a),1.76,cos(a))
				var vb:=Vector3(sin(b),1.76,cos(b))
				_triangle(st,Vector3(0,2.06,0),va,vb,color)
				_triangle(st,va,Vector3(va.x,1.68,va.z),Vector3(vb.x,1.68,vb.z),color)
				_triangle(st,va,Vector3(vb.x,1.68,vb.z),vb,color)
			_cylinder(st,0.055,0.0,0.13,Vector3(0,2.12,0),WOOD,8)
		"chair":
			_box(st,Vector3(0.41,0.055,0.39),Vector3(0,0.35,0),WOOD)
			for x in [-0.155,0.155]:
				for z in [-0.14,0.14]: _box(st,Vector3(0.035,0.35,0.035),Vector3(x,0.175,z),WOOD)
			for x in [-0.16,0.16]: _box(st,Vector3(0.035,0.38,0.035),Vector3(x,0.54,0.17),WOOD)
			for height in [0.52,0.65]: _box(st,Vector3(0.35,0.075,0.035),Vector3(0,height,0.17),Color("75907a"))
		"flowers":
			_box(st,Vector3(0.52,0.15,0.38),Vector3(0,0.075,0),Color("b88868"))
			for x in [-0.22,0.22]: _box(st,Vector3(0.035,1.16,0.035),Vector3(x,0.58,0.10),WOOD)
			for y in [0.40,0.72,1.02]: _box(st,Vector3(0.54,0.025,0.025),Vector3(0,y,0.10),WOOD)
			for index in range(13):
				var at:=Vector3(sin(index*2.3)*0.20,0.20+index*0.071,0.10+cos(index*1.4)*0.07)
				_box(st,Vector3(0.17,0.085,0.12),at,LEAF,index*0.3,0.7)
				if index%3==0: _cylinder(st,0.055,0.055,0.025,at+Vector3(0,0.055,0),Color("e1bb96"),7)
		"fountain":
			for index in range(12):
				var a:=index*TAU/12.0
				_box(st,Vector3(0.15,0.23,0.15),Vector3(sin(a)*0.24,0.12,cos(a)*0.24),Color("c1bda3"),a)
			_cylinder(st,0.23,0.23,0.025,Vector3(0,0.17,0),Color("89ad9e"),16)
			_cylinder(st,0.055,0.04,0.36,Vector3(0,0.30,0),Color("c7bea2"),8)
			_cylinder(st,0.012,0.008,0.16,Vector3(0,0.50,0),Color("b5d4c6"),6)
		"cup":
			_cylinder(st,0.07,0.07,0.012,Vector3.ZERO,CREAM,12)
			_cylinder(st,0.038,0.05,0.062,Vector3(0,0.035,0),CREAM,12)
			_cylinder(st,0.039,0.039,0.006,Vector3(0,0.069,0),Color("967452"),12)
			_box(st,Vector3(0.025,0.035,0.018),Vector3(0.054,0.04,0),CREAM)
		"chat":
			# Three tiny warm dots sit above the actual occupied chair. They are
			# physical conversation, not a music meter and remain with mute.
			for index in range(3): _cylinder(st,0.026,0.026,0.035,Vector3(-0.08+index*0.08,index%2*0.035,0),CREAM,8)
	st.index()
	meshes[kind]=st.commit()
	return meshes[kind]

func _triangle(st: SurfaceTool, a: Vector3,b: Vector3,c: Vector3,color: Color) -> void:
	color.a=0.0
	# Canvas has a visible upper and underside, unlike the closed furniture.
	var normal := (c-a).cross(b-a).normalized()
	for side in range(2):
		for at:Vector3 in ([a,b,c] if side==0 else [a,c,b]):
			st.set_color(color)
			st.set_normal(normal if side==0 else -normal)
			st.add_vertex(at)

func _box(st: SurfaceTool, size: Vector3, at: Vector3, color: Color, yaw: float=0.0,motion: float=0.0) -> void:
	var source:=BoxMesh.new()
	source.size=size
	_append(st,source,Transform3D(Basis(Vector3.UP,yaw),at),color,motion)

func _cylinder(st: SurfaceTool, bottom: float, top: float, height: float, at: Vector3, color: Color, sides: int) -> void:
	var source:=CylinderMesh.new()
	source.bottom_radius=bottom
	source.top_radius=top
	source.height=height
	source.radial_segments=sides
	_append(st,source,Transform3D(Basis.IDENTITY,at),color)

func _append(st: SurfaceTool, source: Mesh, transform: Transform3D, color: Color, motion: float=0.0) -> void:
	var arrays:=source.surface_get_arrays(0)
	var vertices: PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
	var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
	var indices: PackedInt32Array=arrays[Mesh.ARRAY_INDEX]
	color.a=motion
	for index in indices:
		st.set_color(color)
		st.set_normal((transform.basis*normals[index]).normalized())
		st.add_vertex(transform*vertices[index])

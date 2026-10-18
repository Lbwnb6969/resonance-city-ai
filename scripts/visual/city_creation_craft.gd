extends RefCounted
const DetailLod=preload("res://scripts/visual/city_creation_detail_lod.gd")
## Permanent, delivered improvements are independent of structural house meshes
## and the music rig. Shared prefab meshes and one material serve the whole city.
const CraftShader = preload("res://scripts/visual/shaders/creation_craft.gdshader")
const Architecture = preload("res://scripts/visual/city_creation_architecture.gd")
const SIDES := [Vector2i.DOWN,Vector2i.RIGHT,Vector2i.LEFT,Vector2i.UP]
const WOOD := Color("886347")
const LIGHT_WOOD := Color("bc9569")
const BRASS := Color("cbb276")
const LEAF := Color("6b8866")
var culture_roots: Dictionary = {}
var culture_fingerprints: Dictionary = {}
var mechanism_roots: Dictionary={}
var mechanism_fingerprints: Dictionary={}
var roots: Dictionary = {}
var fingerprints: Dictionary = {}
var placement_inputs: Dictionary = {}
var stock_roots: Dictionary = {}
var stock_fingerprints: Dictionary = {}
var meshes: Dictionary = {}
var material: ShaderMaterial
var layer: Node3D
var build_count := 0

func setup(parent: Node3D) -> void:
	layer = Node3D.new()
	layer.name = "DeliveredCraftwork"
	parent.add_child(layer)
	material = ShaderMaterial.new()
	material.shader = CraftShader

func progress(renderer) -> void:
	if renderer.state.house_improvements.is_empty() and renderer.state.house_culture.is_empty() and renderer.state.house_clockwork.is_empty() and roots.is_empty() and culture_roots.is_empty() and mechanism_roots.is_empty():return
	_culture(renderer)
	_mechanisms(renderer)
	var live := {}
	var footprints: Array = []
	for house: Dictionary in renderer.state.houses: footprints.append([house.id,house.origin,house.cells,house.get("base_y",0.0),house.get("style","classic")])
	var geometry_signature := hash([footprints,renderer.state.roads,renderer.state.waters])
	for house: Dictionary in renderer.state.houses:
		var id := str(house.id)
		var level := int(renderer.state.improvement_level(id))
		if level == 0: continue
		live[id] = true
		var input_signature := hash([geometry_signature,level])
		if placement_inputs.get(id,-1) == input_signature: continue
		placement_inputs[id] = input_signature
		var records := _placements(renderer,house,level)
		var fingerprint := hash([level,records])
		if fingerprints.get(id,-1) == fingerprint: continue
		_remove(id,roots,fingerprints)
		var root := Node3D.new()
		root.name = "Craft_"+id
		root.set_meta("level",level)
		root.set_meta("placements",records.duplicate(true))
		layer.add_child(root)
		# Wind chimes retain their local moving vertices and shared prefab.
		# The other three pieces share material and never move: bake their
		# transforms into one house-local surface, retaining real shadow casting.
		_batch(root,"chime",records.chime,posmod(hash(id),6283)/1000.0)
		_static_batch(root,records)
		roots[id] = root
		fingerprints[id] = fingerprint
		build_count += 1
	for id: String in roots.keys():
		if not live.has(id):
			_remove(id,roots,fingerprints)
			placement_inputs.erase(id)

func _mechanisms(renderer)->void:
	var live: Dictionary={}
	for house: Dictionary in renderer.state.houses:
		var id:=str(house.id);var level: int=renderer.state.mechanism_level(id)
		if level==0:continue
		live[id]=true
		var signature:=hash([house.origin,house.cells,house.get("base_y",0.),level,renderer.state.house_era(house),renderer._frontage_signature(house)])
		if mechanism_fingerprints.get(id,-1)==signature:continue
		_remove(id,mechanism_roots,mechanism_fingerprints)
		var root:=Node3D.new();root.name="DeliveredClockwork_"+id;layer.add_child(root);root.set_meta("mechanism_level",level)
		var wood: Material=renderer._material(Color("997147"));var brass: Material=renderer._material(Color("c8aa63"))
		var entries: Array=renderer.state.house_entrances(id)
		var chosen: Dictionary={};var side:=Vector2i.ZERO
		var cells: Array=house.cells.duplicate();cells.sort_custom(func(a:Dictionary,b:Dictionary)->bool:return int(a.level)>int(b.level))
		for cell: Dictionary in cells:
			if cell.kind!="room":continue
			for direction: Vector2i in SIDES:
				if not renderer._neighbor_cell(house,cell,direction).is_empty():continue
				var door:=false
				for entry: Dictionary in entries:
					if entry.cell_id==cell.id and entry.side==direction and int(cell.level)==0:door=true
				if door:continue
				chosen=cell;side=direction;break
			if not chosen.is_empty():break
		if not chosen.is_empty():
			var frame:=Node3D.new();root.add_child(frame);frame.position=renderer._cell_position(house,chosen)+Vector3(side.x*.92,int(chosen.level)*1.7,side.y*.92);frame.rotation.y=atan2(float(side.x),float(side.y))
			renderer._box(frame,Vector3(.31,.22,.18),Vector3(0,.48,.08),wood)
			renderer._box(frame,Vector3(.33,.035,.19),Vector3(0,.60,.08),brass)
			var cylinder: MeshInstance3D=renderer._cylinder(frame,.048,.048,.18,Vector3(0,.52,.18),brass,10);cylinder.rotation.z=PI*.5
			for i in range(5):renderer._box(frame,Vector3(.012,.07,.018),Vector3(-.075+i*.037,.48,.19),brass)
		if level>=2:
			var highest: Dictionary=cells[0]
			var at: Vector3=renderer._cell_position(house,highest)+Vector3(0,(int(highest.level)+1)*1.7+1.20,0)
			var greenhouse: Dictionary=renderer.ConservatoryPlan.for_house(renderer.state,house)
			if not greenhouse.is_empty():at.y=maxf(at.y,float(greenhouse.roof_top_y)+.12)
			renderer._cylinder(root,.025,.025,.52,at+Vector3.UP*.26,brass,8)
			renderer._box(root,Vector3(.58,.035,.045),at+Vector3.UP*.45,brass)
			renderer._triangles(root,[at+Vector3(.27,.45,-.035),at+Vector3(.05,.45,-.035),at+Vector3(.05,.63,-.035)],Color("c8aa63"))
		renderer._merge_meshes(root)
		DetailLod.bind_tree(root,DetailLod.GALLERY)
		mechanism_roots[id]=root;mechanism_fingerprints[id]=signature
	for id: String in mechanism_roots.keys():
		if not live.has(id):_remove(id,mechanism_roots,mechanism_fingerprints)

func _culture(renderer) -> void:
	var live := {}
	for house: Dictionary in renderer.state.houses:
		var id := str(house.id); var level: int = renderer.state.culture_level(id)
		if level == 0: continue
		live[id]=true
		var signature := hash([house.origin,house.cells,house.get("base_y",0.0),level,renderer._frontage_signature(house),renderer.ArcadePlan.for_house(renderer.state,house)])
		if culture_fingerprints.get(id,-1)==signature: continue
		_remove(id,culture_roots,culture_fingerprints)
		var root := Node3D.new(); root.name="DeliveredArt_"+id; layer.add_child(root)
		root.set_meta("culture_level",level)
		var placed := false
		var entries: Array = renderer.state.house_entrances(id)
		var arcades: Array = renderer.ArcadePlan.for_house(renderer.state,house)
		var cells: Array = house.cells.duplicate()
		cells.sort_custom(func(a: Dictionary,b: Dictionary)->bool: return int(a.level)>int(b.level))
		for cell: Dictionary in cells:
			if cell.kind != "room": continue
			for side: Vector2i in SIDES:
				if not renderer._neighbor_cell(house,cell,side).is_empty(): continue
				var door := false
				for entry: Dictionary in entries:
					if entry.cell_id==cell.id and entry.side==side and int(cell.level)==0: door=true
				if door: continue
				var cuts: Array = renderer.state.house_passages(id)
				var cut := false
				for opening: Dictionary in cuts:
					if opening.cell_id==cell.id: cut=true
				if cut: continue
				var radius := .9
				for arcade: Dictionary in arcades:
					if arcade.cell_id==cell.id and arcade.side==side: radius-=float(arcade.retreat)
				var face := Node3D.new(); root.add_child(face)
				face.position=renderer._cell_position(house,cell)+Vector3(side.x*radius,int(cell.level)*1.7,side.y*radius)
				face.rotation.y=atan2(float(side.x),float(side.y))
				renderer.Renaissance.art(renderer,face,level); placed=true; break
			if placed: break
		renderer._merge_meshes(root)
		DetailLod.bind_tree(root,DetailLod.GALLERY)
		culture_roots[id]=root; culture_fingerprints[id]=signature
	for id: String in culture_roots.keys():
		if not live.has(id): _remove(id,culture_roots,culture_fingerprints)

func supply(renderer, statuses: Dictionary) -> void:
	var live := {}
	for house: Dictionary in renderer.state.houses:
		var id := str(house.id)
		if str(house.get("role","")) != "workshop" or not statuses.has(id): continue
		live[id] = true
		var count := mini(6,int(statuses[id].get("stock",0)))
		var entry: Dictionary = renderer._primary_entrance(house)
		var records: Array = []
		if not entry.is_empty() and not bool(entry.get("passage",false)):
			var point: Vector3 = renderer._entrance_point(entry,Vector3(0.90,0.0,0.20))
			if renderer._clearance_at(Vector2(point.x,point.z),str(entry.cell_id),0.35):
				var yaw := atan2(float(entry.side.x),float(entry.side.y))
				for index in range(count):
					var local := Vector3(-0.15+(index%3)*0.15,0.91+(index/3)*0.20,0.0)
					records.append(Transform3D(Basis(Vector3.UP,yaw).scaled(Vector3.ONE*0.48),point+Basis(Vector3.UP,yaw)*local))
		var fingerprint := hash(records)
		if stock_fingerprints.get(id,-1) == fingerprint:
			stock_roots[id].set_meta("stock",int(statuses[id].get("stock",0)))
			continue
		_remove(id,stock_roots,stock_fingerprints)
		var root := Node3D.new()
		root.name = "CraftStock_"+id
		root.set_meta("stock",int(statuses[id].get("stock",0)))
		root.set_meta("displayed_items",records.size())
		layer.add_child(root)
		_batch(root,"chime",records,0.0)
		stock_roots[id] = root
		stock_fingerprints[id] = fingerprint
	for id: String in stock_roots.keys():
		if not live.has(id): _remove(id,stock_roots,stock_fingerprints)

func diagnostics() -> Dictionary:
	var levels := {}
	var ids := {}
	var stocks := {}
	var counts := {}
	for id: String in roots:
		levels[id] = int(roots[id].get_meta("level",0))
		ids[id] = roots[id].get_instance_id()
	for id: String in stock_roots:
		stocks[id] = stock_roots[id].get_instance_id()
		counts[id] = int(stock_roots[id].get_meta("displayed_items",0))
	return {"levels":levels,"roots":ids,"stock_roots":stocks,"visible_counts":counts,"build_count":build_count,"shared_meshes":meshes.size()}

func _remove(id: String, rows: Dictionary, signatures: Dictionary) -> void:
	if not rows.has(id): return
	var node: Node3D = rows[id]
	node.get_parent().remove_child(node)
	node.queue_free()
	rows.erase(id)
	signatures.erase(id)

func _placements(renderer, house: Dictionary, level: int) -> Dictionary:
	var result := {"chime":[],"plaque":[],"planter":[],"pergola":[]}
	var round_plan: Dictionary=renderer.RoundTowerPlan.for_house(house,renderer.state.houses,renderer.state.roads)
	var arcade_faces: Array=renderer.ArcadePlan.for_house(renderer.state,house)
	var passages: Array = renderer.state.house_passages(str(house.id))
	var entries: Array = renderer.state.house_entrances(str(house.id))
	var faces: Array = []
	for cell: Dictionary in house.cells:
		if str(cell.kind) != "room": continue
		var cuts: Array = []
		for cut: Dictionary in passages:
			if str(cut.cell_id) == str(cell.id): cuts.append(cut)
		for side: Vector2i in SIDES:
			var neighbor: Dictionary = renderer._at(house.cells,int(cell.x)+side.x,int(cell.z)+side.y,int(cell.level))
			if not neighbor.is_empty() and str(neighbor.kind) == "room": continue
			var opening: Dictionary = Architecture.wall_opening(cuts,side) if int(cell.level)==0 else {}
			var door := false
			for entry: Dictionary in entries:
				if int(cell.level)==0 and str(entry.cell_id)==str(cell.id) and entry.side==side: door = true
			var face_radius := .89 if not round_plan.is_empty() else .90
			for arcade: Dictionary in arcade_faces:
				if str(arcade.cell_id)==str(cell.id) and arcade.side==side: face_radius-=float(arcade.retreat)
			var at: Vector3 = renderer._cell_position(house,cell)+Vector3(side.x*face_radius,int(cell.level)*1.7,side.y*face_radius)
			var frame := Transform3D(Basis(Vector3.UP,atan2(float(side.x),float(side.y))),at)
			faces.append({"cell_id":str(cell.id),"frame":frame,"level":int(cell.level),"opening":opening,"door":door})
	# Prefer a real upstairs eave, then an unpierced downstairs face.
	faces.sort_custom(func(a,b): return int(a.level)*4+int(a.opening.is_empty())*2 > int(b.level)*4+int(b.opening.is_empty())*2)
	if not faces.is_empty():
		var face: Dictionary = faces[0]
		var x := 0.0 if not round_plan.is_empty() else -0.58
		var scale_value := 1.0
		if not face.opening.is_empty():
			var opening: Dictionary = face.opening
			var lo := float(opening.offset)-float(opening.half_width)
			var hi := float(opening.offset)+float(opening.half_width)
			var left_width := lo+0.9
			var right_width := 0.9-hi
			x = (-0.9+lo)*0.5 if left_width >= right_width else (hi+0.9)*0.5
			scale_value = minf(0.65,maxf(left_width,right_width)/0.32)
		var frame: Transform3D = face.frame
		result.chime.append(frame*Transform3D(Basis.IDENTITY.scaled(Vector3.ONE*scale_value),Vector3(x,1.58,0.20)))
	if level >= 2:
		for face: Dictionary in faces:
			if not face.opening.is_empty() or face.door: continue
			var frame: Transform3D = face.frame
			result.plaque.append(frame*Transform3D(Basis.IDENTITY,Vector3(0,1.47,0.11)))
			var point: Vector3 = frame*Vector3(0,0,0.28)
			if int(face.level)>0 or renderer._clearance_at(Vector2(point.x,point.z),str(face.cell_id),0.32):
				result.planter.append(frame*Transform3D(Basis.IDENTITY,Vector3(0,0.55,0.26)))
			break
	if level >= 3:
		for face: Dictionary in faces:
			if int(face.level)!=0 or face.door or not face.opening.is_empty(): continue
			var frame: Transform3D = face.frame
			var clear := true
			for x in [-0.60,0.60]:
				var point: Vector3 = frame*Vector3(x,0,0.70)
				if not renderer._clearance_at(Vector2(point.x,point.z),str(face.cell_id),0.13): clear = false
				if renderer.state.water_clearance(Vector2(point.x,point.z)) <= 0.13: clear = false
				if not renderer.EDITABLE_WORLD_RECT.grow(-0.13).has_point(Vector2(point.x,point.z)): clear = false
				if not renderer.promenade.doors_clear(renderer.state,Vector2(point.x,point.z),0.95+0.13):clear=false
			if clear:
				result.pergola.append(frame)
				break
	return result

func _batch(parent: Node3D, kind: String, transforms: Array, phase: float) -> void:
	if transforms.is_empty(): return
	var multi := MultiMesh.new()
	multi.transform_format = MultiMesh.TRANSFORM_3D
	multi.use_colors = true
	multi.use_custom_data = true
	multi.mesh = _mesh(kind)
	multi.instance_count = transforms.size()
	for index in range(transforms.size()):
		multi.set_instance_transform(index,transforms[index])
		multi.set_instance_color(index,Color.WHITE)
		multi.set_instance_custom_data(index,Color(phase,0,0,0))
	var instance := MultiMeshInstance3D.new()
	instance.name = kind.capitalize()
	DetailLod.bind(instance,DetailLod.CHIME)
	instance.multimesh = multi
	instance.material_override = material
	instance.custom_aabb = multi.get_aabb().grow(0.06)
	parent.add_child(instance)

func _static_batch(parent: Node3D, records: Dictionary) -> void:
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	var pieces := 0
	for kind: String in ["plaque","planter","pergola"]:
		for placement: Transform3D in records.get(kind,[]):
			surface.append_from(_mesh(kind),0,placement)
			pieces += 1
	if pieces == 0: return
	var instance := MeshInstance3D.new()
	instance.name = "StaticCraft"
	DetailLod.bind(instance,DetailLod.GALLERY if not records.get("pergola",[]).is_empty() else DetailLod.FLOWERBOX)
	instance.mesh = surface.commit()
	instance.material_override = material
	parent.add_child(instance)

func _mesh(kind: String) -> ArrayMesh:
	if meshes.has(kind): return meshes[kind]
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	match kind:
		"chime":
			_box(surface,Vector3(0.28,0.035,0.055),Vector3.ZERO,WOOD)
			for index in range(4):
				var x := -0.105+index*0.07
				var length_value := 0.14+index%3*0.035
				_box(surface,Vector3(0.008,0.07,0.008),Vector3(x,-0.042,0),LIGHT_WOOD,1.0)
				_box(surface,Vector3(0.024,length_value,0.026),Vector3(x,-0.07-length_value*0.5,0),BRASS,1.0)
			_box(surface,Vector3(0.055,0.075,0.012),Vector3(0.012,-0.32,0),LIGHT_WOOD,1.0)
		"plaque":
			_box(surface,Vector3(0.84,0.11,0.055),Vector3.ZERO,WOOD)
			for index in range(7):
				var at := Vector3(-0.33+index*0.11,0.015,0.035)
				_box(surface,Vector3(0.063,0.018,0.018),at,LIGHT_WOOD)
				_box(surface,Vector3(0.018,0.060,0.018),at,BRASS)
			# Carved outer stiles enrich the existing shutters, preserving every
			# original window opening and the house's own painted palette.
			for x in [-0.735,0.735]:
				_box(surface,Vector3(0.025,0.56,0.027),Vector3(x,-0.47,0.067),LIGHT_WOOD)
				for index in range(4): _box(surface,Vector3(0.052,0.020,0.016),Vector3(x,-0.67+index*0.13,0.087),BRASS)
		"planter":
			_box(surface,Vector3(0.66,0.14,0.22),Vector3.ZERO,WOOD)
			for x in [-0.28,0.28]: _box(surface,Vector3(0.035,0.17,0.24),Vector3(x,0,0),BRASS)
			for index in range(9):
				var at := Vector3(-0.27+index*0.068,0.10+sin(index*1.7)*0.025,0.025)
				_box(surface,Vector3(0.10,0.07,0.12),at,LEAF)
				if index%2 == 0: _box(surface,Vector3(0.038,0.038,0.040),at+Vector3(0,0.042,0.045),Color("e7d4a0"))
		"pergola":
			for x in [-0.60,0.60]:
				_box(surface,Vector3(0.065,1.43,0.065),Vector3(x,0.715,0.70),WOOD)
				_box(surface,Vector3(0.11,0.07,0.11),Vector3(x,0.08,0.70),LIGHT_WOOD)
				_box(surface,Vector3(0.08,0.12,0.08),Vector3(x,1.37,0.70),BRASS)
			for z in [0.07,0.70]: _box(surface,Vector3(1.43,0.10,0.08),Vector3(0,1.48,z),WOOD)
			for index in range(7): _box(surface,Vector3(0.045,0.065,0.91),Vector3(-0.60+index*0.20,1.55,0.38),LIGHT_WOOD)
			for index in range(5): _box(surface,Vector3(0.16,0.05,0.12),Vector3(-0.52+index*0.09,1.59,0.75),LEAF)
	surface.generate_normals()
	surface.index()
	meshes[kind] = surface.commit()
	return meshes[kind]

func _box(surface: SurfaceTool, size_value: Vector3, at: Vector3, color: Color, motion: float = 0.0) -> void:
	var source := BoxMesh.new()
	source.size = size_value
	var arrays := source.surface_get_arrays(0)
	var vertices: PackedVector3Array = arrays[Mesh.ARRAY_VERTEX]
	var indices: PackedInt32Array = arrays[Mesh.ARRAY_INDEX]
	color.a = motion
	for index in indices:
		surface.set_color(color)
		surface.add_vertex(vertices[index]+at)

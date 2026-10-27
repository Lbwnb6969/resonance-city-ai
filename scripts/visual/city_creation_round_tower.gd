extends RefCounted
## A local building family, retaining the original house/cell identities.
## TG recovered_roof.py:125-133 verifies twenty normalized profile samples
## and their mapping to a circular wall. The .78 radius exponent, dimensions,
## eave curl and sixteen-sided Godot geometry here come from the v2 design.
const Plan := preload("res://scripts/world/city_creation_round_tower_plan.gd")
const SIDES := 16
const PROFILE_SAMPLES := 20
const RADIUS := 0.9
const ROOF_RADIUS := 1.06
const ROOF_HEIGHT := 1.35
const RADIUS_POWER := 0.78
const FLOOR := 1.7
const DIRECTIONS := [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]
const RoofCoordinates=preload("res://scripts/visual/city_creation_roof_coordinates.gd")

static func build(renderer,house: Dictionary) -> Node3D:
	var plan: Dictionary = Plan.for_house(house,renderer.state.houses,renderer.state.roads)
	if plan.is_empty(): return null
	var root := Node3D.new()
	root.name = str(house.id)
	var palette:Array=renderer.HouseColors.base_palette(renderer,house)
	palette=renderer.HouseColors.era_palette(renderer,house,palette,house.has("custom_colors"))
	root.set_meta("era_theme",renderer.state.house_era(house))
	root.set_meta("palette_colors",palette.duplicate())
	root.set_meta("house_style","round_tower")
	root.set_meta("joined_roof",false)
	root.set_meta("structural_joined",false)
	root.set_meta("tower_cells",[])
	root.set_meta("terrace_canopy",{})
	var entrances: Array = renderer.state.house_entrances(str(house.id))
	root.set_meta("entrances",entrances.duplicate(true))
	root.set_meta("passages",[])
	var stone: Material = renderer._style_wall_material("stone",palette[0])
	var trim: Material = renderer._material(Color("d8cdb1"),0.96)
	var base: float = plan.base_y
	var center: Vector2 = plan.center
	var bottom := base-0.04
	for sample in range(SIDES):
		var at := center+Vector2.from_angle(float(sample)*TAU/float(SIDES))*RADIUS
		bottom=minf(bottom,float(renderer.state.raw_terrain_height(at))-0.06)
	if base<0.05: bottom=minf(bottom,renderer.Terrain.BASE_HEIGHT-renderer.Terrain.BANK_DEPTH-0.02)
	var bodies: Dictionary = {}
	var windows: Array = []
	var door_frames: Array = []
	for cell: Dictionary in plan.cells:
		var level := int(cell.level)
		var node := Node3D.new()
		node.name=str(cell.id)
		node.position=Vector3(center.x,base,center.y)
		root.add_child(node)
		var low := bottom-base if level==0 else float(level)*FLOOR
		var high := float(level+1)*FLOOR
		var mesh := _cylinder_mesh(RADIUS,high-low)
		var surface := MeshInstance3D.new()
		surface.name="RoundTowerBody"
		surface.mesh=mesh
		surface.material_override=stone
		surface.position.y=(low+high)*0.5
		node.add_child(surface)
		var body := StaticBody3D.new()
		body.name="RoundTowerPick"
		body.set_meta("house_id",str(house.id))
		body.set_meta("cell_id",str(cell.id))
		body.set_meta("cell",cell.duplicate(true))
		node.add_child(body)
		var collision := CollisionShape3D.new()
		collision.name="RoundTowerBodyPick"
		var shape := ConvexPolygonShape3D.new()
		shape.points=mesh.get_faces()
		collision.shape=shape
		collision.position=surface.position
		body.add_child(collision)
		bodies[str(cell.id)]=body
		# A round course/coping supports the tower; no old square slab survives.
		renderer._cylinder(node,0.943,0.943,0.095,Vector3(0,high-0.045,0),trim,SIDES).name="RoundTowerCourse"
		if level==0:
			renderer._cylinder(node,0.96,0.945,0.13,Vector3(0,0.105,0),trim,SIDES).name="RoundTowerFootCoping"
		for side: Vector2i in DIRECTIONS:
			var entry: Dictionary = {}
			if level==0:
				for entrance: Dictionary in entrances:
					if str(entrance.cell_id)==str(cell.id) and entrance.side==side: entry=entrance;break
			var frame := Node3D.new()
			frame.name="RoundDoor_%d_%d" % [side.x,side.y] if not entry.is_empty() else "RoundWindow_%d_%d" % [side.x,side.y]
			frame.position=Vector3(side.x*0.89,float(level)*FLOOR,side.y*0.89)
			frame.rotation.y=atan2(float(side.x),float(side.y))
			node.add_child(frame)
			if not entry.is_empty():
				frame.set_meta("entrance",entry.duplicate(true))
				renderer._facade(frame,palette,true,int(house.get("seed",0)),bool(entry.active))
				door_frames.append({"cell_id":str(cell.id),"name":str(frame.name),"entrance":entry.duplicate(true)})
			else:
				_window(renderer,frame,palette)
				var normal := Vector3(side.x,0,side.y)
				windows.append({"cell_id":str(cell.id),"side":side,"at":Vector3(center.x,base+float(level)*FLOOR+1.0,center.y)+normal*0.955,"normal":normal,"size":Vector2(0.35,0.55)})
	root.set_meta("round_windows",windows)
	root.set_meta("round_door_frames",door_frames)
	var eave: float = plan.roof_base_y
	var domes: Array = renderer.RenaissancePlan.for_house(renderer.state,house)
	if not domes.is_empty():
		renderer.Renaissance.build(renderer,root,house,domes)
		var top: float = eave + float(domes[0].height) + 1.01
		root.set_meta("round_tower",{"house_id":str(house.id),"center":center,"radius":RADIUS,"sides":SIDES,"levels":plan.cells.size(),"base_y":base,"footing_bottom":bottom,"eave_y":eave,"roof_top_y":top,"top":top,"roof_cell_id":str(plan.top_cell_id),"dome":true})
		return root
	var roof_center := Vector3(center.x,eave,center.y)
	var vertices := roof_vertices(roof_center)
	var color: Color = palette[1]
	var roof: MeshInstance3D = renderer._roof_surface(root,vertices,color,RoofCoordinates.build(vertices,roof_center,true))
	roof.name="RoundTowerRoof"
	var roof_key := "round_tower_roof/"+str(color)
	if not renderer.materials.has(roof_key):
		var material := ShaderMaterial.new()
		material.shader=renderer.JoinedRoofShader
		material.set_shader_parameter("roof_color",color)
		renderer.materials[roof_key]=material
	roof.material_override=renderer.materials[roof_key]
	var roof_body: StaticBody3D = bodies[str(plan.top_cell_id)]
	var roof_faces := PackedVector3Array()
	for point: Vector3 in roof.mesh.get_faces(): roof_faces.append(point-Vector3(center.x,base,center.y))
	var roof_shape := ConcavePolygonShape3D.new()
	roof_shape.backface_collision=true
	roof_shape.set_faces(roof_faces)
	var roof_pick := CollisionShape3D.new()
	roof_pick.name="RoundTowerRoofPick"
	roof_pick.shape=roof_shape
	roof_body.add_child(roof_pick)
	# The underside fascia closes the overhang without a solid square roof box.
	renderer._cylinder(root,ROOF_RADIUS,ROOF_RADIUS,0.065,roof_center+Vector3.UP*0.01,renderer._material(color.darkened(0.20)),SIDES).name="RoundTowerEave"
	var top := eave+ROOF_HEIGHT
	_wind_vane(renderer,root,Vector3(center.x,top,center.y))
	root.set_meta("round_tower",{"house_id":str(house.id),"center":center,"radius":RADIUS,"sides":SIDES,"levels":plan.cells.size(),"base_y":base,"footing_bottom":bottom,"roof_radius":ROOF_RADIUS,"eave_y":eave,"roof_top_y":top,"top":top+0.35,"roof_cell_id":str(plan.top_cell_id),"roof_triangles":roof.mesh.get_faces().size()/3,"profile_samples":PROFILE_SAMPLES,"radius_power":RADIUS_POWER})
	if str(house.get("role",""))=="bakery":
		var offset := Vector2(0.43,-0.30)
		var t := 1.0-pow(offset.length()/ROOF_RADIUS,1.0/RADIUS_POWER)
		var chimney_base := eave+ROOF_HEIGHT*t
		var at := Vector3(center.x+offset.x,chimney_base+0.24,center.y+offset.y)
		renderer._box(root,Vector3(0.20,0.54,0.20),at,stone).name="RoundTowerChimney"
		renderer._box(root,Vector3(0.27,0.07,0.27),at+Vector3.UP*0.28,trim)
		root.set_meta("chimneys",[at+Vector3.UP*0.34])
	return root

static func finish(renderer,root: Node3D,house: Dictionary) -> void:
	# Called once after renderer attaches the root, so original role-prop
	# clearance uses real global positions. No nodes are created each frame.
	var primary: Dictionary = renderer._primary_entrance(house)
	var decorated := false
	for record: Dictionary in root.get_meta("round_door_frames",[]):
		var frame := root.get_node(str(record.cell_id)+"/"+str(record.name)) as Node3D
		var entrance: Dictionary = record.entrance
		var principal: bool = not primary.is_empty() and str(primary.cell_id)==str(entrance.cell_id) and primary.side==entrance.side
		if bool(entrance.active): renderer._door_porch(frame,principal and str(house.get("role",""))=="bakery")
		if principal and not decorated:
			renderer._role_frontage(frame,str(house.get("role","residential")))
			decorated=true
	var chimneys: Array = root.get_meta("chimneys",[])
	if not chimneys.is_empty(): renderer.bakery_smoke.build(root,chimneys[0])

static func _cylinder_mesh(radius: float,height: float) -> ArrayMesh:
	var cylinder := CylinderMesh.new()
	cylinder.bottom_radius=radius
	cylinder.top_radius=radius
	cylinder.height=height
	cylinder.radial_segments=SIDES
	var arrays := cylinder.surface_get_arrays(0)
	var uv: PackedVector2Array = arrays[Mesh.ARRAY_TEX_UV]
	for i in range(uv.size()): uv[i]*=Vector2(TAU*radius/1.8,height/FLOOR)
	arrays[Mesh.ARRAY_TEX_UV]=uv
	var result := ArrayMesh.new()
	result.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	return result

static func roof_vertices(center: Vector3) -> Array[Vector3]:
	var result: Array[Vector3] = []
	for row in range(PROFILE_SAMPLES-1):
		var t0 := float(row)/float(PROFILE_SAMPLES-1)
		var t1 := float(row+1)/float(PROFILE_SAMPLES-1)
		var r0 := ROOF_RADIUS*pow(1.0-t0,RADIUS_POWER)
		var r1 := ROOF_RADIUS*pow(1.0-t1,RADIUS_POWER)
		# A short eave curl raises the outer lip by three centimetres.
		var y0 := ROOF_HEIGHT*t0+0.03*pow(maxf(0.0,1.0-t0/0.18),2.0)
		var y1 := ROOF_HEIGHT*t1+0.03*pow(maxf(0.0,1.0-t1/0.18),2.0)
		for side in range(SIDES):
			var a := float(side)*TAU/float(SIDES)
			var b := float(side+1)*TAU/float(SIDES)
			var aa := center+Vector3(cos(a)*r0,y0,sin(a)*r0)
			var bb := center+Vector3(cos(b)*r0,y0,sin(b)*r0)
			var cc := center+Vector3(cos(b)*r1,y1,sin(b)*r1)
			var dd := center+Vector3(cos(a)*r1,y1,sin(a)*r1)
			var normal := Vector3(cos((a+b)*0.5),0.5,sin((a+b)*0.5))
			_triangle(result,aa,bb,cc,normal)
			if row<PROFILE_SAMPLES-2: _triangle(result,aa,cc,dd,normal)
	return result

static func _triangle(vertices: Array[Vector3],a: Vector3,b: Vector3,c: Vector3,normal: Vector3) -> void:
	if (b-a).cross(c-a).dot(normal)>=0.0: vertices.append_array([a,b,c])
	else: vertices.append_array([a,c,b])

static func _window(renderer,frame: Node3D,palette: Array) -> void:
	var trim: Material = renderer._material(Color("dfd4bb"))
	var dark: Material = renderer._material(Color("435e59"))
	renderer._box(frame,Vector3(0.47,0.69,0.07),Vector3(0,1.0,0.015),trim)
	renderer._box(frame,Vector3(0.35,0.55,0.035),Vector3(0,1.0,0.059),dark)
	for x: float in [-0.12,0.12]:
		renderer._box(frame,Vector3(0.023,0.56,0.025),Vector3(x,1.0,0.087),trim)
	renderer._box(frame,Vector3(0.36,0.025,0.025),Vector3(0,1.0,0.087),trim)
	for side: float in [-1.0,1.0]:
		renderer._box(frame,Vector3(0.09,0.57,0.04),Vector3(side*0.28,1.0,0.055),renderer._material(palette[2]))
	renderer._box(frame,Vector3(0.50,0.075,0.17),Vector3(0,0.64,0.045),trim)

static func _wind_vane(renderer,root: Node3D,at: Vector3) -> void:
	var metal: Material = renderer._material(Color("766a4b"),0.72)
	renderer._cylinder(root,0.028,0.020,0.32,at+Vector3.UP*0.14,metal,8).name="RoundTowerWindVane"
	renderer._box(root,Vector3(0.42,0.025,0.025),at+Vector3.UP*0.26,metal)
	var flag: Array[Vector3] = [at+Vector3(0.23,0.26,0),at+Vector3(0.09,0.34,0),at+Vector3(0.09,0.18,0)]
	renderer._triangles(root,flag,Color("887754"))

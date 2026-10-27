extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Derived visual state only. Geometry is built once with the corresponding
## house, and clock/phrase/mute updates touch uniforms and visual transforms.
const GlowShader = preload("res://scripts/visual/shaders/creation_resonance.gdshader")
const ArcShader = preload("res://scripts/visual/shaders/creation_resonance_arc.gdshader")
const WaveShader = preload("res://scripts/visual/shaders/creation_resonance_wave.gdshader")
const Architecture = preload("res://scripts/visual/city_creation_architecture.gd")
const UNIT := 1.8
const FLOOR := 1.7
var rigs: Dictionary = {}
var night := false
var dusk := false
var arc_mesh: ArrayMesh
var wave: MeshInstance3D
var wave_material: ShaderMaterial
var last_audible := false
var last_lead_id := ""
var build_count := 0
var phase_updates := 0
var last_phase := "idle"
var last_pluck: Dictionary = {}

func setup(parent: Node3D) -> void:
	arc_mesh = _ribbon()
	wave = MeshInstance3D.new()
	wave.name = "ConcertGroundBreath"
	wave.mesh = _ring()
	wave_material = ShaderMaterial.new()
	wave_material.shader = WaveShader
	wave.material_override = wave_material
	wave.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	wave.custom_aabb = AABB(Vector3(-22,-1,-19),Vector3(44,9,38))
	wave.visible = false
	parent.add_child(wave)

func build(renderer, house: Dictionary, root: Node3D) -> void:
	build_count += 1
	var id := str(house.id)
	var pivot := Node3D.new()
	pivot.name = "ResonanceVisualPivot"
	var center := Vector3.ZERO
	for cell: Dictionary in house.cells: center += renderer._cell_position(house,cell)
	center /= float(house.cells.size())
	pivot.position = center
	root.add_child(pivot)
	# Static mesh batches move independently of the stable picking bodies.
	for child: Node in root.get_children():
		if child is MeshInstance3D and not root.get_meta("structural_joined",false): child.reparent(pivot,true)
	var rig := MeshInstance3D.new()
	rig.name = "ResonanceVisualRig"
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	var windows: Array = []
	var garlands := 0
	var lanterns := 0
	var arch_lanterns: Array = []
	var top := 0.0
	var passages: Array = renderer.house_passages(id)
	var entrances: Array = renderer.house_entrances(id)
	var round_tower: Dictionary = root.get_meta("round_tower",{})
	for cell: Dictionary in house.cells:
		var at: Vector3 = renderer._cell_position(house,cell)
		var level := int(cell.level)
		top = maxf(top,at.y+(level+1)*FLOOR+0.65)
		if not round_tower.is_empty(): continue
		if str(cell.kind) != "room": continue
		for side: Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
			if preload("res://scripts/visual/city_creation_civic_glow.gd").face(self,root,house,cell,side,surface,windows):continue
			var neighbor: Dictionary = renderer._neighbor_cell(house,cell,side)
			if not neighbor.is_empty() and str(neighbor.kind) == "room": continue
			var cuts: Array = []
			for passage: Dictionary in passages:
				if str(passage.cell_id) == str(cell.id): cuts.append(passage)
			var frame := Transform3D(Basis(Vector3.UP,atan2(float(side.x),float(side.y))),at+Vector3(0,level*FLOOR,0))
			var facade_width:=UNIT
			for face: Dictionary in root.get_meta("arcade_faces",[]):
				if str(face.cell_id)!=str(cell.id): continue
				if face.side==side: frame.origin-=Vector3(side.x,0,side.y)*float(face.retreat)
				elif Vector2(face.side).dot(Vector2(side))==0: facade_width-=float(face.retreat)
			var opening: Dictionary = Architecture.wall_opening(cuts,side) if level == 0 else {}
			if preload("res://scripts/visual/city_creation_balcony_glow.gd").face(self,root,cell,side,surface,frame,windows):continue
			if not opening.is_empty():
				# Even a four-way arcade has warm afterglow: the lamp fits
				# entirely on its wider structural pier, never across the hole.
				var left_edge := float(opening.offset)-float(opening.half_width)
				var right_edge := float(opening.offset)+float(opening.half_width)
				var use_left := left_edge+0.9 >= 0.9-right_edge
				var pier_width := left_edge+0.9 if use_left else 0.9-right_edge
				var lamp_x := (-0.9+left_edge)*0.5 if use_left else (0.9+right_edge)*0.5
				var lamp_width := minf(0.09,pier_width*0.55)
				_panel(surface,frame,Vector3(lamp_x,0.97,1.02),Vector2(lamp_width,0.15),1)
				arch_lanterns.append({"cell_id":str(cell.id),"side":side,"x":lamp_x,"width":lamp_width,"opening":opening})
				lanterns += 1
				for leaf in range(5):
					_diamond(surface,frame,Vector3(-0.16+leaf*0.08,1.51+sin(leaf*2.0)*0.02,1.02),Vector2(0.04,0.035),3)
					if leaf%2 == 0: _diamond(surface,frame,Vector3(-0.16+leaf*0.08,1.53,1.035),Vector2(0.022,0.024),4)
				garlands += 1
				continue
			var door := false
			for entrance: Dictionary in entrances:
				if level == 0 and str(entrance.cell_id) == str(cell.id) and entrance.side == side: door = true
			if door:
				# A little glass lantern beside, never in, the real doorway.
				_panel(surface,frame,Vector3(0.56,1.02,1.175),Vector2(0.095,0.145),1)
				lanterns += 1
				continue
			for x in ([0.0] if facade_width<UNIT-.01 else [-0.46,0.46]):
				for dx in [-0.09,0.09]:
					for dy in [-0.145,0.145]:
						_panel(surface,frame,Vector3(x+dx,1.0+dy,1.073),Vector2(0.145,0.245),0)
				windows.append({"cell_id":str(cell.id),"side":side,"at":frame*Vector3(x,1.0,1.073)})
				# Small hanging leaf/flower clusters sit below the window sill.
				for leaf in range(7):
					var leaf_at := Vector3(x-0.24+leaf*0.08,0.59+sin(leaf*1.9)*0.025,1.16)
					_diamond(surface,frame,leaf_at,Vector2(0.055,0.045),3,float(leaf%3)/2.0)
					if leaf%2 == 0: _diamond(surface,frame,leaf_at+Vector3(0,0.025,0.016),Vector2(0.026,0.027),4,float(leaf%3)/2.0)
				garlands += 1
	# A round facade owns its actual tangent window positions; rectangular
	# room-corner panes would otherwise hang outside the circular stone wall.
	for window: Dictionary in root.get_meta("round_windows",[]):
		var normal: Vector3=window.normal
		var frame := Transform3D(Basis(Vector3.UP,atan2(normal.x,normal.z)),Vector3(window.at)+normal*.012)
		_panel(surface,frame,Vector3.ZERO,window.size,0)
		windows.append(window)
	if not round_tower.is_empty(): top=float(round_tower.top)
	# Crown panes/highlights join the existing house surface. The real bell
	# report can brighten response briefly without borrowing the daily lead.
	var tower_bells := 0
	for tower: Dictionary in root.get_meta("tower_cells",[]):
		top = maxf(top,float(tower.top))
		var bell_at: Vector3 = tower.bell_at
		for side: Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
			var frame := Transform3D(Basis(Vector3.UP,atan2(float(side.x),float(side.y))),bell_at)
			_panel(surface,frame,Vector3(0,-0.055,0.155),Vector2(0.075,0.09),1)
		tower_bells += 1
	var roof_frame := Transform3D(Basis.IDENTITY,Vector3(center.x,top-0.40,center.z))
	# An actual cloth triangle and note mesh, rather than a per-frame Label3D.
	_tri(surface,[roof_frame*Vector3(-0.63,0.02,0.34),roof_frame*Vector3(-0.22,-0.12,0.34),roof_frame*Vector3(-0.63,-0.34,0.34)],2,[Vector2(0,0),Vector2(1,0.5),Vector2(0,1)])
	var note_frame := Transform3D(Basis.IDENTITY,Vector3(center.x,top+0.24,center.z))
	_diamond(surface,note_frame,Vector3(-0.055,0.02,0),Vector2(0.11,0.073),5)
	_panel(surface,note_frame,Vector3(0.034,0.19,0),Vector2(0.037,0.34),5)
	_tri(surface,[note_frame*Vector3(0.02,0.36,0),note_frame*Vector3(0.23,0.27,0),note_frame*Vector3(0.02,0.24,0)],5)
	# Smoke originates only from an actual generated chimney, not empty roof.
	for cell: Dictionary in house.cells:
		if not round_tower.is_empty(): break
		if root.get_meta("joined_roof",false): break
		var level := int(cell.level)
		if str(cell.kind) != "room" or not renderer._at(house.cells,int(cell.x),int(cell.z),level+1).is_empty(): continue
		var left: Dictionary = renderer._at(house.cells,int(cell.x)-1,int(cell.z),level)
		if not left.is_empty() and str(left.kind) == "room" and renderer._at(house.cells,int(cell.x)-1,int(cell.z),level+1).is_empty(): continue
		if posmod(int(house.get("seed",0))+int(cell.x)*13+int(cell.z)*19,4) != 0: continue
		var span := 1
		while true:
			var next: Dictionary = renderer._at(house.cells,int(cell.x)+span,int(cell.z),level)
			if next.is_empty() or str(next.kind) != "room" or not renderer._at(house.cells,int(cell.x)+span,int(cell.z),level+1).is_empty(): break
			span += 1
		var chimney: Vector3 = renderer._cell_position(house,cell)+Vector3(float(span-1)*UNIT*0.5+0.4,(level+1)*FLOOR+0.99,-0.45)
		for puff in range(3):
			_panel(surface,Transform3D.IDENTITY,chimney+Vector3(0,puff*0.12,0),Vector2(0.19,0.22),6,float(puff)/3.0)
	for chimney: Vector3 in root.get_meta("chimneys",[]):
		for puff in range(3):
			_panel(surface,Transform3D.IDENTITY,chimney+Vector3(0,puff*0.12,0),Vector2(0.19,0.22),6,float(puff)/3.0)
	# Attic panes share this same per-house response surface and uniforms.
	# Keep the timber cross visible by glazing each quadrant separately.
	for window: Dictionary in root.get_meta("attic_windows",[]):
		_attic_pane(surface,window)
		windows.append(window)
	rig.mesh = surface.commit()
	rig.custom_aabb = rig.mesh.get_aabb().grow(0.8)
	var material := ShaderMaterial.new()
	material.shader = GlowShader
	material.set_shader_parameter("salon_pulse",0.)
	material.set_shader_parameter("house_phase",float(posmod(hash(id),1000))*0.006283185)
	rig.material_override = material
	rig.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	rig.visible = false
	pivot.add_child(rig)
	# Geometry was authored in root coordinates; the pivot only supplies breathing.
	rig.position = -pivot.position
	rig.set_meta("windows",windows)
	rig.set_meta("lanterns",lanterns)
	rig.set_meta("arch_lanterns",arch_lanterns)
	rig.set_meta("garlands",garlands)
	rig.set_meta("tower_bells",tower_bells)
	preload("res://scripts/visual/city_creation_hinge_assembly.gd").rig(house,root,rig)
	var arc := MeshInstance3D.new()
	arc.name = "ResonanceArc"
	arc.mesh = arc_mesh if arc_mesh != null else _ribbon()
	var arc_material := ShaderMaterial.new()
	arc_material.shader = ArcShader
	arc.material_override = arc_material
	arc.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	arc.visible = false
	arc.custom_aabb = AABB(Vector3(-22,-1,-19),Vector3(44,21,38))
	root.add_child(arc);arc.set_as_top_level(true);arc.global_transform=Transform3D.IDENTITY
	var row := {"root":root,"pivot":pivot,"mesh":rig,"material":material,"arc":arc,"arc_material":arc_material,"anchor":Frame.world3(house,Vector3(center.x,top+0.10,center.z)),"base_y":center.y,"height":maxf(FLOOR,top-center.y),"weight":0.0,"afterglow":0.0,"level_tier":renderer.state.level_tier(id),"inhabited":str(house.get("role",""))=="residential"}
	material.set_shader_parameter("pluck_base_y",center.y)
	material.set_shader_parameter("pluck_height",float(row.height))
	rigs[id] = row
	# A latest-version rebuild can install midway through a real short note.
	# Inherit the report immediately; subsequent update owns every uniform.
	_apply_pluck(id,row,last_pluck)
	rig.visible = float(row.get("pluck_strength",0.0))>0.0

func forget(id: String) -> void:
	rigs.erase(id)
	if str(last_pluck.get("house_id",""))==id: last_pluck.clear()

func _apply_pluck(id: String,row: Dictionary,report: Dictionary) -> void:
	var elapsed := float(report.get("elapsed",0.0))
	var duration := float(report.get("glow_duration",report.get("duration",0.0)))
	var active := bool(report.get("glowing",report.get("audible",false))) and str(report.get("house_id",""))==id and is_finite(elapsed) and is_finite(duration) and duration>0.0 and elapsed>=0.0 and elapsed<duration
	if not active and row.has("pluck_strength") and float(row.pluck_strength)==0.0: return
	var progress := clampf(elapsed/maxf(duration,0.001),0.0,1.0) if active else 0.0
	var strength := sin(PI*progress)*0.92 if active else 0.0
	var material: ShaderMaterial = row.material
	material.set_shader_parameter("pluck_strength",strength)
	material.set_shader_parameter("pluck_progress",progress)
	row.pluck_strength = strength
	row.pluck_progress = progress
	row.pluck_serial = int(report.get("serial",0)) if active else 0

func update(snapshot: Dictionary) -> void:
	last_pluck = snapshot.get("pluck",{}).duplicate()
	var circular: Dictionary=snapshot.get("canon",{})
	if not bool(last_pluck.get("glowing",false)) and bool(circular.get("glowing",false)):last_pluck=circular.duplicate()
	var reply: Dictionary=snapshot.get("reply",{})
	var reply_audible:=bool(reply.get("audible",false))
	var reply_source:=str(reply.get("source_id","")) if reply_audible else ""
	var reply_progress:=clampf(float(reply.get("elapsed",0.0))/0.8,0.0,1.0)
	var reply_strength:=0.52*sin(PI*reply_progress) if reply_audible else 0.0
	var tower: Dictionary = snapshot.get("tower",{})
	var tower_audible := bool(tower.get("audible",false))
	var tower_source := str(tower.get("source_id","")) if tower_audible else ""
	var tower_progress := clampf(float(tower.get("elapsed",0.0))/maxf(0.001,float(tower.get("duration",1.6))),0.0,1.0)
	var tower_strength := 0.34*sin(PI*tower_progress) if tower_audible else 0.0
	var audible := bool(snapshot.get("audible",false)) or tower_audible or reply_audible
	var clock := float(snapshot.get("clock_sec",0.0)) if audible else 0.0
	var pulse := clampf(float(snapshot.get("beat_pulse",0.0)),0.0,1.0) if audible else 0.0
	var lead_id := str(snapshot.get("lead_id","")) if audible else ""
	var chorus: Array = snapshot.get("chorus_ids",[]) if audible else []
	var ambient: Array = snapshot.get("ambient_ids",[]) if audible else []
	var wake: Array = snapshot.get("wake_ids",[]) if audible else []
	var afterglow: Dictionary = snapshot.get("afterglow",{})
	var festival_ready: Array = snapshot.get("festival_ready_ids",[])
	var venue_id := str(snapshot.get("venue_id",""))
	var playing := bool(snapshot.get("concert_active",false)) and str(snapshot.get("phase","idle")) == "playing"
	var finale := bool(snapshot.get("finale",false))
	var phase := str(snapshot.get("phase","idle"))
	if phase != last_phase: phase_updates += 1
	last_phase = phase
	last_audible = audible
	last_lead_id = lead_id
	for id: String in rigs:
		var row: Dictionary = rigs[id]
		var lead := 1.0 if id == lead_id else 0.0
		var weight := 1.0 if lead > 0.0 else 0.0
		var tower_response := tower_strength if id==tower_source else 0.0
		weight = maxf(weight,tower_response)
		var reply_response:=reply_strength if id==reply_source else 0.0
		weight=maxf(weight,reply_response)
		weight=maxf(weight,float(snapshot.get("choral_wave",{}).get(id,0.)))
		if chorus.has(id): weight = maxf(weight,0.64+0.16*pulse)
		if ambient.has(id): weight = maxf(weight,0.25+0.10*(sin(clock*0.65)+1.0)*0.5)
		if wake.has(id): weight = maxf(weight,0.22+0.12*pulse)
		if audible and finale and (chorus.has(id) or id == venue_id): weight = maxf(weight,0.93)
		var glow := clampf(float(afterglow.get(id,0.0))/4.0,0.0,1.0)
		var ready := festival_ready.has(id)
		var material: ShaderMaterial = row.material
		var night_glow: float=(0.35 if night else .14 if dusk else 0.0)*(1.28 if int(row.get("level_tier",1))>=2 else 1.0)
		material.set_shader_parameter("night_glow",night_glow)
		material.set_shader_parameter("clock_sec",clock)
		material.set_shader_parameter("beat_pulse",pulse)
		material.set_shader_parameter("response",weight)
		material.set_shader_parameter("lead",lead)
		material.set_shader_parameter("afterglow",glow)
		material.set_shader_parameter("finale_glow",float(snapshot.get("finale_glow",0.)))
		material.set_shader_parameter("festival_ready",1.0 if ready else 0.0)
		_apply_pluck(id,row,last_pluck)
		row.mesh.visible = float(material.get_shader_parameter("salon_pulse"))>0. or weight > 0.0 or glow > 0.0 or ready or float(row.pluck_strength)>0.0 or night_glow>0.0 or float(row.get("harmony",0.0))>0.0
		row.pivot.scale.y = 1.0+0.02*pulse*lead
		row.weight = weight
		row.afterglow = glow
		row.festival_ready = ready
		row.lead = lead
		row.chorus = chorus.has(id)
		row.ambient = ambient.has(id)
		row.wake = wake.has(id)
		row.tower_response = tower_response
		row.reply_response=reply_response
		row.arc.visible = false
		row.arc_material.set_shader_parameter("strength",0.0)
	if audible and (playing or reply_audible):
		var links: Array=snapshot.get("resonance_arcs",[]).duplicate()
		if reply_audible and str(reply.get("phase",""))=="answer":
			links.append({"from_id":reply.from_id,"to_id":reply.to_id,"strength":reply_strength})
		for link: Dictionary in links:
			var from_id := str(link.get("from_id",venue_id))
			var to_id := str(link.get("to_id",""))
			if from_id == to_id or not rigs.has(from_id) or not rigs.has(to_id): continue
			var row: Dictionary = rigs[to_id]
			row.arc_material.set_shader_parameter("from_at",rigs[from_id].anchor)
			row.arc_material.set_shader_parameter("to_at",row.anchor)
			row.arc_material.set_shader_parameter("strength",clampf(float(link.get("strength",1.0)),0.0,1.0))
			row.arc_material.set_shader_parameter("clock_sec",clock)
			row.arc.visible = true
	if wave != null:
		wave.visible = audible and playing and rigs.has(venue_id)
		if wave.visible:
			var anchor: Vector3 = rigs[venue_id].anchor
			wave_material.set_shader_parameter("center_at",Vector3(anchor.x,float(rigs[venue_id].base_y),anchor.z))
			wave_material.set_shader_parameter("clock_sec",clock)
			wave_material.set_shader_parameter("strength",1.0 if finale else 0.65)

func diagnostics() -> Dictionary:
	var houses := {}
	for id: String in rigs:
		var row: Dictionary = rigs[id]
		houses[id] = {"weight":row.weight,"lead":row.get("lead",0.0),"chorus":row.get("chorus",false),"ambient":row.get("ambient",false),"wake":row.get("wake",false),"afterglow":row.afterglow,"festival_ready":row.get("festival_ready",false),"rig_id":row.mesh.get_instance_id(),"node_id":row.mesh.get_instance_id(),"material_id":row.material.get_instance_id(),"mesh_id":row.mesh.mesh.get_instance_id(),"pivot_id":row.pivot.get_instance_id(),"arc_id":row.arc.get_instance_id(),"arc_active":row.arc.visible,"arc_target":id if row.arc.visible else "","pivot_scale_y":row.pivot.scale.y,"windows":row.mesh.get_meta("windows",[]).size(),"lanterns":row.mesh.get_meta("lanterns",0),"garlands":row.mesh.get_meta("garlands",0),"tower_bells":row.mesh.get_meta("tower_bells",0),"tower_response":row.get("tower_response",0.0),"reply_response":row.get("reply_response",0.0)}
		houses[id]["pluck_strength"] = row.get("pluck_strength",0.0)
		houses[id]["pluck_progress"] = row.get("pluck_progress",0.0)
		houses[id]["pluck_serial"] = row.get("pluck_serial",0)
	return {"houses":houses,"rig_count":rigs.size(),"build_count":build_count,"phase_updates":phase_updates,"phase":last_phase,"ring_visible":wave != null and wave.visible,"audible":last_audible,"lead_id":last_lead_id}

func _panel(surface: SurfaceTool, frame: Transform3D, at: Vector3, size_value: Vector2, part: int, phase: float = 0.0) -> void:
	var half := size_value*0.5
	var a := frame*(at+Vector3(-half.x,-half.y,0))
	var b := frame*(at+Vector3(half.x,-half.y,0))
	var c := frame*(at+Vector3(half.x,half.y,0))
	var d := frame*(at+Vector3(-half.x,half.y,0))
	_tri(surface,[a,b,c],part,[Vector2(0,1),Vector2(1,1),Vector2(1,0)],phase)
	_tri(surface,[a,c,d],part,[Vector2(0,1),Vector2(1,0),Vector2(0,0)],phase)

func _diamond(surface: SurfaceTool, frame: Transform3D, at: Vector3, size_value: Vector2, part: int, phase: float = 0.0) -> void:
	var a := frame*(at+Vector3(-size_value.x,0,0))
	var b := frame*(at+Vector3(0,-size_value.y,0))
	var c := frame*(at+Vector3(size_value.x,0,0))
	var d := frame*(at+Vector3(0,size_value.y,0))
	_tri(surface,[a,b,c],part,[],phase)
	_tri(surface,[a,c,d],part,[],phase)

func _tri(surface: SurfaceTool, vertices: Array, part: int, uv: Array = [], phase: float = 0.0) -> void:
	var normal: Vector3 = (vertices[2]-vertices[0]).cross(vertices[1]-vertices[0]).normalized()
	for index in range(3):
		surface.set_normal(normal)
		surface.set_color(Color(float(part)/8.0,phase,0,1))
		surface.set_uv(uv[index] if not uv.is_empty() else Vector2.ZERO)
		surface.add_vertex(vertices[index])

func _attic_pane(surface: SurfaceTool,window: Dictionary) -> void:
	var side: Vector2i = window.side
	var tangent := Vector3(side.y,0,-side.x)
	var center: Vector3 = window.at
	var radius := float(window.radius)
	for quadrant in range(4):
		for segment in range(5):
			var a := quadrant*PI*0.5+0.10+(PI*0.5-0.20)*segment/5.0
			var b := quadrant*PI*0.5+0.10+(PI*0.5-0.20)*(segment+1)/5.0
			var aa := center+(tangent*cos(a)+Vector3.UP*sin(a))*radius
			var bb := center+(tangent*cos(b)+Vector3.UP*sin(b))*radius
			_tri(surface,[center,bb,aa],0)

func _ribbon() -> ArrayMesh:
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	for segment in range(40):
		var a := float(segment)/40.0
		var b := float(segment+1)/40.0
		_tri(surface,[Vector3(a,0,0),Vector3(b,0,0),Vector3(b,0,1)],0,[Vector2(a,0),Vector2(b,0),Vector2(b,1)])
		_tri(surface,[Vector3(a,0,0),Vector3(b,0,1),Vector3(a,0,1)],0,[Vector2(a,0),Vector2(b,1),Vector2(a,1)])
	return surface.commit()

func _ring() -> ArrayMesh:
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	for segment in range(80):
		var a := float(segment)*TAU/80.0
		var b := float(segment+1)*TAU/80.0
		var va := Vector3(cos(a),0,sin(a))
		var vb := Vector3(cos(b),0,sin(b))
		_tri(surface,[va,vb,vb*0.97],0,[Vector2(0,0),Vector2(1,0),Vector2(1,1)])
		_tri(surface,[va,vb*0.97,va*0.97],0,[Vector2(0,0),Vector2(1,1),Vector2(0,1)])
	return surface.commit()

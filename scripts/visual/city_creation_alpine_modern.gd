extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const Plan = preload("res://scripts/world/city_creation_alpine_plan.gd")
const Pick = preload("res://scripts/visual/city_creation_roof_pick.gd")
const Eco = preload("res://scripts/visual/city_creation_modern_archetypes.gd")

static func facade(renderer, wall: Node3D, door: bool, p: Array, house: Dictionary, cell: Dictionary, direction: Vector2i) -> void:
	var kind := Plan.kind_for(house)
	if kind>=3:
		preload("res://scripts/visual/city_creation_alpine_lodge.gd").facade(renderer,wall,door,p,house,cell,direction);return
	var wood := Wall.source(p[2].lerp(Color("ad845b"),.48),null,"component",Wall.Kind.STONE)
	var stone := Wall.source(p[0].lerp(Color("b8b3a0"),.55),null,"component",Wall.Kind.STONE)
	var glass: Material = renderer.conservatory.ensure_material(true)
	var face := Node3D.new(); face.name="AlpineFacade"; wall.add_child(face)
	face.set_meta("alpine_kind",kind)
	if kind==Plan.Kind.SPLIT_GABLE_CHALET:
		# Cedar masses with inset ribbon windows, rather than a white glass box.
		for side: float in [-1.,1.]:
			renderer._box(face,Vector3(.34,1.47,.17),Vector3(side*.72,.85,.06),wood)
		for y: float in [.29,.45,1.39,1.55]: renderer._box(face,Vector3(1.76,.11,.16),Vector3(0,y,.06),wood)
		if not door: _pane(renderer,face,Vector3(1.06,.78,.04),Vector3(0,.95,.10),glass)
	else:
		_pane(renderer,face,Vector3(1.65,1.38,.035),Vector3(0,.86,-.08 if kind==2 else .02),glass)
		var side := -1. if direction.x+direction.y<0 else 1.
		renderer._box(face,Vector3(.22,1.47,.26),Vector3(side*.77,.84,.07),stone)
		for x: float in [-.82,0.,.82]: renderer._box(face,Vector3(.045,1.46,.08),Vector3(x,.85,.08),wood)
		renderer._box(face,Vector3(1.82,.09,.22),Vector3(0,1.55,.08),wood)
	if door:
		renderer._box(face,Vector3(.50,1.16,.045),Vector3(0,.72,.12),renderer._material(Color("526d60")))
		renderer._box(face,Vector3(.025,.22,.06),Vector3(.17,.75,.16),wood)
	if kind==2 and int(cell.level)==0 and direction==Plan.front(renderer.state,house): _deck(renderer,wall.get_parent(),house,cell,direction,wood,stone)
	wall.set_meta("modern_glass",{"floor_to_ceiling":kind!=0,"alpine_kind":kind,"warm":true})

static func roof(renderer, root: Node3D, house: Dictionary, p: Array, cell: Dictionary) -> Dictionary:
	if Plan.kind_for(house)>=3:return preload("res://scripts/visual/city_creation_alpine_lodge.gd").roof(renderer,root,house,p,cell)
	var node: Node3D = root.get_node(str(cell.id))
	var frame := Node3D.new(); frame.name="AlpineRoof_"+str(cell.id); node.add_child(frame)
	var kind := Plan.kind_for(house); var front := Plan.front(renderer.state,house)
	frame.rotation.y=atan2(float(front.x),float(front.y)); frame.set_meta("alpine_kind",kind)
	var y := (int(cell.level)+1)*1.7
	var wood := Wall.source(p[2].lerp(Color("ad845b"),.48),null,"component",Wall.Kind.STONE)
	var slate := Wall.source(Color("52636a"),null,"component",Wall.Kind.SLATE)
	var stone := Wall.source(p[0].lerp(Color("b8b3a0"),.55),null,"component",Wall.Kind.STONE)
	var join := Plan.seams(renderer.state,house,cell,front)
	var back := -.9 if join[0] else -1.08; var forward := .9 if join[1] else 1.08
	if kind==Plan.Kind.SPLIT_GABLE_CHALET:
		var a:=Vector3(-1.06,y+.03,back); var b:=Vector3(.23,y+.73,back); var c:=Vector3(1.06,y+.16,back)
		_prism(renderer,frame,[a,a+Vector3(0,0,forward-back),b+Vector3(0,0,forward-back),b],slate)
		_prism(renderer,frame,[b,b+Vector3(0,0,forward-back),c+Vector3(0,0,forward-back),c],slate)
		var soffit := Wall.source(p[2],null,"component",Wall.Kind.CANTILEVER)
		for x: float in [-1.02,1.02]: renderer._box(frame,Vector3(.10,.085,forward-back),Vector3(x,y+(.10 if x>0 else -.02),(back+forward)*.5),soffit)
		renderer._box(frame,Vector3(.095,.095,forward-back),Vector3(.23,y+.69,(back+forward)*.5),wood).name="JoinedCedarRidge"
		for index in range(2):
			if join[index]: continue
			var z := back+.08 if index==0 else forward-.08
			var points := [Vector3(-.91,y,z),Vector3(.91,y+.13,z),Vector3(.23,y+.69,z)]
			if index==0: points.reverse()
			var gable: MeshInstance3D=renderer._triangles(frame,points,wood.albedo_color); gable.material_override=wood; gable.name="CedarGable"
			for i in range(4):
				var t := (i+1)/5.; var width := 1.70*(1.-t)
				renderer._box(frame,Vector3(width,.035,.06),Vector3(.23*t,y+.69*t,z+.025*(1. if index else -1.)),wood)
	elif kind==Plan.Kind.MONO_PITCH_PAVILION:
		_prism(renderer,frame,[Vector3(-1.07,y+.07,-1.02),Vector3(-1.07,y+.60,1.12),Vector3(1.07,y+.60,1.12),Vector3(1.07,y+.07,-1.02)],slate)
		var glass: Material = renderer.conservatory.ensure_material(true)
		_pane(renderer,frame,Vector3(1.74,.47,.035),Vector3(0,y+.31,.90),glass)
		for side: float in [-1.,1.]:
			var points := [Vector3(side*.9,y,-.9),Vector3(side*.9,y,.9),Vector3(side*.9,y+.55,.9)]
			var pane: MeshInstance3D=renderer._triangles(frame,points,Color.WHITE); pane.material_override=glass; pane.set_meta("creation_live_visual",true)
			renderer._box(frame,Vector3(.065,.065,2.18),Vector3(side*.90,y+.31,.02),wood).rotation.x=-atan2(.53,2.14)
		renderer._box(frame,Vector3(2.14,.09,.12),Vector3(0,y+.56,1.08),wood)
	else:
		renderer._box(frame,Vector3(2.04,.14,2.04),Vector3(0,y+.03,0),stone)
		renderer._box(frame,Vector3(1.92,.32,.95),Vector3(0,y+.24,-.45),stone)
		var garden := Node3D.new(); frame.add_child(garden); garden.position=Vector3(0,y+.42,-.35); garden.scale=Vector3.ONE*.62
		Eco.populate_roof(renderer,garden,house,cell,0.,p)
		for x: float in [-.86,.86]: renderer._box(frame,Vector3(.045,.32,.70),Vector3(x,y+.25,.54),wood)
	var body := StaticBody3D.new(); frame.add_child(body)
	body.set_meta("house_id",str(house.id)); body.set_meta("cell_id",str(cell.id)); body.set_meta("cell",cell.duplicate(true))
	Pick.from_children(body,frame,"AlpineRoofPick")
	if house.role=="bakery":root.set_meta("chimneys",[node.position+Vector3(.6,y+.5,-.6)])
	return {"cell_id":str(cell.id),"roof_y":float(house.get("base_y",0.))+y,"cantilever":[.16,.17,.12][kind],"alpine_kind":kind,"archetype":Eco.roof_kind(house,cell),"front":front,"joined_ends":join,"lawn":kind==2}

static func _pane(renderer, root: Node3D, size: Vector3, at: Vector3, material: Material) -> void:
	var pane: MeshInstance3D=renderer._box(root,size,at,material)
	pane.set_meta("creation_live_visual",true); pane.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF

static func _prism(renderer, root: Node3D, top: Array, material: Material) -> void:
	var low: Array=top.map(func(p):return p-Vector3(0,.08,0))
	var faces: Array=[[top[0],top[1],top[2],top[0],top[2],top[3]],[low[0],low[2],low[1],low[0],low[3],low[2]]]
	for i in range(4):
		var j: int=(i+1)%4; faces.append([low[i],top[i],top[j],low[i],top[j],low[j]])
	for face: Array in faces:
		var mesh: MeshInstance3D=renderer._triangles(root,face,material.albedo_color); mesh.material_override=material

static func _deck(renderer, parent: Node3D, house: Dictionary, cell: Dictionary, front: Vector2i, wood: Material, stone: Material) -> void:
	var deck := Node3D.new(); deck.name="TerrainSupportedDeck"; parent.add_child(deck); deck.rotation.y=atan2(float(front.x),float(front.y))
	var samples: Array=[]
	for x: float in [-.76,0.,.76]:
		var at: Vector3=deck.to_global(Vector3(x,0,.97))
		var ground: float=renderer.state.raw_terrain_height(Frame.point(house,Vector2(at.x,at.z)))-float(house.get("base_y",0.))
		if ground>.10: deck.free(); return
		samples.append({"x":x,"ground":ground})
	renderer._box(deck,Vector3(1.92,.10,.58),Vector3(0,.16,.75),wood)
	for sample: Dictionary in samples:
		var bottom: float=sample.ground-.06; var height: float=.11-bottom
		renderer._box(deck,Vector3(.14,height,.16),Vector3(sample.x,(.11+bottom)*.5,.97),stone)
	deck.set_meta("support_samples",samples)

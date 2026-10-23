extends RefCounted
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Plan=preload("res://scripts/world/city_creation_alpine_plan.gd")
const Pick=preload("res://scripts/visual/city_creation_roof_pick.gd")
static func facade(r, wall: Node3D, door: bool, p: Array, house: Dictionary, cell: Dictionary, direction: Vector2i) -> void:
	var kind:=Plan.kind_for(house);var level:=int(cell.level)
	var wood:=Wall.source(p[2].lerp(Color("95653f"),.65),null,"component",Wall.Kind.STONE)
	var stone:=Wall.source(Color("938d7b"),null,"component",Wall.Kind.STONE)
	var face:=Node3D.new();face.name="LodgeFrame";wall.add_child(face)
	var pane:MeshInstance3D=r._box(face,Vector3(1.62,1.30,.035),Vector3(0,.87,-.16),r.conservatory.ensure_material(true))
	pane.set_meta("creation_live_visual",true)
	for x:float in [-.80,.80]:r._box(face,Vector3(.13,1.55,.22),Vector3(x,.85,.02),wood)
	for y:float in [.18,1.55]:r._box(face,Vector3(1.80,.13,.28),Vector3(0,y,0),wood)
	if kind==5 and level==0:
		for side:float in [-1.,1.]:
			for row in range(4):
				for col in range(2):r._box(face,Vector3(.24,.27,.25),Vector3(side*(.45+col*.29),.29+row*.34,.03),stone)
	elif kind==3:
		for index in range(1+level%3):
			var x:float=-.52+1.04*(index+1)/float(2+level%3)
			r._box(face,Vector3(.055,1.30,.11),Vector3(x,.87,-.09),wood)
		if level>0:
			r._box(face,Vector3(1.80,.10,.40),Vector3(0,.13,.12),wood).name="RecessedPanoramaBalcony"
			for x:float in [-.75,-.25,.25,.75]:r._box(face,Vector3(.035,.42,.04),Vector3(x,.37,.29),wood)
			r._box(face,Vector3(1.56,.045,.06),Vector3(0,.60,.29),wood)
	if door:
		r._box(face,Vector3(.49,1.15,.05),Vector3(0,.74,.07),r._material(Color("4f665a")))
		r._box(face,Vector3(.025,.19,.07),Vector3(.17,.76,.12),wood)
	wall.set_meta("modern_glass",{"floor_to_ceiling":true,"alpine_kind":kind,"warm":true})
	face.set_meta("frame_rhythm",1+level%3);face.set_meta("front",direction)

static func roof(r, root: Node3D, house: Dictionary, p: Array, cell: Dictionary) -> Dictionary:
	var kind:=Plan.kind_for(house);var front:=Plan.front(r.state,house)
	var frame:=Node3D.new();frame.name="AlpineLodgeRoof_"+str(cell.id);root.get_node(str(cell.id)).add_child(frame)
	frame.rotation.y=atan2(float(front.x),float(front.y));frame.set_meta("alpine_kind",kind)
	var y:float=(int(cell.level)+1)*1.7
	var wood:=Wall.source(p[2].lerp(Color("95653f"),.65),null,"component",Wall.Kind.STONE)
	var slate:=Wall.source(Color("536269"),null,"component",Wall.Kind.SLATE)
	var stone:=Wall.source(Color("a8a38e"),null,"component",Wall.Kind.STONE)
	if kind==3:
		_gable(r,frame,2.10,2.08,y+.05,y+.63,0.,slate)
		r._box(frame,Vector3(.08,.07,2.12),Vector3(0,y+.63,0),wood)
		for z:float in [-.94,.94]:r._box(frame,Vector3(1.94,.09,.14),Vector3(0,y+.12,z),wood)
	elif kind==4:
		for side:float in [-1.,1.]:
			_gable(r,frame,.81,2.08,y+.05,y+.66,side*.60,slate)
			r._box(frame,Vector3(.70,.24,1.80),Vector3(side*.60,y+.10,0),wood)
		# Separate roof pavilions connected by a light timber/glass link.
		r._box(frame,Vector3(.45,.07,.65),Vector3(0,y+.13,0),wood).name="TwinGableLinkDeck"
		for z:float in [-.32,.32]:
			var pane:MeshInstance3D=r._box(frame,Vector3(.45,.36,.025),Vector3(0,y+.34,z),r.conservatory.ensure_material(true))
			pane.set_meta("creation_live_visual",true)
		r._box(frame,Vector3(.49,.06,.71),Vector3(0,y+.55,0),wood)
	else:
		r._box(frame,Vector3(2.10,.17,2.06),Vector3(0,y+.03,0),stone)
		for index in range(2):
			var z:float=-.46+index*.87;var height:float=y+.15+index*.12
			r._box(frame,Vector3(1.93,.12,.83),Vector3(0,height,z),wood)
			r._box(frame,Vector3(1.78,.055,.68),Vector3(0,height+.08,z),Wall.source(Color("748553"),null,"component",Wall.Kind.STONE)).name="SedumGreenRoof"
			for x:float in [-.68,0.,.68]:r._crown(frame,Vector3(x,height+.14,z),Vector3(.24,.10,.22),Color("8a9b58"))
	var body:=StaticBody3D.new();frame.add_child(body)
	body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(cell.id));body.set_meta("cell",cell.duplicate(true))
	Pick.from_children(body,frame,"AlpineRoofPick")
	if house.role=="bakery":root.set_meta("chimneys",[root.get_node(str(cell.id)).position+Vector3(.5,y+.5,-.5)])
	return {"cell_id":str(cell.id),"roof_y":float(house.get("base_y",0.))+y,"cantilever":.15,"alpine_kind":kind,"front":front,"lawn":kind==5}

static func _gable(r, root: Node3D, width: float, depth: float, eave: float, ridge: float, x: float, material: Material) -> void:
	var a:=Vector3(x-width*.5,eave,-depth*.5);var b:=a+Vector3(width,0,0)
	var c:=Vector3(x+width*.5,eave,depth*.5);var d:=c-Vector3(width,0,0)
	var top0:=Vector3(x,ridge,-depth*.5);var top1:=Vector3(x,ridge,depth*.5)
	for vertices:Array in [[a,d,top1,a,top1,top0],[top0,top1,c,top0,c,b],[a,top0,b],[d,c,top1],[a,b,c,a,c,d]]:
		var mesh:MeshInstance3D=r._triangles(root,vertices,material.albedo_color);mesh.material_override=material

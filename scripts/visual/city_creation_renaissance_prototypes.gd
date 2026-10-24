extends RefCounted
## Recessed round galleries and genuinely open roof loggias, no extra rooms.
const Plan=preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd")
const Parts=preload("res://scripts/visual/city_creation_clockwork_parts.gd")
const Pick=preload("res://scripts/visual/city_creation_roof_pick.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
static func build(r,root:Node3D,house:Dictionary)->void:
	var kind:=str(house.architecture);var rows:Array=Plan.roofs(house);var records:Array=[]
	var stone:Material=Parts.material(r,Color("e8d7b7"),Parts.Wall.Kind.STONE)
	var tile:Material=Parts.material(r,Color("b56b4e"),Parts.Wall.Kind.TERRACOTTA)
	for row:Dictionary in rows:
		var node:=Node3D.new();root.add_child(node);node.name="RenaissancePrototype_"+str(row.cell.id)
		node.position=Vector3(row.center.x,row.base,row.center.y)
		r._box(node,Vector3(1.8,.12,1.8),Vector3(0,.015,0),stone)
		if kind=="venetian_loggia":_hip(r,node,1.8,1.8,.10,.55,tile)
		else:
			for side:Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
				if not r.building_context.neighbor(house,row.cell,side,0,true).is_empty():continue
				var rail:=Node3D.new();node.add_child(rail);rail.rotation.y=atan2(float(side.x),float(side.y))
				_rail(r,rail,stone)
			if row==rows[0]:_lookout(r,node,stone,tile)
		var body:=StaticBody3D.new();node.add_child(body)
		body.set_meta("house_id",str(house.id));body.set_meta("cell_id",str(row.cell.id));body.set_meta("cell",row.cell.duplicate(true))
		Pick.from_children(body,node,"RenaissancePrototypePick")
		records.append({"prototype":kind,"cell_id":str(row.cell.id),"center":row.center,"base":row.base,"lookout":kind=="belvedere_villa" and row==rows[0]})
	root.set_meta("renaissance_prototypes",records);root.set_meta("prototype_caption",Choice.label(kind))
static func _hip(r,node:Node3D,width:float,depth:float,eave:float,ridge:float,tile:Material)->void:
	var x:=width*.5;var z:=depth*.5;var peak:=Vector3(0,ridge,0)
	for edge:Array in [[Vector3(-x,eave,-z),Vector3(x,eave,-z)],[Vector3(x,eave,-z),Vector3(x,eave,z)],[Vector3(x,eave,z),Vector3(-x,eave,z)],[Vector3(-x,eave,z),Vector3(-x,eave,-z)]]:
		Parts.face(r,node,[edge[0],edge[1],peak],tile,"TerracottaHippedRoof")
static func _rail(r,rail:Node3D,stone:Material)->void:
	for x:float in [-.80,-.55,-.28,0.,.28,.55,.80]:
		r._cylinder(rail,.025,.03,.32,Vector3(x,.27,.80),stone,8)
	r._box(rail,Vector3(1.65,.075,.09),Vector3(0,.47,.80),stone)
static func _lookout(r,node:Node3D,stone:Material,tile:Material)->void:
	r._box(node,Vector3(1.27,.10,1.27),Vector3(0,.12,0),stone).name="RetreatedLookoutFloor"
	for x:float in [-.52,.52]:
		for z:float in [-.52,.52]:
			r._cylinder(node,.065,.048,.96,Vector3(x,.65,z),stone,10).name="OpenLoggiaColumn"
			r._box(node,Vector3(.18,.07,.18),Vector3(x,1.14,z),stone)
	for at:Vector3 in [Vector3(0,1.19,-.55),Vector3(0,1.19,.55)]:r._box(node,Vector3(1.3,.13,.17),at,stone)
	for at:Vector3 in [Vector3(-.55,1.19,0),Vector3(.55,1.19,0)]:r._box(node,Vector3(.17,.13,1.3),at,stone)
	_hip(r,node,1.48,1.48,1.27,1.77,tile)

extends RefCounted
## Derived from authored room columns and actual road frontage; no saved fields.
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
const Pick = preload("res://scripts/visual/city_creation_roof_pick.gd")
const SIDES = [Vector2i.LEFT, Vector2i.RIGHT, Vector2i.UP, Vector2i.DOWN]
enum Kind { PORTICO_COTTAGE, TRIPARTITE_TOWNHOUSE, CORNER_ORIEL }

static func eligible(house: Dictionary, era: String, style: String) -> bool:
	return era in ["pastoral", "renaissance"] and style != "timber" and not house.has("signature")

static func floors(house: Dictionary, cell: Dictionary) -> int:
	var count := 0
	for row: Dictionary in house.cells:
		if row.x == cell.x and row.z == cell.z and row.kind == "room": count = maxi(count, int(row.level)+1)
	return count

static func classify(level: int, total_floors: int, corner: bool) -> int:
	if corner and level > 0: return Kind.CORNER_ORIEL
	return Kind.TRIPARTITE_TOWNHOUSE if total_floors >= 2 else Kind.PORTICO_COTTAGE

static func corner_sides(city, house: Dictionary, cell: Dictionary) -> Array:
	var at := Vector2(house.origin[0], house.origin[1]) + Vector2(cell.x, cell.z)*1.8
	var fronts: Array = []
	for side: Vector2i in SIDES:
		var normal := Vector2(side)
		var blocked := false
		for other: Dictionary in city.houses:
			for room: Dictionary in other.cells:
				if int(room.level) != int(cell.level) or room.kind != "room": continue
				var center := Vector2(other.origin[0], other.origin[1])+Vector2(room.x, room.z)*1.8
				var offset := center-at
				if offset.dot(normal)>0.01 and offset.dot(normal)<=1.81 and absf(offset.cross(normal))<1.79: blocked = true
		if blocked: continue
		var front := false
		for road: Dictionary in city.roads:
			for i in range(1, road.points.size()):
				var a := Vector2(road.points[i-1][0], road.points[i-1][1])
				var b := Vector2(road.points[i][0], road.points[i][1])
				var delta := Geometry2D.get_closest_point_to_segment(at, a, b)-at
				if delta.dot(normal)>1.05 and delta.length() <= float(road.width)*.5+2.0 and absf(delta.cross(normal))<1.0: front = true
		if front: fronts.append(side)
	for a: Vector2i in fronts:
		for b: Vector2i in fronts:
			if a.x*b.x+a.y*b.y==0: return [a,b]
	return []

static func windows(renderer, wall: Node3D, level: int, palette: Array) -> void:
	var stone := Wall.source(palette[0].lerp(Color("ecdfc5"), .7), null, "component", Wall.Kind.STONE)
	var glass: Material = renderer._material(Color("425b59"))
	var height := .88 if level > 0 else .64
	for x: float in [-.44,.44]:
		renderer._box(wall, Vector3(.44,height+.12,.12), Vector3(x,.96,.11), stone)
		renderer._box(wall, Vector3(.32,height,.055), Vector3(x,.96,.19), glass)
		renderer._box(wall, Vector3(.025,height,.04), Vector3(x,.96,.23), stone)
		renderer._box(wall, Vector3(.35,.028,.04), Vector3(x,.96,.23), stone)
		renderer._box(wall, Vector3(.52,.075,.25), Vector3(x,.91-height*.5,.19), stone)

static func build(renderer, wall: Node3D, house: Dictionary, cell: Dictionary, direction: Vector2i, door: bool, palette: Array) -> void:
	var level := int(cell.level)
	var total := floors(house, cell)
	var corners := corner_sides(renderer.state, house, cell) if level > 0 else []
	var choice: String=house.get("architecture","")
	if choice=="portico":total=1 if level==0 else maxi(2,total)
	if choice=="townhouse":total=maxi(2,total)
	if choice in ["portico","townhouse"]:corners=[]
	var kind := classify(level, total, not corners.is_empty())
	var details := Node3D.new()
	details.name = ["NeoclassicalPortico", "TripartiteElevation", "CornerOrielBay"][kind]
	details.set_meta("neoclassical_kind", kind)
	details.set_meta("story", level)
	details.set_meta("column_floors", total)
	wall.add_child(details)
	var stone_col: Color = palette[0].lerp(Color("e8ddbd"), .65)
	var stone := Wall.source(stone_col, null, "component", Wall.Kind.STONE)
	var base := Wall.source(palette[0].lerp(Color("b7ac96"), .6), null, "component", Wall.Kind.STONE)
	if total == 1:
		renderer._box(details, Vector3(1.80,.085,.30), Vector3(0,1.54,.06), stone)
		if door and level==0: _portico(renderer, details, stone, stone_col)
	else:
		if level == 0:
			for x: float in [-.76,.76]:
				for band in range(4):
					renderer._box(details, Vector3(.25,.27,.12), Vector3(x,.30+band*.32,.12), base)
			renderer._box(details, Vector3(1.80,.13,.26), Vector3(0,1.57,.05), stone)
		else:
			for x: float in [-.76,0.,.76]:
				renderer._box(details, Vector3(.07,1.24,.08), Vector3(x,.86,.09), stone)
			if level == total-1:
				for i in range(9):
					renderer._box(details, Vector3(.07,.12,.18), Vector3(-.80+i*.20,1.43,.13), stone)
				renderer._box(details, Vector3(1.90,.13,.34), Vector3(0,1.58,.08), stone)
			else:
				renderer._box(details, Vector3(1.80,.07,.20), Vector3(0,1.55,.04), stone)
	# One diagonal bay per corner column, above pedestrian height.
	if corners.is_empty() or direction != corners[0]: return
	var local := wall.basis.inverse()*Vector3(corners[1].x,0,corners[1].y)
	var bay := Node3D.new(); bay.name = "OrielProjection"; details.add_child(bay)
	bay.position = Vector3(signf(local.x)*.72,0,.10)
	_oriel(renderer, bay, house, cell, stone, palette)

static func _portico(renderer, details: Node3D, stone: Material, color: Color) -> void:
	for x: float in [-.56,.56]:
		renderer._box(details, Vector3(.24,.11,.36), Vector3(x,.19,.29), stone)
		renderer._cylinder(details,.082,.064,1.02,Vector3(x,.75,.29),stone,12)
		renderer._box(details, Vector3(.26,.09,.36), Vector3(x,1.30,.29), stone)
		for offset: float in [-.08,.08]:
			var volute: MeshInstance3D = renderer._cylinder(details,.045,.045,.18,Vector3(x+offset,1.27,.33),stone,10)
			volute.rotation.x=PI*.5
	_pediment(renderer, details, color)
	details.set_meta("portal_clear_width", .88)

static func _pediment(renderer, parent: Node3D, color: Color) -> void:
	var a:=Vector3(-.80,1.39,.12); var b:=Vector3(.80,1.39,.12); var c:=Vector3(0,1.67,.12)
	var d:=a+Vector3(0,0,.49); var e:=b+Vector3(0,0,.49); var f:=c+Vector3(0,0,.49)
	# Closed stone wedge, including underside for street-level viewing.
	# Separate faces retain the architectural crease through SurfaceTool indexing.
	var faces := [[d,e,f],[a,c,b],[a,e,d,a,b,e],[a,f,c,a,d,f],[b,f,e,b,c,f]]
	for i in range(faces.size()):
		Wall.apply(renderer._triangles(parent,faces[i],color),Wall.Kind.STONE).name="PorticoPedimentFace%d"%i
	renderer._box(parent,Vector3(1.68,.08,.58),Vector3(0,1.37,.36),Wall.source(color,null,"component",Wall.Kind.STONE))

static func _oriel(renderer, bay: Node3D, house: Dictionary, cell: Dictionary, stone: Material, palette: Array) -> void:
	var glass: Material = renderer._material(Color("526d6a"))
	var tile := Wall.source(palette[1].lerp(Color("b8694c"),.65),null,"component",Wall.Kind.TERRACOTTA)
	renderer._cylinder(bay,.12,.37,.22,Vector3(0,.31,0),stone,8).name="CarvedCorbel"
	renderer._cylinder(bay,.35,.35,.09,Vector3(0,.46,0),stone,8)
	renderer._cylinder(bay,.30,.30,.75,Vector3(0,.88,0),glass,8).name="FacetedBayGlazing"
	for i in range(8):
		var angle := TAU*i/8.+PI/8.
		renderer._cylinder(bay,.025,.025,.80,Vector3(cos(angle)*.31,.88,sin(angle)*.31),stone,6)
	renderer._cylinder(bay,.36,.36,.09,Vector3(0,1.30,0),stone,8)
	renderer._cylinder(bay,.39,.02,.28,Vector3(0,1.48,0),tile,8).name="OrielTerracottaCap"
	var body := StaticBody3D.new(); bay.add_child(body)
	body.set_meta("house_id", str(house.id)); body.set_meta("cell_id", str(cell.id)); body.set_meta("cell", cell.duplicate(true))
	Pick.from_children(body,bay,"OrielPick")

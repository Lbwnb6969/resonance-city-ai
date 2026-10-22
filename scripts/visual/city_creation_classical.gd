extends RefCounted
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
## Small inhabited classical houses: warm plaster, stone porticoes and clay roofs.
static func facade(renderer,wall:Node3D,door:bool,palette:Array)->void:
	var stone:Color=palette[0].lerp(Color("e8ddbd"),.65)
	var material:Material=Wall.source(stone, null, "component", Wall.Kind.STONE)
	var details:=Node3D.new();details.name="ClassicalPortico" if door else "ClassicalFrieze";wall.add_child(details)
	renderer._box(details,Vector3(1.70,.065,.21),Vector3(0,1.48,.045),material)
	if door:
		for x:float in [-.53,.53]:
			renderer._box(details,Vector3(.24,.10,.27),Vector3(x,.18,.19),material)
			renderer._cylinder(details,.065,.087,1.08,Vector3(x,.77,.19),material,8)
			renderer._box(details,Vector3(.24,.09,.28),Vector3(x,1.35,.19),material)
		var face:Array[Vector3]=[Vector3(-.76,1.44,.34),Vector3(.76,1.44,.34),Vector3(0,1.72,.34)]
		Wall.apply(renderer._triangles(details,face,stone), Wall.Kind.STONE).name="StonePediment"
		renderer._box(details,Vector3(1.56,.08,.48),Vector3(0,1.44,.14),material)
	else:
		for x:float in [-.58,0.,.58]:
			renderer._box(details,Vector3(.08,.14,.045),Vector3(x,1.37,.17),material)

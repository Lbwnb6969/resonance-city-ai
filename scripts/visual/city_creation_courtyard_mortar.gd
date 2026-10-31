extends RefCounted
## A recessed mineral bed closes neon-green seams, retaining authored tree soil.
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const X:=.22
const Z:=.16
const LIFT:=.004
static func append(state:RefCounted,data:Dictionary,plan:Dictionary,patch:Callable,has_planter:Callable)->void:
	var planters:Array=plan.get("planters",[])
	for tile:Variant in plan.tiles:
		var bounds:Rect2=Frame.rect(tile)
		for z in range(floori(bounds.position.y/Z),ceili(bounds.end.y/Z)):
			for x in range(floori(bounds.position.x/X),ceili(bounds.end.x/X)):
				var cell:=Rect2(Vector2(x*X,z*Z),Vector2(X,Z)).intersection(bounds)
				if cell.size.x<=.002 or cell.size.y<=.002 or has_planter.call(cell,planters,tile):continue
				patch.call(state,data,cell,Color("a49d87"),tile,LIFT)

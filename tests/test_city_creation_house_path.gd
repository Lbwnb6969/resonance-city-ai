extends SceneTree
const Stroke=preload("res://scripts/world/city_creation_house_stroke.gd")
var failures: Array[String]=[]
var checks:=0

func _initialize() -> void:
	var coarse:=Stroke.new()
	coarse.begin({"x":0,"z":0,"level":1,"kind":"room"})
	coarse.append(Vector2(5,3)*1.8)
	var fine:=Stroke.new()
	fine.begin({"x":0,"z":0,"level":1,"kind":"room"})
	for step in range(1,51): fine.append(Vector2(5,3)*1.8*float(step)/50.0)
	_check(coarse.cells==fine.cells,"same geometric line produces identical ordered cells at sparse and dense input rates")
	_check(coarse.cells.size()==9,"large event jump includes every cardinal boundary crossing")
	for index in range(1,coarse.cells.size()):
		var a: Dictionary=coarse.cells[index-1]
		var b: Dictionary=coarse.cells[index]
		_check(absi(a.x-b.x)+absi(a.z-b.z)==1,"stroke stays cardinally connected")
	_check(coarse.cells.all(func(cell:Dictionary)->bool:return cell.level==1 and cell.kind=="room"),"surface layer and kind remain fixed for the entire gesture")
	var count: int=coarse.cells.size()
	coarse.append(Vector2.ZERO)
	_check(coarse.cells.size()==count and not coarse.append(Vector2.ZERO),"backtracking and idle pointer do not repeat touched cells")
	var diagonal:=Stroke.new()
	diagonal.begin({"x":0,"z":0,"level":0,"kind":"terrace"})
	diagonal.append(Vector2(-3,-3)*1.8)
	var expected: Array=[{"x":0,"z":0,"level":0,"kind":"terrace"}]
	for step in range(1,4):
		expected.append({"x":-step,"z":1-step,"level":0,"kind":"terrace"})
		expected.append({"x":-step,"z":-step,"level":0,"kind":"terrace"})
	_check(diagonal.cells==expected,"negative corner crossings consistently use x then z and preserve connectivity")
	var corner_fine:=Stroke.new()
	corner_fine.begin(expected[0])
	for step in range(1,31): corner_fine.append(Vector2(-3,-3)*1.8*float(step)/30.0)
	_check(corner_fine.cells==expected,"exact diagonal event density does not change corner ordering")
	if failures.is_empty(): print("CITY_CREATION_HOUSE_PATH PASS: ",checks," checks; sparse/dense lines, corners, negatives, idle and retrace")
	else:
		for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)

func _check(ok:bool,label:String) -> void:
	checks+=1
	if not ok: failures.append(label)

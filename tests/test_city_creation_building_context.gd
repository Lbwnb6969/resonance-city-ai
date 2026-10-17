extends SceneTree
const Context = preload("res://scripts/visual/city_creation_building_context.gd")
var checks := 0
var failures: Array[String] = []

func _initialize() -> void:
	var a := _house("h1",Vector2.ZERO)
	var b := _house("h2",Vector2(1.8,0))
	var far := _house("h3",Vector2(20,20))
	var rows: Array = [a,b,far]
	var original := rows.duplicate(true)
	var context := Context.new()
	context.prepare(rows)
	_check(rows==original,"prepare does not mutate authored identities or positions")
	_check(context.neighbor(a,a.cells[0],Vector2i.RIGHT).cell_id=="h2c0","exact host boundary is actual adjacency")
	_check(context.joined("h1") and context.joined("h2") and not context.joined("h3"),"roof groups cross hosts, remain local")
	_check(_area(context.roof_patches("h1"))+_area(context.roof_patches("h2"))>7.0,"joined roof covers both actual cells")
	_check(not _fascia_on(context.roof_patches("h1"),0.9),"no internal fascia on shared host boundary")
	var seams_a := _seam(context.roof_patches("h1"),0.9)
	var seams_b := _seam(context.roof_patches("h2"),0.9)
	_check(seams_a==seams_b and not seams_a.is_empty(),"host seam shares exact world vertices and heights")
	var far_signature: Variant = context.signature("h3").duplicate(true)
	var old_signature: Variant = context.signature("h1").duplicate(true)
	b.name = "changed name"
	context.prepare([far,b,a])
	_check(context.stats.regenerated==0 and context.signature("h1")==old_signature,"rename/order preserve local topology and cached roof")
	b.origin[0] = 2.1
	context.prepare(rows)
	_check(context.neighbor(a,a.cells[0],Vector2i.RIGHT).is_empty(),"300mm gap remains a real separate wall")
	_check(is_equal_approx(context.neighbor(a,a.cells[0],Vector2i.RIGHT,0,true).gap,0.3),"roof-only neighbor exposes real gap")
	_check(context.joined("h1") and _max_x(context.roof_patches("h1"))>1.04,"roof bridges half gap without moving house")
	_check(context.signature("h3")==far_signature,"local edit does not invalidate remote house")
	b.origin[1] = 0.1
	context.prepare(rows)
	_check(not context.joined("h1"),"misaligned micro-gap does not invent a roof connection")
	b.origin = [1.8,1.8]
	context.prepare(rows)
	_check(not context.joined("h1"),"diagonal contact does not join roofs")
	b.origin = [1.8,0.0]
	b.cells[0].kind = "terrace"
	context.prepare(rows)
	_check(not context.joined("h1") and _max_x(context.roof_patches("h1"))<=0.90001,"terrace remains uncovered, no projecting eave")
	_check(context.roof_patches("h2").is_empty(),"terrace never receives a room roof")
	b.cells[0].kind = "room"
	b.cells.append({"id":"h2c1","x":0,"z":0,"level":1,"kind":"room"})
	context.prepare(rows)
	_check(_max_x(context.roof_patches("h1"))<=0.90001,"low roof terminates at taller neighbor wall")
	for patch: Dictionary in context.roof_patches("h2"):
		_check(patch.cell_id=="h2c1","only actual top room is covered")
	# Three-sided courtyard has a real open center; bounding-box roofs fail this.
	var u := _house("u",Vector2.ZERO)
	u.cells.clear()
	for p: Vector2i in [Vector2i(-1,-1),Vector2i(0,-1),Vector2i(1,-1),Vector2i(-1,0),Vector2i(1,0),Vector2i(-1,1),Vector2i(1,1)]:
		u.cells.append({"id":"u_%d_%d"%[p.x,p.y],"x":p.x,"z":p.y,"level":0,"kind":"room"})
	context.prepare([u])
	var roof_rects: Array = []
	for patch: Dictionary in context.roof_patches("u"):
		if patch.surface=="roof": roof_rects.append(patch.bounds)
	for i in range(roof_rects.size()):
		for j in range(i+1,roof_rects.size()):
			var overlap: Rect2 = roof_rects[i].intersection(roof_rects[j])
			_check(overlap.size.x<=0.000001 or overlap.size.y<=0.000001,"concave/diagonal eaves have unique ownership without overlapping roof triangles")
	for patch: Dictionary in context.roof_patches("u"):
		if patch.surface=="fascia":
			var fascia_a: Vector3 = patch.vertices[0]
			var fascia_b: Vector3 = patch.vertices[1]
			var fascia_c: Vector3 = patch.vertices[2]
			_check((fascia_b-fascia_a).cross(fascia_c-fascia_a).dot(Vector3(patch.side.x,0,patch.side.y))>0,"eave fascia faces actual union exterior")
			continue
		var vertices: Array = patch.vertices
		for i in range(0,vertices.size(),3):
			var p: Vector3 = (vertices[i]+vertices[i+1]+vertices[i+2])/3.0
			_check(not (absf(p.x)<0.7 and p.z> -0.7),"U-courtyard center remains open")
			_check((vertices[i+1]-vertices[i]).cross(vertices[i+2]-vertices[i]).y>0,"roof triangles face upward")
	var before_worker: Variant = context.roof_patches("u").duplicate(true)
	var fork := Context.new()
	fork.copy_cache_from(context)
	var worker := Thread.new()
	worker.start(fork.prepare.bind([u].duplicate(true)))
	worker.wait_to_finish()
	_check(fork.roof_patches("u")==before_worker and context.roof_patches("u")==before_worker,"independent worker computes identical immutable CPU payload")
	_check(fork.stats.regenerated==0,"worker reuses immutable published roof cache")
	u.cells.pop_back()
	fork.prepare([u])
	_check(context.roof_patches("u")==before_worker,"changed worker group does not mutate published cache records")
	print("BUILDING_CONTEXT_RESULT ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"stats":context.stats}))
	quit(0 if failures.is_empty() else 1)

func _house(id: String,p: Vector2) -> Dictionary:
	return {"id":id,"origin":[p.x,p.y],"cells":[{"id":id+"c0","x":0,"z":0,"level":0,"kind":"room"}]}

func _check(ok: bool,message: String) -> void:
	checks += 1
	if not ok: failures.append(message)

func _area(patches: Array) -> float:
	var area := 0.0
	for patch: Dictionary in patches:
		if patch.surface!="roof": continue
		for i in range(0,patch.vertices.size(),3):
			var a: Vector3 = patch.vertices[i]
			var b: Vector3 = patch.vertices[i+1]
			var c: Vector3 = patch.vertices[i+2]
			area += absf((b-a).cross(c-a).y)*0.5
	return area

func _seam(patches: Array,x: float) -> Array:
	var unique: Dictionary = {}
	for patch: Dictionary in patches:
		if patch.surface!="roof": continue
		for p: Vector3 in patch.vertices:
			if absf(p.x-x)<0.00001: unique[p] = true
	var values: Array = unique.keys()
	values.sort_custom(func(a,b): return a.z<b.z)
	return values

func _fascia_on(patches: Array,x: float) -> bool:
	for patch: Dictionary in patches:
		if patch.surface!="fascia": continue
		var all_on := true
		for p: Vector3 in patch.vertices: all_on = all_on and absf(p.x-x)<0.00001
		if all_on: return true
	return false

func _max_x(patches: Array) -> float:
	var maximum := -INF
	for patch: Dictionary in patches:
		for p: Vector3 in patch.vertices: maximum = maxf(maximum,p.x)
	return maximum

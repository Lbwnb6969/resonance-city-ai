extends SceneTree
const Context = preload("res://scripts/visual/city_creation_building_context.gd")
var checks := 0
var failures: Array[String] = []

func _initialize() -> void:
	for count in [2,3,5,6]:
		for along_x in [true,false]:
			var house := _row("row",count,along_x,Vector2(0.137,-0.263))
			var original := house.duplicate(true)
			var context := Context.new()
			context.prepare([house])
			var patches := context.roof_patches("row")
			var caps := _surface(patches,"gable")
			_check(caps.size()==2,"%d-cell rotated row has exactly two gables"%count)
			_check(house==original,"row generation preserves authored cells")
			_check(_surface(patches,"roof").size()==count,"roof keeps one owner patch per cell")
			var roof_points: Dictionary = {}
			for roof: Dictionary in _surface(patches,"roof"):
				_check(roof.roof_kind=="gable","row roof reports architectural kind")
				var ridge_found := false
				for p: Vector3 in roof.vertices:
					roof_points[p] = true
					if is_equal_approx(p.z if along_x else p.x,-0.263 if along_x else 0.137): ridge_found = true
				_check(ridge_found,"every cell includes the exact authored ridge line")
			for cap: Dictionary in caps:
				_check(not cap.vertices.is_empty(),"gable has real geometry")
				_check(cap.height>0.45 and cap.height<0.6,"row height follows short span, independent of length")
				_check(is_equal_approx(cap.profile,0.62),"gable retains verified profile scalar")
				var outward := true
				var on_wall := true
				var matching_top := true
				for index in range(0,cap.vertices.size(),3):
					var a: Vector3 = cap.vertices[index]
					var b: Vector3 = cap.vertices[index+1]
					var c: Vector3 = cap.vertices[index+2]
					outward = outward and (b-a).cross(c-a).dot(Vector3(cap.side.x,0,cap.side.y))>0
				for p: Vector3 in cap.vertices:
					on_wall = on_wall and absf((Vector2(p.x,p.z)-cap.center).dot(Vector2(cap.side)))<0.000001
					if p.y>float(cap.base_y)+0.000001: matching_top = matching_top and roof_points.has(p)
				_check(outward,"gable triangles face actual exterior")
				_check(on_wall,"cap lies on wall plane, inside eave")
				_check(matching_top,"gable curved top reuses exact roof vertices")
			var published := patches.duplicate(true)
			var fork := Context.new()
			fork.copy_cache_from(context)
			var worker := Thread.new()
			worker.start(fork.prepare.bind([house].duplicate(true)))
			worker.wait_to_finish()
			_check(fork.stats.regenerated==0 and fork.roof_patches("row")==published,"worker reuses identical immutable gable cache")
			house.cells.append({"id":"branch","x":0 if along_x else 1,"z":1 if along_x else 0,"level":0,"kind":"room"})
			fork.prepare([house])
			_check(context.roof_patches("row")==published,"worker topology edit preserves published payload")
			_check(_surface(fork.roof_patches("row"),"gable").is_empty(),"a branch restores union topology")
	_test_hosts_and_blockers()
	_test_complex_shapes()
	print("ROW_GABLES_RESULT ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)

func _test_hosts_and_blockers() -> void:
	var a := _row("a",1,true,Vector2.ZERO)
	var b := _row("b",1,true,Vector2(2.1,0))
	var context := Context.new()
	context.prepare([a,b])
	var caps: Array = _surface(context.roof_patches("a"),"gable")+_surface(context.roof_patches("b"),"gable")
	_check(caps.size()==2 and caps[0].house_id!=caps[1].house_id,"micro-gap row crosses hosts with caps assigned to actual end owners")
	_check(context.neighbor(a,a.cells[0],Vector2i.RIGHT).is_empty(),"micro-gap keeps separate real walls")
	var seam_a := _seam(context.roof_patches("a"),1.05)
	var seam_b := _seam(context.roof_patches("b"),1.05)
	_check(seam_a==seam_b and not seam_a.is_empty(),"micro-gap midpoint has matching complete roof vertices")
	var before := context.roof_patches("a").duplicate(true)
	context.prepare([b,a])
	_check(context.stats.regenerated==0 and context.roof_patches("a")==before,"host ordering does not alter gable cache")
	var row := _row("low",2,true,Vector2.ZERO)
	var high := _row("high",1,true,Vector2(3.6,0))
	high.cells.append({"id":"upper","x":0,"z":0,"level":1,"kind":"room"})
	context.prepare([row,high])
	caps = _surface(context.roof_patches("low"),"gable")
	_check(caps.size()==1 and caps[0].side==Vector2i.LEFT,"actual taller room suppresses hidden end gable")
	var terrace := _row("terrace",1,true,Vector2(3.6,0))
	terrace.cells[0].kind="terrace"
	context.prepare([row,terrace])
	_check(context.roof_patches("terrace").is_empty(),"neighbor terrace remains uncovered")
	_check(_surface(context.roof_patches("low"),"gable").size()==2,"terrace leaves exposed room gable visible")

func _test_complex_shapes() -> void:
	var Legacy: Script = load("res://备份/长屋山墙前_20261015/city_creation_building_context.gd")
	for coords: Array in [[Vector2i.ZERO,Vector2i.RIGHT,Vector2i.DOWN],[Vector2i(-1,-1),Vector2i(0,-1),Vector2i(1,-1),Vector2i(-1,0),Vector2i(1,0),Vector2i(-1,1),Vector2i(1,1)]]:
		var house := _row("complex",1,true,Vector2.ZERO)
		house.cells.clear()
		for p: Vector2i in coords: house.cells.append({"id":"c%d"%house.cells.size(),"x":p.x,"z":p.y,"level":0,"kind":"room"})
		var context := Context.new()
		var legacy: RefCounted = Legacy.new()
		context.prepare([house])
		legacy.prepare([house])
		_check(_surface(context.roof_patches("complex"),"gable").is_empty(),"L and U retain union roof classification")
		var actual := context.roof_patches("complex").duplicate(true)
		for patch: Dictionary in actual: patch.erase("roof_kind")
		_check(actual==legacy.roof_patches("complex"),"L/U complete CPU payload matches backed-up implementation exactly")
	var courtyard := _row("court",1,true,Vector2(0.137,-0.263))
	courtyard.cells.clear()
	for x in range(-1,2):
		for z in range(-1,2):
			if x!=0 or z!=0: courtyard.cells.append({"id":"court%d"%courtyard.cells.size(),"x":x,"z":z,"level":0,"kind":"room"})
	var stepped := _row("step",3,true,Vector2.ZERO)
	stepped.cells[1].kind="terrace"
	stepped.cells.append({"id":"upper","x":2,"z":0,"level":1,"kind":"room"})
	for house: Dictionary in [courtyard,stepped]:
		var context := Context.new()
		var legacy: RefCounted = Legacy.new()
		context.prepare([house])
		legacy.prepare([house])
		var actual := context.roof_patches(str(house.id)).duplicate(true)
		for patch: Dictionary in actual: patch.erase("roof_kind")
		_check(actual==legacy.roof_patches(str(house.id)),"courtyard/stepped terrace complete CPU payload remains identical")

func _row(id: String,count: int,along_x: bool,origin: Vector2) -> Dictionary:
	var cells: Array = []
	for i in range(count): cells.append({"id":id+"c%d"%i,"x":i if along_x else 0,"z":0 if along_x else i,"level":0,"kind":"room"})
	return {"id":id,"origin":[origin.x,origin.y],"cells":cells}

func _surface(patches: Array,name: String) -> Array:
	return patches.filter(func(patch): return patch.surface==name)

func _seam(patches: Array,x: float) -> Array:
	var points: Dictionary = {}
	for patch: Dictionary in _surface(patches,"roof"):
		for p: Vector3 in patch.vertices:
			if absf(p.x-x)<0.000001: points[p]=true
	var values: Array = points.keys()
	values.sort_custom(func(a,b): return a.z<b.z)
	return values

func _check(ok: bool,message: String) -> void:
	checks+=1
	if not ok: failures.append(message)

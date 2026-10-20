extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Changes=preload("res://scripts/world/city_creation_change_set.gd")
class NoContact extends RefCounted:
	func contact_plan(_renderer,_house)->Dictionary:return {"cells":{}}
class MasonryProbe extends RefCounted:
	var materials:Dictionary={}
	var highland:=NoContact.new()
	var scales:Array[Vector3]=[]
	func _append_road_box(_batches,size:Vector3,_at,_material,_rotation=Vector3.ZERO)->void:scales.append(size)
	func _box(_parent,_size,_at,_material)->void:pass
	func _material(_tone)->StandardMaterial3D:return StandardMaterial3D.new()
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func feet(town,house:Dictionary)->Array:
	var result:Array=[]
	for cell:Dictionary in house.cells:
		if int(cell.level)==0:result.append(town.Highland.footing(town,house,cell))
	return result
func inspect(town,house:Dictionary,plan:Dictionary)->void:
	var count:=0;var gap:=0.;var alpha:=Vector2(1,0);var finite:=true;var upward:=true;var roads_clear:=true;var seam_clear:=true;var width_ok:=true
	for id:String in plan.cells:
		var cell:Dictionary={}
		for candidate:Dictionary in house.cells:
			if str(candidate.id)==id:cell=candidate
		var center:Vector3=town._cell_position(house,cell)
		var arrays:Array=plan.cells[id];var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX];count+=vertices.size()
		for i in range(0,vertices.size(),3):
			var a:Vector3=vertices[i]+center;var b:Vector3=vertices[i+1]+center;var c:Vector3=vertices[i+2]+center
			upward=upward and (b-a).cross(c-a).y>0.
			for point:Vector3 in [a,b,c,(a+b+c)/3.]:
				var at:=Vector2(point.x,point.z)
				finite=finite and point.is_finite()
				gap=maxf(gap,absf(point.y-town.state.ground_height(at)-.012))
				var d:Vector2=(at-Vector2(center.x,center.z)).abs()-Vector2.ONE*.9
				width_ok=width_ok and maxf(d.x,d.y)>=.0349 and maxf(d.x,d.y)<=.1751
				# Both h7 ground rooms share an interior x=-14.1 seam.
				if absf(at.y)<.899 and absf(at.x+14.1)<.02:seam_clear=false
				for road:Dictionary in town.state.roads:
					for j in range(1,road.points.size()):
						var from:=Vector2(road.points[j-1][0],road.points[j-1][1]);var to:=Vector2(road.points[j][0],road.points[j][1])
						if at.distance_to(Geometry2D.get_closest_point_to_segment(at,from,to))<float(road.width)*.5-.001:
							if roads_clear:print("CONTACT_ROAD_OVERLAP ",JSON.stringify({"at":str(at),"road":road,"distance":at.distance_to(Geometry2D.get_closest_point_to_segment(at,from,to))}))
							roads_clear=false
		for color:Color in arrays[Mesh.ARRAY_COLOR]:alpha.x=minf(alpha.x,color.a);alpha.y=maxf(alpha.y,color.a)
	check(count>0,"actual highland rooms produce gravel contact geometry")
	check(finite and upward,"every generated contact triangle has finite vertices and upward winding")
	check(gap<.00002,"all vertices and triangle interiors sit exactly twelve millimetres above the actual terrain triangles")
	check(alpha.x<.001 and alpha.y>.999 and width_ok,"fourteen-centimetre band retains full inner and zero outer vertex alpha")
	check(roads_clear and seam_clear,"contact bands avoid roads (%s) and shared room seam (%s)"%[roads_clear,seam_clear])
func run()->void:
	var city:=State.new();assert(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/高地河湾样例.json"))).ok)
	var positive:=true
	for bottom:float in [-.605,-.612,-.6120001,-.6119999,-.852,-1.092]:
		var probe:=MasonryProbe.new();var parent:=Node3D.new()
		Renderer.Highland.build_plinth(probe,parent,{"base_y":2.},{"id":"probe","x":0,"z":0},bottom,[Rect2(-.9,-.9,1.8,1.8)])
		for scale:Vector3 in probe.scales:positive=positive and scale.x>0. and scale.y>0. and scale.z>0.
		parent.free()
	check(positive,"last masonry course remains positive across thin and exactly twelve-millimetre remainders")
	var before:=var_to_bytes(city.snapshot());var town:=Renderer.new();root.add_child(town);town.setup(city)
	var house:Dictionary=town._house_record("h7");var plan:Dictionary=town.highland.contact_plan(town,house);var original:=feet(town,house)
	inspect(town,house,plan)
	var burial_ok:=true
	for cell:Dictionary in house.cells:
		if int(cell.level)!=0:continue
		var center:Vector3=town._cell_position(house,cell);var natural:=center.y-.04
		for x:float in [-.92,0.,.92]:
			for z:float in [-.92,0.,.92]:natural=minf(natural,city.raw_terrain_height(Vector2(center.x+x,center.z+z))-.15)
		burial_ok=burial_ok and is_equal_approx(town.Highland.footing(town,house,cell),natural-center.y-.22)
	check(burial_ok,"existing exposed highland masonry extends twenty-two centimetres further below natural ground")
	check(var_to_bytes(city.snapshot())==before,"contact derivation and production rendering leave authored city unchanged")
	check(town.highland.contact_plan(town,town._house_record("h1")).cells.is_empty(),"legacy sea-level house keeps its original foundation geometry")
	var fingerprint:int=town._house_geometry_fingerprint(house)
	var points:Array[Vector2]=[Vector2(-16,-1)]
	check(city.add_terrain_stroke(points,"raise",1.,.25).ok,"real local terrain brush edits the contact slope")
	house=town._house_record("h7");var changed:Dictionary=town.highland.contact_plan(town,house)
	check(feet(town,house)==original and changed.signature!=plan.signature,"contact slope changes while both support minima stay exactly unchanged")
	check(town._house_geometry_fingerprint(house)!=fingerprint,"actual house fingerprint invalidates the changed skirt despite unchanged footings")
	var worker:Node3D=town.budget_rebuild._context(town,Changes.snapshot(city))
	var thread:=Thread.new();thread.start(func()->Dictionary:return worker.highland.contact_plan(worker,worker._house_record("h7")))
	var threaded:Dictionary=thread.wait_to_finish()
	check(threaded==changed and not is_same(worker.highland,town.highland),"detached actual worker prepares identical contact buffers with its own cache")
	town.budget_rebuild._dispose_context(worker)
	check(city.undo().ok,"normal edit undo restores the original authored slope")
	house=town._house_record("h7")
	check(town.highland.contact_plan(town,house)==plan and town._house_geometry_fingerprint(house)==fingerprint,"undo restores byte-equal contact arrays and original house geometry fingerprint")
	check(city.redo().ok and town.highland.contact_plan(town,town._house_record("h7"))==changed,"redo restores the same edited contact geometry")
	var road:Array[Vector2]=[Vector2(-18,0),Vector2(-11.5,0)]
	check(city.add_road(road).ok,"actual elevated street crosses both raised rooms")
	house=town._house_record("h7");var passages:Array=city.house_passages("h7")
	check(passages.size()==2,"both actual structural piers have derived walk-through arches")
	var arch_plan:Dictionary=town.highland.contact_plan(town,house);var passage_clear:=true
	for cell:Dictionary in house.cells:
		if not arch_plan.cells.has(str(cell.id)):continue
		var arrays:Array=arch_plan.cells[str(cell.id)]
		for point:Vector3 in arrays[Mesh.ARRAY_VERTEX]:
			for passage:Dictionary in passages:
				if str(passage.cell_id)==str(cell.id) and absf(point.z-float(passage.offset))<float(passage.half_width)-.0001:passage_clear=false
	check(not arch_plan.cells.is_empty() and passage_clear,"gravel never crosses the full arch opening, including the margin beyond road paving")
	town.queue_free();await process_frame
	print("HIGHLAND_CONTACT ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

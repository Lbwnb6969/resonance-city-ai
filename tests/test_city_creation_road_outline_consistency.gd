extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Junctions=preload("res://scripts/world/city_creation_junctions.gd")
var checks:=0
var failures:Array[String]=[]
var maximum_gap:=0.
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func gap(a:Array,b:Array)->float:
	var maximum:=0.
	for polygon:PackedVector2Array in a:
		for point:Vector2 in polygon:
			var distance:=INF
			for target:PackedVector2Array in b:
				for i in range(target.size()):distance=minf(distance,point.distance_to(Geometry2D.get_closest_point_to_segment(point,target[i],target[(i+1)%target.size()])))
			maximum=maxf(maximum,distance)
	return maximum
static func curve()->Array[Vector2]:
	# Measured sub-millimetre pointer reversal, expressed as a public stroke.
	return [Vector2(-14.59042072,2.54450941),Vector2(-14.63324928,2.40960312),Vector2(-14.71557426,2.22737670),Vector2(-14.77189636,2.10065460),Vector2(-14.82130718,1.93599808),Vector2(-14.82095242,1.93533540),Vector2(-14.82028866,1.93568802),Vector2(-14.76131153,2.12662029),Vector2(-14.76110077,2.12763214),Vector2(-14.76331329,2.32738018),Vector2(-14.76715851,2.44964504),Vector2(-14.74589825,2.64847398)]
func run()->void:
	var raw:=curve();var saved:=raw.duplicate();var reverse:=raw.duplicate();reverse.reverse()
	var clean:=Junctions.geometry_points(raw)
	check(clean.size()<raw.size() and clean.size()>3,"sub-2mm reversal is removed without flattening the real bend")
	check(Junctions.geometry_points(reverse)==clean and raw==saved,"derived cleaning is direction-independent and never edits the authored control array")
	var town:=Renderer.new();root.add_child(town)
	for style:String in ["path","promenade","avenue","tram"]:
		var city:=State.new();city.initialize_empty()
		check(city.add_road(raw,style,"none").ok,"public curved road placement: "+style)
		var authored:Dictionary=city.snapshot()
		if town.buildings==null:town.setup(city,true)
		else:town.state=city
		var junctions:=city.road_junctions();var road:Dictionary=city.roads[0]
		var core:Array=junctions._geometry(road).core
		var rendered:Array=town._stroke_contours(town._road_geometry(road).samples,float(road.width)*.5)
		var error:=maxf(gap(core,rendered),gap(rendered,core));maximum_gap=maxf(maximum_gap,error)
		check(core.size()==rendered.size() and error<.00002,"clipping and displayed sweep share the complete boundary: "+style)
		check(city.snapshot()==authored,"outline preparation preserves exact saved road data: "+style)
		var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(authored,"",true,true))).ok and copy.roads==city.roads,"original tiny authored spans remain compatible in strict JSON: "+style)
	var loop:Array[Vector2]=[Vector2(-25,-16),Vector2(-17,-16),Vector2(-17,-8),Vector2(-25,-8),Vector2(-25,-16)]
	var city:=State.new();city.initialize_empty();check(city.add_road(loop,"path","none").ok,"public closed road keeps its central grass island")
	town.state=city;var road:Dictionary=city.roads[0];var core:Array=city.road_junctions()._geometry(road).core
	var rendered:Array=town._stroke_contours(town._road_geometry(road).samples,float(road.width)*.5)
	check(core.size()==2 and rendered.size()==2 and maxf(gap(core,rendered),gap(rendered,core))<.00002,"shared outline retains both real closed-loop boundaries")
	city=State.new();city.initialize_empty()
	check(city.add_road([Vector2(-29,-17),Vector2(-25,-21),Vector2(-21,-17)] as Array[Vector2],"path","none").ok and city.add_road([Vector2(-29,-20.4),Vector2(-21,-20.4)] as Array[Vector2],"path","none").ok,"actual sharp reversal joins a crossing street")
	var round_tip:=true;var corner:=Vector2(-25,-21)
	for offset:float in [-.35,-.18,0.,.18,.35]:
		var point:=corner+Vector2.from_angle(-PI*.5+offset)*.655
		round_tip=round_tip and not city.road_at(point).is_empty()
	check(round_tip,"expanded cusp covers its rounded arc beyond the original 0.625m core instead of ending as a hard wedge")
	town.free()
	print("ROAD_OUTLINE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"maximum_gap_m":maximum_gap}));quit(0 if failures.is_empty() else 1)

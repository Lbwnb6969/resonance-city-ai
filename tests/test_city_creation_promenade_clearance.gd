extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
const Promenade=preload("res://scripts/visual/city_creation_promenade.gd")
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _doors(city:RefCounted)->Dictionary:
	var rows:Dictionary={}
	for house:Dictionary in city.houses:rows[str(house.id)]=city.house_entrances(str(house.id))
	return rows
func _reference(city:RefCounted,road:Dictionary,at:Vector2,radius:float,doors:Dictionary)->bool:
	# Original exhaustive clearance equations, with independently captured
	# actual State doors. No spatial bins or production index are consulted.
	if not city.WORLD_RECT.grow(-radius).has_point(at) or city.water_clearance(at)<radius+.45:return false
	for other:Dictionary in city.roads:
		if other.id==road.id:continue
		for i in range(other.points.size()-1):
			var a:=Vector2(other.points[i][0],other.points[i][1]);var b:=Vector2(other.points[i+1][0],other.points[i+1][1])
			if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<float(other.width)*.5+radius+.7:return false
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var center:=Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			var delta:Vector2=(at-center).abs()-Vector2.ONE*.9
			if delta.max(Vector2.ZERO).length()<radius+.12:return false
		for door:Dictionary in doors[str(house.id)]:
			if at.distance_to(door.at)<radius+1.15:return false
	for plant:Dictionary in city.plants:
		if str(plant.kind) in ["olive","cypress"] and at.distance_to(Vector2(plant.position[0],plant.position[1]))<radius+.55:return false
	return true
func _compare(city:RefCounted,decorator:RefCounted)->bool:
	var doors:=_doors(city);var points:Array[Vector2]=[]
	for x in range(-40,41,5):
		for z in range(-40,41,5):points.append(Vector2(x+.13,z-.21))
	for id:String in doors:
		for door:Dictionary in doors[id]:
			for gap:float in [1.34999,1.35001]:points.append(Vector2(door.at)+Vector2.RIGHT*gap)
	for radius:float in [.16,.2,.45,.65]:
		for point:Vector2 in points:
			if decorator._clear(city,city.roads[0],point,radius)!=_reference(city,city.roads[0],point,radius,doors):
				push_error("clearance differs at %s radius %s"%[point,radius]);return false
	for reach:float in [.2,1.08,2.4]:
		for point:Vector2 in points:
			var expected:=true
			for entries:Array in doors.values():
				for entry:Dictionary in entries:
					if point.distance_to(entry.clearance_at)<reach:expected=false
			if decorator.doors_clear(city,point,reach)!=expected:
				push_error("door clearance differs at %s reach %s"%[point,reach]);return false
	return true
func _run()->void:
	var city:=Fixture.build(300,true);var decorator:=Promenade.new();var began:=Time.get_ticks_usec()
	_check(_compare(city,decorator),"three hundred real houses: binned lamp/gateway clearance exactly matches original exhaustive doors, footprints, roads, plants and water")
	var original:Dictionary=city.snapshot();var points:Array[Vector2]=[Vector2(-25,29),Vector2(-25,35)]
	_check(city.add_road(points).ok,"actual new road invalidates obstacle snapshot")
	_check(_compare(city,decorator),"new road revision rebuilds all obstacle dependencies")
	_check(city.undo().ok and city.houses==original.houses,"actual undo preserves original houses")
	_check(_compare(city,decorator),"undo rebuilds the original exact clearance")
	var other:=State.new();other.initialize();other.revision=city.revision
	_check(_compare(other,decorator),"same revision on another city never reuses a previous owner's obstacles")
	print("PROMENADE_CLEARANCE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_ms":float(Time.get_ticks_usec()-began)/1000.}));quit(0 if failures.is_empty() else 1)

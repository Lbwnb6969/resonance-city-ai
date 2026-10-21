extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/地图打开优化_2026-10-22"
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();city.Biomes.create(city,"misty_archipelago")
	var before:Dictionary=city.snapshot();var error:=0.;var sampled:=0
	for z in range(-104,105):
		for x in range(-104,105):
			var at:=Vector2(float(x)*.5+.137,float(z)*.5-.081)
			var original:float=city._water_clearance_in(at,city.waters)
			error=maxf(error,absf(original-city.water_clearance(at)));sampled+=1
	check(error<.000001,"all 43681 grid samples equal the unchanged analytic capsule union, including outside the map")
	check(city.snapshot()==before and city._water_distance.builds==1,"dense query shares compiled strokes without authored writes")
	for row:Dictionary in city.waters:
		for point:Array in row.points:
			var at:=Vector2(point[0],point[1])
			for offset:Vector2 in [Vector2.ZERO,Vector2(.00001,0),Vector2(-.00001,0),Vector2(0,float(row.width)*.5)]:
				error=maxf(error,absf(city._water_clearance_in(at+offset,city.waters)-city.water_clearance(at+offset)))
	check(error<.000001,"loop closures, endpoints, capsule interiors and exact radius boundaries stay identical")
	var rng:=RandomNumberGenerator.new();rng.seed=83217
	for i in range(50):
		var points:Array=[]
		var count:=1+i%7
		for j in range(count):points.append([rng.randf_range(-50,50),rng.randf_range(-50,50)])
		if i%3==0:points.append(points[0].duplicate())
		city.waters=[{"id":"w1","width":rng.randf_range(.1,12.),"kind":"channel","points":points}]
		for j in range(70):
			var at:=Vector2(rng.randf_range(-60,60),rng.randf_range(-60,60))
			error=maxf(error,absf(city._water_clearance_in(at,city.waters)-city.water_clearance(at)))
	check(error<.000001,"singleton, degenerate, looped and random long capsules preserve exact signed distances")
	var builds:int=city._water_distance.builds
	city.waters[0].points[0][0]+=3.
	var at:=Vector2(-18,12)
	check(absf(city.water_clearance(at)-city._water_clearance_in(at,city.waters))<.000001 and city._water_distance.builds==builds+1,"in-place mutation without revision invalidates native-value signature")
	check(city.restore(before).ok and absf(city.water_clearance(at)-city._water_clearance_in(at,city.waters))<.000001,"restore clears stale query data by content")
	city.initialize();check(is_equal_approx(city.water_clearance(at),absf(at.x-city.river_x(at.y))-city.RIVER_HALF_WIDTH),"opening a water-free legacy city returns exact original river")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var report:Dictionary={"checks":checks,"failures":failures,"samples":sampled,"max_error":error,"ok":failures.is_empty()}
	FileAccess.open(OUT+"/distance.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WATER_DISTANCE ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

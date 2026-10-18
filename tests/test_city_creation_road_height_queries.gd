extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
const Roads=preload("res://scripts/world/city_creation_road_heights.gd")
var checks:=0
var failures: Array[String]=[]
var samples: Array=[]
func _initialize()->void:_run.call_deferred()
func check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func original_bins(profiles: Dictionary)->Dictionary:
	var bins: Dictionary={}
	for profile: Dictionary in profiles.values():
		for i in range(profile.samples.size()-1):
			var a: Vector2=profile.samples[i].xz;var b: Vector2=profile.samples[i+1].xz;var radius: float=profile.width*.5+.05
			var bounds:=Rect2(a,Vector2.ZERO).expand(b).grow(radius)
			var row: Dictionary={"road":profile.id,"index":i,"a":a,"b":b,"radius":radius}
			for z in range(floori(bounds.position.y/2.),floori(bounds.end.y/2.)+1):
				for x in range(floori(bounds.position.x/2.),floori(bounds.end.x/2.)+1):
					var key:=Vector2i(x,z)
					if not bins.has(key):bins[key]=[]
					bins[key].append(row)
	return bins
func original_height(at: Vector2,bins: Dictionary,profiles: Dictionary)->float:
	var nearest:=INF;var best: Dictionary={};var closest:=Vector2.ZERO
	for row: Dictionary in bins.get(Vector2i(floori(at.x/2.),floori(at.y/2.)),[]):
		var point:=Geometry2D.get_closest_point_to_segment(at,row.a,row.b);var gap:=at.distance_squared_to(point)
		if gap>float(row.radius)*float(row.radius) or gap>=nearest:continue
		nearest=gap;best=row;closest=point
	if best.is_empty():return -999.
	var selected: Dictionary=profiles[best.road];var a: Dictionary=selected.samples[int(best.index)];var b: Dictionary=selected.samples[int(best.index)+1]
	var delta: Vector2=best.b-best.a;var ratio:=clampf((closest-Vector2(best.a)).dot(delta)/delta.length_squared(),0.,1.)
	var arc:=lerpf(float(a.distance),float(b.distance),ratio)
	for stepping: Dictionary in selected.stepping_runs:
		if arc>=float(stepping.start)-.00001 and arc<=float(stepping.end)+.00001:return Roads.SteppingPlan.crossing_height(stepping,arc)
	for tread: Dictionary in selected.treads:
		if arc>=float(tread.s0)-.000001 and arc<=float(tread.s1)+.000001:return float(tread.y)
	return lerpf(float(a.y),float(b.y),ratio)
func _run()->void:
	for name: String in ["四库共鸣交响大城样例","汀步河湾样例","高地河湾样例","300屋"]:
		var city:=State.new()
		if name=="300屋":city=Fixture.build(300,true)
		else:check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/"+name+".json"))).ok,"restore "+name)
		city.prepare_ground_height()
		var heights: RefCounted=city._road_heights;var original:=original_bins(heights.profiles);var queries: Array[Vector2]=[]
		for profile: Dictionary in heights.profiles.values():
			for i in range(profile.samples.size()):
				var at: Vector2=profile.samples[i].xz
				queries.append_array([at,at+Vector2(.000001,-.000001),at+Vector2(.14,.07)])
				if i+1<profile.samples.size():queries.append(at.lerp(Vector2(profile.samples[i+1].xz),.43))
		queries.append_array([Vector2(-40,-40),Vector2(40,40),Vector2.ZERO])
		var max_gap:=0.;var mismatches: Array=[]
		for at: Vector2 in queries:
			var actual: float=heights.height_at(at,-999.);var expected:=original_height(at,original,heights.profiles)
			max_gap=maxf(max_gap,absf(actual-expected))
			if absf(actual-expected)>.000001 and mismatches.size()<5:mismatches.append([at,actual,expected])
		check(mismatches.is_empty(),"original endpoint/tread/bridge/stepping/intersection height parity: "+name+str(mismatches))
		var began:=Time.get_ticks_usec()
		for at: Vector2 in queries:original_height(at,original,heights.profiles)
		var old_us:=Time.get_ticks_usec()-began;began=Time.get_ticks_usec()
		for at: Vector2 in queries:heights.height_at(at,-999.)
		var new_us:=Time.get_ticks_usec()-began
		var old_records:=0;var new_records:=0
		for rows: Array in original.values():old_records+=rows.size()
		for rows: Array in heights._bins.values():new_records+=rows.size()
		check(new_records==old_records,"original candidate index retained for "+name)
		samples.append({"name":name,"queries":queries.size(),"max_gap":max_gap,"original_us":old_us,"current_us":new_us,"old_records":old_records,"new_records":new_records,"flat_bins":heights._flat_bins.size()})
	print("ROAD_HEIGHT_QUERIES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"samples":samples,"failures":failures}));quit(0 if failures.is_empty() else 1)

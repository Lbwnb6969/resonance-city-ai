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
		# Query both sides of the new half-metre boundaries, and the edge of
		# each road capsule. A fine index must keep all original tie candidates.
		for key:Vector2i in heights._query_bins:
			var low:=Vector2(key)*.5
			queries.append_array([low,low+Vector2(.000001,-.000001),low+Vector2(-.000001,.000001),low+Vector2(.25,.25)])
		for profile:Dictionary in heights.profiles.values():
			for i in range(profile.samples.size()-1):
				var a:Vector2=profile.samples[i].xz;var b:Vector2=profile.samples[i+1].xz;var side:Vector2=(b-a).orthogonal().normalized()
				for extra:float in [-.000001,0.,.000001]:queries.append(a.lerp(b,.5)+side*(float(profile.width)*.5+.05+extra))
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
		var previous_us:=0
		for argument:String in OS.get_cmdline_user_args():
			if not argument.begins_with("--baseline-height="):continue
			var previous:RefCounted=load(argument.trim_prefix("--baseline-height=")).new();previous.copy_cache_from(heights)
			var same:=true
			for at:Vector2 in queries:same=same and absf(previous.height_at(at,-999.)-heights.height_at(at,-999.))<=.000001
			check(same,"previous published solver agrees at every sampled boundary: "+name)
			began=Time.get_ticks_usec()
			for at:Vector2 in queries:previous.height_at(at,-999.)
			previous_us=Time.get_ticks_usec()-began
		var old_records:=0;var new_records:=0
		for rows: Array in original.values():old_records+=rows.size()
		for rows: Array in heights._bins.values():new_records+=rows.size()
		check(new_records==old_records,"original candidate index retained for "+name)
		var fine_records:=0
		for rows:Array in heights._query_bins.values():fine_records+=rows.size()
		samples.append({"name":name,"queries":queries.size(),"max_gap":max_gap,"original_us":old_us,"previous_us":previous_us,"current_us":new_us,"old_records":old_records,"new_records":new_records,"flat_bins":heights._flat_bins.size(),"query_bins":heights._query_bins.size(),"constant_bins":heights._constant_bins.size(),"fine_records":fine_records,"prepare_stats":heights.stats.duplicate()})
		var frozen:=Roads.new();frozen.copy_cache_from(heights)
		var old:PackedFloat64Array=[]
		for at:Vector2 in queries:old.append(frozen.height_at(at,-999.))
		var road:Dictionary=city.remove_road(str(city.roads[0].id))
		check(road.ok,"real road removal for fine index invalidation: "+name);city.prepare_ground_height()
		var same:=true
		for i in range(queries.size()):same=same and frozen.height_at(queries[i],-999.)==old[i]
		check(same,"published fine index remains immutable while a new road index is prepared: "+name)
		check(city.undo().ok,"actual road edit undoes: "+name);city.prepare_ground_height()
		heights=city._road_heights
		var restored:=true;var undo_mismatch:Array=[]
		for i in range(queries.size()):
			var value:float=heights.height_at(queries[i],-999.)
			if absf(value-old[i])>.000001:
				restored=false
				if undo_mismatch.size()<3:undo_mismatch.append([queries[i],old[i],value])
		check(restored,"undo restores all original fine-cell boundary heights: "+name+str(undo_mismatch))
	print("ROAD_HEIGHT_QUERIES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"samples":samples,"failures":failures}));quit(0 if failures.is_empty() else 1)

extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_bridge_banks_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Interval=preload("res://scripts/visual/city_creation_bridge_bank_interval.gd")
const Mixed=preload("res://tests/test_city_creation_bridge_grades.gd")
var checks:=0
var failures:Array=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func interval_edges()->void:
	var run:={"start":0.,"end":1.,"samples":[{"distance":-1.,"xz":Vector2(-1,0)},{"distance":4.,"xz":Vector2(4,0)}]}
	var profile:={"bridge_runs":[run]}
	check(Interval.clip(profile,{"distance":.2,"bridge":true},{"distance":.4,"bridge":true}).is_empty(),"open stone arch never receives retaining masonry")
	var clipped:=Interval.clip(profile,{"distance":-.2,"bridge":false},{"distance":0.,"bridge":true})
	check(absf(clipped.high-.4)<.00001 and clipped.high_normal==Vector2.UP,"incoming support terminates at actual dry pier face and keeps the road side normal")
	profile.bridge_runs.append({"start":1.9,"end":3.,"family":"modern_single_arch"})
	check(Interval.clip(profile,{"distance":2.,"bridge":true},{"distance":2.2,"bridge":true}).is_empty(),"nearby stone bank cannot allow masonry across another modern bridge")
	profile.bridge_runs[1].family="clockwork_truss"
	check(Interval.clip(profile,{"distance":2.,"bridge":true},{"distance":2.2,"bridge":true}).is_empty(),"nearby stone bank cannot allow masonry across a truss")
	check(Interval.clip({"bridge_runs":[]},{"distance":2.,"bridge":true},{"distance":2.2,"bridge":false}).is_empty(),"ordinary timber wet transition remains unchanged")
	var dry:=Interval.clip({"bridge_runs":[]},{"distance":2.,"bridge":false},{"distance":2.2,"bridge":false})
	check(dry.low==0. and dry.high==1. and not dry.bank,"ordinary dry interval retains its exact full endpoints and water guard")
func mixed_bridges()->void:
	for era:String in ["clockwork","modern_eco"]:
		var city:RefCounted=Mixed.fixture(3.5,false,era);var town:=Renderer.new();town.state=city;town.record_only=true
		var road:Dictionary=city.roads[0];var profile:Dictionary=city.road_profile(road)
		var data:Dictionary=Renderer.RoadEarthworks.prepare(town,road,profile);var clear:=true;var wet:=0
		for run:Dictionary in profile.bridge_runs:
			if not run.has("family"):continue
			for section:Dictionary in data.sections:
				for t:float in [0.,.5,1.]:
					var at:Vector2=Vector2(section.a).lerp(section.b,t)
					var arc:float=at.y-float(profile.samples[0].xz.y)
					if arc>run.start and arc<run.end:wet+=1;clear=false
		check(clear and wet==0,"real adjacent "+era+" wet bridge stays free of stone-bank retaining walls")
		Renderer.BudgetRebuild.new()._dispose_context(town)
func run()->void:
	interval_edges()
	mixed_bridges()
	for kind:String in ["straight","slope","diagonal","curve","bank_bend"]:
		var city:RefCounted=Fixture.build(kind);var original:Dictionary=city.snapshot()
		var town:=Renderer.new();root.add_child(town);town.setup(city)
		var road:Dictionary=city.roads[0];var profile:Dictionary=city.road_profile(road);var data:Dictionary=town._prepare_road_data(road)
		var result:=Fixture.measure(profile,data.earthworks.sections);result.kind=kind;facts.append(result)
		check(result.contacts.size()==4,"real double arch has four bank contacts "+kind)
		if "--verify-banks" in OS.get_cmdline_user_args():check(result.max_gap_m<.0001 and result.max_vertical_gap_m<.0001,"actual retaining walls meet all four bridge abutments in three dimensions "+kind)
		if kind in ["straight","diagonal"]:
			await physics_frame;await process_frame
			var point:Dictionary=Fixture.Plan._point(profile.bridge_runs[0].samples,float(profile.bridge_runs[0].start)-.17)
			var normal:Vector2=Vector2(point.tangent).orthogonal();var y:float=city.street_height(point.at)-.25
			var a:Vector2=point.at+normal*(float(road.width)*.5+.6);var b:Vector2=point.at+normal*(float(road.width)*.5-.1)
			var query:=PhysicsRayQueryParameters3D.create(Vector3(a.x,y,a.y),Vector3(b.x,y,b.y),2)
			var hit:Dictionary=town.get_world_3d().direct_space_state.intersect_ray(query)
			check(not hit.is_empty() and hit.collider.name=="EarthworksGroundPick" and hit.collider.get_meta("ground",false) and hit.collider.get_meta("road_id","")=="r1","actual physics ray picks the newly connected bank wall with the original road identity "+kind)
		var buried:=true
		for section:Dictionary in data.earthworks.sections:
			buried=buried and section.bottom_a<=city.ground_height(section.a)-.1199 and section.bottom_b<=city.ground_height(section.b)-.1199
		check(buried,"all prepared wall ends remain buried in the actual terrain "+kind)
		var outer_buried:=true
		for i in range(data.earthworks.sections.size()):
			var section:Dictionary=data.earthworks.sections[i]
			for p:Vector3 in data.earthworks.faces.slice(i*30,(i+1)*30):
				if not is_equal_approx(p.y,section.bottom_a) and not is_equal_approx(p.y,section.bottom_b):continue
				var at:=Vector2(p.x,p.z)
				if city.water_clearance(at)<.15:outer_buried=outer_buried and p.y<=city.ground_height(at)-.1199
		check(outer_buried,"actual inner and outer wet bank corners remain buried "+kind)
		var side_clear:=true
		for section:Dictionary in data.earthworks.sections:
			for t:float in [0.,.25,.5,.75,1.]:
				var at:Vector2=Vector2(section.a).lerp(section.b,t);var nearest:=INF
				for j in range(profile.samples.size()-1):
					nearest=minf(nearest,Geometry2D.get_closest_point_to_segment(at,profile.samples[j].xz,profile.samples[j+1].xz).distance_to(at))
				side_clear=side_clear and nearest>=float(road.width)*.5-.001
		check(side_clear,"every retaining section stays on its own side outside the actual walkway "+kind)
		var protected:Vector2=profile.samples[5].xz
		check(not Renderer.RoadEarthworks._clear(town,protected,protected,"r2",[],[],true),"bridge-bank exception still rejects another real road "+kind)
		check(not Renderer.RoadEarthworks._clear(town,protected,protected,"r1",[Rect2(protected-Vector2.ONE,Vector2.ONE*2.)],[],true),"bridge-bank exception still rejects occupied footprints "+kind)
		check(not Renderer.RoadEarthworks._clear(town,protected,protected,"r1",[],[[protected-Vector2.RIGHT,protected+Vector2.RIGHT]],true),"bridge-bank exception still protects actual entry corridors "+kind)
		check(city.snapshot()==original,"bridge-bank derivation preserves all authored data "+kind)
		town.queue_free();await process_frame
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--report="):FileAccess.open(arg.trim_prefix("--report="),FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("BRIDGE_BANKS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

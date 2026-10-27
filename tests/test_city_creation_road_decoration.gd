extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Decor=preload("res://scripts/world/city_creation_road_decoration.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var points:Array[Vector2]=[Vector2(-30,-20),Vector2(-25,-19),Vector2(-18,-20)]
	for style:String in ["path","brick","gravel"]:
		for decor:String in Decor.IDS:
			var city:=State.new();city.initialize_empty()
			check(city.add_road(points,style,"none",0.,decor).ok,"independent surface and furniture "+str([style,decor]))
			var original:Dictionary=city.snapshot();var road:Dictionary=city.roads[0].duplicate(true);var count:int=city._undo.size()
			check(city.preview_road(points,style,"none",0.,decor).no_op,"same explicit selection is a no-op")
			var result:Dictionary=city.add_road(points,style,"none",0.,"none" if decor!="none" else "lamps")
			check(result.ok and city._undo.size()==count+1 and city.roads[0].id==road.id and city.roads[0].points==road.points and city.roads[0].width==road.width and city.roads[0].get("style","path")==style,"furniture-only retrace preserves material/width/identity and one transaction")
			check(city.undo().ok and city.roads==original.roads and city.redo().ok,"furniture Undo/Redo")
			var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok and cold.roads==city.roads,"furniture cold JSON exact")
			var snapshot:Dictionary=city.snapshot();var invalid:Dictionary=snapshot.duplicate(true);invalid.roads[0].decoration="bad"
			check(not cold.restore(invalid).ok and cold.snapshot()==snapshot,"invalid decoration rejects atomically")
			invalid=snapshot.duplicate(true);invalid.schema=18;check(not cold.restore(invalid).ok,"new decoration requires Schema19")
	var city:=State.new();city.initialize_empty();city.add_road(points,"brick","none",0.,"benches")
	check(city.add_road(points,"fanstone","none",4.8).ok and city.roads[0].decoration=="benches","old API upgrade retains existing explicit furniture")
	check(city.add_road(points,"fanstone","none",4.8,"legacy").ok and not city.roads[0].has("decoration"),"explicit original option restores old default furniture")
	var original:Dictionary=city.snapshot();check(not city.add_road(points,"brick","none",0.,"bad").ok and city.snapshot()==original,"invalid public brush leaves world untouched")
	var legacy:=State.new();legacy.initialize_empty();legacy.add_road(points,"path","none")
	check(legacy.add_road(points,"path","none").style=="promenade","old API retrace upgrade remains unchanged")
	var wide:=State.new();wide.initialize_empty();wide.add_road(points,"brick","none",4.8,"lamps")
	var wide_road:Dictionary=wide.roads[0].duplicate(true)
	wide.add_road(points,"brick","none",0.,"benches")
	check(wide.roads[0].width==4.8 and wide.roads[0].get("sized",false) and wide.roads[0].points==wide_road.points,"original-width brush preserves authored broad road during furniture-only replacement")
	var renderer:=Renderer.new();root.add_child(renderer)
	for choice:String in ["none","lamps","flowers","trees","benches"]:
		var sample:=State.new();sample.initialize_empty();sample.add_road(points,"gravel","none",1.25,choice);renderer.state=sample
		var records:Array=renderer.promenade.prepare(renderer,sample.roads[0])
		var expected:String={"none":"","lamps":"lamp","flowers":"flower","trees":"tree","benches":"bench"}[choice]
		check(records.is_empty() if choice=="none" else not records.is_empty() and records.all(func(row):return row.kind==expected),"production compiler emits selected furniture only "+choice)
		for row:Dictionary in records:check(renderer.promenade._clear(sample,sample.roads[0],row.at,.65 if choice=="benches" else .2),"production furniture avoids roads doors water "+choice)
	var hairpin:=State.new();hairpin.initialize_empty()
	var turn:Array[Vector2]=[Vector2(-30,-20),Vector2(-20,-20),Vector2(-20,-17),Vector2(-30,-17)]
	hairpin.add_road(turn,"gravel","none",1.25,"benches");renderer.state=hairpin
	for row:Dictionary in renderer.promenade.prepare(renderer,hairpin.roads[0]):
		for x:float in [-.28,.28]:
			for z:float in [-.55,.55]:
				# The 3D yaw basis maps local X/Z to this same ground plane.
				var at:Vector2=row.at+Vector2(cos(row.yaw)*x+sin(row.yaw)*z,-sin(row.yaw)*x+cos(row.yaw)*z)
				for i in range(turn.size()-1):check(at.distance_to(Geometry2D.get_closest_point_to_segment(at,turn[i],turn[i+1]))>=.625,"hairpin bench footprint remains outside its own curved paving")
	var bridge:=State.new();bridge.initialize_empty();var pond:Array[Vector2]=[Vector2(-25,20)];bridge.add_water(pond,6.,"pond")
	var line:Array[Vector2]=[Vector2(-35,20),Vector2(-15,20)];bridge.add_road(line,"brick","none",4.8,"lamps")
	var profile:Dictionary=bridge.road_profile(bridge.roads[0]).duplicate(true)
	bridge.add_road(line,"brick","none",4.8,"none")
	check(profile.bridge_runs.size()>0 and bridge.road_profile(bridge.roads[0]).signature==profile.signature,"independent decoration preserves real bridge geometry and walking height")
	renderer.shore.free();renderer.lilypads.free();renderer.wildlife.free();renderer.free()
	print("ROAD_DECORATION ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

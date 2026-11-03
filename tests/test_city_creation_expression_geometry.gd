extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
const Geometry=preload("res://scripts/audio/city_creation_expression_geometry.gd")
const Affinity=preload("res://scripts/audio/city_creation_music_affinity.gd")
const Envelope=preload("res://scripts/audio/city_creation_affinity_envelope.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func sample(city:RefCounted,g:RefCounted)->Dictionary:
	g.refresh(city);var a:=Affinity.new();a.refresh(city)
	return g.sample(a.sample(Fixture.ORIGIN,18.).weights)
func run()->void:
	var began:=Time.get_ticks_msec();var city:=Fixture.State.new();city.initialize_free();var g:=Geometry.new()
	check(city.add_house(Fixture.ORIGIN).ok,"unconnected inland house")
	var baseline:=sample(city,g);check(baseline.flow==0. and baseline.craft==0.,"ordinary inland dwelling has no fabricated colors")
	var points:Array[Vector2]=[Fixture.ORIGIN+Vector2(-4,3),Fixture.ORIGIN+Vector2(0,4),Fixture.ORIGIN+Vector2(4,3)]
	check(city.add_road(points,"path","none").ok,"real inland curved road")
	var flow:=sample(city,g);check(flow.flow>.55 and flow.flow_sources.has(city.roads[0].id),"inland curve exceeds entry threshold with road identity")
	var before:Dictionary=city.snapshot();var n:int=g.rebuilds
	for i in range(10):sample(city,g)
	check(g.rebuilds==n and city.snapshot()==before,"sampling preserves author data and reuses geometry")
	check(city.remove_road(city.roads[0].id).ok,"remove source road")
	check(sample(city,g).flow==0.,"deleted road withdraws current flow")
	check(city.undo().ok and sample(city,g).flow>.55,"Undo restores real source")
	var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,"cold restore")
	var other:=Geometry.new();sample(cold,other);check(other.records==g.records,"independent cold geometry matches")
	check(city.add_water([Fixture.ORIGIN+Vector2(0,-2.5)] as Array[Vector2],2.,"pond").ok,"actual near water")
	flow=sample(city,g);check(flow.flow>.55 and flow.flow_sources.has(city.waters[0].id),"near water geometry contributes stable identity")
	for f:Dictionary in Fixture.other_kinds():
		if f.kind!="artisan":continue
		var artisan:RefCounted=f.city
		check(artisan.remove_road(artisan.roads[0].id).ok,"artisan forecourt disconnected from road")
		var craft:=sample(artisan,g)
		check(craft.craft>=.55 and not craft.craft_sources.is_empty(),"actual artisan forecourt colors without business or road eligibility")
		var cache_before:int=g.rebuilds
		var placed:Dictionary=artisan.PlacedLandmarks.place(artisan,"courtyard",Fixture.ORIGIN+Vector2(3.1,3.8));print("LANDMARK_PROBE ",placed);check(placed.ok,"place actual front obstacle")
		var blocked:=sample(artisan,g);var blocked_cold:=Geometry.new();sample(artisan,blocked_cold)
		check(g.rebuilds==cache_before+1 and g.records==blocked_cold.records,"placed landmark invalidates geometry with matching cold facts")
		check(blocked.craft==0.,"landmark obstruction withdraws artisan front geometry")
		check(artisan.undo().ok and sample(artisan,g).craft>=.55,"Undo landmark restores actual front geometry")
		check(artisan.remove_house("h1").ok and sample(artisan,g).craft==0.,"removed artisan source withdraws craft")
	var e:=Envelope.new();var facts:={"city":1,"enclosure":.7225,"source_ids":["road"]};var packet:Dictionary={}
	for i in range(100):packet=e.step(facts,i*.1,.1,false)
	check(packet.value==0.,"continuous editing cannot start a color")
	for i in range(59):packet=e.step(facts,10.+i*.1,.1)
	check(packet.value==0.,"observation starts afresh after editing")
	for i in range(110):packet=e.step(facts,16.+i*.1,.1)
	check(packet.value>.65,"stable curve slowly colors after observation")
	facts.source_ids=[];facts.enclosure=0.
	for i in range(65):packet=e.step(facts,27.+i*.1,.1)
	check(packet.value==0.,"missing source tail expires within six seconds")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	var out:="res://验证记录/M84/expression_geometry_20261103/cpu";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("EXPRESSION_GEOMETRY ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

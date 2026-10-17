extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_era_street_fixture.gd")
const Field=preload("res://scripts/visual/city_creation_era_road_field.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city
	var half:=Field.weights(city,Vector2(22,15))
	_check(absf(half.y-.5)<.001 and absf(half.z-.5)<.001 and half.x==0.,"adjacent renaissance and clockwork zones blend evenly without an invented pastoral stripe")
	_check(Field.weights(city,Vector2(21,15)).y==1. and Field.weights(city,Vector2(23,15)).z==1. and Field.weights(city,Vector2(29,15)).z==1. and Field.weights(city,Vector2(31,15)).w==1.,"era transition uses the actual two-metre signed boundary interval")
	var before:Dictionary=city.snapshot();var field:=Field.new();field.prepare(city)
	_check(field.images.size()==100 and field.changed_layers.size()==100 and city.snapshot()==before,"pure padded tile preparation covers whole canvas without changing authored state")
	var seam:=true
	for layer in range(99):
		if layer%10==9:continue
		for z in range(18):
			seam=seam and field.images[layer].get_pixel(16,z)==field.images[layer+1].get_pixel(0,z) and field.images[layer].get_pixel(17,z)==field.images[layer+1].get_pixel(1,z)
	_check(seam,"neighboring array layers share identical padded texels for seamless bilinear sampling")
	var previous:Dictionary={}
	for i in range(100):previous[i]=field.images[i].get_data()
	var zone:String=fixture.zones[-1];city.set_district_era(zone,"renaissance");field.prepare(city)
	var same:=true
	for i in range(100):
		if i not in field.changed_layers:same=same and field.images[i].get_data()==previous[i]
	_check(field.changed_layers.size()>0 and field.changed_layers.size()<20 and same,"local era edit prepares and changes only neighboring padded layers while other CPU bytes remain exact")
	city.undo();field.prepare(city)
	var exact:=true
	for i in range(100):exact=exact and field.images[i].get_data()==previous[i]
	_check(exact,"actual construction undo restores byte-identical road-era field")
	var renderer:=Renderer.new();renderer.state=city;renderer.record_only=true
	var street:Dictionary=city.roads.filter(func(row:Dictionary)->bool:return row.id==fixture.street.road_id)[0]
	var plan:Dictionary=renderer.era_streets.prepare(renderer,street)
	_check(plan.gateways.size()==3 and plan.notes.size()>=2 and plan.water.size()>0,"real four-era street receives three boundary gateways modern note lights and dry-side water bands")
	var safe:=true
	for row:Dictionary in plan.notes:safe=safe and city.district_at(row.at).get("era_theme","")=="modern_eco" and city.water_clearance(row.at)>1.
	for row:Dictionary in plan.gateways:safe=safe and row.kind=="arch" and row.width==2.
	_check(safe,"modern decorations stay in actual modern dry street and arches clear full two-metre carriage lane")
	var road:Dictionary=city.roads.filter(func(row:Dictionary)->bool:return row.id==fixture.bridge.road_id)[0];var profile:Dictionary=city.road_profile(road);var bridge:Dictionary=profile.bridge_runs[0]
	var data:Dictionary=renderer.Bridges.prepare(profile)
	_check(bridge.family=="modern_single_arch" and bridge.arch_count==1 and data.modern.size()==1 and data.runs.is_empty() and data.modern[0].glass.size()>0,"modern district compiles one genuine white single arch and glass parapets instead of old two-arch masonry")
	var height:=true
	for sample:Dictionary in profile.samples:
		if sample.distance>=bridge.start and sample.distance<=bridge.end:height=height and absf(city.street_height(sample.xz)-bridge.deck_y)<.001
	_check(height,"modern bridge deck remains authoritative for both street vertices and actual journeys")
	var fresh:=State.new();var saved:Dictionary=city.snapshot()
	_check(fresh.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and fresh.road_profile(road).bridge_runs==profile.bridge_runs,"all new street and bridge appearances derive from existing schema sixteen data on restoration")
	city.set_district_era(fixture.bridge_district,"clockwork")
	_check(city.road_profile(road).bridge_runs[0].family=="clockwork_truss" and city.undo().ok and city.road_profile(road).bridge_runs[0].family=="modern_single_arch","actual neighboring era edit and undo switch industrial and modern bridge grammar coherently")
	print("ERA_STREETS ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"notes":plan.notes.size(),"water":plan.water.size(),"gateways":plan.gateways.size(),"field":field.stats}));renderer.free();quit(0 if failures.is_empty() else 1)

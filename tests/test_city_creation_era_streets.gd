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
	for row:Dictionary in plan.gateways:safe=safe and row.kind=="arch" and is_equal_approx(float(row.width),2.1) and row.width==street.width
	_check(safe,"modern decorations stay in actual modern dry street and arches clear full current 2.10-metre carriage lane")
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
	_gardens(renderer,street,plan,fixture)
	print("ERA_STREETS ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures,"notes":plan.notes.size(),"water":plan.water.size(),"gateways":plan.gateways.size(),"gardens":plan.gardens.size(),"field":field.stats}));Renderer.BudgetRebuild.new()._dispose_context(renderer);quit(0 if failures.is_empty() else 1)

func _gardens(renderer,street:Dictionary,original:Dictionary,fixture:Dictionary)->void:
	var city:RefCounted=renderer.state;var snapshot:Dictionary=city.snapshot()
	_check(original.gardens.size()==6,"three actual era boundaries each receive two trimmed shrubs and warm stone markers")
	var clear:=true;var seated:=true;var opposed:Dictionary={}
	for row:Dictionary in original.gardens:
		if not opposed.has(row.arc):opposed[row.arc]=[]
		opposed[row.arc].append(row.side)
		for at:Vector2 in [row.shrub,row.stone]:
			clear=clear and city.water_clearance(at)>.7
			for i in range(1,street.points.size()):
				var a:=Vector2(street.points[i-1][0],street.points[i-1][1]);var b:=Vector2(street.points[i][0],street.points[i][1])
				clear=clear and at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))>float(street.width)*.5+.25
		seated=seated and row.shrub_y<=city.ground_height(row.shrub) and row.stone_y<city.ground_height(row.stone)
	for sides:Array in opposed.values():clear=clear and sides==[-1.,1.]
	_check(clear and seated,"paired boundary accents sit on dry ground on opposite sides of the full-width lane")
	var radius_ok:=true
	for row:Dictionary in original.gardens:
		var mesh:Mesh=renderer.foliage.parts("shrub",int(row.variant)).canopy
		var arrays:Array=mesh.surface_get_arrays(0);var colors:PackedColorArray=arrays[Mesh.ARRAY_COLOR];var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
		for i in range(vertices.size()):
			var p:Vector3=vertices[i]*renderer.era_streets.SHRUB_SCALE;var weight:float=colors[i].a*colors[i].a
			var wind:=Vector2(1.35*.047*weight,.033*weight).length()
			radius_ok=radius_ok and Vector2(p.x,p.z).length()+wind<=renderer.era_streets.SHRUB_RADIUS
	_check(radius_ok,"actual trimmed canopy vertices plus maximum shader wind fit their reserved clearance")
	_check(city.snapshot()==snapshot,"boundary preparation and shared foliage lookup leave all authored plants and work data unchanged")
	var target:Vector2=original.gardens[2].shrub;var brush:Array[Vector2]=[target]
	var plants:Dictionary=city.add_vegetation_stroke(brush,"shrub",.8)
	_check(plants.ok,"player really plants a shrub cluster in an existing boundary garden")
	var authored:=var_to_bytes(city.plants);var moved:Dictionary=renderer.era_streets.prepare(renderer,street);var safe:=true
	for row:Dictionary in moved.gardens:
		for plant:Dictionary in city.plants:
			if plant.kind!="shrub":continue
			var at:=Vector2(plant.position[0],plant.position[1]);var reach:float=.65*float(plant.scale)
			safe=safe and row.shrub.distance_to(at)>=renderer.era_streets.SHRUB_RADIUS+reach+.039 and row.stone.distance_to(at)>=renderer.era_streets.STONE_RADIUS+reach+.039
	_check(safe and moved.gardens!=original.gardens and authored==var_to_bytes(city.plants),"derived accents move or withdraw while preserving the player's planted cluster and clearance")
	_check(city.undo().ok and renderer.era_streets.prepare(renderer,street).gardens==original.gardens,"ordinary planting undo restores the exact original boundary garden records")
	brush=[original.gardens[0].shrub]
	_check(city.add_terrain_stroke(brush,"raise",1.5,.4).ok,"actual terrain sculpt changes the roadside garden slope")
	var sculpted:Dictionary=renderer.era_streets.prepare(renderer,street)
	_check(sculpted.gardens!=original.gardens,"local terrain edit reseats or withdraws the affected garden instead of reusing stale heights")
	_check(city.undo().ok and renderer.era_streets.prepare(renderer,street).gardens==original.gardens,"terrain undo restores identical planted accents and support heights")
	var clone:=State.new();_check(clone.restore(city.snapshot()).ok,"detached city snapshot restores for real threaded preparation")
	var worker:=Renderer.new();worker.state=clone;worker.record_only=true
	var thread:=Thread.new();thread.start(func()->Dictionary:return worker.era_streets.prepare(worker,street))
	var threaded:Dictionary=thread.wait_to_finish()
	_check(threaded==renderer.era_streets.prepare(renderer,street) and worker.foliage._parts.is_empty() and worker.materials.is_empty(),"real worker thread derives identical records without creating foliage meshes or render materials")
	Renderer.BudgetRebuild.new()._dispose_context(worker)
	_check(clone.remove_district(fixture.bridge_district).ok,"remove actual bridge-era zone for a narrow crossing fixture")
	brush=[fixture.bridge_center];var zone:Dictionary=clone.add_district(brush,3.6,"deep")
	_check(zone.ok and clone.set_district_era(zone.district_id,"modern_eco").ok,"narrow era boundary lies inside the actual bridge span")
	renderer.state=clone
	var bridge:Dictionary=clone.roads.filter(func(r:Dictionary)->bool:return r.id==fixture.bridge.road_id)[0]
	var bridge_plan:Dictionary=renderer.era_streets.prepare(renderer,bridge);var bridge_lamps:=0
	for row:Dictionary in bridge_plan.gateways:
		if row.kind=="bridge_lamps":bridge_lamps+=1
	_check(bridge_lamps==2 and bridge_plan.gardens.is_empty(),"both era changes on a real bridge retain lamps and add no ground shrubs or stones")
	for id:String in fixture.zones:_check(clone.remove_district(id).ok,"remove actual street era zone "+id)
	clone.revision=city.revision
	var foreign:Dictionary=renderer.era_streets.prepare(renderer,street)
	_check(foreign.gateways.is_empty() and foreign.gardens.is_empty(),"same numeric revision in another city cannot reuse the first city's boundary accents")
	renderer.state=city
	_check(renderer.era_streets.prepare(renderer,street).gardens==original.gardens,"switching back to the original city restores its own complete boundary records")

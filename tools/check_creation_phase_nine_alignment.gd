extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Fixture=preload("res://tests/test_city_creation_clockwork.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/总站三十米_2026-10-18"
var checks: Array=[]
var failures: Array[String]=[]
var demo
var facts: Dictionary={}

func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _street(city: RefCounted,length: float,style: String)->Dictionary:
	var points: Array[Vector2]=[Vector2(8,18),Vector2(8+length,18)]
	var result: Dictionary=city.add_road(points,style)
	city.Signatures.refresh(city)
	return result
func _city()->RefCounted:
	var city: RefCounted=Fixture.fixture()
	for road: Dictionary in city.roads.duplicate(true):
		if str(road.get("style","path"))=="path":continue
		assert(city.remove_road(str(road.id)).ok)
	return city
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await physics_frame;await process_frame
func _capture(label: String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+label+".png")

func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	for style: String in ["promenade","avenue","tram"]:
		for length: float in [29.9,30.,30.1]:
			var boundary: RefCounted=_city()
			var road:=_street(boundary,length,style)
			print("BOUNDARY ",JSON.stringify({"style":style,"length":length,"road":road,"metres":boundary.Signatures.wide_street_metres(boundary),"eras":boundary.era_unlocks}))
			_check(road.ok and absf(boundary.Signatures.wide_street_metres(boundary)-length)<.001 and boundary.signature_unlocks.has("clockwork_depot")==bool(length>=30.),style+" actual "+str(length)+"m street unlocks only at thirty metres")
	var narrow: RefCounted=_city()
	_check(_street(narrow,30.,"path").ok and not narrow.signature_unlocks.has("clockwork_depot"),"thirty metres of narrow footpath does not earn a depot")
	var early:=State.new();early.initialize()
	_check(_street(early,30.,"tram").ok and not early.signature_unlocks.has("clockwork_depot"),"authored rail alone cannot bypass the third-era milestone")
	var city: RefCounted=_city()
	var road:=_street(city,30.,"tram")
	_check(road.ok and city.era_unlocks.has("clockwork") and city.houses.size()==28,"twenty-eight actual houses and occupied era districts earn third era before the thirty-metre rail")
	var before: Dictionary=city.snapshot()
	var preview: Dictionary=city.preview_signature("clockwork_depot",Vector2(22,14))
	_check(preview.ok and city.snapshot()==before,"unlocked depot footprint preview does not mutate the work")
	var depot: Dictionary=city.place_signature("clockwork_depot",Vector2(22,14))
	print("DEPOT ",JSON.stringify(depot))
	_check(depot.ok and not city.preview_signature("clockwork_depot",Vector2(30,-8)).ok,"earned depot is placed free once with normal house identity")
	if not depot.ok:await _finish(personal);return
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var dispatch: Dictionary=life.tram.report()
	_check(dispatch.cars.size()==1 and dispatch.depot_id==depot.house_id and not dispatch.dispatch_station.is_empty() and is_equal_approx(dispatch.speed,3.36),"thirty-metre rail depot dispatches one real carriage with twenty-percent speed gain")
	var car: Dictionary=life.tram.cars[0]
	_check(car.line.tour[0]==dispatch.dispatch_station and car.node.position.distance_to(life.tram.plan.positions[dispatch.dispatch_station])<.001,"carriage begins at the connected depot station")
	car.wait=0.;var old: Vector3=car.node.position;life.tram.tick(.1)
	_check(absf(car.node.position.distance_to(old)-.336)<.002,"production tram advances 33.6cm in one tenth second")
	var loaded:=State.new();var saved: Dictionary=city.snapshot()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(saved))).ok and loaded.signature_unlocks.has("clockwork_depot") and loaded.signature_bonuses().depot_id==depot.house_id,"thirty-metre earned rights and actual depot survive JSON restoration")
	_street(city,30.,"promenade");life._sync()
	_check(life.tram.cars.is_empty() and life.tram.report().depot_id.is_empty(),"replacing connected rails withdraws the actual depot fleet")
	_check(city.undo().ok,"rail replacement supports construction undo")
	life._sync()
	_check(life.tram.cars.size()==1 and life.tram.report().depot_id==depot.house_id,"undo restores connected depot dispatch")
	city.remove_house(depot.house_id);life._sync()
	_check(life.tram.report().depot_id.is_empty() and is_equal_approx(life.tram.speed(),2.8) and city.signature_unlocks.has("clockwork_depot"),"recycling depot removes dispatch boost and preserves the earned right")
	_check(city.undo().ok,"depot recycling can be undone")
	life.free()
	if "--live" not in OS.get_cmdline_user_args():await _finish(personal);return
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	city.set_house_era("h1","clockwork")
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	_check(demo.state.restore(city.snapshot()).ok,"production scene restores the newly earned depot town")
	demo._after_edit({"ok":true,"message":"thirty-metre depot"},"history");await _wait()
	demo.remove_child(demo.life);demo.life.queue_free();demo._setup_life();demo.life.set_process(false)
	var depot_root: Node3D=demo.town.buildings.get_node(str(depot.house_id))
	_check(depot_root.get_meta("clockwork_depot",{}).get("clock_faces",0)==4 and demo.life.tram.report().depot_id==depot.house_id,"production four-face clock depot owns the connected running fleet")
	demo.focus=Vector3(23,1.7,16);demo.zoom=18;demo.yaw=.4;demo.pitch=.65;demo._update_camera();demo.ui_layer.visible=false;demo.town.clear_preview()
	demo.life.tram.tick(1.5)
	await _capture("01_thirty_metre_depot_dispatch")
	while demo.light_phase!=2:demo._toggle_light()
	_check(demo.life.tram.cars[0].glass.emission_energy_multiplier>.6,"real night switch lights the depot carriage windows")
	await _capture("02_depot_and_warm_night_tram")
	demo.ui_layer.visible=true;demo.signatures.open_panel();await process_frame
	var button: Button=demo.signatures.buttons.clockwork_depot
	var scroll: ScrollContainer=demo.signatures.panel.get_node("LandmarkScroll");scroll.ensure_control_visible(button);await process_frame
	_check(demo.signatures.labels.clockwork_depot.text.contains("30米") and button.disabled and button.text.contains("已在河湾"),"actual landmark catalog presents thirty-metre condition and its placed depot")
	await _capture("03_catalog_thirty_metre_milestone")
	demo.signatures.panel.hide();demo.ui_layer.visible=false;demo.life.set_process(true)
	var frames: Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(180):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.);previous=now
	frames.sort();facts.performance={"frames":180,"p95_ms":frames[170],"max_ms":frames[-1]};facts.dispatch=demo.life.tram.report()
	await _finish(personal)

func _finish(personal: PackedByteArray)->void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated verification preserves personal save bytes")
	var report: Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	var mode: String="live" if "--live" in OS.get_cmdline_user_args() else "cpu"
	FileAccess.open(OUT+"/"+mode+".json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("PHASE_NINE ",JSON.stringify(report))
	if demo!=null:demo.queue_free();await process_frame
	quit(0 if failures.is_empty() else 1)

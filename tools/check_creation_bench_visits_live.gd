extends "res://tools/check_creation_reference_music_live.gd"
const Fixture=preload("res://tests/test_city_creation_bench_visits.gd")
const Seats=preload("res://scripts/world/city_creation_bench_seats.gd")
func point_seat(seat:Dictionary)->void:
	var p:Vector2=demo.camera.unproject_position(Vector3(seat.at.x,seat.y+.6,seat.at.y))
	var e:=InputEventMouseMotion.new();e.device=92;e.position=p;e.global_position=p;root.push_input(e);await process_frame
func camera_state()->Array:
	return [demo.focus,demo.yaw,demo.pitch,demo.zoom,demo.camera.projection,demo.camera.fov,demo.camera_rig.strolling,demo.selected_house]
func capture(label:String)->void:
	demo.toast.hide()
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"native settled image: "+label)
func run()->void:
	OUT="res://验证记录/M82/bench_live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();print("BENCH_STAGE initial");isolate_input();var voices:=pool()
	await show(Fixture.fixture(),Vector2(-27,-18),"道路长椅");quiet();print("BENCH_STAGE published");demo.life.set_process(true)
	demo.zoom=24.;demo.yaw=0.;demo.pitch=.85;demo._update_camera();await settle()
	print("BENCH_STAGE natural_wait");check(DisplayServer.get_name()!="headless","actual OpenGL window")
	check(await wait_for(func():return demo.life.residents.any(func(r):return r.get("bench_visit",{}).get("phase","")=="seated"),40000),"natural production residents walk to and sit on real benches")
	demo.life.set_process(false)
	var occupied:Array=[]
	for r:Dictionary in demo.life.residents:
		if r.has("bench_visit"):occupied.append(r.bench_visit.seat)
	var unique:Dictionary={}
	for id:String in occupied:unique[id]=true
	check(occupied.size()>0 and occupied.size()==unique.size(),"actual residents hold distinct reservations")
	await capture("residents_seated_day")
	var seats:=Seats.plans(demo.state);var vacant:=""
	for id:String in seats:
		if not Seats.occupied(demo.life,id):vacant=id;break
	check(not vacant.is_empty(),"there is a genuine vacant model for player sitting")
	if not vacant.is_empty():
		for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
			root.size=size;demo.focus=Vector3(seats[vacant].at.x,.4,seats[vacant].at.y);demo.zoom=12.;demo._update_camera();await settle()
			var prior:=camera_state();await point_seat(seats[vacant]);await key(KEY_B)
			check(demo.camera_rig.bench_view.seat_id==vacant and Seats.occupied(demo.life,vacant),"native B reserves published bench "+str(size.x))
			check((-demo.camera.global_basis.z).dot(Vector3(seats[vacant].face.x,0,seats[vacant].face.y))>.99,"camera actually faces model seat front")
			await capture("player_seated_"+str(size.x));await key(KEY_ESCAPE)
			check(camera_state()==prior and not Seats.occupied(demo.life,vacant),"native Esc precisely restores camera and releases seat "+str(size.x))
		await point_seat(seats[vacant]);await key(KEY_B);await key(KEY_V)
		check(demo.camera_rig.bench_view.seat_id.is_empty() and not demo.camera_rig.strolling,"V exits sitting")
		demo.camera_rig.toggle(demo);var walking:=camera_state();var rig_saved:Dictionary=demo.camera_rig.saved.duplicate(true)
		demo.camera_rig.bench_view.enter(demo,vacant);await key(KEY_ESCAPE)
		check(camera_state()==walking and demo.camera_rig.saved==rig_saved,"sitting during stroll precisely restores stroll and its return view")
		demo.camera_rig.toggle(demo)
		var before:=camera_state();demo.camera_rig.bench_view.enter(demo,vacant)
		var points:Array[Vector2]=[Vector2(-40,-17.8),Vector2(0,-17.8)]
		var result:Dictionary=demo.state.add_road(points,"gravel","none",1.25,"none");demo._after_edit(result,"history");await settle()
		check(result.ok and demo.camera_rig.bench_view.seat_id.is_empty() and camera_state()==before,"removing actual furniture exits player view and restores camera")
		demo.life._process(.1)
		check(demo.life.residents.all(func(r):return not r.has("bench_visit")),"production edit releases all resident reservations")
		demo._after_edit(demo.state.undo(),"history");await settle()
		check(Seats.plans(demo.state)==seats,"Undo reconstructs original seat IDs")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;demo.guide.open_panel();await settle()
		var letters:Node=demo.get_meta("city_letters");await ui_click(letters.get_child(1));await settle()
		check(demo.guide.body.text.contains("城中来信与心愿"),"native manual entry displays existing letters and wishes "+str(size.x))
		check(letters.get_children().all(func(c):return Rect2(Vector2.ZERO,Vector2(size)).encloses(c.get_global_rect())),"all manual letter controls fit viewport "+str(size.x))
		await capture("manual_letters_"+str(size.x));await key(KEY_ESCAPE)
	check(not demo.get_meta("vignette_journey").paper.visible and demo.get_meta("inspiration_draft").postponed,"ordinary city keeps letters and draft in explicit entrances")
	if not vacant.is_empty():
		demo.camera_rig.bench_view.enter(demo,vacant)
		await show(Fixture.fixture(),Vector2(-24,-18),"静坐后冷读");quiet()
		check(demo.camera_rig.bench_view.seat_id.is_empty() and not demo.camera_rig.strolling and demo.focus.x==-24.,"opening another work retires old seat before applying new view")
	await record_recipe("bench_city",8.)
	check(pool()==voices and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"original audio pool and personal save remain unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"natural_reservations":occupied,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("BENCH_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)

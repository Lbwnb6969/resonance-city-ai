extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
const EraFixture=preload("res://tools/fixtures/city_creation_era_ceremony_fixture.gd")
const Vignettes=Fixture.Vignettes
const Span=preload("res://tools/fixtures/city_creation_recording_span.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var OUT="res://验证记录/M11/林间奇遇与时代盛典"
var demo:Node
var tree:SceneTree
var checks:Dictionary={}
var details:Dictionary={}
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await tree.process_frame
	for i in range(10):await tree.process_frame
func click(control:Control)->void:
	var at:=control.get_global_rect().get_center();var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;tree.root.push_input(motion);await tree.process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;tree.root.push_input(event);await tree.process_frame
func show(city:RefCounted,title:String,at:Vector2)->void:
	demo.journal.close_panel();var world:Dictionary={"ok":true,"id":title,"title":title,"world":city.snapshot(),"view":{"focus":[at.x,.7,at.y],"yaw":.34,"pitch":.85,"zoom":28.,"evening":false,"light_phase":0}}
	await demo.gallery._open_chosen(world);await settle();demo.life.set_process(false)
	checks["published_"+title]=demo.state.houses==city.houses
func capture(label:String)->void:
	demo.select_tool(4);demo.town.clear_preview();demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
	tree.root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func postpone()->void:
	var draft:Node=demo.get_meta("inspiration_draft");draft.poll()
	for i in range(3):await tree.process_frame
	if draft.paper.visible:await click(draft.paper.find_child("PostponeDraft",true,false))
func run(owner:Node)->Dictionary:
	if owner.has_meta("validation_out_dir"):OUT=str(owner.get_meta("validation_out_dir"))+"/vignettes"
	demo=owner;tree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var observer:Node=demo.get_meta("vignette_journey");var ceremony:Node=demo.get_meta("era_ceremony")
	var identities:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():identities.append(node.get_instance_id())
	for index in range(0 if "--ceremonies-only" in OS.get_cmdline_user_args() else Vignettes.IDS.size()):
		print("M11_PROBE quest ",Vignettes.IDS[index])
		var kind:String=Vignettes.IDS[index];var city:RefCounted=Fixture.start(kind);var anchor:Array=city.harmony_journey.active_vignette.anchor
		tree.root.size=Vector2i(1440,900) if index%2==0 else Vector2i(1024,768)
		await show(city,kind,Vector2(anchor[0],anchor[1]));observer.poll()
		var initial:Dictionary=demo.state.harmony_journey.active_vignette.duplicate(true);var start:int=observer.completions.size()
		var saved:Dictionary=await demo.gallery._capture("未完林间来信","vignette_mid")
		var read:Dictionary=demo.gallery.library.read(str(saved.get("id",""))) if saved.ok else {}
		var restored:=Fixture.State.new();var restored_ok:bool=saved.ok and read.get("ok",false) and restored.restore(read.world).ok
		checks["unfinished_save_"+kind]=restored_ok and restored.harmony_journey.active_vignette==initial
		var results:Array=Fixture.construct(demo.state);checks["authored_"+kind]=results.all(func(row):return row.ok)
		demo._after_edit(results[-1],"plant" if index==3 else "room");await settle();observer.poll();demo.get_meta("inspiration_draft").poll();await postpone()
		checks["completed_"+kind]=observer.completions.size()==start+1 and int(demo.state.harmony_journey.completed_vignettes.get(kind,0))==1
		var reward:Dictionary=observer.completions[-1] if observer.completions.size()>start else {}
		checks["permanent_"+kind]=not reward.is_empty() and reward.members.all(func(id):return Vignettes.production(demo.state,id)>=1.1) and is_equal_approx(Vignettes.music(demo.state,reward.members),.6)
		if not reward.is_empty() and reward.members.size()>=3:
			var deadline:=Time.get_ticks_msec()+4000
			while Time.get_ticks_msec()<deadline and float(demo.music.emergence.score.get("phrase_tide",{}).get("vignette_db",0.))<.59:await tree.process_frame
			checks["actual_audio_bonus_"+kind]=float(demo.music.emergence.score.get("phrase_tide",{}).get("vignette_db",0.))>=.59
		if not reward.is_empty():details[kind]={"reward":reward,"journey":demo.state.harmony_journey.duplicate(true)}
		demo._set_light_phase(index%3);await capture(kind+"_完成")
		var marker_ok:bool=observer.marker.material_override.shader.code.contains("micro_normal_strength")
		checks["lit_marker_"+kind]=marker_ok
		var total:Dictionary=demo.state.harmony_journey.get("completed_vignettes",{}).duplicate();var xp:int=demo.state.harmony_journey.harmony_xp
		demo._after_edit(demo.state.undo(),"history");await settle();observer.poll();demo._after_edit(demo.state.redo(),"history");await settle();observer.poll()
		checks["no_history_farm_"+kind]=demo.state.harmony_journey.completed_vignettes==total and int(demo.state.harmony_journey.harmony_xp)==xp
		await postpone()
		var serial:int=demo.state.harmony_journey.vignette_serial
		await click(observer.paper.find_child("RefreshVignette",true,false));checks["mouse_refresh_"+kind]=int(demo.state.harmony_journey.vignette_serial)==serial+1
		checks["unobscured_dock_"+kind]=not observer.paper.get_global_rect().intersects(demo.tactile_dock.nature_row.get_global_rect()) if demo.tactile_dock.nature_row.visible else true
		await capture(kind+"_下一页")
		var claim:Dictionary=await demo.gallery._capture("永久街坊回响","vignette_completed");var stored:Dictionary=demo.gallery.library.read(str(claim.get("id",""))) if claim.ok else {}
		checks["completed_save_"+kind]=claim.ok and stored.get("ok",false) and Fixture.State.new().restore(stored.world).ok
		if claim.ok and stored.get("ok",false):
			await demo.gallery._open_chosen(stored);await settle();demo.life.set_process(false);observer.poll()
			checks["reload_no_regrant_"+kind]=demo.state.harmony_journey.completed_vignettes==total and int(demo.state.harmony_journey.harmony_xp)==xp
	for era:String in ["renaissance","clockwork","modern_eco"]:
		print("M11_PROBE era ",era)
		var city:RefCounted=EraFixture.before(era);await show(city,"晋升前_"+era,Vector2(-8,-2));var start:int=ceremony.events.size();var bells:int=ceremony.bell_count
		checks["legacy_quiet_"+era]=ceremony.active.is_empty() and ceremony.pending.is_empty() and era not in demo.state.era_unlocks
		if era=="clockwork":demo._after_edit(demo.state.set_district_era(str(demo.state.districts[-1].id),"renaissance"),"terrace")
		if era=="renaissance":
			# Warm the real bread/walk/tea simulation, then let audio run at its own clock.
			# Advancing Life 20x during reply playback otherwise floods foreground cues.
			for tick in range(2400):
				if int(demo.state.life_progress.tea_parties)>0:break
				demo.life._process(.2)
				if tick%20==0:await tree.process_frame
			checks.renaissance_actual_tea=int(demo.state.life_progress.tea_parties)>0
		var deadline:=Time.get_ticks_msec()+50000
		while Time.get_ticks_msec()<deadline and ceremony.events.size()==start:
			await tree.process_frame
		print("M11_PROBE natural ",era," rights=",demo.state.era_unlocks," tea=",demo.state.life_progress.tea_parties," reply=",demo.music.reply.report())
		checks["earned_ceremony_"+era]=ceremony.events.size()>start and era in demo.state.era_unlocks
		var recording:=Span.start();var captured:=false
		while not ceremony.active.is_empty() and Time.get_ticks_msec()<deadline:
			await tree.process_frame
			if not captured and Time.get_ticks_msec()*.001-ceremony.began>1.8:
				await capture(era+"_盛典");captured=true
		var recorded:Dictionary=Span.finish(recording,OUT+"/"+era+"_钟声仪式.wav");checks["ceremony_audio_"+era]=recorded.ok
		var finished:Array=ceremony.events.slice(start).filter(func(row):return row.phase=="finish" and row.era==era)
		checks["six_seconds_"+era]=finished.size()==1 and float(finished[0].duration)>=6. and float(finished[0].duration)<6.75
		checks["bells_"+era]=ceremony.bell_count>bells
		checks["three_charters_"+era]=demo.journal.panel.visible and demo.journal.score_cards[era].get_node("CharterChoices").get_child_count()==3
		details[era]={"events":ceremony.events.slice(start),"bells":ceremony.bell_count-bells,"audio":recorded,"tea":demo.state.life_progress.tea_parties,"answers":demo.state.era_answers.duplicate(true)}
		await tree.create_timer(.26).timeout
		checks["charter_layout_"+era]=Rect2(Vector2.ZERO,Vector2(tree.root.size)).encloses(demo.journal.paper.get_global_rect())
		checks["charter_dock_clear_"+era]=not demo.journal.scrollbook.get_global_rect().intersects(demo.tactile_dock.bubble_rows.get_global_rect())
		await capture(era+"_三枚章程");demo.journal.close_panel()
	checks.ripple_material=ceremony.ripple.mesh.material_override.shader.code.contains("micro_normal_strength")
	var audio:Dictionary=await Probe.record(OUT+"/奇遇时代实录.wav",3.2);details.audio=audio;checks.unclipped=audio.ok
	var after:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():after.append(node.get_instance_id())
	checks.fixed_pool=after==identities and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2
	var report:={"ok":checks.values().all(func(ok):return ok),"checks":checks,"details":details};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("VIGNETTES_LIVE ",JSON.stringify(report));return report

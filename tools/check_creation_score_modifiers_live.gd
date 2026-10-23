extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const Modern=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
const OUT="res://验证记录/时代乐章铭牌_2026-10-22"
var demo
var checks:=0
var failures:Array[String]=[]
var heard:Array[Dictionary]=[]
var identities:Array[int]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(5):await process_frame
func click(control:Control)->void:
	var at:=control.get_global_rect().get_center()
	var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down
		root.push_input(event);await process_frame
func capture(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name+".png")
func show_city(city:RefCounted,title:String)->void:
	var validated:Dictionary=State.new().restore(city.snapshot())
	check(validated.ok,"gallery candidate validates: "+title+" "+str(validated))
	if not validated.ok:quit(1);return
	var world:Dictionary={"ok":true,"id":title,"title":title,"world":city.snapshot(),"view":{"focus":[-5.,.7,-1.],"yaw":demo.yaw,"pitch":.78,"zoom":24.,"evening":false,"light_phase":0}}
	await demo.gallery._open_chosen(world);await settle();demo.life.set_process(false)
	check(demo.state.houses==city.houses and demo.state.districts==city.districts and demo.state.era_modifiers==city.era_modifiers,"normal gallery actually publishes candidate: "+title+" "+str(demo.gallery.panel.status_label.text))
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);demo.life.set_process(false);await settle()
	for player:AudioStreamPlayer in demo.music._players.values():identities.append(player.get_instance_id())
	if "--reply-only" not in OS.get_cmdline_user_args() and "--harmony-only" not in OS.get_cmdline_user_args():
		var schools:Dictionary=await preload("res://tools/fixtures/city_creation_schools_live.gd").new().run(demo)
		for label:String in schools.checks:check(bool(schools.checks[label]),"schools: "+label)
		if "--schools-only" in OS.get_cmdline_user_args():
			print("SCORE_SCHOOLS ",checks," ",failures);demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
		check(not demo.journal.score_title.visible,"first era introduces no premature choice cards")
		var city:=Modern.earned_city();await show_city(city,"已达成四时代的河湾")
		check(not demo.journal.panel.visible and demo.state.era_modifiers.is_empty(),"loading legacy earned town does not force or invent choices")
		demo._on_era_unlocked("renaissance");await process_frame
		check(demo.journal.panel.visible and demo.journal.score_cards.renaissance.visible,"actual era event opens the journal with two alternatives")
		for size_value:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
			root.size=size_value;await create_timer(.25).timeout
			for i in range(6):await process_frame
			var paper:Rect2=demo.journal.paper.get_global_rect()
			check(Rect2(Vector2.ZERO,Vector2(size_value)).encloses(paper),"journal stays in viewport: "+str(size_value))
			var rect:Rect2=demo.journal.score_buttons.arcade_market.get_global_rect()
			check(rect.size.x>=120. and paper.encloses(rect) and demo.journal.cards.get_parent().get_global_rect().encloses(rect),"two-column charter badges fit at "+str(size_value))
			await capture("铭牌_"+str(size_value.x))
		await click(demo.journal.score_buttons.arcade_market);await settle()
		check(demo.state.era_modifiers==["arcade_market"] and demo.journal.score_buttons.polyphonic_academy.disabled,"mouse chooses exactly one real modifier and seals sibling")
		demo._after_edit(demo.state.undo(),"history",false);await settle()
		check(demo.state.era_modifiers.is_empty() and not demo.journal.score_buttons.polyphonic_academy.disabled,"ordinary undo reopens both authored choices")
		await click(demo.journal.score_buttons.polyphonic_academy);await settle()
		check(demo.state.era_modifiers==["polyphonic_academy"],"mouse can select the other branch after undo")
		demo.journal.close_panel()
		demo._on_era_unlocked("modern_eco")
		for i in range(6):await process_frame
		check(demo.journal.paper.get_global_rect().encloses(demo.journal.score_buttons.lasting_resonance.get_global_rect()),"later era event brings its own alternatives into view")
		await click(demo.journal.score_buttons.lasting_resonance);await settle()
		check(demo.state.era_modifiers==["polyphonic_academy","lasting_resonance"],"mouse selects a later era independently of prior choices")
		await capture("时代4_1024")
		demo.journal.close_panel()
		var saved:Dictionary=await demo.gallery._capture("已选乐章的作品","score_verification")
		check(saved.ok,"normal collection capture preserves modified work")
		if saved.ok:
			var opened:Dictionary=demo.gallery.library.read(str(saved.id))
			check(opened.ok and opened.world.get("era_modifiers",[])==["polyphonic_academy","lasting_resonance"] and State.new().restore(opened.world).ok,"immutable gallery JSON restores exact authored choice")
	if "--reply-only" not in OS.get_cmdline_user_args():
		var harmony:Dictionary=await preload("res://tools/fixtures/city_creation_harmony_live.gd").new().run(demo)
		for label:String in harmony.checks:check(bool(harmony.checks[label]),"harmony: "+label)
		if "--harmony-only" in OS.get_cmdline_user_args():
			print("SCORE_HARMONY ",checks," ",failures);demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1);return
	# The old earned work retains real routes and pair ownership; only the
	# selected charter changes the original reply scheduling interval.
	var reply_city:RefCounted=preload("res://tests/test_city_creation_eras.gd").fixture()
	var west:Dictionary=reply_city.add_district([Vector2(-14,-2)] as Array[Vector2],3.6,"warm")
	var east:Dictionary=reply_city.add_district([Vector2(-10,-2)] as Array[Vector2],3.6,"deep")
	reply_city.set_district_era(str(east.district_id),"renaissance")
	reply_city.link_districts(str(west.district_id),str(east.district_id))
	check(reply_city.choose_era_modifier("polyphonic_academy").ok,"select academy in an existing connected duet work")
	await show_city(reply_city,"复调学院连奏")
	demo.focus=Vector3(-12.,.7,-2.);demo._update_camera()
	var recorder:=AudioEffectRecord.new();AudioServer.add_bus_effect(0,recorder);recorder.set_recording_active(true)
	var end:=Time.get_ticks_msec()+27000
	var last:=""
	while Time.get_ticks_msec()<end:
		await process_frame
		var row:Dictionary=demo.music.reply.report()
		if not row.audible:continue
		var key:=str(row.phase)+"/"+str(row.phrase)
		if key==last:continue
		last=key;heard.append({"phase":row.phase,"phrase":row.phrase,"pair_id":row.pair_id})
		if heard.size()>=6:break
	recorder.set_recording_active(false);var wave:AudioStreamWAV=recorder.get_recording();var peak:=0.
	if wave!=null:
		var pcm:PackedByteArray=wave.data
		for i in range(pcm.size()/2):peak=maxf(peak,absf(float(pcm.decode_s16(i*2))/32768.))
		wave.save_to_wav(OUT+"/复调连续问答.wav")
	for i in range(AudioServer.get_bus_effect_count(0)-1,-1,-1):
		if AudioServer.get_bus_effect(0,i)==recorder:AudioServer.remove_bus_effect(0,i)
	var continuous:=false
	for i in range(2,heard.size()):
		if heard[i].phase=="call" and int(heard[i].phrase)%4==2:continuous=true
	check(continuous and heard.size()>=4,"real audio performs the additional two-bar call cycle")
	check(not demo.state.district_answers.is_empty(),"only an actually completed question and answer records progression")
	check(peak>.001 and peak<1.,"native continuous reply recording is audible and unclipped")
	var stable:bool=demo.music._players.size()==12 and demo.music._effects.size()==4
	for player:AudioStreamPlayer in demo.music._players.values():stable=stable and player.get_instance_id() in identities
	check(stable,"all choices and gallery switches retain fixed twelve long and four short players")
	var report:Dictionary={"checks":checks,"failures":failures,"heard":heard,"peak":peak,"reply":demo.music.reply.report(),"attention":demo.music.attention.report(),"acoustic":demo.music.acoustic.report(),"modifiers":demo.state.era_modifiers,"ok":failures.is_empty()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SCORE_MODIFIERS_LIVE ",JSON.stringify(report))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

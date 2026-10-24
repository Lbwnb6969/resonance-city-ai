extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const Fixture=preload("res://tools/fixtures/city_creation_renaissance_prototypes_fixture.gd")
const Family=preload("res://scripts/world/city_creation_prototype_resonance.gd")
const Audio=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var OUT:="res://验证记录/M37/live"
var demo
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for i in range(10):await process_frame
func shot(name:String)->void:
	demo.toast.hide();demo.toast_time=0.;await process_frame;demo.town.clear_preview();await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"actual GL image "+name)
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center();var motion:=InputEventMouseMotion.new();motion.position=at;root.push_input(motion)
	await create_timer(.25).timeout
	at=button.get_global_rect().get_center();motion=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	check(root.gui_get_hovered_control()==button,"native pointer actually targets prototype button")
	for pressed:bool in [true,false]:
		var e:=InputEventMouseButton.new();e.position=at;e.global_position=at;e.button_index=MOUSE_BUTTON_LEFT;e.pressed=pressed;root.push_input(e);await process_frame
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray()
	var f:=Fixture.build();var city:RefCounted=f.city
	var shop:String=f.groups.venetian_loggia[0];var scenic:String=f.groups.venetian_loggia[1]
	check(city.set_house_architecture(shop,"townhouse").ok and city.set_house_role(shop,"workshop").ok,"actual public chamber workshop")
	var extra:Dictionary=city.add_house(Vector2(-16,-12));check(extra.ok,"actual reachable extra neighbour")
	var bakery:String=f.groups.belvedere_villa[0];var cafe:String=f.groups.belvedere_villa[1]
	check(city.set_house_role(bakery,"bakery").ok and city.set_house_architecture(cafe,"townhouse").ok and city.set_house_role(cafe,"garden_cafe").ok,"actual second street bakery and chamber cafe")
	check(city.add_house(Vector2(-16,0)).ok and city.add_house(Vector2(-5,0)).ok,"real homes and extra neighbour for tea wave")
	check(city.add_road([Vector2(-6,1.7),Vector2(-3,1.7)] as Array[Vector2]).ok,"real street extension reaches the extra tea neighbour")
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);demo.life.set_process(false);await settle()
	var voices:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():voices.append(p.get_instance_id())
	await demo.gallery._open_chosen({"ok":true,"id":"resonance_families","title":"形随音动","world":city.snapshot(),"view":{"focus":[-20.,1.5,-12.],"zoom":18.,"yaw":.55,"pitch":.75,"evening":false,"light_phase":0}});await settle();demo.life.set_process(false)
	check(DisplayServer.get_name()!="headless","actual OpenGL")
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll();await settle()
	var wishes=demo.ui_layer.find_child("CitizenWishPins",true,false)
	var offers:Array=wishes.offers();check(offers.any(func(row):return row.house_id==scenic and row.kind=="scenic"),"real visible connected resident asks to look out")
	var original:Dictionary=demo.state.houses[demo.state._house_index(scenic)].duplicate(true)
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;demo.spatial_popover.open_for_house(scenic);await create_timer(.23).timeout;await settle()
		check(demo.spatial_popover.status.text.contains("廊院回声") and demo.spatial_popover.ring.placement_ok,"actual echo family capsule fits "+str(size.x))
		await shot(str(size.x)+"_echo_family")
	await click(demo.spatial_popover.architecture_button);await settle()
	check(demo.state.houses[demo.state._house_index(scenic)].architecture=="belvedere_villa" and demo.spatial_popover.status.text.contains("登高揽胜"),"native roof choice changes actual family capsule")
	check(not wishes.offers().any(func(row):return row.house_id==scenic and row.kind=="scenic"),"real lookout fulfils scenic wish")
	demo.music.emergence.phrase=-1;demo.music._daily_phrase=-1;demo.music._advance_daily_phrase(floori(demo.music._playback_clock()/3.))
	check(is_equal_approx(float(demo.music.emergence.score.get("prototype_gain",{}).get("wood_weave",0.)),1.2),"actual playing plucked-string stem carries lookout bonus")
	await shot("1024_belvedere_family")
	demo.spatial_popover.close();demo.focus=Vector3(-27,1.2,-12);demo.zoom=18.;demo._update_camera()
	demo.spatial_popover.open_for_house(shop);await create_timer(.23).timeout;await settle()
	check(demo.spatial_popover.status.text.contains("百工雅集"),"actual chamber workshop capsule")
	demo.music.emergence.phrase=-1;demo.music._daily_phrase=-1;demo.music._advance_daily_phrase(floori(demo.music._playback_clock()/3.))
	check(is_equal_approx(float(demo.music.emergence.score.get("prototype_gain",{}).get("renaissance_fugue",0.)),1.5),"actual chamber source carries1.5dB on playing solo")
	await shot("1024_chamber_family");demo.spatial_popover.close()
	var feedback=demo.get_meta("juice_feedback");feedback.clear();feedback.journal.clear()
	var initial:int=demo.state.workshop_status(shop).delivered
	var ticks:=0
	while int(demo.state.workshop_status(shop).delivered)==initial and ticks<2400:
		demo.life._process(.1);ticks+=1
		if ticks%10==0:await process_frame
	await settle()
	check(int(demo.state.workshop_status(shop).delivered)>initial,"actual worker walks, crafts, reserves cargo and completes installation")
	var queued:Array=feedback.journal.filter(func(row):return row.phase=="queued" and row.kind=="prototype_craft")
	check(not queued.is_empty() and queued[0].ids.size()==3 and str(extra.house_id) in queued[0].ids,"actual delivery callback adds exactly one connected neighbour to two-house wave")
	var gold_before:int=feedback.arcs.emitted
	var end:=Time.get_ticks_msec()+1500
	while Time.get_ticks_msec()<end:
		if feedback.arcs.slots.any(func(row):return row.node.visible and float(row.node.material_override.get_shader_parameter("metronome_strength"))>.65):await shot("actual_delivery_gold_arc");break
		await process_frame
	await create_timer(.9).timeout
	check(feedback.arcs.emitted>=gold_before+1,"actual pooled gold arc reaches extra house")
	var status:Dictionary=demo.state.workshop_status(shop)
	check(int(status.produced)==int(status.stock)+int(status.delivered)+(0 if status.transit.is_empty() else 1),"gold wave does not invent or duplicate finite craft stock")
	var tea_ticks:=0
	while not feedback.journal.any(func(row):return row.phase=="queued" and row.kind=="prototype_gathering") and tea_ticks<3600:
		demo.life._process(.1);tea_ticks+=1
		if tea_ticks%10==0:await process_frame
	var tea:Array=feedback.journal.filter(func(row):return row.phase=="queued" and row.kind=="prototype_gathering")
	check(not tea.is_empty() and int(demo.state.life_progress.tea_parties)>0 and int(demo.state.bakery_status(bakery).produced)>0,"actual baked bread, purchases, walking, seating and completed tea trigger chamber gathering")
	check(not tea.is_empty() and tea[0].ids.size()==tea[0].members.size()+1 and not str(tea[0].prototype_extra).is_empty() and tea[0].ids[-1]==tea[0].prototype_extra,"actual two-or-three guest tea wave adds exactly one extra reachable neighbour")
	var audio:Dictionary=await Audio.record(OUT+"/Master.wav",12.2);check(audio.ok,"actual prototype choir Master has no clipping")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-last)/1000.);last=now
	frames.sort()
	var snapshot:Dictionary=demo.state.snapshot();var read:=Fixture.State.new()
	check(read.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok and read.snapshot()==snapshot,"actual activity and selected prototypes roundtrip")
	var after:Array=[]
	for p:AudioStreamPlayer in demo.music._players.values():after.append(p.get_instance_id())
	check(voices==after and after.size()==12 and demo.music._effects.size()==4 and demo.music.spatial.report().bus_count==6,"original audio pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"checks":checks,"failures":failures,"ok":failures.is_empty(),"audio":audio,"frames":{"p95_ms":frames[114],"max_ms":frames[-1]},"delivered":status.delivered,"produced":status.produced,"ticks":ticks,"tea_ticks":tea_ticks,"tea":tea,"queued":queued,"arcs":feedback.arcs.emitted,"score":demo.music.emergence.score}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("PROTOTYPE_RESONANCE_LIVE ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

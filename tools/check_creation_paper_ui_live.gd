extends SceneTree
const Scene = preload("res://scenes/city_creation.tscn")
const State = preload("res://scripts/world/city_creation_state.gd")
var OUT = "res://验证记录/当前HUD_2026-10-22"
var demo
var checks: Array = []
var failures: Array = []
var facts:Dictionary={}
func _initialize() -> void: _run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: failures.append(label);push_error(label)
func key(code: Key) -> void:
	for pressed: bool in [true,false]:
		var event := InputEventKey.new();event.keycode=code;event.pressed=pressed;root.push_input(event);await process_frame
	await book_settled()
func click(at: Vector2) -> void:
	var motion := InputEventMouseMotion.new();motion.position=at;motion.global_position=at;root.push_input(motion);await process_frame
	await RenderingServer.frame_post_draw
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;root.push_input(event);await process_frame
	await book_settled()
func book_settled()->void:
	while demo.ledger.scrollbook.tween!=null and demo.ledger.scrollbook.tween.is_running():await process_frame
func image(name: String) -> void:
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+name+".png")==OK,"capture "+name)
func layout() -> void:
	var screen := Rect2(Vector2.ZERO,Vector2(root.size))
	var ribbon:Control=demo.score_ribbon
	check(screen.encloses(ribbon.get_global_rect()) and is_equal_approx(ribbon.size.y,44.),"44px score ribbon fits "+str(root.size))
	var actions:Control=demo.sundial_hud
	for button:Control in actions.get_children():
		check(screen.encloses(button.get_global_rect()),"circular action fits: "+str(button.name))
	check(actions.get_child_count()==5 and not actions.get_global_rect().intersects(ribbon.get_global_rect()),"all five action seals leave the ribbon unobstructed")
	var toolbar:Control=demo.ui_layer.get_node("Root/Toolbar")
	check(screen.encloses(toolbar.get_global_rect()),"five-core dock and undo/redo fit")
	check(screen.encloses(demo.whisper_keycaps.get_global_rect()) and not demo.whisper_keycaps.get_global_rect().intersects(toolbar.get_global_rect()),"single-line keycaps fit below the tools")
	var area:=0.
	var occupied:Array[Control]=[ribbon,actions,toolbar,demo.whisper_keycaps]
	# Full-screen transparent ToolBubbles is not painted; its actual compact
	# child rows are. Include them in the conservative resting-HUD footprint.
	for row:Control in [demo.tactile_dock.bubble_rows,demo.tactile_dock.nature_row]:
		if row.is_visible_in_tree():occupied.append(row)
	for node:Control in occupied:
		check(screen.encloses(node.get_global_rect()),"painted HUD row fits: "+str(node.name))
		area+=node.get_global_rect().get_area()
	var open:=1.-area/screen.get_area();facts[str(root.size)]={"open_world_fraction":open,"ribbon":ribbon.get_global_rect(),"keycaps":demo.whisper_keycaps.get_global_rect()}
	check(open>=.88,"resting HUD leaves at least 88 percent of the city visible")

func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy:await process_frame
	for i in range(8):await process_frame

func options_fit()->void:
	var screen:=Rect2(Vector2.ZERO,Vector2(root.size))
	for row:Control in [demo.tactile_dock.bubble_rows,demo.tactile_dock.nature_row]:
		if row.is_visible_in_tree():check(screen.encloses(row.get_global_rect()),"current option row fits at "+str(root.size)+": "+str(row.name))
	var legacy:Control=demo.ui_layer.get_node("Root/LegacyToolOptions")
	check(not legacy.is_visible_in_tree() and visible_native_options(demo.ui_layer)==0,"actual context has no visible native dropdown or fixed legacy drawer")

func visible_native_options(node:Node)->int:
	var count:=1 if node is OptionButton and node.is_visible_in_tree() else 0
	for child:Node in node.get_children():count+=visible_native_options(child)
	return count

func core_tools()->void:
	var captions:Array=[]
	for button:Button in demo.tool_buttons:
		if button.is_visible_in_tree():captions.append(button.caption)
	check(captions==["筑屋","修路","烟火","林水","地形"],"only five intended core tools occupy the dock")
	for index:int in [0,2,4,5,8]:
		await click(demo.tool_buttons[index].get_global_rect().get_center());await settle()
		if not facts.has("core_clicks"):facts.core_clicks=[]
		facts.core_clicks.append({"window":root.size,"target":index,"actual":demo.tool,"disabled":demo.tool_buttons[index].disabled,"hover":str(root.gui_get_hovered_control().get_path()) if root.gui_get_hovered_control()!=null else ""})
		check(demo.tool==index,"actual visible core seal selects "+str(demo.tool_buttons[index].caption)+" at "+str(root.size)+" actual="+str(demo.tool))
		options_fit()
	await click(demo.tool_buttons[5].get_global_rect().get_center());await settle()
	check(demo.tactile_dock.nature_row.get_child_count()==3,"nature palette has tree pond and channel seals")
	for mode:int in range(3):
		await click(demo.tactile_dock.nature_row.get_child(mode).get_global_rect().get_center());await settle();options_fit()
		check((demo.tool==5 if mode==0 else demo.tool==6 and demo.water_kind==["pond","channel"][mode-1]),"actual nature subtool selects "+["trees","pond","channel"][mode])
	demo.select_tool(0);await settle()

func _run() -> void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180
	var personal := FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/临时作品库";root.add_child(demo);demo.life.set_process(false)
	for i in range(35): await process_frame
	while demo.toast.visible:await process_frame
	if "--compact-only" in OS.get_cmdline_user_args():
		var focused:Dictionary=await preload("res://tools/fixtures/city_creation_compact_journal_live.gd").new().run(demo,OUT+"/compact")
		print("COMPACT_FOCUSED ",focused.ok);demo.queue_free();await process_frame;quit(0 if focused.ok else 1);return
	if "--postcard-only" in OS.get_cmdline_user_args():
		demo.camera_rig.postcard_directory=OUT+"/isolated_postcards"
		await click(demo.sundial_hud.postcard.get_global_rect().get_center())
		while demo.camera_rig.postcard_busy:await process_frame
		var focused:Dictionary=await preload("res://tools/fixtures/city_creation_postcard_live.gd").new().run(demo)
		print("POSTCARD_FOCUSED ",focused.ok);demo.queue_free();await process_frame;quit(0 if focused.ok else 1);return
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll();await settle()
	var original: Dictionary=demo.state.snapshot();var undo: int=demo.state._undo.size()
	layout();await core_tools();await image("01_乐谱主界面")
	check(demo.ui_layer.get_node("Root").get_node_or_null("PaperHeader")==null and not demo.quest.is_visible_in_tree(),"permanent header and instruction cards are removed")
	check(demo.score_ribbon.seals.get_child_count()==4,"journal landmarks gallery and guide have direct ribbon seals")
	await click(demo.journal.button.get_global_rect().get_center())
	check(demo.journal.panel.visible and demo.quest.is_visible_in_tree(),"visible journal seal reveals actual goals and city accounts")
	await click(demo.journal.scrollbook.tabs.ledger.get_global_rect().get_center());check(demo.ledger.visible() and not demo.journal.panel.visible,"journal opens real city ledger and closes itself")
	await key(KEY_ESCAPE)
	await click(demo.journal.button.get_global_rect().get_center());await click(demo.journal.scrollbook.tabs.landmarks.get_global_rect().get_center())
	check(demo.signatures.panel.visible and not demo.journal.panel.visible,"journal opens actual landmark catalogue")
	await key(KEY_ESCAPE)
	await click(demo.score_ribbon.landmark_button.get_global_rect().get_center())
	check(demo.signatures.panel.visible and demo.score_ribbon.landmark_button.kind=="landmark","direct landmark seal opens the actual six-landmark catalogue")
	await key(KEY_ESCAPE)
	var weather_history:int=demo.state._undo.size()
	for mode:int in range(4):
		await click(demo.sundial_hud.weather.get_global_rect().get_center());await settle()
		check(demo.state.microclimate==demo.State.Microclimate.IDS[mode] and demo.weather_visual._mode==demo.state.microclimate,"actual weather seal applies "+str(demo.state.microclimate))
	while demo.state._undo.size()>weather_history:demo._history(false);await settle()
	var restored_weather:Dictionary=demo.state.snapshot();var expected_weather:Dictionary=original.duplicate(true)
	restored_weather.erase("revision");expected_weather.erase("revision")
	check(restored_weather==expected_weather,"weather tour undoes to the complete original authored world")
	original=demo.state.snapshot()
	var players:Array=[]
	for id:String in demo.music.STEMS:players.append(demo.music._players[id].get_instance_id())
	var clock:float=demo.music._playback_clock()
	for phase in range(3):
		var turn:float=demo.light_button.turn
		await click(demo.light_button.get_global_rect().get_center())
		await create_timer(.10).timeout
		check(absf(demo.light_button.turn-turn)>.01 and absf(demo.light_button.turn-demo.sundial_hud._dial_target)>.001,"sundial rotates continuously during its spring transition")
		await create_timer(.36).timeout
		check(absf(demo.light_button.turn-demo.sundial_hud._dial_target)<.001,"sundial settles at its next third-turn")
		check(demo.light_phase==(phase+1)%3 and demo.sundial_hud.sundial.kind==["sundial_day","sundial_dusk","sundial_night"][demo.light_phase],"native sundial click applies actual lighting phase")
	await click(demo.music_button.get_global_rect().get_center());await process_frame
	check(demo.music.muted and demo.ambience._muted and demo.music_button.muted,"native tuning fork mutes music and ambience together")
	await click(demo.music_button.get_global_rect().get_center());await process_frame
	check(not demo.music.muted and not demo.music_button.muted,"native tuning fork restores sound without replacing players")
	var sound_deadline:=Time.get_ticks_msec()+12000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<sound_deadline:await process_frame
	check(not demo.music.audio_report.is_empty(),"current production PCM bank is ready")
	check(demo._strum_house(str(demo.state.houses[0].id)),"real household note starts through the original music owner")
	var note_deadline:=Time.get_ticks_msec()+1500
	while not bool(demo.resonance_snapshot.get("pluck",{}).get("audible",false)) and Time.get_ticks_msec()<note_deadline:await process_frame
	await process_frame
	check(demo.score_ribbon.audible and demo.score_ribbon.midi==int(demo.resonance_snapshot.pluck.midi) and demo.score_ribbon.staff_points.size()==5,"five real score strings and note follow the actual audible household MIDI")
	var phase_a:Array=demo.score_ribbon.staff_points.duplicate(true)
	await create_timer(.08).timeout
	check(demo.score_ribbon.staff_points!=phase_a,"score strings move with the shared live transport")
	var current:Array=[]
	for id:String in demo.music.STEMS:current.append(demo.music._players[id].get_instance_id())
	check(players==current and demo.music._playback_clock()>clock,"all original music players and clock survive HUD actions")
	await click(demo.sundial_hud.walk.get_global_rect().get_center())
	check(demo.camera_rig.strolling and demo.camera.projection==Camera3D.PROJECTION_PERSPECTIVE,"native walking seal enters the actual same-city street camera")
	await click(demo.sundial_hud.walk.get_global_rect().get_center())
	check(not demo.camera_rig.strolling and demo.camera.projection==Camera3D.PROJECTION_ORTHOGONAL,"native walking seal restores the original editing camera")
	demo.camera_rig.postcard_directory=OUT+"/isolated_postcards"
	await click(demo.sundial_hud.postcard.get_global_rect().get_center())
	while demo.camera_rig.postcard_busy:await process_frame
	check(FileAccess.file_exists(demo.camera_rig.last_postcard) and demo.camera_rig.last_postcard.begins_with(ProjectSettings.globalize_path(OUT)) and demo.ui_layer.visible,"native postcard seal saves a real isolated postcard and restores the same HUD")
	await process_frame
	check(not demo.toast.text.contains(demo.camera_rig.last_postcard) and demo.sundial_hud.postcard.tooltip_text.contains(demo.camera_rig.last_postcard),"postcard success stays compact while the real save destination remains discoverable on the camera seal")
	await core_tools()
	demo.select_tool(2);await process_frame;await image("02_道路气泡")
	var legacy:Control=demo.ui_layer.get_node("Root/LegacyToolOptions")
	var bubbles:Control=demo.ui_layer.get_node("Root/ToolBubbles")
	check(bubbles.visible and not legacy.is_visible_in_tree() and not demo.road_panel.is_visible_in_tree(),"tool options move from visible right drawers into contextual bubbles")
	var promenade_button:Button
	for binding:Dictionary in demo.tactile_dock.bindings:
		if binding.type=="option" and binding.source==demo.road_panel.find_child("RoadStyle",true,false) and int(binding.index)==1:promenade_button=binding.button
	check(promenade_button!=null and demo.tactile_dock.button_for("RoadMode",1)!=null and demo.tactile_dock.button_for("RoadSize",3)!=null,"road mode, street finishes, widths and roundabout have contextual seals")
	if promenade_button!=null:await click(promenade_button.get_global_rect().get_center())
	check(demo.road_style=="promenade" and demo.road_panel.find_child("RoadStyle",true,false).selected==1 and promenade_button.active,"road seal changes the original road style state and highlights its selection")
	for index:int in [3,5,6,7,8]:
		demo.select_tool(index);await settle();options_fit()
		for binding:Dictionary in demo.tactile_dock.bindings:
			check(binding.button.is_visible_in_tree(),"legacy callback has a visible contextual replacement: "+str(binding.source.name))

	demo.select_tool(5);await process_frame
	var cypress:Button
	for binding:Dictionary in demo.tactile_dock.bindings:
		if binding.type=="option" and binding.source.name=="Species" and int(binding.index)==1:cypress=binding.button
	if cypress!=null:await click(cypress.get_global_rect().get_center())
	check(demo.vegetation_kind=="cypress","vegetation seal routes through the existing species change callback")
	demo.select_tool(6);await process_frame
	var channel:Button
	for binding:Dictionary in demo.tactile_dock.bindings:
		if binding.type=="option" and binding.source.name=="WaterMode" and int(binding.index)==1:channel=binding.button
	if channel!=null:await click(channel.get_global_rect().get_center())
	check(demo.water_kind=="channel","water seal routes through the existing water mode callback")
	demo.select_tool(3);await process_frame
	var whole_building:Button
	for binding:Dictionary in demo.tactile_dock.bindings:
		if binding.type=="option" and binding.source.name=="RemovalMode" and int(binding.index)==1:whole_building=binding.button
	if whole_building!=null:await click(whole_building.get_global_rect().get_center())
	check(demo.remove_whole,"removal seal updates the original whole-building mode")
	demo.select_tool(8);await process_frame
	var rocky:Button
	for binding:Dictionary in demo.tactile_dock.bindings:
		if binding.type=="option" and binding.source.name=="TerrainMode" and int(binding.index)==3:rocky=binding.button
	if rocky!=null:await click(rocky.get_global_rect().get_center())
	check(demo.terrain_brush.mode=="rock" and demo.terrain_brush.radius==2.0,"terrain seal routes through the original mode and radius coupling")
	demo.select_tool(7);await process_frame
	var deep_music:Button
	for binding:Dictionary in demo.tactile_dock.bindings:
		if binding.type=="option" and binding.source.name=="DistrictStyle" and int(binding.index)==1:deep_music=binding.button
	if deep_music!=null:await click(deep_music.get_global_rect().get_center())
	check(demo.district_style=="deep","district seal updates its original musical style selection")
	await key(KEY_F1);check(demo.guide.visible(),"F1 opens imported guide")
	for index in range(4):
		await click(demo.guide.tabs.global_position+demo.guide.tabs.get_tab_rect(index).get_center())
		check(demo.guide.tabs.current_tab==index and demo.guide.body.text==demo.Copy.guide_tab_text(index),"actual guide tab "+str(index))
	await image("03_营造乐理手札")
	await key(KEY_1);await click(Vector2(40,650))
	check(demo.tool==7 and demo.state.snapshot()==original and demo.state._undo.size()==undo,"modal blocks building keys and clicks without changing city history")
	await key(KEY_ESCAPE);check(not demo.guide.visible(),"Escape closes guide")
	await key(KEY_J);await process_frame;await click(demo.journal.guide_button.get_global_rect().get_center())
	check(demo.guide.visible() and not demo.journal.panel.visible and demo.guide.tabs.current_tab==0,"journal opens gesture guide and closes its own modal")
	await key(KEY_ESCAPE);await key(KEY_L);await process_frame;await image("04_乐谱生活账本")
	await click(demo.ledger.guide_button.get_global_rect().get_center())
	check(demo.guide.visible() and not demo.ledger.visible() and demo.guide.tabs.current_tab==1,"ledger opens life guide and closes its own modal")
	await key(KEY_F1)
	for phase in range(3):
		check(demo.subtitle_label.text==demo.Copy.LIGHT_PHASE_SUBTITLES[phase],"subtitle follows actual light phase "+str(phase))
		demo._toggle_light()
	root.size=Vector2i(1024,768)
	demo.select_tool(0)
	for i in range(10):await process_frame
	layout();await core_tools();await key(KEY_F1);await process_frame
	check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(demo.guide.paper.get_global_rect()),"guide paper fits smaller window")
	await image("05_小窗口手札");await key(KEY_ESCAPE);await image("06_小窗口主界面")
	check(demo.state.snapshot()==original and demo.state._undo.size()==undo,"UI tour preserves exact authored state and undo stack")
	var hid:=str(demo.state.houses[0].id)
	for i in range(3):
		var result:Dictionary=demo.state.set_house_palette(hid,posmod(int(demo.state.houses[0].palette)+1,4))
		check(result.ok,"actual reversible palette practice succeeds")
		demo._after_edit(result,"room")
		while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	var motion:=InputEventMouseMotion.new();motion.position=Vector2(650,500);root.push_input(motion)
	await create_timer(2.6).timeout
	check(demo.whisper_keycaps.uses[0]>=3 and is_equal_approx(demo.whisper_keycaps.modulate.a,.30),"three actual accepted actions settle whisper text at the required thirty percent")
	facts.whisper_practice={"accepted":demo.whisper_keycaps.uses[0],"alpha":demo.whisper_keycaps.modulate.a}
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;for frame in range(6):await process_frame
		await image("07_熟练轻语_"+str(resolution.x))
	var hint_at:Vector2=demo.whisper_keycaps.get_global_rect().get_center()
	motion=InputEventMouseMotion.new();motion.position=hint_at;motion.global_position=hint_at;root.push_input(motion)
	await create_timer(.7).timeout
	check(is_equal_approx(demo.whisper_keycaps.modulate.a,.88),"hovering the actual keycap strip restores readable instructions")
	motion=InputEventMouseMotion.new();motion.position=Vector2(650,500);motion.global_position=motion.position;root.push_input(motion)
	await create_timer(2.6).timeout
	check(is_equal_approx(demo.whisper_keycaps.modulate.a,.30),"leaving the familiar keycap strip returns it to thirty percent")
	for i in range(3):
		demo._history(false)
		while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	var undone:Dictionary=demo.state.snapshot();var before_authored:Dictionary=original.duplicate(true)
	facts["undo_revisions"]=[original.revision,undone.revision]
	check(int(undone.revision)==int(original.revision)+6,"three actual edits and their undos retain the original monotonic revision contract")
	undone.erase("revision");before_authored.erase("revision")
	check(undone==before_authored and demo.state._undo.size()==undo,"ordinary undo restores every authored field and the original history depth after actual practice")
	check(demo.state.save_city(OUT+"/isolated_saved_city.json").ok,"the current city saves through the original serializer to an isolated destination")
	await process_frame;await process_frame
	check(demo.sundial_hud._glow>0. and demo.music_button.saved_glow>0.,"a completed real save lights the tuning-fork seal")
	var before_view:bool=demo.ui_layer.visible
	await key(KEY_F);check(demo.ui_layer.visible!=before_view,"original hide-interface key still controls all new HUD components")
	await key(KEY_F)
	check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"personal save unchanged")
	var postcard:Dictionary=await preload("res://tools/fixtures/city_creation_postcard_live.gd").new().run(demo)
	for label:String in postcard.checks:check(postcard.checks[label],"postcard: "+label)
	var compact:Dictionary=await preload("res://tools/fixtures/city_creation_compact_journal_live.gd").new().run(demo,OUT+"/compact")
	for label:String in compact.checks:check(compact.checks[label],"compact: "+label)
	var report := {"facts":facts,"ok":failures.is_empty(),"count":checks.size(),"failures":failures,"checks":checks}
	FileAccess.open(OUT+"/live.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("SCORE_UI ",JSON.stringify({"facts":facts,"ok":failures.is_empty(),"count":checks.size(),"failures":failures}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

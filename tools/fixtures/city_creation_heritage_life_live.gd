extends RefCounted
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Heritage=preload("res://scripts/world/city_creation_heritage_draft.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/M20/传承与烟火"
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
var demo
var tree:SceneTree
var checks:Dictionary={}
var facts:Dictionary={}
func settle():
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await tree.process_frame
	for i in range(10):await tree.process_frame
func move(at:Vector2):
	var e:=InputEventMouseMotion.new();e.position=at;e.global_position=at;tree.root.push_input(e);await tree.process_frame
func click(control:Control):
	if demo.gallery.panel.scroll.is_ancestor_of(control):
		demo.gallery.panel.scroll.ensure_control_visible(control)
		for i in range(3):await tree.process_frame
	var at:=control.get_global_rect().get_center();await move(at)
	for down:bool in [true,false]:
		var e:=InputEventMouseButton.new();e.position=at;e.global_position=at;e.button_index=MOUSE_BUTTON_LEFT;e.pressed=down;tree.root.push_input(e);await tree.process_frame
func key(code:int,ctrl:bool=false):
	for down:bool in [true,false]:
		var e:=InputEventKey.new();e.keycode=code;e.pressed=down;e.ctrl_pressed=ctrl;tree.root.push_input(e);await tree.process_frame
	await settle()
func capture(label:String):
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size
		await move(demo.music_button.get_global_rect().get_center());demo.town.clear_preview()
		for i in range(12):await tree.process_frame
		demo.set_process(false);demo.town.clear_preview();demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
		tree.root.get_texture().get_image().save_png(OUT+"/"+label+"_"+str(size.x)+".png")
		demo.set_process(true)
func open_biome(id:String):
	demo.gallery.open_panel();await settle()
	if not demo.gallery.panel._biomes_selected:await click(demo.gallery.panel.biome_button)
	for i in range(5):await tree.process_frame
	await click(demo.gallery.panel.biome_buttons[id]);await settle();demo.life.set_process(false)
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
func run(owner)->Dictionary:
	demo=owner;tree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo.gallery.open_panel();await settle();demo.gallery.panel.tabs.current_tab=2;await settle()
	var labels:Array=demo.gallery.panel.grid.find_children("*","Label",true,false).map(func(l):return l.text)
	checks.individual_chords=preload("res://scripts/world/city_creation_synergy_buffs.gd").CHORD_NAMES.values().all(func(name):return labels.any(func(text):return str(name) in text))
	checks.cross_city_progress=demo.gallery.panel.footer.text.contains("和弦5/5") and demo.gallery.panel.footer.text.contains("名胜6/6")
	checks.hidden_modes=demo.gallery.panel.mode_buttons.has("gong_pentatonic") and demo.gallery.panel.mode_buttons.has("impressionist_major7") and not demo.gallery.panel.mode_buttons.gong_pentatonic.disabled and not demo.gallery.panel.mode_buttons.impressionist_major7.disabled
	await capture("跨城图鉴")
	demo.gallery.close_panel();await open_biome("sunny_banks")
	var draft:Node=demo.get_meta("inspiration_draft");var j:Dictionary=demo.state.harmony_journey
	checks.real_new_bay=demo.state.biome_seed.get("id")=="sunny_banks" and demo.state.houses.is_empty()
	checks.one_heritage=j.get("heritage_credit",0)==1 and Journey.credits(j)==1 and j.harmony_level==1 and j.harmony_xp==0 and draft.paper.visible and draft.title.text.begins_with("跨城传承")
	await capture("开局传承三选一")
	var card:String=draft.buttons.keys()[0];await click(draft.buttons[card]);await settle();draft.poll()
	checks.actual_choice=Journey.credits(demo.state.harmony_journey)==0 and card in demo.state.harmony_journey.traditions
	await key(KEY_Z,true);draft.poll();checks.undo_gift=Journey.credits(demo.state.harmony_journey)==1
	await key(KEY_Y,true);draft.poll();checks.redo_gift=Journey.credits(demo.state.harmony_journey)==0
	var saved:Dictionary=await demo.gallery._capture("河湾传承留念","heritage");var read:Dictionary=demo.gallery.library.read(str(saved.get("id",""))) if saved.ok else {}
	checks.spent_saved=saved.ok and read.get("ok",false) and int(read.world.harmony_journey.heritage_credit)==1
	if read.get("ok",false):
		await demo.gallery._open_chosen(read);await settle();demo.life.set_process(false);draft.poll()
		checks.spent_reopen=Journey.credits(demo.state.harmony_journey)==0 and card in demo.state.harmony_journey.traditions and not Heritage.grant(demo.state,demo.gallery.archive.awards)
	await open_biome("terraced_peaks")
	checks.separate_new_bay=demo.state.biome_seed.get("id")=="terraced_peaks" and Journey.credits(demo.state.harmony_journey)==1 and demo.state.harmony_journey.harmony_level==1
	demo.select_tool(0);await settle()
	var built:=false
	for at:Vector2 in [Vector2(18,14),Vector2(-18,14),Vector2(22,18),Vector2(-14,18)]:
		if not demo.state.validate_add_house(at).ok:continue
		var point:Vector2=demo.camera.unproject_position(Vector3(at.x,demo.state.ground_height(at),at.y))
		if not Rect2(Vector2(8,110),Vector2(tree.root.size)-Vector2(16,250)).has_point(point) or draft.paper.get_global_rect().has_point(point):continue
		await move(point)
		if tree.root.gui_get_hovered_control()!=null:continue
		for down:bool in [true,false]:
			var event:=InputEventMouseButton.new();event.position=point;event.global_position=point;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;tree.root.push_input(event);await tree.process_frame
		await settle();built=not demo.state.houses.is_empty();break
	checks.free_build_under_pending=built and Journey.credits(demo.state.harmony_journey)==1
	var current:Dictionary=demo.state.snapshot();checks.unfinished_saved=State.new().restore(JSON.parse_string(JSON.stringify(current))).ok
	await capture("待选札仍可造城")
	# Open an actually era-unlocked city and choose three legal leaves to inspect a crown badge.
	var rich:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
	for id:String in ["stone_step_carillon","hearth_neighbors","tram_promenade"]:preload("res://tools/fixtures/city_creation_tradition_fixture.gd").learn(rich,id)
	await demo.gallery._open_chosen({"ok":true,"id":"ledger","title":"四脉烟火","world":rich.snapshot(),"view":{"focus":[-10.,.7,-2.],"yaw":.34,"pitch":.9,"zoom":25.,"evening":false,"light_phase":0}})
	await settle();demo.life.set_process(false);demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	var before:Dictionary=demo.state.snapshot();var depth:int=demo.state._undo.size()
	demo.ledger.open_panel();await tree.create_timer(.25).timeout
	checks.four_school_capsules=demo.ledger.family_badges.size()==4 and demo.ledger.family_badges.highland.text.contains("3/3 · 共鸣冠冕")
	checks.life_capsules=demo.ledger.body.text.contains("麦香") and demo.ledger.body.text.contains("茶叙") and demo.ledger.body.text.contains("风物") and demo.ledger.body.bbcode_enabled and not "%" in demo.ledger.body.text
	checks.real_quantities=demo.ledger.body.text.contains("采购 %d 次"%int(demo.state.life_progress.purchases))
	await capture("流派冠冕与烟火")
	checks.ledger_readonly=demo.state.snapshot()==before and demo.state._undo.size()==depth
	demo.ledger.close_panel();facts.audio=await Probe.record(OUT+"/Master.wav",3.2);checks.unclipped=facts.audio.ok
	checks.personal_untouched=personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())
	var report:={"checks":checks,"facts":facts,"ok":checks.values().all(func(v):return v)}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("HERITAGE_LIFE_LIVE ",JSON.stringify(report));return report

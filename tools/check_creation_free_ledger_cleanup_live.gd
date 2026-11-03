extends "res://tools/check_creation_three_road_modes_live.gd"
const Spatial=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd")
const Old=preload("res://tools/fixtures/city_creation_pre_cutoff_free.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
func earned_city()->RefCounted:
	var built:=Spatial.build(Old.fresh());check(built.ok,"real spatial fixture retains historical free policy")
	var city:RefCounted=built.city;Receipts.initialize(city);var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);var earned:int=Receipts.collect(city).earned
	Spatial.Brush.select(city,"pastoral","townhouse")
	for i in range(10):check(city.add_house(Vector2(-35.+i*3.,16.)).ok,"actual authored home earns historical pending choice");life._sync();earned+=int(Receipts.collect(city).earned)
	check(earned==108 and city.HarmonyJourney.credits(city.harmony_journey)==1 and city.harmony_journey.pending_draft.size()==3,"real 81 chord XP plus 27 authored-home XP preserves one original three-card offer")
	life.free();return city
func page()->void:
	demo.ledger._last_refresh=-500;demo.ledger.refresh();await create_timer(.25).timeout
func open_l()->void:await key(KEY_L);await page()
func actual_page(size:Vector2i)->void:
	root.size=size;await open_l();var text:String=demo.ledger.body.text
	check(demo.ledger.visible() and demo.ledger.button.text=="城市总谱 · L" and "场所空间" in text,"native L opens one current spatial list "+str(size.x))
	for forbidden:String in ["+35%","互哺","原有用途与连接","已接路 ","蒸汽花房圆舞曲","田园三和弦"]:check(not forbidden in text,"free L omits retired economic/duplicate line: "+forbidden)
	check("当前合奏" in text and not demo.ledger.rows.size(),"current ensemble display remains and business shelves stay out of free L")
	var report:Dictionary=demo.state.functional_zones();var names_present:=true
	for space:Dictionary in report.spaces:
		for id:String in space.members:names_present=names_present and str(demo.state.houses[demo.state._house_index(id)].name) in text
	check(not report.spaces.is_empty() and names_present,"every actual spatial member remains readable in the retained list")
	check(demo.ledger.guide_button.is_visible_in_tree() and root.get_visible_rect().encloses(demo.ledger.guide_button.get_global_rect()),"journal/rights route fits viewport "+str(size.x))
	await capture("free_L_"+str(size.x));await ui_click(demo.ledger.guide_button);await settle();quiet()
	var rights:Node=demo.get_meta("growth_rights_page")
	check(demo.journal.panel.visible and not demo.ledger.visible() and rights.detail.is_visible_in_tree() and rights.last_report.credits==1 and rights.last_report.pending.size()==3,"actual L button routes to retained journal rights without consuming pending offer")
	check("+35%" in rights.detail.text and rights.last_report.inspiration_multiplier==1.35,"explicit rights page retains actual official multiplier")
	var viewport:Rect2=demo.journal.cards.get_parent().get_global_rect()
	check(viewport.encloses(rights.read.get_global_rect()),"actual routed rights heading is visible inside scroll viewport")
	check(viewport.encloses(Rect2(rights.detail.get_global_rect().position,Vector2(40,20))),"first expanded rights line is immediately visible without a second scroll or click")
	await capture("rights_"+str(size.x));await key(KEY_ESCAPE)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();await show(earned_city(),Vector2(-23,-18),"总谱与历史权益分离");quiet();await settle()
	var before:Dictionary=demo.state.snapshot();var benefits:Dictionary=demo.state.functional_benefits();var report:Dictionary=demo.state.functional_zones();var chords:Dictionary=demo.state.synergy_buffs().duplicate(true);var musical:Dictionary=demo.music.get_meta("orchestration_plan",{}).duplicate(true)
	check(benefits.inspiration_multiplier==1.35 and not benefits.mutual.h6.is_empty() and "clockwork_waltz" in chords.active_chords,"source city really has all removed economic lines before testing their absence")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:await actual_page(size)
	check(demo.state.snapshot()==before and demo.state.functional_benefits()==benefits and demo.state.functional_zones()==report and demo.state.synergy_buffs()==chords,"reading L and J preserves complete author world, old offers, formulas and spatial evidence")
	check(demo.music.get_meta("orchestration_plan",{})==musical,"UI cleanup preserves current orchestration report")
	var removed:Dictionary=demo.state.remove_road("r1");demo._after_edit(removed,"history");await settle();quiet();await open_l();var disconnected:String=demo.ledger.body.text
	check(removed.ok and demo.state.functional_benefits().inspiration_multiplier==1. and ("入口尚未接通" in disconnected or "接续" in disconnected),"real road removal still explains physical access failure")
	await ui_click(demo.ledger.guide_button);await settle();var rights:Node=demo.get_meta("growth_rights_page");check(rights.last_report.inspiration_multiplier==1. and not "+35%" in rights.detail.text and rights.last_report.credits==1,"rights withdraw current multiplier while retaining old pending credit")
	await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();quiet();check(demo.state.functional_benefits()==benefits,"native Undo restores exact current spatial rights")
	await key(KEY_F1);await settle();var letters:Node=demo.get_meta("city_letters");check(letters.claim.is_visible_in_tree() and not letters.claim.disabled,"existing F1 pending-claim button remains reachable")
	await ui_click(letters.claim);await settle();var draft:Node=demo.get_meta("inspiration_draft");var selected:String=before.harmony_journey.pending_draft[0]
	check(draft.paper.is_visible_in_tree() and draft.buttons.has(selected),"F1 opens exact original offer through native input")
	await ui_click(draft.buttons[selected]);await settle();quiet();check(demo.state.HarmonyJourney.credits(demo.state.harmony_journey)==0 and selected in demo.state.harmony_journey.traditions,"one real native claim consumes original credit and retains selected card")
	var saved:Dictionary=demo.state.snapshot();var path:=OUT+"/claimed.json";var cold:=State.new();check(demo.state.save_city(path).ok and cold.load_city(path).ok and cold.snapshot()==saved,"actual cold file preserves claimed history without issuing a new offer")
	await show(cold,Vector2(-23,-18),"历史冷读");quiet();await open_l();check(not "原有用途与连接" in demo.ledger.body.text and demo.state.HarmonyJourney.credits(demo.state.harmony_journey)==0,"cold free L retains cleanup and consumed history");await key(KEY_ESCAPE)
	var legacy:=State.new();legacy.initialize();await show(legacy,Vector2(-6,-1),"经典账本保持");quiet();await open_l()
	check(demo.ledger.button.text=="生活账本 · L" and "采购" in demo.ledger.body.text and demo.ledger.guide_button.text=="经营手札 · F1","switching to legacy restores original business ledger and guide label")
	check(demo.ledger.paper.find_child("FourFamilySeals",true,false).visible and demo.ledger.paper.get_meta("workshop_leaves").visible,"legacy family and business leaves restore after free route")
	await ui_click(demo.ledger.guide_button);await settle();check(demo.guide.visible() and demo.guide._current_tab==1,"same legacy button still opens original F1 business guide");await key(KEY_ESCAPE)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("FREE_LEDGER_CLEANUP_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

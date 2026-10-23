extends RefCounted
const Fixture=preload("res://tools/fixtures/city_creation_juice_fixture.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
const OUT="res://验证记录/M10/共鸣手札"
var demo:Node
var tree:SceneTree
var checks:Dictionary={}
var details:Dictionary={}
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await tree.process_frame
	for i in range(8):await tree.process_frame
func click(control:Control)->void:
	var at:=control.get_global_rect().get_center();var motion:=InputEventMouseMotion.new();motion.position=at;motion.global_position=at;tree.root.push_input(motion);await tree.process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;tree.root.push_input(event);await tree.process_frame
func capture(label:String)->void:
	demo.select_tool(4);demo.town.clear_preview();demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw
	tree.root.get_texture().get_image().save_png(OUT+"/"+label+".png")
func show(city:RefCounted,title:String)->void:
	var chosen:Dictionary={"ok":true,"id":title,"title":title,"world":city.snapshot(),"view":{"focus":[-27.,.7,-20.],"yaw":demo.yaw,"pitch":.9,"zoom":24.,"evening":false,"light_phase":0}}
	await demo.gallery._open_chosen(chosen);await settle();demo.life.set_process(false)
	checks["opened_"+title]=demo.state.houses==city.houses and demo.state.roads==city.roads
func run(owner:Node)->Dictionary:
	demo=owner;tree=demo.get_tree();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var audio_ids:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():audio_ids.append(node.get_instance_id())
	var city:RefCounted=Fixture.wishes();city.set_house_role("h4","garden_cafe")
	demo.journal.close_panel();await show(city,"生活共鸣")
	demo.focus=Vector3(-27,.7,-20);demo.zoom=24.;demo.pitch=.9;demo._update_camera()
	var draft:Node=demo.get_meta("inspiration_draft");draft.poll()
	checks.legacy_starts_quiet=demo.state.harmony_journey.harmony_level==1 and not draft.paper.visible
	demo.life.site_wishes.arm("h1","water")
	var pond:Dictionary=demo.state.add_water([Vector2(-33,-24)] as Array[Vector2],3.2,"pond");demo._after_edit(pond,"water");await settle();draft.poll()
	checks.real_wish_xp=pond.ok and int(demo.state.bakery_status("h1").produced)==2 and int(demo.state.harmony_journey.harmony_xp)>=28
	var kinds:Dictionary={}
	# Advance real workers, citizens and route deliveries, never edit XP/counters.
	var simulated:=0.
	for i in range(1600):
		demo.life._process(.2);simulated+=.2
		if i%4==0:await tree.process_frame;draft.poll()
		for row:Dictionary in draft.events:
			for kind:String in row.events:kinds[kind]=true
		if int(demo.state.harmony_journey.harmony_level)>=2 and kinds.has("tea") and kinds.has("craft"):break
	draft.poll();details.simulated_seconds=simulated;details.real_events=kinds;details.growth=demo.state.harmony_journey.duplicate(true)
	checks.real_life_growth=int(demo.state.harmony_journey.harmony_level)>=2 and kinds.has("bread") and kinds.has("craft") and kinds.has("tea")
	checks.three_offers=draft.paper.visible and draft.buttons.size()==3 and Journey.credits(demo.state.harmony_journey)>0
	checks.harp_uses_existing_pool=draft.cue_count>0
	if not checks.three_offers:return finish()
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=resolution;for i in range(12):await tree.process_frame
		var viewport:=Rect2(Vector2.ZERO,Vector2(resolution));var readable:=viewport.encloses(draft.paper.get_global_rect())
		for button:Button in draft.buttons.values():readable=readable and button.size.x>=180. and draft.paper.get_global_rect().encloses(button.get_global_rect())
		for leaf:Control in draft.leaves.get_children():
			for label:Node in leaf.get_child(0).get_children():
				if label is Label:readable=readable and label.get_line_count()<=label.get_visible_line_count()
		checks["readable_"+str(resolution.x)]=readable
		await capture("三选一_"+str(resolution.x))
	demo.journal.open_panel();await tree.process_frame
	checks.scroll_not_obscured=not draft.badge.visible and not draft.paper.visible
	demo.journal.close_panel();await tree.process_frame
	checks.draft_returns_after_reading=draft.paper.visible
	# Actual mouse postponement, build while reading, then reopen the same offer.
	var offers:Array=demo.state.harmony_journey.pending_draft.duplicate()
	await click(draft.paper.get_child(0).get_child(0).get_child(1));checks.postpone=not draft.paper.visible
	var house:Dictionary=demo.state.add_house(Vector2(-18,-28));demo._after_edit(house,"room");await settle();draft.poll()
	checks.free_build=house.ok and demo.state.harmony_journey.pending_draft==offers
	await click(draft.badge);checks.mouse_reopen=draft.paper.visible and demo.state.harmony_journey.pending_draft==offers
	var id:String=offers[0]
	for candidate:String in offers:
		if candidate in ["hearth_neighbors","woodland_workbench","warm_hearth_ballad","sylvan_luthier_guild"]:id=candidate;break
	var before:Dictionary=demo.state.harmony_journey.duplicate(true)
	await click(draft.buttons[id]);await settle();draft.poll()
	checks.mouse_choice=id in demo.state.harmony_journey.traditions and int(demo.state.harmony_journey.ranks[id])==1 and Journey.credits(demo.state.harmony_journey)==Journey.credits(before)-1
	details.selected=id
	var role:="bakery" if id in ["hearth_neighbors","warm_hearth_ballad"] else "workshop"
	var target:String="h1" if role=="bakery" else "h2"
	checks.selected_effect=demo.state.ScoreModifiers.production(demo.state,demo.state.houses[demo.state._house_index(target)])>1.
	var earned:int=demo.state.harmony_journey.harmony_xp;var level:int=demo.state.harmony_journey.harmony_level
	demo._after_edit(demo.state.undo(),"history",false);await settle();draft.poll()
	checks.undo_choice=id not in demo.state.harmony_journey.traditions and demo.state.harmony_journey.pending_draft==offers and int(demo.state.harmony_journey.harmony_xp)==earned and int(demo.state.harmony_journey.harmony_level)==level
	demo._after_edit(demo.state.redo(),"history",false);await settle();draft.poll()
	checks.redo_choice=id in demo.state.harmony_journey.traditions and int(demo.state.harmony_journey.harmony_xp)==earned
	var saved:Dictionary=await demo.gallery._capture("河湾传世手札","harmony_m10")
	checks.gallery_save=saved.ok
	if saved.ok:
		var opened:Dictionary=demo.gallery.library.read(str(saved.id));var progress:Dictionary=demo.state.harmony_journey.duplicate(true)
		var restored:=State.new();var restore_check:Dictionary=restored.restore(opened.world)
		checks.saved_exact=opened.ok and restore_check.ok and restored.harmony_journey==progress
		await demo.gallery._open_chosen(opened);await settle();demo.life.set_process(false);draft.poll()
		checks.loaded_choice=id in demo.state.harmony_journey.traditions and Receipts.collect(demo.state).earned==0
		var xp:int=demo.state.harmony_journey.harmony_xp;var loops:=0
		while demo.state.harmony_journey.harmony_xp==xp and loops<400:
			demo.life._process(.2);loops+=1
			if loops%5==0:await tree.process_frame;draft.poll()
		draft.poll();checks.resume_real_growth=demo.state.harmony_journey.harmony_xp!=xp
		await capture("读档继续_1024")
	# New real recipe after a load earns XP; history cannot repeat it.
	var recipe:RefCounted=Fixture.city("pastoral_triad");Fixture.apply(recipe,"pastoral_triad",false)
	await show(recipe,"新的和弦街坊");draft.poll()
	demo.focus=Vector3(-6,.7,0);demo.zoom=25.;demo.pitch=.9;demo._update_camera()
	var completed:Dictionary=Fixture.apply(demo.state,"pastoral_triad",true);demo._after_edit(completed,"terrace");await settle();draft.poll()
	checks.real_chord=completed.ok and draft.events.any(func(row):return row.events.has("chord"))
	# The initial woodland letter is queued independently of chord earnings.
	# Establish its real baseline before comparing the complete history ledger.
	demo.get_meta("vignette_journey").poll()
	var earned_total:Dictionary=demo.state.harmony_journey.duplicate(true)
	demo._after_edit(demo.state.undo(),"history");await settle();draft.poll();demo._after_edit(demo.state.redo(),"history");await settle();draft.poll()
	checks.no_chord_farm=demo.state.harmony_journey==earned_total
	if not checks.no_chord_farm:details.history_difference={"before":earned_total,"after":demo.state.harmony_journey.duplicate(true)}
	demo._set_light_phase(1);await capture("夕景续长_1024")
	demo._set_light_phase(2);demo.pitch=deg_to_rad(10.);demo._update_camera();await capture("夜景低视角_1024")
	# The diagnostic low angle is outside the gallery's authored camera range.
	# Return to a legal normal view before normal capture/switch regression.
	demo.pitch=.9;demo._update_camera()
	var frames:Array[float]=[];var previous:=Time.get_ticks_usec()
	for i in range(120):
		await tree.process_frame;var now:=Time.get_ticks_usec();frames.append((now-previous)/1000.);previous=now
	frames.sort();details.frame_p95_ms=frames[int(frames.size()*.95)];details.frame_max_ms=frames[-1]
	var audio:Dictionary=await Probe.record(OUT+"/手札实录.wav",3.2);details.audio=audio;checks.unclipped=audio.ok
	var after_ids:Array=[]
	for node:Node in demo.music.get_children()+demo.ambience.get_children():after_ids.append(node.get_instance_id())
	checks.fixed_pool=audio_ids==after_ids and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2
	checks.personal_untouched=personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())
	return finish()
func finish()->Dictionary:
	var report:={"ok":checks.values().all(func(value):return value),"checks":checks,"details":details}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("HARMONY_LIVE ",JSON.stringify(report));return report

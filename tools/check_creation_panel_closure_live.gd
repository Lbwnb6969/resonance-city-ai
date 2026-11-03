extends "res://tools/check_creation_detail_status_live.gd"
func select_filter(index:int)->void:
	await ui_click(demo.gallery.panel.source_buttons[index]);await create_timer(.2).timeout
func file_hashes()->Dictionary:
	var result:Dictionary={}
	for filename:String in DirAccess.get_files_at(demo.collection_directory):
		if filename.ends_with(".json") or filename.ends_with(".png"):result[filename]=FileAccess.get_sha256(demo.collection_directory.path_join(filename))
	return result
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();await show(Porches.porch_fixture(),Vector2(-27.2,-20),"面板互斥与作品筛选");quiet();demo.life.set_process(false)
	var manual:Dictionary=await demo.gallery._capture("亲手收藏","manual");var auto_one:Dictionary=await demo.gallery._capture("换城前自动留存","before_open");var auto_two:Dictionary=await demo.gallery._capture("细部切换前原城","before_variant")
	check(manual.ok and auto_one.ok and auto_two.ok,"real captures create one manual and two immutable automatic works")
	var items:Array=demo.gallery.library.entries().items;var auto_ids:Array=items.filter(func(i):return i.reason!="manual").map(func(i):return i.id)
	var hashes:=file_hashes();var snapshot:Dictionary=demo.state.snapshot();var book=demo.journal.scrollbook
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1280,720),Vector2i(1440,900)]:
		root.size=size;await open_details();check(demo.spatial_popover.inspector.panel.visible,"native house appearance opens "+str(size.x))
		await key(KEY_J);await settle();check(book.visible and book.current=="journal" and not demo.spatial_popover.inspector.panel.visible and not demo.spatial_popover.inspector.roles.panel.visible,"native J closes details and role sheet "+str(size.x))
		await key(KEY_L);await settle();check(book.current=="ledger" and not demo.journal.panel.visible and demo.ledger.visible(),"native L switches the single scroll "+str(size.x))
		await capture("single_scroll_"+str(size.x));await open_details();check(not book.visible and demo.spatial_popover.inspector.panel.visible,"native appearance closes prior scroll "+str(size.x))
		demo.spatial_popover.inspector.roles.show_for(true);await process_frame;await key(KEY_L);await settle();check(not demo.spatial_popover.inspector.roles.panel.visible and demo.ledger.visible(),"L closes actual purpose palette "+str(size.x))
		await key(KEY_O,true);await settle();check(demo.gallery.panel.visible and not book.visible and not demo.spatial_popover.card.visible,"native gallery closes contextual and scroll sheets "+str(size.x))
		var panel=demo.gallery.panel;check(panel.cards.size()==items.size() and panel.source_filter.is_visible_in_tree(),"unfiltered gallery displays all original records")
		await select_filter(1);check(panel.source_selection==1 and panel.cards.keys()==[manual.id],"native manual filter preserves exact work identity "+str(size.x))
		check(panel.panel.get_global_rect().encloses(panel.source_filter.get_global_rect()) and root.get_visible_rect().encloses(panel.panel.get_global_rect()),"gallery filter and paper stay within viewport "+str(size.x));await capture("manual_filter_"+str(size.x))
		await select_filter(2);check(panel.source_selection==2 and panel.cards.size()==auto_ids.size() and panel.cards.has(auto_one.id) and panel.cards.has(auto_two.id),"native automatic filter covers both backup reasons "+str(size.x));await capture("automatic_filter_"+str(size.x))
		panel.tabs.current_tab=1;await create_timer(.2).timeout;check(not panel.source_filter.visible and panel.cards.size()>0,"examples remain independent of collection source filter")
		panel.tabs.current_tab=0;await create_timer(.2).timeout;check(panel.source_filter.visible and panel.source_selection==2 and panel.cards.size()==auto_ids.size(),"return from examples preserves collection filter")
		await select_filter(0);await key(KEY_ESCAPE);await settle()
	check(hashes==file_hashes() and demo.state.snapshot()==snapshot,"all filtering and sheet browsing preserves actual work bytes and author state")
	# Open a filtered real backup through its original card and normal before-open capture.
	await key(KEY_O,true);await settle();await select_filter(2);await ui_click(demo.gallery.panel.open_buttons[auto_one.id]);await settle();quiet()
	check(demo.gallery.last_opened_id==auto_one.id and demo.gallery.last_auto_id!="" and demo.gallery.last_auto_id!=auto_one.id,"filtered card loads original ID and performs normal before-open backup")
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal default file unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PANEL_CLOSURE_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if report.ok else 1)

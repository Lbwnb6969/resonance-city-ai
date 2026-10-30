extends "res://tools/check_creation_placed_landmarks_live.gd"
const AudioProbe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
func history()->Dictionary:
	return {"journey":demo.state.harmony_journey.duplicate(true),"memories":demo.state.growth_memories.duplicate(),"archive":demo.state.archive_unlocks.duplicate(),"life":demo.state.life_progress.duplicate(true)}
func colors()->Array:
	var result:Dictionary={}
	for mesh:MeshInstance3D in demo.town.house_roots.h1.find_children("*","MeshInstance3D",true,false):
		for surface in range(mesh.mesh.get_surface_count()):
			var values:Variant=mesh.mesh.surface_get_arrays(surface)[Mesh.ARRAY_COLOR]
			if values!=null:
				for value:Color in values:result[value.to_html()]=true
	var keys:Array=result.keys();keys.sort();return keys
func select_house()->void:
	await ui_click(demo.tool_buttons[4]);await click_world(Vector2(-25,-12));await settle()
	check(demo.spatial_popover.target_house_id=="h1","native world click selects actual house")
func open_colors()->void:
	if not demo.spatial_popover.card.is_visible_in_tree():await select_house()
	if not demo.spatial_popover.color_panel.is_visible_in_tree():await ui_click(demo.spatial_popover.expand_button);await settle()
	check(demo.spatial_popover.color_panel.is_visible_in_tree(),"native more stamp opens finish controls")
func run()->void:
	OUT="res://验证记录/M84/free_finish_access_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	var city:=State.new();city.initialize_free();check(city.add_house(Vector2(-25,-12)).ok,"actual new free house")
	await show(city,Vector2(-25,-12),"自由饰色");quiet();demo.zoom=13.;demo._update_camera();await settle();await select_house()
	var original:=history();var previous:=colors();var rows:Array=[]
	check(DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()=="WASAPI","actual GL and WASAPI")
	for id:String in demo.state.Growth.FINISHES:
		await open_colors();var button:Button=demo.spatial_popover.reward_buttons[id]
		check(not button.disabled and not button.tooltip_text.contains("解锁"),"native unearned finish enabled "+id)
		await ui_click(button);await settle();quiet()
		check(demo.state.houses[0].get("finish","")==id and colors()!=previous,"native click publishes actual changed vertex colors "+id)
		previous=colors();rows.append({"id":id,"colors":previous})
		await key(KEY_Z,true);await settle();quiet();check(demo.state.houses[0].get("finish","")!=id,"native Undo reverses finish "+id)
		await key(KEY_Y,true);await settle();quiet();check(demo.state.houses[0].get("finish","")==id and colors()==previous,"native Redo restores actual color arrays "+id)
		await capture("finish_"+id)
		var finish_cold:=State.new();var finish_path:=OUT+"/"+id+".json"
		check(demo.state.save_city(finish_path).ok and finish_cold.load_city(finish_path).ok,"per-finish real disk read "+id)
		await show(finish_cold,Vector2(-25,-12),"饰色冷读 "+id);quiet();await select_house()
		facts["cold_"+id]={"expected":previous,"actual":colors()}
		check(colors()==previous and history()==original,"per-finish cold upload matches incremental colors and history "+id)
	check(history()==original and original.memories.is_empty() and original.archive.is_empty(),"six native finishes invent no earned history or activity")
	var path:=OUT+"/opal.json";var cold:=State.new()
	check(demo.state.save_city(path).ok and cold.load_city(path).ok and cold.houses[0].finish=="opal","actual cardless finish disk cold read")
	await show(cold,Vector2(-25,-12),"自由饰色冷读");quiet();await select_house()
	facts.cold={"expected_colors":previous,"actual_colors":colors(),"expected_history":original,"actual_history":history()}
	check(colors()==previous and history()==original,"cold mesh colors and earned history match incremental result")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle();await open_colors()
		check(demo.spatial_popover.reward_buttons.values().all(func(button):return button.is_visible_in_tree() and not button.disabled and Rect2(Vector2.ZERO,Vector2(root.size)).encloses(button.get_global_rect())),"all six native finish buttons fit "+str(size.x))
		await capture("finish_controls_"+str(size.x));await key(KEY_ESCAPE)
	for index in range(4):
		await ui_click(demo.spatial_popover.swatches[index]);await settle();quiet()
		var base_colors:=colors();var base_cold:=State.new();var base_path:=OUT+"/base_"+str(index)+".json"
		check(not demo.state.houses[0].has("finish") and demo.state.houses[0].palette==index,"native base palette resets finish "+str(index))
		check(demo.state.save_city(base_path).ok and base_cold.load_city(base_path).ok,"base palette disk save "+str(index))
		await show(base_cold,Vector2(-25,-12),"基础配色冷读");quiet();await select_house()
		check(colors()==base_colors,"base palette cold colors match incremental "+str(index))
	var classic:=State.new();classic.initialize_empty();check(classic.add_house(Vector2(-25,-12)).ok,"actual legacy house")
	await show(classic,Vector2(-25,-12),"经典饰色");quiet();await select_house();demo.journal.refresh_palette()
	check(demo.spatial_popover.reward_buttons.values().all(func(button):return button.disabled),"legacy switch retains original finish locks")
	check(range(4,10).all(func(i):return demo.journal.picker.is_item_disabled(i)),"legacy selector cache has locked entries")
	var converted:Dictionary=demo.state.CreationPolicy.convert(demo.state,OUT+"/converted.json")
	demo._after_edit(converted,"history");await settle();quiet();demo.journal.refresh_palette();await open_colors()
	check(converted.ok and demo.spatial_popover.reward_buttons.values().all(func(button):return not button.disabled),"same-city conversion refreshes real finish controls")
	check(range(4,10).all(func(i):return not demo.journal.picker.is_item_disabled(i) and not demo.journal.picker.get_item_text(i).contains("手记第")),"same-house conversion invalidates selector cache without fake awards")
	await ui_click(demo.spatial_popover.reward_buttons.river_jade);await settle();quiet();check(demo.state.houses[0].get("finish","")=="river_jade" and demo.state.archive_unlocks.is_empty(),"converted native finish works without award receipt")
	await show(cold,Vector2(-25,-12),"自由饰色恢复");quiet();check(colors()==previous and history()==original,"returning to original work restores selected finish and exact ledger")
	var pcm:Dictionary=await AudioProbe.record(OUT+"/Master.wav",3.2)
	check(pcm.ok and pool()==voices,"actual PCM and original bounded audio pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"master":pcm,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.,"finishes":rows,"facts":facts,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("FREE_FINISH_ACCESS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

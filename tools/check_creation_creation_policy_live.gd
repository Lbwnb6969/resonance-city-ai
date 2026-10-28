extends "res://tools/check_creation_terrain_chunk_seams_live.gd"
## Real free entry, native tool/era/purpose clicks and explicit legacy conversion.
const Policy=preload("res://scripts/world/city_creation_creation_policy.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
var results:Array=[]

func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:await process_frame
	for ignored in range(3):await process_frame

func save_json(name:String,value:Variant)->void:
	FileAccess.open(OUT+"/"+name+".json",FileAccess.WRITE).store_string(JSON.stringify(value,"\t",true,true))

func pause_life()->void:
	quiet();demo.life.set_process(false)

func roof_point(id:String)->Vector2:
	var house:Dictionary=demo.town._house_record(id)
	var at:=Vector3(house.origin[0],float(house.get("base_y",0.))+1.5,house.origin[1])
	return demo.camera.unproject_position(at)

func click_roof(id:String)->void:
	var at:=roof_point(id)
	var motion_event:=InputEventMouseMotion.new();motion_event.device=92;motion_event.position=at;motion_event.global_position=at;root.push_input(motion_event);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame

func free_journey(size:Vector2i)->void:
	root.size=size
	print("POLICY_UI_BEGIN ",size.x)
	var city:=State.new();city.initialize_free();await show(city,Vector2(-23,-20),"自由创作新城");pause_life()
	demo.zoom=31.;demo.yaw=0.;demo.pitch=.95;demo._update_camera();await settle()
	check(Policy.is_free(demo.state) and demo.state.houses.is_empty(),"normal empty free city published "+str(size.x))
	check(not demo.intuitive_guidance.banner.visible and demo.intuitive_guidance.target_points.is_empty(),"free entry has no forced construction objective")
	for index:int in demo.tactile_dock.PRIMARY:
		check(not demo.tool_buttons[index].disabled,"core tool available from an empty free city "+str(index))
		await ui_click(demo.tool_buttons[index]);check(demo.tool==index,"native core tool selection "+str(index))
	await ui_click(demo.tool_buttons[0]);await settle()
	if not demo.tactile_dock.house_options:await ui_click(demo.tool_buttons[0]);await settle()
	var ids:Array[String]=[]
	for i in range(Policy.ERAS.size()):
		var era:String=Policy.ERAS[i]
		var button:Button=demo.ui_layer.find_child("NewHouseEra_"+era,true,false)
		check(button!=null and button.is_visible_in_tree() and not button.disabled,"free era button really visible and enabled "+era)
		await ui_click(button);check(Brush.current(demo.state).era==era,"native era button selects the real brush "+era)
		var previous:int=demo.state.houses.size()
		await click_world(Vector2(-31+i*5.4,-20));await settle();pause_life()
		check(demo.state.houses.size()==previous+1 and demo.state.house_era(demo.state.houses[-1])==era,"native placement constructs the selected actual era "+era)
		if demo.state.houses.size()>previous:ids.append(str(demo.state.houses[-1].id))
		print("POLICY_UI_ERA ",size.x," ",era)
	if ids.size()!=4:return
	var target:String=ids[-1]
	var roles:Node=demo.get_meta("role_palette")
	for role:String in demo.state.HOUSE_ROLES:
		await ui_click(demo.tool_buttons[4]);await settle()
		var opener:Button=demo.ui_layer.find_child("BatchHousePurpose",true,false)
		await ui_click(opener);check(roles.panel.visible and roles.buttons.has(role) and not roles.buttons[role].disabled,"native shared purpose menu enables "+role)
		if not roles.buttons.has(role):return
		await ui_click(roles.buttons[role]);await click_roof(target);await settle();pause_life()
		check(demo.town._house_record(target).role==role,"native click assigns real free purpose "+role)
		print("POLICY_UI_ROLE ",size.x," ",role)
	check(demo.state.era_unlocks==["pastoral"] and demo.state.era_answers.is_empty(),"actual free edits never fabricate advanced era achievements")
	await capture("free_four_eras_"+str(size.x))
	await key(KEY_F1);await settle();var options:Node=demo.get_meta("creation_options")
	check(demo.guide.visible() and options.guidance.is_visible_in_tree() and not options.convert_button.visible,"free handbook explains rights and exposes optional teaching")
	await ui_click(options.guidance);check(demo.state.creative_settings.guidance,"native optional teaching checkbox is persisted authored state")
	await capture("free_handbook_"+str(size.x))
	await ui_click(options.guidance);await key(KEY_ESCAPE);await settle();pause_life()
	check(not demo.guide.visible(),"one Escape closes handbook while the purpose brush is armed")
	var snapshot:Dictionary=demo.state.snapshot();var path:=OUT+"/free_"+str(size.x)+".json";var reader:=State.new()
	check(demo.state.save_city(path).ok and reader.load_city(path).ok and reader.snapshot()==snapshot,"actual free city disk cold load is exact "+str(size.x))
	await show(reader,Vector2(-23,-20),"自由作品重新打开");pause_life()
	check(Policy.is_free(demo.state) and demo.state.can_build_era("modern_eco") and demo.state.can_assign_role("symphony_hall"),"gallery reopen retains free era and purpose rights")
	results.append({"size":size,"world":path,"eras":ids.map(func(id):return demo.state.house_era(demo.town._house_record(id))),"historical_eras":demo.state.era_unlocks.duplicate()})

func legacy_conversion()->void:
	root.size=Vector2i(1024,768)
	var legacy:=State.new();legacy.initialize_empty();check(legacy.add_house(Vector2(-25,-20)).ok,"legacy test house through unchanged recipe API")
	var path:=OUT+"/legacy_original.json";check(legacy.save_city(path).ok,"legacy source stored in isolated file")
	var original_file:=FileAccess.get_file_as_bytes(path)
	await show(legacy,Vector2(-25,-20),"经典旧城");pause_life()
	check(not Policy.is_free(demo.state) and not demo.state.can_build_era("modern_eco"),"actual old work defaults to classic earned rights")
	# Loading a file clears its in-memory editing history. Author a new native
	# edit before conversion so Undo exercises a real retained transaction.
	await click_world(Vector2(-20,-20));await settle();pause_life()
	check(demo.state.houses.size()==2 and not demo.state._undo.is_empty(),"native post-load construction creates retained legacy undo history")
	var roles:Node=demo.get_meta("role_palette")
	check(roles.buttons.values().filter(func(b):return b.visible).size()==6 and not roles.buttons.venue.visible,"legacy menu retains its six visible ordinary purposes")
	await key(KEY_F1);await settle();var options:Node=demo.get_meta("creation_options")
	check(options.convert_button.is_visible_in_tree() and not options.convert_button.disabled,"classic handbook offers explicit conversion")
	await capture("legacy_conversion_offer_1024")
	await ui_click(options.convert_button)
	check(await wait_for(func():return options.last_conversion.has("collection"),120000),"native conversion and normal gallery capture finish")
	var result:Dictionary=options.last_conversion
	check(result.get("ok",false) and result.get("collection",{}).get("ok",false) and Policy.is_free(demo.state),"native explicit conversion creates a normal reopenable gallery work")
	if not result.get("ok",false):return
	check(FileAccess.get_file_as_bytes(path)==original_file,"test conversion never rewrites its original legacy source")
	var backup:=State.new();var reader:=State.new()
	check(backup.load_city(result.backup).ok and not Policy.is_free(backup),"actual conversion backup cold restores classic policy")
	check(reader.load_city(result.path).ok and Policy.is_free(reader) and reader.era_unlocks==["pastoral"],"native conversion saves free policy without granting achievements")
	await capture("converted_handbook_1024");await key(KEY_ESCAPE);await settle();pause_life()
	await key(KEY_Z,true);await settle();pause_life()
	check(demo.state.houses.size()==1 and Policy.is_free(demo.state),"native undo of post-load legacy construction preserves conversion")
	await key(KEY_Y,true);await settle();pause_life()
	check(demo.state.houses.size()==2 and Policy.is_free(demo.state),"native redo keeps converted policy")
	check(await wait_for(func():return demo.music.daily_source().get("audible",false),12000),"restored converted house still participates in the original music pool")
	facts.recording=await Probe.record(OUT+"/conversion_Master.wav",3.2);check(facts.recording.ok,"actual converted-city Master is audible without clipping")
	results.append({"conversion":result})

func gallery_entry()->void:
	await demo.gallery.open_biome("sunny_banks");await settle();pause_life()
	check(Policy.is_free(demo.state) and demo.state.snapshot().schema==20 and demo.state.era_unlocks==["pastoral"],"production gallery new-biome entry uses free rights without fake history")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await settle();await ui_click(demo.tool_buttons[4]);await settle()
		await ui_click(demo.ui_layer.find_child("BatchHousePurpose",true,false));await settle()
		var palette:Node=demo.get_meta("role_palette")
		check(palette.panel.visible and palette.buttons.values().all(func(b):return b.visible and not b.disabled and Rect2(Vector2.ZERO,Vector2(size)).encloses(b.get_global_rect())),"all eight actual purpose buttons fit the free gallery city at "+str(size.x))
		await capture("all_eight_purposes_"+str(size.x));palette.panel.hide()
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for ignored in range(30):
		await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-last)/1000.);last=now
	frames.sort();facts.frames={"samples":frames.size(),"p95_ms":frames[int((frames.size()-1)*.95)],"max_ms":frames[-1],"static_memory_bytes":OS.get_static_memory_usage(),"reference_only":true}

func run()->void:
	OUT="res://验证记录/M76/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=30
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();pause_life()
	var voices:=pool()
	check(Policy.is_free(demo.state) and demo.music.audio_report.get("bank_source","")=="precompiled" and DisplayServer.get_name()!="headless","actual production entry starts free with real OpenGL and original compiled bank")
	if not "--legacy-only" in OS.get_cmdline_user_args():
		for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:await free_journey(size)
	await legacy_conversion()
	await gallery_entry()
	check(pool()==voices and voices.long.size()==12 and voices.short.size()==4 and voices.nature.size()==2 and voices.buses==6,"original voice identities and all audio budgets preserved")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal continue-save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"results":results,"facts":facts}
	save_json("creation_policy_live",report);print("CREATION_POLICY_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

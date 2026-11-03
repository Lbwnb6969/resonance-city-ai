extends "res://tools/check_creation_three_road_modes_live.gd"
const Old=preload("res://tests/test_city_creation_bakery_life.gd")
func native_recipe(id:String)->void:
	demo.select_tool(0);demo.spatial_popover.open_for_house("h2");await settle()
	await ui_click(demo.spatial_popover.inspector.appearance_button);await settle();await ui_click(demo.spatial_popover.inspector.purpose_button);await settle()
	var palette:Node=demo.get_meta("role_palette");check(palette.buttons[id].is_visible_in_tree(),"native house details expose "+id);await ui_click(palette.buttons[id]);await settle();quiet();await key(KEY_ESCAPE)
func stock_view()->void:
	demo.town.update_bakery_supply({"h2":demo.life.bakery_status("h2")})
func advance(seconds:float)->void:
	for i in range(roundi(seconds*10.)):
		demo.life._process(.1)
		if i%10==0:stock_view();await process_frame
	stock_view();await settle()
func grill()->Node3D:return demo.town.house_roots.h2.find_child("CharcoalGrill",true,false)
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var builder:=Old.new();var city:RefCounted=builder._fixture();builder.free();check(city.set_house_architecture("h2","townhouse").ok and city.produce_bread("h2",4),"existing street house and bread stock before actual UI selection");await show(city,Vector2(-10,-2),"街坊烤肉");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-10,.7,-1.6);demo.zoom=5.5;demo.pitch=.60;demo.yaw=.35;demo._update_camera();await settle()
	var bread:Dictionary=demo.state.bakery_supply.duplicate(true);var seed_value:int=demo.state.houses[1].seed
	await native_recipe("grillhouse")
	check(demo.state.Grillhouse.active(demo.state,"h2") and demo.state.bakery_status("h2").stock==0,"actual purpose stamp selects empty independent grill inventory")
	check(demo.state.houses[1].seed==seed_value and demo.state.bakery_supply==bread and grill()!=null,"selection preserves the existing house and bread while publishing a real grill")
	var live:=false;var hand:=false;var bought:=false
	for i in range(900):
		demo.life._process(.1)
		if i%4==0:
			stock_view()
			var status:Dictionary=demo.life.bakery_status("h2");var fire:Node=grill().find_child("GrillEmbers",true,false);var smoke:Node=grill().find_child("BakerySmoke",true,false)
			if status.produced>=2 and fire.visible and smoke.visible:live=true
			for resident:Dictionary in demo.life.residents:
				if resident.get("visual_food","")=="skewer" and resident.get("visual_bread",false):bought=true
			for mesh:Node in demo.life.find_children("*","Node3D",true,false):
				if mesh.get_meta("citizen_prop","")=="skewer" and mesh.get_child(0).get_node("HandProp").mesh!=null:hand=true
			if live and bought and hand:break
			await process_frame
	stock_view();await settle();var status:Dictionary=demo.life.bakery_status("h2")
	check(live and bought and hand and status.produced>0 and status.served>0,"real walking cook and resident produce, carry roast meshes and light attended grill smoke")
	check(demo.state.bakery_supply==bread,"actual production and resident meals leave historical bread untouched")
	check(demo.town.bread_roots.h2.get_meta("displayed_skewers")==mini(3,int(status.stock)),"visible food count follows real remaining stock")
	facts["roast"]=status;facts["carried_skewer_observed"]=bought;facts["hand_prop_meta"]=hand
	# Capture an attended batch in all three light phases with real food on the grate.
	for i in range(300):
		if demo.town.BakerySmoke.working(demo.life.bakery_status("h2")) and demo.state.bakery_status("h2").stock>0:break
		await advance(.1)
	stock_view();demo.set_process(false);demo.town.clear_preview();demo.preview_key="";demo.focus=Vector3(-10,.7,-1.8);demo.zoom=3.8;demo.yaw=.15;demo.pitch=.7;demo._update_camera()
	for phase in range(3):demo._set_light_phase(phase);await settle();await capture("roast_phase_"+str(phase))
	demo.set_process(true)
	var saved:Dictionary=demo.state.snapshot();check(demo.state.save_city(OUT+"/grill_city.json").ok,"real isolated roast save validates before publication")
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/grill_city.json"))).ok and cold.snapshot()==saved,"real disk cold read preserves cuisine and both real inventories")
	demo._after_edit(demo.state.set_bakery_open("h2",false),"room");await settle();stock_view();check(not grill().find_child("GrillEmbers",true,false).visible and not grill().find_child("BakerySmoke",true,false).visible,"pause stops both actual embers and smoke")
	await native_recipe("bakery");check(demo.state.bakery_status("h2").stock==4 and grill()==null,"native bread stamp restores bread inventory and old frontage")
	await key(KEY_Z,true);await settle();quiet();stock_view();check(demo.state.Grillhouse.active(demo.state,"h2") and demo.state.bakery_status("h2").stock==saved.grill_supply.shops.h2.stock and grill()!=null,"native Undo restores roast identity, stock and facade")
	await key(KEY_Y,true);await settle();quiet();check(not demo.state.Grillhouse.active(demo.state,"h2") and grill()==null,"native Redo restores bread frontage")
	await show(cold,Vector2(-10,-2),"烤肉存档冷读");quiet();stock_view();check(grill()!=null and demo.town.bread_roots.h2.get_meta("stock")==saved.grill_supply.shops.h2.stock,"full cold scene publishes actual saved grill and food")
	root.size=Vector2i(1024,768);await settle();demo.spatial_popover.open_for_house("h2");await settle();await ui_click(demo.spatial_popover.inspector.appearance_button);await settle();await ui_click(demo.spatial_popover.inspector.purpose_button);await settle()
	var panel:Control=demo.get_meta("role_palette").panel;check(Rect2(Vector2.ZERO,Vector2(root.size)).encloses(panel.get_global_rect()),"expanded native purpose palette fits the 1024px window");await capture("purpose_1024")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GRILLHOUSE_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

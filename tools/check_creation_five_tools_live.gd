extends "res://tools/check_creation_three_road_modes_live.gd"
const Layout=preload("res://scripts/ui/city_creation_dock_layout.gd")
func ready_ui()->void:
	await settle();demo.life.set_process(false)
	for id:String in ["inspiration_draft","vignette_journey"]:
		var item:Node=demo.get_meta(id);item.set_process(false);item.paper.hide()
func tool(index:int)->void:await ui_click(demo.tool_buttons[index]);await ready_ui();check(demo.tool==index,"native primary selects internal tool "+str(index))
func stamp(source:String,index:int)->void:
	if source.begins_with("Road"):
		await ui_click(demo.tactile_dock.road_palette.heads["More" if source=="RoadMode" else source]);await ready_ui()
	var button:Button=demo.tactile_dock.button_for(source,index)
	check(button!=null and button.is_visible_in_tree() and root.get_visible_rect().encloses(button.get_global_rect()),"actual option fits viewport "+source+str(index))
	if button!=null:await ui_click(button);await ready_ui()
func roof(id:String)->void:
	var h:Dictionary=demo.town._house_record(id);var at:Vector2=demo.camera.unproject_position(Vector3(h.origin[0],float(h.get("base_y",0.))+1.5,h.origin[1]))
	var move:=InputEventMouseMotion.new();move.device=92;move.position=at;move.global_position=at;root.push_input(move);await process_frame
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
	await ready_ui()
func layout(free:bool,label:String)->void:
	var expected:Array=Layout.FREE if free else Layout.CLASSIC;var visible:Array=[];var previous:=-INF
	for child:Node in demo.tool_buttons[0].get_parent().get_children():
		var index:int=demo.tool_buttons.find(child)
		if index>=0 and child.visible:visible.append(index)
	check(visible==expected and demo.tactile_dock.primary_tools()==expected,"real ordered dock buttons match policy "+label)
	for index:int in expected:
		var b:Button=demo.tool_buttons[index]
		check(root.get_visible_rect().encloses(b.get_global_rect()) and b.get_global_rect().position.x>previous,"actual core seal fits and follows visible order "+str(index)+label);previous=b.get_global_rect().position.x
	check(demo.tool_buttons[6].kind=="water" and demo.tool_buttons[5].kind=="vegetation","retained tool IDs use water and tree glyphs")
	check(demo.tool_buttons[5].caption==("林木" if free else "林水") and demo.tool_buttons[4].visible!=free,"purpose is absent from free primary dock and remains classic")
	await capture("dock_"+label)
func keys()->void:
	var before:Dictionary=demo.state.snapshot()
	for index:int in range(9):
		await tool(0);await key(KEY_1+index);await ready_ui();check(demo.tool==([0,1,2,3,4,5,6,2,8][index]),"native retained global key "+str(index+1))
	await tool(2)
	for i:int in range(3):await key(KEY_1+i);await ready_ui();check(demo.tool==2 and demo.get_meta("road_tool").mode==i,"road context 1/2/3 has priority "+str(i))
	await tool(0);check(demo.state.snapshot()==before,"tool keys and road context never edit authored world")
func journey(size:Vector2i)->void:
	root.size=size;var city:=State.new();city.initialize_free();await show(city,Vector2(-25,-19),"五画具自由城");await ready_ui();demo.zoom=30.;demo.yaw=0.;demo.pitch=.95;demo._update_camera();await ready_ui()
	var suffix:=str(size.x);await layout(true,suffix)
	check(demo.tactile_dock.primary_tools().all(func(i):return not demo.tool_buttons[i].disabled),"empty free city has all actual tools enabled")
	await tool(6);check(not demo.tactile_dock.nature_row.visible and demo.tool_buttons[6].active and not demo.tool_buttons[5].active,"water has independent active seal without mixed nature row")
	await stamp("WaterMode",0);await stamp("WaterWidth",1);await click_world(Vector2(-26,-11));await ready_ui()
	check(demo.state.waters.size()==1 and demo.state.waters[0].kind=="pond","native water core and pond options create actual water")
	var pond:Dictionary=demo.state.snapshot();await key(KEY_Z,true);await ready_ui();check(demo.state.waters.is_empty(),"native water Undo removes one authored stroke");await key(KEY_Y,true);await ready_ui()
	var returned:Dictionary=pond.duplicate(true);returned.revision+=2;check(demo.state.snapshot()==returned,"native water Redo restores entire world with two genuine history revisions")
	await stamp("WaterMode",1);await stamp("WaterWidth",0);await motion(Vector2(-26,-11));await button(Vector2(-26,-11),true);await motion(Vector2(-23,-11));await motion(Vector2(-20,-11));await button(Vector2(-20,-11),false);await ready_ui()
	check(demo.state.waters.size()==2 and demo.state.waters[-1].kind=="channel","independent water palette draws real connected channel");await capture("water_"+suffix)
	await tool(5);check(not demo.tactile_dock.nature_row.visible and demo.tool_buttons[5].active and not demo.tool_buttons[6].active,"plant seal activates independently")
	await stamp("Species",0);await stamp("PlantingMode",0);await click_world(Vector2(-30,-16));await ready_ui();check(not demo.state.plants.is_empty(),"native tree placement still authors real plant")
	await stamp("Species",4);await click_world(Vector2(-23,-16));await ready_ui();check(demo.state.plants.size()>=2,"native plant species changes and second planting remain available");await capture("plants_"+suffix)
	await tool(0);await click_world(Vector2(-25,-24));await ready_ui();check(demo.state.houses.size()==1,"native house core places actual house")
	await tool(2);await stamp("RoadMode",0);await motion(Vector2(-29,-20));await button(Vector2(-29,-20),true);await motion(Vector2(-26,-20));await motion(Vector2(-22,-20));await button(Vector2(-22,-20),false);await ready_ui();check(demo.state.roads.size()==1,"native road core retains actual one-stroke drawing")
	await tool(8);await stamp("TerrainMode",0);var height:float=demo.state.ground_height(Vector2(-31,-26));await motion(Vector2(-31,-26));await button(Vector2(-31,-26),true);await motion(Vector2(-29,-26));await button(Vector2(-29,-26),false);await ready_ui();check(demo.state.ground_height(Vector2(-31,-26))>height,"native terrain core retains actual height editing")
	await keys();await roof("h1");var inspector:Node=demo.spatial_popover.inspector
	check(demo.spatial_popover.target_house_id=="h1","native house picking remains available without purpose primary tool")
	await ui_click(inspector.appearance_button);await ready_ui();check(inspector.purpose_button.is_visible_in_tree() and root.get_visible_rect().encloses(inspector.purpose_button.get_global_rect()),"selected-house purpose remains discoverable and reachable")
	await ui_click(inspector.purpose_button);await ready_ui();var roles:Node=demo.get_meta("role_palette");check(roles.panel.visible and not roles.batch,"native selected-house purpose opens shared single selector")
	await ui_click(roles.buttons.workshop);await ready_ui();check(demo.town._house_record("h1").role=="workshop","native single-purpose action preserves manual role edit")
	demo.spatial_popover.close();await key(KEY_5);await ready_ui();await ui_click(demo.ui_layer.find_child("BatchHousePurpose",true,false));await ready_ui();check(roles.panel.visible and roles.batch,"retained key5 opens existing batch-purpose workflow")
	await ui_click(roles.buttons.bakery);await roof("h1");check(demo.town._house_record("h1").role=="bakery","native retained batch brush edits real existing house")
	await key(KEY_ESCAPE);await tool(0);await roof("h1");await ui_click(demo.spatial_popover.name_field);var old_tool:int=demo.tool;await key(KEY_7);await ready_ui();check(demo.tool==old_tool and demo.spatial_popover.name_field.has_focus(),"numeric tool key respects actual name-field text focus");demo.spatial_popover.name_field.release_focus();demo.spatial_popover.close()
	var saved:Dictionary=demo.state.snapshot();var file:=OUT+"/world_"+suffix+".json";var cold:=State.new();check(demo.state.save_city(file).ok and cold.load_city(file).ok and cold.snapshot()==saved,"real disk cold read preserves authored geometry and manual role")
	await show(cold,Vector2(-25,-19),"五画具冷读");await ready_ui();await layout(true,"cold_"+suffix)
	await key(KEY_F1);await ready_ui();check("筑屋、修路、水岸、林木、地形" in demo.guide.body.text,"native F1 describes actual new core layout");await key(KEY_ESCAPE);await ready_ui()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await ready_ui();isolate_input()
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:await journey(size)
	var legacy:=State.new();legacy.initialize();await show(legacy,Vector2(-6,-1),"经典画具保持");await ready_ui();await layout(false,"classic");await key(KEY_6);await ready_ui();check(demo.tool==5 and demo.tactile_dock.nature_row.visible,"classic retains original combined forest/water context")
	await ui_click(demo.tactile_dock.nature_row.get_child(1));await ready_ui();check(demo.tool==6 and demo.tool_buttons[5].active and demo.tactile_dock.nature_row.visible,"classic pond tab still anchors combined nature seal")
	await tool(0);var conversion:Dictionary=demo.state.CreationPolicy.convert(demo.state,OUT+"/converted.json");check(conversion.ok,"same-city explicit conversion has original verified backup");demo._refresh_ui();await ready_ui();await layout(true,"converted")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("FIVE_TOOLS_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

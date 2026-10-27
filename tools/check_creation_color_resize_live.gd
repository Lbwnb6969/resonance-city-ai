extends "res://tools/check_creation_organic_corners_live.gd"
func run()->void:
	OUT="res://验证记录/M66/color_resize"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	var city:=State.new();city.initialize_empty()
	for z in [-16,-12,-8]:
		for x in [-27,-23,-19]:city.add_house(Vector2(x,z))
	await show(city,Vector2(-23,-12),"缩窗精确配色验收");quiet();demo.select_tool(0);demo.zoom=17.;demo.pitch=.85;demo._update_camera();await settle()
	var rows:Array=[]
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		var selected:="h5" if size.x==1440 else "h6"
		root.size=size;demo.spatial_popover.close();demo.spatial_popover.color_panel.hide();await settle();await select_house(selected);await settle()
		var pop=demo.spatial_popover;await ui_click(pop.expand_button);await settle()
		var actual:Array=demo.town.HouseColors.base_palette(demo.town,record_house(selected));var wall:=Color(actual[0]).to_html(false)
		check(pop.wall_picker.color.to_html(false)==wall and pop.roof_picker.color.to_html(false)==Color(actual[1]).to_html(false),"opening another actual house initializes both pickers from that house rendered colors")
		var rect:Rect2=pop.inspector.panel.get_global_rect();var row:={"size":size,"root":root.get_visible_rect(),"overlay":pop.overlay.size,"overlay_view":pop.overlay.get_viewport_rect(),"panel":rect,"visible":pop.inspector.panel.is_visible_in_tree(),"more":pop.expand_button.get_global_rect(),"apply":pop.color_panel.find_child("ApplyColors",true,false).get_global_rect()}
		print("COLOR_RESIZE ",row);rows.append(row);await capture("expanded_"+str(size.x))
		check(Rect2(Vector2.ZERO,Vector2(size)).encloses(rect) and row.visible,"actual expanded color sheet remains inside the resized viewport")
		pop.roof_picker.color=Color("75436c");await ui_click(pop.color_panel.find_child("ApplyColors",true,false));await settle()
		check(record_house(selected).get("custom_colors",{}).get("roof","")=="75436c" and record_house(selected).get("custom_colors",{}).get("wall","")==wall,"actual roof-only apply retains the untouched wall color")
		await key(KEY_Z,true);await settle()
	facts.resolutions=rows;await finish(personal,voices)

extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
const OUT="res://验证记录/工具圆章_2026-10-20"
var demo
var checks:Array=[]
var failures:Array=[]
var facts:Dictionary={}

func _initialize()->void:_run.call_deferred()
func check(ok:bool,label:String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center()
	var motion:=InputEventMouseMotion.new();motion.position=at;root.push_input(motion);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.pressed=pressed;root.push_input(event);await process_frame
func key(code:Key)->void:
	for pressed:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=pressed;root.push_input(event);await process_frame
func settle()->void:
	await create_timer(.28).timeout
	demo.tactile_dock.refresh();await process_frame;await process_frame
func snapshot(label:String)->void:
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual GL screenshot "+label)
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(1440,900);Engine.max_fps=180
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_gallery";root.add_child(demo);demo.life.set_process(false)
	for i in range(30):await process_frame
	demo.toast_time=0.;demo.toast.hide()
	var original:Dictionary=demo.state.snapshot();var history:int=demo.state._undo.size()
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution
		for tool:int in [2,3,5,6,7,8]:
			demo.select_tool(tool);await settle()
			var dock=demo.tactile_dock
			var screen:=Rect2(Vector2.ZERO,Vector2(resolution))
			var fit:=true;var above:=true
			for binding:Dictionary in dock.bindings:
				var button:Control=binding.button
				fit=fit and screen.encloses(button.get_global_rect())
				above=above and button.get_global_rect().end.y<=demo.tool_buttons[tool].get_global_rect().position.y-15.
			check(fit and above,"all contextual seals fit above tool "+str(tool)+" at "+str(resolution))
			var legacy:Control=demo.ui_layer.get_node("Root/LegacyToolOptions")
			check(not legacy.is_visible_in_tree(),"old forms stay hidden for tool "+str(tool))
			if tool==7:check(demo.district_name.is_visible_in_tree() and not demo.district_name.editable,"new-district name entry stays visible and waits for actual district selection")
			var tested:=0
			for binding:Dictionary in dock.bindings:
				var button:Button=binding.button
				if button.disabled:continue
				if binding.type=="option":
					await click(button)
					check(binding.source.selected==int(binding.index) and button.active,"real option seal "+str(binding.source.name)+":"+str(binding.index))
				else:
					var value:bool=binding.source.button_pressed
					var emissions:=[0]
					var listener:=func(_value:bool)->void:emissions[0]+=1
					binding.source.toggled.connect(listener)
					await click(button)
					check(binding.source.button_pressed!=value and button.active==binding.source.button_pressed and emissions[0]==1,"real toggle fires once: "+str(binding.source.name))
					binding.source.toggled.disconnect(listener)
				tested+=1
			facts[str(resolution)+"/"+str(tool)]={"options":dock.bindings.size(),"clicked":tested,"bounds":dock.bubble_rows.get_global_rect()}
			await snapshot(str(resolution.x)+"_tool_"+str(tool))
			demo.toast_time=0.;demo.toast.hide()
		demo.select_tool(2);await settle()
		var before:bool=demo.road_straight
		await key(KEY_R)
		check(demo.road_straight!=before,"original R shortcut still changes road mode")
		for binding:Dictionary in demo.tactile_dock.bindings:
			if binding.source.name=="RoadMode":check(binding.button.active==(int(binding.index)==int(demo.road_straight)),"keyboard mode and circular highlight agree")
		demo.select_tool(0);await process_frame
		check(not demo.tactile_dock.popup.visible,"building tool closes contextual seals")
	check(demo.state.snapshot()==original and demo.state._undo.size()==history,"tool configuration tour keeps all authored data and history unchanged")
	var painted:Array[Vector2]=[Vector2(-10,-8),Vector2(-10,8)]
	var added:Dictionary=demo.state.add_district(painted)
	check(added.ok,"real district creation supplies a reversible naming target")
	demo.selected_district=str(added.get("district_id",""));demo.select_tool(7);await settle()
	check(demo.district_name.editable and demo.district_name.is_visible_in_tree(),"selected actual district enables its relocated name entry")
	await click(demo.district_name)
	demo.district_name.text="金弦街坊";await key(KEY_ENTER)
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	check(demo._selected_district_row().get("name","")=="金弦街坊","relocated name entry commits its actual State transaction on Enter")
	check(not demo.district_name.has_focus(),"submitted district name releases keyboard focus")
	var saved_path:=OUT+"/isolated_district.json"
	check(demo.state.save_city(saved_path).ok,"renamed district saves through the original serializer")
	var restored:=State.new();restored.initialize()
	check(restored.restore(JSON.parse_string(FileAccess.get_file_as_string(saved_path))).ok and restored.districts[-1].name=="金弦街坊","saved district name round-trips through original validation")
	for i in range(2):
		demo._history(false)
		while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	var after:Dictionary=demo.state.snapshot();var before_authored:Dictionary=original.duplicate(true)
	check(int(after.high_watermark.district)==int(str(added.district_id).trim_prefix("d")),"undo preserves issued district IDs and does not recycle them")
	after.erase("revision");before_authored.erase("revision")
	after.erase("high_watermark");before_authored.erase("high_watermark")
	check(after==before_authored and demo.state._undo.size()==history,"ordinary undo restores every authored field after district creation and naming")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save is unchanged")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"count":checks.size(),"failures":failures,"facts":facts}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	print("TOOL_BUBBLES ",JSON.stringify({"ok":failures.is_empty(),"count":checks.size(),"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var OUT:String="res://验证记录/M31/罗盘"
var demo
var failures:Array[String]=[]
var count:=0
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	count+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	for frame in range(20):await process_frame
func click(button:Control)->void:
	var at:=button.get_global_rect().get_center()
	var motion:=InputEventMouseMotion.new();motion.position=at;root.push_input(motion);await process_frame
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.pressed=pressed;root.push_input(event);await process_frame
	await settle()
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/作品";root.add_child(demo)
	demo.life.set_process(false);await settle();demo.toast.hide();demo.toast_time=0.
	var id:=str(demo.state.houses[0].id);var initial:Dictionary=demo.state.snapshot();var history:int=demo.state._undo.size()
	var pop=demo.spatial_popover
	for resolution:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=resolution;demo.select_tool(4);pop.open_for_house(id);await settle()
		check(pop.card.is_visible_in_tree() and not demo.place_panel.is_visible_in_tree(),"roof card replaces legacy form at "+str(resolution))
		check(Rect2(Vector2.ZERO,Vector2(resolution)).encloses(pop.card.get_global_rect()),"roof card fits viewport at "+str(resolution))
		for button:Button in pop.role_buttons.values():check(pop.card.get_global_rect().encloses(button.get_global_rect()),"role seal fits card")
		await click(pop.swatches[2]);check(int(demo.state.houses[0].get("palette",0))==2,"real swatch commits palette")
		await click(pop.temperament_button);check(demo.state.houses[0].get("temperament","")=="allegro","real temperament seal commits")
		await click(pop.role_buttons.bakery);check(demo.state.houses[0].role=="bakery","real role seal commits")
		await click(pop.style_button);check(demo.state.houses[0].get("style","classic")!="classic","real style seal commits")
		pop.name_field.text="弦音小屋";pop.name_field.text_submitted.emit(pop.name_field.text);await settle()
		check(demo.state.houses[0].name=="弦音小屋","name submits through State")
		var position:Vector2=pop.card.position;demo.yaw+=.4;demo._update_camera();await settle()
		check(pop.card.position.distance_to(position)>1.,"card follows rotated camera")
		var saved:=OUT+"/isolated.json";check(demo.state.save_city(saved).ok,"compass edits save")
		var restored:=State.new();restored.initialize();var result:Dictionary=restored.load_city(saved)
		check(result.ok and restored.houses[0].get("temperament","")=="allegro" and restored.houses[0].name=="弦音小屋","name and temperament round trip")
		await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/compass_%d.png"%resolution.x)
		while demo.state._undo.size()>history:demo._history(false);await settle()
		var actual:Dictionary=demo.state.snapshot();var expected:=initial.duplicate(true)
		actual.erase("revision");expected.erase("revision")
		check(actual==expected,"ordinary undo restores all authored fields")
		demo.select_tool(2);await settle();check(not pop.card.visible,"tool change closes compass")
	var spatial:Dictionary=await preload("res://tools/fixtures/city_creation_spatial_scroll_live.gd").new().run(demo)
	for label:String in spatial.checks:check(spatial.checks[label],"M08: "+label)
	var report:Dictionary={"ok":failures.is_empty(),"count":count,"failures":failures}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("SPATIAL_POPOVER ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

extends "res://tools/check_creation_shore_material_live.gd"
const BatchFixture=preload("res://tests/test_city_creation_batch_appearance.gd")
var input_filter:Node
func isolate_input()->void:input_filter=FixtureInput.new();root.add_child(input_filter)
func gpu_signature()->String:
	var rows:Array=[]
	for branch:Node3D in [demo.town.buildings,demo.town.roads_layer]:
		for node:MeshInstance3D in branch.find_children("*","MeshInstance3D",true,false):
			if node.mesh==null:continue
			for i in range(node.mesh.get_surface_count()):
				var raw:Dictionary=RenderingServer.mesh_get_surface(node.mesh.get_rid(),i)
				rows.append(var_to_bytes([raw.get("vertex_data"),raw.get("attribute_data"),raw.get("index_data")]).hex_encode().sha256_text())
	rows.sort();return var_to_bytes(rows).hex_encode().sha256_text()
func gpu_rows()->Array:
	var rows:Array=[]
	for id:String in demo.town.house_roots:
		for node:MeshInstance3D in demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false):
			for i in range(node.mesh.get_surface_count()):
				var raw:Dictionary=RenderingServer.mesh_get_surface(node.mesh.get_rid(),i)
				var arrays:Array=node.mesh.surface_get_arrays(i);var colors:Array=[]
				if arrays[Mesh.ARRAY_COLOR]!=null:
					for color:Color in arrays[Mesh.ARRAY_COLOR]:
						if not colors.has(color.to_html()):colors.append(color.to_html())
				var mat:Material=node.material_override
				rows.append({"house":id,"path":str(demo.town.house_roots[id].get_path_to(node)),"transform":var_to_str(node.transform),"vertex":var_to_bytes(raw.get("vertex_data")).hex_encode().sha256_text(),"attributes":var_to_bytes(raw.get("attribute_data")).hex_encode().sha256_text(),"indices":var_to_bytes(raw.get("index_data")).hex_encode().sha256_text(),"colors":colors,"uv":var_to_bytes(arrays[Mesh.ARRAY_TEX_UV]).hex_encode().sha256_text(),"material":mat.shader.resource_path if mat is ShaderMaterial else str(mat.get_class()),"raw":raw.get("attribute_data",PackedByteArray()).hex_encode()})
	return rows
func mouse_event(at:Vector2,pressed:bool,twice:bool=false,ctrl:bool=false,shift:bool=false)->void:
	var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=pressed;event.double_click=twice;event.ctrl_pressed=ctrl;event.shift_pressed=shift;root.push_input(event);await process_frame
func move(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.device=92;event.relative=at-demo.pointer;event.position=at;event.global_position=at;root.push_input(event);await process_frame
func roof(id:String)->Vector2:
	var h:Dictionary=demo.town._house_record(id);return demo.camera.unproject_position(Vector3(float(h.origin[0]),float(h.get("base_y",0.))+3.65,float(h.origin[1])+.9))
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();await show(BatchFixture.fixture(),Vector2(-23,-19),"成组编辑六屋街排");quiet();demo.life.set_process(false)
	demo.zoom=18.;demo.pitch=.7;demo.yaw=.1;demo._update_camera();await settle();var bar=demo.get_meta("batch_edit")
	await move(roof("h1"));await mouse_event(roof("h1"),true);await mouse_event(roof("h1"),false);await create_timer(.1).timeout
	await mouse_event(roof("h1"),true,true);await mouse_event(roof("h1"),false);await settle()
	check(bar.selected.size()==6 and bar.panel.visible and bar.protect.button_pressed,"actual double-click selects the six-house natural cluster with protection")
	check(not demo.spatial_popover.card.visible and not demo.journal.scrollbook.visible,"group panel excludes roof compass and scroll")
	var original:Dictionary=demo.state.snapshot();var geometry:=gpu_signature();var undo:int=demo.state._undo.size();var revision:int=demo.state.revision;var custom:Dictionary=demo.state.houses[2].duplicate(true)
	var cache:Dictionary=demo.town.house_roots.h1.get_meta("house_color_cache");var encodings:Array=[]
	for i in range(cache.palettes[0].size()):encodings.append({"index":i,"truncated":demo.town.HouseColors.vertex_color(cache.palettes[0][i]),"rounded":cache.palettes[0][i].to_abgr32()})
	FileAccess.open(OUT+"/source_encodings.json",FileAccess.WRITE).store_string(JSON.stringify({"rows":encodings,"houses":original.houses,"era":demo.state.house_era(demo.state.houses[0])},"\t"))
	await move(bar.buttons[2].get_global_rect().get_center());check(await wait_for(func():return bar.preview.ready,15000),"real house-builder preview finishes")
	check(demo.state.snapshot()==original and demo.state.revision==revision and demo.state._undo.size()==undo,"hover preview never writes real State or history")
	check(gpu_signature()==geometry,"published mesh buffers stay untouched during independent preview")
	check(bar.preview.hidden.size()==5 and demo.town.house_roots.h3.visible,"only candidate homes temporarily hide; protected home stays visible")
	check(bar.preview.renderer.find_children("*","CollisionObject3D",true,false).all(func(b):return b.collision_layer==0 and b.collision_mask==0),"preview creates no active picking or resident collision")
	await capture("palette_preview");await ui_click(bar.apply_button);await settle();quiet()
	check(demo.state.revision==revision+1 and demo.state._undo.size()==undo+1,"native confirm commits the whole group exactly once")
	check(demo.state.houses[2]==custom and demo.state.houses.filter(func(h):return int(h.palette)==2 and not h.has("custom_colors")).size()==5,"real confirm updates five colors and preserves hand-custom home")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses==original.houses,"one native Undo restores all six homes")
	await key(KEY_Y,true);await settle();quiet();var final:Dictionary=demo.state.snapshot();var final_gpu:=gpu_signature();FileAccess.open(OUT+"/hot_gpu.json",FileAccess.WRITE).store_string(JSON.stringify(gpu_rows(),"\t"))
	# Native marquee covers every house centre; modifiers never invoke Shift removal.
	var rect:=Rect2(demo.camera.unproject_position(bar.selection.center(demo.state.houses[0])),Vector2.ZERO)
	for house:Dictionary in demo.state.houses:rect=rect.expand(demo.camera.unproject_position(bar.selection.center(house)))
	rect=rect.grow(14);await move(rect.position);await mouse_event(rect.position,true,false,true,true);await move(rect.end);await mouse_event(rect.end,false,false,true,true);await settle()
	check(bar.selected.size()==6 and demo.state.snapshot()==final,"actual Ctrl Shift marquee selects six without authoring or demolition")
	var h:Dictionary=demo.town._house_record("h6");var wall:Vector2=demo.camera.unproject_position(Vector3(float(h.origin[0])+.5,1.2,float(h.origin[1])+2.5))
	await move(wall);await mouse_event(wall,true,false,true);await mouse_event(wall,false,false,true);await settle();check(bar.selected.size()==5 and not bar.selected.has("h6"),"native Ctrl click removes one selected home")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1280,720),Vector2i(1440,900)]:
		root.size=size;await create_timer(.2).timeout;check(root.get_visible_rect().encloses(bar.panel.get_global_rect()),"batch paper fits viewport "+str(size.x));await capture("panel_"+str(size.x))
	await key(KEY_ESCAPE);await settle();check(bar.selected.is_empty() and not bar.panel.visible and demo.state.snapshot()==final,"native Esc cancels whole selection without authorship")
	# Switching tools mid-drag must release the hover guard before mouse-up.
	await move(Vector2(60,450));await mouse_event(Vector2(60,450),true,false,true,true);check(bar.selection.dragging,"actual marquee starts before tool change")
	await key(KEY_3);await mouse_event(Vector2(100,480),false,false,true,true);await settle();check(not bar.selection.dragging and not bar.blocks_hover() and demo.tool==2,"native tool change releases active marquee and world hover")
	demo.select_tool(0)
	var reader:=State.new();check(demo.state.save_city(OUT+"/batch.json").ok and reader.load_city(OUT+"/batch.json").ok,"real batch work saves and cold loads")
	await show(reader,Vector2(-23,-19),"成组外观冷读");quiet();FileAccess.open(OUT+"/cold_gpu.json",FileAccess.WRITE).store_string(JSON.stringify(gpu_rows(),"\t"));check(gpu_signature()==final_gpu,"actual GPU buffers match cold publication after group palette and Undo Redo")
	# The repaired lookup accepts both mesh color encodings; check every base
	# palette against a fresh actual build, including half-byte mixtures.
	for palette:int in [0,1,3]:
		var next:Dictionary=bar.Batch.plan(demo.state,["h1","h2"],{"kind":"palette","value":palette},false)
		demo._after_edit(bar.Batch.apply(demo.state,next),"room",false);await settle();quiet();var hot:=gpu_signature();var snapshot:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(snapshot).ok,"palette cold input "+str(palette))
		await show(cold,Vector2(-23,-19),"四配方颜色字节对照");quiet();check(gpu_signature()==hot,"every palette's actual GPU bytes match cold build "+str(palette))
		if palette==0:FileAccess.open(OUT+"/palette0_cold.json",FileAccess.WRITE).store_string(JSON.stringify(gpu_rows(),"\t"))
	var ids:Array=demo.state.houses.map(func(h):return h.id);bar.select(ids);var before_era:Dictionary=demo.state.snapshot()
	bar.stage({"kind":"era","value":"clockwork"});check(await wait_for(func():return bar.preview.ready,15000),"clockwork geometry preview finishes through original builder");check(demo.state.snapshot()==before_era,"era preview preserves full live State");await capture("clockwork_preview");bar.close()
	bar.select(ids);bar.stage({"kind":"era","value":"modern_eco"});check(await wait_for(func():return bar.preview.ready,15000),"modern geometry preview finishes through original builder");check(demo.state.snapshot()==before_era,"modern preview preserves full live State");await capture("modern_preview");await key(KEY_ESCAPE);await settle()
	bar.select(ids);await settle();var option:OptionButton=bar.options.get_node("Batch_style");await ui_click(option);var popup:=option.get_popup();check(popup.visible,"native option click opens laid-out popup")
	if OS.get_cmdline_user_args().has("--native-menu"):
		root.title="共鸣之城 · 成组菜单隔离验证";input_filter.set_process_input(false);print("NATIVE_MENU_WAIT: select 木构街屋 in actual OS popup")
		check(await wait_for(func():return bar.operation.get("kind")=="style" and bar.operation.get("value")=="timber" and not popup.visible,120000),"actual OS popup selects timber through computer use")
		input_filter.set_process_input(true)
	else:popup.hide();bar.stage({"kind":"style","value":"timber"})
	check(await wait_for(func():return bar.preview.ready,15000) and demo.state.snapshot()==before_era,"actual timber menu preview completes without State writes")
	await capture("timber_menu_preview");var previous:int=demo.state._undo.size();await ui_click(bar.apply_button);await settle();quiet()
	check(demo.state._undo.size()==previous+1 and demo.state.houses.filter(func(h):return h.get("style","")=="timber").size()==5,"native geometry confirm changes five eligible houses in one transaction")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses.all(func(h):return h.get("style","")!="timber"),"one native Undo restores all group geometry")
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("BATCH_EDIT_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if report.ok else 1)

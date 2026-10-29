extends "res://tools/check_creation_waterfront_cafes_live.gd"
func click_button(button:Button)->void:
	var at:=button.get_global_rect().get_center()
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.button_index=MOUSE_BUTTON_LEFT;event.pressed=down;root.push_input(event);await process_frame
	await settle()
func run()->void:
	OUT="res://验证记录/M84/spatial_guidance_20261029/live";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	var fixture:=TeaFixture.build();check(fixture.ok,"public waterfront cafes")
	check(fixture.city.CreationPolicy.set_preferences(fixture.city,{"guidance":true}).ok,"actual optional guidance enabled")
	await show(fixture.city,Vector2(-18,-20),"空间引导");quiet();demo.life.set_process(false)
	demo.intuitive_guidance._rebuild();check(not demo.intuitive_guidance.bubble.visible and demo.intuitive_guidance.suggested_role.is_empty(),"free guidance offers no mandatory role or purchase bubble")
	var saved:Dictionary=demo.state.snapshot();var arrays:=tea_arrays();var houses:=meshes()
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await select_house("h2");await create_timer(.6).timeout
		var inspector:Node=demo.spatial_popover.inspector
		check(inspector.business_button.text=="看功能区" and "门前已接路" in demo.spatial_popover.status.text and not "面包" in demo.spatial_popover.status.text,"actual free cafe card exposes spatial state "+str(size.x))
		await capture("free_card_"+str(size.x));await click_button(inspector.business_button)
		check(demo.ledger.visible() and "城市的四大功能区" in demo.ledger.body.text,"native spatial action opens actual L page "+str(size.x));await capture("free_ledger_"+str(size.x));await key(KEY_ESCAPE)
	check(demo.state.snapshot()==saved,"reading free guidance and cards creates no role history or reward writes")
	await select_house("h2");var inspector:Node=demo.spatial_popover.inspector;await click_button(inspector.appearance_button);await click_button(inspector.purpose_button)
	check(inspector.roles.panel.visible,"manual use remains optional inside details")
	await click_button(inspector.roles.buttons.residential);check(demo.state.houses[1].role=="residential","native optional manual role still works")
	await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();demo.life.set_process(false)
	check(demo.state.houses[1].role=="garden_cafe" and tea_arrays()==arrays and meshes()==houses,"native Undo restores manual role and exact geometry")
	var removed:Dictionary=demo.state.remove_road("r1");demo._after_edit(removed,"history");await settle();demo.life.set_process(false);demo.intuitive_guidance._rebuild()
	await select_house("h2");await create_timer(.6).timeout
	check(removed.ok and "尚未接路" in demo.spatial_popover.status.text and demo.spatial_popover.inspector.business_button.text=="到门前接路","actual disconnected card requests road instead of business prerequisites")
	await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();demo.life.set_process(false)
	var file:=FileAccess.open(OUT+"/work.json",FileAccess.WRITE);file.store_string(JSON.stringify(demo.state.snapshot(),"",true,true));file.close();var cold:=State.new()
	check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/work.json"))).ok,"isolated cold read")
	await show(cold,Vector2(-18,-20),"空间引导冷读");quiet();demo.life.set_process(false);check(tea_arrays()==arrays and meshes()==houses,"cold actual mesh publication unchanged")
	var old:=State.new();old.initialize();old.set_house_role("h1","garden_cafe");await show(old,Vector2(-10,-6),"经典经营提示");quiet();demo.life.set_process(false)
	await select_house("h1");await create_timer(.6).timeout;check(demo.spatial_popover.inspector.business_button.text!="看功能区","classic actual inspector keeps business flow");await capture("classic_card")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==voices,"actual PCM and original audio pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal continuation bytes unchanged")
	facts.elapsed_seconds=(Time.get_ticks_msec()-began)/1000.;var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FREE_SPATIAL_GUIDANCE_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

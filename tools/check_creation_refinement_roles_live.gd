extends "res://tools/check_creation_manuscript_hud_live.gd"
func click(control:Control)->void:
 var motion:=InputEventMouseMotion.new();motion.position=control.get_global_rect().get_center();motion.global_position=motion.position;root.push_input(motion);await process_frame
 await super.click(control)
func settle()->void:
 var began:=Time.get_ticks_msec()
 while demo.edit_pending() or demo._edit_ui_pending or demo.gallery.busy or demo.music._loading:
  if Time.get_ticks_msec()-began>20000:push_error("RF02 wait timeout");quit(2);return
  await process_frame
 for i in range(25):await process_frame
func key(code:Key,ctrl:bool=false)->void:
 for pressed:bool in [true,false]:
  var e:=InputEventKey.new();e.keycode=code;e.physical_keycode=code;e.pressed=pressed;e.ctrl_pressed=ctrl;root.push_input(e);await process_frame
 await settle()
func click_at(at:Vector2)->void:
 var proxy:=Control.new();proxy.position=at-Vector2.ONE;proxy.size=Vector2.ONE*2.;proxy.mouse_filter=Control.MOUSE_FILTER_IGNORE;root.add_child(proxy);await click(proxy);proxy.queue_free();await settle()
func house_click(id:String)->void:
 var h:Dictionary=demo.town._house_record(id);var at:Vector2=demo.camera.unproject_position(Vector3(h.origin[0],float(h.get("base_y",0.))+1.2,h.origin[1]));await click_at(at)
func run()->void:
 OUT="res://验证记录/RF02/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 var city:=State.new();city.initialize();await show(city,Vector2(-10,-2),"三动作与共用用途")
 var draft:Node=demo.get_meta("inspiration_draft");draft.postponed=true;draft.display()
 var pop:RefCounted=demo.spatial_popover;var inspector:Node=pop.inspector;var palette:Node=demo.get_meta("role_palette")
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.26).timeout;await settle();demo.select_tool(0);pop.open_for_house("h1");await create_timer(.25).timeout;await settle()
  check(pop.ring.action_island.get_child_count()==1 and not inspector.panel.visible and not palette.panel.visible,"one build action on selected house")
  check(not pop.style_button.is_visible_in_tree() and pop.swatches[0].is_visible_in_tree() and not pop.choir_button.is_visible_in_tree() and not pop.temperament_button.is_visible_in_tree(),"color dots stay direct while legacy knobs are absent")
  check(pop.ring.hole.size.x>=176 and pop.ring.controls().all(func(c):return not c.get_global_rect().intersects(pop.ring.house_rect)),"core stamps and build action keep selected roof clear")
  await capture("compact_roof_%d"%size.x)
  print("APPEARANCE_BEFORE ",inspector.appearance_button.get_global_rect()," ",pop.target_house_id," ",root.gui_get_hovered_control());await click(inspector.appearance_button);await settle();print("APPEARANCE_AFTER ",inspector.panel.visible," ",inspector.mode," ",pop.target_house_id);check(inspector.panel.visible and inspector.appearance.visible and pop.architecture_button.is_visible_in_tree() and not pop.choir_button.is_visible_in_tree(),"appearance action opens real style controls only")
  await capture("appearance_%d"%size.x)
  var old:Array=demo.state.houses.duplicate(true);await click(pop.swatches[2]);await settle();check(int(demo.state.houses[0].palette)==2 and demo.state.houses.slice(1)==old.slice(1),"native palette changes selected house only")
  await key(KEY_Z,true);check(demo.state.houses==old,"palette undo preserves old houses")
  check(not inspector.panel.find_child("HouseDetail_music",true,false).visible and not pop.temperament_button.is_visible_in_tree(),"ordinary music knobs remain hidden while saved APIs survive")
  old=demo.state.houses.duplicate(true);demo._after_edit(demo.state.set_house_temperament("h1","allegro"),"room",true,"h1");await settle();check(demo.state.house_temperament("h1")!="andante" and demo.state.houses.slice(1)==old.slice(1),"native musical temperament remains a real single-house transaction")
  await key(KEY_Z,true);await key(KEY_ESCAPE);check(not inspector.panel.visible,"Escape closes detail sheet")
  await click(inspector.appearance_button);await settle();await click(inspector.purpose_button);await settle();check(palette.panel.visible and not palette.batch and palette.buttons==pop.role_buttons,"single-house uses shared role controls")
  old=demo.state.houses.duplicate(true);await click(palette.buttons.workshop);await settle();check(demo.state.houses[0].role=="workshop" and demo.state.houses.slice(1)==old.slice(1),"single-house native role remains target-only")
  await key(KEY_Z,true)
  pop.close();demo.select_tool(4);demo.tactile_dock.refresh();await settle()
  var batch_button:Button=demo.tactile_dock.bubble_rows.find_child("BatchHousePurpose",true,false);await click(batch_button);await settle();check(palette.panel.visible and palette.batch,"batch tool opens same selector")
  await capture("shared_roles_%d"%size.x);await click(palette.buttons.bakery);await settle();check(palette.paint_role=="bakery" and not palette.panel.visible,"batch selection arms persistent role brush")
  old=demo.state.houses.duplicate(true)
  await house_click("h1");await house_click("h4")
  check(demo.state.houses[0].role=="bakery" and demo.town._house_record("h4").role=="bakery" and palette.paint_role=="bakery","two real model clicks paint two households")
  await key(KEY_Z,true);check(demo.town._house_record("h4").role==old[3].role and demo.state.houses[0].role=="bakery","first undo restores only last painted house")
  await key(KEY_Z,true);check(demo.state.houses==old,"second undo restores all authored houses")
  await key(KEY_ESCAPE);check(palette.paint_role.is_empty(),"Escape disarms repeated role brush")
  await house_click("h1");check(pop.target_house_id=="h1" and not inspector.panel.visible,"ordinary inspection resumes after brush cancel")
  pop.close()
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"actual grouped edit music remains unclipped")
 await finish(personal,ids)

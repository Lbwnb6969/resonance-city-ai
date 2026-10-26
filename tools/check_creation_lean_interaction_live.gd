extends "res://tools/check_creation_refinement_roles_live.gd"
const Fixture=preload("res://tests/test_city_creation_spatial_voice.gd")
func run()->void:
 OUT="res://验证记录/M53/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
 var ids:Array=[]
 for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
 var city:=Fixture.fixture();city.set_house_role("h1","bakery");city.set_house_style("h1","timber");city.add_water([Vector2(-20,-18)] as Array[Vector2],2.,"pond")
 await show(city,Vector2(-32,-22),"双印章与空间原声");demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display()
 var pop:RefCounted=demo.spatial_popover
 check(demo.town.house_roots.h1.find_child("GreekTempleMassing",true,false)==null,"preserved manual timber material keeps its actual timber massing before explicit prototype change")
 check(demo.music._house_music.h4.style=="deep" and demo.music._house_music.h4.temperament=="largo" and demo.state.temperament_speed("h4")==1.,"native worker catalog derives water voice while economics remains authored")
 check(not demo.life.district_reply_pairs().is_empty(),"real street carries automatic cross-neighborhood answer")
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.3).timeout;demo.select_tool(0);pop.open_for_house("h1");await create_timer(.6).timeout;await settle()
  check(pop.ring.action_island.get_child_count()==1 and pop.era_button.is_visible_in_tree() and pop.architecture_button.is_visible_in_tree(),"one bottom build action and two direct core stamps")
  check(not pop.style_button.is_visible_in_tree() and not pop.choir_button.is_visible_in_tree() and not pop.temperament_button.is_visible_in_tree(),"legacy material and voice knobs absent from normal interaction")
  check(pop.ring.controls().all(func(c):return not c.get_global_rect().intersects(pop.ring.house_rect)),"compact core controls preserve selected roof clearance "+str(size.x))
  check(pop.ring.controls().all(func(c):return not c.get_global_rect().intersects(pop.ring.project(pop,demo.town._house_record("h2")))),"all core islands leave adjacent real roof unobscured "+str(size.x))
  await capture("lean_roof_%d"%size.x)
  var old:Dictionary=demo.town._house_record("h1").duplicate(true);await click(pop.architecture_button);await settle();var book:Node=demo.get_meta("prototype_book")
  check(book.panel.visible and not book.buttons.townhouse.disabled,"legacy timber house can directly choose a new core prototype")
  await click(book.buttons.townhouse);await settle();check(demo.town._house_record("h1").architecture=="townhouse" and not demo.town._house_record("h1").has("style"),"native explicit prototype chooses compatible masonry")
  await key(KEY_Z,true);check(demo.town._house_record("h1")==old,"one native Undo restores prior manual material and authored house")
  pop.open_for_house("h1");await click(pop.inspector.appearance_button);await settle()
  check(pop.inspector.panel.visible and pop.inspector.purpose_button.is_visible_in_tree() and not pop.style_button.is_visible_in_tree(),"details retains single-house purpose without restoring legacy knobs")
  await click(pop.inspector.purpose_button);await settle();await click(pop.role_buttons.workshop);await settle();check(demo.town._house_record("h1").role=="workshop","secondary single-house purpose remains a real transaction")
  await key(KEY_Z,true);pop.open_for_house("h1");await click(pop.expand_button);await settle();check(pop.color_panel.is_visible_in_tree(),"always-available color detail button opens actual pickers");await capture("details_%d"%size.x)
  pop.close();await key(KEY_J);check(demo.journal.panel.visible and not demo.journal.next_button.is_visible_in_tree() and not demo.journal.next_label.is_visible_in_tree(),"J opens collection without next-task urgency")
  await capture("journal_museum_%d"%size.x);await key(KEY_ESCAPE);await key(KEY_8);check(demo.tool==2,"ordinary old district shortcut opens physical road authoring")
  demo.select_tool(7);demo.tactile_dock.refresh();check(not demo.tactile_dock.popup.visible and demo.ui_layer.get_child(0).find_child("DistrictStyle",true,false)!=null,"legacy district API/options retained without exposing abstract tool switches")
  demo.select_tool(0)
 demo.get_meta("vignette_journey").poll();await create_timer(1.1).timeout
 check(not demo.state.harmony_journey.get("active_vignette",{}).is_empty() and not demo.wish_pins.visible and not demo.intuitive_guidance.visible,"actual active letter is the only gentle objective anchor")
 await capture("single_letter_anchor")
 var snap:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(snap,"",true,true))).ok and cold.snapshot()==snap,"lean controls and earned automatic districts cold roundtrip")
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"actual spatial voice master remains audible and unclipped")
 await finish(personal,ids)

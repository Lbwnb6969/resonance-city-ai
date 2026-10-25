extends "res://tools/check_creation_manuscript_hud_live.gd"
const Stamp=preload("res://scripts/ui/city_creation_postcard_stamp.gd")
func key(code:Key)->void:
 for pressed:bool in [true,false]:
  var event:=InputEventKey.new();event.keycode=code;event.physical_keycode=code;event.pressed=pressed;root.push_input(event);await process_frame
 await settle()
func run()->void:
 OUT="res://验证记录/UI03/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 var city:=State.new();city.initialize();city.set_house_role("h1","bakery");city.set_house_role("h2","garden_cafe")
 await show(city,Vector2(-5,0),"手写在河湾");demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display()
 var book=demo.journal.scrollbook
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.25).timeout;await settle()
  await key(KEY_J);check(book.visible and book.current=="journal" and book.size.x==310.,"native J opens shared310px journal")
  await capture("journal_%d"%size.x)
  await key(KEY_L);check(book.current=="ledger" and not demo.journal.panel.visible,"native L switches shared page")
  check(not demo.ledger.body.visible and demo.ledger.family_badges.size()==4,"ledger opens with four seals and folded city record")
  var leaves:VBoxContainer=demo.ledger.paper.get_meta("workshop_leaves");var row:Control=leaves.get_child(0)
  check(leaves.get_child_count()==demo.ledger.rows.size() and not row.get_node("Detail").visible,"one compact leaf per actual workshop")
  await click(row.get_node("Capsule"));await settle();check(row.get_node("Detail").visible,"native leaf expands actual activity and stock")
  await click(row.get_node("Capsule"));await settle()
  for phase in [0,2]:demo._set_light_phase(phase);await settle();await capture("ledger_%d_phase%d"%[size.x,phase])
  await click(book.tabs.landmarks);await settle();check(book.current=="landmarks" and demo.signatures.panel.visible,"native landmark tab")
  await capture("landmarks_%d"%size.x);await key(KEY_ESCAPE);check(not book.visible,"native Escape closes shared scroll")
 # UI dirtiness: static seals should stop emitting canvas draw calls while the city continues.
 var draws:int=demo.sundial_hud.postcard.draw_count
 await create_timer(.6).timeout
 check(demo.sundial_hud.postcard.draw_count==draws,"static postcard seal has zero redundant redraws")
 var info:=Stamp.details(demo.state,"手写在河湾")
 check(info.built_eras==["pastoral"] and info.wonders.is_empty(),"postcard stamps actual built era and no unearned wonder")
 demo.state.era_unlocks.append("renaissance")
 check(Stamp.details(demo.state,"title").built_eras==["pastoral"],"new rights alone do not counterfeit era silhouette")
 demo.state.era_unlocks.erase("renaissance")
 var snapshot:Dictionary=demo.state.snapshot()
 for phase in [0,2]:
  demo._set_light_phase(phase);await settle()
  var raw:Image=await Stamp.scene_frame(demo);var art:Image=await Stamp.compose(demo,raw,demo.state,"手写在河湾");var margin:=maxi(16,roundi(raw.get_width()*.018))
  check(art.get_region(Rect2i(Vector2i.ONE*margin,raw.get_size())).get_data()==raw.get_data(),"raw postcard city pixels preserved")
  raw.save_png(OUT+"/raw_%d.png"%phase);art.save_png(OUT+"/postcard_%d.png"%phase)
 check(demo.state.snapshot()==snapshot and demo.ui_layer.visible,"private stamp viewport preserves live world and restores UI")
 demo.camera_rig.postcard_directory=OUT+"/exports";await click(demo.sundial_hud.postcard)
 check(await wait_for(func():return not demo.camera_rig.last_postcard.is_empty()),"actual postcard seal exports keepsake")
 var Earned=preload("res://tests/test_city_creation_legendary_wonders.gd")
 var earned:RefCounted=Earned.fixture();Earned.choose_crowns(earned);await settle();await show(earned,Vector2(-26,-15),"四脉的来信")
 check(Stamp.details(demo.state,"published").wonders.size()==4,"gallery really published earned fixture")
 demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display();demo.ledger.open_panel();await settle()
 check(demo.ledger.family_badges.values().all(func(label):return label.text=="奇观已亮"),"all four truly earned crown labels")
 await capture("ledger_four_earned_crowns")
 var raw:Image=await Stamp.scene_frame(demo);var art:Image=await Stamp.compose(demo,raw,demo.state,"四脉的来信");art.save_png(OUT+"/postcard_four_earned_wax.png")
 check(Stamp.details(demo.state,"earned").wonders.size()==4,"all four actual earned wax seals")
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"unclipped score during scroll and postcard")
 await finish(personal,ids)

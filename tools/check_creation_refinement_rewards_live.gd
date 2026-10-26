extends "res://tools/check_creation_refinement_roles_live.gd"
const Rewards=preload("res://scripts/world/city_creation_unified_rewards.gd")
func run()->void:
 OUT="res://验证记录/RF03/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.26).timeout
  var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city();demo.get_meta("inspiration_draft").Receipts.initialize(city);city.HarmonyJourney.add_harmony_xp(city.harmony_journey,100,74001,city.era_unlocks);await show(city,Vector2(-14,-2),"旧城权益统一收录");await settle()
  var draft:Node=demo.get_meta("inspiration_draft");draft.poll();draft.postponed=false;draft.refresh(true);await settle()
  check(draft.paper.visible and not draft.legacy_era.is_empty() and not draft.reroll_button.visible,"old earned charter offered in same card panel")
  var era:String=draft.legacy_era;var chosen:String=draft.buttons.keys()[0];var credits:int=draft.Journey.credits(demo.state.harmony_journey);var cards:Array=demo.state.harmony_journey.pending_draft.duplicate()
  await capture("legacy_unified_%d"%size.x)
  await click(draft.buttons[chosen]);await settle()
  check(chosen in demo.state.era_modifiers and era not in Rewards.pending(demo.state) and credits==draft.Journey.credits(demo.state.harmony_journey) and cards==demo.state.harmony_journey.pending_draft,"native old charter claim retains new invitation and cannot double claim")
  await key(KEY_Z,true);draft.refresh(true);await settle();check(era in Rewards.pending(demo.state),"native undo restores already-earned legacy choice")
  await key(KEY_Y,true);draft.refresh(true);await settle();check(era not in Rewards.pending(demo.state),"native redo preserves single legacy claim")
  await key(KEY_J);await create_timer(.26).timeout;check(demo.journal.panel.visible and demo.journal.score_cards.values().all(func(row):return not row.get_child(1).is_visible_in_tree()),"journal has read-only charter collection without second claim path")
  await capture("collection_%d"%size.x);await key(KEY_ESCAPE)
 # A newly unlocked era in an enrolled town never forces a second reward panel or the journal.
 var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").city();demo.get_meta("inspiration_draft").Receipts.initialize(city);Rewards.initialize(city)
 for era:String in Rewards.pending(city):Rewards.choose_legacy(city,era,str(Rewards.cards(era)[0]))
 await show(city,Vector2(-14,-2),"新纪元只解锁选择");var draft:Node=demo.get_meta("inspiration_draft");await settle()
 var old:Array=demo.state.houses.duplicate(true);var a:String=demo.state.districts[0].id;var b:String=demo.state.districts[1].id;var c:String=demo.state.districts[2].id
 demo.state.record_district_answer(a,b,"pastoral","renaissance");demo.state.record_district_answer(b,c,"renaissance","clockwork");demo._after_edit({"ok":true,"message":"新时代可建造"},"history",false);await settle()
 check(await wait_for(func():return demo.get_meta("era_ceremony").active.is_empty() and demo.get_meta("era_ceremony").pending.is_empty(),8500),"actual era ceremony ends")
 draft.poll();await settle();check(not demo.journal.scrollbook.visible and Rewards.pending(demo.state).is_empty() and demo.state.houses==old,"new-era flow does not force charter/journal or replace old houses")
 demo.state.HarmonyJourney.add_harmony_xp(demo.state.harmony_journey,100);draft.refresh(true);draft.postponed=false;draft.display();await settle()
 check(draft.legacy_era.is_empty() and draft.paper.visible and draft.reroll_button.visible,"real XP invitation remains the single new reward flow")
 var id:String=draft.buttons.keys()[0];await capture("new_harmony_flow");await click(draft.buttons[id]);await settle();check(id in demo.state.harmony_journey.traditions,"native harmony card still commits ranks and real effects")
 demo.state.HarmonyJourney.add_harmony_xp(demo.state.harmony_journey,1000);draft.refresh(true);draft.postponed=false;draft.display();await settle()
 var before:Dictionary=demo.state.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(before,"",true,true))).ok and copy.snapshot()==before,"both old and new reward flow cold-restores exactly")
 demo._message("♫ 共鸣品质 2 / 5 · 安居花舍");demo._message("♫ 邻屋收到书院送来的艺术挂毯");demo._message("☕ 2位街坊在花下喝完一盏茶。")
 var whisper:Node=demo.get_meta("reward_whisper");var count:int=whisper.records.size();await create_timer(.55).timeout
 check(draft.paper.visible and whisper.records.size()==count and whisper.originals.size()==3,"covered draft retains queued reward details instead of losing notification")
 await click(draft.paper.find_child("PostponeDraft",true,false));await settle()
 check(await wait_for(func():return whisper.records.size()==count+1 and demo.toast.is_visible_in_tree(),5000),"queued reward becomes visible after draft closes")
 check(demo.toast.is_visible_in_tree() and whisper.records.size()==count+1 and whisper.records[-1].details.size()==3 and demo.toast.text.contains("品质") and demo.toast.text.contains("送装") and demo.toast.text.contains("茶叙"),"three simultaneous life messages merge into one caption with full details")
 check(demo.state.snapshot()==before,"coalescing messages changes no earned rewards")
 await RenderingServer.frame_post_draw
 check(root.get_texture().get_image().save_png(OUT+"/one_reward_whisper.png")==OK,"actual visible reward caption image")
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"unified rewards retain unclipped actual choir")
 await finish(personal,ids)

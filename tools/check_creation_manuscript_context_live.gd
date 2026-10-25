extends "res://tools/check_creation_manuscript_hud_live.gd"
const Leaf=preload("res://scripts/ui/city_creation_draft_leaf.gd")
func run()->void:
 OUT="res://验证记录/UI02/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
 var city:=State.new();city.initialize();await show(city,Vector2(-5,0),"context")
 var draft=demo.get_meta("inspiration_draft");demo.state.HarmonyJourney.add_harmony_xp(demo.state.harmony_journey,100);draft.refresh(true);await settle()
 check(Leaf.footer({"draft_rarities":{},"receipts":{"prismatic_drought":1}})=="已连空1卷 · 三卷内必有虹彩","pity caption has no off-by-one")
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.25).timeout;await settle()
  for phase in [0,2]:
   demo._set_light_phase(phase);await settle()
   check(draft.paper.is_visible_in_tree(),"nonmodal draft visible")
   for id:String in draft.buttons:
    var button:Button=draft.buttons[id];var box:PanelContainer=button.get_parent().get_parent();var col:Control=button.get_parent()
    check(col.get_node("LeafTitle").text.length()==4 and col.get_node("LeafBrief").text.length()<=22,"four-character title and concise effect "+id)
    check(button.tooltip_text.contains(str(draft.Journey.cards()[id].text)),"complete real rule available "+id)
    check(Rect2(Vector2.ZERO,Vector2(size)).encloses(box.get_global_rect()) and box.get_global_rect().encloses(button.get_global_rect()),"leaf and native target within paper "+id)
   await capture("draft_%d_phase%d"%[size.x,phase])
 await click(draft.reroll_button);await settle()
 check(draft.Rarity.rerolls_left(demo.state.harmony_journey)==0,"native reroll consumes true saved budget")
 var id:String=draft.buttons.keys()[0];await click(draft.buttons[id]);await settle()
 check(id in demo.state.harmony_journey.traditions,"native select commits tradition")
 demo._after_edit(demo.state.undo(),"history",false);await settle();draft.refresh(true);await settle()
 check(id not in demo.state.harmony_journey.traditions and draft.Rarity.rerolls_left(demo.state.harmony_journey)==0,"undo restores choice but cannot farm reroll")
 await click(draft.paper.find_child("PostponeDraft",true,false));await settle();check(not draft.paper.visible,"native postpone continues world")
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.25).timeout;demo._set_light_phase(0);demo.spatial_popover.open_for_house("h1");await settle()
  var pop=demo.spatial_popover;var ring=pop.ring
  check(ring.hole.size.x>=176 and ring.hole.size.y>=176,"transparent roof center at least176")
  check(ring.controls().all(func(c):return not c.get_global_rect().intersects(ring.house_rect)),"all islands clear actual selected roof")
  check(not pop.status.text.contains("1.35") and not pop.status.text.contains("\n") and pop.card.find_child("RotationHint",true,false)!=null,"single status and separate rotation microhint")
  await capture("roof_%d"%size.x)
  await click(pop.role_buttons.bakery);await settle();check(demo.state.houses[0].role=="bakery","native role seal changes actual selected house")
  demo.spatial_popover.close()
 demo.spatial_popover.close()
 draft.postponed=false
 for attempt in range(8):
  if 3 in demo.state.harmony_journey.get("draft_rarities",{}).values():break
  draft.Journey.choose(demo.state,str(demo.state.harmony_journey.pending_draft[0]))
  if draft.Journey.credits(demo.state.harmony_journey)==0:draft.Journey.add_harmony_xp(demo.state.harmony_journey,draft.Journey.xp_for_next_level(int(demo.state.harmony_journey.harmony_level)))
 draft.refresh(true);await settle()
 check(3 in demo.state.harmony_journey.draft_rarities.values(),"real generated offer includes prismatic")
 await capture("draft_prismatic")
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"context UI retains unclipped choir")
 await finish(personal,ids)

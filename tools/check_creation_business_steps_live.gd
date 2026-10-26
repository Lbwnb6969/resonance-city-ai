extends "res://tools/check_creation_refinement_roles_live.gd"
const Step=preload("res://scripts/ui/city_creation_business_step.gd")
const Gait=preload("res://scripts/visual/city_creation_citizen_gait.gd")
func run()->void:
 OUT="res://验证记录/RF06/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 var city:=State.new();city.initialize();city.set_house_role("h4","garden_cafe");await show(city,Vector2(-10,-2),"真实经营下一步")
 var draft:Node=demo.get_meta("inspiration_draft");draft.postponed=true;draft.display()
 var pop:RefCounted=demo.spatial_popover
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;demo.select_tool(0);pop.open_for_house("h2");await create_timer(.65).timeout;await settle()
  var button:Button=pop.inspector.business_button
  check(button.is_visible_in_tree() and not button.tooltip_text.is_empty(),"actual house business reason/action visible "+str(size.x))
  check(pop.ring.controls().all(func(c):return not c.get_global_rect().intersects(pop.ring.house_rect)),"business action keeps real roof unobscured")
  await capture("business_%d"%size.x)
  var result:Dictionary=demo.state.set_bakery_open("h2",false);demo._after_edit(result,"room",true,"h2");await settle();pop.open_for_house("h2");await create_timer(.65).timeout
  check(Step.describe(demo,"h2").command=="open" and button.text=="恢复开工","paused production is first reason ahead of optional debut")
  await click(button);await settle();check(demo.state.bakery_status("h2").open,"real button resumes actual bakery")
  await key(KEY_Z,true);check(not demo.state.bakery_status("h2").open,"native Undo restores paused production")
  await key(KEY_Y,true);check(demo.state.bakery_status("h2").open,"native Redo restores attended production permission")
 pop.close();demo.ledger.open_panel();await settle()
 var leaves:Control=demo.ledger.paper.get_meta("workshop_leaves");var action:Button=leaves.get_node("Workshop_h4/NextBusinessStep")
 check(action.is_visible_in_tree() and action.tooltip_text.contains("买过面包"),"ledger uses same actual tea qualification reason")
 await capture("ledger_action");await click(action);await settle();check(not demo.ledger.visible() and demo.tool==0 and demo.focus.x==float(demo.town._house_record("h2").origin[0]),"ledger button closes sheet and locates real bread provider")
 var reached:=false
 for tick in range(1600):
  demo.life._process(.05)
  if demo.life.cafe_status("h4").phase=="tea":reached=true;break
 check(reached,"real purchased bread and walked guests reach tea without forged visit state")
 var saved:Dictionary=demo.state.snapshot();var checkpoint:Dictionary=demo.life.checkpoint()
 demo.focus=Vector3(-9,.2,-2);demo.zoom=10.;demo.pitch=.35;demo._update_camera();demo.ui_layer.hide()
 Gait.update(demo.life);await capture("real_tea_and_patchy_meadow")
 var seated:Array=demo.life.residents.filter(func(r):return r.get("cafe_visit",{}).get("phase","")=="seated")
 check(seated.size()>=2 and seated.all(func(r):return r.node.get_meta("visible_activity","")=="tea_conversation"),"seated conversation only on actual occupied seats")
 check(demo.state.snapshot()==saved and demo.life.checkpoint()==checkpoint,"visual poses do not award production or advance saved visits")
 var poses:Array=[]
 for r:Dictionary in seated:poses.append(r.node.get_child(0).get_child(0).get_blend_shape_value(4))
 check(poses.size()>=2 and not is_equal_approx(float(poses[0]),float(poses[1])),"actual tea guests alternate sip and listening phases")
 var baker:Dictionary=demo.life.bakery.workers[0]
 for tick in range(2000):
  if baker.phase=="baking":break
  demo.life._process(.05)
 demo.focus=baker.node.position;demo.zoom=7.;demo._update_camera();Gait.update(demo.life)
 check(baker.phase=="baking" and baker.node.get_meta("visible_activity","")=="kneading","visible baker kneads only after actual arrival at oven");await capture("actual_baker_kneading")
 var craft:=State.new();craft.initialize();craft.set_house_role("h2","workshop");await show(craft,Vector2(-10,-2),"真实匠人开工");demo.ui_layer.hide()
 var artisan:Dictionary=demo.life.workshop.workers[0]
 for tick in range(2000):
  if artisan.phase=="crafting":break
  demo.life._process(.05)
 demo.focus=artisan.node.position;demo.zoom=7.;demo._update_camera();Gait.update(demo.life)
 check(artisan.phase=="crafting" and artisan.node.get_meta("visible_activity","")=="crafting","visible artisan works only after actual street arrival");await capture("actual_artisan_crafting")
 var cafe_edit:Dictionary=demo.state.set_house_role("h4","garden_cafe");demo._after_edit(cafe_edit,"room",true,"h4");await settle();demo.ui_layer.show();demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display()
 check(Step.describe(demo,"h4").command=="bakery_role","no bakery offers actual purpose assignment rather than default house creation")
 Step.act(demo,"h4");await settle();check(demo.tool==4 and demo.get_meta("role_palette").paint_role=="bakery","missing provider action arms the existing bakery purpose brush")
 var home:Dictionary=demo.town._house_record("h1");demo.focus=Vector3(home.origin[0],.8,home.origin[1]);demo.zoom=12.;demo._update_camera();await settle();await house_click("h1")
 check(demo.town._house_record("h1").role=="bakery","native model click assigns the requested missing provider")
 await key(KEY_Z,true);check(demo.town._house_record("h1").role=="residential","missing-provider assignment remains undoable");await key(KEY_ESCAPE)
 var roads:Array=demo.state.roads.duplicate(true)
 var removed:Dictionary={}
 for road:Dictionary in roads:removed=demo.state.remove_road(str(road.id))
 demo._after_edit(removed,"road",true);await settle();check(Step.describe(demo,"h2").tool==2,"missing real street takes priority over worker and landscape")
 Step.act(demo,"h2");check(demo.tool==2,"same actionable reason activates real road tool")
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"business and life refinement retains healthy actual master")
 await finish(personal,ids)

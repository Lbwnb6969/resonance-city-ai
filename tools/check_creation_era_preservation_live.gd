extends "res://tools/check_creation_manuscript_hud_live.gd"
func run()->void:
 OUT="res://验证记录/UI04/unlock_preserved"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1024,768);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").city();await show(city,Vector2(-15,-8),"新旧同在的河湾")
 demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display();await click(demo.tool_buttons[0]);await settle()
 var button:Button=demo.tactile_dock.bubble_rows.find_child("NewHouseEra_modern_eco",true,false);check(button.disabled,"modern build seal starts locked in real current work")
 var houses:Array=demo.state.houses.duplicate(true);var fingerprints:Dictionary=demo.town.house_fingerprints.duplicate();var roots:Dictionary={}
 for id:String in demo.town.house_roots:roots[id]=demo.town.house_roots[id].get_instance_id()
 await capture("before_actual_unlock")
 var a:String=demo.state.districts[0].id;var b:String=demo.state.districts[1].id;var c:String=demo.state.districts[2].id
 check(demo.state.record_district_answer(a,b,"pastoral","renaissance") and demo.state.record_district_answer(b,c,"renaissance","clockwork"),"actual three-era district replies earn modern rights")
 demo._after_edit({"ok":true,"message":"新时代可选，旧屋留存"},"history",false);await settle()
 check("modern_eco" in demo.state.era_unlocks and demo.state.houses==houses,"native unlock preserves every old authored house")
 check(demo.town.house_fingerprints==fingerprints,"all old visual geometry fingerprints unchanged")
 check(roots.keys().all(func(id):return demo.town.house_roots[id].get_instance_id()==roots[id]),"all old rendered mesh owners retained")
 button=demo.tactile_dock.bubble_rows.find_child("NewHouseEra_modern_eco",true,false);check(not button.disabled,"open palette refreshes rights without closing or reloading")
 check(await wait_for(func():return demo.get_meta("era_ceremony").active.is_empty() and demo.get_meta("era_ceremony").pending.is_empty(),8500),"real ceremony finishes normally")
 demo.journal.scrollbook.close_all();await settle();await capture("after_actual_unlock")
 facts.house_count=houses.size();facts.geometry_retained=roots.size();facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"actual unlock retains continuous unclipped choir")
 await finish(personal,ids)

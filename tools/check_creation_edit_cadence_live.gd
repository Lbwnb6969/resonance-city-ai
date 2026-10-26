extends "res://tools/check_creation_refinement_roles_live.gd"
var operations:Array=[]
var frames:Array=[]
var watching:=false
var previous:=0
func _sample()->void:
 var now:=Time.get_ticks_usec()
 if watching and previous>0:frames.append((now-previous)/1000.)
 previous=now
func begin()->int:
 frames.clear();watching=true;previous=Time.get_ticks_usec();return previous
func end(label:String,started:int)->void:
 await settle();watching=false;frames.sort()
 operations.append({"label":label,"latency_ms":(Time.get_ticks_usec()-started)/1000.,"max_frame_ms":frames[-1] if not frames.is_empty() else 0.,"p95_ms":frames[int(frames.size()*.95)] if not frames.is_empty() else 0.,"budget":demo.edit_budget_report().duplicate(true)})
 print("EDIT_CADENCE_OPERATION ",JSON.stringify(operations[-1]))
func history_key(code:Key,count:int)->void:
 for i in range(count):
  for down:bool in [true,false]:
   var event:=InputEventKey.new();event.keycode=code;event.physical_keycode=code;event.ctrl_pressed=true;event.pressed=down;root.push_input(event);await process_frame
func run()->void:
 OUT="res://验证记录/RF08/before"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100;process_frame.connect(_sample)
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
 var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/经营河湾样例.json"))).ok,"original28house fixture validates")
 var began:=begin();await show(city,Vector2(-1,-9),"编辑响应");await end("cold28",began)
 demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display();demo.select_tool(0)
 var base:Array=demo.state.houses.duplicate(true);var initial:Dictionary=demo.state.snapshot()
 began=begin();var at:=Vector2(29,25);var height:float=demo.state.ground_height(at)
 var raised:Dictionary=demo.state.add_terrain_stroke([at] as Array[Vector2],"raise",2.5,.8);demo._after_edit(raised,"terrain");await end("terrain",began)
 await physics_frame;var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,15,at.y),Vector3(at.x,-5,at.y),2))
 check(raised.ok and demo.state.ground_height(at)>height and not hit.is_empty() and absf(float(hit.position.y)-demo.state.ground_height(at))<.003,"real sculpt height and published collider agree")
 began=begin();await history_key(KEY_Z,1);await end("terrain_undo",began);check(demo.state.terrain_strokes==initial.terrain_strokes,"native terrain Undo exact")
 began=begin()
 for i in range(4):
  var edit:Dictionary=demo.state.add_house(Vector2(24+i*4.,-27));check(edit.ok,"public rapid house "+str(i));demo._after_edit(edit,"room",true,str(edit.house_id))
 await end("four_rapid_houses",began);check(demo.state.houses.size()==base.size()+4 and demo.town.house_roots.size()==demo.state.houses.size(),"latest generation publishes all four rapid additions")
 began=begin();await history_key(KEY_Z,4);await end("four_native_undo",began);check(demo.state.houses==base,"four rapid native Undo restore original houses")
 began=begin();await history_key(KEY_Y,4);await end("four_native_redo",began);check(demo.state.houses.size()==base.size()+4 and demo.town.house_roots.size()==demo.state.houses.size(),"four rapid native Redo restore final generation")
 var snap:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(snap,"",true,true))).ok and cold.snapshot()==snap,"full edited city cold identity")
 facts.operations=operations;facts.recording={"deferred_by_user":true};demo.focus=Vector3(30,.6,-27);demo.zoom=20.;demo._update_camera();await capture("rapid_final_generation")
 FileAccess.open(OUT+"/edit_cadence.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"operations":operations},"\t"));await finish(personal,ids)

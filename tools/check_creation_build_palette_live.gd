extends "res://tools/check_creation_manuscript_hud_live.gd"
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func key(code:Key,ctrl:bool=false)->void:
 for pressed:bool in [true,false]:
  var e:=InputEventKey.new();e.keycode=code;e.physical_keycode=code;e.pressed=pressed;e.ctrl_pressed=ctrl;root.push_input(e);await process_frame
 await settle()
func move(at:Vector2)->void:
 var e:=InputEventMouseMotion.new();e.position=at;e.global_position=at;root.push_input(e);await settle()
func cold()->void:
 var snapshot:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(OUT+"/native_world.json"));var expected:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(OUT+"/expected.json"));var city:=State.new()
 var restored:Dictionary=city.restore(snapshot)
 var canonical:Dictionary=JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))
 check(restored.ok and canonical==snapshot,"different process restores complete actual native world, with JSON numeric types normalized")
 check(OS.get_process_id()!=int(expected.pid),"cold restore runs in a different process")
 for row:Dictionary in expected.new_houses:
  var house:Dictionary=city.houses[city._house_index(str(row.id))]
  check(city.house_era(house)==row.era and house.get("architecture")==row.prototype,"different process retains selected geometry "+str(row.id))
 check(not city.has_meta("new_house_brush"),"transient brush omitted from save")
 FileAccess.open(OUT+"/cold_report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"pid":OS.get_process_id()},"\t"));print("BUILD_PALETTE_COLD ",checks," ",failures);quit(0 if failures.is_empty() else 1)
func run()->void:
 OUT="res://验证记录/UI04/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 if "--verify-cold" in OS.get_cmdline_user_args():await cold();return
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 var first:=State.new();first.initialize();await show(first,Vector2(-5,0),"locked_palette")
 await click(demo.tool_buttons[0]);await settle()
 var era:Button=demo.tactile_dock.bubble_rows.find_child("NewHouseEra_pastoral",true,false)
 check(era.is_visible_in_tree() and not era.disabled and demo.tactile_dock.bubble_rows.find_child("NewHouseEra_renaissance",true,false).disabled and demo.tactile_dock.bubble_rows.find_child("NewHouseEra_clockwork",true,false).disabled and demo.tactile_dock.bubble_rows.find_child("NewHouseEra_modern_eco",true,false).disabled,"native build entry exposes actual locked era rights")
 var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city();await show(city,Vector2(-23,-15),"unlocked_palette")
 demo.zoom=36.;demo._update_camera();demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display();await settle()
 if not demo.tactile_dock.house_options:await click(demo.tool_buttons[0]);await settle()
 var built:Array=[]
 for index in ([] if "--old-house-only" in OS.get_cmdline_user_args() else range(4)):
  if index==2:root.size=Vector2i(1024,768);await create_timer(.25).timeout;await settle()
  era=demo.tactile_dock.bubble_rows.find_child("NewHouseEra_"+demo.state.Eras.IDS[index],true,false)
  await click(era);await settle()
  var prototype:Button=demo.tactile_dock.bubble_rows.find_child("NewHousePrototype",true,false)
  for turn in range(4 if index==1 else 3 if index==2 else 1):await click(prototype);await settle()
  var selection:=Brush.current(demo.state);facts["choice"+str(index)]=selection.duplicate();check(selection.era==demo.state.Eras.IDS[index] and selection.prototype==Brush.prototypes(str(selection.era))[3 if index==1 else 2 if index==2 else 0],"native seals choose actual era and prototype "+str(index))
  var before:Array=demo.state.houses.duplicate(true);var pointer:=Vector2.ZERO
  for y in range(150,root.size.y-240,55):
   for x in range(370,root.size.x-60,55):
    var at:=Vector2(x,y)
    if not demo.state.validate_add_house(demo._ground_at(at)).ok:continue
    await move(at)
    if demo.candidate.has("new_house") and demo.candidate.get("valid",false) and root.gui_get_hovered_control()==null:pointer=at;break
   if pointer!=Vector2.ZERO:break
  check(pointer!=Vector2.ZERO,"actual clear build location "+str(index));facts["pointer"+str(index)]={"at":pointer,"candidate":demo.candidate.duplicate(true)};await move(pointer)
  for pressed:bool in [true,false]:
   var e:=InputEventMouseButton.new();e.position=pointer;e.global_position=pointer;e.button_index=MOUSE_BUTTON_LEFT;e.pressed=pressed;root.push_input(e);await process_frame
  await settle();check(demo.state.houses.size()==before.size()+1,"native world click builds new house "+str(index))
  var house:Dictionary=demo.state.houses[-1];var id:String=house.id
  check(demo.state.house_era(house)==selection.era and house.get("architecture")==selection.prototype and demo.state.houses.slice(0,-1)==before,"native selected geometry only changes new house "+str(index))
  check(demo.town.house_roots.has(id) and demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false).size()>0,"new selected building has actual rendered mesh "+str(index))
  check(not demo.get_meta("vignette_journey").paper.visible,"letter invitation yields to open build palette")
  built.append({"id":id,"era":selection.era,"prototype":selection.prototype});await capture("new_era_%d"%index)
  var old_focus:Vector3=demo.focus;var old_zoom:float=demo.zoom;demo.focus=Vector3(house.origin[0],.8,house.origin[1]);demo.zoom=12.;demo._update_camera();await settle();await capture("new_era_%d_close"%index);demo.focus=old_focus;demo.zoom=old_zoom;demo._update_camera();await settle()
  await key(KEY_Z,true);check(demo.state.houses==before,"native undo removes full authored house")
  await key(KEY_Y,true);check(demo.state.houses[-1].id==id and demo.state.houses[-1].get("architecture")==selection.prototype,"native redo preserves selected prototype")
 demo.tactile_dock.house_options=false;demo.tactile_dock.refresh()
 if "--old-house-only" in OS.get_cmdline_user_args():
  var choice:Dictionary=demo.state.set_house_architecture("h1","portico");check(choice.ok,"old-house fixture uses actual selected classical portico");demo._after_edit(choice,"room",false);await settle()
 demo.spatial_popover.open_for_house("h1");await settle()
 var old:Array=demo.state.houses.duplicate(true);var oldera:String=demo.state.house_era(old[0]);await click(demo.spatial_popover.era_button);await settle()
 check(demo.state.house_era(demo.state.houses[0])!=oldera and demo.state.houses.slice(1)==old.slice(1),"native old-house era seal changes selected house only")
 var changed:Array=demo.state.houses.duplicate(true)
 await key(KEY_Z,true);check(demo.state.houses==old,"native old-house undo restores all houses exactly")
 await key(KEY_Y,true);check(demo.state.houses==changed and demo.state.houses.slice(1)==old.slice(1),"native old-house redo restores only selected era")
 await capture("selected_old_house_only")
 if "--old-house-only" in OS.get_cmdline_user_args():
  var compatible:Array=demo.state.houses.duplicate(true);await click(demo.spatial_popover.era_button);await settle();var incompatible:Array=demo.state.houses.duplicate(true)
  check(not incompatible[0].has("architecture") and incompatible.slice(1)==compatible.slice(1),"native incompatible-era change clears prototype only in selected old house")
  await key(KEY_Z,true);check(demo.state.houses==compatible,"native undo restores selected era and its compatible prototype together")
  await key(KEY_Y,true);check(demo.state.houses==incompatible,"native redo restores aligned selected architecture together")
  await capture("selected_old_house_incompatible")
 FileAccess.open(OUT+"/native_world.json",FileAccess.WRITE).store_string(JSON.stringify(demo.state.snapshot(),"",true,true))
 FileAccess.open(OUT+"/expected.json",FileAccess.WRITE).store_string(JSON.stringify({"pid":OS.get_process_id(),"new_houses":built},"\t"))
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"native authoring retains unclipped choir")
 await finish(personal,ids)

extends "res://tools/check_creation_refinement_roles_live.gd"
const Test=preload("res://tests/test_city_creation_street_rhythm.gd")
const Rhythm=preload("res://scripts/visual/city_creation_street_rhythm.gd")
func run()->void:
 OUT="res://验证记录/RF05/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city()
 for h:Dictionary in city.houses.duplicate(true):check(city.remove_house(str(h.id)).ok,"isolate earned-era architecture fixture")
 var buildings:Array=[]
 for at:Vector2 in [Vector2(-26,-16),Vector2(-12,-16),Vector2(-26,-3),Vector2(-12,-3)]:buildings.append(str(city.add_house(at).house_id))
 for id:String in buildings:
  city.add_cell(id,1,0,0);city.add_cell(id,2,0,0);city.add_cell(id,1,0,1);city.add_cell(id,1,1,0,"terrace")
 for i in range(4):
  city.set_house_era(buildings[i],city.Eras.IDS[i]);city.set_house_architecture(buildings[i],["townhouse","townhouse","iron_conservatory","chalet"][i])
 city.add_road([Vector2(-30,-12.5),Vector2(-5,-12.5)] as Array[Vector2]);city.add_road([Vector2(-30,.5),Vector2(-5,.5)] as Array[Vector2])
 var saved:Array=city.houses.duplicate(true);await show(city,Vector2(-17,-8),"连排端头与院落节奏");demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display();demo.ui_layer.hide()
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.26).timeout;await settle()
  for phase in [0,2]:
   demo._set_light_phase(phase)
   for i in range(4):
    var id:String=buildings[i];var h:Dictionary=demo.town._house_record(id);demo.focus=Vector3(h.origin[0]+1.5,1.,h.origin[1]+.6);demo.zoom=11.;demo.pitch=.50;demo.yaw=.64;demo._update_camera();await settle()
    var model:Node3D=demo.town.house_roots[id];var details:Array=model.find_children("StreetRhythm*","Node3D",true,false)
    check(not details.is_empty(),"native real street-rhythm nodes "+str(i)+str(phase)+str(size.x))
    await capture("era%d_%d_phase%d"%[i,size.x,phase]);await physics_frame
    var at:=Vector3(h.origin[0]+.45,float(h.get("base_y",0.)),h.origin[1]);var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*15.,at+Vector3.UP*.5,1))
    check(not hit.is_empty() and hit.collider.get_meta("house_id","")==id,"native actual architecture roof collision identity")
 check(demo.state.houses==saved,"all screenshots and derived facades preserve actual authored forms")
 var target:String=buildings[0];var h:Dictionary=demo.town._house_record(target);var top_before:Dictionary=Rhythm.profile(demo.town.building_context,h,h.cells[0],Vector2i.UP)
 var result:Dictionary=demo.state.add_cell(target,0,0,1);check(result.ok,"actual supported terminal upper room")
 demo._after_edit(result,"room",true,target);await settle();h=demo.town._house_record(target)
 check(top_before.top and not Rhythm.profile(demo.town.building_context,h,h.cells[0],Vector2i.UP).top,"upper-room edit invalidates old terminal cornice dependency")
 await key(KEY_Z,true);check(demo.state.houses==saved,"native undo restores exact authored street")
 var turned:Dictionary=demo.state.rotate_house(target,PI*.5);check(turned.ok,"actual road-safe quarter turn");demo._after_edit(turned,"room",true,target);await settle()
 var snap:Dictionary=demo.state.snapshot();var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(snap,"",true,true))).ok and copy.snapshot()==snap,"actual rotated mixed-era street cold restore")
 demo.focus=Vector3(-17,1,-8);demo.zoom=34.;demo.pitch=.75;demo._set_light_phase(0);demo._update_camera();await settle();await capture("mixed_street_after_rotation")
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"street geometry changes retain unclipped actual choir")
 await finish(personal,ids)

extends "res://tools/check_creation_refinement_roles_live.gd"
const Stamp=preload("res://scripts/ui/city_creation_postcard_stamp.gd")
func option(name:String,index:int)->void:
 var button:Button=demo.tactile_dock.button_for(name,index);check(button!=null and button.is_visible_in_tree(),"native dock option present "+name+str(index));await click(button);await settle()
func run()->void:
 OUT="res://验证记录/RF04/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city();await show(city,Vector2(-15,-5),"单一界面与轻量适配")
 var draft:Node=demo.get_meta("inspiration_draft");draft.postponed=true;draft.display()
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.26).timeout;await settle()
  demo.select_tool(2);await settle();await option("RoadMode",1);await option("RoadStyle",2);await option("RoadSize",2)
  check(demo.road_straight and demo.road_style=="avenue" and demo.road_size==1,"actual road state follows native dock through adapter")
  await key(KEY_R);check(not demo.road_straight and demo.road_panel.find_child("RoadMode",true,false).selected==0,"keyboard road toggle shares same adapter")
  await capture("road_%d"%size.x)
  demo.select_tool(5);await settle();await option("Species",1);await option("PlantingMode",1);await option("BrushSize",2)
  check(demo.vegetation_kind==demo.State.GardenSpecies.IDS[1] and not demo.vegetation_single and is_equal_approx(demo.vegetation_radius,2.4),"native vegetation authoring state preserved")
  demo.select_tool(6);await settle();await option("WaterMode",1);await option("WaterWidth",0)
  check(demo.water_kind=="channel" and is_equal_approx(demo.water_width,1.8),"native water state preserved")
  demo.select_tool(3);await settle();await option("RemovalMode",1);check(demo.remove_whole,"native whole-house removal option preserved")
  demo.select_tool(7);await settle();await option("DistrictWidth",2);await option("DistrictStyle",1);await option("DistrictAdaptive",0);await option("DistrictLinkMode",0)
  check(is_equal_approx(demo.district_width,8.8) and demo.district_style==demo.DISTRICT_STYLES[1] and demo.district_adaptive and demo.district_link_mode,"native district adapters preserve all authoring switches")
  await option("DistrictAdaptive",0);await option("DistrictLinkMode",0)
  await capture("district_%d"%size.x)
  demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await create_timer(.25).timeout;await settle();await click(demo.spatial_popover.inspector.appearance_button);await settle()
  var old:Array=demo.state.houses.duplicate(true);await click(demo.spatial_popover.swatches[1]);await settle();check(demo.state.houses[0].palette==1 and demo.state.houses.slice(1)==old.slice(1),"current inspector stays sole visible house editor")
  await key(KEY_Z,true);check(demo.state.houses==old,"current appearance undo preserved")
  check(not demo.place_panel.is_visible_in_tree() and demo.place_panel.find_child("PlaceScroll",true,false)!=null and demo.house_style_picker.item_count==4 and demo.house_era_picker.item_count==5,"old public house API retained without visible drawer")
  check(demo.ui_layer.get_child(0).get_node("LegacyActions").get_child_count()==1,"only compatibility Save remains in old actions")
  demo.spatial_popover.close()
 var raw:Image=await Stamp.scene_frame(demo);var art:Image=await Stamp.compose(demo,raw,demo.state,"原始河湾保持");var margin:=maxi(16,roundi(raw.get_width()*.018))
 check(art.get_region(Rect2i(Vector2i.ONE*margin,raw.get_size())).get_data()==raw.get_data(),"single postcard renderer preserves exact original city pixels")
 art.save_png(OUT+"/postcard.png")
 facts.ui_node_count=demo.ui_layer.find_children("*","Control",true,false).size();facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"authoring adapters preserve unclipped choir")
 await finish(personal,ids)

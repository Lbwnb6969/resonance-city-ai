extends "res://tools/check_creation_manuscript_hud_live.gd"
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func key(code:Key,ctrl:bool=false)->void:
 for pressed:bool in [true,false]:
  var e:=InputEventKey.new();e.keycode=code;e.physical_keycode=code;e.pressed=pressed;e.ctrl_pressed=ctrl;root.push_input(e);await process_frame
 await settle()
func move(at:Vector2)->void:
 var e:=InputEventMouseMotion.new();e.position=at;e.global_position=at;root.push_input(e);await settle()
func run()->void:
 OUT="res://验证记录/RF01/live"
 for arg:String in OS.get_cmdline_user_args():
  if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
 DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
 var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
 demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
 var ids:Array=[]
 for p:AudioStreamPlayer in demo.music._players.values():ids.append(p.get_instance_id())
 var city:RefCounted=preload("res://tools/fixtures/city_creation_modern_fixture.gd").earned_city();city.set_house_architecture("h1","portico");city.set_house_colors("h1",Color("e8bd7d"),Color("326477"));await show(city,Vector2(-15,-5),"原型册与沿用外观")
 demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").display()
 for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
  root.size=size;await create_timer(.26).timeout;await settle()
  demo.spatial_popover.open_for_house("h1");await create_timer(.25).timeout;await settle()
  await click(demo.spatial_popover.inspector.appearance_button);await settle()
  var before:Dictionary=demo.state.snapshot();await click(demo.spatial_popover.architecture_button);await settle()
  var book:Node=demo.get_meta("prototype_book")
  check(book.panel.visible and demo.state.snapshot()==before,"native catalog opening does not mutate authoring")
  check(Rect2(Vector2.ZERO,Vector2(size)).encloses(book.panel.get_global_rect()),"catalog within actual viewport "+str(size.x))
  check(book.buttons.oriel.disabled and book.buttons.peristyle.disabled and not book.buttons.rotunda.disabled,"catalog eligibility reflects actual single-room shape")
  var available:Control=book.buttons.rotunda
  await move(available.get_global_rect().get_center());check(book.preview.text.contains("圆厅"),"hover describes selected silhouette")
  await capture("selected_catalog_%d"%size.x)
  await click(available);await settle();check(demo.state.houses[0].architecture=="rotunda" and not book.panel.visible,"native direct choice commits actual selected prototype")
  await key(KEY_Z,true);check(demo.state.houses[0].architecture=="portico","native undo restores previous prototype")
  await key(KEY_Y,true);check(demo.state.houses[0].architecture=="rotunda","native redo restores direct choice")
  await key(KEY_Z,true)
  var sample:Button=demo.spatial_popover.inspector.panel.find_child("SampleHouseAppearance",true,false)
  before=demo.state.snapshot();await click(sample);await settle()
  check(Brush.current(demo.state).appearance.custom_colors==demo.state.houses[0].custom_colors and demo.state.snapshot()==before and demo.tactile_dock.popup.visible,"native sample adopts appearance without editing source")
  var entry:Button=demo.tactile_dock.bubble_rows.find_child("NewHousePrototype",true,false);await click(entry);await settle()
  check(book.panel.visible and book.buttons.portico.button_pressed,"new-house catalog shows sampled prototype")
  await capture("brush_catalog_%d"%size.x);await click(book.buttons.townhouse);await settle()
  check(Brush.current(demo.state).prototype=="townhouse" and Brush.current(demo.state).appearance.custom_colors==demo.state.houses[0].custom_colors,"direct new prototype retains sampled colors")
  var pointer:=Vector2.ZERO;var old:Array=demo.state.houses.duplicate(true)
  for y in range(160,size.y-300,40):
   for x in range(150,size.x-80,50):
    var at:=Vector2(x,y)
    if not demo.state.validate_add_house(demo._ground_at(at)).ok:continue
    await move(at)
    if demo.candidate.has("new_house") and demo.candidate.get("valid",false) and root.gui_get_hovered_control()==null:pointer=at;break
   if pointer!=Vector2.ZERO:break
  check(pointer!=Vector2.ZERO,"clear native ground build target")
  var proxy:=Control.new();proxy.position=pointer-Vector2(1,1);proxy.size=Vector2(2,2);proxy.mouse_filter=Control.MOUSE_FILTER_IGNORE;root.add_child(proxy);await click(proxy);proxy.queue_free();await settle()
  check(demo.state.houses.size()==old.size()+1 and demo.state.houses[-1].architecture=="townhouse" and demo.state.houses[-1].custom_colors==demo.state.houses[0].custom_colors and demo.state.houses.slice(0,-1)==old,"actual world click builds sampled colors and direct prototype without changing old houses")
  await key(KEY_Z,true);check(demo.state.houses==old,"native undo removes entire sampled construction")
  await click(entry);await settle();await key(KEY_ESCAPE);check(not book.panel.visible,"Escape closes catalog")
 var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot(),"",true,true))).ok,"actual edited city cold validation")
 facts.recording=await Probe.record(OUT+"/Master.wav",4.3);check(facts.recording.ok,"catalog input keeps real audio unclipped")
 await finish(personal,ids)

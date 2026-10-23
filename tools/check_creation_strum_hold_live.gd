extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const State=preload("res://scripts/world/city_creation_state.gd")
var demo
var output:="res://验证记录/临时拨奏_2026-10-22/native"
var checks:=0
var failures:Array[String]=[]
var notes:Array=[]
var sampling:=false
var frames:Array[float]=[]
func _process(delta:float)->bool:
	if sampling:frames.append(delta*1000.)
	return false
func _initialize():run.call_deferred()
func check(ok:bool,label:String):
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle():
	while demo.edit_pending() or demo._edit_ui_pending or demo.music._loading:await process_frame
	for i in range(10):await process_frame
func key(code:int,pressed:bool,echo:bool=false,unicode:int=0):
	var event:=InputEventKey.new();event.keycode=code;event.pressed=pressed;event.echo=echo;event.unicode=unicode;root.push_input(event);await process_frame
func mouse(button:int,pressed:bool,at:Vector2):
	var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.button_index=button;event.pressed=pressed;root.push_input(event);await process_frame
func hover(at:Vector2):
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func click(button:Control):
	var at:=button.get_global_rect().get_center();await hover(at)
	await mouse(MOUSE_BUTTON_LEFT,true,at);await mouse(MOUSE_BUTTON_LEFT,false,at)
func point(at:Vector2,y:float=0.)->Vector2:return demo.camera.unproject_position(Vector3(at.x,y,at.y))
func photo(label:String):
	var prior:=sampling;sampling=false
	demo.toast.hide();demo.toast_time=0.;await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(output+"/"+label+".png")
	await process_frame;await process_frame;sampling=prior
func roof(label:String):
	var previous:int=demo.music._pluck_serial
	await hover(point(Vector2(-28,-20),1.9))
	var deadline:=Time.get_ticks_msec()+1200
	while demo.music._pluck_serial==previous and Time.get_ticks_msec()<deadline:await process_frame
	var report:Dictionary=demo.music.house_pluck_report()
	check(demo.music._pluck_serial>previous and report.get("house_id","")=="h1","held gesture reaches the real quantized roof voice: "+label)
	notes.append({"label":label,"clock":demo.music._playback_clock(),"house":report,"tool":demo.tool})
	await photo(label)
func nature(kind:String,at:Vector2,label:String):
	var previous:int=int(demo.music.get_meta("world_pluck",{}).get("serial",-1))
	await hover(point(at))
	var deadline:=Time.get_ticks_msec()+1200
	while int(demo.music.get_meta("world_pluck",{}).get("serial",-1))==previous and Time.get_ticks_msec()<deadline:await process_frame
	var report:Dictionary=demo.music.get_meta("world_pluck",{})
	check(int(report.get("serial",-1))!=previous and report.get("kind","")==kind,"held side key plays actual modal "+kind+" through the original world queue")
	notes.append({"label":label,"world":report,"tool":demo.tool});await photo(label)
func run():
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=output+"/works_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false);await settle()
	for at:Vector2 in [Vector2(-28,-20),Vector2(-24.4,-20),Vector2(-20.8,-20)]:check(demo.state.add_house(at).ok,"public choir placement")
	check(demo.state.place_plant(Vector2(-26,-14),"golden_tree").ok and demo.state.add_water([Vector2(-18,-14)] as Array[Vector2],3.2,"pond").ok,"actual tree and pond placement")
	demo._after_edit({"ok":true,"message":"隔离临时拨奏"},"history");await settle();demo.life.set_process(false)
	demo.focus=Vector3(-23,.7,-17);demo.zoom=24.;demo.pitch=.95;demo._update_camera();demo.select_tool(2)
	for i in range(5):await process_frame
	await click(demo.tactile_dock.button_for("RoadStyle",1));await click(demo.tactile_dock.button_for("RoadMode",1));await click(demo.tactile_dock.button_for("RoadSize",2))
	check([demo.tool,demo.road_style,demo.road_straight,demo.road_size]==[2,"promenade",true,1],"actual road seals select straight standard-width lamp street before the held gesture")
	var options:Array=[demo.tool,demo.road_style,demo.road_straight,demo.road_size]
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	var saved:Dictionary=demo.state.snapshot();var depth:int=demo.state._undo.size();var voices:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():voices.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.music._effects:voices.append(player.get_instance_id())
	var clock:float=demo.music._playback_clock()
	sampling=true
	await hover(Vector2(root.size.x-40,root.size.y*.4));await key(KEY_P,true)
	check(demo.strum_hold.active() and demo.tool==2,"actual P press temporarily enables world play without changing the road tool")
	await roof("1440_P_屋顶")
	var empty:=point(Vector2(-31,-13));await hover(empty);await mouse(MOUSE_BUTTON_LEFT,true,empty);await mouse(MOUSE_BUTTON_LEFT,false,empty)
	check(not demo.road_drawing and demo.state.snapshot()==saved and demo.state._undo.size()==depth,"actual world clicks under held P create no road or authored edit")
	await key(KEY_P,false);for i in range(3):await process_frame
	check(not demo.strum_hold.active() and options==[demo.tool,demo.road_style,demo.road_straight,demo.road_size],"releasing P resumes the exact original road options")
	await mouse(MOUSE_BUTTON_XBUTTON1,true,empty);await nature("tree",Vector2(-26,-14),"1440_侧键_鸟鸣")
	await key(KEY_P,true);await mouse(MOUSE_BUTTON_XBUTTON1,false,demo.pointer)
	check(demo.strum_hold.active() and demo.strum_hold.held.has("p"),"overlapping real P and side-key holds survive the first release")
	await key(KEY_P,false)
	check(not demo.strum_hold.active() and demo.tool==2,"last real release restores road interaction")
	root.size=Vector2i(1024,768);for i in range(8):await process_frame
	await hover(Vector2(root.size.x-40,root.size.y*.4));await mouse(MOUSE_BUTTON_XBUTTON2,true,demo.pointer)
	await roof("1024_侧键_屋顶");await nature("water",Vector2(-18,-14),"1024_侧键_水滴")
	await key(KEY_6,true);await key(KEY_6,false);await mouse(MOUSE_BUTTON_XBUTTON2,false,demo.pointer)
	check(demo.tool==5 and not demo.strum_hold.active(),"explicit tool selection wins over a still-held override and its later release")
	demo.select_tool(2);await hover(empty);await key(KEY_P,true);demo.gallery.open_panel();await process_frame;await process_frame
	check(not demo.strum_hold.active(),"opening the real collection sheet cancels momentary world play")
	await key(KEY_P,false);await key(KEY_P,true)
	check(not demo.strum_hold.active() and demo.tool==2,"P does not enter or change tools behind the collection sheet")
	await key(KEY_P,false);demo.gallery.close_panel();await process_frame
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");for i in range(4):await process_frame
	var field:LineEdit=demo.spatial_popover.name_field;var text:=field.text;field.grab_focus();await process_frame
	check(field.is_visible_in_tree() and field.has_focus(),"the actual name field is visible and owns keyboard focus")
	await key(KEY_P,true,false,112);await key(KEY_P,false)
	check(not demo.strum_hold.active() and field.text!=text and field.text.contains("p"),"P types into the actual roof name field without strumming or changing tools")
	field.text=text;field.release_focus();demo.spatial_popover.close();await process_frame
	await hover(point(Vector2(-31,-13)));await key(KEY_P,true);demo.notification(NOTIFICATION_APPLICATION_FOCUS_OUT);await process_frame
	check(not demo.strum_hold.active(),"application focus loss clears held world play");await key(KEY_P,false)
	demo.select_tool(2);await hover(point(Vector2(-31,-13)));await mouse(MOUSE_BUTTON_LEFT,true,demo.pointer)
	check(demo.road_drawing,"actual left drag owns the road brush before P")
	await key(KEY_P,true)
	check(demo.road_drawing and not demo.strum_hold.active(),"P cannot steal an in-progress road stroke")
	await key(KEY_P,false);await key(KEY_ESCAPE,true);await key(KEY_ESCAPE,false);await mouse(MOUSE_BUTTON_LEFT,false,demo.pointer)
	check(not demo.road_drawing and demo.state.snapshot()==saved,"canceling the original road draft commits no geometry")
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");demo.spatial_popover._toggle_colors();for frame in range(5):await process_frame
	await hover(Vector2(root.size.x-40,root.size.y*.4));await key(KEY_P,true);await click(demo.spatial_popover.wall_picker);for frame in range(4):await process_frame
	var popup:PopupPanel=demo.spatial_popover.wall_picker.get_popup()
	check(popup.visible and not demo.strum_hold.active(),"clicking the actual expanded color wheel cancels held P before child-window input")
	var released:=InputEventKey.new();released.keycode=KEY_P;released.pressed=false;popup.push_input(released);await process_frame;popup.hide();for frame in range(3):await process_frame
	check(not demo.strum_hold.active(),"P released inside the actual color popup stays released after closing it")
	demo.spatial_popover.close();demo.select_tool(2);await key(KEY_P,true);demo.notification(Node.NOTIFICATION_WM_WINDOW_FOCUS_OUT);await process_frame
	check(not demo.strum_hold.active(),"world-window focus loss cancels the override for native child windows too");await key(KEY_P,false)
	await key(KEY_P,true);await key(KEY_P,true,true);await key(KEY_ESCAPE,true);await key(KEY_ESCAPE,false);await key(KEY_P,true,true)
	check(not demo.strum_hold.active() and demo.tool==2,"real Escape ends held P and later keyboard repeats do not reactivate it");await key(KEY_P,false)
	demo.select_tool(4);await hover(Vector2(root.size.x-40,root.size.y*.4));await roof("1024_常驻浏览")
	check(demo.tool==4 and not demo.strum_hold.active(),"existing persistent smoke browsing remains available through its original tool")
	check(demo.state.snapshot()==saved and demo.state._undo.size()==depth,"the complete hold, modal, typing and drag tour leaves authored work and history unchanged")
	var current:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():current.append(player.get_instance_id())
	for player:AudioStreamPlayer in demo.music._effects:current.append(player.get_instance_id())
	check(current==voices and current.size()==16 and demo.music._playback_clock()>clock,"temporary gestures preserve all original audio players and transport")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save stays byte-identical")
	var extended:Dictionary=await preload("res://tools/fixtures/city_creation_arpeggio_stroll_live.gd").new().run(demo)
	for label:String in extended.checks:check(bool(extended.checks[label]),"M19: "+label)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged after complete arpeggio and stroll extension")
	sampling=false;frames.sort()
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"notes":notes,"frames":{"count":frames.size(),"limit":100,"p95_ms":frames[int(frames.size()*.95)],"max_ms":frames[-1]}}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("STRUM_HOLD_LIVE ",JSON.stringify(result));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

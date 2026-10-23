extends SceneTree
const Gesture=preload("res://scripts/ui/city_creation_strum_hold.gd")
class Preview extends RefCounted:
	var clears:=0
	func clear_preview():clears+=1
class Host extends Node3D:
	var state:=RefCounted.new()
	var town:=Preview.new()
	var world_toys:={"last_key":"old"}
	var candidate:={"build":true}
	var preview_key:="old"
	var _last_strummed_house_id:="h1"
	var _edit_pending:=false
	var camera_rig:={"strolling":false}
	var orbiting:=false
	var panning:=false
	var house_drawing:=false
	var road_drawing:=false
	var vegetation_drawing:=false
	var water_drawing:=false
	var district_drawing:=false
	var district_link_drawing:=false
	var terrain_brush:={"drawing":false}
	var conductor_gesture:={"venue":""}
	var signatures:={"placing":""}
	var guide=null
	var ledger=null
	var journal=null
	var gallery=null
var checks:=0
var failures:Array[String]=[]
func _initialize():run.call_deferred()
func check(ok:bool,label:String):
	checks+=1
	if not ok:failures.append(label);push_error(label)
func key(pressed:bool,echo:bool=false)->InputEventKey:
	var event:=InputEventKey.new();event.keycode=KEY_P;event.pressed=pressed;event.echo=echo;return event
func side(index:int,pressed:bool)->InputEventMouseButton:
	var event:=InputEventMouseButton.new();event.button_index=index;event.pressed=pressed;return event
func run():
	var host:=Host.new();root.add_child(host);var gesture:=Gesture.new()
	check(gesture.handle_input(host,key(true)) and gesture.active(),"P press starts an actual held gesture")
	check(host.candidate.is_empty() and host.preview_key.is_empty() and host.town.clears==1,"momentary world play removes only derived construction previews")
	check(gesture.handle_input(host,key(true,true)) and host.town.clears==1,"keyboard repeats do not rearm the same touch")
	check(gesture.handle_input(host,side(MOUSE_BUTTON_XBUTTON1,true)) and gesture.held.size()==2,"side key and P can overlap")
	check(gesture.handle_input(host,key(false)) and gesture.active(),"releasing P retains the still-held mouse side key")
	check(gesture.handle_input(host,side(MOUSE_BUTTON_XBUTTON1,false)) and not gesture.active(),"releasing the last control ends world play")
	for field:String in ["house_drawing","road_drawing","vegetation_drawing","water_drawing","district_drawing","district_link_drawing","orbiting","panning","_edit_pending"]:
		host.set(field,true);check(not gesture.handle_input(host,key(true)) and not gesture.active(),"existing gesture retains ownership: "+field);host.set(field,false)
	host.terrain_brush.drawing=true;check(not gesture.handle_input(host,key(true)),"terrain stroke is not interrupted");host.terrain_brush.drawing=false
	host.signatures.placing="bell_keep";check(not gesture.handle_input(host,key(true)),"armed landmark placement retains ownership");host.signatures.placing=""
	host.conductor_gesture.venue="h1";check(not gesture.handle_input(host,key(true)),"armed conductor stroke retains ownership");host.conductor_gesture.venue=""
	var modified:=key(true);modified.ctrl_pressed=true;check(not gesture.handle_input(host,modified),"modified shortcut does not enter the world-play gesture")
	gesture.handle_input(host,side(MOUSE_BUTTON_XBUTTON2,true));host.state=RefCounted.new();gesture.update(host)
	check(not gesture.active(),"replacing the work cancels the previous city's held gesture")
	gesture.handle_input(host,key(true));host._edit_pending=true;gesture.update(host)
	check(not gesture.active() and not gesture.handle_input(host,key(false)),"background edits cancel the gesture and accept no stale ownership");host._edit_pending=false
	gesture.handle_input(host,key(true));var escape:=InputEventKey.new();escape.keycode=KEY_ESCAPE;escape.pressed=true
	check(gesture.handle_input(host,escape) and not gesture.active() and not gesture.handle_input(host,key(true,true)),"Escape cancels until a new physical press, even under key repeat")
	var field:=LineEdit.new();root.add_child(field);field.grab_focus();await process_frame
	check(not gesture.handle_input(host,key(true)) and not gesture.active(),"text focus retains P as input instead of world play")
	field.release_focus();field.free()
	gesture.handle_input(host,key(true));var popup:=PopupPanel.new();root.add_child(popup);popup.popup(Rect2i(10,10,120,80));await process_frame;gesture.update(host)
	check(not gesture.active() and not gesture.handle_input(host,key(true)),"embedded popup ownership cancels P without relying on a parent key release")
	popup.push_input(key(false));popup.hide();await process_frame
	check(not gesture.active(),"a release inside the popup cannot leave a held world gesture after it closes");popup.free()
	var sequence:=preload("res://scripts/audio/city_creation_strum_sequence.gd").new()
	check(sequence.claim("h1",0.)==0 and sequence.claim("h1",.8)==-1,"a stationary pointer never repeats its target")
	check(sequence.claim("h2",.85)==1 and sequence.claim("h1",.9)==2,"each target has an independent cooldown")
	check(sequence.claim("h2",.95)==-1,"fast re-entry respects the same target 0.45s cooldown")
	sequence.claim("",1.0);check(sequence.claim("h2",1.31)==3,"leaving then re-entering after cooldown advances the gesture")
	check(sequence.claim("h3",3.)==0,"a breathing pause starts a new phrase at its root")
	sequence.reset();check(sequence.claim("h1",3.01)==0,"a fresh physical hold resets its musical contour")
	var gong:Array=[]
	for degree in range(6):gong.append(sequence.pitch(8,degree))
	check(gong==[60,62,64,67,69,72],"C gong gesture plays do re mi sol la high do")
	for mode in range(10):
		var previous:=-1;var modal:=true
		for degree in range(10):
			var midi:int=sequence.pitch(mode,degree)
			modal=modal and midi>previous and posmod(midi,12) in sequence.Palette.SCALES[mode];previous=midi
		check(modal,"two-octave ascending gesture stays in biome mode "+str(mode))
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures}
	var output:="res://验证记录/临时拨奏_2026-10-22";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output))
	FileAccess.open(output+"/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t",true,true));print("STRUM_HOLD_CPU ",JSON.stringify(result));host.free();quit(0 if failures.is_empty() else 1)

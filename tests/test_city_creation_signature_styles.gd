extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const SignaturePanel=preload("res://scripts/ui/city_creation_signature_panel.gd")
class Owner:
	extends Node3D
	var state:RefCounted
	var town:Node3D
	var selected_house:=""
class Town:
	extends Node3D
	func _house_record(_id:String)->Dictionary:return {}
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _styles(panel:RefCounted)->Dictionary:
	var ids:Dictionary={}
	for id:String in panel.buttons:
		var row:Array=[]
		for key:String in ["normal","hover","pressed","disabled","focus"]:row.append(panel.buttons[id].get_theme_stylebox(key).get_instance_id())
		ids[id]=row
	return ids
func _run()->void:
	var owner:=Owner.new();owner.state=State.new();owner.town=Town.new();owner.add_child(owner.town);root.add_child(owner)
	var panel:=SignaturePanel.new();panel.demo=owner;panel.actions=HBoxContainer.new();root.add_child(panel.actions)
	for id:String in owner.state.Signatures.IDS:
		var button:=Button.new();var label:=Label.new();root.add_child(button);root.add_child(label);panel.buttons[id]=button;panel.labels[id]=label
	panel.refresh();var initial:=_styles(panel)
	for ignored in range(20):panel.refresh()
	_check(initial==_styles(panel),"unchanged landmark refresh reuses all actual StyleBox resources")
	var id:="bell_keep";owner.state.signature_unlocks.append(id);panel.refresh();var unlocked:=_styles(panel)
	_check(unlocked[id]!=initial[id] and not panel.buttons[id].disabled and panel.buttons[id].text=="免费选址","unlock applies primary style and enables real placement")
	var others:=true
	for key:String in initial:if key!=id:others=others and initial[key]==unlocked[key]
	_check(others,"unlock leaves every unrelated button's style identity unchanged")
	assert(owner.state.add_house(Vector2(-20,-8)).ok);owner.state.houses[0].signature=id;panel.refresh();var placed:=_styles(panel)
	_check(placed[id]!=unlocked[id] and panel.buttons[id].disabled and panel.buttons[id].text=="已在河湾 · 可选中移动","placed landmark restores ordinary style and blocks duplicate placement")
	panel.refresh();_check(placed==_styles(panel),"placed landmark also reuses styles on later refresh")
	owner.state.houses[0].erase("signature");panel.refresh()
	_check(_styles(panel)[id]!=placed[id] and not panel.buttons[id].disabled,"removing the landmark restores available primary placement styling")
	for button:Button in panel.buttons.values():button.queue_free()
	for label:Label in panel.labels.values():label.queue_free()
	panel.actions.queue_free();owner.queue_free();await process_frame
	print("SIGNATURE_STYLES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

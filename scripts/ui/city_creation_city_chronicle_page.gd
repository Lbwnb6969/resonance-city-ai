extends VBoxContainer
## Read-only memories live with work authorship; browsing never settles growth.
var demo
var toggle:Button
var entries:VBoxContainer
var stamp:Variant=null
static func install(owner,parent)->void:
	var page=load("res://scripts/ui/city_creation_city_chronicle_page.gd").new();page.demo=owner;parent.add_child(page);owner.set_meta("city_chronicle_page",page)
func _ready()->void:
	name="CityChronicle";toggle=demo._button("城市编年 ▸",func():entries.visible=not entries.visible;refresh());toggle.name="ChronicleFoldout";add_child(toggle);entries=VBoxContainer.new();entries.name="ChronicleEntries";add_child(entries);entries.hide();refresh()
func refresh()->void:
	var rows:Array=demo.gallery.authorship.chronicle.rows();toggle.text="城市编年 · %d则小记 "%rows.size()+("▾" if entries.visible else "▸")
	var current:=hash(rows)
	if current==stamp:return
	stamp=current
	for child in entries.get_children():entries.remove_child(child);child.queue_free()
	if rows.is_empty():var label:Label=demo._label("在河湾里，慢慢留下新的小记。",12);label.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;entries.add_child(label)
	for row:Dictionary in rows:
		var label:Label=demo._label("· "+str(row.caption),12);label.name="Chronicle_"+str(row.kind);label.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;entries.add_child(label)
func _process(_delta:float)->void:
	if is_visible_in_tree():refresh()

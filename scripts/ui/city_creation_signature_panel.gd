extends RefCounted
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var demo: Node3D
var panel: PanelContainer
var button: Button
var buttons: Dictionary={}
var labels: Dictionary={}
var actions: HBoxContainer
var placing: String=""
var moving_id: String=""
var preview_key: Array=[]

func setup(owner: Node3D,parent: Control)->void:
	demo=owner
	button=demo._button("地标名胜 · 免费营建",open_panel);button.name="SignatureBuildings"
	demo.gallery_button.get_parent().add_child(button)
	panel=PanelContainer.new();panel.name="SignatureCatalog";parent.add_child(panel)
	panel.set_anchors_and_offsets_preset(Control.PRESET_TOP_RIGHT);panel.grow_horizontal=Control.GROW_DIRECTION_BEGIN
	panel.offset_left=-354;panel.offset_right=-24;panel.offset_top=84
	panel.add_theme_stylebox_override("panel",UI.panel(16))
	var scroll:=ScrollContainer.new();scroll.name="LandmarkScroll";scroll.custom_minimum_size=Vector2(306,minf(650.,demo.get_viewport().get_visible_rect().size.y-200.));scroll.horizontal_scroll_mode=ScrollContainer.SCROLL_MODE_DISABLED;panel.add_child(scroll)
	var column:=VBoxContainer.new();column.size_flags_horizontal=Control.SIZE_EXPAND_FILL;column.add_theme_constant_override("separation",10);scroll.add_child(column)
	column.add_child(demo._label("地标名胜 · 每座限一处",18))
	for id: String in demo.state.Signatures.IDS:
		column.add_child(demo._label(demo.state.Signatures.NAMES[id],16))
		var label: Label=demo._label("",13);label.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;label.custom_minimum_size.x=290;column.add_child(label);labels[id]=label
		var place: Button=demo._button("免费选址",begin.bind(id,""));place.name="PlaceSignature_"+id;column.add_child(place);buttons[id]=place
	column.add_child(demo._button("回到街巷",func()->void:panel.hide()))
	panel.hide()
	actions=HBoxContainer.new();actions.name="SignatureActions";demo.place_name.get_parent().add_child(actions)
	actions.add_child(demo._button("移动地标",_move_selected))
	actions.add_child(demo._button("整体回收",func()->void:demo._after_edit(demo.state.remove_house(demo.selected_house),"erase")))
	actions.hide();refresh()

func open_panel()->void:
	if demo.edit_pending():return
	demo._cancel_draft();panel.show();refresh()

func refresh()->void:
	var placed:= {}
	for house: Dictionary in demo.state.houses:
		if house.has("signature"):placed[str(house.signature)]=str(house.id)
	for id: String in buttons:
		var earned: bool=id in demo.state.signature_unlocks
		buttons[id].disabled=not earned or placed.has(id)
		buttons[id].text="已在河湾 · 可选中移动" if placed.has(id) else "免费选址" if earned else "里程碑尚未达成"
		labels[id].text=demo.state.Signatures.GOALS[id]
	var selected: Dictionary=demo.town._house_record(demo.selected_house)
	actions.visible=selected.has("signature")

func _move_selected()->void:
	var house: Dictionary=demo.town._house_record(demo.selected_house)
	if house.has("signature"):begin(str(house.signature),str(house.id))

func begin(kind: String,moving: String="")->void:
	if demo.edit_pending() or kind not in demo.state.signature_unlocks:return
	demo.select_tool(4);panel.hide();demo.selected_house="";demo.place_panel.hide()
	placing=kind;moving_id=moving;preview_key=[]
	demo._message("点击空地"+("移动" if not moving.is_empty() else "免费放置")+demo.state.Signatures.NAMES[kind]+" · Esc取消")
	demo.preview_key=""

func cancel()->void:
	panel.hide()
	placing="";moving_id="";preview_key=[]

func hover(at: Vector2)->void:
	var key: Array=[placing,moving_id,at,demo.state.revision]
	if key==preview_key:return
	preview_key=key
	var result: Dictionary=demo.state.preview_signature(placing,at,moving_id)
	demo.candidate={"signature":placing,"position":at,"moving_id":moving_id,"valid":result.ok}
	demo.town.clear_preview()
	var material:=StandardMaterial3D.new();material.albedo_color=Color(.43,.72,.51,.28) if result.ok else Color(.82,.33,.25,.35);material.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA;material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
	var y: float=demo.state.sample_house_base_y(at)
	for cell: Dictionary in demo.state.Signatures.cells(placing):
		var mesh:=MeshInstance3D.new();var box:=BoxMesh.new();box.size=Vector3(1.78,1.68,1.78);mesh.mesh=box;mesh.material_override=material
		mesh.position=Vector3(at.x+int(cell.x)*1.8,y+int(cell.level)*1.7+.84,at.y+int(cell.z)*1.8);demo.town.preview.add_child(mesh)
	demo.hint.text=result.message+"\n点击确认 · Esc取消 · 每座地标可随时移动或回收。"

func commit()->void:
	var candidate: Dictionary=demo.candidate.duplicate()
	if not candidate.get("valid",false):return
	var result: Dictionary=demo.state.place_signature(str(candidate.signature),candidate.position,str(candidate.moving_id))
	if result.ok:
		cancel();demo.selected_house=str(result.house_id);demo.place_panel.show()
	demo._after_edit(result,"terrace")
	refresh()

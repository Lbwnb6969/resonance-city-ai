extends Node
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
const Legacy=preload("res://scripts/world/city_creation_legendary_wonder_plan.gd")
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
var demo
var buttons:Dictionary={}
var status:Label
var selection:PanelContainer
var selection_title:Label
var selected:=""
var placing:=""
var moving:=""
var yaw:=0.
var candidate:Dictionary={}
var preview:Node3D
var epoch:Array=[]
var preview_key:Array=[]
static func setup(owner:Node3D,column:Control)->void:
	var node=load("res://scripts/ui/city_creation_ground_landmark_tool.gd").new();node.demo=owner;node.name="GroundLandmarkTool";owner.add_child(node);owner.set_meta("ground_landmark_tool",node);node.build(column)
func build(column:Control)->void:
	column.add_child(demo._label("传世蓝图 · 自由选址",18))
	status=demo._label("",13);status.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;column.add_child(status)
	for id:String in Plan.SIZES:
		var button:Button=demo._button("",begin.bind(id,""));button.name="PlaceGround_"+id;column.add_child(button);buttons[id]=button
	column.add_child(demo._button("显示／隐藏自动微景",toggle_automatic))
	column.add_child(demo._button("屋顶冠冕转为待放置蓝图",retire_crowns))
	selection=PanelContainer.new();selection.name="GroundLandmarkActions";demo.ui_layer.get_child(0).add_child(selection);selection.add_theme_stylebox_override("panel",UI.card(12))
	selection.set_anchors_and_offsets_preset(Control.PRESET_TOP_RIGHT);selection.offset_left=-330;selection.offset_right=-18;selection.offset_top=100
	var actions:=VBoxContainer.new();selection.add_child(actions);selection_title=demo._label("",16);actions.add_child(selection_title)
	actions.add_child(demo._button("移动传世地标",move_selected));actions.add_child(demo._button("旋转90°",rotate_selected));actions.add_child(demo._button("回收实体",remove_selected));actions.add_child(demo._button("回到街巷",func():selected="";refresh()));selection.hide();refresh()
func _process(_delta:float)->void:
	var key:Array=[demo.state.get_instance_id(),demo.state.revision,Legacy.progress_key(demo.state)]
	if not selected.is_empty() and not demo.selected_house.is_empty():selected="";refresh()
	if key==epoch:return
	if not epoch.is_empty() and epoch[0]!=key[0]:selected="";cancel()
	epoch=key
	if not selected.is_empty() and Plan.row(demo.state,selected).is_empty():selected=""
	refresh()
func refresh()->void:
	var free:bool=demo.state.CreationPolicy.is_free(demo.state);var rights:=Legacy.unlocked(demo.state)
	for id:String in buttons:
		var placed:bool=demo.state.placed_landmarks.any(func(row):return row.blueprint==id)
		buttons[id].disabled=not free or not rights.has(id) or placed
		buttons[id].text=Legacy.TITLES[id]+(" · 已落位" if placed else " · 免费选址" if rights.has(id) else " · 尚未获得蓝图")
	status.text="已获蓝图不会因回收实体而失去。Q/E旋转，点击空地放置，Esc取消。" if free else "经典旧城保留屋顶原貌；F1备份转换后，已有权益成为待放置蓝图。"
	selection.visible=not selected.is_empty()
	if selection.visible:selection_title.text=Legacy.TITLES[Plan.row(demo.state,selected).blueprint]
func toggle_automatic()->void:
	if demo.edit_pending():return
	var settings:Dictionary=demo.state.creative_settings
	if settings.is_empty():demo._message("经典旧城请先在F1备份转换");return
	var target:Dictionary=settings.presentation.duplicate();target.automatic_decoration=not target.automatic_decoration
	demo._after_edit(demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":target}),"history")
func retire_crowns()->void:
	if demo.edit_pending() or not demo.state.CreationPolicy.is_free(demo.state):return
	var target:Dictionary=demo.state.creative_settings.presentation.duplicate();target.legacy_crowns=false
	demo._after_edit(demo.state.CreationPolicy.set_preferences(demo.state,{"presentation":target}),"history");refresh()
func begin(id:String,move:String="")->void:
	if demo.edit_pending():return
	demo.signatures.cancel();demo.select_tool(4);demo.selected_house="";demo.place_panel.hide();demo.signatures.panel.hide()
	placing=id;moving=move;selected="";yaw=float(Plan.row(demo.state,move).get("yaw",0.));preview_key.clear();refresh()
	demo._message(Legacy.TITLES[id]+" · 点击空地落位 · Q/E旋转 · Esc取消")
func cancel()->void:
	placing="";moving="";candidate.clear();preview_key.clear();demo.town.clear_preview()
	if is_instance_valid(preview):preview.queue_free()
	preview=null
func hover()->bool:
	if placing.is_empty():return false
	if demo.edit_pending():return true
	var at:Vector2=demo._ground_at(demo.pointer).snapped(Vector2.ONE*.1)
	var key:Array=[at,yaw,demo.state.revision]
	if key==preview_key:return true
	preview_key=key;candidate=Plan.preview(demo.state,placing,at,yaw,moving);demo.town.clear_preview()
	if is_instance_valid(preview):preview.free()
	preview=Node3D.new();demo.add_child(preview);preview.position=Vector3(at.x,float(candidate.get("base_y",demo.state.ground_height(at))),at.y);preview.rotation.y=yaw
	var size:Vector2=Plan.SIZES[placing];var material:=StandardMaterial3D.new();material.albedo_color=Color(.35,.72,.49,.35) if candidate.ok else Color(.85,.28,.22,.38);material.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA;material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
	for dimensions:Vector3 in [Vector3(size.x,.12,size.y+.54),Vector3(.8,1.,.8)]:
		var mesh:=MeshInstance3D.new();preview.add_child(mesh);var box:=BoxMesh.new();box.size=dimensions;mesh.mesh=box;mesh.material_override=material;mesh.position=Vector3(0,dimensions.y*.5,.27 if dimensions.y<.2 else size.y*.5+.85)
	demo.hint.text=str(candidate.message)+"\nQ/E每次90° · 点击确认 · 右键/Esc取消";return true
func handle(event:InputEvent)->bool:
	if placing.is_empty() and not selected.is_empty() and event is InputEventKey and event.pressed and event.keycode==KEY_ESCAPE:selected="";refresh();return true
	if not placing.is_empty():
		if event is InputEventKey and event.pressed and not event.echo:
			if event.keycode==KEY_ESCAPE:cancel();return true
			if event.keycode in [KEY_Q,KEY_E]:yaw=wrapf(yaw+(-PI*.5 if event.keycode==KEY_Q else PI*.5),-PI,PI);preview_key.clear();hover();return true
		if event is InputEventMouseButton and event.pressed:
			if event.button_index==MOUSE_BUTTON_RIGHT:cancel();return true
			if event.button_index==MOUSE_BUTTON_LEFT:
				if demo.get_viewport().gui_get_hovered_control()!=null:return false
				demo.pointer=event.position;preview_key.clear();hover()
				if candidate.get("ok",false):
					var result:=Plan.place(demo.state,placing,Plan.position(candidate.entity),yaw,moving)
					if result.ok:selected=str(result.landmark_id);cancel();demo._after_edit(result,"terrace");refresh()
				return true
		return false
	if not event is InputEventMouseButton or not event.pressed or event.button_index!=MOUSE_BUTTON_LEFT or demo.edit_pending() or demo.get_viewport().gui_get_hovered_control()!=null:return false
	var hit:Dictionary=demo._ray_hit(event.position);var body:Object=hit.get("collider")
	if body==null or not body.has_meta("landmark_id"):return false
	selected=str(body.get_meta("landmark_id"));demo.selected_house="";demo.place_panel.hide();refresh();return true
func move_selected()->void:
	var item:=Plan.row(demo.state,selected)
	if not item.is_empty():begin(str(item.blueprint),selected)
func rotate_selected()->void:
	if demo.edit_pending():return
	var item:=Plan.row(demo.state,selected)
	if item.is_empty():return
	demo._after_edit(Plan.place(demo.state,item.blueprint,Plan.position(item),float(item.yaw)+PI*.5,selected),"terrace")
func remove_selected()->void:
	if demo.edit_pending():return
	var result:=Plan.remove(demo.state,selected)
	if result.ok:selected="";demo.place_panel.hide()
	demo._after_edit(result,"erase");refresh()

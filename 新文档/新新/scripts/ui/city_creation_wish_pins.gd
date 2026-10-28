extends Control
## At most two current, visible needs are offered every eighteen seconds.
## Clicking prepares the actual tool and a legal site; it grants no progress.
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
const Family=preload("res://scripts/world/city_creation_prototype_resonance.gd")
var demo
var pins:Array[Dictionary]=[]
var elapsed:=18.
var highlight:MeshInstance3D
var highlight_left:=0.
var target:Dictionary={}
var offered_revision:=-1
var _offers_cache_key:Variant=null
var _offers_cache:Array[Dictionary]=[]

func setup(owner,ui_root:Control)->void:
	demo=owner;name="CitizenWishPins";mouse_filter=Control.MOUSE_FILTER_IGNORE
	set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT);ui_root.add_child(self)
	highlight=MeshInstance3D.new();highlight.name="WishTargetRing"
	highlight.mesh=demo.intuitive_guidance.marker_mesh;highlight.material_override=demo.intuitive_guidance.marker_material
	highlight.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;demo.add_child(highlight);highlight.hide()
	preload("res://scripts/ui/city_creation_vignette_journey.gd").new().setup(owner,ui_root)

func offers()->Array[Dictionary]:
	var cam_key:=[demo.state.revision,demo.state._wish_epoch,demo.camera.global_transform]
	if _offers_cache_key==cam_key:return _offers_cache
	var result:Array[Dictionary]=[];var groups:Dictionary=demo.state.natural_clusters()
	var needed_trees:int=preload("res://scripts/world/city_creation_tradition_rules.gd").tree_count(demo.state)
	for house:Dictionary in demo.state.houses:
		var id:=str(house.id);var at:=Vector2(house.origin[0],house.origin[1])
		if not demo.camera.is_position_in_frustum(Vector3(at.x,float(house.get("base_y",0.))+1.,at.y)):continue
		if not demo.life.house_connected(id):
			var doors:Array=demo.state.house_entrances(id)
			if not doors.is_empty():result.append({"house_id":id,"kind":"road","at":Vector2(doors[0].at),"caption":"通路","glyph":"road"})
		elif house.role=="bakery" and not demo.state.site_blessing(id).get("blessed",false):
			var point:=_site(at,"water")
			if point.is_finite():result.append({"house_id":id,"kind":"water","at":point,"caption":"活水","glyph":"water"})
		elif house.role=="workshop" and int(demo.state.site_blessing(id).get("trees",0))<needed_trees:
			var point:=_site(at,"tree")
			if point.is_finite():result.append({"house_id":id,"kind":"tree","at":point,"caption":"良木","glyph":"vegetation"})
		elif house.role=="residential" and _tea_needed(id,groups):
			result.append({"house_id":id,"kind":"tea","at":at,"caption":"茶叙","glyph":"garden_cafe"})
		elif Family.scenic_needed(demo.state,house):
			result.append({"house_id":id,"kind":"scenic","at":at,"caption":"远眺","glyph":"house"})
	result.sort_custom(func(a:Dictionary,b:Dictionary)->bool:
		var order:Array=["road","water","tree","tea","scenic"]
		return str(a.house_id)<str(b.house_id) if a.kind==b.kind else order.find(a.kind)<order.find(b.kind))
	_offers_cache_key=cam_key;_offers_cache=result
	return result

func _tea_needed(id:String,groups:Dictionary)->bool:
	if int(groups[id].size)<4:return false
	var bakery:=false;var cafe:=false;var homes:=0
	for member:String in groups[id].members:
		var other:Dictionary=demo.state.houses[demo.state._house_index(member)]
		bakery=bakery or other.role=="bakery";cafe=cafe or other.role=="garden_cafe"
		homes+=1 if other.role=="residential" else 0
	return bakery and not cafe and homes>=3

func _still_needed(row:Dictionary)->bool:
	var id:=str(row.house_id);var index:int=demo.state._house_index(id)
	if index<0:return false
	if row.kind=="road":return not demo.life.house_connected(id)
	if not demo.life.house_connected(id):return false
	var role:=str(demo.state.houses[index].role)
	match str(row.kind):
		"water":return role=="bakery" and not demo.state.site_blessing(id).get("blessed",false)
		"tree":return role=="workshop" and int(demo.state.site_blessing(id).get("trees",0))<preload("res://scripts/world/city_creation_tradition_rules.gd").tree_count(demo.state)
		"tea":return role=="residential" and _tea_needed(id,demo.state.natural_clusters())
		"scenic":return Family.scenic_needed(demo.state,demo.state.houses[index])
	return false

func _site(origin:Vector2,kind:String)->Vector2:
	for radius:float in [3.,4.,5.,6.]:
		for i:int in range(12):
			var at:=origin+Vector2.from_angle(float(i)*TAU/12.)*radius
			if kind=="water":
				if origin.distance_to(at)-demo.water_width*.5<4.5 and demo.state.preview_water([at] as Array[Vector2],demo.water_width,"pond").ok:return at
			else:
				var plant:Dictionary=demo.state._make_plant("preview",at,"olive",1.,1,"player")
				if demo.state._plant_geometry_compatible(plant,[],true):return at
	return Vector2.INF

func refresh()->void:
	for pin:Dictionary in pins:pin.button.queue_free()
	pins.clear()
	var used:Dictionary={}
	for row:Dictionary in offers():
		if used.has(row.house_id):continue
		used[row.house_id]=true
		var button:=Seal.new();button.name="Wish_"+str(row.house_id);button.configure(str(row.glyph),40.);button.caption=row.caption
		button.tooltip_text={"road":"盼望通路：点此切换修路并标出门前","water":"渴望活水：点此切换池塘并标出可挖位置","tree":"寻觅良木：点此切换栽树并标出空地","tea":"夕照茶叙：点此将这栋居所改为茶座","scenic":"登高远眺：点此为这座小屋选择眺望屋顶"}[row.kind]
		button.pressed.connect(_activate.bind(row));add_child(button)
		pins.append({"row":row,"button":button})
		if pins.size()==2:break
	elapsed=0.
	offered_revision=demo.state.revision

func _activate(row:Dictionary)->void:
	var current:=offers().filter(func(r):return r.house_id==row.house_id and r.kind==row.kind)
	if current.is_empty():refresh();return
	row=current[0];target=row.duplicate()
	if row.kind=="scenic":
		demo.select_tool(0);demo.spatial_popover.open_for_house(str(row.house_id));demo._message("给这座小屋留一处眺望的屋顶。")
		return
	demo.life.site_wishes.arm(str(row.house_id),str(row.kind))
	match str(row.kind):
		"road":demo.select_tool(2)
		"water":demo.tactile_dock._nature_mode(1)
		"tree":
			demo.tactile_dock._nature_mode(0)
			var species:OptionButton=demo.ui_layer.find_child("Species",true,false)
			species.select(0);species.item_selected.emit(0)
			var planting:OptionButton=demo.ui_layer.find_child("PlantingMode",true,false)
			planting.select(0);planting.item_selected.emit(0)
		"tea":demo._after_edit(demo.state.set_house_role(str(row.house_id),"garden_cafe"),"room",true,str(row.house_id))
	highlight.position=Vector3(row.at.x,demo.state.ground_height(row.at)+.05,row.at.y);highlight_left=8.
	demo._message({"road":"门前的金圈是接路落点。","water":"金圈处留有可挖池塘的空地。","tree":"在金圈附近种下喜欢的树。","tea":"茶座已备好，街坊买过面包就会来相聚。"}[row.kind])
	for pin:Dictionary in pins:pin.button.queue_free()
	pins.clear();elapsed=0.

func _process(delta:float)->void:
	if demo==null:return
	elapsed+=delta;highlight_left=maxf(0.,highlight_left-delta)
	var early:bool=demo.intuitive_guidance.stage not in ["","bridge","landmark"]
	visible=not early and demo.ui_layer.visible and not demo.camera_rig.strolling and not demo.edit_pending() and not demo.gallery.panel.visible and not demo.journal.panel.visible and not demo.guide.visible()
	highlight.visible=visible and highlight_left>0.
	if not visible:return
	if offered_revision!=demo.state.revision:
		_offers_cache_key=null
		for i:int in range(pins.size()-1,-1,-1):
			var row:Dictionary=pins[i].row
			if not _still_needed(row):
				pins[i].button.queue_free();pins.remove_at(i)
		offered_revision=demo.state.revision
	if elapsed>=18.:refresh()
	for pin:Dictionary in pins:
		var row:Dictionary=pin.row;var house:Dictionary=demo.town._house_record(str(row.house_id))
		if house.is_empty():pin.button.hide();continue
		var level:=0
		for cell:Dictionary in house.cells:level=maxi(level,int(cell.level))
		var at:=Vector3(house.origin[0],float(house.get("base_y",0.))+(level+1)*demo.FLOOR+.8,house.origin[1])
		var projected:Vector2=demo.camera.unproject_position(at)
		pin.button.position=projected-pin.button.size*.5
		var viewport:=get_viewport_rect()
		pin.button.visible=viewport.size.x>130. and viewport.size.y>130. and not demo.camera.is_position_behind(at) and viewport.grow(-65.).encloses(pin.button.get_rect()) and demo.spatial_popover.target_house_id.is_empty()

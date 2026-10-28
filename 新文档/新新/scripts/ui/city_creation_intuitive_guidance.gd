extends Control
## Derived onboarding over the real city. Markers never create geometry or
## credit progress; roof actions commit the same transaction as the house card.
const UI=preload("res://scripts/ui/valley_ui_theme.gd")
const TactileUI=preload("res://scripts/ui/city_creation_tactile_ui_theme.gd")
const Seal=preload("res://scripts/ui/city_creation_seal_button.gd")
var demo
var banner:Label
var bubble:Button
var markers:Node3D
var marker_mesh:ArrayMesh
var marker_material:StandardMaterial3D
var stage:=""
var target_house_id:=""
var suggested_role:=""
var target_points:Array[Vector2]=[]
var available:Array[int]=[0]
var _revision:=-1
var _state_id:=0
var _light_phase:=-1
var _timer:=0.
var _pulse:=0.

func setup(owner,ui_root:Control)->void:
	demo=owner;name="IntuitiveGuidance";mouse_filter=Control.MOUSE_FILTER_IGNORE
	set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT);ui_root.add_child(self)
	banner=Label.new();banner.name="GuideWhisper";banner.horizontal_alignment=HORIZONTAL_ALIGNMENT_CENTER
	banner.add_theme_color_override("font_color",TactileUI.whisper_text_color(false));banner.add_theme_font_size_override("font_size",14)
	banner.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;banner.mouse_filter=Control.MOUSE_FILTER_IGNORE;add_child(banner)
	banner.add_theme_stylebox_override("normal",TactileUI.whisper_pill_style(false))
	bubble=Button.new();bubble.name="OneClickRoleBubble";bubble.set_script(Seal);bubble.configure("bakery",54.)
	bubble.custom_minimum_size=Vector2(68,60);bubble.focus_mode=Control.FOCUS_NONE
	bubble.pressed.connect(_apply_suggestion);add_child(bubble);bubble.hide()
	markers=Node3D.new();markers.name="GroundGuideRings";demo.add_child(markers)
	marker_material=StandardMaterial3D.new();marker_material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
	marker_material.albedo_color=Color("e6c16b");marker_material.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA
	marker_material.no_depth_test=false;marker_material.cull_mode=BaseMaterial3D.CULL_DISABLED
	marker_mesh=_ring_mesh()
	_rebuild()

func tool_available(index:int)->bool:
	return index in available or index==0

func _rebuild()->void:
	_revision=demo.state.revision;_timer=0.
	target_house_id="";suggested_role="";target_points.clear();stage=""
	var count:int=demo.state.houses.size()
	var roles:Dictionary={};var homes:Array[Dictionary]=[];var connected:=0
	for house:Dictionary in demo.state.houses:
		roles[str(house.role)]=true
		if house.role=="residential" and not house.has("signature"):homes.append(house)
		if demo.life.house_connected(str(house.id)):connected+=1
	if count>=3 and not 2 in available:available.append(2)
	if connected>=3:
		for index:int in [4,5,8]:
			if not index in available:available.append(index)
	if count<3:
		stage="houses";banner.text="在金色屋基旁添几座家，让三屋聚成晨曲。"
		target_points=_house_sites(3-count)
	elif connected<mini(count,5):
		stage="road";banner.text="沿屋门前拉一条小路，让街坊走出家门。"
		for house:Dictionary in demo.state.houses:
			if demo.life.house_connected(str(house.id)):continue
			var doors:Array=demo.state.house_entrances(str(house.id))
			target_points.append(Vector2(house.origin[0],house.origin[1])+Vector2(0,1.55) if doors.is_empty() else Vector2(doors[0].at))
			if target_points.size()==3:break
	elif not roles.has("bakery"):
		stage="bakery";banner.text="点水畔屋顶的面包印章，点亮第一炉麦香。"
		_suggest(homes,"bakery",true)
	elif not roles.has("garden_cafe"):
		if count<4:
			stage="houses";banner.text="给茶座留一栋新屋，也给街坊留住家。";target_points=_house_sites(1)
		else:
			stage="cafe";banner.text="点屋顶的茶座印章，让买过面包的街坊相聚。";_suggest(homes,"garden_cafe")
	elif not roles.has("workshop"):
		if count<5:
			stage="houses";banner.text="再添一栋家，让制琴坊加入合唱。";target_points=_house_sites(1)
		else:
			stage="workshop";banner.text="点制琴印章，让木饰与风铃沿街送到邻家。";_suggest(homes,"workshop")
	elif demo.state.plants.is_empty():
		stage="plants";banner.text="选「林水」，在街边种下喜欢的树与花。"
		for at:Vector2 in _house_sites(1):target_points.append(at)
	else:
		var bridge:=false
		for road:Dictionary in demo.state.roads:bridge=bridge or bool(road.get("bridge",false))
		if not bridge:
			stage="bridge";banner.text="把小路拉到对岸，听街巷越过流水。"
			var z:=8.;var x:float=demo.state.river_x(z)
			target_points.assign([Vector2(x-5.,z),Vector2(x,z),Vector2(x+5.,z)])
		elif count<10:
			stage="houses";banner.text="跨岸添些新屋；十座家与一座桥将迎来古钟地标。";target_points=_house_sites(1)
		elif not demo.state.houses.any(func(h):return h.get("signature","")=="bell_keep"):
			stage="landmark";banner.text="打开手记中的名胜，安放古钟塔，再点塔奏响乐章。"
	if count>=10 and stage!="landmark" and connected>=5 and roles.has("bakery") and roles.has("garden_cafe") and roles.has("workshop"):
		stage="wander";target_points.clear();target_house_id="";banner.text=preload("res://scripts/ui/city_creation_city_whispers.gd").text(demo.state)
	bubble.visible=not target_house_id.is_empty()
	for child:Node in markers.get_children():markers.remove_child(child);child.queue_free()
	for at:Vector2 in target_points:
		var ring:=MeshInstance3D.new();ring.mesh=marker_mesh;ring.material_override=marker_material
		ring.position=Vector3(at.x,demo.state.ground_height(at)+.045,at.y)
		ring.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;markers.add_child(ring)
	if demo.tactile_dock!=null:demo.tactile_dock.refresh()

func _suggest(homes:Array[Dictionary],role:String,near_water:bool=false)->void:
	if homes.size()<3:return
	homes=homes.duplicate()
	homes.sort_custom(func(a:Dictionary,b:Dictionary)->bool:
		var aa:=Vector2(a.origin[0],a.origin[1]);var bb:=Vector2(b.origin[0],b.origin[1])
		return demo.state.water_clearance(aa)<demo.state.water_clearance(bb) if near_water else str(a.id)>str(b.id))
	var clusters:Dictionary=demo.state.natural_clusters()
	for house:Dictionary in homes:
		if not demo.life.house_connected(str(house.id)):continue
		if int(clusters[house.id].size)<3:continue
		target_house_id=house.id;suggested_role=role
		bubble.kind=role;bubble.caption={"bakery":"面包","garden_cafe":"茶座","workshop":"制琴"}[role]
		bubble.tooltip_text="点此设为"+{"bakery":"麦香面包坊","garden_cafe":"花圃茶座","workshop":"制琴木工坊"}[role]
		bubble.queue_redraw();return

func _house_sites(amount:int)->Array[Vector2]:
	var result:Array[Vector2]=[]
	var origin:=Vector2(-9.,-5.4)
	if not demo.state.houses.is_empty():origin=Vector2(demo.state.houses[0].origin[0],demo.state.houses[0].origin[1])
	else:origin.x=floorf((demo.state.river_x(origin.y)-6.)/1.8)*1.8
	for radius:int in range(0,6):
		for z:int in range(-radius,radius+1):
			for x:int in range(-radius,radius+1):
				if maxi(absi(x),absi(z))!=radius:continue
				var at:Vector2=(origin+Vector2(x,z)*3.6).snapped(Vector2.ONE*1.8)
				if demo.state.water_clearance(at)<1.8 or not demo.state.validate_add_house(at).ok:continue
				if not _visible_ground_site(at):continue
				if result.any(func(p):return p.distance_to(at)<3.):continue
				result.append(at)
				if result.size()==amount:return result
	return result

func _visible_ground_site(at:Vector2)->bool:
	var world:=Vector3(at.x,demo.state.ground_height(at)+.01,at.y)
	if demo.camera.is_position_behind(world):return false
	var screen:Vector2=demo.camera.unproject_position(world)
	if not get_viewport_rect().grow(-60.).has_point(screen):return false
	var from:Vector3=demo.camera.project_ray_origin(screen)
	return demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(from,world,1)).is_empty()

func update_guidance(delta:float)->void:
	if _state_id!=demo.state.get_instance_id():
		_state_id=demo.state.get_instance_id();available.assign([0]);_revision=-1
	if _light_phase!=demo.light_phase:
		_light_phase=demo.light_phase
		var is_night:bool=_light_phase==2
		banner.add_theme_stylebox_override("normal",TactileUI.whisper_pill_style(is_night))
		banner.add_theme_color_override("font_color",TactileUI.whisper_text_color(is_night))
	_pulse+=delta;_timer+=delta
	if not demo.edit_pending() and (demo.state.revision!=_revision or _timer>1.5):_rebuild()
	var hidden:bool=not demo.ui_layer.visible or demo.camera_rig.strolling or demo.gallery.panel.visible or demo.journal.panel.visible or demo.guide.visible() or demo.ledger.visible()
	visible=not hidden;markers.visible=not hidden and not demo.edit_pending() and not stage.is_empty()
	banner.visible=not stage.is_empty() and not demo.spatial_popover.card.visible
	var screen:=get_viewport_rect().size
	var width:=minf(620.,screen.x-344.)
	var left:=maxf((screen.x-width)*.5,demo.get_meta("inspiration_draft").badge.get_global_rect().end.x+16.)
	banner.position=Vector2(left,66);banner.size=Vector2(minf(width,screen.x-left-24.),42)
	marker_material.albedo_color=Color(.91,.74,.34,.40+.18*sin(_pulse*2.8))
	for ring:Node3D in markers.get_children():ring.scale=Vector3.ONE*(1.+.04*sin(_pulse*2.8))
	if target_house_id.is_empty():bubble.hide();return
	var house:Dictionary=demo.town._house_record(target_house_id)
	if house.is_empty():bubble.hide();return
	var top:=0
	for cell:Dictionary in house.cells:top=maxi(top,int(cell.level))
	var at:=Vector3(house.origin[0],float(house.get("base_y",0.))+(top+1)*demo.FLOOR+1.,house.origin[1])
	if demo.camera.is_position_behind(at):bubble.hide();return
	var point:Vector2=demo.camera.unproject_position(at)
	bubble.position=point-bubble.size*.5+Vector2(0,sin(_pulse*3.)*3.)
	bubble.visible=Rect2(Vector2(12,112),screen-Vector2(24,250)).encloses(bubble.get_rect()) and not demo.edit_pending() and demo.spatial_popover.target_house_id.is_empty()

func _apply_suggestion()->void:
	if target_house_id.is_empty() or demo.edit_pending():return
	var id:=target_house_id
	demo._after_edit(demo.state.set_house_role(id,suggested_role),"room",true,id)
	bubble.hide()

func _ring_mesh()->ArrayMesh:
	var vertices:=PackedVector3Array()
	for dash:int in range(20):
		var a:=TAU*float(dash)/20.;var b:=a+TAU/28.
		var a0:=Vector3(sin(a),0,cos(a))*.94;var a1:=Vector3(sin(a),0,cos(a))*1.02
		var b0:=Vector3(sin(b),0,cos(b))*.94;var b1:=Vector3(sin(b),0,cos(b))*1.02
		vertices.append_array(PackedVector3Array([a0,b1,b0,a0,a1,b1]))
	var arrays:Array=[];arrays.resize(Mesh.ARRAY_MAX);arrays[Mesh.ARRAY_VERTEX]=vertices
	var mesh:=ArrayMesh.new();mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays);return mesh

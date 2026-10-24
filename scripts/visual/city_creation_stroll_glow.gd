extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## A camera-owned view of authored treads and courtyard tiles; no city writes.
const Materials=preload("res://scripts/visual/city_creation_metronome_material.gd")
const Geometry=preload("res://scripts/visual/city_creation_metronome_geometry.gd")
const RADIUS:=5.
var layer:Node3D
var slots:Array[MeshInstance3D]=[]
var sites:Array[Dictionary]=[]
var signature:Array=[]
var visible_sites:Array[Dictionary]=[]
func _setup(demo)->void:
	layer=Node3D.new();layer.name="StrollAcousticGlow";demo.add_child(layer)
	for i in range(64):
		var node:=MeshInstance3D.new();node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
		node.material_override=Materials.glow();node.hide();layer.add_child(node);slots.append(node)
func _sync(demo)->void:
	var key:=[demo.state.get_instance_id(),demo.state.revision,demo.state._wish_epoch]
	if key==signature:return
	signature=key;sites.clear()
	for stair:Dictionary in demo.life.travel.sites.values():
		if stair.kind!="stair":continue
		var box:=BoxMesh.new();box.size=Vector3(float(stair.width)*.82,.012,maxf(.06,minf(.4,float(stair.depth)*.8)))
		sites.append({"kind":"stair","id":str(stair.id),"at":Vector2(stair.at),"height":float(stair.height)+.025,"yaw":atan2(stair.axis.x,stair.axis.y),"mesh":box})
	var ring:=Geometry.ring(.58,.045)
	for court:Dictionary in demo.state.courtyard_plans():
		for tile:Variant in court.tiles:
			var at:=Frame.box_center(tile)
			sites.append({"kind":"court","id":str(court.id)+"/"+str(at),"at":at,"height":maxf(float(court.base_y),demo.state.ground_height(at))+.026,"yaw":0.,"mesh":ring})
func update(demo,strolling:bool)->void:
	visible_sites.clear()
	if not strolling or demo.edit_pending() or demo.gallery.busy or demo.life.budget_sync_pending():
		if is_instance_valid(layer):layer.hide()
		return
	if not is_instance_valid(layer):_setup(demo)
	layer.show();_sync(demo)
	var focus:=Vector2(demo.focus.x,demo.focus.z);var near:Array[Dictionary]=[]
	for site:Dictionary in sites:
		if focus.distance_to(site.at)<RADIUS:near.append(site)
	near.sort_custom(func(a,b):return focus.distance_squared_to(a.at)<focus.distance_squared_to(b.at))
	for i in range(slots.size()):
		var node:=slots[i];node.visible=i<near.size()
		if not node.visible:continue
		var site:Dictionary=near[i];var distance:float=focus.distance_to(site.at)
		var strength:float=(1.-smoothstep(3.,RADIUS,distance))*((.48 if site.kind=="court" else .26)+.12*pow(.5+.5*cos(demo.music._playback_clock()*TAU/.75),2.))
		node.mesh=site.mesh;node.position=Vector3(site.at.x,site.height,site.at.y);node.rotation.y=site.yaw
		node.material_override.set_shader_parameter("albedo_color",Color("ffd582") if site.kind=="court" else Color("edc978"))
		node.material_override.set_shader_parameter("metronome_strength",strength)
		visible_sites.append({"kind":site.kind,"id":site.id,"at":site.at,"distance":distance,"strength":strength})

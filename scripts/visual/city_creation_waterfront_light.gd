extends Node3D
## Reflections use published lamp geometry. Dusk veils are shallow, depth-tested
## atmospheric cards behind real columns/bridge arches/towers, not saved objects.
const Veil=preload("res://scripts/visual/shaders/creation_dusk_veil.gdshader")
const Bridges=preload("res://scripts/world/city_creation_bridge_plan.gd")
var demo
var epoch:Array=[]
var elapsed:=0.
var sources:Array[Vector3]=[]
var veils:Array[Node3D]=[]
var material:ShaderMaterial
var surface:QuadMesh
var targets:Array[Dictionary]=[]
var candidates:Array[Dictionary]=[]

func setup(owner)->void:
	demo=owner;name="WaterfrontLight";demo.add_child(self);demo.set_meta("waterfront_light",self)
	material=ShaderMaterial.new();material.shader=Veil
	surface=QuadMesh.new();surface.size=Vector2.ONE

func _process(delta:float)->void:
	elapsed+=delta
	if elapsed<.1:return
	elapsed=0.;refresh()

func refresh()->void:
	var city:RefCounted=demo.state
	if demo.life.last_revision!=city.revision:return
	var scenery:Node3D=demo.get_meta("street_wonders")
	var key:Array=[demo.town.get_instance_id(),city.get_instance_id(),city.revision,scenery.epoch,scenery.layers.size()]
	var samples:Node3D=demo.get_node_or_null("TraditionScenery/SecondStudyScenery")
	key.append([samples.get_instance_id(),samples.visible] if samples!=null else [])
	if epoch!=key:
		epoch=key;_collect(scenery)
	_select_targets()
	_bind_lamps()
	var low:=1.-smoothstep(.24,.35,float(demo.pitch))
	var camera_direction:Vector3=(demo.camera.global_position-demo.focus).normalized()
	var to_sun:Vector3=demo.sun.global_basis.z
	var back:=smoothstep(-.20,.75,-camera_direction.dot(to_sun))
	var strength:=low*(.25+.75*back) if demo.light_phase==1 else 0.
	material.set_shader_parameter("strength",strength)
	for i in range(veils.size()):
		var node:=veils[i];var row:Dictionary=targets[i];var at:Vector3=row.at
		var toward:Vector3=(demo.camera.global_position-at).normalized()
		node.position=at-Vector3(toward.x,0,toward.z)*float(row.width)*.40
		node.look_at(demo.camera.global_position,Vector3.UP)
		node.visible=strength>.001 and demo.camera.is_position_in_frustum(at)
	set_meta("diagnostics",{"lamps":sources.size(),"veils":veils.size(),"strength":strength,"phase":demo.light_phase})

func _collect(scenery:Node3D)->void:
	sources.clear();candidates.clear()
	for node:Node3D in scenery.layers:
		if node.has_meta("water_lamp"):sources.append(node.to_global(node.get_meta("water_lamp")))
	var samples:Node3D=demo.get_node_or_null("TraditionScenery/SecondStudyScenery")
	if samples!=null and samples.visible:
		for node:Node3D in samples.get_children():
			if node.has_meta("water_lamp"):sources.append(node.to_global(node.get_meta("water_lamp")))
	for house:Dictionary in demo.state.houses:
		var id:=str(house.id)
		if not demo.town.house_roots.has(id):continue
		var root:Node3D=demo.town.house_roots[id]
		var tall:=false;var top:=1.7
		for cell:Dictionary in house.cells:top=maxf(top,(int(cell.level)+1)*1.7)
		tall=top>=5.1 or str(house.get("signature",""))=="bell_keep"
		if not tall and not root.has_meta("ancient_temple") and not root.has_meta("ancient_villa") and str(house.get("architecture",""))!="portico":continue
		var at:=Vector3(house.origin[0],float(house.get("base_y",0.))+top*.6,house.origin[1])
		candidates.append({"at":at,"width":maxf(3.,top*.9),"height":maxf(3.,top*1.4)})
	for road:Dictionary in demo.state.roads:
		if not demo.town.road_roots.has(str(road.id)):continue
		for bridge:Dictionary in demo.state.road_profile(road).get("bridge_runs",[]):
			if str(bridge.get("family",""))=="clockwork_truss":continue
			var point:Dictionary=Bridges._point(bridge.samples,(float(bridge.start)+float(bridge.end))*.5)
			candidates.append({"at":Vector3(point.at.x,float(bridge.deck_y)*.7+.7,point.at.y),"width":7.,"height":4.})

func _select_targets()->void:
	var next:Array[Dictionary]=candidates.duplicate()
	next.sort_custom(func(a:Dictionary,b:Dictionary)->bool:return Vector3(a.at).distance_squared_to(demo.focus)<Vector3(b.at).distance_squared_to(demo.focus))
	if next.size()>24:next.resize(24)
	# Retain actual cards while only their order changes during camera motion.
	if next.size()==targets.size() and next.all(func(row:Dictionary)->bool:return row in targets):return
	for node:Node3D in veils:remove_child(node);node.queue_free()
	veils.clear();targets=next
	for row:Dictionary in targets:
		var card:=MeshInstance3D.new();card.name="DuskBacklight";card.mesh=surface;card.material_override=material
		card.scale=Vector3(row.width,row.height,1.);card.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;add_child(card);veils.append(card)

func _bind_lamps()->void:
	var ordered:Array[Vector3]=sources.duplicate()
	ordered.sort_custom(func(a:Vector3,b:Vector3)->bool:return a.distance_squared_to(demo.focus)<b.distance_squared_to(demo.focus))
	var rows:=PackedVector4Array()
	for i in range(16):
		var at:Vector3=ordered[i] if i<ordered.size() else Vector3.ZERO
		rows.append(Vector4(at.x,at.y,at.z,1. if i<ordered.size() else 0.))
	demo.town.water_material.set_shader_parameter("water_lamp_count",mini(16,ordered.size()))
	demo.town.water_material.set_shader_parameter("water_lamps",rows)

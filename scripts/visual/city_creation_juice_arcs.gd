extends RefCounted
const Materials=preload("res://scripts/visual/city_creation_metronome_material.gd")
var layer:Node3D
var slots:Array[Dictionary]=[]
var emitted:=0
func setup(parent:Node3D)->void:
	layer=Node3D.new();layer.name="JuicePartnerArcs";parent.add_child(layer)
	for i in range(8):
		var node:=MeshInstance3D.new();node.name="PartnerGoldArc_"+str(i);node.material_override=Materials.glow(true);node.material_override.set_shader_parameter("albedo_color",Color("d5a34c"))
		node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;layer.add_child(node);node.hide()
		slots.append({"node":node,"clock":-100.,"from":"","to":""})
	if parent.is_inside_tree() and parent.get_viewport().get_camera_3d()!=null:preload("res://scripts/visual/city_creation_shader_warmup.gd").warm(layer,slots[0].node.material_override)
func emit(city:RefCounted,from:String,to:String,clock:float)->void:
	var a:Dictionary={};var b:Dictionary={}
	for house:Dictionary in city.houses:
		if str(house.id)==from:a=house
		if str(house.id)==to:b=house
	if a.is_empty() or b.is_empty():return
	var start:=Vector2(a.origin[0],a.origin[1]);var finish:=Vector2(b.origin[0],b.origin[1])
	if start.distance_to(finish)<.002:return
	var normal:=Vector2(-(finish-start).y,(finish-start).x).normalized()
	var bend:=minf(2.,start.distance_to(finish)*.18);var points:Array[Vector3]=[]
	for i in range(25):
		var t:=float(i)/24.;var at:=start.lerp(finish,t)+normal*sin(PI*t)*bend
		points.append(Vector3(at.x,maxf(city.street_height(at),city.Terrain.WATER_LEVEL)+.08+4.*t*(1.-t)*.14,at.y))
	var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES);surface.set_normal(Vector3.UP)
	for i in range(24):
		var axis:Vector3=points[i+1]-points[i];var side:=Vector3(-axis.z,0,axis.x).normalized()*.095
		for j in range(6):
			var end:=j in [1,2,5];surface.set_uv(Vector2(float(i+(1 if end else 0))/24.,1. if j in [1,4,5] else 0.))
			surface.add_vertex((points[i+1] if end else points[i])+side*(1. if j in [1,4,5] else -1.))
	var slot:Dictionary=slots[emitted%slots.size()];emitted+=1
	slot.node.mesh=surface.commit();slot.clock=clock;slot.from=from;slot.to=to;slot.node.show()
func update(clock:float)->void:
	for row:Dictionary in slots:
		var age:=clock-float(row.clock);row.node.visible=age>=0. and age<.65
		if row.node.visible:
			row.node.material_override.set_shader_parameter("flow_phase",age/.65)
			row.node.material_override.set_shader_parameter("metronome_strength",sin(PI*age/.65))
func clear()->void:
	for row:Dictionary in slots:row.clock=-100.;row.node.hide()

extends RefCounted
const GlowMaterial=preload("res://scripts/visual/city_creation_metronome_material.gd")
var mesh:MeshInstance3D
func setup(owner:Node)->void:
	mesh=MeshInstance3D.new();mesh.name="EraGoldenRipple";mesh.material_override=GlowMaterial.glow();mesh.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;owner.add_child(mesh);mesh.hide()
func update(city:RefCounted,at:Vector2,age:float)->void:
	mesh.visible=age>=0. and age<6.
	if not mesh.visible:return
	var phase:=fposmod(age,1.5)/1.5;var radius:=.8+phase*19.;var width:=.12+.15*phase
	var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES);surface.set_normal(Vector3.UP)
	for i in range(64):
		var first:=Vector2.from_angle(TAU*i/64.);var last:=Vector2.from_angle(TAU*(i+1)/64.)
		for point:Vector2 in [at+first*radius,at+last*(radius+width),at+last*radius,at+first*radius,at+first*(radius+width),at+last*(radius+width)]:
			surface.add_vertex(Vector3(point.x,city.street_height(point)+.065,point.y))
	mesh.mesh=surface.commit();mesh.material_override.set_shader_parameter("metronome_strength",(1.-phase)*.8)

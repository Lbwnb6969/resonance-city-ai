extends RefCounted
## Opaque stylized glazing, independent of wall palettes and wall batching.
const PREFIX:="recessed_glass_v1/"
static func material(renderer,group:int)->StandardMaterial3D:
	var key:=PREFIX+str(group)
	if not renderer.materials.has(key):
		var glass:=StandardMaterial3D.new();glass.albedo_color=Color("344e53");glass.roughness=.24;glass.metallic=.04;glass.metallic_specular=.65
		glass.set_meta("creation_facade_glass",group);glass.emission_enabled=true;renderer.materials[key]=glass
		phase(renderer,renderer.light_phase)
	return renderer.materials[key]
static func phase(renderer,value:int)->void:
	for key:String in renderer.materials:
		if not key.begins_with(PREFIX):continue
		var glass:StandardMaterial3D=renderer.materials[key];var group:int=glass.get_meta("creation_facade_glass")
		glass.emission=Color("e6b778") if group==1 else Color("b6c6c1")
		glass.emission_energy_multiplier=[0.,.12,.38][value]*(1. if group==1 else .25 if group==2 else 0.)

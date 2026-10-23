extends RefCounted
## Rebind after atomic field publication; phases only change shared uniforms.
static func materials(renderer:Node3D)->Array:
	var targets:Array=[renderer.ground_material,renderer._shared_road_material(),renderer.promenade.road_material(),renderer.path_edge.material]
	for key:String in ["lawn","grass"]:
		if renderer.meadow.materials.has(key):targets.append(renderer.meadow.materials[key])
	return targets.filter(func(material):return material!=null)
static func bind(renderer:Node3D)->void:
	for material:ShaderMaterial in materials(renderer):
		material.set_shader_parameter("ground_contact_field",renderer.ground_contact_field.texture)
		var bounds:Rect2=renderer.Bounds.LAND_RECT
		material.set_shader_parameter("ground_contact_world_rect",Vector4(bounds.position.x,bounds.position.y,bounds.size.x,bounds.size.y))
		material.set_shader_parameter("ground_contact_range",renderer.GroundContactField.RANGE)
		material.set_shader_parameter("ground_contact_enabled",true)
		material.set_shader_parameter("window_light_phase",[0.,.5,1.][renderer.light_phase])

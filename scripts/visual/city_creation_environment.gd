extends RefCounted
## Shared three-phase light rig; light changes never rebuild geometry or PCM.
var environment: Environment
var sky_material: ProceduralSkyMaterial
var sun: DirectionalLight3D

func setup(parent: Node3D) -> void:
	var world := WorldEnvironment.new()
	world.name = "ValleyEnvironment"
	environment = Environment.new()
	sky_material = ProceduralSkyMaterial.new()
	var sky := Sky.new()
	sky.sky_material = sky_material
	environment.background_mode = Environment.BG_COLOR
	environment.sky = sky
	environment.ambient_light_source = Environment.AMBIENT_SOURCE_SKY
	environment.ambient_light_sky_contribution = 0.65
	environment.tonemap_mode = Environment.TONE_MAPPER_FILMIC
	environment.tonemap_white = 3.5
	world.environment = environment
	parent.add_child(world)
	sun = DirectionalLight3D.new()
	sun.shadow_opacity = 0.68
	sun.shadow_blur = 1.35
	sun.shadow_enabled = true
	sun.directional_shadow_max_distance = 85.0
	sun.shadow_bias = 0.025
	parent.add_child(sun)
	apply(0)

func apply(phase: int) -> void:
	var row: Array = [
		["7faecc","e8dec8","d8e2dc","fff0cf",0.88,0.48,0.78,Vector3(-46,-34,0),"f2ead8"],
		["5d7ea6","f0bfa0","b9a698","ffb878",0.72,0.44,0.80,Vector3(-22,-48,0),"e1d5c8"],
		["182738","2c4257","1e2f40","8aa8d6",0.36,0.34,0.95,Vector3(-38,25,0),"a6b9d3"]
	][phase]
	sky_material.sky_top_color = Color(row[0])
	sky_material.sky_horizon_color = Color(row[1])
	sky_material.ground_horizon_color = Color(row[1]).darkened(0.12)
	sky_material.ground_bottom_color = Color("6b7c5e").darkened(0.45 if phase==2 else 0.0)
	environment.background_color = Color(row[2])
	environment.ambient_light_color = Color(row[8])
	environment.ambient_light_energy = row[5]
	environment.tonemap_exposure = row[6]
	sun.light_color = Color(row[3])
	sun.light_energy = row[4]
	sun.rotation_degrees = row[7]

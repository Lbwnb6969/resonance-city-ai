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
	environment.tonemap_white = 1.85
	world.environment = environment
	parent.add_child(world)
	sun = DirectionalLight3D.new()
	sun.shadow_opacity = 0.68
	sun.shadow_blur = 1.4
	sun.shadow_enabled = true
	sun.directional_shadow_max_distance = 85.0
	sun.shadow_bias = 0.025
	parent.add_child(sun)
	apply(0)

func apply(phase: int) -> void:
	# Measured in the Compatibility viewport: exposure 1.08 with the new sky
	# and 1.15 sun clips cream walls and paths. Preserve the stronger warm
	# lighting but lower daylight exposure; night keeps its own moonlit range.
	var row: Array = [
		["78a8c8","efe3cc","d8e2dc","fff1d0",1.15,0.65,0.68,Vector3(-46,-34,0),"f2ead8"],
		["5d7ea6","f0bfa0","b9a698","ffb878",0.82,0.48,0.78,Vector3(-22,-48,0),"e1d5c8"],
		["182738","2c4257","1e2f40","6b82a8",0.28,0.34,1.08,Vector3(-38,25,0),"a6b9d3"]
	][phase]
	sky_material.sky_top_color = Color(row[0])
	sky_material.sky_horizon_color = Color(row[1])
	sky_material.ground_horizon_color = Color(row[1]).darkened(0.12)
	sky_material.ground_bottom_color = Color("70825e").darkened(0.45 if phase==2 else 0.0)
	environment.background_color = Color(row[2])
	environment.ambient_light_color = Color(row[8])
	environment.ambient_light_energy = row[5]
	environment.tonemap_exposure = row[6]
	sun.light_color = Color(row[3])
	sun.light_energy = row[4]
	sun.rotation_degrees = row[7]

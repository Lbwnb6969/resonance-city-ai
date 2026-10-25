extends RefCounted
## Shared three-phase light rig; light changes never rebuild geometry or PCM.
var environment: Environment
var sky_material: ProceduralSkyMaterial
var sun: DirectionalLight3D
var view_pitch:=.8

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
	# Short-range screen-space contact grounds eaves, stairs and tree roots;
	# broad sunlight and sky remain independent, as in TG's terrain light bake.
	environment.ssao_enabled = true
	environment.ssao_radius = 0.75
	environment.ssao_intensity = 1.1
	environment.ssao_power = 1.25
	environment.ssao_detail = 0.5
	environment.ssao_light_affect = 0.10
	environment.tonemap_mode = Environment.TONE_MAPPER_FILMIC
	environment.tonemap_white = 1.85
	world.environment = environment
	parent.add_child(world)
	sun = DirectionalLight3D.new()
	# Two cascades keep near facade detail without drawing the whole town
	# into four maps. Normal bias is calibrated against our 1.7m stories.
	sun.directional_shadow_mode = DirectionalLight3D.SHADOW_PARALLEL_2_SPLITS
	sun.directional_shadow_split_1 = 0.30
	sun.directional_shadow_blend_splits = true
	sun.shadow_normal_bias = 1.50
	sun.shadow_opacity = 0.74
	sun.shadow_blur = 1.4
	sun.shadow_enabled = true
	sun.directional_shadow_max_distance = 85.0
	sun.shadow_bias = 0.025
	parent.add_child(sun)
	apply(0)

func apply(phase: int) -> void:
	# Measured with real cream facades in the Compatibility viewport. Keep
	# daylight below clipping so plaster grain and cornices survive the sun.
	# Warm direct light and cooler sky fill retain readable shaded facades.
	var row: Array = [
		["78a8c8","efe3cc","d8e2dc","fff1dc",0.95,0.52,0.64,Vector3(-46,-34,0),"f2ead8"],
		["5d7ea6","f0bfa0","b9a698","ffc18e",0.78,0.46,0.76,Vector3(-22,-48,0),"e1d5c8"],
		["182738","2c4257","1e2f40","6b82a8",0.28,0.34,1.08,Vector3(-38,25,0),"a6b9d3"]
	][phase]
	sky_material.sky_top_color = Color(row[0])
	sky_material.sky_horizon_color = Color(row[1])
	sky_material.ground_horizon_color = Color(row[1]).darkened(0.12)
	sky_material.ground_bottom_color = Color("858876").darkened(0.45 if phase==2 else 0.0)
	environment.background_color = Color(row[2])
	environment.ambient_light_color = Color(row[8])
	environment.ambient_light_energy = row[5]
	environment.tonemap_exposure = row[6]
	sun.light_color = Color(row[3])
	sun.light_energy = row[4]
	sun.rotation_degrees = row[7]
	set_view(view_pitch)

func set_view(pitch:float)->void:
	view_pitch=pitch
	var low:=1.-smoothstep(.18,.50,pitch)
	environment.fog_enabled=low>.001
	environment.fog_mode=Environment.FOG_MODE_DEPTH
	environment.fog_depth_begin=22.
	environment.fog_depth_end=lerpf(260.,150.,low)
	environment.fog_depth_curve=2.
	environment.fog_light_color=sky_material.sky_top_color.lerp(environment.background_color,.38)
	environment.fog_light_energy=.65
	environment.fog_sky_affect=0.

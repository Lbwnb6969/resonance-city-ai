extends SceneTree
## GPU colour-space contract for the actual production palette include.
var failures: Array[String] = []
func _initialize() -> void: _run.call_deferred()
func _run() -> void:
	root.size = Vector2i(320,80)
	var scene := Node3D.new()
	root.add_child(scene)
	var camera := Camera3D.new()
	camera.projection = Camera3D.PROJECTION_ORTHOGONAL
	camera.size = 1.0
	camera.position = Vector3(0,0,2)
	scene.add_child(camera)
	var shader := Shader.new()
	shader.code = 'shader_type spatial;\nrender_mode unshaded;\n#include "res://scripts/visual/shaders/creation_meadow_palette.gdshaderinc"\nuniform vec3 local_color;\nvoid fragment() { ALBEDO=meadow_world_tint(vec2(0.0),local_color); }'
	var local := Color(0.23,0.36,0.19)
	var mean := Color(0.3385393622,0.3378297793,0.3377306064)
	var samples: Array[Color] = [mean.linear_to_srgb(),Color(0.46,0.62,0.57),Color(0.71,0.64,0.75)]
	var expected: Array[Color] = [local]
	for index in range(4):
		var material := ShaderMaterial.new()
		material.shader = shader
		material.set_shader_parameter("local_color",Vector3(local.r,local.g,local.b))
		if index > 0:
			var image := Image.create(1,1,false,Image.FORMAT_RGBA8)
			image.fill(samples[index-1])
			material.set_shader_parameter("grass2_world_tint",ImageTexture.create_from_image(image))
			material.set_shader_parameter("grass2_world_tint_enabled",true)
			# Use the actual quantized texel and independent Color conversions.
			var tint := image.get_pixel(0,0).srgb_to_linear()
			var linear := local.srgb_to_linear()
			var resolved := Color(linear.r*tint.r/mean.r,linear.g*tint.g/mean.g,linear.b*tint.b/mean.b).linear_to_srgb()
			expected.append(local.lerp(resolved,0.42))
		var quad := MeshInstance3D.new()
		var mesh := QuadMesh.new()
		mesh.size = Vector2(0.99,0.99)
		quad.mesh = mesh
		quad.material_override = material
		quad.position.x = float(index)-1.5
		scene.add_child(quad)
	for frame in range(6): await process_frame
	var frame := root.get_texture().get_image()
	var measured: Array = []
	for index in range(4):
		var actual := frame.get_pixel(40+index*80,40)
		measured.append([actual.r,actual.g,actual.b])
		var target := expected[index]
		if maxf(absf(actual.r-target.r),maxf(absf(actual.g-target.g),absf(actual.b-target.b)))>0.012:
			failures.append("GPU sample %d disagrees with linear multiplicative field" % index)
	print("GRASS2_WORLD_TINT_RESULT ",JSON.stringify({"ok":failures.is_empty(),"failures":failures,"display":DisplayServer.get_name(),"measured":measured,"expected":expected}))
	scene.queue_free()
	await process_frame
	quit(0 if failures.is_empty() else 1)

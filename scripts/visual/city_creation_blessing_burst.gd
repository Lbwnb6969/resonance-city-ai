extends RefCounted
## A short lit gold ring and chimney puffs for one real first-batch completion.
## Reuses the wall paper-grain/contact-AO pipeline; no boxes or audio voices.
const Wall = preload("res://scripts/visual/city_creation_wall_material.gd")
static func play(demo: Node3D, id: String) -> void:
	var house: Dictionary = demo.town._house_record(id)
	if house.is_empty(): return
	var root := Node3D.new()
	root.name = "SiteBlessingBurst_"+id
	demo.add_child(root)
	root.position = Vector3(house.origin[0],float(house.get("base_y",0.0)),house.origin[1])
	var material := Wall.merged(Wall.source(Color("e7b55b")),root.position.y,1.7,Wall.WallShader)
	material.set_shader_parameter("albedo_color",Color("e7b55b"))
	var ring := MeshInstance3D.new()
	var torus := TorusMesh.new()
	torus.inner_radius = .94; torus.outer_radius = 1.
	torus.rings = 32; torus.ring_segments = 6
	ring.mesh = torus; ring.material_override = material
	ring.position.y = .07; ring.scale = Vector3(.4,.12,.4)
	ring.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	root.add_child(ring)
	var tween := root.create_tween().set_parallel(true)
	tween.tween_property(ring,"scale",Vector3(2.4,.0001,2.4),.85).set_trans(Tween.TRANS_QUAD).set_ease(Tween.EASE_OUT)
	var highest := 0
	for cell: Dictionary in house.cells: highest = maxi(highest,int(cell.level))
	for i: int in range(3):
		var puff := MeshInstance3D.new()
		var sphere := SphereMesh.new()
		sphere.radius = .065; sphere.height = .13; sphere.radial_segments = 8; sphere.rings = 4
		puff.mesh = sphere; puff.material_override = material
		puff.position = Vector3(.12*i,(highest+1)*1.7+.35,.08*i)
		root.add_child(puff)
		tween.tween_property(puff,"position",puff.position+Vector3(.2,.65,.12),.7)
		tween.tween_property(puff,"scale",Vector3.ONE*.0001,.7).set_delay(.15)
	tween.chain().tween_callback(root.queue_free)

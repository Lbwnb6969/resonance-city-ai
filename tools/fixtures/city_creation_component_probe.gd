extends RefCounted
## Inspect published production materials and capture comparable architectural views.
const Eras = preload("res://scripts/world/city_creation_eras.gd")
static func capture(demo: Node3D, directory: String) -> Dictionary:
	var tree := demo.get_tree()
	var coverage := {}; var representatives := {}; var invalid := 0
	for house: Dictionary in demo.state.houses:
		var id := str(house.id)
		var node: Node3D = demo.town.house_roots[id]
		var era: String = demo.state.house_era(house)
		for mesh: MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			var material := mesh.material_override as ShaderMaterial
			if material == null or not material.get_meta("creation_wall_batch",false): continue
			var kind := int(material.get_shader_parameter("surface_kind"))
			if kind <= 0: continue
			coverage[kind] = int(coverage.get(kind,0))+1
			var bounds: Vector2 = material.get_shader_parameter("component_bounds")
			if not bounds.is_finite() or bounds.y <= bounds.x: invalid += 1
			if kind == 2 or (kind == 3 and era == "clockwork") or (kind == 4 and era == "modern_eco") or (kind == 1 and era == "pastoral"):
				if not representatives.has(era) or kind == 2: representatives[era] = {"house":house,"kind":kind}
	for era: String in Eras.IDS:
		if not representatives.has(era): continue
		var house: Dictionary = representatives[era].house
		var center := Vector2(float(house.origin[0]),float(house.origin[1]))
		var top := 1.7
		for cell: Dictionary in house.cells: top = maxf(top,(int(cell.level)+1)*1.7)
		demo.focus = Vector3(center.x,float(house.get("base_y",0.))+top*.52,center.y)
		demo.zoom = 9.; demo.yaw = .65
		for phase in range(3):
			while demo.light_phase != phase: demo._toggle_light()
			demo.pitch = .56; demo._update_camera()
			await tree.process_frame; await RenderingServer.frame_post_draw
			tree.root.get_texture().get_image().save_png(directory+"/component_"+era+"_"+str(phase)+".png")
		while demo.light_phase != 0: demo._toggle_light()
		demo.pitch = deg_to_rad(10.); demo._update_camera()
		await tree.process_frame; await RenderingServer.frame_post_draw
		tree.root.get_texture().get_image().save_png(directory+"/component_"+era+"_low10.png")
	var ui_fits := true
	demo.focus = Vector3(float(demo.state.houses[3].origin[0]),2.8,float(demo.state.houses[3].origin[1]))
	demo.zoom = 18.; demo.pitch = .75; demo._update_camera(); demo.ui_layer.visible = true
	for size: Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size = size
		await tree.process_frame; demo._update_camera()
		demo.spatial_popover.open_for_house("h4")
		for i in range(60): await tree.process_frame
		await RenderingServer.frame_post_draw
		ui_fits = ui_fits and Rect2(Vector2.ZERO,Vector2(size)).encloses(demo.spatial_popover.card.get_global_rect())
		tree.root.get_texture().get_image().save_png(directory+"/era_names_ui_"+str(size.x)+".png")
	demo.spatial_popover.close()
	return {"coverage":coverage,"representatives":representatives.keys(),"invalid_bounds":invalid,
		"ui_fits":ui_fits,"ok":ui_fits and coverage.has(1) and coverage.has(2) and coverage.has(3) and coverage.has(4) and representatives.size()==4 and invalid==0}

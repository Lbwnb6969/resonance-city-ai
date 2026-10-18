extends SceneTree
## External probe: load only the exported scene and assets from an empty cwd.
var checks: Array[Dictionary] = []
var failed := false
var output := ""
var demo: Node3D

func _initialize() -> void: _run.call_deferred()

func _check(ok: bool, label: String) -> void:
	checks.append({"passed":ok,"description":label})
	if not ok:
		failed = true
		push_error("CREATION_BUNDLE_FAIL "+label)

func _wait_edit() -> void:
	var until := Time.get_ticks_msec()+15000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(),"latest exported edit publishes")
	await physics_frame
	await physics_frame

func _click(at: Vector3) -> void:
	var screen: Vector2 = demo.camera.unproject_position(at)
	var motion := InputEventMouseMotion.new()
	motion.position = screen
	motion.global_position = screen
	root.push_input(motion)
	await process_frame
	for pressed: bool in [true,false]:
		var event := InputEventMouseButton.new()
		event.position = screen
		event.global_position = screen
		event.button_index = MOUSE_BUTTON_LEFT
		event.pressed = pressed
		root.push_input(event)
		await process_frame
	await _wait_edit()

func _key(code: int, control: bool) -> void:
	for pressed: bool in [true,false]:
		var event := InputEventKey.new()
		event.keycode = code
		event.pressed = pressed
		event.ctrl_pressed = control
		root.push_input(event)
		await process_frame
	await _wait_edit()

func _personal_bytes() -> PackedByteArray:
	return FileAccess.get_file_as_bytes("user://city_creation_v1.json") if FileAccess.file_exists("user://city_creation_v1.json") else PackedByteArray()

func _run() -> void:
	for argument: String in OS.get_cmdline_user_args():
		if argument.begins_with("--result="): output = argument.trim_prefix("--result=")
	assert(not output.is_empty())
	root.size = Vector2i(1440,900)
	var personal_before := _personal_bytes()
	var original_buses:=AudioServer.bus_count
	_check(not root.has_node("MCPRuntimeServer"),"development server is excluded from the playable pack")
	_check(not FileAccess.file_exists("res://tests/creation_bundle_probe.gd") and not FileAccess.file_exists("res://PROJECT.md"),"developer tests and project notes are excluded")
	var scene_path: String = ProjectSettings.get_setting("application/run/main_scene")
	_check(scene_path=="res://scenes/city_creation.tscn","pack starts the current free creation scene")
	var packed: PackedScene = load(scene_path)
	demo = packed.instantiate()
	demo.persistence = false
	demo.collection_directory=output.get_base_dir().path_join("包内收藏")
	root.add_child(demo)
	demo.life.set_process(false)
	await physics_frame
	await physics_frame
	_check(not demo.persistence and demo.state.houses.size()==6 and demo.tool_buttons.size()==9,"fresh six-house playable opening has all nine tools")
	var opening_smoke: MeshInstance3D=demo.town.house_roots.h2.find_child("BakerySmoke",true,false)
	_check(opening_smoke!=null and not opening_smoke.visible and demo.town.house_roots.h2.get_meta("chimneys").size()==1,"exported bakery has one real roof chimney and prebuilt smoke stays off before attended baking")
	_check(demo.town.terrain_surface.blocks.size()==16 and demo.state.ground_height(Vector2(25.37,20.19))>1.0,"exported opening includes real valley hills and physical terrain")
	var texture: Texture2D = demo.town.grass_world_tint
	_check(texture!=null and texture.get_width()==512 and texture.get_height()==512 and texture.get_image().has_mipmaps(),"imported original world tint loads with its runtime mip chain in the pack")
	var imported_pixels := texture.get_image()
	imported_pixels.convert(Image.FORMAT_RGB8)
	# Original PNG independently decoded to RGB8 with Pillow. Godot makes
	# its near-opaque alpha fully opaque on import; the tint uses RGB only.
	# Compare level zero before our existing runtime-generated mip chain.
	var digest := HashingContext.new()
	digest.start(HashingContext.HASH_SHA256)
	digest.update(imported_pixels.get_data().slice(0,512*512*3))
	_check(digest.finish().hex_encode()=="6fd0bd25f43ebae6b4a1ebd8d17f8671db6f326f203645d4be7dfe1fa8f5900a","resource loading preserves every original world tint RGB texel")
	_check(demo.town.ground_material.get_shader_parameter("grass2_world_tint_enabled") and demo.town.ground_material.get_shader_parameter("grass2_world_tint")==texture,"actual packed ground material binds the shared tint")
	var cliff: Texture2D=demo.town.ground_material.get_shader_parameter("cliff_surface")
	_check(demo.town.ground_material.get_shader_parameter("cliff_surface_enabled") and cliff!=null and cliff.get_width()==2048 and cliff.get_height()==2048 and cliff.get_image().get_mipmap_count()==11,"exported terrain binds the recovered full cliff texture with all twelve mip levels")
	var cliff_pixels: Image=cliff.get_image()
	cliff_pixels.convert(Image.FORMAT_RGB8)
	digest.start(HashingContext.HASH_SHA256)
	digest.update(cliff_pixels.get_data().slice(0,2048*2048*3))
	_check(digest.finish().hex_encode()=="2127432f22a893df71afed37bf59dc493924363b27ba23b1def4a51670bc6ab1","exported cliff preserves every recovered RGB texel without treating height alpha as a transparent border")
	var original: Dictionary = demo.state.snapshot()
	var cells: int = demo.state.houses[2].cells.size()
	await _click(Vector3(-5.299,0.9,0))
	_check(demo.state.houses[2].cells.size()==cells+1,"real exported mouse picking expands the intended house")
	await _key(KEY_Z,true)
	_check(demo.state.snapshot().houses==original.houses,"exported Ctrl+Z restores the original authored houses")
	await _key(KEY_Y,true)
	_check(demo.state.houses[2].cells.size()==cells+1,"exported Ctrl+Y restores the same construction")
	var save_path := output.get_base_dir().path_join("临时试玩作品.json")
	var saved: Dictionary = demo.state.save_city(save_path)
	var reloaded: RefCounted = demo.state.get_script().new()
	var loaded: Dictionary = reloaded.load_city(save_path)
	_check(saved.ok and loaded.ok and reloaded.snapshot()==demo.state.snapshot(),"temporary external save reloads exact authored city and life ledger")
	var until := Time.get_ticks_msec()+15000
	while demo.music.audio_report.is_empty() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.music.audio_report.is_empty() and demo.music._players.size()==9 and demo.music._effects.size()==4,"exported PCM synthesis builds nine loops and the fixed four effects")
	var spatial: Dictionary=demo.music.spatial_music_report()
	_check(spatial.bus_count==6 and AudioServer.bus_count==original_buses+6 and demo.music._players.wood.bus==demo.music._players.wood_deep.bus and demo.music._players.wood.bus!=demo.music._players.concert.bus and demo.music._players.foundation.bus==&"Master","exported stereo routing adds only six private panners and keeps the shared harmonic bed centered")
	_check(float(demo.music.audio_report.mix_peaks.absolute_stereo_with_four_short_voices)<1.0,"exported stereo channel peak bound includes all original long voices and four simultaneous spatial short voices")
	await _key(KEY_J,false)
	_check(demo.journal.panel.visible and demo.journal.close_button.has_focus() and demo.journal.rows.size()==3,"exported journal opens three real growth chapters with keyboard focus")
	var journal_card_ids: Array=demo.journal.cards.get_children().map(func(node: Node)->int: return node.get_instance_id())
	var journal_goal_ids: Array=demo.journal.goal_buttons.map(func(node: Node)->int: return node.get_instance_id())
	await _key(KEY_ESCAPE,false)
	await _key(KEY_L,false)
	_check(demo.ledger.visible() and demo.ledger.body.text.contains("采购") and demo.ledger.rows.size()==2,"exported L opens a real read-only operating ledger for the original bakery and venue")
	await _key(KEY_ESCAPE,false)
	_check(not demo.ledger.visible(),"exported Escape returns from operating ledger to construction")
	_check(not demo.journal.panel.visible and demo.state.growth_memories.is_empty(),"exported Escape returns to building without inventing growth rewards")
	demo.selected_house="h1"
	demo.select_tool(4)
	var before_palette: Array=demo.state.houses[0].cells.duplicate(true)
	var palette: Dictionary=demo.state.set_house_palette("h1",3)
	demo._after_edit(palette,"terrace")
	await _wait_edit()
	_check(palette.ok and demo.state.houses[0].cells==before_palette and demo.town.house_roots.h1.get_meta("palette_colors")==demo.TownRenderer.PALETTES[3] and demo.journal.picker.item_count==7,"exported free house palette renders and chapter reward choices are present")
	_check(demo.district_style_picker.item_count==5 and demo.music._players.has("wood_market") and demo.music._players.has("wood_sylvan") and demo.music._players.wood_market.stream.data!=demo.music._players.wood_sylvan.stream.data,"five exported theme choices include distinct market and woodland PCM")
	var clock: float = demo.music._playback_clock()
	await create_timer(1.2).timeout
	_check(demo.music._playback_clock()-clock>1.0,"actual exported playback clock advances with the configured driver")
	for level in [1,2]:
		var raised: Dictionary=demo.state.add_cell("h1",0,0,level)
		demo._after_edit(raised,"room")
		await physics_frame
		await process_frame
	var towers: Array=demo.town.house_roots.h1.get_meta("tower_cells",[])
	_check(towers.size()==1 and absf(float(towers[0].bell_size.x)-0.44)<0.001 and demo.music.tower_count()==1,"exported three-storey house loads the actual extracted bell mesh and derived crown")
	await _key(KEY_J,false)
	_check(demo.journal.rows[2].goals[2].value==1 and demo.journal._goal_labels[2][2].text.contains("1 / 1") and demo.journal.cards.get_children().map(func(node: Node)->int: return node.get_instance_id())==journal_card_ids and demo.journal.goal_buttons.map(func(node: Node)->int: return node.get_instance_id())==journal_goal_ids,"exported journal reopens with the newly built tower goal and retains its original cards and actions")
	await _key(KEY_ESCAPE,false)
	var tower_ray:=PhysicsRayQueryParameters3D.create(Vector3(-7.8,10,-6),Vector3(-7.8,0,-6),1)
	var tower_hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(tower_ray)
	_check(not tower_hit.is_empty() and str(tower_hit.collider.get_meta("house_id",""))=="h1" and float(tower_hit.position.y)>6.0,"exported visible tower roof retains real triangle picking")
	await _key(KEY_9,false)
	_check(demo.tool==8 and demo.terrain_brush.panel.visible,"exported ninth tool opens the real terrain controls")
	var terrain_points: Array[Vector2]=[Vector2(12,-9)]
	var terrain_edit: Dictionary=demo.state.add_terrain_stroke(terrain_points,"raise",3.5)
	demo._after_edit(terrain_edit,"terrain")
	await physics_frame
	await process_frame
	_check(terrain_edit.ok and demo.state.ground_height(Vector2(12,-9))>0.5 and demo.state.snapshot().schema==2,"exported sculpt updates the actual terrain and upgrades only the new terrain work")
	var terrain_saved: Dictionary=demo.state.save_city(save_path)
	var terrain_loaded: Dictionary=reloaded.load_city(save_path)
	reloaded.prepare_ground_height()
	_check(terrain_saved.ok and terrain_loaded.ok and reloaded._ground_terrain.vertices==demo.state._ground_terrain.vertices,"external packed terrain work restores exact authored height grid")
	demo.select_tool(7)
	var district_points: Array[Vector2]=[Vector2(-6,-8),Vector2(-6,8)]
	var district: Dictionary=demo.state.add_district(district_points,10.0,"warm",true)
	demo._after_edit(district,"terrace")
	await _wait_edit()
	_check(district.ok and demo.state.districts[-1].adaptive and demo.music._house_music.h1.mix.weights.size()==2,"exported district derives adaptive two-color arrangement from real house uses")
	_check(demo.district_adaptive_button.text=="随用途变化配器" and demo.music.get_child_count()==13,"exported adaptive control keeps the fixed music voice pool")
	await _key(KEY_O,true)
	_check(demo.gallery.panel.visible,"exported Ctrl+O opens the collection interface")
	demo.gallery.panel.title_input.text="包内河湾"
	demo.gallery.panel.title_input.grab_focus()
	await _key(KEY_ENTER,false)
	until=Time.get_ticks_msec()+10000
	while demo.gallery.busy and Time.get_ticks_msec()<until: await process_frame
	var work: Dictionary=demo.gallery.library.read(demo.gallery.last_saved_id)
	_check(work.ok and work.world.houses==demo.state.houses and work.world.terrain_strokes==demo.state.terrain_strokes and work.world.districts==demo.state.districts,"exported name entry saves complete terrain and adaptive districts outside the pack")
	demo.gallery.panel.open_buttons[demo.gallery.last_saved_id].grab_focus()
	await _key(KEY_ENTER,false)
	until=Time.get_ticks_msec()+10000
	while demo.gallery.busy and Time.get_ticks_msec()<until: await process_frame
	demo.life.set_process(false)
	_check(not demo.gallery.panel.visible and demo.gallery.last_opened_id==str(work.get("id","")) and demo.state.dirty and demo.music.get_child_count()==13 and demo.town.districts_visible,"exported card loads its city, preserves current selection/tool display and retains the voice pool")
	_check(demo.state.districts[-1].adaptive and demo.music._house_music.h1.mix.weights.size()==2,"exported collection restore rederives adaptive accompaniment from its saved city")
	demo.select_tool(0)
	var court_example: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/庭院河湾样例.json"))
	var court_restore: Dictionary=demo.state.restore(court_example)
	demo._after_edit(court_restore,"room")
	await _wait_edit()
	var court_plans: Array=demo.state.courtyard_plans()
	_check(court_restore.ok and court_plans.size()==1 and demo.town.courtyards.roots.size()==1 and demo.town.courtyards.source_parts.size()==3,"exported closed courtyard derives paving and actual Foundation LOD0 fountain")
	var court_root: Node3D=demo.town.courtyards.roots.values()[0]
	var court_bodies: Array=court_root.find_children("*","StaticBody3D",true,false)
	_check(not court_plans[0].fountain.is_empty() and court_bodies.size()==1 and court_bodies[0].collision_layer==4 and demo.music.get_child_count()==13,"exported fountain publishes its real stone collision outside terrain picking and keeps fixed music voices")
	var court_saved: Dictionary=demo.state.save_city(save_path)
	var court_loaded: Dictionary=reloaded.load_city(save_path)
	_check(court_saved.ok and court_loaded.ok and reloaded.courtyard_plans()==court_plans,"exported courtyard rederives identically after external save and load")
	var landform: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/地貌河湾样例.json"))
	var landform_restore: Dictionary=demo.state.restore(landform)
	demo._after_edit(landform_restore,"terrain")
	await _wait_edit()
	var boulders:=0
	var boulder_kinds: Dictionary={}
	for block: Node3D in demo.town.meadow.blocks.values():
		for part: String in ["Meadow_boulder_a","Meadow_boulder_b"]:
			var batch: MultiMeshInstance3D=block.get_node_or_null(part)
			if batch!=null:
				boulders+=batch.multimesh.instance_count
				boulder_kinds[part]=true
	_check(landform_restore.ok and demo.terrain_brush.mode_picker.item_count==5 and boulders>0 and boulder_kinds.size()==2,"exported landscape example restores real sculpted slopes and both extracted Foundation stone meshes")
	_check(demo.state.waters.size()==1 and demo.state.terrain_strokes.size()==12 and demo.town.courtyards.roots.size()==1 and demo.music.get_child_count()==13,"exported landscape combines pond ridges and courtyard with the fixed music pool")
	var pond_leaf: Mesh=demo.town.lilypads._mesh("leaf")
	var pond_flower: Mesh=demo.town.lilypads._mesh("flower")
	var pond_counts: Dictionary=demo.town.lilypads.diagnostics()
	_check(pond_counts.leaves>0 and pond_leaf.surface_get_array_len(0)==12 and pond_leaf.surface_get_array_index_len(0)==48 and pond_flower.surface_get_array_len(0)==80 and pond_flower.surface_get_array_index_len(0)==180,"exported authored pond displays the recovered leaf mother mesh and preserves both complete source topologies")
	digest.start(HashingContext.HASH_SHA256)
	digest.update(FileAccess.get_file_as_bytes("res://资源/自然参考/睡莲/叶.json"))
	var leaf_source_ok:=digest.finish().hex_encode()=="9481c7db56abf6b0ee7b711fd570644734df96dc7b67b76add40372327319451"
	digest.start(HashingContext.HASH_SHA256)
	digest.update(FileAccess.get_file_as_bytes("res://资源/自然参考/睡莲/花.json"))
	_check(leaf_source_ok and digest.finish().hex_encode()=="f2c498f2e974e3a30d62f3591d41424c310ad18b27fc134a2568d60b99403346","exported lily source JSON retains every original byte independently of the runtime winding and UV adaptation")
	var pad_texture: Texture2D=load("res://资源/自然参考/睡莲/叶形.png")
	var flower_texture: Texture2D=load("res://资源/自然参考/睡莲/花色.png")
	var pad_pixels: Image=pad_texture.get_image()
	pad_pixels.convert(Image.FORMAT_RGBA8)
	var pad_r:=PackedByteArray()
	var pad_bytes:=pad_pixels.get_data()
	for pixel in range(256*256): pad_r.append(pad_bytes[pixel*4])
	digest.start(HashingContext.HASH_SHA256);digest.update(pad_r)
	var mask_ok:=digest.finish().hex_encode()=="268117cf46a2998d1984c3b358bdacf905957eeb377dc874336489f8af32a0c1"
	var flower_pixels: Image=flower_texture.get_image()
	flower_pixels.convert(Image.FORMAT_RGB8)
	digest.start(HashingContext.HASH_SHA256);digest.update(flower_pixels.get_data().slice(0,256*256*3))
	_check(mask_ok and digest.finish().hex_encode()=="b64d96e4205eeb8a616869c00e106136c7fd34e62dcd84be01df33fda8e4116d" and pad_texture.get_image().get_mipmap_count()==8 and flower_texture.get_image().get_mipmap_count()==8,"exported lily data R and petal RGB preserve every recovered base texel and all nine mip levels")
	var shore_clusters: Dictionary={}
	var shore_batches_ok:=true
	var shore_grass:=0
	for shore_root: Node3D in demo.town.shore.blocks.values():
		shore_batches_ok=shore_batches_ok and shore_root.get_child_count()<=3
		for shore_record: Dictionary in shore_root.get_meta("candidates",[]):
			var cluster_id:=str(shore_record.get("cluster_id",""))
			if cluster_id.is_empty(): continue
			if not shore_clusters.has(cluster_id): shore_clusters[cluster_id]={"main":0,"companion":0,"grass":0}
			var role:=str(shore_record.get("cluster_role",""))
			if shore_clusters[cluster_id].has(role): shore_clusters[cluster_id][role]+=1
			if role=="grass": shore_grass+=1
	var shore_groups_ok:=not shore_clusters.is_empty()
	for shore_group: Dictionary in shore_clusters.values():
		shore_groups_ok=shore_groups_ok and shore_group.main==1 and shore_group.companion>=2 and shore_group.companion<=3
	_check(shore_groups_ok and shore_grass>0,"exported landscape derives complete stable shore groups with one flat main stone companions and nearby grass")
	_check(shore_batches_ok and demo.town.shore._mesh("stone") is ArrayMesh and demo.music.get_child_count()==13,"exported shore uses the irregular shared stone mother mesh and original three-part block batches without extra music voices")
	var pond_example: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/睡莲池塘样例.json"))
	var pond_restore: Dictionary=demo.state.restore(pond_example)
	demo._after_edit(pond_restore,"history")
	await _wait_edit()
	var pond_example_counts: Dictionary=demo.town.lilypads.diagnostics()
	_check(pond_restore.ok and demo.state.waters.size()==2 and pond_example_counts.leaves==8 and pond_example_counts.flowers==2 and demo.music.get_child_count()==13,"exported independent pond sample derives eight leaves and two flowers from authored water with the original audio pool")
	var pond_saved: Dictionary=demo.state.save_city(save_path)
	_check(pond_saved.ok and reloaded.load_city(save_path).ok and reloaded.waters==demo.state.waters and reloaded.snapshot().schema==2 and int(reloaded.life_progress.concerts)==0,"exported pond sample saves only original schema-two water facts without decoration fields or completed activity")
	var plateau_example: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/台地河湾样例.json"))
	var plateau_restore: Dictionary=demo.state.restore(plateau_example)
	demo._after_edit(plateau_restore,"terrain")
	await _wait_edit()
	var plateau_hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(-15,12,-2),Vector3(-15,-5,-2),2))
	_check(plateau_restore.ok and demo.state.snapshot().schema==4 and not plateau_hit.is_empty() and absf(float(plateau_hit.position.y)-1.98)<.001 and demo.town.terrain_surface.blocks.size()>0,"exported plateau sample restores schema four and real flat-top ground collision")
	var plateau_saved: Dictionary=demo.state.save_city(save_path)
	_check(plateau_saved.ok and reloaded.load_city(save_path).ok and reloaded.snapshot().schema==4 and reloaded.terrain_strokes==demo.state.terrain_strokes and demo.music.get_child_count()==13,"exported plateau saves and reloads its exact new terrain strokes with the fixed music pool")
	var styles_example: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/建筑街景样例.json"))
	var styles_restore: Dictionary=demo.state.restore(styles_example)
	demo._after_edit(styles_restore,"room")
	await _wait_edit()
	var stone_textured:=false
	for instance: MeshInstance3D in demo.town.house_roots.h2.find_children("*","MeshInstance3D",true,false):
		var material:=instance.material_override as StandardMaterial3D
		if material!=null and material.albedo_texture!=null and material.albedo_texture.resource_path=="res://资源/建筑参考/石砌街屋.png": stone_textured=true
	_check(styles_restore.ok and demo.house_style_picker.item_count==3 and demo.town.house_roots.h1.get_meta("house_style")=="timber" and demo.town.house_roots.h2.get_meta("house_style")=="stone" and stone_textured and demo.TownRenderer.StoneWallTexture.get_image().get_mipmap_count()==10,"exported street example contains both real geometric styles and Foundation masonry texture with full mip chain")
	var styles_saved: Dictionary=demo.state.save_city(save_path)
	_check(styles_saved.ok and reloaded.load_city(save_path).ok and reloaded.snapshot().schema==5 and reloaded.houses==demo.state.houses and demo.music.get_child_count()==13,"exported schema-five styles survive real save/load and keep original thirteen music players")
	var sand: Texture2D=demo.town.ground_material.get_shader_parameter("bank_sand")
	_check(sand!=null and sand.get_width()==2048 and sand.get_image().get_mipmap_count()==11 and demo.town.ground_material.get_shader_parameter("bank_sand_enabled")==true and demo.town.water_material.get_shader_parameter("bank_sand")==sand,"exported Foundation sand is shared between real land and water with eleven mip levels")
	var town_example: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/经营河湾样例.json"))
	var town_restore: Dictionary=demo.state.restore(town_example)
	demo._after_edit(town_restore,"room")
	await _wait_edit()
	demo.ledger.open_panel()
	_check(town_restore.ok and demo.state.houses.size()==28 and demo.life.connected_houses.size()==28 and demo.ledger.rows.size()==8 and int(demo.state.life_progress.purchases)==0 and demo.music.get_child_count()==13,"exported operating-town sample starts with twenty-eight connected homes eight genuine ledger businesses and zero purchases")
	var town_smoke: Array=[]
	for house: Dictionary in demo.state.houses:
		if str(house.role)=="bakery": town_smoke.append(demo.town.house_roots[str(house.id)].find_child("BakerySmoke",true,false))
	_check(town_smoke.size()==3 and town_smoke[0].mesh==town_smoke[1].mesh and town_smoke[0].mesh==town_smoke[2].mesh and town_smoke[0].material_override==town_smoke[2].material_override,"exported three-bakery town shares one six-puff GPU mesh and material across all bakery smoke")
	demo.ledger.close_panel()
	var relay_example: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/庆典接力样例.json"))
	var relay_restore: Dictionary=demo.state.restore(relay_example)
	demo._after_edit(relay_restore,"room")
	await _wait_edit()
	var relay_started: Dictionary=demo.life.start_relay("h5")
	demo._capture_journeys()
	demo.selected_house="h5";demo.select_tool(4);demo._refresh_place();demo._refresh_concert()
	_check(relay_restore.ok and relay_started.ok and demo.concert_button.is_visible_in_tree() and not demo.relay_button.visible and demo.life.relay_status().total==2 and demo.state.journey_checkpoint.schema==2,"exported two-venue relay has a version-two checkpoint and one clear active cancellation action")
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(output.get_base_dir()+"/包内活动接力.png")
	var relay_saved: Dictionary=demo.state.save_city(save_path)
	_check(relay_saved.ok and reloaded.load_city(save_path).ok and reloaded.journey_checkpoint.schema==2 and reloaded.journey_checkpoint.relay==demo.state.journey_checkpoint.relay and int(reloaded.life_progress.concerts)==0,"exported active relay saves exact station order and cursor before any actual performance completes")
	demo.life.cancel_concert();demo._capture_journeys()
	_check(demo.state.journey_checkpoint.schema==1 and not demo.state.journey_checkpoint.has("relay") and demo.music.get_child_count()==13,"exported relay cancellation returns to ordinary journeys with the fixed audio pool")
	var terrace_example: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/露台花架样例.json"))
	var terrace_restore: Dictionary=demo.state.restore(terrace_example)
	demo._after_edit(terrace_restore,"room")
	await _wait_edit()
	var canopy_count:=0
	var canopy_shape_count:=0
	for house_root: Node3D in demo.town.house_roots.values():
		if not house_root.get_meta("terrace_canopy",{}).is_empty(): canopy_count+=1
		for shape: CollisionShape3D in house_root.find_children("CanopyPick","CollisionShape3D",true,false):
			if shape.shape is ConcavePolygonShape3D: canopy_shape_count+=1
	_check(terrace_restore.ok and demo.state.houses.size()==7 and canopy_count>=3 and canopy_shape_count==canopy_count and demo.music.get_child_count()==13,"exported terrace sample derives shaded upper gardens with real original-cell cloth picking and the fixed music pool")
	var terrace_saved: Dictionary=demo.state.save_city(save_path)
	_check(terrace_saved.ok and reloaded.load_city(save_path).ok and reloaded.houses==demo.state.houses and reloaded.snapshot().schema==5 and int(reloaded.life_progress.concerts)==0,"exported canopy sample saves only its existing schema-five authored cells without adding rewards or decoration fields")
	demo.focus=Vector3(10.5,0.7,9.5)
	demo.zoom=22.0
	demo._update_camera()
	var reply_example: Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/街坊连奏样例.json"))
	var reply_restore: Dictionary=demo.state.restore(reply_example)
	demo._after_edit(reply_restore,"room")
	await _wait_edit()
	demo.focus=Vector3(-5.2,0.7,-3.5)
	demo.zoom=24.0
	demo._update_camera()
	demo.select_tool(7)
	await process_frame
	_check(reply_restore.ok and demo.life.district_reply_pairs().size()==1 and demo.district_reply_button.is_visible_in_tree() and demo.music.audio_report.reply_pcm_bytes==1411200,"exported reply city derives the actual routed district pair and forty shared short PCMs")
	var heard_call:=false
	var heard_answer:=false
	var spatial_reply:=true
	var reply_until:=Time.get_ticks_msec()+17000
	var call_phrase: int=-1
	while Time.get_ticks_msec()<reply_until and not heard_answer:
		await process_frame
		var reply: Dictionary=demo.music.reply.report()
		if not bool(reply.audible) or float(reply.elapsed)<=0.04: continue
		var reply_player: AudioStreamPlayer=demo.music.reply._player
		var reply_pan: AudioEffectPanner=AudioServer.get_bus_effect(AudioServer.get_bus_index(reply_player.bus),0)
		var reply_at: Vector2=reply.to_position if str(reply.phase)=="answer" else reply.from_position
		spatial_reply=spatial_reply and absf(reply_pan.pan-demo.music.spatial.map_pan(reply_at))<.001
		if str(reply.phase)=="call":
			heard_call=true
			call_phrase=int(reply.phrase)
		if str(reply.phase)=="answer" and int(reply.phrase)==call_phrase+1: heard_answer=true
	_check(heard_call and heard_answer and demo.music.get_child_count()==13,"exported production clock actually plays one cross-district question and its following answer using the existing thirteen voices")
	_check(heard_call and heard_answer and spatial_reply,"exported real question and answer use the stereo direction of their actual source houses")
	_check(_personal_bytes()==personal_before,"isolated validation leaves the personal city file byte-identical")
	await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(output.get_base_dir()+"/运行包首屏.png")
	var opening := {"houses":demo.state.houses.size(),"tools":demo.tool_buttons.size(),"terrain_blocks":demo.town.terrain_surface.blocks.size(),"long_players":demo.music._players.size(),"effect_players":demo.music._effects.size(),"world_tint_size":[texture.get_width(),texture.get_height()],"clock_advance":demo.music._playback_clock()-clock,"driver":AudioServer.get_driver_name(),"display":DisplayServer.get_name(),"persistent":demo.persistence}
	demo.music.set_process(false)
	for player: AudioStreamPlayer in demo.music._players.values(): player.stop()
	for player: AudioStreamPlayer in demo.music._effects: player.stop()
	await create_timer(0.15).timeout
	demo.queue_free()
	await process_frame
	# Dummy audio retires queued stop/playback references on its next mix.
	# Let that block complete before terminating the external probe process.
	await create_timer(0.15).timeout
	_check(AudioServer.bus_count==original_buses,"exported scene teardown removes all owned stereo buses and preserves the original audio layout")
	FileAccess.open(output.get_base_dir()+"/Godot及第三方许可.json",FileAccess.WRITE).store_string(JSON.stringify({"engine":Engine.get_version_info(),"engine_license":Engine.get_license_text(),"third_party_licenses":Engine.get_license_info(),"third_party_copyright":Engine.get_copyright_info()},"\t")+"\n")
	FileAccess.open(output,FileAccess.WRITE).store_string(JSON.stringify({"status":"FAIL" if failed else "PASS","engine":Engine.get_version_info()["string"],"checks":checks,"opening":opening,"scope":"Exported current creation scene with real GPU, isolated editing/save/load and Dummy PCM clock; physical listening and long stress are separate"},"\t")+"\n")
	print("CREATION_BUNDLE ","FAIL" if failed else "PASS"," checks=",checks.size())
	quit(1 if failed else 0)

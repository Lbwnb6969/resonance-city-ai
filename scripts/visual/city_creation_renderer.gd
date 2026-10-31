class_name CityCreationRenderer
extends Node3D
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
## All geometry is authored here. Picking and building use the same local cells.
const UNIT := 1.8
const FLOOR := 1.7
## The 80m parcel retains metre-sized chunks: a local paint stroke should only
## replace the natural and terrain blocks it actually touches.
const Bounds := preload("res://scripts/world/city_creation_bounds.gd")
const EDITABLE_WORLD_RECT := Bounds.WORLD_RECT
const VEGETATION_BLOCK_SIZE := 8.0
const Foliage = preload("res://scripts/visual/city_creation_foliage.gd")
const Classical=preload("res://scripts/visual/city_creation_classical.gd")
const Meadow = preload("res://scripts/visual/city_creation_meadow.gd")
const GroundShader = preload("res://scripts/visual/shaders/creation_ground.gdshader")
const CliffSurface = preload("res://资源/自然参考/层理岩壁.png")
const Terrain = preload("res://scripts/world/city_creation_terrain.gd")
const TerrainSurface = preload("res://scripts/visual/city_creation_terrain_surface.gd")
const Valley=preload("res://scripts/visual/city_creation_valley.gd")
var valley:Node3D
const TerrainPreview = preload("res://scripts/visual/city_creation_terrain_preview.gd")
const ContactShader = preload("res://scripts/visual/shaders/creation_contact.gdshader")
const RoadShader = preload("res://scripts/visual/shaders/creation_road.gdshader")
const WaterShader = preload("res://scripts/visual/shaders/creation_water.gdshader")
const WaterField = preload("res://scripts/visual/city_creation_water_field.gd")
const ShorePalette = preload("res://scripts/visual/city_creation_shore_palette.gd")
const GroundContactField = preload("res://scripts/visual/city_creation_contact_field.gd")
const Shore = preload("res://scripts/visual/city_creation_shore.gd")
const Lilypads = preload("res://scripts/visual/city_creation_lilypads.gd")
const Frontage = preload("res://scripts/world/city_creation_frontage.gd")
const Architecture = preload("res://scripts/visual/city_creation_architecture.gd")
const WallMaterial = preload("res://scripts/visual/city_creation_wall_material.gd")
const HouseStyles = preload("res://scripts/visual/city_creation_house_styles.gd")
const StoneWallTexture = preload("res://资源/建筑参考/石砌街屋.png")
const BuildingContext = preload("res://scripts/visual/city_creation_building_context.gd")
const Junctions = preload("res://scripts/world/city_creation_junctions.gd")
const RoofSurface=preload("res://scripts/visual/city_creation_roof_surface.gd")
const JoinedRoofShader = preload("res://scripts/visual/shaders/creation_joined_roof.gdshader")
const Gables = preload("res://scripts/visual/city_creation_gables.gd")
const Tower = preload("res://scripts/visual/city_creation_tower.gd")
const RoundTower = preload("res://scripts/visual/city_creation_round_tower.gd")
const RoundTowerPlan = preload("res://scripts/world/city_creation_round_tower_plan.gd")
const Highland = preload("res://scripts/visual/city_creation_highland.gd")
var highland:=Highland.new()
const RoadStairs = preload("res://scripts/visual/city_creation_road_stairs.gd")
const Bridges = preload("res://scripts/visual/city_creation_bridge.gd")
const TramTracks = preload("res://scripts/visual/city_creation_tram_tracks.gd")
var tram_tracks := TramTracks.new()
const RoadEarthworks = preload("res://scripts/visual/city_creation_road_earthworks.gd")
const RoundaboutVisual = preload("res://scripts/visual/city_creation_roundabout_visual.gd")
const Roundabouts = preload("res://scripts/world/city_creation_roundabouts.gd")
const Promenade = preload("res://scripts/visual/city_creation_promenade.gd")
const Passage = preload("res://scripts/world/city_creation_passage.gd")
const PathEdge = preload("res://scripts/visual/city_creation_path_edge.gd")
const PathPebbles = preload("res://scripts/visual/city_creation_path_pebbles.gd")
const Resonance = preload("res://scripts/visual/city_creation_resonance.gd")
const TravelVisual = preload("res://scripts/visual/city_creation_travel_visual.gd")
const Craft = preload("res://scripts/visual/city_creation_craft.gd")
const Cafe = preload("res://scripts/visual/city_creation_cafe.gd")
const Courtyards = preload("res://scripts/visual/city_creation_courtyards.gd")
const MeshBatcher = preload("res://scripts/visual/city_creation_mesh_batcher.gd")
const HouseColors = preload("res://scripts/visual/city_creation_house_colors.gd")
const BudgetRebuild = preload("res://scripts/visual/city_creation_budget_rebuild.gd")
const BakerySmoke = preload("res://scripts/visual/city_creation_bakery_smoke.gd")
const TerraceCanopy = preload("res://scripts/visual/city_creation_terrace_canopy.gd")
const Conservatory = preload("res://scripts/visual/city_creation_conservatory.gd")
const ConservatoryPlan = preload("res://scripts/world/city_creation_conservatory_plan.gd")
const ArcadePlan = preload("res://scripts/world/city_creation_arcade_plan.gd")
const Arcade = preload("res://scripts/visual/city_creation_arcade.gd")
const Stepping = preload("res://scripts/visual/city_creation_stepping.gd")
const SteppingPlan = preload("res://scripts/world/city_creation_stepping_plan.gd")
const ManualLinks = preload("res://scripts/world/city_creation_manual_links.gd")
const ManualLinkShader = preload("res://scripts/visual/shaders/creation_manual_link.gdshader")
const Touch = preload("res://scripts/visual/city_creation_touch.gd")
const HarmonyFlora = preload("res://scripts/visual/city_creation_harmony_flora.gd")
const Wildlife = preload("res://scripts/visual/city_creation_wildlife.gd")
const Bunting = preload("res://scripts/visual/city_creation_bunting.gd")
var bakery_smoke:=BakerySmoke.new()
const PALETTES := [
	[Color("ead9b4"),Color("bb7054"),Color("647a70")],
	[Color("e9dfc8"),Color("66948b"),Color("557466")],
	[Color("d9c4a7"),Color("a85f4f"),Color("66798a")],
	[Color("f0deb8"),Color("bda179"),Color("537b73")]
]
const FINISH_PALETTES := {
	"dawn":[Color("efd3b2"),Color("b8614e"),Color("7d9271")],
	"tide":[Color("e2e5d6"),Color("538e94"),Color("4d727a")],
	"festival":[Color("d9dfe2"),Color("465a78"),Color("c1a16b")],
	"nocturne":[Color("ece8df"),Color("324860"),Color("d8a852")],
	"river_jade":[Color("cee6dc"),Color("355f63"),Color("c8a16a")],
	"opal":[Color("e8e1f0"),Color("73608d"),Color("bfa978")]
}
var state: RefCounted
var record_only := false
var budget_rebuild: RefCounted
var prepared_vegetation: Dictionary = {}
var water_field := WaterField.new()
var ground_contact_field := GroundContactField.new()
var building_context := BuildingContext.new()
var building_input_signature := -1
var shore := Shore.new()
var lilypads := Lilypads.new()
var touch := Touch.new()
var light_phase := 0
var ecology=preload("res://scripts/visual/city_creation_ecology.gd").new()
var wildlife := Wildlife.new()
var foliage := Foliage.new()
var meadow: Node3D
var road_draft_field=preload("res://scripts/visual/city_creation_road_draft_field.gd").new()
var _preview_height_key: Array=[]
var _preview_heights: Dictionary={}
var ground_material: ShaderMaterial
var terrain_surface: Node3D
var background_trees: Array[Dictionary] = []
var background_height_signature := -1
var grass_world_tint: ImageTexture
var contact_material: ShaderMaterial
var road_material: ShaderMaterial
var road_join_signatures: Dictionary = {}
var road_layout_signature := -1
var preview_junctions := Junctions.new()
var road_measure_mesh: BoxMesh
var road_measure_material: StandardMaterial3D
var road_geometry_cache: Dictionary = {}
var road_outline_fingerprints: Dictionary = {}
var road_segment_bins: Dictionary = {}
var road_box_mesh: BoxMesh
var path_edge := PathEdge.new()
var path_pebbles := PathPebbles.new()
var promenade := Promenade.new()
var era_road_field=preload("res://scripts/visual/city_creation_era_road_field.gd").new()
var era_streets=preload("res://scripts/visual/city_creation_era_streets.gd").new()
var conservatory := Conservatory.new()
var resonance := Resonance.new()
var living_music=preload("res://scripts/visual/city_creation_living_music.gd").new()
var grand_festival_visual=preload("res://scripts/visual/city_creation_grand_festival_visual.gd").new()
var travel_visual := TravelVisual.new()
var craft := Craft.new()
var cafes := Cafe.new()
var courtyards := Courtyards.new()
const ROAD_BIN_SIZE := 2.0
var concert_layer: Node3D
var concert_fingerprint := ""
var concert_pulse_material: ShaderMaterial
var house_music_layer: Node3D
var house_music_source := ""
var house_music_fingerprint := ""
var house_music_material: ShaderMaterial
var districts_layer: Node3D
var districts_visible := false
var districts_fingerprint := -1
var bread_layer: Node3D
var ecology_layer: Node3D
var bread_roots: Dictionary = {}
var bread_fingerprints: Dictionary = {}
const DISTRICT_COLORS := {"warm":Color("c9ab72"),"deep":Color("73afb4"),"weave":Color("b79abd"),"market":Color("d69b78"),"sylvan":Color("8aaa8c")}
const DISTRICT_NAMES := {"warm":"暖庭","deep":"深流","weave":"织机","market":"市集长街","sylvan":"林间静谧"}
var road_outlines: Dictionary = {}
var buildings: Node3D
var landscape: Node3D
var water_layer: Node3D
var water_fingerprint := -1
var water_components: Dictionary = {}
var water_edit_stats := {"changed":false,"elapsed_ms":0.0,"contours":0,"triangles":0,"strokes":0}
var roads_layer: Node3D
var vegetation_layer: Node3D
var preview: Node3D
var materials: Dictionary = {}
var mesh_batcher := MeshBatcher.new()
var vegetation_blocks: Dictionary = {}
var vegetation_block_fingerprints: Dictionary = {}
var vegetation_id_blocks: Dictionary = {}
var vegetation_fingerprints: Dictionary = {}
var vegetation_data_fingerprints: Dictionary = {}
var vegetation_visibility: Dictionary = {}
var vegetation_obstacle_signature := -1
var tree_meshes: Dictionary = {}
var tree_materials: Dictionary = {}
var vegetation_brush_mesh: ArrayMesh
var vegetation_brush_materials: Dictionary = {}
var water_material: ShaderMaterial
var house_fingerprints: Dictionary = {}
var house_geometry_cache:Dictionary={}
var _house_dependency_revision:=-1
var _house_dependency_global:=0
var _house_dependency_bounds:Dictionary={}
var house_roots: Dictionary = {}
var road_fingerprints: Dictionary = {}
var road_roots: Dictionary = {}
var road_water_signatures: Dictionary = {}
var rebuild_stats := {"houses_changed":0,"roads_changed":0,"houses_removed":0,"roads_removed":0,"vegetation_blocks_changed":0,"vegetation_instances":0,"elapsed_ms":0.0}
var setup_stats:Dictionary={}

func setup(city_state: RefCounted, defer_rebuild:bool=false) -> void:
	var began:=Time.get_ticks_usec()
	state = city_state
	if not defer_rebuild:
		era_road_field.prepare(state);era_road_field.upload()
		water_field.setup(state)
		ground_contact_field.prepare(state)
		ground_contact_field.upload()
	else:water_field._state=state
	setup_stats={"fields_ms":float(Time.get_ticks_usec()-began)/1000.}
	began=Time.get_ticks_usec()
	landscape = Node3D.new()
	landscape.name = "RiverGarden"
	add_child(landscape)
	water_layer = Node3D.new()
	water_layer.name = "EditableWater"
	add_child(water_layer)
	buildings = Node3D.new()
	buildings.name = "EditableHouses"
	add_child(buildings)
	roads_layer = Node3D.new()
	roads_layer.name = "ContinuousStreets"
	add_child(roads_layer)
	vegetation_layer = Node3D.new()
	vegetation_layer.name = "VegetationBlocks"
	add_child(vegetation_layer)
	meadow = Meadow.new()
	meadow.name = "NaturalMeadow"
	add_child(meadow)
	meadow.setup(state)
	meadow.set_water_field(water_field.texture)
	add_child(shore)
	shore.setup(state)
	add_child(lilypads)
	lilypads.setup(state)
	wildlife.name = "ValleyWildlife"
	add_child(wildlife)
	wildlife.setup(state,defer_rebuild)
	ecology_layer = Node3D.new()
	ecology_layer.name = "StreetEcology"
	add_child(ecology_layer)
	preview = Node3D.new()
	preview.name = "EditPreview"
	add_child(preview)
	concert_layer = Node3D.new()
	concert_layer.name = "StreetConcert"
	add_child(concert_layer)
	house_music_layer = Node3D.new()
	house_music_layer.name = "HouseMusicalResponse"
	add_child(house_music_layer)
	resonance.setup(house_music_layer)
	living_music.setup(self)
	grand_festival_visual.setup(self)
	travel_visual.setup(self)
	craft.setup(self)
	quality_visual.setup(self)
	cafes.setup(self)
	courtyards.setup(self)
	setup_stats.layers_ms=float(Time.get_ticks_usec()-began)/1000.;began=Time.get_ticks_usec()
	districts_layer = Node3D.new()
	districts_layer.name = "MusicalDistricts"
	add_child(districts_layer)
	districts_layer.visible = false
	bread_layer = Node3D.new()
	bread_layer.name = "BakeryCounterSupply"
	add_child(bread_layer)
	_build_landscape(defer_rebuild)
	setup_stats.landscape_ms=float(Time.get_ticks_usec()-began)/1000.;began=Time.get_ticks_usec()
	if not defer_rebuild:rebuild()
	else:_water_surface_material()
	setup_stats.finish_ms=float(Time.get_ticks_usec()-began)/1000.

func _clear(node: Node3D) -> void:
	for child in node.get_children():
		node.remove_child(child)
		child.queue_free()

func request_budget_rebuild() -> int:
	if budget_rebuild == null: budget_rebuild = BudgetRebuild.new()
	return budget_rebuild.request(self)

func poll_budget_rebuild(budget_ms: float = 3.5, allow_commit: bool = true) -> Dictionary:
	if budget_rebuild == null: return {"pending":false,"ready":false,"generation":0,"work_ms":0.0}
	return budget_rebuild.poll(self,budget_ms,allow_commit)

func cancel_budget_rebuild() -> void:
	if budget_rebuild != null: budget_rebuild.cancel()

func _exit_tree() -> void:
	if budget_rebuild != null: budget_rebuild.close()

func rebuild() -> void:
	_house_dependency_revision=-1
	_entrance_views.clear();_passage_views.clear();_frontage_views.clear();_entrance_view_key=[];_junction_view_key=[];music_catalog={}
	craft.layouts.clear();craft.layout_inputs.clear();craft.facades.clear()
	_craft_view_geometry.clear()
	craft.stock_inputs.clear()
	quality_visual.geometry_inputs.clear();quality_visual.geometry_signatures.clear()
	cancel_budget_rebuild()
	if state == null or buildings == null: return
	var started := Time.get_ticks_usec()
	rebuild_stats = {"houses_changed":0,"roads_changed":0,"houses_removed":0,"roads_removed":0,"vegetation_blocks_changed":0,"vegetation_instances":0,"elapsed_ms":0.0}
	era_road_field.prepare(state);era_road_field.upload()
	clear_preview()
	terrain_surface.rebuild()
	_rebuild_background_trees()
	_rebuild_water()
	building_context.prepare(state.houses,state.roads)
	building_input_signature = hash([state.houses,state.roads])
	rebuild_stats["architecture"] = building_context.stats.duplicate()
	var stage_started := Time.get_ticks_usec()
	var live_houses: Dictionary = {}
	for house: Dictionary in state.houses:
		var id := str(house["id"])
		live_houses[id] = true
		# Names are UI state. Only geometry and frontage clearance invalidate a mesh.
		var fingerprint := _house_fingerprint(house)
		if house_fingerprints.get(id,-1) == fingerprint: continue
		_remove_cached(id,house_roots,house_fingerprints)
		var root := _house(house)
		_merge_meshes(root)
		resonance.build(self,house,root)
		house_roots[id] = root
		house_fingerprints[id] = fingerprint
		rebuild_stats["houses_changed"] += 1
	for id: String in house_roots.keys():
		if live_houses.has(id): continue
		_remove_cached(id,house_roots,house_fingerprints)
		rebuild_stats["houses_removed"] += 1
	update_craft_progress()
	cafes.update(self,{},true)
	rebuild_stats["houses_ms"] = float(Time.get_ticks_usec()-stage_started)/1000.0
	stage_started = Time.get_ticks_usec()
	var live_roads: Dictionary = {}
	var layout_signature := _road_layout_key()
	if layout_signature != road_layout_signature:
		road_layout_signature = layout_signature
		preload("res://scripts/visual/city_creation_road_dirty_cache.gd").invalidate_sync(self)
		_prepare_road_layout()
	rebuild_stats["road_layout_ms"] = float(Time.get_ticks_usec()-stage_started)/1000.0
	path_pebbles.prepare(state)
	stage_started = Time.get_ticks_usec()
	for road: Dictionary in state.roads:
		var id := str(road["id"])
		live_roads[id] = true
		var fingerprint := _road_fingerprint(road)
		if road_fingerprints.get(id,-1) == fingerprint:
			_update_road_pebbles(road,road_roots[id])
			continue
		_remove_cached(id,road_roots,road_fingerprints)
		var root := _road(road)
		road_roots[id] = root
		road_fingerprints[id] = fingerprint
		rebuild_stats["roads_changed"] += 1
	for id: String in road_roots.keys():
		if live_roads.has(id): continue
		_remove_cached(id,road_roots,road_fingerprints)
		road_water_signatures.erase(id)
		rebuild_stats["roads_removed"] += 1
	rebuild_stats["roads_ms"] = float(Time.get_ticks_usec()-stage_started)/1000.0
	stage_started = Time.get_ticks_usec()
	var shared_masks := {}
	_rebuild_vegetation(shared_masks)
	rebuild_stats["vegetation_ms"] = float(Time.get_ticks_usec()-stage_started)/1000.0
	shore.rebuild(shared_masks)
	lilypads.rebuild()
	refresh_ecology()
	courtyards.install(self,courtyards.prepare(self))
	ground_contact_field.prepare(state)
	ground_contact_field.upload()
	_bind_ground_contact_field()
	rebuild_stats["contact_field"] = ground_contact_field.stats.duplicate()
	if districts_visible: _rebuild_districts()
	rebuild_stats["elapsed_ms"] = float(Time.get_ticks_usec()-started)/1000.0
	_bind_era_road_field()
	# The first local edit compares against the already visible city, just as
	# subsequent commits do. An empty baseline marks every domain dirty.
	if budget_rebuild==null:budget_rebuild=BudgetRebuild.new()
	budget_rebuild.record_published(state,self)

func _bind_era_road_field()->void:
	for material:ShaderMaterial in [_shared_road_material(),promenade.road_material(),path_edge.material]:
		if material!=null:era_road_field.bind_material(material)

func _bind_ground_contact_field() -> void:
	if grass_world_tint == null:
		var imported: Texture2D = preload("res://资源/自然参考/grass2_world_albedo_tint.png")
		var image := imported.get_image()
		image.generate_mipmaps()
		grass_world_tint = ImageTexture.create_from_image(image)
	# Ground, blades, road feathering and shallow water share one world tint.
	for material: ShaderMaterial in [water_material,path_edge.material]:
		if material!=null:
			material.set_shader_parameter("grass2_world_tint",grass_world_tint)
			material.set_shader_parameter("grass2_world_tint_enabled",true)
	var targets: Array = [ground_material]
	for part: String in ["lawn","grass"]:
		if meadow != null and meadow.materials.has(part): targets.append(meadow.materials[part])
	for material: ShaderMaterial in targets:
		if material == null: continue
		ShorePalette.configure(material)
		material.set_shader_parameter("grass2_world_tint",grass_world_tint)
		material.set_shader_parameter("grass2_world_tint_enabled",true)
		material.set_shader_parameter("ground_contact_field",ground_contact_field.texture)
		material.set_shader_parameter("ground_contact_world_rect",Vector4(Bounds.LAND_RECT.position.x,Bounds.LAND_RECT.position.y,Bounds.LAND_RECT.size.x,Bounds.LAND_RECT.size.y))
		material.set_shader_parameter("ground_contact_range",GroundContactField.RANGE)
		material.set_shader_parameter("ground_contact_enabled",true)
	preload("res://scripts/visual/city_creation_window_bounce.gd").bind(self)

func show_districts(visible: bool) -> void:
	districts_visible = visible
	districts_layer.visible = visible
	if visible: _rebuild_districts()

func _rebuild_districts() -> void:
	var members: Array = []
	for house: Dictionary in state.houses: members.append([house.id,house.origin,house.get("base_y",0.0)])
	var fingerprint := hash([state.districts,state.musical_links,members])
	if fingerprint == districts_fingerprint: return
	districts_fingerprint = fingerprint
	_clear(districts_layer)
	var outlines: Array = []
	for district: Dictionary in state.districts:
		var points: Array[Vector2] = []
		for point: Array in district.points: points.append(Vector2(float(point[0]),float(point[1])))
		outlines.append(_stroke_contours(points,float(district.width)*0.5))
	for index in range(state.districts.size()):
		var district: Dictionary = state.districts[index]
		var cuts: Array = []
		for later in range(index+1,outlines.size()): cuts.append(outlines[later])
		_district_surface(districts_layer,outlines[index],cuts,str(district.style),0.095)
		# A district with no current members is a saved intention, not a town
		# that fills itself. Labels explicitly show the real member count.
		var label := Label3D.new()
		label.text = "%s · %d处\n%s" % [district.name,state.district_members(str(district.id)).size(),DISTRICT_NAMES[district.style]]
		label.font_size = 32
		label.pixel_size = 0.014
		label.billboard = BaseMaterial3D.BILLBOARD_ENABLED
		label.no_depth_test = true
		label.modulate = Color("fff3d7")
		label.position = Vector3(float(district.points[0][0])-float(district.width)*0.5,0.50,float(district.points[0][1]))
		districts_layer.add_child(label)
	for link:Dictionary in ManualLinks.derive(state):
		var from_at:Vector2=link.from_position
		var to_at:Vector2=link.to_position
		var a:=Vector3(from_at.x,1.4+float(_house_record(link.from_id).get("base_y",0.0)),from_at.y)
		var b:=Vector3(to_at.x,1.4+float(_house_record(link.to_id).get("base_y",0.0)),to_at.y)
		var arc:=_manual_link_arc(districts_layer,a,b,.85)
		arc.name=str(link.id)
		arc.set_meta("manual_link",link.id)

func _manual_link_arc(parent:Node3D,a:Vector3,b:Vector3,strength:float)->MeshInstance3D:
	var instance:=MeshInstance3D.new()
	instance.mesh=resonance.arc_mesh if resonance.arc_mesh!=null else resonance._ribbon()
	var material:=ShaderMaterial.new()
	material.shader=ManualLinkShader
	material.set_shader_parameter("from_at",a)
	material.set_shader_parameter("to_at",b)
	material.set_shader_parameter("strength",strength)
	instance.material_override=material
	instance.custom_aabb=AABB(a,Vector3.ZERO).expand(b).grow(3.0)
	instance.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	parent.add_child(instance)
	return instance

func show_manual_link_preview(from_at:Vector2,to_at:Vector2,valid:bool,erasing:bool=false)->void:
	clear_preview()
	var a:=Vector3(from_at.x,float(state.ground_height(from_at))+1.2,from_at.y)
	var b:=Vector3(to_at.x,float(state.ground_height(to_at))+1.2,to_at.y)
	var arc:=_manual_link_arc(preview,a,b,1.0 if valid else .35)
	arc.name="ManualLinkPreview"
	if erasing: arc.material_override.set_shader_parameter("tint",Color("e19078"))
	arc.set_meta("valid",valid)
	arc.set_meta("erasing",erasing)

func _district_surface(parent: Node3D, contours: Array, cuts: Array, style: String, height: float) -> void:
	var vertices := _road_surface_vertices(contours,cuts)
	if vertices.is_empty(): return
	for index in range(vertices.size()): vertices[index].y = height
	var instance := _triangles(parent,vertices,Color.WHITE)
	var material := StandardMaterial3D.new()
	var color: Color = DISTRICT_COLORS[style]
	color.a = 0.27
	material.albedo_color = color
	material.transparency = BaseMaterial3D.TRANSPARENCY_ALPHA
	material.shading_mode = BaseMaterial3D.SHADING_MODE_UNSHADED
	material.cull_mode = BaseMaterial3D.CULL_DISABLED
	instance.material_override = material
	instance.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF

func show_district_preview(points: Array[Vector2], width: float, style: String) -> void:
	clear_preview()
	if points.is_empty(): return
	_district_surface(preview,_stroke_contours(points,width*0.5),[],style,0.115)

func update_bakery_supply(statuses: Dictionary) -> void:
	var live := {}
	for house: Dictionary in state.houses:
		var id := str(house.id)
		if not statuses.has(id): continue
		live[id] = true
		if house_roots.has(id): BakerySmoke.update(house_roots[id],statuses[id])
		var count := mini(3,int(statuses[id].stock))
		var fingerprint := hash([count,house.origin,house.cells,house.get("base_y",0.0),_frontage_signature(house)])
		if bread_fingerprints.get(id,-1)==fingerprint:
			bread_roots[id].set_meta("stock",int(statuses[id].stock))
			continue
		_remove_cached(id,bread_roots,bread_fingerprints)
		var root := Node3D.new()
		root.name = "Bread_"+id
		bread_layer.add_child(root)
		bread_roots[id] = root
		bread_fingerprints[id] = fingerprint
		root.set_meta("stock",int(statuses[id].stock))
		root.set_meta("displayed_loaves",0)
		var entrance := _primary_entrance(house)
		if not entrance.is_empty():
			var front := _entrance_point(entrance,Vector3(0.82,0.65,0.20))
			if _clearance_at(Vector2(front.x,front.z),str(entrance.cell_id),0.29):
				var side:Vector2=preload("res://scripts/world/city_creation_house_frame.gd").normal(entrance)
				var along := Vector3(float(side.y),0,-float(side.x))
				for bread in range(count):
					_crown(root,front+along*(-0.16+bread*0.16),Vector3(0.07,0.045,0.15),Color("d6a35d"))
				root.set_meta("displayed_loaves",count)
			root.set_meta("entrance_side",entrance.side)
		_merge_meshes(root)
	for id: String in bread_roots.keys():
		if not live.has(id): _remove_cached(id,bread_roots,bread_fingerprints)

var quality_visual: RefCounted=preload("res://scripts/visual/city_creation_quality_visual.gd").new()

var _craft_view_geometry: Array=[]
var _craft_view_traits: Array[Dictionary]=[]
var _craft_view_quality: Dictionary={}

func _changed_trait_houses(before: Dictionary,after: Dictionary,changed: Dictionary)->void:
	for id: String in before:
		if not after.has(id) or before[id]!=after[id]:changed[id]=true
	for id: String in after:
		if not before.has(id) or before[id]!=after[id]:changed[id]=true

func update_craft_progress() -> void:
	var geometry: Array=[state.get_instance_id(),state.revision]
	var traits: Array[Dictionary]=[state.house_improvements,state.house_culture,state.house_clockwork]
	if geometry!=_craft_view_geometry:
		# Edits/load/undo can change any frontage or clearance. Stock changes
		# cannot; only earned traits need geometry work between revisions.
		craft.progress(self)
		if quality_visual.layer!=null:quality_visual.progress(self)
	else:
		var changed: Dictionary={};var quality_changed: Dictionary={}
		for index in range(traits.size()):
			_changed_trait_houses(_craft_view_traits[index],traits[index],changed)
			if index==0:_changed_trait_houses(_craft_view_traits[index],traits[index],quality_changed)
		_changed_trait_houses(_craft_view_quality,state.building_quality,quality_changed)
		if not changed.is_empty():
			var ids: Array[String]=[];ids.assign(changed.keys());craft.progress(self,ids)
		if quality_visual.layer!=null and not quality_changed.is_empty():
			var ids: Array[String]=[]
			for id:String in quality_changed:
				if not quality_visual.pending_events.has(id):ids.append(id)
			if not ids.is_empty():quality_visual.progress(self,ids)
	_craft_view_geometry=geometry
	_craft_view_traits.clear()
	for row: Dictionary in traits:_craft_view_traits.append(row.duplicate(true))
	_craft_view_quality=state.building_quality.duplicate(true)

func update_workshop_supply(statuses: Dictionary) -> void:
	craft.supply(self,statuses)

func update_cafes(statuses: Dictionary) -> void:
	cafes.update(self,statuses)

func _remove_cached(id: String, roots: Dictionary, fingerprints: Dictionary) -> void:
	if not roots.has(id): return
	var root: Node3D = roots[id]
	if roots == house_roots: resonance.forget(id)
	root.get_parent().remove_child(root)
	root.queue_free()
	roots.erase(id)
	fingerprints.erase(id)


## Vegetation is a record-driven layer.  The record is the source of truth;
## this method only scans the small state array, compares fingerprints, and
## rebuilds blocks whose membership or derived visibility changed.  A house or
## road can therefore hide/show a plant without recreating unrelated trees.
func _rebuild_vegetation(shared_masks: Dictionary = {}, forced_blocks: Array[Vector2i] = [], local_only: bool = false) -> void:
	if (vegetation_layer == null and not record_only) or state == null:
		return
	var plants: Array = state.get("plants") if state.get("plants") is Array else []
	var obstacles: Array = [state.roads, _water_records()]
	for house: Dictionary in state.houses:
		var ground: Array = []
		for cell: Dictionary in house.cells:
			if int(cell.level) == 0: ground.append([cell.x,cell.z,cell.kind])
		obstacles.append([house.origin,ground])
	var obstacle_signature := hash(obstacles)
	var obstacles_changed := obstacle_signature != vegetation_obstacle_signature
	vegetation_obstacle_signature = obstacle_signature
	var next_by_block: Dictionary = {}
	var next_fingerprints: Dictionary = {}
	var next_data: Dictionary = {}
	var next_visibility: Dictionary = {}
	var next_id_blocks: Dictionary = {}
	var dirty_blocks: Dictionary = {}
	var entrances: Dictionary = meadow._entrances_by_house()
	for block: Vector2i in forced_blocks: dirty_blocks[block] = true
	for plant: Dictionary in plants:
		var id := str(plant.get("id", ""))
		if id.is_empty():
			continue
		var position := _plant_position(plant)
		var inside := _editable_world_rect().has_point(position)
		var block := _vegetation_block(position) if inside else Vector2i.ZERO
		var data_fingerprint := hash([plant.position,plant.kind,plant.scale,plant.seed])
		var visible := bool(vegetation_visibility.get(id,false))
		if obstacles_changed or vegetation_data_fingerprints.get(id,-1) != data_fingerprint:
			visible = inside and _vegetation_visible(plant,entrances)
		next_data[id] = data_fingerprint
		next_visibility[id] = visible
		var fingerprint := hash([data_fingerprint,visible,block if inside else "outside",state.ground_height(position)])
		next_fingerprints[id] = fingerprint
		if vegetation_fingerprints.get(id, null) != fingerprint:
			if vegetation_id_blocks.has(id):
				dirty_blocks[vegetation_id_blocks[id]] = true
			if inside:
				dirty_blocks[block] = true
		if inside:
			next_id_blocks[id] = block
			if visible:
				if not next_by_block.has(block):
					next_by_block[block] = []
				next_by_block[block].append(plant)
	for old_id: String in vegetation_fingerprints.keys():
		if next_fingerprints.has(old_id):
			continue
		if vegetation_id_blocks.has(old_id):
			dirty_blocks[vegetation_id_blocks[old_id]] = true
	for block: Vector2i in dirty_blocks.keys():
		var members: Array = next_by_block.get(block, [])
		_rebuild_vegetation_block(block, members)
	var meadow_candidates: Array[Vector2i] = []
	for block: Vector2i in dirty_blocks: meadow_candidates.append(block)
	# The short lawn covers the entire editable parcel, including clear land
	# without planted trees. Obstacle changes recheck local masks, not every
	# grass batch; each block's signature decides whether it needs replacement.
	if not local_only:
		for x in range(floori(EDITABLE_WORLD_RECT.position.x/8.0),ceili(EDITABLE_WORLD_RECT.end.x/8.0)):
			for z in range(floori(EDITABLE_WORLD_RECT.position.y/8.0),ceili(EDITABLE_WORLD_RECT.end.y/8.0)):
				var block := Vector2i(x,z)
				if not next_by_block.has(block): next_by_block[block] = []
				if not meadow_candidates.has(block): meadow_candidates.append(block)
	if obstacles_changed and not local_only:
		for block: Vector2i in next_by_block:
			if not meadow_candidates.has(block): meadow_candidates.append(block)
		for block: Vector2i in meadow.blocks:
			if not meadow_candidates.has(block): meadow_candidates.append(block)
	meadow.rebuild(next_by_block,meadow_candidates,shared_masks,entrances)
	vegetation_fingerprints = next_fingerprints
	vegetation_data_fingerprints = next_data
	vegetation_visibility = next_visibility
	state._region_plant_visibility=vegetation_visibility;state._region_visibility_revision=state.revision
	vegetation_id_blocks = next_id_blocks
	rebuild_stats["vegetation_blocks_changed"] = dirty_blocks.size()
	var total := 0
	for members: Array in next_by_block.values():
		total += members.size()
	rebuild_stats["vegetation_instances"] = total


func _editable_world_rect() -> Rect2:
	# Keep this renderer compatible with older state snapshots that predate the
	# constant while still following the authoritative creation bounds.
	return EDITABLE_WORLD_RECT


func _vegetation_block(position: Vector2) -> Vector2i:
	return Vector2i(floori(position.x / VEGETATION_BLOCK_SIZE), floori(position.y / VEGETATION_BLOCK_SIZE))


func _plant_position(plant: Dictionary) -> Vector2:
	var encoded: Variant = plant.get("position", [0.0, 0.0])
	if encoded is Array and encoded.size() >= 2:
		return Vector2(float(encoded[0]), float(encoded[1]))
	if encoded is Vector2:
		return encoded
	return Vector2.ZERO


func _vegetation_visible(plant: Dictionary, entrances: Dictionary = {}) -> bool:
	if state != null and state.has_method("vegetation_visible"):
		return bool(state.call("vegetation_visible", plant, entrances))
	return true


func _rebuild_vegetation_block(block: Vector2i, members: Array) -> void:
	if record_only:
		prepared_vegetation[block] = members
		if members.is_empty(): vegetation_block_fingerprints.erase(block)
		else: vegetation_block_fingerprints[block] = hash([block,members])
		return
	if vegetation_blocks.has(block):
		var old_root: Node3D = vegetation_blocks[block]
		if is_instance_valid(old_root):
			vegetation_layer.remove_child(old_root)
			old_root.queue_free()
		vegetation_blocks.erase(block)
	vegetation_block_fingerprints.erase(block)
	if members.is_empty():
		return
	var root := Node3D.new()
	root.name = "VegetationBlock_%d_%d" % [block.x, block.y]
	root.set_meta("vegetation_block", block)
	vegetation_layer.add_child(root)
	var transforms: Dictionary = {}
	for plant: Dictionary in members:
		var position := _plant_position(plant)
		var kind := str(plant.get("kind", "olive"))
		var scale_value := clampf(float(plant.get("scale", 1.0)), 0.25, 2.5)
		var seed_value := int(plant.get("seed", 0))
		var yaw := fmod(absf(float(seed_value % 6283)) / 1000.0, TAU)
		var variant := posmod(seed_value,3)
		for piece: String in foliage.parts(kind,variant):
			var part_key := "%s:%d:%s" % [kind,variant,piece]
			tree_meshes[part_key] = foliage.parts(kind,variant)[piece]
			_add_tree_part(transforms,part_key,Vector3(position.x,state.ground_height(position)-Terrain.BASE_HEIGHT,position.y),Vector3.ONE*scale_value,yaw)

	var block_fingerprint := hash([block, members])
	vegetation_block_fingerprints[block] = block_fingerprint
	for part: String in transforms.keys():
		_make_tree_multimesh(root, part, transforms[part])
	vegetation_blocks[block] = root


func _add_tree_part(transforms: Dictionary, part: String, at: Vector3, scale_value: Vector3, yaw: float) -> void:
	if not transforms.has(part):
		transforms[part] = []
	var basis := Basis.IDENTITY.scaled(scale_value)
	basis = basis.rotated(Vector3.UP, yaw)
	transforms[part].append(Transform3D(basis, at))


func _make_tree_multimesh(parent: Node3D, part: String, transforms: Array) -> void:
	if transforms.is_empty():
		return
	var multi := MultiMesh.new()
	multi.transform_format = MultiMesh.TRANSFORM_3D
	multi.use_colors = false
	multi.mesh = _shared_tree_mesh(part)
	SafeInstances.initialize(multi,transforms.size())
	for index in range(transforms.size()):
		SafeInstances.append(multi,transforms[index])
	multi.custom_aabb = multi.get_aabb().grow(0.12)
	var instance := MultiMeshInstance3D.new()
	instance.name = "Multi_%s" % part
	instance.multimesh = multi
	instance.material_override = _shared_tree_material(part)
	parent.add_child(instance)


func _shared_tree_mesh(part: String) -> Mesh:
	return tree_meshes[part]

func _shared_tree_material(part: String) -> Material:
	return foliage.material("trunk" if part.ends_with(":trunk") else "canopy")

func _frontage_signature(house: Dictionary) -> Array:
	# All consumers read immutable records for this published geometry. A
	# bread count or quality change cannot alter doorway/bench clearance.
	house_entrances(str(house.id))
	var id:=str(house.id)
	if not _frontage_views.has(id):_frontage_views[id]=_derive_frontage_signature(house)
	return _frontage_views[id]

func _derive_frontage_signature(house:Dictionary)->Array:
	var result: Array = []
	for entrance: Dictionary in house_entrances(str(house.id)):
		result.append([entrance.cell_id,entrance.side,entrance.active,entrance.get("passage",false),entrance.get("wall_at",Vector2.ZERO),Frontage.porch_plan(state,house,entrance) if entrance.active else {}])
	result.append(house_passages(str(house.id)))
	var role := str(house.get("role","residential"))
	if role == "residential": return result
	var entrance := _primary_entrance(house)
	if entrance.is_empty(): return result
	var offsets: Array
	var radii: Array
	if role == "bakery":
		offsets = [Vector3(0.82,0,0.20)]
		radii = [0.29]
	elif role == "workshop":
		result.append(["workshop_primary",entrance.cell_id,entrance.side])
		offsets = [Vector3(0.90,0,0.20),Vector3(-0.81,0,0.28)]
		radii = [0.35,0.28]
	elif role == "garden_cafe":
		# Its actual outdoor table is a separate cached layout used by Life.
		return result
	else:
		offsets = [Vector3(0.90,0,0.20),Vector3(0.85,0,0.18),Vector3(-0.76,0,0.23),Vector3(0.76,0,0.23)]
		radii = [0.35,0.32,0.22,0.22]
	for index in range(offsets.size()):
		var point := _entrance_point(entrance,offsets[index])
		result.append(_clearance_at(Vector2(point.x,point.z),str(entrance.cell_id),radii[index]))
	return result

var _frontage_views:Dictionary={}
var _entrance_views:Dictionary={}
var music_catalog:Dictionary={}
var _passage_views:Dictionary={}
var _entrance_view_key:Array=[]
var _junction_view_key:Array=[]
func road_junctions()->RefCounted:
	# One render revision owns one immutable road/door layout. State keeps its
	# public validation path; renderer consumers share the already prepared index.
	var key:Array=[state.get_instance_id(),state.revision]
	if key!=_junction_view_key:
		state.road_junctions()
		_junction_view_key=key
	return state._junctions

func house_entrances(house_id:String)->Array:
	# Renderer consumers read these records only. State's authoring API keeps
	# its detached-copy contract; view caches belong to this published revision.
	var key:Array=[state.get_instance_id(),state.revision]
	if key!=_entrance_view_key:_entrance_views.clear();_passage_views.clear();_frontage_views.clear();_entrance_view_key=key
	if not _entrance_views.has(house_id):
		_entrance_views[house_id]=state.house_entrances(house_id)
		# That call validates both entrances and passages together. Keep the
		# detached visual views from this same record without rescanning State.
		_passage_views[house_id]=state._frontage_cache.get(house_id,{}).get("passages",[]).duplicate(true)
	return _entrance_views[house_id]

func house_passages(house_id:String)->Array:
	house_entrances(house_id)
	return _passage_views[house_id]

func retain_geometry_views()->void:
	# A successful palette-only publication preserves every entrance and
	# clearance decision. Rebind the input revision without resampling streets.
	_entrance_view_key=[state.get_instance_id(),state.revision]
	for house:Dictionary in state.houses:
		var id:=str(house.id);var key:Array=[state.get_instance_id(),state.revision,hash(house)]
		if craft.layouts.has(id):craft.layout_inputs[id]=key
		if quality_visual.geometry_inputs.has(id):quality_visual.geometry_inputs[id]=key

func _primary_entrance(house: Dictionary) -> Dictionary:
	var entrances: Array = house_entrances(str(house.id))
	if str(house.get("role","residential")) == "workshop":
		var usable: Dictionary = {}
		for entrance: Dictionary in entrances:
			if bool(entrance.get("passage",false)): continue
			var point := _entrance_point(entrance,Vector3(0.90,0,0.20))
			if not _clearance_at(Vector2(point.x,point.z),str(entrance.cell_id),0.35): continue
			if entrance.active: return entrance
			if usable.is_empty(): usable = entrance
		if not usable.is_empty(): return usable
	for entrance: Dictionary in entrances:
		if entrance.active and not bool(entrance.get("passage",false)): return entrance
	for entrance: Dictionary in entrances:
		if not bool(entrance.get("passage",false)): return entrance
	return entrances[0] if not entrances.is_empty() else {}

func _entrance_point(entrance: Dictionary, local: Vector3) -> Vector3:
	var side:Vector2=preload("res://scripts/world/city_creation_house_frame.gd").normal(entrance)
	var at: Vector2 = entrance.wall_at
	var base_y := 0.0
	for house: Dictionary in state.houses:
		for cell: Dictionary in house.cells:
			if str(cell.id)==str(entrance.cell_id): base_y=float(house.get("base_y",0.0))
	return Vector3(at.x+float(side.y)*local.x+float(side.x)*local.z,local.y+base_y,at.y-float(side.x)*local.x+float(side.y)*local.z)

func _merge_meshes(parent: Node3D,prepare_colors:bool=true,budget_ms:float=0.0) -> bool:
	# Keep ownership, collision and resonance pivots local to each house.
	if parent.has_meta("palette_colors"):
		var house := _house_record(str(parent.name))
		parent.set_meta("creation_wall_base_y",float(house.get("base_y",0.0)))
		parent.set_meta("creation_wall_story_height",FLOOR)
	if budget_ms>0.0:
		if not mesh_batcher.merge_budgeted(parent,budget_ms): return false
	else: parent.set_meta("material_batching",mesh_batcher.merge(parent))
	if prepare_colors:_prepare_house_colors(parent)
	return true

func _prepare_house_colors(parent:Node3D,budget_ms:float=0.)->bool:
	if parent.has_meta("palette_colors"):
		var house := _house_record(str(parent.name))
		if not house.is_empty():
			parent.set_meta("color_geometry_fingerprint",_house_geometry_fingerprint(house))
			return HouseColors.prepare(self,parent,house,budget_ms)
	return true


## Caller has established that this transaction changes only palette/finish.
## A staging generation must be cancelled or completed before using this path.
func try_update_house_colors(house_id: String) -> Dictionary:
	var started := Time.get_ticks_usec()
	if not house_roots.has(house_id): return {"ok":false,"applied":false,"message":"建筑尚未发布"}
	var house := _house_record(house_id)
	var root: Node3D = house_roots[house_id]
	if house.is_empty() or not HouseColors.apply(self,root,house):
		return {"ok":false,"applied":false,"message":"建筑需要常规更新"}
	house_fingerprints[house_id] = hash([int(root.get_meta("color_geometry_fingerprint")),house.get("palette",0),house.get("finish",""),house.get("custom_colors",{})])
	var result := {"ok":true,"applied":true,"house_id":house_id,"elapsed_ms":float(Time.get_ticks_usec()-started)/1000.0,"message":"房屋配色已更新"}
	root.set_meta("color_update",result)
	return result

func clear_preview() -> void:
	if preview == null: return
	road_draft_field.clear(self)
	_clear(preview);preview.transform=Transform3D.IDENTITY;preview.remove_meta("design_transform") if preview.has_meta("design_transform") else null
	for key in ["removal_house","removal_cells","removal_valid","stroke_cells","stroke_valid","stroke_roofs","porch_previews","passage_previews","stepping_previews","terrain_points","terrain_contours","terrain_core_radius"]:
		if preview.has_meta(key): preview.remove_meta(key)

func show_concert(status: Dictionary) -> void:
	# The per-house rigs carry stage flags, windows and notes. Phase changes
	# update metadata only: no decorative nodes are created during a concert.
	concert_fingerprint = str([status.get("phase","idle"),status.get("venue_id","")])
	if concert_layer != null: concert_layer.set_meta("phase",str(status.get("phase","idle")))

func update_city_resonance_visuals(snapshot: Dictionary) -> void:
	house_music_source = str(snapshot.get("lead_id","")) if bool(snapshot.get("audible",false)) else ""
	resonance.update(snapshot)
	craft.update_music(snapshot)
	courtyards.update_music(snapshot,living_music)
	promenade.update_music(living_music,float(snapshot.get("clock_sec",0.)))
	promenade.set_light(promenade.evening,bool(snapshot.get("audible",false)) and str(snapshot.get("phase","idle"))=="playing")
	conservatory.set_light(promenade.evening,0.35 if bool(snapshot.get("audible",false)) and str(snapshot.get("phase","idle"))=="playing" else 0.0)

func set_evening(value: bool) -> void:
	promenade.set_light(value,promenade.concert)
	conservatory.set_light(value,0.35 if promenade.concert else 0.0)


func set_light_phase(phase: int) -> void:
	preload("res://scripts/visual/city_creation_facade_glass.gd").phase(self,phase)
	light_phase = phase
	set_evening(phase>=1)
	wildlife.set_night(phase==2)
	resonance.night = phase==2
	resonance.dusk = phase==1
	Bunting.set_light(ecology_layer,phase)
	water_material.set_shader_parameter("evening",1.0 if phase==1 else 0.0)
	water_material.set_shader_parameter("night",1.0 if phase==2 else 0.0)
	if valley!=null:valley.set_light(phase)
	preload("res://scripts/visual/city_creation_window_bounce.gd").bind(self)

var ecology_stats: Dictionary={}

func refresh_ecology() -> void:
	if ecology_layer==null:return
	ecology.refresh(self)
	ecology_stats=ecology.stats

func animate_house_bounce(id: String, strength: float = 0.06) -> void:
	touch.request(self,id,strength)

func _process(delta: float) -> void:
	if budget_rebuild!=null:budget_rebuild.retire_idle()
	touch.update(delta)
	if state!=null:SignatureVisual.animate(self,delta)

func update_travel_music(report: Dictionary) -> void:
	travel_visual.update(report,_water_surface_material(),state)

func update_house_music(source: Dictionary) -> void:
	# Compatibility entry point for daily source attribution and existing tools.
	update_city_resonance_visuals({"lead_id":str(source.get("source_id","")),"audible":bool(source.get("audible",false)),"clock_sec":float(source.get("clock_sec",0.0)),"beat_pulse":float(source.get("beat_pulse",0.0))})


## A lightweight brush guide only.  It deliberately creates MeshInstance3D
## nodes without StaticBody3D/CollisionShape3D, so painting never alters
## picking or physics while the pointer is moving.
func show_vegetation_brush(at: Vector2, radius: float, erase: bool = false, points: Array[Vector2] = []) -> void:
	clear_preview()
	if preview == null or not is_finite(radius) or radius <= 0.0:
		return
	if vegetation_brush_mesh == null:
		var surface := SurfaceTool.new()
		surface.begin(Mesh.PRIMITIVE_TRIANGLES)
		for segment in range(48):
			var a := float(segment) * TAU / 48.0
			var b := float(segment + 1) * TAU / 48.0
			var outer_a := Vector3(cos(a), 0.0, sin(a))
			var outer_b := Vector3(cos(b), 0.0, sin(b))
			for vertex: Vector3 in [outer_a, outer_b * 0.965, outer_b, outer_a, outer_a * 0.965, outer_b * 0.965]:
				surface.add_vertex(vertex)
		surface.generate_normals()
		vegetation_brush_mesh = surface.commit()
	if not vegetation_brush_materials.has(erase):
		var mat := StandardMaterial3D.new()
		mat.albedo_color = Color(0.96, 0.57, 0.42, 0.70) if erase else Color(0.89, 0.93, 0.66, 0.72)
		mat.transparency = BaseMaterial3D.TRANSPARENCY_ALPHA
		mat.shading_mode = BaseMaterial3D.SHADING_MODE_UNSHADED
		mat.cull_mode = BaseMaterial3D.CULL_DISABLED
		vegetation_brush_materials[erase] = mat
	var centers: Array[Vector2] = []
	# A spaced trail is readable and bounded during a long drag. All rings are
	# one MultiMesh; pointer motion only uploads transforms of a shared mesh.
	var stride := maxi(1, ceili(float(points.size()) / 64.0))
	for index in range(0, points.size(), stride):
		var point := points[index]
		if point.distance_to(at) < radius * 0.35:
			continue
		if centers.is_empty() or centers[-1].distance_to(point) >= maxf(0.4, radius * 0.55):
			centers.append(point)
	centers.append(at)
	var multi := MultiMesh.new()
	multi.transform_format = MultiMesh.TRANSFORM_3D
	multi.mesh = vegetation_brush_mesh
	SafeInstances.initialize(multi,centers.size())
	for index in range(centers.size()):
		var center := centers[index]
		var size_value := radius if index == centers.size() - 1 else minf(radius * 0.22, 0.25)
		SafeInstances.append(multi,Transform3D(Basis.IDENTITY.scaled(Vector3(size_value, 1.0, size_value)), Vector3(center.x, 0.08, center.y)))
	var instance := MultiMeshInstance3D.new()
	instance.name = "VegetationBrushGuide"
	instance.multimesh = multi
	instance.material_override = vegetation_brush_materials[erase]
	instance.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	preview.add_child(instance)

func preview_road(points: Array[Vector2], valid: bool = true, width: float = 1.25, bridge: bool = false,style: String="path") -> int:
	clear_preview()
	if preview == null or points.is_empty(): return 0
	var color := Color("dfd5a8") if valid else Color("ef7862")
	var samples := _road_samples(points)
	if valid:
		road_draft_field.update(self,points,width)
		road_draft_field.material.set_shader_parameter("paved",style in ["promenade","avenue","tram"])
		road_draft_field.material.set_shader_parameter("surface_pattern",preload("res://scripts/world/city_creation_road_paving.gd").code({"style":style}))
	if samples.size() > 1:
		var preview_started := Time.get_ticks_usec()
		var extras: Array = []
		if valid:
			preview_junctions.copy_cache_from(state._junctions)
			extras = preview_junctions.preview_additions(state,points,width)
		var profile_ms := float(Time.get_ticks_usec()-preview_started)/1000.0
		# The continuous strip already follows the bridge height at 35 cm
		# intervals. Only the small, dry extra bands require polygon triangles.
		_road_ribbon(preview,samples,width+.30 if valid else width,color,0.012 if valid else .04)
		var vertices: Array[Vector3] = []
		for polygon: PackedVector2Array in extras:
			var indices := Geometry2D.triangulate_polygon(polygon)
			for index in indices:
				var at := polygon[index]
				vertices.append(Vector3(at.x,_street_height(at)+0.04,at.y))
		if not vertices.is_empty(): _triangles(preview,vertices,color)
		preview.set_meta("junction_profile_ms",profile_ms)
		preview.set_meta("junction_mesh_ms",float(Time.get_ticks_usec()-preview_started)/1000.0-profile_ms)
	var bridge_parts := 0
	if valid and bridge and samples.size() > 1:
		bridge_parts = _preview_bridge_rails(samples,width,color)
	preview.set_meta("bridge_previews",bridge_parts)
	var stepping_count := 0
	if valid and width <= 1.3 and not points.is_empty():
		var encoded: Array = []
		for point: Vector2 in points: encoded.append([point.x,point.y])
		var stepping_road := {"id":"preview","points":encoded,"width":width,"style":"path","bridge":bridge}
		var runs: Array = SteppingPlan.for_road(state,stepping_road)
		stepping_count = Stepping.preview(self,preview,runs,Color(0.46,0.68,0.66,0.72))
	preview.set_meta("stepping_previews",stepping_count)
	for point: Vector2 in [points[0],points[-1]]:
		var radius:=width*.5+(.15 if valid else 0.)
		_cylinder(preview,radius,radius,0.012,Vector3(point.x,_street_height(point)+0.013,point.y),road_draft_field.material if valid else _material(color),24)
	var shown := {}
	var arches := {}
	if valid:
		var stroke_bounds:=Rect2(points[0],Vector2.ZERO)
		for at: Vector2 in points:stroke_bounds=stroke_bounds.expand(at)
		stroke_bounds=stroke_bounds.grow(width*.5+1.7)
		for house: Dictionary in state.houses:
			var near_house:=false
			for cell: Dictionary in house.cells:
				if int(cell.level)!=0:continue
				if stroke_bounds.has_point(Frontage.center(house,cell)):near_house=true;break
			if not near_house:continue
			for cell: Dictionary in house.cells:
				var passage: Dictionary = Passage.for_cell(house,cell,points,width,"draft")
				if not passage.is_empty():
					arches[[house.id,cell.id]] = passage
					for side: Vector2i in passage.sides:
						if not Frontage.exposed(house,cell,side): continue
						var wall := Node3D.new()
						wall.name = "ArchPreview"
						wall.position = Vector3(passage.center.x+side.x*UNIT*0.5,float(house.get("base_y",0.0)),passage.center.y+side.y*UNIT*0.5)
						wall.rotation.y = atan2(float(side.x),float(side.y))
						preview.add_child(wall)
						Architecture.build_rim(self,wall,Architecture.wall_opening([passage],side),color,true)
				for at_start: bool in [true,false]:
					var contact := Frontage.terminal(house,cell,points,at_start)
					if contact.is_empty(): continue
					var key := str([house.id,cell.id,contact.side])
					if shown.has(key): continue
					shown[key] = true
					var wall := Node3D.new()
					wall.name = "PorchPreview"
					wall.position = Vector3(contact.wall_at.x,float(house.get("base_y",0.0)),contact.wall_at.y)
					wall.rotation.y = atan2(float(contact.side.x),float(contact.side.y))
					preview.add_child(wall)
					_box(wall,Vector3(0.55,1.03,0.08),Vector3(0,0.64,0.12),_material(color))
					_door_porch(wall,false)
	preview.set_meta("porch_previews",shown.size())
	preview.set_meta("passage_previews",arches.size())
	return shown.size()

func _preview_bridge_rails(samples: Array[Vector2], width: float, color: Color) -> int:
	var root := Node3D.new()
	root.name = "BridgePreviewRails"
	preview.add_child(root)
	var rail_material := StandardMaterial3D.new()
	rail_material.albedo_color = color.lightened(0.10)
	rail_material.transparency = BaseMaterial3D.TRANSPARENCY_ALPHA
	rail_material.shading_mode = BaseMaterial3D.SHADING_MODE_UNSHADED
	rail_material.cull_mode = BaseMaterial3D.CULL_DISABLED
	var segments := 0
	for index in range(samples.size()-1):
		var a := samples[index]
		var b := samples[index+1]
		var length := a.distance_to(b)
		if length < 0.03: continue
		var tangent := (b-a)/length
		var side := Vector2(-tangent.y,tangent.x)
		var center := (a+b)*0.5
		var y := (_street_height(a)+_street_height(b))*0.5+0.16
		var segment := Node3D.new()
		segment.position = Vector3(center.x,y,center.y)
		segment.rotation.y = atan2(tangent.x,tangent.y)
		root.add_child(segment)
		for side_sign in [-1.0,1.0]:
			var offset := width*0.5+0.06
			_box(segment,Vector3(0.055,0.28,length+0.06),Vector3(side_sign*offset,0.14,0),rail_material)
			for post in range(3):
				var z := -length*0.5+length*float(post)/2.0
				_box(segment,Vector3(0.07,0.40,0.07),Vector3(side_sign*offset,0.20,z),rail_material)
		segments += 1
	return segments

func preview_road_measure(points: Array[Vector2], locked_segments: int) -> void:
	if preview == null or points.size() < 2: return
	var marks: Array[Transform3D] = []
	var travelled := 0.0
	var next_mark := 5.0
	for index in range(1,points.size()):
		var a := points[index-1]
		var b := points[index]
		var length := a.distance_to(b)
		if length < 0.00001: continue
		var direction := (b-a)/length
		while next_mark <= travelled+length:
			var at := a+direction*(next_mark-travelled)
			var basis := Basis(Vector3.UP,-atan2(direction.y,direction.x)).scaled(Vector3(0.045,0.008,0.42))
			marks.append(Transform3D(basis,Vector3(at.x,_street_height(at)+0.09,at.y)))
			next_mark += 5.0
		travelled += length
	if not marks.is_empty():
		if road_measure_mesh == null:
			road_measure_mesh = BoxMesh.new()
			road_measure_mesh.size = Vector3.ONE
			road_measure_material = _material(Color("8d805c"))
		var multi := MultiMesh.new()
		multi.transform_format = MultiMesh.TRANSFORM_3D
		multi.mesh = road_measure_mesh
		SafeInstances.initialize(multi,marks.size())
		for index in range(marks.size()): SafeInstances.append(multi,marks[index])
		var instance := MultiMeshInstance3D.new()
		instance.name = "RoadMeasureTicks"
		instance.multimesh = multi
		instance.material_override = road_measure_material
		instance.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
		preview.add_child(instance)
	preview.set_meta("measure_metres",travelled)
	preview.set_meta("locked_segments",locked_segments)

func preview_water(points: Array[Vector2], width: float, valid: bool, conflicts: Array = []) -> void:
	clear_preview()
	if preview == null or points.is_empty(): return
	var groups: Array = []
	_merge_water_group(groups, _stroke_contours(points, width * 0.5))
	var color := Color(0.43, 0.81, 0.79, 0.47) if valid else Color(0.96, 0.44, 0.32, 0.50)
	var node := _water_polygon_mesh(preview, groups, 0.095, color)
	if node != null:
		var mat := StandardMaterial3D.new()
		mat.albedo_color = color
		mat.transparency = BaseMaterial3D.TRANSPARENCY_ALPHA
		mat.shading_mode = BaseMaterial3D.SHADING_MODE_UNSHADED
		mat.cull_mode = BaseMaterial3D.CULL_DISABLED
		node.material_override = mat
	for conflict: Variant in conflicts:
		if not conflict is Dictionary: continue
		var encoded: Variant = conflict.get("position", [])
		if not encoded is Array or encoded.size() < 2: continue
		_cylinder(preview, 0.28, 0.28, 0.025, Vector3(float(encoded[0]), 0.14, float(encoded[1])), _material(Color("ef7862")), 16)

func set_preview(house_id: String, cell: Dictionary, valid: bool) -> void:
	clear_preview()
	if state == null or preview == null: return
	var house := _house_record(house_id)
	if house_id.is_empty() and cell.has("origin"): house = {"origin":cell["origin"],"base_y":cell.get("base_y",0.0)}
	if house.is_empty(): return
	var color := Color(0.63,0.89,0.72,0.40) if valid else Color(0.95,0.39,0.31,0.45)
	_preview_cell(house,cell,color,valid)
	preload("res://scripts/visual/city_creation_hinge_preview.gd").apply(self,preview,house,[cell])

func set_house_stroke_preview(origin: Vector2, cells: Array, valid: bool, base_y: float = 0.0,angle:float=0.,host_id:String="") -> void:
	clear_preview()
	var host := {"origin":[origin.x,origin.y],"base_y":base_y}
	for cell: Dictionary in cells:
		_preview_cell(host,cell,Color(0.63,0.89,0.72,0.40) if valid else Color(0.95,0.39,0.31,0.45),valid)
	var roof_count := _preview_stroke_roofs(origin,cells,base_y,Color(0.92,0.54,0.40,0.34) if valid else Color(0.95,0.39,0.31,0.28))
	preview.set_meta("stroke_cells",cells.duplicate(true))
	preview.set_meta("stroke_valid",valid)
	preview.set_meta("stroke_roofs",roof_count);preload("res://scripts/visual/city_creation_hinge_preview.gd").apply(self,preview,_house_record(host_id) if not host_id.is_empty() else host,cells,angle)

func _preview_stroke_roofs(origin: Vector2, cells: Array, base_y: float, color: Color) -> int:
	# A cheap authored preview of the same gable profile used after release.
	# Grouping only contiguous room cells keeps L/U strokes open instead of
	# filling their empty corner with a misleading bounding-box roof.
	var rooms: Dictionary = {}
	for cell: Dictionary in cells:
		if str(cell.get("kind","room")) != "room": continue
		var level := int(cell.get("level",0))
		var key := "%d:%d" % [level,int(cell.get("z",0))]
		if not rooms.has(key): rooms[key]=[]
		rooms[key].append(cell)
	var roofs := 0
	for key: String in rooms:
		var row: Array = rooms[key]
		row.sort_custom(func(a: Dictionary,b: Dictionary)->bool:return int(a.x)<int(b.x))
		var start := 0
		for index in range(row.size()+1):
			var split := index==row.size() or (index>start and int(row[index].x)!=int(row[index-1].x)+1)
			if not split: continue
			var first: Dictionary=row[start]
			var last: Dictionary=row[index-1]
			var level := int(first.get("level",0))
			var low := origin.x+int(first.x)*UNIT-UNIT*0.5-0.12
			var high := origin.x+int(last.x)*UNIT+UNIT*0.5+0.12
			var center := (low+high)*0.5
			var half := maxf(0.35,(high-low)*0.5)
			var eave := base_y+(level+1)*FLOOR+0.08
			var ridge := eave+0.49+float(index-start-1)*0.13
			var front := origin.y+int(first.z)*UNIT-UNIT*0.5-0.12
			var back := origin.y+int(first.z)*UNIT+UNIT*0.5+0.12
			var roof_material := StandardMaterial3D.new()
			roof_material.albedo_color=color
			roof_material.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA
			roof_material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
			roof_material.cull_mode=BaseMaterial3D.CULL_DISABLED
			var ridge_front := Vector3(center,ridge,front)
			var ridge_back := Vector3(center,ridge,back)
			var low_front := Vector3(low,eave,front)
			var high_front := Vector3(high,eave,front)
			var low_back := Vector3(low,eave,back)
			var high_back := Vector3(high,eave,back)
			for roof_vertices: Array in [
				[low_front,ridge_front,ridge_back,low_front,ridge_back,low_back],
				[ridge_front,high_front,high_back,ridge_front,high_back,ridge_back]]:
				var roof := _triangles(preview,roof_vertices,color)
				roof.material_override=roof_material
				roof.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
			roofs+=1
			start=index
	return roofs

func set_removal_preview(house_id: String, cells: Array, valid: bool) -> void:
	clear_preview()
	if state == null or preview == null: return
	var house := _house_record(house_id)
	if house.is_empty(): return
	preview.set_meta("removal_house",house_id)
	var ids: Array[String] = []
	for cell: Dictionary in cells:
		if cell.is_empty(): continue
		ids.append(str(cell.id))
		var color := Color(0.96,0.69,0.32,0.40) if valid else Color(0.95,0.39,0.31,0.45)
		_preview_cell(house,cell,color,valid)
		_preview_removed_roof(house,cell,color)
	preview.set_meta("removal_cells",ids)
	preview.set_meta("removal_valid",valid);preload("res://scripts/world/city_creation_house_frame.gd").apply(preview,house)

func _preview_removed_roof(house: Dictionary, cell: Dictionary, color: Color) -> void:
	var x := int(cell.x)
	var z := int(cell.z)
	var level := int(cell.level)
	if str(cell.kind)!="room" or not _at(house.cells,x,z,level+1).is_empty(): return
	var left := x
	while true:
		var next := _at(house.cells,left-1,z,level)
		if next.is_empty() or str(next.kind)!="room" or not _at(house.cells,left-1,z,level+1).is_empty(): break
		left-=1
	var right := x
	while true:
		var next := _at(house.cells,right+1,z,level)
		if next.is_empty() or str(next.kind)!="room" or not _at(house.cells,right+1,z,level+1).is_empty(): break
		right+=1
	var span := right-left+1
	var origin := _cell_position(house,cell)
	var center := float(house.origin[0])+(left+float(span-1)*0.5)*UNIT
	var half := UNIT*span*0.5+0.12
	var eave := origin.y+(level+1)*FLOOR+0.03
	var ridge := origin.y+(level+1)*FLOOR+0.49+float(span-1)*0.13
	var low := origin.x-UNIT*0.5-(0.14 if x==left else 0.0)
	var high := origin.x+UNIT*0.5+(0.14 if x==right else 0.0)
	var splits: Array[float] = [low]
	if center>low and center<high: splits.append(center)
	splits.append(high)
	var material := StandardMaterial3D.new()
	material.albedo_color=color
	material.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA
	material.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED
	material.cull_mode=BaseMaterial3D.CULL_DISABLED
	for index in range(splits.size()-1):
		var a := splits[index]
		var b := splits[index+1]
		var ay := ridge+(eave-ridge)*absf(a-center)/half+0.055
		var by := ridge+(eave-ridge)*absf(b-center)/half+0.055
		var roof := _quad(preview,Vector3(a,ay,origin.z-UNIT*0.5-0.14),Vector3(a,ay,origin.z+UNIT*0.5+0.14),Vector3(b,by,origin.z+UNIT*0.5+0.14),Vector3(b,by,origin.z-UNIT*0.5-0.14),color)
		roof.material_override=material
		roof.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF

func _preview_cell(house: Dictionary, cell: Dictionary, color: Color, valid: bool, parent:Node3D=null) -> MeshInstance3D:
	if parent==null:parent=preview
	var material := StandardMaterial3D.new()
	material.albedo_color = color
	material.transparency = BaseMaterial3D.TRANSPARENCY_ALPHA
	material.shading_mode = BaseMaterial3D.SHADING_MODE_UNSHADED
	material.no_depth_test = false
	var level := int(cell.get("level",0))
	var height := 0.16 if str(cell.get("kind","room")) == "terrace" else FLOOR
	var pos := _cell_position(house,cell)+Vector3(0,level*FLOOR+height*0.5+0.04,0)
	var volume := _box(parent,Vector3(UNIT+0.04,height+0.03,UNIT+0.04),pos,material)
	volume.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	# A clear outline remains readable against both stone and foliage.
	var edge := _material(Color("f3e7ae") if valid else Color("ef7862"))
	for x in [-1,1]:
		_box(parent,Vector3(0.025,0.035,UNIT+0.1),pos+Vector3(x*(UNIT*0.5+0.03),height*0.5,0),edge)
	for z in [-1,1]:
		_box(parent,Vector3(UNIT+0.1,0.035,0.025),pos+Vector3(0,height*0.5,z*(UNIT*0.5+0.03)),edge)
	return volume

func _house_record(id: String) -> Dictionary:
	for house: Dictionary in state.houses:
		if str(house["id"]) == id: return house
	return {}

func _material(color: Color, roughness: float = 0.88) -> StandardMaterial3D:
	var key := color.to_html()+str(roughness)
	if materials.has(key): return materials[key]
	var mat := StandardMaterial3D.new()
	mat.albedo_color = color
	mat.roughness = roughness
	mat.set_meta("creation_solid",true)
	materials[key] = mat
	return mat


func _water_surface_material(_shallow: bool = false) -> ShaderMaterial:
	if water_material == null:
		water_material = ShaderMaterial.new()
		water_material.shader = WaterShader
		ShorePalette.configure(water_material)
		water_material.set_shader_parameter("water_field",water_field.texture)
	return water_material

func _box(parent: Node3D, size: Vector3, at: Vector3, material: Material) -> MeshInstance3D:
	var node := MeshInstance3D.new()
	var mesh := BoxMesh.new()
	mesh.size = size
	node.mesh = mesh
	node.material_override = material
	node.position = at
	parent.add_child(node)
	return node

func _cylinder(parent: Node3D, bottom: float, top: float, height: float, at: Vector3, material: Material, sides: int = 8) -> MeshInstance3D:
	var node := MeshInstance3D.new()
	var mesh := CylinderMesh.new()
	mesh.bottom_radius = bottom
	mesh.top_radius = top
	mesh.height = height
	mesh.radial_segments = sides
	node.mesh = mesh
	node.material_override = material
	node.position = at
	parent.add_child(node)
	return node

func _crown(parent: Node3D, at: Vector3, size: Vector3, color: Color) -> MeshInstance3D:
	var node := MeshInstance3D.new()
	var mesh := SphereMesh.new()
	mesh.radius = 1.0
	mesh.height = 2.0
	mesh.radial_segments = 10
	mesh.rings = 5
	node.mesh = mesh
	node.material_override = _material(color)
	node.position = at
	node.scale = size
	parent.add_child(node)
	return node

func _triangles(parent: Node3D, vertices: Array, color: Color) -> MeshInstance3D:
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	# Geometry below is authored with outward cross products. Godot uses
	# clockwise front faces; reverse the winding before deriving normals.
	for index in range(0,vertices.size(),3):
		surface.add_vertex(vertices[index])
		surface.add_vertex(vertices[index+2])
		surface.add_vertex(vertices[index+1])
	surface.generate_normals()
	# append_from cannot mix indexed primitives with unindexed triangle lists:
	# later indices would omit the earlier road/roof faces. Index every source.
	surface.index()
	var node := MeshInstance3D.new()
	node.mesh = surface.commit()
	var mat := _material(color)
	mat.cull_mode = BaseMaterial3D.CULL_DISABLED
	node.material_override = mat
	parent.add_child(node)
	return node

func _roof_surface(parent:Node3D,vertices:Array,color:Color,coordinates:PackedVector2Array=PackedVector2Array())->MeshInstance3D:
	return RoofSurface.build(self,parent,vertices,color,coordinates)

func _quad(parent: Node3D, a: Vector3, b: Vector3, c: Vector3, d: Vector3, color: Color) -> MeshInstance3D:
	return _triangles(parent,[a,b,c,a,c,d],color)

func _cell_position(house: Dictionary, cell: Dictionary) -> Vector3:
	var origin: Array = house["origin"]
	return Vector3(float(origin[0])+int(cell["x"])*UNIT,float(house.get("base_y",0.0)),float(origin[1])+int(cell["z"])*UNIT)

func _at(cells: Array, x: int, z: int, level: int) -> Dictionary:
	for cell: Dictionary in cells:
		if int(cell["x"]) == x and int(cell["z"]) == z and int(cell["level"]) == level: return cell
	return {}

func _foundation_contact(parent: Node3D) -> void:
	if contact_material == null:
		contact_material = ShaderMaterial.new()
		contact_material.shader = ContactShader
	var contact := MeshInstance3D.new()
	var plane := PlaneMesh.new()
	plane.size = Vector2(UNIT+0.7,UNIT+0.7)
	contact.mesh = plane
	contact.material_override = contact_material
	contact.position.y = 0.006
	contact.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	parent.add_child(contact)

const SignatureVisual = preload("res://scripts/visual/city_creation_signature_visual.gd")
const RenaissancePlan = preload("res://scripts/world/city_creation_renaissance_plan.gd")
const Renaissance = preload("res://scripts/visual/city_creation_renaissance.gd")
const Clockwork = preload("res://scripts/visual/city_creation_clockwork.gd")
const Modern = preload("res://scripts/visual/city_creation_modern.gd")

const HouseAssembly=preload("res://scripts/visual/city_creation_house_assembly.gd")
var house_assemblies:Dictionary={}

func _house(house: Dictionary) -> Node3D:
	var job:=_begin_house_assembly(house,false)
	while not _advance_house_assembly(job,1000000.0):pass
	return job.root

func _house_budgeted(house:Dictionary,budget_ms:float)->bool:
	var id:=str(house.id)
	if not house_assemblies.has(id):house_assemblies[id]=_begin_house_assembly(house,true)
	var job:HouseAssembly=house_assemblies[id]
	var complete:=_advance_house_assembly(job,budget_ms)
	if job.root!=null:house_roots[id]=job.root
	if complete:house_assemblies.erase(id)
	return complete

func _prepare_house_assembly(house:Dictionary)->Dictionary:
	# Values only: the budget worker resolves topology and architectural plans
	# before any main-thread mesh, material, node or physics allocation.
	if building_context.signature(str(house.id)).is_empty():building_context.prepare(state.houses,state.roads)
	var era:String=state.house_era(house)
	if era not in ["clockwork","modern_eco"] and not RoundTowerPlan.for_house(house,state.houses,state.roads).is_empty():return {"round":true}
	var palette:Array=HouseColors.base_palette(self,house)
	var domes:Array=RenaissancePlan.for_house(state,house);var dome_cells:Dictionary={}
	for plan:Dictionary in domes:
		for id:String in plan.cell_ids:dome_cells[id]=true
	palette=HouseColors.era_palette(self,house,palette,house.has("custom_colors"))
	var canopy:Dictionary={};var flower_plan:Dictionary={};var arcade_faces:Array=[]
	if era!="modern_eco":
		canopy=TerraceCanopy.choose(state.houses,house)
		flower_plan=ConservatoryPlan.for_house(state,house)
		arcade_faces=ArcadePlan.for_house(state,house)
	if not flower_plan.is_empty():canopy={}
	var entrances:Array=house_entrances(str(house.id));var passages:Array=house_passages(str(house.id))
	var tower_ids:Dictionary={}
	for tower:Dictionary in building_context.tower_cells(str(house.id)):tower_ids[str(tower.id)]=true
	if house.get("signature","")=="bell_keep":tower_ids[str(house.cells[-1].id)]=true
	var doors:Dictionary={}
	for entrance:Dictionary in entrances:doors[[entrance.cell_id,entrance.side]]=entrance
	var structural:=_structural_joined(house)
	return {"round":false,"palette":palette,"era":era,"style":str(house.get("style","classic")),
		"domes":domes,"dome_cells":dome_cells,"canopy":canopy,"flower_plan":flower_plan,"arcade_faces":arcade_faces,
		"entrances":entrances,"passages":passages,"tower_ids":tower_ids,"doors":doors,"primary":_primary_entrance(house),
		"structural_joined":structural,"joined":building_context.joined(str(house.id)) or house.cells.size()>1 or structural}

func _begin_house_assembly(house:Dictionary,hidden:bool)->HouseAssembly:
	var began:=Time.get_ticks_usec()
	var job:=HouseAssembly.new();job.house=house;job.hidden=hidden
	var prepared:Dictionary=get_meta("house_assembly_plans",{})
	var plan:Dictionary=prepared[str(house.id)] if prepared.has(str(house.id)) else _prepare_house_assembly(house)
	if bool(plan.round):
		job.stage=HouseAssembly.Stage.ROUND_BODY
	else:
		var root:=Node3D.new();root.name=str(house.id);buildings.add_child(root);job.root=root
		for key:String in ["palette","era","style","domes","dome_cells","canopy","flower_plan","arcade_faces","passages","tower_ids","doors","primary","joined"]:job.set(key,plan[key])
		job.cells=house.cells
		root.set_meta("palette_colors",job.palette.duplicate());root.set_meta("dome_cells",job.dome_cells)
		root.set_meta("era_theme",job.era);root.set_meta("house_style",job.style)
		root.set_meta("arcade_faces",job.arcade_faces);root.set_meta("arcades",job.arcades)
		root.set_meta("terrace_canopy",job.canopy)
		job.walls=_style_wall_material(job.style,job.palette[0])
		if job.era=="clockwork":job.walls=Clockwork.wall_material(self,job.palette[0])
		elif job.era=="modern_eco":job.walls=WallMaterial.source(job.palette[0],null,"component",WallMaterial.Kind.CANTILEVER)
		job.trim=_material(Color("f1e5cc"))
		root.set_meta("entrances",plan.entrances.duplicate(true));root.set_meta("passages",job.passages.duplicate(true))
		root.set_meta("tower_cells",job.tower_info);root.set_meta("structural_joined",plan.structural_joined);root.set_meta("joined_roof",job.joined)
		if job.era=="clockwork":
			var roofs:Dictionary=get_meta("clockwork_roofs",{})
			job.clockwork_roofs=roofs[str(house.id)] if roofs.has(str(house.id)) else Clockwork.prepare(state,house)
		elif job.era=="modern_eco":
			var parts:Dictionary=get_meta("modern_parts",{})
			job.modern_parts=parts[str(house.id)] if parts.has(str(house.id)) else Modern.prepare(state,house)
	var ms:=float(Time.get_ticks_usec()-began)/1000.
	job.stats.cpu_ms=ms;job.stats.peak_ms=ms;job.stats.part_peaks.plan=ms
	return job

func _hold_house_body(body:StaticBody3D)->void:
	if body.has_meta("pending_collision_layer"):return
	body.set_meta("pending_collision_layer",body.collision_layer)
	body.set_meta("pending_collision_mask",body.collision_mask)
	body.collision_layer=0;body.collision_mask=0

func _advance_house_assembly(job:HouseAssembly,budget_ms:float)->bool:
	var began:=Time.get_ticks_usec();var units:=0
	while job.stage!=HouseAssembly.Stage.DONE and (units==0 or float(Time.get_ticks_usec()-began)/1000.<budget_ms):
		var stage:=job.stage;var start:=Time.get_ticks_usec()
		_house_assembly_unit(job)
		# Era/landmark builders can add their own picking bodies. Suppress them
		# before yielding; regular cell bodies are disabled at creation.
		if job.hidden and stage in [HouseAssembly.Stage.ROUND_BODY,HouseAssembly.Stage.ERA_ROOF,HouseAssembly.Stage.DOMES,HouseAssembly.Stage.CONSERVATORY,HouseAssembly.Stage.SIGNATURE]:
			for body:StaticBody3D in job.root.find_children("*","StaticBody3D",true,false):_hold_house_body(body)
		var ms:=float(Time.get_ticks_usec()-start)/1000.
		job.stats.units+=1;job.stats.cpu_ms+=ms;job.stats.peak_ms=maxf(float(job.stats.peak_ms),ms)
		var label:String=HouseAssembly.LABELS[stage]
		job.stats.part_peaks[label]=maxf(float(job.stats.part_peaks.get(label,0.)),ms)
		units+=1
	if job.stage!=HouseAssembly.Stage.DONE:return false
	preload("res://scripts/world/city_creation_house_frame.gd").apply(job.root,job.house)
	job.root.set_meta("house_assembly",job.stats)
	return true

func _house_assembly_unit(job:HouseAssembly)->void:
	match job.stage:
		HouseAssembly.Stage.ROUND_BODY:
			job.root=RoundTower.build(self,job.house);buildings.add_child(job.root)
			job.stage=HouseAssembly.Stage.ROUND_FINISH
		HouseAssembly.Stage.ROUND_FINISH:
			RoundTower.finish(self,job.root,job.house);job.stage=HouseAssembly.Stage.DONE
		HouseAssembly.Stage.CELL_BASE:
			if job.cell_index==job.cells.size():job.stage=HouseAssembly.Stage.ERA_ROOF;return
			job.current=_house_cell_base(job,job.cells[job.cell_index]);job.wall_index=0
			if job.current.terrace:job.cell_index+=1
			else:job.stage=HouseAssembly.Stage.CELL_WALL
		HouseAssembly.Stage.CELL_WALL:
			_house_cell_wall(job,job.current,HouseAssembly.DIRECTIONS[job.wall_index]);job.wall_index+=1
			if job.wall_index==4:job.stage=HouseAssembly.Stage.CELL_ROOF
		HouseAssembly.Stage.CELL_ROOF:
			_house_cell_roof(job,job.current);job.stage=HouseAssembly.Stage.CELL_ORGANIC
		HouseAssembly.Stage.CELL_ORGANIC:
			if not preload("res://scripts/visual/city_creation_organic_corners.gd").step(self,job,job.current):return
			job.current=null;job.cell_index+=1;job.stage=HouseAssembly.Stage.CELL_BASE
		HouseAssembly.Stage.ERA_ROOF:
			if job.era=="clockwork":
				if job.clockwork_index<job.clockwork_roofs.size():
					var data:Dictionary=job.clockwork_roofs[job.clockwork_index]
					Clockwork.install(self,job.root,job.house,data);job.clockwork_records.append(data.metadata);job.clockwork_index+=1
					return
				job.root.set_meta("clockwork_mansards",job.clockwork_records)
			elif job.era=="modern_eco":
				var roofs:Array=job.modern_parts.roofs;var bridges:Array=job.modern_parts.bridges
				if job.modern_index<roofs.size():
					job.modern_records.append(Modern.roof(self,job.root,job.house,job.palette,roofs[job.modern_index]));job.modern_index+=1
					return
				if job.modern_index==roofs.size():job.root.set_meta("modern_roofs",job.modern_records)
				if job.modern_index<roofs.size()+bridges.size():
					Modern._bridge(self,job.root,job.house,bridges[job.modern_index-roofs.size()],job.palette);job.modern_index+=1
					return
				job.root.set_meta("skybridges",bridges)
			elif job.joined or Classical.Ancient.active(job.house,job.era):_joined_roofs(job.root,job.house,job.palette)
			job.stage=HouseAssembly.Stage.DOMES
		HouseAssembly.Stage.DOMES:
			Renaissance.build(self,job.root,job.house,job.domes)
			preload("res://scripts/visual/city_creation_terracotta_skylights.gd").build(self,job.root,job.house,job.palette);job.stage=HouseAssembly.Stage.CONSERVATORY
		HouseAssembly.Stage.CONSERVATORY:
			if not job.flower_plan.is_empty():conservatory.build(self,job.root,job.house,job.flower_plan)
			job.stage=HouseAssembly.Stage.SIGNATURE
		HouseAssembly.Stage.SIGNATURE:
			job.root.set_meta("tower_cells",job.tower_info)
			if str(job.house.get("signature",""))=="botanical_palace":
				job.root.set_meta("signature","botanical_palace")
				if job.palace.is_empty():job.palace=SignatureVisual.ClockworkLandmarks.begin_palace(self,job.root,job.house)
				if not SignatureVisual.ClockworkLandmarks.step_palace(self,job.root,job.house,job.palace):return
			else:SignatureVisual.decorate(self,job.root,job.house)
			job.stage=HouseAssembly.Stage.SMOKE
		HouseAssembly.Stage.SMOKE:
			preload("res://scripts/visual/city_creation_balcony_shell.gd").build(self,job)
			var points:Array=job.root.get_meta("chimneys",[])
			if str(job.house.get("role","residential"))=="bakery" and not points.is_empty():bakery_smoke.build(job.root,points[0])
			job.stage=HouseAssembly.Stage.BEND
		HouseAssembly.Stage.BEND:
			if preload("res://scripts/visual/city_creation_hinge_assembly.gd").step(job):job.stage=HouseAssembly.Stage.DONE

func _house_cell_base(job:HouseAssembly,cell:Dictionary)->HouseAssembly.Cell:
	var house:Dictionary=job.house
	var root:Node3D=job.root
	var arcade_faces:Array=job.arcade_faces
	var passages:Array=job.passages
	var era:String=job.era
	var palette:Array=job.palette
	var cells:Array=job.cells
	var canopy:Dictionary=job.canopy
	var walls:Material=job.walls
	var p := _cell_position(house,cell)
	var level := int(cell["level"])
	var y := level*FLOOR
	var x := int(cell["x"])
	var z := int(cell["z"])
	var terrace := str(cell["kind"]) == "terrace"
	var retreats: Dictionary={}
	var core := Rect2(-UNIT*.5,-UNIT*.5,UNIT,UNIT)
	for face: Dictionary in arcade_faces:
		if str(face.cell_id)!=str(cell.id): continue
		var side: Vector2i=face.side
		var amount:=float(face.retreat)
		retreats[side]=amount
		if side.x<0: core.position.x+=amount; core.size.x-=amount
		if side.x>0: core.size.x-=amount
		if side.y<0: core.position.y+=amount; core.size.y-=amount
		if side.y>0: core.size.y-=amount
	var cuts: Array = []
	if level == 0:
		for passage: Dictionary in passages:
			if str(passage.cell_id) == str(cell.id): cuts.append(passage)
	var node := Node3D.new()
	node.name = str(cell["id"])
	node.position = p
	root.add_child(node)
	if level == 0 and cuts.is_empty(): _foundation_contact(node)
	var body := StaticBody3D.new()
	if job.hidden:_hold_house_body(body)
	body.set_meta("house_id",str(house["id"]))
	body.set_meta("cell_id",str(cell["id"]))
	body.set_meta("cell",cell.duplicate(true))
	node.add_child(body)
	# Rooms stay on their saved horizontal datum; the plinth reaches the
	# unprotected slope even when the interior terrain has been levelled.
	var footing_bottom := Highland.footing(self,house,cell) if level==0 else y
	var footing_pieces: Array = Architecture.floor_pieces(cuts) if not cuts.is_empty() else [Rect2(-UNIT*0.5,-UNIT*0.5,UNIT,UNIT)]
	if cuts.is_empty() and not preload("res://scripts/visual/city_creation_balcony_shell.gd").base(self,job,node,body,cell,footing_bottom):
		var top := y+(0.18 if terrace else FLOOR)
		_cell_box_shape(body,Vector3(core.size.x,top-footing_bottom,core.size.y),Vector3(core.get_center().x,(top+footing_bottom)*0.5,core.get_center().y))
		_box(node,Vector3(UNIT,y+0.15-footing_bottom,UNIT),Vector3(0,(y+0.15+footing_bottom)*0.5,0),_material(Color("c7b995")))
		if not retreats.is_empty():
			_cell_box_shape(body,Vector3(UNIT,y+.15-footing_bottom,UNIT),Vector3(0,(y+.15+footing_bottom)*.5,0))
			_box(node,Vector3(UNIT,.10,UNIT),Vector3(0,FLOOR-.05,0),walls)
			_cell_box_shape(body,Vector3(UNIT,.10,UNIT),Vector3(0,FLOOR-.05,0))
	elif not cuts.is_empty():
		# Raised foundations remain only underneath the structural piers.
		for piece: Rect2 in Architecture.floor_pieces(cuts):
			var size_value := Vector3(piece.size.x,0.15-footing_bottom,piece.size.y)
			var at := Vector3(piece.get_center().x,(0.15+footing_bottom)*0.5,piece.get_center().y)
			_box(node,size_value,at,_material(Color("c7b995")))
			_cell_box_shape(body,size_value,at)
		# The overhead slab provides real roof picking above the hollow room.
		_box(node,Vector3(UNIT,0.10,UNIT),Vector3(0,FLOOR-0.05,0),walls)
		_cell_box_shape(body,Vector3(UNIT,0.10,UNIT),Vector3(0,FLOOR-0.05,0))
	if level==0 and float(house.get("base_y",0.0))>0.05:
		Highland.build_plinth(self,node,house,cell,footing_bottom,footing_pieces)
	var frame:=HouseAssembly.Cell.new()
	frame.cell=cell
	frame.p=p
	frame.level=level
	frame.y=y
	frame.x=x
	frame.z=z
	frame.terrace=terrace
	frame.retreats=retreats
	frame.core=core
	frame.cuts=cuts
	frame.node=node
	frame.body=body
	if terrace:
		if house.get("signature","")=="floating_amphitheater":return frame
		elif era=="modern_eco":Modern.terrace(self,node,cell,cells,y,palette)
		else:_terrace(node,cell,cells,y,palette,house)
		if str(canopy.get("cell_id",""))==str(cell.id): TerraceCanopy.build(self,node,body,y+.19,palette)
		return frame
	return frame

func _house_cell_wall(job:HouseAssembly,frame:HouseAssembly.Cell,direction:Vector2i)->void:
	var house:Dictionary=job.house
	var palette:Array=job.palette
	var era:String=job.era
	var style:String=job.style
	var doors:Dictionary=job.doors
	var primary:Dictionary=job.primary
	var arcades:Array=job.arcades
	var walls:Material=job.walls
	var trim:Material=job.trim
	var cell:Dictionary=frame.cell
	var x:int=frame.x
	var z:int=frame.z
	var level:int=frame.level
	var y:float=frame.y
	var node:Node3D=frame.node
	var body:StaticBody3D=frame.body
	var retreats:Dictionary=frame.retreats
	var core:Rect2=frame.core
	var cuts:Array=frame.cuts
	var neighbor := _neighbor_cell(house,cell,direction)
	if not neighbor.is_empty() and str(neighbor["kind"]) == "room": return
	var wall := Node3D.new()
	wall.position = Vector3(direction.x*UNIT*0.5,y,direction.y*UNIT*0.5)
	wall.rotation.y = atan2(float(direction.x),float(direction.y))
	node.add_child(wall)
	if preload("res://scripts/visual/city_creation_balcony_shell.gd").wall(self,job,frame,wall,direction):return
	if retreats.has(direction):
		var outer := Node3D.new()
		outer.name="Arcade_%d_%d" % [direction.x,direction.y]
		outer.transform=wall.transform
		node.add_child(outer)
		var report: Dictionary=Arcade.build(self,outer,body,palette)
		report["cell_id"]=str(cell.id)
		report["side"]=direction
		arcades.append(report)
		wall.position-=Vector3(direction.x,0,direction.y)*float(retreats[direction])
		wall.set_meta("arcade_recess",float(retreats[direction]))
	# Side walls end at the recessed wall, so adjoining galleries remain
	# open across room seams instead of retaining a full-width end wall.
	var wall_width:=UNIT
	var wall_center:=Vector3.ZERO
	if not retreats.is_empty():
		wall_width=core.size.y if direction.x!=0 else core.size.x
		# Keep doors on their original tangent axis. Only structural wall
		# meshes shift sideways when a second arcade cuts a corner.
		var tangent_offset:=Vector3(0,0,core.get_center().y) if direction.x!=0 else Vector3(core.get_center().x,0,0)
		wall_center=wall.basis.inverse()*tangent_offset
	var opening := Architecture.wall_opening(cuts,direction)
	if not opening.is_empty():
		wall.name = "Passage_%d_%d" % [direction.x,direction.y]
		Architecture.build_wall(self,wall,body,opening,palette[0],Color("e4d4b2"))
		wall.set_meta("house_style",style)
		if style=="stone": _stone_arch_surface(wall.get_node("ArchWallSurface"),walls)
		else: wall.get_node("ArchWallSurface").material_override=walls
		_box(wall,Vector3(UNIT+0.07,0.11,0.20),Vector3(0,FLOOR-0.06,0.02),trim)
		return
	if era!="modern_eco" and not preload("res://scripts/visual/city_creation_recessed_facade.gd").shell(self,job,frame,wall,direction,wall_width,wall_center):_box(wall,Vector3(wall_width,FLOOR,0.13),wall_center+Vector3(0,FLOOR*0.5,0),walls)
	if not cuts.is_empty() or not retreats.is_empty():
		_cell_box_shape(body,Vector3(wall_width,FLOOR,0.13),wall.transform*(wall_center+Vector3(0,FLOOR*0.5,0)),wall.rotation.y)
	_box(wall,Vector3(wall_width+0.04,0.12,0.20),wall_center+Vector3(0,0.12,0.02),_material(Color("c7b797")))
	_box(wall,Vector3(wall_width+0.07,0.11,0.20),wall_center+Vector3(0,FLOOR-0.06,0.02),trim)
	var entrance: Dictionary = doors.get([str(cell.id),direction],{}) if level == 0 else {}
	var door := not entrance.is_empty()
	var active := door and bool(entrance.active)
	var principal: bool = door and not primary.is_empty() and primary.cell_id == str(cell.id) and primary.side == direction
	if door:
		wall.name = "Entrance_%d_%d" % [direction.x,direction.y]
		wall.set_meta("entrance",entrance.duplicate(true))
	if era=="modern_eco":Modern.facade(self,wall,door,int(house.get("seed",0))+x*17+z*31+level*7,palette,house,cell,direction)
	else:Classical.openings(self,job,frame,wall,door,active,wall_width)
	if era in ["pastoral","renaissance"] and not house.has("signature"):Classical.facade(self,job,frame,wall,direction,door,wall_width)
	elif era == "renaissance" and house.has("signature"): Renaissance.facade(self,wall,door,level>0)
	elif era=="clockwork":Clockwork.facade(self,wall,door,level>0)
	preload("res://scripts/visual/city_creation_street_rhythm.gd").decorate(self,job,frame,wall,direction,wall_width)
	if wall_width>=UNIT-.01 and era!="modern_eco" and not Classical.Ancient.active(house,era): HouseStyles.build_details(self,wall,palette,door,style,int(house.get("seed",0))+x*17+z*31+level*7)
	if active: _door_porch(wall,retreats.has(direction) or (principal and str(house.get("role","residential")) == "bakery"),Frontage.porch_plan(state,house,entrance))
	if principal and not job.role_prop_added:
		_role_frontage(wall,str(house.get("role","residential")))
		job.role_prop_added = true

func _house_cell_roof(job:HouseAssembly,frame:HouseAssembly.Cell)->void:
	if preload("res://scripts/visual/city_creation_balcony_shell.gd").ceiling(self,job,frame):return
	if Classical.Ancient.active(job.house,job.era):return
	if preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd").active(state,job.house):return
	if not preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd").guild(state,job.house).is_empty():return
	var house:Dictionary=job.house
	var root:Node3D=job.root
	var cells:Array=job.cells
	var palette:Array=job.palette
	var era:String=job.era
	var dome_cells:Dictionary=job.dome_cells
	var tower_ids:Dictionary=job.tower_ids
	var tower_info:Array=job.tower_info
	var joined:bool=job.joined
	var trim:Material=job.trim
	var cell:Dictionary=frame.cell
	var node:Node3D=frame.node
	var body:StaticBody3D=frame.body
	var p:Vector3=frame.p
	var level:int=frame.level
	var x:int=frame.x
	var z:int=frame.z
	var y:float=frame.y
	if not _neighbor_cell(house,cell,Vector2i.ZERO,1).is_empty():
		_box(node,Vector3(UNIT+0.06,0.1,UNIT+0.06),Vector3(0,y+FLOOR,0),trim)
		return
	if dome_cells.has(str(cell.id)):
		_box(node,Vector3(UNIT,.12,UNIT),Vector3(0,y+FLOOR-.04,0),trim)
		return
	if era in ["clockwork","modern_eco"]:return
	if tower_ids.has(str(cell.id)):
		tower_info.append(Tower.build(self,root,body,house,cell,palette))
		return
	if joined: return
	# One gable across each exposed room run: no interior eaves or roof valley.
	var left := _at(cells,x-1,z,level)
	if not left.is_empty() and str(left["kind"]) == "room" and _at(cells,x-1,z,level+1).is_empty(): return
	var span := 1
	while true:
		var next := _at(cells,x+span,z,level)
		if next.is_empty() or str(next["kind"]) != "room" or not _at(cells,x+span,z,level+1).is_empty(): break
		span += 1
	var roof := Node3D.new()
	roof.position.x = float(span-1)*UNIT*0.5
	node.add_child(roof)
	var front_open := false
	var back_open := false
	for column in range(span):
		var front := _at(cells,x+column,z-1,level)
		var back := _at(cells,x+column,z+1,level)
		front_open = front_open or front.is_empty() or str(front.get("kind","")) != "room" or not _at(cells,x+column,z-1,level+1).is_empty()
		back_open = back_open or back.is_empty() or str(back.get("kind","")) != "room" or not _at(cells,x+column,z+1,level+1).is_empty()
	var bakery:=str(house.get("role","residential"))=="bakery"
	_roof(roof,y+FLOOR,palette[1],int(house.get("seed",0))+x*13+z*19,span,front_open,back_open,bakery)
	if bakery:
		root.set_meta("chimneys",[p+roof.position+Vector3(0.4,y+FLOOR+0.99,-0.45)])

func _house_fingerprint(house: Dictionary) -> int:
	return hash([_house_geometry_fingerprint(house),house.get("palette",0),house.get("finish",""),house.get("custom_colors",{})])


func _house_geometry_fingerprint(house: Dictionary) -> int:
	if _house_dependency_revision!=state.revision:
		_house_dependency_revision=state.revision
		_house_dependency_global=hash([state.roads,state.waters,state.districts,state.era_unlocks,preload("res://scripts/world/city_creation_tradition_rules.gd").geometry_key(state)])
		_house_dependency_bounds={}
		for row:Dictionary in state.houses:
			_house_dependency_bounds[str(row.id)]=preload("res://scripts/world/city_creation_house_frame.gd").house_bounds(row)
	var id:=str(house.id);var nearby:Array=[]
	var influence:Rect2=_house_dependency_bounds[id].grow(10.)
	for row:Dictionary in state.houses:
		if influence.intersects(_house_dependency_bounds[str(row.id)],true):nearby.append(row)
	var dependency:int=hash([house,nearby,_house_dependency_global,state.house_era(house),building_context.signature(id),state._ground_terrain.region_signature(influence)])
	var cached:Dictionary=house_geometry_cache.get(id,{})
	if cached.get("dependency") == dependency and craft.layouts.has(id) and quality_visual.geometry_signatures.has(id):
		_frontage_signature(house)
		house_passages(id)
		craft.layout_inputs[id]=[state.get_instance_id(),state.revision,hash(house)]
		quality_visual.geometry_inputs[id]=[state.get_instance_id(),state.revision,hash(house)]
		return int(cached.fingerprint)
	var footings: Array = []
	for cell: Dictionary in house.cells:
		if int(cell.level)==0: footings.append(Highland.footing(self,house,cell))
	var arcades:=ArcadePlan.for_house(state,house)
	var frontages:=_frontage_signature(house)
	quality_visual.prepare_geometry(self,house,frontages,arcades)
	craft.prepare_layout(self,house,frontages,arcades)
	var fingerprint:int=hash([house.get("signature",""),state.AmphitheaterPlan.for_house(state,house),state.Signatures.wheel_plan(state,house) if house.get("signature","")=="watermill" else {},state.house_era(house),house.origin,house.cells,house.get("base_y",0.0),footings,highland.contact_plan(self,house,footings).signature,RoundTowerPlan.for_house(house,state.houses,state.roads),ConservatoryPlan.for_house(state,house),Clockwork.adjacency_signature(state,house),Modern.Plan.adjacency_signature(state,house),arcades,house.get("style","classic"),house.get("architecture",""),preload("res://scripts/world/city_creation_organic_form.gd").geometry_key(state,house),preload("res://scripts/world/city_creation_house_hinge.gd").key(house),house.get("seed",0),house.get("role","residential"),frontages,building_context.signature(str(house.id)),TerraceCanopy.choose(state.houses,house)])
	house_geometry_cache[id]={"dependency":dependency,"fingerprint":fingerprint}
	return fingerprint


func _style_wall_material(style: String,base: Color) -> StandardMaterial3D:
	var tint := base.lerp(Color.WHITE,0.60) if style=="stone" else base
	var key := "wall/"+style+"/"+str(tint)
	if not materials.has(key): materials[key]=WallMaterial.source(tint,StoneWallTexture if style=="stone" else null,style)
	return materials[key]


func _stone_arch_surface(surface: MeshInstance3D,material: Material) -> void:
	# UVs only; the same source triangles already supplied the real collision.
	var arrays: Array=surface.mesh.surface_get_arrays(0)
	var vertices: PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
	var uv := PackedVector2Array()
	for point: Vector3 in vertices: uv.append(Vector2((point.x+UNIT*0.5)/UNIT,1.0-point.y/FLOOR))
	arrays[Mesh.ARRAY_TEX_UV]=uv
	var mesh := ArrayMesh.new()
	mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,arrays)
	surface.mesh=mesh
	surface.material_override=material

func _neighbor_cell(house: Dictionary, cell: Dictionary, side: Vector2i, level_offset: int=0) -> Dictionary:
	var row: Dictionary = building_context.neighbor(house,cell,side,level_offset)
	return row.cell if not row.is_empty() else {}

func _structural_joined(house: Dictionary) -> bool:
	for cell: Dictionary in house.cells:
		for side: Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
			var row: Dictionary = building_context.neighbor(house,cell,side,0,true)
			if not row.is_empty() and str(row.house_id)!=str(house.id): return true
	return false

func _joined_roofs(parent: Node3D, house: Dictionary, palette: Array) -> void:
	if Classical.Ancient.active(house,state.house_era(house)):Classical.Ancient.roofs(self,parent,house,palette);return
	if preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd").active(state,house):return
	if not preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd").guild(state,house).is_empty():return
	var roofs: Array[Vector3] = []
	var roof_coordinates:=PackedVector2Array()
	var fascia: Array[Vector3] = []
	var gables: Array[Vector3] = []
	var rims: Array[Vector3] = []
	var panes: Array[Vector3] = []
	var timber: Array[Vector3] = []
	var attic_windows: Array = []
	var patches: Array = building_context.roof_patches(str(house.id))
	var tower_ids: Dictionary = {}
	for tower: Dictionary in parent.get_meta("tower_cells",[]): tower_ids[str(tower.cell_id)] = true
	var roof_info: Array = []
	var dome_cells: Dictionary = parent.get_meta("dome_cells",{})
	for patch: Dictionary in patches:
		patch=preload("res://scripts/visual/city_creation_organic_corners.gd").patch(self,house,patch,parent)
		if tower_ids.has(str(patch.cell_id)) or dome_cells.has(str(patch.cell_id)): continue
		if patch.surface=="roof":
			roofs.append_array(patch.vertices)
			roof_coordinates.append_array(patch.coordinates)
			roof_info.append({"cell_id":patch.cell_id,"group_id":patch.group_id,"bounds":patch.bounds})
		elif patch.surface=="gable":
			gables.append_array(patch.vertices)
			var detail: Dictionary = Gables.details(patch)
			rims.append_array(detail.rim)
			panes.append_array(detail.pane)
			timber.append_array(detail.timber)
			attic_windows.append(detail.window)
		else: fascia.append_array(patch.vertices)
	if not roofs.is_empty():
		var mesh := _roof_surface(parent,roofs,palette[1],roof_coordinates)
		mesh.name="JoinedRoofSurface"
		var key := "joined_roof/"+str(palette[1])
		if not materials.has(key):
			var material := ShaderMaterial.new()
			material.shader=JoinedRoofShader
			material.set_shader_parameter("roof_color",palette[1])
			materials[key]=material
		mesh.material_override=materials[key]
	if not fascia.is_empty(): _triangles(parent,fascia,palette[1].darkened(0.20))
	if not gables.is_empty():
		_triangles(parent,gables,palette[0])
		_triangles(parent,rims,Color("f6ead0"))
		_triangles(parent,panes,Color("425b59"))
		_triangles(parent,timber,HouseStyles.TIMBER if house.get("style","classic")=="timber" else palette[2])
	parent.set_meta("attic_windows",attic_windows)
	parent.set_meta("roof_patches",roof_info)
	var chimneys: Array[Vector3] = []
	for cell: Dictionary in house.cells:
		if tower_ids.has(str(cell.id)) or dome_cells.has(str(cell.id)): continue
		if str(cell.kind)!="room" or not _neighbor_cell(house,cell,Vector2i.ZERO,1).is_empty(): continue
		if str(house.get("role","residential"))!="bakery" and posmod(int(house.get("seed",0))+int(cell.x)*13+int(cell.z)*19,4)!=0: continue
		var at := _cell_position(house,cell)+Vector3(0.4,0,-0.45)
		var roof_y := _joined_roof_height(patches,str(cell.id),Vector2(at.x,at.z))
		at.y=roof_y+0.20
		_box(parent,Vector3(0.24,0.57,0.26),at,_material(Color("e0cbaa")))
		_box(parent,Vector3(0.31,0.09,0.33),at+Vector3(0,0.33,0),_material(Color("b67d61")))
		_box(parent,Vector3(0.18,0.025,0.18),at+Vector3(0,0.382,0),_material(Color("4f5951")))
		chimneys.append(at+Vector3(0,0.43,0))
		break
	parent.set_meta("chimneys",chimneys)

func _joined_roof_height(patches: Array, cell_id: String, p: Vector2) -> float:
	for patch: Dictionary in patches:
		if patch.surface!="roof" or str(patch.cell_id)!=cell_id: continue
		for index in range(0,patch.vertices.size(),3):
			var a: Vector3 = patch.vertices[index]
			var b: Vector3 = patch.vertices[index+1]
			var c: Vector3 = patch.vertices[index+2]
			var aa := Vector2(a.x,a.z)
			var bb := Vector2(b.x,b.z)
			var cc := Vector2(c.x,c.z)
			if not Geometry2D.point_is_inside_triangle(p,aa,bb,cc): continue
			var area := (bb-aa).cross(cc-aa)
			var u := (p-aa).cross(cc-aa)/area
			var v := (bb-aa).cross(p-aa)/area
			return a.y+(b.y-a.y)*u+(c.y-a.y)*v
	return 0.0

func _cell_box_shape(body: StaticBody3D, size_value: Vector3, at: Vector3, yaw: float = 0.0) -> void:
	var collision := CollisionShape3D.new()
	var box := BoxShape3D.new()
	box.size = size_value
	collision.shape = box
	collision.position = at
	collision.rotation.y = yaw
	body.add_child(collision)

func _prop_clear(parent: Node3D, local: Vector3, radius: float) -> bool:
	var at := parent.to_global(local)
	var p := Vector2(at.x,at.z)
	var own_cell := str(parent.get_parent().name)
	return _clearance_at(p,own_cell,radius)

func _clearance_at(p: Vector2, own_cell: String, radius: float) -> bool:
	for house: Dictionary in state.houses:
		for cell: Dictionary in house["cells"]:
			if str(cell["id"]) == own_cell or int(cell["level"]) != 0: continue
			var center := _cell_position(house,cell)
			var delta := Vector2(maxf(0,absf(p.x-center.x)-UNIT*0.5),maxf(0,absf(p.y-center.z)-UNIT*0.5))
			if delta.length() < radius: return false
	for road: Dictionary in state.roads:
		var points: Array = road["points"]
		for i in range(points.size()-1):
			var a := Vector2(float(points[i][0]),float(points[i][1]))
			var b := Vector2(float(points[i+1][0]),float(points[i+1][1]))
			if p.distance_to(Geometry2D.get_closest_point_to_segment(p,a,b)) < float(road.get("width",1.1))*0.5+radius: return false
	return true

func _role_frontage(wall: Node3D, role: String) -> void:
	if role == "residential": return
	var wood := _material(Color("8e7052"))
	var cream := Color("efe2be")
	if role == "bakery":
		# Suspended canvas stays above the pedestrian path; no poles in the street.
		for stripe in range(0 if wall.has_meta("arcade_recess") else 8):
			var x0 := -0.78+stripe*0.195
			var color := Color("bc7758") if stripe%2 == 0 else cream
			_quad(wall,Vector3(x0,1.43,0.12),Vector3(x0+0.195,1.43,0.12),Vector3(x0+0.195,1.25,0.69),Vector3(x0,1.25,0.69),color)
			_box(wall,Vector3(0.195,0.12,0.045),Vector3(x0+0.0975,1.2,0.68),_material(color))
		var counter := Vector3(0.82,0.0,0.20)
		if _prop_clear(wall,counter,0.29):
			_box(wall,Vector3(0.52,0.08,0.38),counter+Vector3(0,0.57,0),wood)
			for x in [-0.20,0.20]: _box(wall,Vector3(0.045,0.55,0.27),counter+Vector3(x,0.28,0),wood)
		# Bread emblem makes the service readable even when its counter is omitted.
		_box(wall,Vector3(0.45,0.38,0.055),Vector3(0.59,0.93,0.10),wood)
		_crown(wall,Vector3(0.59,0.94,0.15),Vector3(0.17,0.065,0.07),Color("d9af72"))
	elif role == "atelier":
		wall.set_meta("atelier_frontage",true)
		_box(wall,Vector3(.42,.32,.04),Vector3(.59,.93,.13),_material(Color("a06d8c")))
		_box(wall,Vector3(.32,.025,.025),Vector3(.59,.93,.17),_material(Color("e3c784")))
		_box(wall,Vector3(.025,.22,.025),Vector3(.59,.93,.17),_material(Color("e3c784")))
	elif role=="clockmaker":
		wall.set_meta("clockmaker_frontage",true)
		var face:=_cylinder(wall,.19,.19,.045,Vector3(.61,.96,.14),_material(Color("d6bd7d")),20);face.rotation.x=PI*.5
		_box(wall,Vector3(.018,.14,.025),Vector3(.61,1.01,.18),_material(Color("45594f")))
		_box(wall,Vector3(.12,.018,.025),Vector3(.66,.96,.18),_material(Color("45594f")))
	elif role == "workshop":
		# Joinery, unfinished instruments and timber identify an actual artisan
		# service. Everything beside the entrance obeys the same local clearance
		# used by its cache signature; no piano or stage is inherited from venue.
		wall.set_meta("workshop_frontage",true)
		var bench := Vector3(0.90,0,0.20)
		if _prop_clear(wall,bench,0.35):
			wall.set_meta("workshop_bench",true)
			_box(wall,Vector3(0.55,0.08,0.43),bench+Vector3(0,0.58,0),wood)
			for x in [-0.21,0.21]: _box(wall,Vector3(0.055,0.54,0.33),bench+Vector3(x,0.27,0),wood)
			for index in range(5):
				var at := bench+Vector3(-0.12+(index%3)*0.12,0.10+(index/3)*0.13,0)
				var timber := _cylinder(wall,0.055,0.052,0.31,at,wood,8)
				timber.rotation.x = PI*0.5
				var end_grain := _cylinder(wall,0.044,0.044,0.010,at+Vector3(0,0,0.158),_material(Color("d2b382")),8)
				end_grain.rotation.x = PI*0.5
			# Peg rack holds the six displayed, physically produced chimes.
			_box(wall,Vector3(0.53,0.035,0.035),bench+Vector3(0,1.15,0),wood)
			for x in [-0.24,0.24]: _box(wall,Vector3(0.025,0.59,0.025),bench+Vector3(x,0.87,0),wood)
			var plane := _box(wall,Vector3(0.16,0.06,0.08),bench+Vector3(0.06,0.65,0.04),_material(Color("b69664")))
			plane.rotation.y = -0.2
			_box(wall,Vector3(0.06,0.06,0.025),bench+Vector3(0.06,0.70,0.04),_material(Color("566356")))
			for shaving in range(5):
				var curl := _box(wall,Vector3(0.07,0.012,0.018),bench+Vector3(-0.17+shaving*0.07,0.632,0.13),_material(Color("d8bb87")))
				curl.rotation.y = shaving*0.7
		var logs := Vector3(-0.81,0,0.28)
		if _prop_clear(wall,logs,0.28):
			for index in range(5):
				var at := logs+Vector3(-0.12+(index%3)*0.12,0.10+(index/3)*0.16,0)
				var log_piece := _cylinder(wall,0.068,0.059,0.40,at,wood,8)
				log_piece.rotation.x = PI*0.5
				var cut := _cylinder(wall,0.055,0.055,0.012,at+Vector3(0,0,0.205),_material(Color("d2b382")),8)
				cut.rotation.x = PI*0.5
		# The hanging half-lute stays on the facade even where outdoor furniture
		# cannot fit. A soundhole, neck and three strings make its role legible.
		_box(wall,Vector3(0.38,0.55,0.045),Vector3(0.59,1.10,0.10),_material(Color("526d60")))
		_crown(wall,Vector3(0.59,1.01,0.165),Vector3(0.115,0.16,0.035),Color("ceaa74"))
		_crown(wall,Vector3(0.59,1.07,0.20),Vector3(0.037,0.045,0.009),Color("5d4d39"))
		_box(wall,Vector3(0.046,0.26,0.04),Vector3(0.59,1.25,0.18),wood)
		for x in [-0.015,0.0,0.015]: _box(wall,Vector3(0.004,0.38,0.007),Vector3(0.59+x,1.14,0.21),_material(Color("dbc795")))
	elif role == "garden_cafe":
		wall.set_meta("garden_cafe_frontage",true)
		# A painted cup keeps a cafe readable even when no complete safe
		# three-chair footprint fits. No decorative service capacity is invented.
		_box(wall,Vector3(0.40,0.43,0.045),Vector3(0.59,1.10,0.10),_material(Color("73917a")))
		_cylinder(wall,0.075,0.11,0.14,Vector3(0.59,1.08,0.20),_material(cream),10)
		_box(wall,Vector3(0.055,0.08,0.035),Vector3(0.71,1.09,0.20),_material(cream))
	else:
		var stage := Vector3(0.90,0,0.20)
		if _prop_clear(wall,stage,0.35):
			_box(wall,Vector3(0.62,0.16,0.40),stage+Vector3(0,0.08,0),wood)
			for plank in range(4): _box(wall,Vector3(0.012,0.008,0.40),stage+Vector3(-0.24+plank*0.16,0.165,0),_material(Color("b3966e")))
		var piano := Vector3(0.85,0,0.18)
		if _prop_clear(wall,piano,0.32):
			_box(wall,Vector3(0.50,0.48,0.23),piano+Vector3(0,0.39,0),_material(Color("586e65")))
			_box(wall,Vector3(0.53,0.04,0.34),piano+Vector3(0,0.45,0.03),_material(cream))
			for key in range(6): _box(wall,Vector3(0.025,0.018,0.10),piano+Vector3(-0.20+key*0.07,0.48,-0.06),_material(Color("3e534d")))
			for x in [-0.18,0.18]: _box(wall,Vector3(0.04,0.26,0.04),piano+Vector3(x,0.13,0.03),wood)
		# A painted musical flag is attached to the facade and cannot block a road.
		_box(wall,Vector3(0.46,0.48,0.055),Vector3(0.60,1.10,0.10),_material(Color("73968a")))
		_box(wall,Vector3(0.026,0.24,0.026),Vector3(0.63,1.12,0.15),_material(cream))
		_crown(wall,Vector3(0.58,1.0,0.15),Vector3(0.075,0.045,0.026),cream)
		_box(wall,Vector3(0.10,0.027,0.026),Vector3(0.66,1.24,0.15),_material(cream))
		for x in [-0.76,0.76]:
			var pot := Vector3(x,0.0,0.23)
			if not _prop_clear(wall,pot,0.22): continue
			_cylinder(wall,0.16,0.21,0.26,pot+Vector3(0,0.13,0),_material(Color("b98464")))
			_cylinder(wall,0.035,0.025,0.43,pot+Vector3(0,0.43,0),wood)
			_crown(wall,pot+Vector3(0,0.69,0),Vector3(0.25,0.29,0.24),Color("779375"))

func _door_porch(wall: Node3D, covered_by_shop: bool, plan: Dictionary={}) -> void:
	# Shared height-derived plan; the flat legacy porch retains three treads.
	var stone := _material(Color("d7c8a5"))
	var count := int(plan.get("count",3))
	var bottom := float(plan.get("bottom",0.0))
	var rise := 0.15-bottom
	for step in range(count):
		var top := 0.15-float(step)*rise/float(count)
		var height := top-bottom
		_box(wall,Vector3(0.94+float(step)*0.09,height,0.29),Vector3(0,bottom+height*0.5,0.18+float(step)*0.23),stone)
	wall.set_meta("porch_steps",count)
	wall.set_meta("porch_plan",plan)
	if not covered_by_shop:
		var timber := _material(Color("8e7052"))
		_quad(wall,Vector3(-0.60,1.59,0.05),Vector3(0.60,1.59,0.05),Vector3(0.60,1.43,0.76),Vector3(-0.60,1.43,0.76),Color("ad8660"))
		_box(wall,Vector3(1.24,0.09,0.07),Vector3(0,1.42,0.74),timber)
		for x in [-0.50,0.50]: _box(wall,Vector3(0.045,0.19,0.38),Vector3(x,1.40,0.24),timber)
	var lamp := _material(Color("e8c47b"))
	lamp.emission_enabled = true
	lamp.emission = Color("e8b565")
	lamp.emission_energy_multiplier = 0.35
	_box(wall,Vector3(0.13,0.19,0.13),Vector3(0.56,1.01,0.20),lamp)
	var frame := _material(Color("657267"))
	_box(wall,Vector3(0.16,0.035,0.16),Vector3(0.56,0.90,0.20),frame)
	_box(wall,Vector3(0.16,0.045,0.16),Vector3(0.56,1.13,0.20),frame)
	wall.set_meta("door_lamp",true)

func _facade(wall: Node3D, palette: Array, door: bool, seed_value: int, active: bool = false, width_value: float = UNIT) -> void:
	var dark := _material(Color("425b59"))
	var wood := _material(palette[2])
	var trim := _material(Color("f6ead0"))
	if door:
		_box(wall,Vector3(0.61,1.13,0.10),Vector3(0,0.675,0.105),trim)
		_box(wall,Vector3(0.46,1.02,0.075),Vector3(0,0.63,0.167),wood)
		_box(wall,Vector3(0.34,0.13,0.04),Vector3(0,1.24,0.20),dark)
		for x in [-0.11,0.0,0.11]: _box(wall,Vector3(0.018,0.8,0.018),Vector3(x,0.62,0.21),_material(Color("7d8870")))
		_cylinder(wall,0.025,0.025,0.035,Vector3(0.16,0.61,0.22),_material(Color("d6bb74")))
		if not active:
			_box(wall,Vector3(0.96,0.10,0.54),Vector3(0,0.055,0.3),_material(Color("d7c8a5")))
			_box(wall,Vector3(1.04,0.045,0.68),Vector3(0,0.022,0.55),_material(Color("bdb797")))
	else:
		for x in ([0.0] if width_value<UNIT-.01 else [-0.46,0.46]):
			_box(wall,Vector3(0.47,0.70,0.075),Vector3(x,1.00,0.092),trim)
			_box(wall,Vector3(0.35,0.56,0.04),Vector3(x,1.00,0.14),dark)
			_box(wall,Vector3(0.028,0.57,0.026),Vector3(x,1.00,0.17),trim)
			_box(wall,Vector3(0.36,0.024,0.026),Vector3(x,1.00,0.17),trim)
			for side in [-1,1]:
				_box(wall,Vector3(0.14,0.58,0.04),Vector3(x+side*0.25,1.0,0.145),wood)
				for slat in range(5): _box(wall,Vector3(0.13,0.018,0.013),Vector3(x+side*0.25,0.79+slat*0.105,0.174),_material(palette[2].lightened(0.13)))
			_box(wall,Vector3(0.53,0.08,0.21),Vector3(x,0.64,0.18),_material(Color("d5c5a4")))
			if posmod(seed_value,3) == 0:
				_box(wall,Vector3(0.43,0.13,0.13),Vector3(x,0.65,0.25),_material(Color("ae7256")))
				_cylinder(wall,0.20,0.16,0.12,Vector3(x,0.75,0.25),_material(Color("78936a")))

func _roof(node: Node3D, y: float, roof_color: Color, seed_value: int, span: int = 1, front_open: bool = true, back_open: bool = true, force_chimney: bool = false) -> void:
	var half := UNIT*span*0.5+0.12
	var half_z := UNIT*0.5+0.12
	var eave := y+0.03
	var ridge := y+0.49+float(span-1)*0.13
	var a := Vector3(-half,eave,-half_z)
	var b := Vector3(half,eave,-half_z)
	var c := Vector3(half,eave,half_z)
	var d := Vector3(-half,eave,half_z)
	var r0 := Vector3(0,ridge,-half_z)
	var r1 := Vector3(0,ridge,half_z)
	_quad(node,a,d,r1,r0,roof_color.darkened(0.04))
	_quad(node,r0,r1,c,b,roof_color.lightened(0.09))
	if front_open: _triangles(node,[a,r0,b],Color("e9d9b7"))
	if back_open: _triangles(node,[d,c,r1],Color("e9d9b7"))
	var edge := _material(roof_color.darkened(0.20))
	for x in [-half,half]: _box(node,Vector3(0.09,0.08,half_z*2.03),Vector3(x,eave-0.035,0),edge)
	_box(node,Vector3(0.13,0.08,half_z*2.06),Vector3(0,ridge+0.015,0),_material(roof_color.lightened(0.17)))
	# Light raised tile courses give the roof a readable miniature scale.
	for side in [-1,1]:
		for course in range(1,5):
			var t := float(course)/5.0
			var strip := _box(node,Vector3(0.024,0.024,half_z*2.01),Vector3(side*half*t,ridge+(eave-ridge)*t+0.012,0),_material(roof_color.lightened(0.10)))
			strip.rotation.z = side*atan2(ridge-eave,half)
	if force_chimney or posmod(seed_value,4) == 0:
		_box(node,Vector3(0.24,0.57,0.26),Vector3(0.4,y+0.57,-0.45),_material(Color("e0cbaa")))
		_box(node,Vector3(0.31,0.09,0.33),Vector3(0.4,y+0.89,-0.45),_material(Color("b67d61")))
		_box(node,Vector3(0.18,0.025,0.18),Vector3(0.4,y+0.942,-0.45),_material(Color("4f5951")))

func _terrace(node: Node3D, cell: Dictionary, cells: Array, y: float, palette: Array, house: Dictionary = {}) -> void:
	var top := y+0.19
	_box(node,Vector3(UNIT,0.11,UNIT),Vector3(0,top-0.05,0),_material(Color("ded1b0")))
	for line in range(-2,3): _box(node,Vector3(UNIT,0.006,0.018),Vector3(0,top+0.01,line*0.33),_material(Color("c4b99b")))
	for direction: Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
		if not house.is_empty():
			if not _neighbor_cell(house,cell,direction).is_empty(): continue
		elif not _at(cells,int(cell["x"])+direction.x,int(cell["z"])+direction.y,int(cell["level"])).is_empty(): continue
		var rail := Node3D.new()
		rail.position = Vector3(direction.x*(UNIT*0.5-0.06),top,direction.y*(UNIT*0.5-0.06))
		rail.rotation.y = atan2(float(direction.x),float(direction.y))
		node.add_child(rail)
		_box(rail,Vector3(UNIT,0.09,0.10),Vector3(0,0.53,0),_material(palette[0]))
		for post in range(7): _box(rail,Vector3(0.065,0.49,0.065),Vector3(-0.81+post*0.27,0.25,0),_material(palette[0].darkened(0.06)))
	if int(cell["level"]) > 0:
		for x in [-0.72,0.72]:
			for z in [-0.72,0.72]: _box(node,Vector3(0.17,y,0.17),Vector3(x,y*0.5,z),_material(palette[0].darkened(0.08)))
	_cylinder(node,0.19,0.23,0.27,Vector3(0.49,top+0.135,0.49),_material(Color("bd8160")))
	_cylinder(node,0.28,0.12,0.47,Vector3(0.49,top+0.48,0.49),_material(Color("779374")))

func _river_x(z: float) -> float: return 3.0+sin(z*0.17)*0.52

func _street_height(p: Vector2) -> float:
	return float(state.call("street_height", p))

func _water_clearance(p: Vector2) -> float:
	return float(state.call("water_clearance", p))

func _water_records() -> Array:
	var records: Variant = state.get("waters")
	return records if records is Array else []

func _road_water_signature(road: Dictionary) -> Array:
	# Sample exactly the same vertices and midpoints used by _road. Water edits
	# only invalidate a street when its visible height/material actually changes.
	var id := str(road.get("id", ""))
	var input := hash([road.points, road.get("width", 1.1), water_fingerprint,state.road_profile(road).signature])
	var cached: Dictionary = road_water_signatures.get(id, {})
	if cached.get("input", -1) == input: return cached.signature
	var signature: Array = []
	var samples: Array[Vector2] = _road_geometry(road).samples
	for index in range(samples.size()-1):
		var p := samples[index]
		var q := samples[index+1]
		signature.append([_street_height(p),_street_height(q),_water_clearance((p+q)*0.5) < -0.02])
	for endpoint: Vector2 in [samples[0],samples[-1]]: signature.append(_water_clearance(endpoint) > -0.02)

	road_water_signatures[id] = {"input":input, "signature":signature}
	return signature

func _stroke_contours(points: Array[Vector2], radius: float) -> Array:
	if points.is_empty() or radius <= 0.0: return []
	if points.size() == 1:
		var circle := PackedVector2Array()
		for side in range(36):
			var angle := TAU * float(side) / 36.0
			circle.append(points[0] + Vector2(cos(angle), sin(angle)) * radius)
		return [circle]
	# Continuous world-space round-ended strokes, independent of house cells.
	# A loop can produce an outer boundary plus an island boundary. Keep both.
	# Clipper's arc tolerance is in input units. Scale this operation so its
	# default tolerance becomes < 2 cm here instead of visibly faceted 25 cm caps.
	var scaled := PackedVector2Array()
	for point: Vector2 in points: scaled.append(point * 16.0)
	var contours: Array = Geometry2D.offset_polyline(scaled, radius * 16.0, Geometry2D.JOIN_ROUND, Geometry2D.END_ROUND)
	for contour_index in range(contours.size()):
		var contour: PackedVector2Array = contours[contour_index]
		for index in range(contour.size()): contour[index] /= 16.0
		contours[contour_index] = contour
	return contours

func _merge_water_group(groups: Array, contours: Array) -> void:
	if contours.is_empty(): return
	var candidate: Array = contours
	# Simple connected parts use Godot's exact polygon union. A part containing
	# holes remains a contour group; the scanline union below combines that group
	# with later strokes without filling islands or stacking coplanar surfaces.
	var index := 0
	while index < groups.size() and candidate.size() == 1:
		var existing: Array = groups[index]
		if existing.size() != 1:
			index += 1
			continue
		var merged: Array = Geometry2D.merge_polygons(existing[0], candidate[0])
		if merged.size() == 2 and Geometry2D.is_polygon_clockwise(merged[0]) == Geometry2D.is_polygon_clockwise(merged[1]):
			index += 1
			continue
		candidate = merged
		groups.remove_at(index)
		index = 0
	groups.append(candidate)

func _water_groups(inset: float) -> Array:
	var groups: Array = []
	var river := PackedVector2Array()
	var half_width := 2.3 - inset
	var river_steps := roundi(Bounds.LAND_RECT.size.y)
	for index in range(river_steps+1):
		var z := Bounds.LAND_RECT.position.y + index
		river.append(Vector2(_river_x(z) - half_width, z))
	for index in range(river_steps, -1, -1):
		var z := Bounds.LAND_RECT.position.y + index
		river.append(Vector2(_river_x(z) + half_width, z))
	_merge_water_group(groups, [river])
	for water: Dictionary in _water_records():
		var points: Array[Vector2] = []
		for encoded: Array in water.points:
			points.append(Vector2(float(encoded[0]), float(encoded[1])))
		_merge_water_group(groups, _stroke_contours(points, maxf(0.05, float(water.width) * 0.5 - inset)))
	return groups

func _water_polygon_mesh(parent: Node3D, groups: Array, height: float, color: Color) -> MeshInstance3D:
	var vertices: Array[Vector3] = []
	var simple := true
	for group: Array in groups:
		if group.size() != 1:
			simple = false
			break
	if simple:
		# Disjoint merged contours have no overlaps or holes: normal triangulation
		# is the inexpensive common path for a branch or a round pond.
		for group: Array in groups:
			var polygon: PackedVector2Array = group[0]
			var indices := Geometry2D.triangulate_polygon(polygon)
			for index in range(0, indices.size(), 3):
				_append_water_triangle(vertices, polygon[indices[index]], polygon[indices[index + 1]], polygon[indices[index + 2]], height)
	else:
		vertices = _water_scanline_union(groups, height)
	if vertices.is_empty(): return null
	var node := _triangles(parent, vertices, color)
	node.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	return node

func _append_water_triangle(vertices: Array[Vector3], a: Vector2, b: Vector2, c: Vector2, height: float) -> void:
	if absf((b - a).cross(c - a)) < 0.0000001: return
	if (b - a).cross(c - a) > 0.0:
		vertices.append_array([Vector3(a.x, height, a.y), Vector3(c.x, height, c.y), Vector3(b.x, height, b.y)])
	else:
		vertices.append_array([Vector3(a.x, height, a.y), Vector3(b.x, height, b.y), Vector3(c.x, height, c.y)])

func _water_scanline_union(groups: Array, height: float, subtract: Array = [], clip_to: Array = []) -> Array[Vector3]:
	# Exact trapezoids between contour vertices, not a terrain grid. Each contour
	# group uses even/odd fill; union its intervals with all other stroke groups.
	# Holes, self-returning channels and water inside an island remain truthful.
	var edges_by_group: Array = []
	var intersection_bins:Array=[]
	var starts_by_group: Array = []
	var active_by_group: Array = []
	var cursors: Array[int] = []
	var levels: Array[float] = []
	# Neighbour cuts can extend across the whole city, but no output exists
	# outside the source's vertical extent or its final clipping mask. Retain
	# exact event heights and ordering within that intersection.
	var low:=INF;var high:=-INF
	for group:Array in groups:
		for contour:PackedVector2Array in group:
			for point:Vector2 in contour:low=minf(low,point.y);high=maxf(high,point.y)
	if not clip_to.is_empty():
		var clip_low:=INF;var clip_high:=-INF
		for contour:PackedVector2Array in clip_to:
			for point:Vector2 in contour:clip_low=minf(clip_low,point.y);clip_high=maxf(clip_high,point.y)
		low=maxf(low,clip_low);high=minf(high,clip_high)
	var inputs:Array=groups+subtract
	if not clip_to.is_empty():inputs.append(clip_to)
	for group: Array in inputs:
		var edges: Array = []
		for contour: PackedVector2Array in group:
			for index in range(contour.size()):
				var a := contour[index]
				var b := contour[(index + 1) % contour.size()]
				levels.append(a.y)
				if absf(a.y - b.y) > 0.000001: edges.append([a,b,minf(a.y,b.y),maxf(a.y,b.y),edges.size()])
		edges_by_group.append(edges)
		intersection_bins.append(path_edge._bins(edges,.00001))
		var starts: Array = edges.duplicate()
		starts.sort_custom(func(a: Array,b: Array) -> bool: return float(a[2])<float(b[2]))
		starts_by_group.append(starts)
		active_by_group.append([])
		cursors.append(0)
	# Crossing edges from different groups are additional events. Splitting at
	# those heights makes the interval ordering exact across overlapping groups.
	for left in range(edges_by_group.size()):
		for right in range(left + 1, edges_by_group.size()):
			for a: Array in edges_by_group[left]:
				var candidates:Dictionary={}
				var bounds:=Rect2(a[0],Vector2.ZERO).expand(a[1]).grow(.00001)
				for y in range(floori(bounds.position.y),floori(bounds.end.y)+1):
					for x in range(floori(bounds.position.x),floori(bounds.end.x)+1):
						for edge:Array in intersection_bins[right].get(Vector2i(x,y),[]):candidates[edge[4]]=edge
				for b: Array in candidates.values():
					if float(b[2])>float(a[3]): continue
					if float(b[3])<float(a[2]): continue
					if maxf(a[0].x, a[1].x) < minf(b[0].x, b[1].x) or maxf(b[0].x, b[1].x) < minf(a[0].x, a[1].x): continue
					var crossing: Variant = Geometry2D.segment_intersects_segment(a[0], a[1], b[0], b[1])
					if crossing is Vector2: levels.append(crossing.y)
	levels.sort()
	var unique: Array[float] = []
	for level: float in levels:
		if unique.is_empty() or level - unique[-1] > 0.000001: unique.append(level)
	var vertices: Array[Vector3] = []
	for index in range(unique.size() - 1):
		var y0 := unique[index]
		var y1 := unique[index + 1]
		if y1<low or y0>high:continue
		var middle := (y0 + y1) * 0.5
		var intervals: Array = []
		var excluded: Array = []
		var clipping: Array = []
		for group_index in range(edges_by_group.size()):
			# Enter/leave edges once as the scanline advances. Original serial
			# order is retained for coincident crossings, so emitted trapezoids
			# remain identical to the exhaustive even/odd implementation.
			var starts: Array = starts_by_group[group_index]
			var edges: Array = active_by_group[group_index]
			var changed := false
			while cursors[group_index]<starts.size() and float(starts[cursors[group_index]][2])<middle:
				edges.append(starts[cursors[group_index]])
				cursors[group_index]+=1
				changed=true
			for edge_index in range(edges.size()-1,-1,-1):
				if float(edges[edge_index][3])<=middle:
					edges.remove_at(edge_index)
					changed=true
			if changed: edges.sort_custom(func(a: Array,b: Array) -> bool: return int(a[4])<int(b[4]))
			var crossings: Array = []
			for edge: Array in edges:
				crossings.append([_water_edge_x(edge, middle), _water_edge_x(edge, y0), _water_edge_x(edge, y1)])
			crossings.sort_custom(func(a: Array, b: Array) -> bool: return float(a[0]) < float(b[0]))
			for pair in range(0, crossings.size() - 1, 2):
				if group_index < groups.size(): intervals.append([crossings[pair], crossings[pair + 1]])
				elif not clip_to.is_empty() and group_index==inputs.size()-1:clipping.append([crossings[pair],crossings[pair+1]])
				else: excluded.append([crossings[pair], crossings[pair + 1]])
		intervals.sort_custom(func(a: Array, b: Array) -> bool: return float(a[0][0]) < float(b[0][0]))
		var joined: Array = []
		for interval: Array in intervals:
			if joined.is_empty() or float(interval[0][0]) > float(joined[-1][1][0]) + 0.000001:
				joined.append(interval)
			elif float(interval[1][0]) > float(joined[-1][1][0]):
				joined[-1][1] = interval[1]
		for cut: Array in excluded:
			var remaining: Array = []
			for interval: Array in joined:
				if float(cut[1][0]) <= float(interval[0][0]) or float(cut[0][0]) >= float(interval[1][0]):
					remaining.append(interval)
					continue
				if float(cut[0][0]) > float(interval[0][0]): remaining.append([interval[0],cut[0]])
				if float(cut[1][0]) < float(interval[1][0]): remaining.append([cut[1],interval[1]])
			joined = remaining
		if not clip_to.is_empty():
			var clipped:Array=[]
			for interval:Array in joined:
				for mask:Array in clipping:
					var left:Array=interval[0] if float(interval[0][0])>float(mask[0][0]) else mask[0]
					var right:Array=interval[1] if float(interval[1][0])<float(mask[1][0]) else mask[1]
					if float(left[0])<float(right[0]):clipped.append([left,right])
			joined=clipped
		for interval: Array in joined:
			var a := Vector2(float(interval[0][1]), y0)
			var b := Vector2(float(interval[1][1]), y0)
			var c := Vector2(float(interval[1][2]), y1)
			var d := Vector2(float(interval[0][2]), y1)
			_append_water_triangle(vertices, a, b, c, height)
			_append_water_triangle(vertices, a, c, d, height)
	return vertices

func _water_edge_x(edge: Array, height: float) -> float:
	var a: Vector2 = edge[0]
	var b: Vector2 = edge[1]
	return lerpf(a.x, b.x, (height - a.y) / (b.y - a.y))

func _rebuild_water() -> void:
	water_field.update()
	var records := _water_records()
	var fingerprint := hash(records)
	water_edit_stats = {"changed":false,"elapsed_ms":0.0,"contours":0,"triangles":0,"strokes":records.size()}
	if water_layer == null or fingerprint == water_fingerprint: return
	var started := Time.get_ticks_usec()
	var banks := _water_groups(0.0)
	# One exact water footprint, with depth and soil blended by the shared field.
	# No stacked deep/shallow planes or periodic stone border.
	var live := {}
	for component: Array in _water_components(banks):
		var key := str(hash(component))
		live[key]=true
		if water_components.has(key): continue
		var surface := _water_polygon_mesh(water_layer,component,Terrain.WATER_LEVEL,Color.WHITE)
		if surface != null:
			surface.material_override = _water_surface_material()
			water_components[key]=surface
	for key: String in water_components.keys():
		if live.has(key): continue
		var old: MeshInstance3D = water_components[key]
		water_layer.remove_child(old)
		old.queue_free()
		water_components.erase(key)
	for group: Array in banks: water_edit_stats.contours += group.size()
	for child: Node in water_layer.get_children():
		if child is MeshInstance3D:
			for part in range(child.mesh.get_surface_count()):
				water_edit_stats.triangles += child.mesh.surface_get_array_index_len(part)/3
	water_fingerprint = fingerprint
	water_edit_stats.changed = true
	water_edit_stats.elapsed_ms = float(Time.get_ticks_usec()-started)/1000.0

func _water_components(groups: Array) -> Array:
	# Disjoint pond geometry can remain untouched when another pond changes.
	# Bounding-box overlap is conservative: intersecting groups always stay
	# together for the exact union, including strokes inside a loop's island.
	var components: Array = []
	var bounds: Array[Rect2] = []
	for group: Array in groups:
		var box := Rect2(group[0][0],Vector2.ZERO)
		for contour: PackedVector2Array in group:
			for point: Vector2 in contour: box=box.expand(point)
		var combined: Array = [group]
		var index := 0
		while index<components.size():
			if bounds[index].intersects(box,true):
				combined.append_array(components[index])
				box=box.merge(bounds[index])
				components.remove_at(index)
				bounds.remove_at(index)
				index=0
			else: index+=1
		components.append(combined)
		bounds.append(box)
	return components

func _build_landscape(defer_rebuild:bool=false) -> void:
	ground_material = ShaderMaterial.new()
	ground_material.shader = GroundShader
	ShorePalette.configure(ground_material)
	ground_material.set_shader_parameter("water_field",water_field.texture)
	ground_material.set_shader_parameter("cliff_surface",CliffSurface)
	ground_material.set_shader_parameter("cliff_surface_enabled",true)
	ground_material.set_shader_parameter("cliff_height_blend_enabled",true)
	terrain_surface = TerrainSurface.new()
	add_child(terrain_surface)
	terrain_surface.setup(state,ground_material,defer_rebuild)
	valley=Valley.new();add_child(valley);valley.build()
	var rng := RandomNumberGenerator.new()
	rng.seed = 261014
	for i in range(75):
		var x := rng.randf_range(-27,27)
		var z := rng.randf_range(-25,25)
		if absf(x-_river_x(z)) < 2.6: continue
		rng.randf_range(1.0,3.4)
		# Keep the old RNG stream so the authored background groves retain
		# their identities; coplanar decal patches are replaced by the terrain.
		for corner in range(10):
			rng.randf_range(0.78,1.20)
	var groves := [Vector2(-14,-9),Vector2(-16,7),Vector2(13,-9),Vector2(14,8),Vector2(-7,14),Vector2(8,17),Vector2(-19,-18),Vector2(18,-19)]
	# Keep a wooded rim beyond the larger editable parcel. These are scenery;
	# player trees inside the parcel continue to belong to State and its masks.
	groves.append_array([Vector2(-44,-32),Vector2(-44,0),Vector2(-44,32),Vector2(44,-32),Vector2(44,0),Vector2(44,32),Vector2(-28,-44),Vector2(28,-44),Vector2(-28,44),Vector2(28,44)])
	for grove: Vector2 in groves:
		for i in range(7):
			var p := grove+Vector2(rng.randf_range(-3.0,3.0),rng.randf_range(-2.7,2.7))
			var scale_value := rng.randf_range(0.75,1.3)
			# Editable groves are represented by state plants and rendered through
			# the block cache.  Trees outside the creation parcel remain authored
			# background scenery and intentionally have no state record.
			if _editable_world_rect().has_point(p):
				continue
			background_trees.append({"at":p,"scale":scale_value,"cypress":i%3==0})
	if not defer_rebuild:_rebuild_background_trees()

func _rebuild_background_trees() -> void:
	var heights := []
	for tree: Dictionary in background_trees: heights.append(state.ground_height(tree.at))
	var signature := hash(heights)
	if signature==background_height_signature: return
	background_height_signature = signature
	_clear(landscape)
	for tree: Dictionary in background_trees: _tree(tree.at,tree.scale,tree.cypress)
	_merge_meshes(landscape)

func _near_house(p: Vector2, radius: float) -> bool:
	for house: Dictionary in state.houses:
		for cell: Dictionary in house["cells"]:
			var at := _cell_position(house,cell)
			if p.distance_to(Vector2(at.x,at.z)) < radius: return true
	return false

func _tree(p: Vector2, scale_value: float, cypress: bool) -> void:
	var kind := "cypress" if cypress else "olive"
	var seed_value := hash(p)
	var variant := posmod(seed_value,3)
	for part: String in foliage.parts(kind,variant):
		var instance := MeshInstance3D.new()
		instance.mesh = foliage.parts(kind,variant)[part]
		instance.material_override = foliage.material(part)
		instance.position = Vector3(p.x,state.ground_height(p)-Terrain.BASE_HEIGHT,p.y)
		instance.scale = Vector3.ONE*scale_value
		instance.rotation.y = float(posmod(seed_value,6283))/1000.0
		landscape.add_child(instance)

func _road_samples(points: Array) -> Array[Vector2]:
	var samples: Array[Vector2] = []
	for at:Vector2 in Junctions.geometry_points(points):
		if samples.is_empty(): samples.append(at)
		else:
			var from := samples[-1]
			var steps := maxi(1,ceili(from.distance_to(at)/0.35))
			for step in range(1,steps+1):
				var position := from.lerp(at,float(step)/steps)
				if samples[-1].distance_to(position) > 0.001: samples.append(position)
	return SafeInstances.clean_points(samples)

func _road_offsets(samples: Array[Vector2], width: float) -> Array[Vector2]:
	var result: Array[Vector2] = []
	for index in range(samples.size()):
		var incoming := (samples[index]-samples[maxi(0,index-1)]).normalized()
		var outgoing := (samples[mini(samples.size()-1,index+1)]-samples[index]).normalized()
		if incoming == Vector2.ZERO: incoming = outgoing
		if outgoing == Vector2.ZERO: outgoing = incoming
		var normal := (incoming+outgoing).normalized().orthogonal()
		if normal == Vector2.ZERO: normal = outgoing.orthogonal()
		var factor := minf(1.5,1.0/maxf(0.1,absf(normal.dot(outgoing.orthogonal()))))
		result.append(normal*width*0.5*factor)
	return result

func _road_ribbon(parent: Node3D, samples: Array[Vector2], width: float, color: Color, lift: float = 0.0) -> void:
	var key: Array=[state.get_instance_id(),state.revision]
	if key!=_preview_height_key:_preview_heights.clear();_preview_height_key=key
	var heights: Dictionary={}
	for at: Vector2 in samples:heights[at]=_preview_heights[at] if _preview_heights.has(at) else _street_height(at)
	_preview_heights=heights
	var offsets := _road_offsets(samples,width)
	var vertices: Array[Vector3] = []
	for index in range(samples.size()-1):
		var p := samples[index]
		var q := samples[index+1]
		var y0: float = heights[p]+lift
		var y1: float = heights[q]+lift
		var n0 := offsets[index]
		var n1 := offsets[index+1]
		var a := Vector3(p.x-n0.x,y0,p.y-n0.y)
		var b := Vector3(q.x-n1.x,y1,q.y-n1.y)
		var c := Vector3(q.x+n1.x,y1,q.y+n1.y)
		var d := Vector3(p.x+n0.x,y0,p.y+n0.y)
		vertices.append_array([a,b,c,a,c,d])
	var ribbon := _triangles(parent,vertices,color)
	if lift == 0.0: ribbon.material_override = _shared_road_material()
	elif road_draft_field.material!=null and lift<.02:
		ribbon.material_override=road_draft_field.material
		ribbon.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF

func _shared_road_material() -> ShaderMaterial:
	if road_material == null:
		road_material = ShaderMaterial.new()
		road_material.shader = RoadShader
	return road_material

func _road_join_signature(road: Dictionary) -> Array:
	if road_join_signatures.has(road.id): return road_join_signatures[road.id]
	var signature: Array = []
	var own := _road_geometry(road)
	for other: Dictionary in state.roads:
		if other.id == road.id: continue
		var radius := (float(road.width)+float(other.width))*0.5+Junctions.EXTRA*2.0+0.08
		var adjacent := _road_geometry(other)
		if not own.bounds.grow(radius).intersects(adjacent.bounds,true): continue
		# Only the neighbour coverage on this road can change its cuts. A long
		# shared main road gaining a mouth at its far end must not invalidate
		# every side street along that main road.
		var overlap: Array = []
		for contour: PackedVector2Array in road_outlines[road.id]:
			for neighbor: PackedVector2Array in road_outlines[other.id]:
				var clipped := Geometry2D.intersect_polygons(contour,neighbor)
				if not clipped.is_empty(): overlap.append([Geometry2D.is_polygon_clockwise(contour),Geometry2D.is_polygon_clockwise(neighbor),clipped])
		if not overlap.is_empty(): signature.append([other.id,overlap])
	road_join_signatures[road.id] = signature
	return signature

func _inside_other_road(position: Vector2, own_id: String) -> bool:
	var bin := Vector2i(floori(position.x/ROAD_BIN_SIZE),floori(position.y/ROAD_BIN_SIZE))
	for segment: Dictionary in road_segment_bins.get(bin,[]):
		if segment.id == own_id: continue
		if position.distance_to(Geometry2D.get_closest_point_to_segment(position,segment.a,segment.b)) <= float(segment.radius): return true
	return false

func _road_geometry(road: Dictionary) -> Dictionary:
	var fingerprint := hash([road.points,road.width])
	var cached: Dictionary = road_geometry_cache.get(road.id,{})
	if cached.get("fingerprint",-1) == fingerprint: return cached
	var segments: Array = []
	var first := Vector2(float(road.points[0][0]),float(road.points[0][1]))
	var bounds := Rect2(first,Vector2.ZERO)
	for index in range(road.points.size()-1):
		var a := Vector2(float(road.points[index][0]),float(road.points[index][1]))
		var b := Vector2(float(road.points[index+1][0]),float(road.points[index+1][1]))
		var segment_bounds := Rect2(a,Vector2.ZERO).expand(b)
		segments.append({"a":a,"b":b,"bounds":segment_bounds})
		bounds = bounds.expand(b)
	cached = {"fingerprint":fingerprint,"segments":segments,"bounds":bounds,"samples":_road_samples(road.points)}
	road_geometry_cache[road.id] = cached
	return cached

func _road_layout_key() -> int:
	var junctions: RefCounted = road_junctions()
	var rows: Array = []
	for road: Dictionary in state.roads:
		rows.append([road.id,road.points,road.width,road.get("roundabouts",[]),junctions.signature(str(road.id))])
	return hash(rows)

func _road_fingerprint(road: Dictionary) -> int:
	return preload("res://scripts/visual/city_creation_road_prepared_inputs.gd").fingerprint(self,road)

func _road_contours(samples: Array[Vector2], width: float, extras: Array) -> Array:
	var core := _stroke_contours(samples,width*0.5)
	if extras.is_empty(): return core
	var groups: Array = [core]
	for polygon: PackedVector2Array in extras: _merge_water_group(groups,[polygon])
	var result: Array = []
	for group: Array in groups: result.append_array(group)
	return result

func _prepare_road_layout() -> void:
	road_segment_bins.clear()
	var live := {}
	for road: Dictionary in state.roads:
		live[road.id] = true
		var geometry := _road_geometry(road)
		var outline_key := hash([geometry.fingerprint,state._junctions.signature(str(road.id))])
		if road_outline_fingerprints.get(road.id,-1) != outline_key or not road_outlines.has(road.id):
			road_outlines[road.id] = _road_contours(geometry.samples,float(road.width),state._junctions.additions(str(road.id)))
			road_outline_fingerprints[road.id] = outline_key
		var radius := float(road.width)*0.5+0.07
		for segment: Dictionary in geometry.segments:
			var bounds: Rect2 = segment.bounds.grow(radius)
			var record := {"id":road.id,"a":segment.a,"b":segment.b,"radius":radius,"width":float(road.width)}
			for z in range(floori(bounds.position.y/ROAD_BIN_SIZE),floori(bounds.end.y/ROAD_BIN_SIZE)+1):
				for x in range(floori(bounds.position.x/ROAD_BIN_SIZE),floori(bounds.end.x/ROAD_BIN_SIZE)+1):
					var bin := Vector2i(x,z)
					if not road_segment_bins.has(bin): road_segment_bins[bin] = []
					road_segment_bins[bin].append(record)
	for id: String in road_geometry_cache.keys():
		if not live.has(id):
			road_geometry_cache.erase(id)
			road_outlines.erase(id)
			road_outline_fingerprints.erase(id)

func _road_surface_vertices(contours: Array, cuts: Array) -> Array[Vector3]:
	if contours.size() != 1: return _water_scanline_union([contours],0,cuts)
	var polygons: Array = contours.duplicate()
	for cut: Array in cuts:
		if cut.size() != 1: return _water_scanline_union([contours],0,cuts)
		var next: Array = []
		for polygon: PackedVector2Array in polygons:
			var clipped := Geometry2D.clip_polygons(polygon,cut[0])
			for part: PackedVector2Array in clipped:
				if Geometry2D.is_polygon_clockwise(part): return _water_scanline_union([contours],0,cuts)
				next.append(part)
		polygons = next
	var vertices: Array[Vector3] = []
	for polygon: PackedVector2Array in polygons:
		var indices := Geometry2D.triangulate_polygon(polygon)
		for index in range(0,indices.size(),3): _append_water_triangle(vertices,polygon[indices[index]],polygon[indices[index+1]],polygon[indices[index+2]],0)
	return vertices

func _subdivide_road(vertices: Array[Vector3]) -> Array[Vector3]:
	var output: Array[Vector3] = []
	var triangles: Array = []
	for index in range(0,vertices.size(),3): triangles.append([vertices[index],vertices[index+1],vertices[index+2]])
	while not triangles.is_empty():
		var triangle: Array = triangles.pop_back()
		var longest := 0
		for edge in range(1,3):
			if triangle[edge].distance_squared_to(triangle[(edge+1)%3]) > triangle[longest].distance_squared_to(triangle[(longest+1)%3]): longest = edge
		if triangle[longest].distance_squared_to(triangle[(longest+1)%3]) <= 0.36:
			var a := Vector2(triangle[0].x,triangle[0].z)
			var b := Vector2(triangle[1].x,triangle[1].z)
			var c := Vector2(triangle[2].x,triangle[2].z)
			if absf((b-a).cross(c-a)) > 0.000001: output.append_array(triangle)
			continue
		var a: Vector3 = triangle[longest]
		var b: Vector3 = triangle[(longest+1)%3]
		var c: Vector3 = triangle[(longest+2)%3]
		var middle := (a+b)*0.5
		triangles.append([a,middle,c])
		triangles.append([middle,b,c])
	return output

func _prepare_road_data(road: Dictionary) -> Dictionary:
	var started := Time.get_ticks_usec()
	var material_code:=preload("res://scripts/world/city_creation_road_paving.gd").code(road)
	var samples: Array[Vector2] = _road_geometry(road).samples
	var width := float(road.width)
	var offsets := _road_offsets(samples,width)
	var curbs: Array = []
	var cuts: Array = []
	for marker: Dictionary in Roundabouts.all(state.roads): cuts.append([Roundabouts.polygon(marker.center,marker.radius-.025)])
	for other: Dictionary in state.roads:
		if int(str(other.id).substr(1)) < int(str(road.id).substr(1)) and _roads_touch(road,other): cuts.append(road_outlines[other.id])
	var profile: Dictionary = state.road_profile(road)
	var stepping_runs: Array=profile.get("stepping_runs",[])
	var stepping_cuts: Array=[]
	for run: Dictionary in stepping_runs:
		var line: Array[Vector2]=[]
		for point: Vector2 in run.points: line.append(point)
		stepping_cuts.append(_stroke_contours(line,width*.5+.24))
	cuts.append_array(stepping_cuts)
	var stairs := RoadStairs.prepare(self,road,profile,cuts)
	# Adjacent tread masks form one floor cut; keep the individual tread
	# faces/colliders above unchanged. Do not scan every riser as a hole.
	var stair_cuts:Array=[]
	for cut:Array in stairs.cuts:_merge_water_group(stair_cuts,cut)
	cuts.append_array(stair_cuts)
	curbs.append_array(stairs.rails)
	var vertices: Array[Vector3] = _road_surface_vertices(road_outlines[road.id],cuts)
	# Height-aware streets require intermediate vertices even on dry land.
	if bool(road.get("bridge",false)) or bool(profile.get("elevated",false)): vertices = _subdivide_road(vertices)
	var heights: Dictionary = {}
	var paving: Dictionary = {}
	var paving_uv: Dictionary = {}
	var bridge_spans: Array[Vector2] = Bridges.paving_spans(profile)
	var stone_spans: Array[Vector2] = Bridges.paving_spans(profile,true)
	var height_started := Time.get_ticks_usec()
	# Every surface vertex is inside the exact round-ended road footprint.
	# Its nearest centre segment lies within half-width plus the dry flare; retain
	# source segment order in metre bins so equal-distance ties stay identical.
	var center_segments: Array = []
	var center_arc := 0.0
	for index in range(samples.size()-1):
		center_segments.append([samples[index],samples[index+1],center_arc])
		center_arc += samples[index].distance_to(samples[index+1])
	var height_bins: Dictionary = path_edge._bins(center_segments,width*0.5+Junctions.EXTRA+0.002)
	for index in range(vertices.size()):
		var at := Vector2(vertices[index].x,vertices[index].z)
		if heights.has(at):
			vertices[index].y = heights[at]
			continue
		var nearest := samples[0]
		var distance := INF
		var arc := 0.0
		var across := 0.0
		var bin := Vector2i(floori(at.x),floori(at.y))
		for segment: Array in height_bins.get(bin,center_segments):
			var candidate := Geometry2D.get_closest_point_to_segment(at,segment[0],segment[1])
			if at.distance_squared_to(candidate) < distance:
				distance = at.distance_squared_to(candidate)
				nearest = candidate
				arc = float(segment[2])+Vector2(segment[0]).distance_to(candidate)
				var tangent: Vector2=(Vector2(segment[1])-Vector2(segment[0])).normalized()
				across=(at-candidate).dot(Vector2(-tangent.y,tangent.x))
		vertices[index].y = _street_height(nearest)
		heights[at] = vertices[index].y
		paving[at] = Vector2(Bridges.paving_weight(arc,bridge_spans),Bridges.paving_weight(arc,stone_spans))
		paving_uv[at] = Vector2(arc,across)
	rebuild_stats["road_heights_ms"] = float(rebuild_stats.get("road_heights_ms",0.0))+float(Time.get_ticks_usec()-height_started)/1000.0
	var surface := SurfaceTool.new()
	surface.begin(Mesh.PRIMITIVE_TRIANGLES)
	for index in range(0,vertices.size(),3):
		for vertex_index: int in [index,index+2,index+1]:
			var vertex := vertices[vertex_index]
			# Red blends the wet deck, green selects architectural stone. Timber
			# follows arc/across UVs; stone keeps world phase through bridgeheads.
			var at:=Vector2(vertex.x,vertex.z)
			var weight:Vector2=paving[at]
			surface.set_color(Color(weight.x,weight.y,material_code,1))
			surface.set_uv(paving_uv[at])
			surface.add_vertex(vertex)
	surface.generate_normals()
	surface.index()
	var arrays := surface.commit_to_arrays() if not vertices.is_empty() else []
	var curb_started := Time.get_ticks_usec()
	for index in range(samples.size()-1):
		var p := samples[index]
		var q := samples[index+1]
		var y0 := _street_height(p)
		var y1 := _street_height(q)
		var y := (y0+y1)*0.5
		var over_water := _water_clearance((p+q)*0.5) < -0.02
		var on_stones:=false
		for run: Dictionary in stepping_runs:
			if Rect2(run.bounds).grow(.20).has_point((p+q)*.5): on_stones=true;break
		var on_arch := false
		for run: Dictionary in profile.get("bridge_runs",[]):
			var nearest := INF
			var arc := 0.0
			for sample: Dictionary in run.samples:
				var gap: float=Vector2(sample.xz).distance_squared_to((p+q)*.5)
				if gap<nearest: nearest=gap;arc=float(sample.distance)
			if arc>=float(run.start)-.2 and arc<=float(run.end)+.2: on_arch=true;break
		if on_stones or on_arch: continue
		for side in [-1,1]:
			var a: Vector2 = p+offsets[index]*side
			var b: Vector2 = q+offsets[index+1]*side
			var center := (a+b)*0.5
			if _inside_other_road(center,str(road.id)): continue
			if not over_water: continue
			_append_road_descriptor(curbs,Vector3(0.065,0.065,a.distance_to(b)+0.003),Vector3(center.x,y+0.48,center.y),Color("d5ccb0"),Vector3(-atan2(y1-y0,a.distance_to(b)),atan2(b.x-a.x,b.y-a.y),0))
			if over_water and index%3 == 0: _append_road_descriptor(curbs,Vector3(0.08,0.52,0.08),Vector3(center.x,y+0.25,center.y),Color("c8ba99"))
		if over_water:
			# The old top at mean road height +15mm covered/intersected paving.
			# Support both ramp ends below the authoritative walking surface.
			_append_road_descriptor(curbs,Vector3(width+0.06,0.08,p.distance_to(q)*0.96),Vector3((p.x+q.x)*0.5,minf(y0,y1)-0.052,(p.y+q.y)*0.5),Color("b5a17e"),Vector3(0,atan2(q.x-p.x,q.y-p.y),0))
	rebuild_stats["road_curbs_ms"] = float(rebuild_stats.get("road_curbs_ms",0.0))+float(Time.get_ticks_usec()-curb_started)/1000.0
	var edge_started := Time.get_ticks_usec()
	var is_promenade := str(road.get("style","path")) in ["promenade","avenue","tram"]
	var edge := {"arrays":[],"stats":{"triangles":0,"vertices":0}} if is_promenade else path_edge.prepare(self,road,stepping_cuts)
	rebuild_stats["road_edges_ms"] = float(rebuild_stats.get("road_edges_ms",0.0))+float(Time.get_ticks_usec()-edge_started)/1000.0
	rebuild_stats["road_mesh_ms"] = float(rebuild_stats.get("road_mesh_ms",0.0))+float(Time.get_ticks_usec()-started)/1000.0
	var adjunct_started:=Time.get_ticks_usec()
	var earthworks:Dictionary=RoadEarthworks.prepare(self,road,profile)
	rebuild_stats["road_earthworks_ms"]=float(rebuild_stats.get("road_earthworks_ms",0.))+float(Time.get_ticks_usec()-adjunct_started)/1000.;adjunct_started=Time.get_ticks_usec()
	var roundabouts:Array=RoundaboutVisual.prepare(self,road)
	rebuild_stats["road_roundabouts_ms"]=float(rebuild_stats.get("road_roundabouts_ms",0.))+float(Time.get_ticks_usec()-adjunct_started)/1000.;adjunct_started=Time.get_ticks_usec()
	var decoration:Dictionary=preload("res://scripts/visual/city_creation_road_prepared_inputs.gd").take(self,road)
	var promenade_data:Array=decoration.walk
	var era_data:Dictionary=decoration.era
	rebuild_stats["road_decoration_ms"]=float(rebuild_stats.get("road_decoration_ms",0.))+float(Time.get_ticks_usec()-adjunct_started)/1000.;adjunct_started=Time.get_ticks_usec()
	var bridges:Dictionary=Bridges.prepare(profile)
	rebuild_stats["road_bridges_ms"]=float(rebuild_stats.get("road_bridges_ms",0.))+float(Time.get_ticks_usec()-adjunct_started)/1000.;adjunct_started=Time.get_ticks_usec()
	var tram:Dictionary=tram_tracks.prepare(self,road)
	rebuild_stats["road_tram_ms"]=float(rebuild_stats.get("road_tram_ms",0.))+float(Time.get_ticks_usec()-adjunct_started)/1000.
	return {"arrays":arrays,"curbs":curbs,"edge":edge,"stairs":stairs,"earthworks":earthworks,"roundabouts":roundabouts,"promenade":promenade_data,"era_streets":era_data,"stepping_runs":stepping_runs,"bridges":bridges,"tram":tram}


func _append_road_descriptor(records: Array, size: Vector3, at: Vector3, color: Color, rotation := Vector3.ZERO) -> void:
	records.append([size,at,color,rotation])

func _install_road_data(road: Dictionary, data: Dictionary, parent: Node3D) -> Node3D:
	var root := Node3D.new()
	root.name = str(road.id)
	parent.add_child(root)
	if not data.arrays.is_empty():
		var mesh := ArrayMesh.new()
		mesh.add_surface_from_arrays(Mesh.PRIMITIVE_TRIANGLES,data.arrays)
		var surface := MeshInstance3D.new()
		surface.mesh = mesh
		surface.material_override = promenade.road_material() if str(road.get("style","path")) in ["promenade","avenue","tram"] else _shared_road_material()
		surface.name="PromenadeSurface" if str(road.get("style","path")) in ["promenade","avenue","tram"] else "PathSurface"
		root.add_child(surface)
	var batches := {}
	for record: Array in data.curbs:
		_append_road_box(batches,record[0],record[1],_material(record[2]),record[3])
	for batch: Dictionary in batches.values():
		var instance := MeshInstance3D.new()
		instance.mesh = batch.surface.commit()
		instance.material_override = batch.material
		root.add_child(instance)
	root.set_meta("soft_edge",path_edge.install(self,data.edge,root))
	RoadStairs.install(self,root,data.stairs,road)
	RoadEarthworks.install(self,root,data.earthworks,road)
	RoundaboutVisual.install(self,root,data.roundabouts)
	Stepping.install(self,root,data.get("stepping_runs",[]),road)
	promenade.install(self,root,data.promenade)
	era_streets.install(self,root,data.get("era_streets",{"notes":[],"water":[],"gateways":[]}))
	Bridges.install(self,root,data.get("bridges",{"faces":[]}),road)
	TramTracks.install(self,root,data.tram)
	_update_road_pebbles(road,root)
	return root

func _road(road: Dictionary) -> Node3D:
	return _install_road_data(road,_prepare_road_data(road),roads_layer)

func _update_road_pebbles(road: Dictionary, root: Node3D) -> void:
	if str(road.get("style","path"))=="promenade": return
	var signature: Array = path_pebbles.signature(road)
	if root.get_meta("pebbles_signature",[])==signature: return
	var previous := root.get_node_or_null("PathPebbles")
	if previous!=null:
		root.remove_child(previous)
		previous.queue_free()
	var layer := Node3D.new()
	layer.name="PathPebbles"
	root.add_child(layer)
	root.set_meta("pebbles",path_pebbles.build(self,road,layer))
	root.set_meta("pebbles_signature",signature)
	rebuild_stats["road_pebbles_changed"] = int(rebuild_stats.get("road_pebbles_changed",0))+1

func _append_road_box(batches: Dictionary, size: Vector3, at: Vector3, material: Material, rotation := Vector3.ZERO) -> void:
	# Emit the same indexed BoxMesh triangles and UVs directly into the final
	# material batch. Hundreds of temporary scene nodes and a second mesh-copy
	# pass have no role in picking or collisions for the continuous street.
	var key := material.get_instance_id()
	if not batches.has(key):
		var surface := SurfaceTool.new()
		surface.begin(Mesh.PRIMITIVE_TRIANGLES)
		batches[key] = {"surface":surface,"material":material}
	if road_box_mesh == null:
		road_box_mesh = BoxMesh.new()
		road_box_mesh.size = Vector3.ONE
	batches[key].surface.append_from(road_box_mesh,0,Transform3D(Basis.from_euler(rotation)*Basis.from_scale(size),at))

func _roads_touch(road: Dictionary, other: Dictionary) -> bool:
	var radius := (float(road.width)+float(other.width))*0.5+Junctions.EXTRA*2.0+0.08
	var own := _road_geometry(road)
	var adjacent := _road_geometry(other)
	if not own.bounds.grow(radius).intersects(adjacent.bounds,true): return false
	for segment: Dictionary in own.segments:
		for other_segment: Dictionary in adjacent.segments:
			if not segment.bounds.grow(radius).intersects(other_segment.bounds,true): continue
			if float(state.call("_segment_distance",segment.a,segment.b,other_segment.a,other_segment.b)) <= radius: return true
	return false


func show_terrain_brush(points: Array[Vector2],radius: float,mode: String,natural: bool=false,plan:Dictionary={}) -> void:
	clear_preview()
	TerrainPreview.build(self,points,radius,mode,natural,plan)
func show_terrain_policy(plan:Dictionary)->void:
	clear_preview();TerrainPreview._target_surface(self,plan)

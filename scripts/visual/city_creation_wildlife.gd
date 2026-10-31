class_name CityCreationWildlife
extends Node3D
const SafeInstances = preload("res://scripts/visual/city_creation_safe_instances.gd")
## Townscaper-inspired BirdFlock (879180.c/879c30.c) & Butterfly/Firefly flock (8811c0.c).
## Renders all rooftop birds and meadow butterflies/fireflies in 2 MultiMesh batches.

const MAX_BIRDS := 18
const MAX_FLUTTER := 28
var state: RefCounted
var birds_mm: MultiMeshInstance3D
var flutter_mm: MultiMeshInstance3D
var bird_mat: ShaderMaterial
var flutter_mat: ShaderMaterial
var _perches: Array[Vector3] = []
var _nectars: Array[Vector3] = []
var _roof_habitats:Dictionary={}
var _porch_habitats: Dictionary={}
var _porch_geometry: Variant=null
var habitat_stats:Dictionary={}
var _birds: Array[Dictionary] = []
var _flutters: Array[Dictionary] = []
var _time := 0.0
var _night := false

func setup(city_state: RefCounted, defer_habitats:bool=false) -> void:
	state = city_state
	name = "ValleyWildlife"
	_init_birds_multimesh()
	_init_flutter_multimesh()
	if not defer_habitats:refresh_habitats()

func set_night(is_night: bool) -> void:
	if _night == is_night:
		return
	_night = is_night
	if flutter_mat != null:
		flutter_mat.set_shader_parameter("night_firefly", 1.0 if is_night else 0.0)

func _init_birds_multimesh() -> void:
	var st := SurfaceTool.new()
	st.begin(Mesh.PRIMITIVE_TRIANGLES)
	# Body + left/right wings encoded with UV.x = abs(wing_span) for shader flapping
	var body_l := Vector3(-0.04, 0.0, -0.11)
	var body_r := Vector3(0.04, 0.0, -0.11)
	var nose := Vector3(0.0, 0.02, 0.13)
	var tail := Vector3(0.0, 0.03, -0.16)
	var wing_l := Vector3(-0.22, 0.03, -0.01)
	var wing_r := Vector3(0.22, 0.03, -0.01)
	for tri: Array in [
		[body_l, nose, body_r, 0.0, 0.0, 0.0],
		[body_l, body_r, tail, 0.0, 0.0, 0.0],
		[body_l, wing_l, nose, 0.0, 1.0, 0.0],
		[body_r, nose, wing_r, 0.0, 0.0, 1.0],
	]:
		st.set_normal(Vector3.UP)
		st.set_uv(Vector2(float(tri[3]), 0.0))
		st.add_vertex(tri[0])
		st.set_uv(Vector2(float(tri[4]), 0.0))
		st.add_vertex(tri[1])
		st.set_uv(Vector2(float(tri[5]), 0.0))
		st.add_vertex(tri[2])
	var mesh := st.commit()
	var shader := Shader.new()
	shader.code = """
shader_type spatial;
render_mode cull_disabled, diffuse_burley, specular_disabled;
varying vec3 v_col;
void vertex() {
	float flap_amp = INSTANCE_CUSTOM.r;
	float phase = INSTANCE_CUSTOM.g;
	float wing = UV.x;
	VERTEX.y += sin(TIME * 15.0 + phase) * 0.095 * wing * flap_amp;
	v_col = COLOR.rgb;
}
void fragment() {
	ALBEDO = v_col;
	ROUGHNESS = 0.92;
}
"""
	bird_mat = ShaderMaterial.new()
	bird_mat.shader = shader
	var mm := MultiMesh.new()
	mm.transform_format = MultiMesh.TRANSFORM_3D
	mm.use_colors = true
	mm.use_custom_data = true
	mm.mesh = mesh
	SafeInstances.initialize(mm,MAX_BIRDS)
	mm.visible_instance_count = 0
	birds_mm = MultiMeshInstance3D.new()
	birds_mm.name = "RooftopBirds"
	birds_mm.multimesh = mm
	birds_mm.material_override = bird_mat
	birds_mm.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	add_child(birds_mm)

func _init_flutter_multimesh() -> void:
	var st := SurfaceTool.new()
	st.begin(Mesh.PRIMITIVE_TRIANGLES)
	var center_a := Vector3(0.0, 0.0, -0.04)
	var center_b := Vector3(0.0, 0.0, 0.04)
	var wing_l := Vector3(-0.085, 0.02, 0.0)
	var wing_r := Vector3(0.085, 0.02, 0.0)
	for tri: Array in [
		[center_a, wing_l, center_b, 0.0, 1.0, 0.0],
		[center_a, center_b, wing_r, 0.0, 0.0, 1.0],
	]:
		st.set_normal(Vector3.UP)
		st.set_uv(Vector2(float(tri[3]), 0.0))
		st.add_vertex(tri[0])
		st.set_uv(Vector2(float(tri[4]), 0.0))
		st.add_vertex(tri[1])
		st.set_uv(Vector2(float(tri[5]), 0.0))
		st.add_vertex(tri[2])
	var mesh := st.commit()
	var shader := Shader.new()
	shader.code = """
shader_type spatial;
render_mode cull_disabled, diffuse_burley, specular_disabled;
uniform float night_firefly : hint_range(0.0, 1.0) = 0.0;
varying vec3 v_col;
varying float v_pulse;
void vertex() {
	float phase = INSTANCE_CUSTOM.g;
	float flap = sin(TIME * 19.0 + phase) * (1.0 - night_firefly * 0.65);
	VERTEX *= mix(1.0,0.32,night_firefly);
	VERTEX.y += flap * 0.055 * UV.x * (1.0-night_firefly);
	v_col = COLOR.rgb;
	v_pulse = 0.55 + 0.45 * sin(TIME * 3.8 + phase);
}
void fragment() {
	vec3 day_col = v_col;
	vec3 firefly_col = vec3(0.92, 0.96, 0.42);
	ALBEDO = mix(day_col, firefly_col, night_firefly);
	EMISSION = firefly_col * (night_firefly * 1.65 * v_pulse);
	ROUGHNESS = 0.85;
}
"""
	flutter_mat = ShaderMaterial.new()
	flutter_mat.shader = shader
	var mm := MultiMesh.new()
	mm.transform_format = MultiMesh.TRANSFORM_3D
	mm.use_colors = true
	mm.use_custom_data = true
	mm.mesh = mesh
	SafeInstances.initialize(mm,MAX_FLUTTER)
	mm.visible_instance_count = 0
	flutter_mm = MultiMeshInstance3D.new()
	flutter_mm.name = "MeadowFlutters"
	flutter_mm.multimesh = mm
	flutter_mm.material_override = flutter_mat
	flutter_mm.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	add_child(flutter_mm)

func refresh_habitats(renderer: Node3D = null) -> void:
	if state == null:
		return
	var geometry:=hash([state.terrain_policy,state.houses,state.roads,state.waters,state.districts,state.terrain_strokes])
	if _porch_geometry!=geometry:_porch_habitats.clear();_porch_geometry=geometry
	_perches.clear()
	_nectars.clear()
	var next_habitats:Dictionary={};var rebuilt:=0;var reused:=0
	for house: Dictionary in state.houses:
		var id:=str(house.id);var roof:Node3D=renderer.house_roots.get(id) if renderer!=null else null
		var key:=hash([house.origin,house.cells,house.get("base_y",0.),roof.get_instance_id() if roof!=null else 0])
		var habitat:Dictionary=_roof_habitats.get(id,{})
		if habitat.get("key")!=key:
			habitat=_roof_habitat(house,renderer,roof);habitat.key=key;rebuilt+=1
		else:reused+=1
		next_habitats[id]=habitat
		if habitat.has("glass_nectar"):_nectars.append(habitat.glass_nectar)
		_perches.append(habitat.perch)
		if str(house.get("role", "")) in ["garden_cafe", "venue"] or state.house_harmony_tier(str(house.id)) > 0:
			# Use the real exterior porch instead of placing insects inside rooms.
			if not _porch_habitats.has(id):
				var entrances: Array=renderer.house_entrances(id) if renderer!=null else state.house_entrances(id)
				var points: Array[Vector3]=[]
				if not entrances.is_empty():
					var p: Vector2=entrances[0].at
					points.append(Vector3(p.x,state.ground_height(p)+.65,p.y))
				_porch_habitats[id]=points
			_nectars.append_array(_porch_habitats[id])
	_roof_habitats=next_habitats;habitat_stats={"rebuilt":rebuilt,"reused":reused}
	for water: Dictionary in state.waters:
		if str(water.get("kind", "")) == "pond" and not water.points.is_empty():
			var pt: Array = water.points[0]
			_nectars.append(Vector3(float(pt[0]), 0.35, float(pt[1])))
	for plant: Dictionary in state.plants:
		if str(plant.get("kind", "")) == "shrub":
			var p := Vector2(float(plant.position[0]), float(plant.position[1]))
			_nectars.append(Vector3(p.x, state.ground_height(p) + 0.55, p.y))

	# Townscaper BirdFlock optimal count adaptation
	var target_birds := clampi(int(sqrt(float(_perches.size())) * 2.4), 0, MAX_BIRDS)
	while _birds.size() < target_birds and not _perches.is_empty():
		var idx := _birds.size()
		var home_perch: Vector3 = _perches[idx % _perches.size()]
		_birds.append({
			"pos": home_perch + Vector3(0, 2.5 + float(idx % 3), 0),
			"target": home_perch,
			"mode": "flying",
			"timer": float(idx) * 1.3,
			"phase": float(idx) * 1.7,
			"yaw": 0.0,
			"color": Color("f2efe6") if idx % 3 != 0 else Color("8b98a6"),
		})
	if _birds.size() > target_birds:
		_birds.resize(target_birds)
	for i in range(_birds.size()):
		var target: Vector3 = _perches[i % _perches.size()]
		if not _perches.has(_birds[i].target):
			_birds[i].target = target
			_birds[i].mode = "flying"
			_birds[i].timer = 3.0

	var target_flutters := clampi(_nectars.size() * 2, 0, MAX_FLUTTER)
	var palette := [Color("f7d969"), Color("f5efe0"), Color("e89ca5"), Color("9ec4e8")]
	while _flutters.size() < target_flutters and not _nectars.is_empty():
		var idx := _flutters.size()
		var anchor: Vector3 = _nectars[idx % _nectars.size()]
		_flutters.append({
			"anchor": anchor,
			"pos": anchor,
			"phase": float(idx) * 2.1,
			"color": palette[idx % palette.size()],
		})
	if _flutters.size() > target_flutters:
		_flutters.resize(target_flutters)
	for i in range(_flutters.size()):
		_flutters[i].anchor = _nectars[i % _nectars.size()]
	# Publish the complete transforms/colours/custom data before exposing a
	# newly allocated slot, including when the scene has not processed yet.
	for i in range(_birds.size()):_write_bird(i,0.0 if str(_birds[i].mode)=="perched" else 1.0)
	_write_flutters()
	SafeInstances.show_prefix(birds_mm.multimesh,_birds.size())
	SafeInstances.show_prefix(flutter_mm.multimesh,_flutters.size())
	# Shader wings and flight paths extend beyond each tiny source mesh.
	var bounds := AABB(Vector3(-48, -5, -48), Vector3(96, 30, 96))
	birds_mm.custom_aabb = bounds
	flutter_mm.custom_aabb = bounds

func _roof_habitat(house:Dictionary,renderer:Node3D,roof:Node3D)->Dictionary:
	# Published house geometry is immutable. Terrain-only edits keep the same
	# picking root, and do not change its physical roof or glasshouse habitat.
	# Porch/shrub nectar heights are still resolved from current ground above.
	var origin:=Vector2(float(house.origin[0]),float(house.origin[1]));var base_y:=float(house.get("base_y",0.))
	var max_level:=0;var top_cell:Dictionary=house.cells[0]
	for cell:Dictionary in house.cells:
		if str(cell.kind)=="room" and int(cell.level)>=max_level:max_level=int(cell.level);top_cell=cell
	var top_pos:=Vector3(origin.x+float(top_cell.x)*1.8,base_y+float(max_level+1)*1.7+.52,origin.y+float(top_cell.z)*1.8)
	var habitat:Dictionary={}
	if roof!=null:
		var tower:Dictionary=roof.get_meta("round_tower",{})
		if not tower.is_empty():
			top_pos=Vector3(tower.center.x,float(tower.eave_y)+1.35*(1.0-pow(.94/1.06,1.0/.78))+.04,tower.center.y+.94)
		else:
			var patches:Array=renderer.building_context.roof_patches(str(house.id))
			if not patches.is_empty():top_pos.y=renderer._joined_roof_height(patches,str(top_cell.id),Vector2(top_pos.x,top_pos.z))+.04
			for bell:Dictionary in roof.get_meta("tower_cells",[]):
				if str(bell.cell_id)==str(top_cell.id):top_pos=Vector3(bell.center.x,float(bell.top)+.02,bell.center.y)
		var glasshouse:Dictionary=roof.get_meta("conservatory",{})
		if not glasshouse.is_empty():
			var center:Vector2=glasshouse.center;top_pos=Vector3(center.x,float(glasshouse.floor_y)+float(glasshouse.spring)+float(glasshouse.rise)+.04,center.y)
			var bounds:Rect2=glasshouse.bounds;var p:Vector2=center
			if str(glasshouse.axis)=="x":p.x=bounds.end.x+.20
			else:p.y=bounds.end.y+.20
			habitat.glass_nectar=Vector3(p.x,float(glasshouse.floor_y)+.55,p.y)
	habitat.perch=top_pos
	return habitat

func uproot_near(at: Vector2, radius: float = 4.8) -> void:
	if _perches.is_empty():
		return
	for idx in range(_birds.size()):
		var b: Dictionary = _birds[idx]
		if Vector2(b.pos.x, b.pos.z).distance_to(at) <= radius:
			b.mode = "flying"
			b.timer = 4.5 + float(idx % 4)
			b.target = _perches[(idx + int(_time * 3.0) + 1) % _perches.size()]

func _process(delta: float) -> void:
	if state == null:
		return
	# Habitats publish with visible geometry; never read an in-flight edit here.
	_time += delta
	for i in range(_birds.size()):
		var b: Dictionary = _birds[i]
		b.timer = float(b.timer) - delta
		var flap := 0.0
		if str(b.mode) == "perched":
			b.pos = Vector3(b.target)
			if not _night and float(b.timer) <= 0.0 and _perches.size() > 1:
				b.mode = "flying"
				b.timer = 5.5 + float(i % 5)
				b.target = _perches[(i + int(_time) + 1) % _perches.size()]
		else:
			flap = 1.0
			var goal: Vector3 = b.target
			var orbit := Vector3(cos(_time * 0.9 + float(b.phase)) * 1.8, 1.6 + sin(_time * 1.3 + float(b.phase)) * 0.45, sin(_time * 0.9 + float(b.phase)) * 1.8)
			var dest := goal + (orbit if float(b.timer) > 1.8 else Vector3.ZERO)
			var diff := dest - Vector3(b.pos)
			if diff.length() < 0.18 and float(b.timer) <= 1.8:
				b.pos = goal
				b.mode = "perched"
				b.timer = 6.0 + float((i * 3) % 8)
			else:
				var step := diff.normalized() * minf(diff.length(), delta * 3.2)
				b.pos = Vector3(b.pos) + step
				if Vector2(step.x, step.z).length() > 0.001:
					b.yaw = atan2(step.x, step.z)
		_write_bird(i,flap)
	_write_flutters()

func _write_bird(i:int,flap:float)->void:
	var b:Dictionary=_birds[i]
	var basis := Basis(Vector3.UP, float(b.yaw))
	SafeInstances.safe_set_instance(birds_mm.multimesh,i,Transform3D(basis,b.pos))
	birds_mm.multimesh.set_instance_color(i, b.color)
	birds_mm.multimesh.set_instance_custom_data(i, Color(flap, float(b.phase), 0.0, 0.0))

func _write_flutters()->void:
	for i in range(_flutters.size()):
		var f: Dictionary = _flutters[i]
		var ph := float(f.phase) + _time * 1.4
		var offset := Vector3(sin(ph * 1.3) * 0.85, 0.25 + sin(ph * 2.1) * 0.22, cos(ph * 0.9) * 0.85)
		var pos: Vector3 = Vector3(f.anchor) + offset
		var yaw := atan2(cos(ph * 1.3), -sin(ph * 0.9))
		SafeInstances.safe_set_instance(flutter_mm.multimesh,i,Transform3D(Basis(Vector3.UP,yaw),pos))
		flutter_mm.multimesh.set_instance_color(i, f.color)
		flutter_mm.multimesh.set_instance_custom_data(i, Color(1.0, float(f.phase), 0.0, 0.0))

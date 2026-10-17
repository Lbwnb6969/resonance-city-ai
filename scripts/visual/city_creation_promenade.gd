extends RefCounted
## Stable arc-distance decoration on the real road. TG's separate path and
## exclusion masks inform the placement rules; 4.5m spacing is the v2 design.
## Lamp proportions/amber colours adapt classical_lamp_light.gd into 3D.
const SPACING := 4.5
const GlowShader=preload("res://scripts/visual/shaders/creation_lamp_glow.gdshader")
const StoneShader=preload("res://scripts/visual/shaders/creation_promenade.gdshader")
var materials: Dictionary = {}
var evening := false
var concert := false
var _revision := -1
var _cache: Dictionary = {}
var bud_mesh: SphereMesh

func set_light(is_evening: bool,is_concert: bool) -> void:
	if evening==is_evening and concert==is_concert: return
	evening=is_evening;concert=is_concert
	var strength := 1.0 if evening else (0.65 if concert else 0.0)
	for key: String in ["glow","pool"]:
		if materials.has(key): materials[key].set_shader_parameter("strength",strength)
	if materials.has("wick"):
		materials.wick.emission_enabled=strength>0.0
		materials.wick.emission_energy_multiplier=1.4*strength

func road_material() -> ShaderMaterial:
	if not materials.has("road"):
		var material := ShaderMaterial.new();material.shader=StoneShader
		materials.road=material
	return materials.road

func prepare(renderer,road: Dictionary) -> Array:
	if str(road.get("style","path"))!="promenade": return []
	if _revision!=renderer.state.revision: _cache.clear();_revision=renderer.state.revision
	if _cache.has(str(road.id)): return _cache[str(road.id)]
	var profile: Dictionary = renderer.state.road_profile(road)
	var samples: Array = profile.samples
	var length: float = samples[-1].distance
	var records: Array = []
	var arc := SPACING*0.5
	var station := 0
	while arc<length-1.0:
		var point := _point(samples,arc)
		var at: Vector2 = point.at
		var tangent: Vector2 = point.tangent
		var normal := Vector2(-tangent.y,tangent.x)
		var steep := false
		for tread: Dictionary in profile.treads:
			if arc>=float(tread.s0)-.7 and arc<=float(tread.s1)+.7: steep=true;break
		if not steep and renderer.state.water_clearance(at)>1.3:
			for side: int in [-1,1]:
				var lamp_at := at+normal*float(side)*(float(road.width)*.5+.34)
				if _clear(renderer.state,road,lamp_at,.20):
					records.append({"kind":"lamp","at":lamp_at,"y":renderer.state.ground_height(lamp_at)+.025,"yaw":atan2(tangent.x,tangent.y),"arc":arc,"side":side})
				var flower_at := lamp_at+tangent*(.85 if side>0 else -.85)
				if station%2==0 and _clear(renderer.state,road,flower_at,.45):
					records.append({"kind":"flower","at":flower_at,"y":renderer.state.ground_height(flower_at)+.025,"yaw":atan2(tangent.x,tangent.y),"arc":arc,"side":side})
		arc+=SPACING;station+=1
	_cache[str(road.id)]=records
	return records

func _clear(city,road: Dictionary,at: Vector2,radius: float) -> bool:
	if not city.WORLD_RECT.grow(-radius).has_point(at) or city.water_clearance(at)<radius+.45: return false
	for other: Dictionary in city.roads:
		if other.id==road.id: continue
		for i in range(other.points.size()-1):
			var a := Vector2(other.points[i][0],other.points[i][1]);var b := Vector2(other.points[i+1][0],other.points[i+1][1])
			if at.distance_to(Geometry2D.get_closest_point_to_segment(at,a,b))<float(other.width)*.5+radius+.7: return false
	for house: Dictionary in city.houses:
		for cell: Dictionary in house.cells:
			if int(cell.level)!=0: continue
			var center := Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			var delta := (at-center).abs()-Vector2.ONE*.9
			if delta.max(Vector2.ZERO).length()<radius+.12: return false
		for door: Dictionary in city.house_entrances(str(house.id)):
			if at.distance_to(door.at)<radius+1.15: return false
	for plant: Dictionary in city.plants:
		if str(plant.kind) in ["olive","cypress"] and at.distance_to(Vector2(plant.position[0],plant.position[1]))<radius+.55: return false
	return true

func _point(samples: Array,arc: float) -> Dictionary:
	for i in range(samples.size()-1):
		if arc>float(samples[i+1].distance): continue
		var a: Vector2=samples[i].xz;var b: Vector2=samples[i+1].xz
		var ratio := (arc-float(samples[i].distance))/maxf(.000001,float(samples[i+1].distance)-float(samples[i].distance))
		return {"at":a.lerp(b,ratio),"tangent":(b-a).normalized()}
	return {"at":samples[-1].xz,"tangent":Vector2.UP}

func install(renderer,parent: Node3D,records: Array) -> void:
	if records.is_empty(): return
	var root := Node3D.new();root.name="PromenadeDetails";parent.add_child(root)
	root.set_meta("records",records)
	var metal: Material=renderer._material(Color("3e5048"))
	var stone: Material=renderer._material(Color("b7b19a"))
	var soil: Material=renderer._material(Color("6d5b42"))
	var green: Material=renderer._material(Color("5e805b"))
	if not materials.has("wick"):
		var wick := StandardMaterial3D.new();wick.albedo_color=Color("ffe4a0");wick.emission=Color("ffb44f");wick.roughness=.55
		materials.wick=wick
	var batches := {}
	var lamps: Array[Vector3] = []
	var pools: Array[Vector3] = []
	for record: Dictionary in records:
		var origin := Vector3(record.at.x,record.y,record.at.y)
		if record.kind=="lamp":
			_box(renderer,batches,origin,Vector3(.26,.12,.26),Vector3(0,.06,0),stone)
			_box(renderer,batches,origin,Vector3(.13,.22,.13),Vector3(0,.22,0),metal)
			_box(renderer,batches,origin,Vector3(.065,1.35,.065),Vector3(0,.96,0),metal)
			_box(renderer,batches,origin,Vector3(.15,.065,.15),Vector3(0,1.58,0),metal)
			_box(renderer,batches,origin,Vector3(.29,.065,.29),Vector3(0,1.67,0),metal)
			_box(renderer,batches,origin,Vector3(.205,.31,.205),Vector3(0,1.86,0),materials.wick)
			for x: float in [-.12,.12]:
				for z: float in [-.12,.12]: _box(renderer,batches,origin,Vector3(.025,.36,.025),Vector3(x,1.86,z),metal)
			_box(renderer,batches,origin,Vector3(.33,.07,.33),Vector3(0,2.055,0),metal)
			_box(renderer,batches,origin,Vector3(.22,.09,.22),Vector3(0,2.12,0),metal)
			_box(renderer,batches,origin,Vector3(.065,.15,.065),Vector3(0,2.23,0),metal)
			lamps.append(origin+Vector3.UP*1.86);pools.append(origin+Vector3.UP*.018)
		else:
			var frame := Basis(Vector3.UP,float(record.yaw))
			for x: float in [-.20,.20]: _box(renderer,batches,origin,Vector3(.07,.29,.67),frame*Vector3(x,.155,0),stone,record.yaw)
			for z: float in [-.31,.31]: _box(renderer,batches,origin,Vector3(.47,.29,.07),frame*Vector3(0,.155,z),stone,record.yaw)
			_box(renderer,batches,origin,Vector3(.37,.06,.55),Vector3(0,.26,0),soil,record.yaw)
			for i in range(5):
				var local := frame*Vector3(sin(i*2.4)*.11,.38+float(i%2)*.04,-.22+i*.11)
				_bud(batches,origin+local,Vector3(.13,.16,.13),green)
				_bud(batches,origin+local+Vector3.UP*.13,Vector3(.055,.045,.055),renderer._material(Color("d7a2a4") if i%2==0 else Color("eee0b7")))
	for batch: Dictionary in batches.values():
		var node := MeshInstance3D.new();node.mesh=batch.surface.commit();node.material_override=batch.material;root.add_child(node)
	_glows(root,lamps,false);_glows(root,pools,true)
	# New batches inherit the current shared light state immediately.
	var saved_evening := evening;var saved_concert := concert;evening=not evening
	set_light(saved_evening,saved_concert)

func _box(renderer,batches: Dictionary,origin: Vector3,size_value: Vector3,local: Vector3,material: Material,yaw: float=0.0) -> void:
	renderer._append_road_box(batches,size_value,origin+local,material,Vector3(0,yaw,0))

func _bud(batches: Dictionary,at: Vector3,size_value: Vector3,material: Material) -> void:
	if bud_mesh==null:
		bud_mesh=SphereMesh.new();bud_mesh.radius=1.0;bud_mesh.height=2.0;bud_mesh.radial_segments=8;bud_mesh.rings=3
	var key := material.get_instance_id()
	if not batches.has(key):
		var surface := SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES)
		batches[key]={"surface":surface,"material":material}
	batches[key].surface.append_from(bud_mesh,0,Transform3D(Basis.from_scale(size_value),at))

func _glows(root: Node3D,points: Array[Vector3],pool: bool) -> void:
	if points.is_empty(): return
	var key := "pool" if pool else "glow"
	if not materials.has(key):
		var material := ShaderMaterial.new();material.shader=GlowShader
		material.set_shader_parameter("ground_pool",1.0 if pool else 0.0)
		materials[key]=material
	var mesh := QuadMesh.new();mesh.size=Vector2(1.6,1.6) if pool else Vector2(.9,.9)
	if not pool:
		# Camera-facing orientation is performed by the instance shader.
		if not materials.has("billboard"):
			var shader := Shader.new()
			shader.code=GlowShader.code.replace("void fragment()", "void vertex() { MODELVIEW_MATRIX = VIEW_MATRIX * mat4(INV_VIEW_MATRIX[0],INV_VIEW_MATRIX[1],INV_VIEW_MATRIX[2],MODEL_MATRIX[3]); }\nvoid fragment()")
			materials.billboard=shader
		materials[key].shader=materials.billboard
	var multi := MultiMesh.new();multi.transform_format=MultiMesh.TRANSFORM_3D;multi.mesh=mesh;multi.instance_count=points.size()
	for i in range(points.size()):
		multi.set_instance_transform(i,Transform3D(Basis(Vector3.RIGHT,-PI*.5) if pool else Basis.IDENTITY,points[i]))
	var node := MultiMeshInstance3D.new();node.name="LampPools" if pool else "LampHalos";node.multimesh=multi;node.material_override=materials[key]
	node.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;node.custom_aabb=multi.get_aabb().grow(1.0);root.add_child(node)

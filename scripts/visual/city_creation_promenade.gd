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
const CLEARANCE_BIN_SIZE:=4.
var _clearance_revision:=-1
var _clearance_owner:WeakRef
var _clearance_records:Array[Dictionary]=[]
var _clearance_bins:Dictionary={}

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
	var style:=str(road.get("style","path"))
	if style not in ["promenade","avenue","tram"]: return []
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
		var on_plaza:=false
		for marker: Dictionary in renderer.state.Roundabouts.all(renderer.state.roads):
			if at.distance_to(marker.center)<float(marker.radius)+.8: on_plaza=true
		if on_plaza: arc+=SPACING;station+=1;continue
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
				var tree_at:=at+normal*float(side)*(float(road.width)*.5+1.05)
				if style=="avenue" and _clear(renderer.state,road,tree_at,.65):
					records.append({"kind":"tree","at":tree_at,"y":renderer.state.ground_height(tree_at),"yaw":atan2(tangent.x,tangent.y),"arc":arc,"side":side})
		arc+=SPACING;station+=1
	if style=="tram":
		for index in range(samples.size()-1):
			var a: Vector2=samples[index].xz;var b: Vector2=samples[index+1].xz
			var normal:=Vector2(-(b-a).normalized().y,(b-a).normalized().x)
			var on_plaza:=false
			for marker: Dictionary in renderer.state.Roundabouts.all(renderer.state.roads):
				if ((a+b)*.5).distance_to(marker.center)<float(marker.radius)+.1: on_plaza=true
			if on_plaza: continue
			for side: float in [-1.0,1.0]:
				records.append({"kind":"rail","at":(a+b)*.5+normal*.32*side,"y":(float(samples[index].y)+float(samples[index+1].y))*.5+.012,"yaw":atan2(b.x-a.x,b.y-a.y),"pitch":-atan2(float(samples[index+1].y)-float(samples[index].y),a.distance_to(b)),"length":a.distance_to(b)+.004})
	_cache[str(road.id)]=records
	return records

func _clear(city,road: Dictionary,at: Vector2,radius: float) -> bool:
	if not city.WORLD_RECT.grow(-radius).has_point(at) or city.water_clearance(at)<radius+.45: return false
	_prepare_clearance(city)
	var candidates:Dictionary={}
	for x in range(floori((at.x-radius)/CLEARANCE_BIN_SIZE),floori((at.x+radius)/CLEARANCE_BIN_SIZE)+1):
		for z in range(floori((at.y-radius)/CLEARANCE_BIN_SIZE),floori((at.y+radius)/CLEARANCE_BIN_SIZE)+1):
			for index:int in _clearance_bins.get(Vector2i(x,z),[]):candidates[index]=true
	for index:int in candidates:
		var row:Dictionary=_clearance_records[index]
		match str(row.kind):
			"road":
				if str(row.id)!=str(road.id) and at.distance_to(Geometry2D.get_closest_point_to_segment(at,row.a,row.b))<float(row.radius)+radius:return false
			"wall":
				var delta:Vector2=(at-Vector2(row.at)).abs()-Vector2.ONE*.9
				if delta.max(Vector2.ZERO).length()<radius+.12:return false
			_:
				if at.distance_to(row.at)<radius+float(row.radius):return false
	return true

func _prepare_clearance(city:RefCounted)->void:
	if _clearance_revision==city.revision and _clearance_owner!=null and _clearance_owner.get_ref()==city:return
	_clearance_revision=city.revision;_clearance_owner=weakref(city)
	_clearance_records=[];_clearance_bins={}
	# Snapshot actual door records once, rather than asking every household
	# for its complete frontage signature at every lamp and gateway sample.
	for other:Dictionary in city.roads:
		for i in range(other.points.size()-1):
			var a:=Vector2(other.points[i][0],other.points[i][1]);var b:=Vector2(other.points[i+1][0],other.points[i+1][1]);var radius:=float(other.width)*.5+.7
			_add_clearance({"kind":"road","id":str(other.id),"a":a,"b":b,"radius":radius},Rect2(a,Vector2.ZERO).expand(b).grow(radius))
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var at:=Vector2(house.origin[0],house.origin[1])+Vector2(cell.x,cell.z)*1.8
			_add_clearance({"kind":"wall","at":at},Rect2(at-Vector2.ONE*.9,Vector2.ONE*1.8).grow(.12))
		for door:Dictionary in city.house_entrances(str(house.id)):
			_add_clearance({"kind":"door","at":door.at,"clearance_at":door.clearance_at,"radius":1.15},Rect2(door.at,Vector2.ZERO).grow(1.15))
	for plant:Dictionary in city.plants:
		if str(plant.kind) not in ["olive","cypress"]:continue
		var at:=Vector2(plant.position[0],plant.position[1])
		_add_clearance({"kind":"plant","at":at,"radius":.55},Rect2(at,Vector2.ZERO).grow(.55))

func _add_clearance(record:Dictionary,bounds:Rect2)->void:
	var index:=_clearance_records.size();_clearance_records.append(record)
	for x in range(floori(bounds.position.x/CLEARANCE_BIN_SIZE),floori(bounds.end.x/CLEARANCE_BIN_SIZE)+1):
		for z in range(floori(bounds.position.y/CLEARANCE_BIN_SIZE),floori(bounds.end.y/CLEARANCE_BIN_SIZE)+1):
			var bin:=Vector2i(x,z)
			if not _clearance_bins.has(bin):_clearance_bins[bin]=[]
			_clearance_bins[bin].append(index)

func adopt_clearance(source:RefCounted,city:RefCounted)->void:
	# The joined renderer worker owns these completed, read-only obstacle
	# records. Only their weak city owner changes at publication.
	_clearance_revision=city.revision;_clearance_owner=weakref(city)
	_clearance_records=source._clearance_records;_clearance_bins=source._clearance_bins

func doors_clear(city:RefCounted,at:Vector2,reach:float)->bool:
	_prepare_clearance(city)
	for x in range(floori((at.x-reach)/CLEARANCE_BIN_SIZE),floori((at.x+reach)/CLEARANCE_BIN_SIZE)+1):
		for z in range(floori((at.y-reach)/CLEARANCE_BIN_SIZE),floori((at.y+reach)/CLEARANCE_BIN_SIZE)+1):
			for index:int in _clearance_bins.get(Vector2i(x,z),[]):
				var row:Dictionary=_clearance_records[index]
				if str(row.kind)=="door" and at.distance_to(row.clearance_at)<reach:return false
	return true

func _point(samples: Array,arc: float) -> Dictionary:
	for i in range(samples.size()-1):
		if arc>float(samples[i+1].distance): continue
		var a: Vector2=samples[i].xz;var b: Vector2=samples[i+1].xz
		var ratio := (arc-float(samples[i].distance))/maxf(.000001,float(samples[i+1].distance)-float(samples[i].distance))
		return {"at":a.lerp(b,ratio),"tangent":(b-a).normalized()}
	return {"at":samples[-1].xz,"tangent":Vector2.UP}

func lamp_material() -> StandardMaterial3D:
	if not materials.has("wick"):
		var wick := StandardMaterial3D.new();wick.albedo_color=Color("ffe4a0");wick.emission=Color("ffb44f");wick.roughness=.55
		var strength := 1.0 if evening else (0.65 if concert else 0.0)
		wick.emission_enabled=strength>0.0
		wick.emission_energy_multiplier=1.4*strength
		materials.wick=wick
	return materials.wick

func install(renderer,parent: Node3D,records: Array) -> void:
	if records.is_empty(): return
	var root := Node3D.new();root.name="PromenadeDetails";parent.add_child(root)
	root.set_meta("records",records)
	var metal: Material=renderer._material(Color("3e5048"))
	var stone: Material=renderer._material(Color("b7b19a"))
	var soil: Material=renderer._material(Color("6d5b42"))
	var green: Material=renderer._material(Color("5e805b"))
	lamp_material()
	var batches := {}
	var lamps: Array[Vector3] = []
	var pools: Array[Vector3] = []
	var trees: Array[Vector3]=[]
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
		elif record.kind=="rail":
			renderer._append_road_box(batches,Vector3(.055,.028,record.length),origin,metal,Vector3(record.pitch,record.yaw,0))
		elif record.kind=="tree":
			trees.append(origin)
			_box(renderer,batches,origin,Vector3(1.05,.08,1.05),Vector3(0,.04,0),stone)
			_box(renderer,batches,origin,Vector3(.86,.04,.86),Vector3(0,.09,0),soil)
			var frame:=Basis(Vector3.UP,float(record.yaw))
			_box(renderer,batches,origin,Vector3(.42,.10,.9),frame*Vector3(.78,.43,0),renderer._material(Color("987450")),record.yaw)
			for z: float in [-.30,.30]: _box(renderer,batches,origin,Vector3(.36,.36,.07),frame*Vector3(.78,.23,z),metal,record.yaw)
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
	if not trees.is_empty():
		var trunk:=CylinderMesh.new();trunk.bottom_radius=.10;trunk.top_radius=.065;trunk.height=1.65;trunk.radial_segments=8
		_tree_batch(root,"AvenueTrunks",trunk,renderer._material(Color("75634b")),trees,Vector3(0,.9,0))
		var crown:=SphereMesh.new();crown.radius=.65;crown.height=1.45;crown.radial_segments=10;crown.rings=4
		_tree_batch(root,"AvenueCrowns",crown,green,trees,Vector3(0,2.0,0))
	# New batches inherit the current shared light state immediately.
	var saved_evening := evening;var saved_concert := concert;evening=not evening
	set_light(saved_evening,saved_concert)

func _tree_batch(root: Node3D,label: String,mesh: Mesh,material: Material,positions: Array[Vector3],offset: Vector3) -> void:
	var multi:=MultiMesh.new();multi.transform_format=MultiMesh.TRANSFORM_3D;multi.mesh=mesh;multi.instance_count=positions.size()
	for i in range(positions.size()): multi.set_instance_transform(i,Transform3D(Basis.IDENTITY,positions[i]+offset))
	var instance:=MultiMeshInstance3D.new();instance.name=label;instance.multimesh=multi;instance.material_override=material;root.add_child(instance)

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

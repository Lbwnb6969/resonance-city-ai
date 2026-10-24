extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const DetailLod=preload("res://scripts/visual/city_creation_detail_lod.gd")
## Quality decor has independent ownership: no road, terrain or house rebuild.
const NAMES := ["初筑暖舍","安居花舍","雅致风铃屋","连廊华宅","传世共鸣名宅"]
var layer: Node3D
var roots: Dictionary={}
var fingerprints: Dictionary={}
var particles: Array[CPUParticles3D]=[]
var next_particle:=0
var build_count:=0
var build_stats: Dictionary={}
var geometry_inputs: Dictionary={}
var geometry_signatures: Dictionary={}
var welcome_batches:Array[Dictionary]=[]
var pending_events:Dictionary={}
var pending_city:=0
var queue_stats:Dictionary={"queued":0,"rendered":0,"last_poll_us":0,"max_poll_us":0}

func schedule_flash(renderer,events:Array)->void:
	if renderer.has_meta("juice_feedback"):renderer.get_meta("juice_feedback").quality(events)
	var city_id:int=renderer.state.get_instance_id()
	if pending_city!=city_id:pending_events.clear();pending_city=city_id
	for i in range(events.size()):
		var event:Dictionary=events[i];var id:=str(event.house_id)
		var celebrate:bool=i<4 or bool(pending_events.get(id,{}).get("celebrate",false))
		if not pending_events.has(id):queue_stats.queued+=1
		pending_events[id]={"event":event.duplicate(),"celebrate":celebrate}

func poll(renderer)->void:
	queue_stats.last_poll_us=0
	if pending_events.is_empty():return
	if pending_city!=renderer.state.get_instance_id():pending_events.clear();return
	# One household is the indivisible render unit. Awards and walking boosts
	# already exist in State; only the derived decoration is delayed a frame.
	var id:String=pending_events.keys()[0];var row:Dictionary=pending_events[id]
	pending_events.erase(id)
	var began:=Time.get_ticks_usec()
	if bool(row.celebrate):flash(renderer,[row.event])
	else:
		var only:Array[String]=[id];progress(renderer,only)
	queue_stats.rendered+=1;queue_stats.last_poll_us=Time.get_ticks_usec()-began
	queue_stats.max_poll_us=maxi(int(queue_stats.max_poll_us),int(queue_stats.last_poll_us))

func prepare_geometry(renderer,house: Dictionary,frontage: Array,arcades: Array)->void:
	var id:=str(house.id)
	geometry_inputs[id]=[renderer.state.get_instance_id(),renderer.state.revision,hash(house)]
	geometry_signatures[id]=hash([house,frontage,arcades])

func _geometry_signature(renderer,house: Dictionary)->int:
	var id:=str(house.id)
	var key: Array=[renderer.state.get_instance_id(),renderer.state.revision,hash(house)]
	if geometry_inputs.get(id,[])!=key:
		prepare_geometry(renderer,house,renderer._frontage_signature(house),renderer.ArcadePlan.for_house(renderer.state,house))
	return int(geometry_signatures[id])

func adopt_geometry(source: RefCounted,renderer)->void:
	geometry_inputs.clear();geometry_signatures.clear()
	for house: Dictionary in renderer.state.houses:
		var id:=str(house.id)
		if not source.geometry_signatures.has(id):continue
		geometry_inputs[id]=[renderer.state.get_instance_id(),renderer.state.revision,hash(house)]
		geometry_signatures[id]=source.geometry_signatures[id]


func setup(renderer: Node3D)->void:
	layer=Node3D.new();layer.name="BuildingQuality";renderer.add_child(layer)
	_prepare_welcome(renderer)
	var material:=StandardMaterial3D.new();material.albedo_color=Color("f4cc6b");material.emission_enabled=true;material.emission=Color("edb857");material.emission_energy_multiplier=.45
	var mesh:=SphereMesh.new();mesh.radius=.025;mesh.height=.05;mesh.radial_segments=6;mesh.rings=3
	for i in range(4):
		var effect:=CPUParticles3D.new();effect.name="QualityUpgrade_%d"%i;effect.mesh=mesh;effect.material_override=material
		effect.amount=18;effect.lifetime=1.15;effect.one_shot=true;effect.explosiveness=.9;effect.emitting=false
		effect.direction=Vector3.UP;effect.spread=42;effect.initial_velocity_min=.7;effect.initial_velocity_max=1.5;effect.gravity=Vector3(0,-.35,0)
		# Compatibility may draw an uninitialized CPU particle buffer before its first restart.
		effect.hide();effect.finished.connect(effect.hide)
		DetailLod.bind(effect,DetailLod.SMOKE);effect.visibility_aabb=AABB(Vector3(-3,-1,-3),Vector3(6,6,6));layer.add_child(effect);particles.append(effect)

func _draw_welcome(renderer,frame:Node3D)->void:
	var stone: Material=renderer._material(Color("d6c5a1"))
	for ring in range(2):
		for i in range(5+ring*2):
			var angle: float=PI*float(i)/float(4+ring*2)
			var radius: float=.17+ring*.17
			renderer._cylinder(frame,.078,.078,.035,Vector3(cos(angle)*radius,0,sin(angle)*radius),stone,7)
	var pot: Material=renderer._material(Color("b87955"))
	renderer._cylinder(frame,.13,.095,.22,Vector3(.55,.11,0),pot,9)
	renderer._cylinder(frame,.15,.15,.045,Vector3(.55,.23,0),pot,9)
	for i in range(3):renderer._crown(frame,Vector3(.50+i*.05,.29+.025*sin(i*2.),0),Vector3(.07,.06,.07),Color("b6c77b"))
	var glow: StandardMaterial3D=renderer._material(Color("f1d494")).duplicate()
	glow.emission_enabled=true;glow.emission=Color("e6b76d");glow.emission_energy_multiplier=.25
	renderer._box(frame,Vector3(.12,.19,.12),Vector3(-.5,1.2,-.35),glow)

func _prepare_welcome(renderer)->void:
	# Bake invariant primitive transforms once, grouped by original material.
	# Keep these meshes uncolored: the normal house merger still owns vertex
	# colors and combines them with the rest of each house in the same batches.
	var frame:=Node3D.new();layer.add_child(frame);_draw_welcome(renderer,frame)
	var groups:Dictionary={}
	for instance:MeshInstance3D in frame.find_children("*","MeshInstance3D",true,false):
		var material:Material=instance.material_override;var id:=material.get_instance_id()
		if not groups.has(id):
			var surface:=SurfaceTool.new();surface.begin(Mesh.PRIMITIVE_TRIANGLES)
			groups[id]={"surface":surface,"material":material}
		groups[id].surface.append_from(instance.mesh,0,frame.global_transform.affine_inverse()*instance.global_transform)
	welcome_batches.clear()
	for group:Dictionary in groups.values():
		var mesh:ArrayMesh=group.surface.commit()
		mesh.set_meta("creation_immutable_prefab",true)
		welcome_batches.append({"mesh":mesh,"material":group.material})
	layer.remove_child(frame);frame.queue_free()

func _welcome(_renderer,frame:Node3D)->void:
	for batch:Dictionary in welcome_batches:
		var instance:=MeshInstance3D.new();instance.mesh=batch.mesh;instance.material_override=batch.material;frame.add_child(instance)

func progress(renderer,only:Array[String]=[])->void:
	if only.is_empty():pending_events.clear()
	if renderer.state.building_quality.is_empty() and roots.is_empty():return
	build_stats={"signature_us":0,"placement_us":0,"geometry_us":0,"merge_us":0,"houses":[]}
	var live: Dictionary={}
	var houses:Array=renderer.state.houses
	if not only.is_empty():
		houses=[]
		for id:String in only:
			var index:int=renderer.state._house_index(id)
			if index>=0:houses.append(renderer.state.houses[index])
	for house: Dictionary in houses:
		var id:=str(house.id);var tier: int=renderer.state.level_tier(id)
		if renderer.resonance.rigs.has(id):renderer.resonance.rigs[id].level_tier=tier
		if tier<2:continue
		live[id]=true
		var began:=Time.get_ticks_usec()
		var signature:=hash([_geometry_signature(renderer,house),tier,renderer.state.improvement_level(id)])
		build_stats.signature_us+=Time.get_ticks_usec()-began
		if fingerprints.get(id,-1)==signature:continue
		build_stats.houses.append(id);began=Time.get_ticks_usec()
		_remove(id)
		var root:=Node3D.new();root.name="Quality_"+id;root.set_meta("level_tier",tier);layer.add_child(root)
		var entry: Dictionary=renderer._primary_entrance(house)
		var records: Dictionary={}
		# The welcome apron/pot/lamp use only the entrance. Third-level window
		# boxes and fourth-level galleries need the delivered-craft layout.
		if (tier>=3 and renderer.state.improvement_level(id)<2) or (tier>=4 and renderer.state.improvement_level(id)<3):
			records=renderer.craft.placements(renderer,house,3 if tier>=4 else 2)
		build_stats.placement_us+=Time.get_ticks_usec()-began;began=Time.get_ticks_usec()
		var features: Array[String]=[]
		if not entry.is_empty():
			var frame:=Node3D.new();root.add_child(frame)
			frame.position=renderer._entrance_point(entry,Vector3(0,0,.38));frame.rotation.y=atan2(Frame.normal(entry).x,Frame.normal(entry).y)
			var at:=Vector2(frame.position.x,frame.position.z);frame.position.y=renderer.state.street_height(at)+.012
			_welcome(renderer,frame)
			features.append_array(["welcome_stones","door_flowerpot","warm_porch_lamp"])
		if tier>=3 and renderer.state.improvement_level(id)<2:
			renderer.craft._static_batch(root,{"planter":records.planter,"plaque":records.plaque})
			features.append("flowerbox_shutters")
			var iron: Material=renderer._material(Color("45584f"))
			for placement: Transform3D in records.planter:
				var frame:=Node3D.new();root.add_child(frame);frame.transform=placement
				for x: float in [-.35,.35]:renderer._box(frame,Vector3(.025,.23,.28),Vector3(x,0,.025),iron)
				for y: float in [-.085,.105]:renderer._box(frame,Vector3(.72,.025,.025),Vector3(0,y,.16),iron)
				for i in range(7):renderer._cylinder(frame,.009,.009,.18,Vector3(-.30+i*.10,.01,.16),iron,5)
			root.set_meta("iron_flowerboxes",records.planter.size())
		if tier>=3 and renderer.state.improvement_level(id)==0:
			renderer.craft._batch(root,"chime",records.chime,posmod(hash(id),6283)/1000.0,id)
			features.append("bronze_chime")
		if tier>=4 and renderer.state.improvement_level(id)<3:
			renderer.craft._static_batch(root,{"pergola":records.pergola})
			if not records.pergola.is_empty():features.append("carved_gallery")
			_canopy(renderer,root,house,features)
		if tier>=5:
			_vane(renderer,root,house)
			_rose_window(renderer,root,house)
			features.append_array(["golden_weather_vane","painted_rose_window","golden_halo"])
		root.set_meta("features",features)
		build_stats.geometry_us+=Time.get_ticks_usec()-began;began=Time.get_ticks_usec()
		renderer._merge_meshes(root)
		build_stats.merge_us+=Time.get_ticks_usec()-began
		DetailLod.bind_tree(root,DetailLod.GALLERY)
		roots[id]=root;fingerprints[id]=signature;build_count+=1
	for id: String in (roots.keys() if only.is_empty() else only):
		if not live.has(id):_remove(id)

func _canopy(renderer,root: Node3D,house: Dictionary,features: Array[String])->void:
	for cell: Dictionary in house.cells:
		if cell.kind!="terrace":continue
		var frame:=Node3D.new();root.add_child(frame);frame.position=Frame.world3(house,renderer._cell_position(house,cell)+Vector3(0,int(cell.level)*1.7+.18,0));frame.rotation.y=Frame.yaw(house)
		var at:=Vector3.ZERO
		var wood: Material=renderer._material(Color("a8845f"));var cream: Material=renderer._material(Color("eadbb4"))
		for x: float in [-.68,.68]:
			for z: float in [-.65,.65]:renderer._cylinder(frame,.025,.025,1.35,at+Vector3(x,.675,z),wood,6)
		renderer._box(frame,Vector3(1.5,.055,1.45),at+Vector3(0,1.36,0),cream)
		features.append("sunshine_terrace_canopy");break

func _vane(renderer,root: Node3D,house: Dictionary)->void:
	var anchor: Vector3=renderer.resonance.rigs.get(str(house.id),{}).get("anchor",Vector3(float(house.origin[0]),2.5,float(house.origin[1])))
	var gold: Material=renderer._material(Color("d9b464"))
	renderer._cylinder(root,.018,.022,.52,anchor+Vector3(0,.23,0),gold,7)
	renderer._box(root,Vector3(.52,.025,.025),anchor+Vector3(0,.40,0),gold)
	renderer._triangles(root,[anchor+Vector3(.31,.40,0),anchor+Vector3(.17,.49,0),anchor+Vector3(.17,.31,0)],Color("d9b464"))
	var halo:=MeshInstance3D.new();var torus:=TorusMesh.new();torus.inner_radius=.42;torus.outer_radius=.44;torus.rings=24;torus.ring_segments=5;halo.mesh=torus
	var glow:=StandardMaterial3D.new();glow.albedo_color=Color(.9,.7,.25,.14);glow.transparency=BaseMaterial3D.TRANSPARENCY_ALPHA;glow.emission_enabled=true;glow.emission=Color("f1ca68");glow.emission_energy_multiplier=.25
	halo.material_override=glow;halo.position=anchor+Vector3(0,-.12,0);halo.cast_shadow=GeometryInstance3D.SHADOW_CASTING_SETTING_OFF;root.add_child(halo)

func _rose_window(renderer,root: Node3D,house: Dictionary)->void:
	var cells: Array=house.cells.duplicate();cells.sort_custom(func(a: Dictionary,b: Dictionary)->bool:return int(a.level)>int(b.level))
	for cell: Dictionary in cells:
		if cell.kind!="room":continue
		var side:=Vector2i.DOWN
		if not renderer._neighbor_cell(house,cell,side).is_empty():continue
		var frame:=Node3D.new();root.add_child(frame);frame.position=Frame.world3(house,renderer._cell_position(house,cell)+Vector3(0,int(cell.level)*1.7,1.02));frame.rotation.y=Frame.yaw(house)
		# High circular glazing leaves the existing door clear below it.
		var ring: MeshInstance3D=renderer._cylinder(frame,.18,.18,.025,Vector3(0,1.43,0),renderer._material(Color("d9b464")),16);ring.rotation.x=PI*.5
		for i in range(6):
			var angle:=TAU*i/6
			var petal: MeshInstance3D=renderer._cylinder(frame,.050,.050,.03,Vector3(cos(angle)*.10,1.43+sin(angle)*.10,.022),renderer._material([Color("9aaea0"),Color("bd8375"),Color("e5c477")][i%3]),8);petal.rotation.x=PI*.5
		break

func flash(renderer, events: Array)->void:
	var changed:Array[String]=[]
	for event:Dictionary in events:
		var id:=str(event.house_id)
		pending_events.erase(id)
		if not changed.has(id):changed.append(id)
	progress(renderer,changed)
	for event: Dictionary in events.slice(0,4):
		var id:=str(event.house_id)
		if not renderer.resonance.rigs.has(id):continue
		var effect:=particles[next_particle%particles.size()];next_particle+=1
		effect.position=renderer.resonance.rigs[id].anchor-Vector3.UP*.5;effect.restart();effect.emitting=true;effect.show()

func _remove(id: String)->void:
	if not roots.has(id):return
	layer.remove_child(roots[id]);roots[id].queue_free();roots.erase(id);fingerprints.erase(id)

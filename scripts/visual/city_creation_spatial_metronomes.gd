extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## Visible clocks observe real courtyards, wheel geometry and tram station arrivals.
const Geometry = preload("res://scripts/visual/city_creation_metronome_geometry.gd")
const Materials = preload("res://scripts/visual/city_creation_metronome_material.gd")
var renderer: Node3D
var layer: Node3D
var life: Node3D
var courts := {}
var mills := {}
var flows: Array[Dictionary] = []
var arrivals := {}
var last_clock := 0.
var flow_events := 0
func setup(owner: Node3D, parent: Node3D) -> void:
	renderer = owner; layer = Node3D.new(); layer.name = "SpatialMetronomes"; parent.add_child(layer)
	for i in range(4): flows.append({"node":_mesh("StationFlow_"+str(i),null,true),"started":-100.,"station":""})
func bind_life(music: Node, source: Node3D) -> void:
	music.life_source = source; life = source; arrivals.clear()
	for row: Dictionary in flows: row.started = -100.
static func tile_order(tiles: Array, center: Vector2) -> Array:
	var perimeter: Array = []
	for tile:Variant in tiles:
		var at := Frame.box_center(tile); var exposed := false
		for side: Vector2 in [Vector2.LEFT,Vector2.RIGHT,Vector2.UP,Vector2.DOWN]:
			if not tiles.any(func(other:Variant) -> bool: return Frame.contains(other,at+side*1.8)): exposed = true
		if exposed: perimeter.append(at)
	perimeter.sort_custom(func(a: Vector2,b: Vector2) -> bool: return fposmod(atan2(a.x-center.x,center.y-a.y),TAU)<fposmod(atan2(b.x-center.x,center.y-b.y),TAU))
	return perimeter
func _mesh(label: String, mesh: Mesh, flow: bool = false) -> MeshInstance3D:
	var node := MeshInstance3D.new(); node.name = label; node.mesh = mesh
	node.material_override = Materials.glow(flow); node.cast_shadow = GeometryInstance3D.SHADOW_CASTING_SETTING_OFF
	layer.add_child(node); node.hide(); return node
func _sync() -> void:
	for id: String in courts.keys():
		if not renderer.courtyards.roots.has(id) or renderer.courtyards.roots[id].get_instance_id()!=courts[id].source:
			for node: Node in courts[id].nodes: node.queue_free()
			courts.erase(id)
	for id: String in renderer.courtyards.roots:
		if courts.has(id): continue
		var source: Node3D = renderer.courtyards.roots[id]; var plan: Dictionary = source.get_meta("plan")
		var nodes: Array = []
		for at: Vector2 in tile_order(plan.tiles,plan.center):
			var node := _mesh("CanonTile_"+id,Geometry.ring(.58,.045))
			node.position = Vector3(at.x,maxf(float(plan.base_y),renderer.state.ground_height(at))+.072,at.y)
			nodes.append(node)
		courts[id] = {"nodes":nodes,"source":source.get_instance_id(),"index":-1}
	for id: String in mills.keys():
		if not renderer.house_roots.has(id) or renderer.house_roots[id].get_instance_id()!=mills[id].source:
			mills[id].node.queue_free(); mills.erase(id)
	for id: String in renderer.house_roots:
		var source: Node3D = renderer.house_roots[id]
		if mills.has(id) or not source.has_meta("waterwheel"): continue
		var wheel: Dictionary = source.get_meta("waterwheel"); var node := _mesh("WheelDownbeat_"+id,Geometry.ring(1.,.035))
		node.position = Vector3(wheel.at.x,-.12,wheel.at.y)
		mills[id] = {"node":node,"source":source.get_instance_id(),"rotor":source.get_node_or_null("WaterwheelAxle/Rotor")}
func _path(car: Dictionary) -> Array[Vector3]:
	var tram: RefCounted = life.tram
	var points: Array[Vector3] = [tram.plan.positions[car.key]]
	var length := 0.; var cursor := int(car.cursor); var tour: Array = car.line.tour
	for i in range(tour.size()):
		var at: Vector3 = tram.plan.positions[tour[cursor]]; var gap := points[-1].distance_to(at)
		if gap > .002:
			if length+gap > 8.: points.append(points[-1].lerp(at,(8.-length)/gap)); break
			points.append(at); length += gap
		cursor = 1 if cursor >= tour.size()-1 else cursor+1
	return points
func _stations(clock: float) -> void:
	if not is_instance_valid(life): return
	var live := {}
	for car: Dictionary in life.tram.cars:
		var id := str(car.id); live[id] = true
		if float(car.wait)<=0. or float(car.distance)<.001 or not life.tram.plan.station_keys.has(car.key): continue
		var event: Array = [str(car.key),float(car.distance)]
		if arrivals.get(id,[])==event: continue
		arrivals[id] = event
		var mesh := Geometry.rail_flow(_path(car))
		if mesh == null: continue
		var slot: Dictionary = flows[0]
		for candidate: Dictionary in flows:
			if float(candidate.started)<float(slot.started): slot = candidate
		slot.node.mesh = mesh; slot.started = clock; slot.station = str(car.key); flow_events += 1
	for id: String in arrivals.keys():
		if not live.has(id): arrivals.erase(id)
func update(view: Dictionary, muted: bool) -> void:
	_sync(); var clock := float(view.get("clock_sec",0.)); last_clock = clock
	for row: Dictionary in courts.values():
		var nodes: Array = row.nodes
		if nodes.is_empty(): continue
		var index := posmod(floori(clock/.75),nodes.size()); row.index = index
		for i in range(nodes.size()):
			nodes[i].visible = not muted and i==index
			if nodes[i].visible: nodes[i].material_override.set_shader_parameter("metronome_strength",exp(-fposmod(clock,.75)*4.))
	for row: Dictionary in mills.values():
		var age := fposmod(clock,3.); var node: MeshInstance3D = row.node
		node.visible = not muted and age<1.6
		if is_instance_valid(row.rotor): row.rotor.rotation.z = -clock*TAU/12.
		if node.visible:
			node.scale = Vector3.ONE*maxf(.2,.25+age*1.4)
			node.material_override.set_shader_parameter("metronome_strength",pow(1.-age/1.6,2.))
	_stations(clock)
	for row: Dictionary in flows:
		var age := clock-float(row.started); var node: MeshInstance3D = row.node
		node.visible = not muted and age>=0. and age<1.6
		if node.visible:
			node.material_override.set_shader_parameter("flow_phase",age/1.6)
			node.material_override.set_shader_parameter("metronome_strength",sin(PI*age/1.6))
func report() -> Dictionary:
	var indices := {}
	for id: String in courts: indices[id] = courts[id].index
	return {"clock":last_clock,"court_tiles":indices,"mills":mills.size(),"station_events":flow_events,"active_flows":flows.filter(func(row: Dictionary) -> bool: return row.node.visible).size()}

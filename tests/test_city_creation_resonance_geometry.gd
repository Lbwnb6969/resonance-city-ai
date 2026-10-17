extends SceneTree
const State = preload("res://scripts/world/city_creation_state.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
var checks := 0
var failures: Array[String] = []

func _initialize() -> void:
	_run.call_deferred()

func _check(value: bool, label: String) -> void:
	checks += 1
	if not value: failures.append(label)

func _ids(town) -> Dictionary:
	var result := {}
	for id: String in town.resonance.rigs:
		var row: Dictionary = town.resonance.rigs[id]
		result[id] = [row.mesh.get_instance_id(),row.mesh.mesh.get_instance_id(),row.material.get_instance_id(),row.arc.get_instance_id(),row.arc.mesh.get_instance_id(),row.pivot.get_instance_id()]
	return result

func _bodies(town) -> Dictionary:
	var result := {}
	for body: StaticBody3D in town.buildings.find_children("*","StaticBody3D",true,false): result[body.get_instance_id()] = body.global_transform
	return result

func _node_count(node: Node) -> int:
	var result := 1
	for child: Node in node.get_children(): result += _node_count(child)
	return result

func _expected_windows(city, town, house: Dictionary) -> int:
	var result := 0
	var entrances: Array = city.house_entrances(str(house.id))
	var passages: Array = city.house_passages(str(house.id))
	for cell: Dictionary in house.cells:
		if str(cell.kind) != "room": continue
		for side: Vector2i in [Vector2i.LEFT,Vector2i.RIGHT,Vector2i.UP,Vector2i.DOWN]:
			var neighbor: Dictionary = town._at(house.cells,int(cell.x)+side.x,int(cell.z)+side.y,int(cell.level))
			if not neighbor.is_empty() and str(neighbor.kind) == "room": continue
			var blocked := false
			if int(cell.level) == 0:
				for entry: Dictionary in entrances:
					if str(entry.cell_id) == str(cell.id) and entry.side == side: blocked = true
				for passage: Dictionary in passages:
					if str(passage.cell_id) != str(cell.id): continue
					var axis: Vector2i = passage.axis
					if abs(side.x) == abs(axis.x) and abs(side.y) == abs(axis.y): blocked = true
			if not blocked: result += 2
	return result

func _run() -> void:
	var city := State.new()
	city.initialize()
	var town := Renderer.new()
	root.add_child(town)
	town.setup(city)
	await physics_frame
	await physics_frame
	var ids := _ids(town)
	var bodies := _bodies(town)
	var node_count := _node_count(town)
	var arc_mesh_id := 0
	var all_ids: Array = []
	for house: Dictionary in city.houses:
		var id := str(house.id)
		all_ids.append(id)
		var row: Dictionary = town.resonance.rigs[id]
		_check(row.mesh.get_meta("windows").size() == _expected_windows(city,town,house),"all real window pairs prebuilt, excluding doors/interior: "+id)
		_check(not row.mesh.visible and not row.arc.visible,"fresh silent rigs hidden: "+id)
		_check(row.pivot.find_children("*","StaticBody3D",true,false).is_empty(),"picking bodies remain outside breathing pivot: "+id)
		_check(row.mesh.mesh.get_surface_count() == 1,"window, lantern, flag, note and garland share one batch: "+id)
		if arc_mesh_id == 0: arc_mesh_id = row.arc.mesh.get_instance_id()
		_check(row.arc.mesh.get_instance_id() == arc_mesh_id,"all arcs reuse one immutable ribbon mesh: "+id)
	var snapshot := {"audible":true,"clock_sec":4.0,"beat_pulse":1.0,"lead_id":"h1","venue_id":"h4","chorus_ids":all_ids,"ambient_ids":[],"concert_active":true,"phase":"playing","finale":false,"resonance_arcs":[{"from_id":"h4","to_id":"h1","strength":0.8}]}
	town.update_city_resonance_visuals(snapshot)
	for id: String in all_ids:
		var row: Dictionary = town.resonance.rigs[id]
		_check(row.weight >= 0.64 and row.mesh.visible,"every surrounding house responds, including unconnected right-bank home: "+id)
	_check(is_equal_approx(town.resonance.rigs.h1.pivot.scale.y,1.02),"lead has two percent visual-only breathing")
	_check(town.resonance.rigs.h1.arc.visible and town.resonance.wave.visible,"response arc and venue wave become visible")
	_check(_bodies(town) == bodies,"beat transform never changes physical picking")
	for frame in range(240):
		snapshot.clock_sec = frame*0.1
		snapshot.beat_pulse = (sin(frame*0.17)+1.0)*0.5
		snapshot.lead_id = all_ids[(frame/30)%all_ids.size()]
		snapshot.phrase = (frame/30)%8
		snapshot.finale = frame >= 210
		town.update_city_resonance_visuals(snapshot)
	_check(_ids(town) == ids,"240 actual clock/phrase/finale updates preserve every mesh, material, arc and pivot identity")
	_check(_node_count(town) == node_count,"clock, phrase and finale add/remove zero nodes")
	_check(town.resonance.build_count == city.houses.size(),"clock updates never rebuild a rig")
	snapshot.audible = false
	snapshot.afterglow = {"h1":60.0,"h6":20.0}
	town.update_city_resonance_visuals(snapshot)
	for id: String in all_ids:
		var row: Dictionary = town.resonance.rigs[id]
		_check(row.weight == 0.0 and float(row.material.get_shader_parameter("lead")) == 0.0,"mute removes all sound attribution: "+id)
		_check(not row.arc.visible and row.pivot.scale.y == 1.0,"mute stops arcs and visual body pulses: "+id)
		_check(float(row.material.get_shader_parameter("clock_sec")) == 0.0,"mute freezes all sound-driven rig motion: "+id)
	_check(town.resonance.rigs.h1.mesh.visible and town.resonance.rigs.h6.mesh.visible,"earned afterglow lanterns and flowers remain while muted")
	_check(not town.resonance.rigs.h2.mesh.visible and not town.resonance.wave.visible,"unearned houses and musical wave turn off on mute")
	_check(town.house_music_source.is_empty(),"legacy audible source clears on mute")
	_check(_ids(town) == ids and _node_count(town) == node_count,"mute and afterglow reuse fixed geometry")
	town.update_city_resonance_visuals({"lead_id":"h3","audible":true,"clock_sec":1.5,"beat_pulse":0.4})
	_check(town.house_music_source == "h3" and town.resonance.rigs.h3.weight == 1.0,"daily source uses the same prebuilt rig")
	_check(town.resonance.rigs.h1.weight == 0.0,"daily source switch clears previous source")
	var road_points: Array[Vector2] = [Vector2(7,3),Vector2(12,3)]
	var road_result: Dictionary = city.add_road(road_points)
	_check(bool(road_result.ok),"real road opens right-bank arch: "+str(road_result))
	town.rebuild()
	await physics_frame
	await physics_frame
	var after := _ids(town)
	for id: String in ids:
		if id != "h6": _check(after[id] == ids[id],"arch construction preserves unrelated rigs: "+id)
	var h6: Dictionary = city.houses[5]
	var windows: Array = town.resonance.rigs.h6.mesh.get_meta("windows",[])
	_check(windows.size() == _expected_windows(city,town,h6),"arch rebuild excludes newly open faces")
	for window: Dictionary in windows:
		_check(window.side != Vector2i.LEFT and window.side != Vector2i.RIGHT,"no glow window spans a real east-west arch hole")
	for lamp: Dictionary in town.resonance.rigs.h6.mesh.get_meta("arch_lanterns",[]):
		var opening: Dictionary = lamp.opening
		var lo := float(lamp.x)-float(lamp.width)*0.5
		var hi := float(lamp.x)+float(lamp.width)*0.5
		_check(hi < float(opening.offset)-float(opening.half_width) or lo > float(opening.offset)+float(opening.half_width),"arch afterglow lantern fits entirely on a real stone pier")
	town.update_city_resonance_visuals({"lead_id":"h6","audible":true,"beat_pulse":1.0})
	await physics_frame
	var ray := PhysicsRayQueryParameters3D.create(Vector3(6,0.6,3),Vector3(12,0.6,3))
	var hit := root.get_world_3d().direct_space_state.intersect_ray(ray)
	_check(hit.is_empty(),"breathing lead retains actual pass-through arch collision hole")
	var stats: Dictionary = town.resonance.diagnostics()
	_check(stats.rig_count == 6 and stats.build_count == 7,"one changed house rebuilds exactly one visual rig")
	print(JSON.stringify({"result":"PASS" if failures.is_empty() else "FAIL","checks":checks,"failures":failures,"fixed_node_count":node_count,"rigs":stats.rig_count,"builds":stats.build_count}))
	town.free()
	await process_frame
	quit(0 if failures.is_empty() else 1)

extends SceneTree
## Temporary-source timers preserve the actual implementation being profiled.
const State := preload("res://scripts/world/city_creation_state.gd")
const SOURCE := "res://备份/自发巡演前_20261015/额外道路输入实窗/城市作品快照.json"
const OLD := "res://废弃/长曲路性能_2026-10-15/city_creation_life.gd.txt"
const CURRENT := "res://scripts/world/city_creation_life.gd"

func _initialize() -> void: _run.call_deferred()

func _run() -> void:
	var source: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	for path: String in [OLD,CURRENT]:
		var script := _instrument(path)
		if script.reload()!=OK:
			quit(1)
			return
		var base := source.duplicate(true)
		base.roads=source.roads.slice(0,7).duplicate(true)
		base.next_road_id=8
		base.high_watermark.road=7
		base.journey_checkpoint={}
		for house: Dictionary in base.houses: house.auto_matinee=false
		var city := State.new()
		if not city.restore(base).ok:
			quit(1)
			return
		var life: Node3D = script.new()
		root.add_child(life)
		life.set_process(false)
		life.setup(city)
		for road: Dictionary in source.roads.slice(7):
			var points: Array[Vector2]=[]
			for value: Array in road.points: points.append(Vector2(float(value[0]),float(value[1])))
			if not city.add_road(points).ok:
				quit(1)
				return
			life.network_profile.clear()
			var started := Time.get_ticks_usec()
			life._sync()
			print("NETWORK_PROFILE ",JSON.stringify({"source":path,"road":road.id,"total_ms":(Time.get_ticks_usec()-started)/1000.0,"stages":life.network_profile}))
		life.free()
	print("CITY_CREATION_NETWORK_PROFILE PASS")
	quit()

func _instrument(path: String) -> GDScript:
	var text := FileAccess.get_file_as_string(path).replace("\r\n","\n").replace("class_name CityCreationLife","")
	text=text.replace("extends Node3D","extends Node3D\nvar network_profile: Dictionary = {}")
	text=text.replace("func _build_graph() -> void:\n","func _build_graph() -> void:\n\tvar profile_start := Time.get_ticks_usec()\n\tvar profile_section := profile_start\n")
	text=text.replace("\tvar connectors: Array[Dictionary] = []",_timer("raw_segments")+"\tvar connectors: Array[Dictionary] = []")
	text=text.replace("\tsegments.append_array(connectors)",_timer("segment_pairs")+"\tnetwork_profile.raw_segments=segments.size()\n\tnetwork_profile.connectors=connectors.size()\n\tsegments.append_array(connectors)")
	text=text.replace("\tsegments.append_array(door_links)",_timer("door_candidates")+"\tsegments.append_array(door_links)")
	text=text.replace("\tvar components: Dictionary = {}",_timer("weighted_edges")+"\tvar components: Dictionary = {}")
	text=text.replace("\nfunc _route(start:","\n"+_timer("components")+"\tnetwork_profile.graph_total=(Time.get_ticks_usec()-profile_start)/1000.0\n\nfunc _route(start:")
	text=text.replace("func _route(start:","func _profile_route(start:")
	text=text.replace("func _route_from_position(point:","func _profile_route_from_position(point:")
	text+="\nfunc _route(start: String,finish: String) -> Array[Vector3]:\n\tvar started := Time.get_ticks_usec()\n\tvar result := _profile_route(start,finish)\n\tnetwork_profile.route_ms=float(network_profile.get(\"route_ms\",0.0))+(Time.get_ticks_usec()-started)/1000.0\n\tnetwork_profile.route_calls=int(network_profile.get(\"route_calls\",0))+1\n\treturn result\n"
	text+="\nfunc _route_from_position(point: Vector3,finish: String) -> Array[Vector3]:\n\tvar started := Time.get_ticks_usec()\n\tvar result := _profile_route_from_position(point,finish)\n\tnetwork_profile.attachment_ms=float(network_profile.get(\"attachment_ms\",0.0))+(Time.get_ticks_usec()-started)/1000.0\n\tnetwork_profile.attachment_calls=int(network_profile.get(\"attachment_calls\",0))+1\n\treturn result\n"
	var script := GDScript.new()
	script.source_code=text
	return script

func _timer(label: String) -> String:
	return "\tnetwork_profile.%s=(Time.get_ticks_usec()-profile_section)/1000.0\n\tprofile_section=Time.get_ticks_usec()\n"%label

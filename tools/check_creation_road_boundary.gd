extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
func _initialize()->void:run.call_deferred()
func run()->void:
	var fixture:="res://验证记录/自由曲路接缝_2026-10-20/只读试玩副本.json"
	if not FileAccess.file_exists(fixture):fixture="res://数据/四库共鸣交响大城样例.json"
	var city:=State.new()
	var restored:Dictionary=city.restore(JSON.parse_string(FileAccess.get_file_as_string(fixture)))
	if not restored.ok:push_error(str(restored));quit(1);return
	var town:=Renderer.new();town.state=city;city.prepare_ground_height();town._prepare_road_layout()
	for road:Dictionary in city.roads:
		var groups:Array=[town.road_outlines[road.id]]
		for other:Dictionary in city.roads:
			if other.id!=road.id and town._roads_touch(road,other):groups.append(town.road_outlines[other.id])
		var edges:Array=town.path_edge._exposed_segments(groups)
		var counts:Dictionary={};var positions:Dictionary={}
		for edge:Array in edges:
			var a:Vector2i=town.path_edge._key(edge[0]);var b:Vector2i=town.path_edge._key(edge[1])
			counts[a]=int(counts.get(a,0))+1;counts[b]=int(counts.get(b,0))-1;positions[a]=edge[0];positions[b]=edge[1]
		var dangling:Array=[]
		for key:Vector2i in counts:
			if counts[key]!=0:dangling.append([positions[key],counts[key]])
		print("BOUNDARY ",road.id," groups=",groups.size()," segments=",edges.size()," contours=",town.path_edge._boundary_contours(edges).size()," dangling=",dangling)
	for component:Node in [town.shore,town.lilypads,town.wildlife]:component.free()
	town.free();quit()

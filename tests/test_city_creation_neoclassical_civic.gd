extends RefCounted
const Fixture = preload("res://tools/fixtures/city_creation_civic_fixture.gd")
const Plan = preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd")
static func run(tree: SceneTree, check: Callable) -> void:
	var fixture := Fixture.build(); var city: RefCounted = fixture.city
	var before: Dictionary = city.snapshot(); var courts: Array = city.courtyard_plans()
	check.call(courts.size()==1 and courts[0].tiles.size()==4,"real four-tile closed courtyard")
	var renderer := preload("res://scripts/visual/city_creation_renderer.gd").new()
	tree.root.add_child(renderer); renderer.state=city; renderer.buildings=Node3D.new(); renderer.add_child(renderer.buildings)
	for node in [renderer.shore,renderer.lilypads,renderer.wildlife]: renderer.add_child(node)
	var arches := 0; var terraces := 0; var galleries := 0
	for id: String in fixture.court_ids+fixture.hall_ids+fixture.studio_ids:
		var house: Dictionary = city.houses.filter(func(h):return str(h.id)==id)[0]
		var built: Node3D = renderer._house(house)
		if id in fixture.court_ids:
			for node: Node3D in built.find_children("*","Node3D",true,false):
				if node.get_meta("civic_archetype","")=="peristyle": arches+=1
				if node.has_meta("peristyle_terrace"):
					terraces+=1; check.call(is_equal_approx(node.position.y,1.7),"upper gallery belongs to actual second floor")
			galleries+=built.get_meta("arcade_faces",[]).filter(func(f):return f.source=="peristyle_terrace").size()
		if id in fixture.hall_ids:
			var hall: Node3D = built.get_node_or_null("PedimentedGuildhall")
			check.call(hall!=null and hall.has_node("GuildhallRaisedNave") and hall.find_children("GuildhallRoofPick","CollisionShape3D",true,false).size()==1,"public role has true raised hall, side roofs and roof picking")
			check.call(not Plan.guild(city,house).is_empty(),"public footprint supports roof recipe")
			var top: MeshInstance3D = hall.get_node("GuildhallRaisedNave")
			check.call(top.mesh.get_aabb().size.y>.5,"central nave is a raised solid volume")
		if id in fixture.studio_ids:
			var dome: Node3D = built.find_children("RenaissanceDome_*","Node3D",true,false)[0]
			check.call(dome.get_meta("civic_archetype","")=="rotunda" and dome.find_children("RotundaColumn*","MeshInstance3D",true,false).size()==12,"atelier has twelve actual columns and a separate roof lantern")
			check.call(dome.has_node("RotundaStoneStylobate") and dome.find_children("RotundaDrumPick","CollisionShape3D",true,false).size()==1,"stone drum has stable picking bound")
		var paper := 0; var finite := true
		for mesh: MeshInstance3D in built.find_children("*","MeshInstance3D",true,false):
			if mesh.material_override.get_meta("creation_wall",false): paper+=1
			for vertex: Vector3 in mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]: finite=finite and vertex.is_finite()
		check.call(paper>10 and finite,"civic structures share paper/AO and finite geometry")
		built.free()
	var expected := 0
	for id: String in fixture.court_ids:
		var house: Dictionary = city.houses.filter(func(h):return str(h.id)==id)[0]
		expected+=preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(city,house).filter(func(f):return f.source=="courtyard").size()
	check.call(arches==expected and arches>0 and terraces==arches and galleries==terraces,"every planned inward colonnade has matching upper terrace; real passage remains open")
	check.call(city.snapshot()==before and city.courtyard_plans()==courts,"civic derivation leaves authored world and acoustic courtyard unchanged")
	var life := preload("res://scripts/world/city_creation_life.gd").new(); tree.root.add_child(life); life.set_process(false); life.setup(city)
	var start: String = life.connected_houses.get(fixture.court_ids[0],""); var finish: String = life.connected_houses.get(fixture.court_ids[2],"")
	print("CIVIC_GRAPH ",life.connected_houses," from ",start," to ",finish)
	check.call(not start.is_empty() and not finish.is_empty() and life._route(start,finish).size()>=2,"real court approach links both occupied homes through production route graph")
	life.free()
	var loaded := Fixture.State.new();check.call(loaded.restore(JSON.parse_string(JSON.stringify(before,"",true,true))).ok and loaded.snapshot()==before,"all civic appearances roundtrip without new saved fields")
	renderer.free()

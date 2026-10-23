extends SceneTree
const Neo = preload("res://scripts/visual/city_creation_neoclassical.gd")
const Renderer = preload("res://scripts/visual/city_creation_renderer.gd")
const Fixture = preload("res://tools/fixtures/city_creation_neoclassical_fixture.gd")
const State = Fixture.State
var checks := 0
var failures: Array[String] = []
func _initialize() -> void: run.call_deferred()
func check(ok: bool, label: String) -> void:
	checks += 1
	if not ok: failures.append(label); push_error(label)
func run() -> void:
	var city := Fixture.city(); var saved: Dictionary = city.snapshot()
	check(city.houses.size()==10 and city.era_unlocks.has("renaissance") and city.house_era(city.houses[-1])=="renaissance", "validated historical rights allow both eligible eras")
	var renderer := Renderer.new(); renderer.state=city; root.add_child(renderer); renderer.buildings=Node3D.new(); renderer.add_child(renderer.buildings); renderer.add_child(renderer.shore); renderer.add_child(renderer.lilypads); renderer.add_child(renderer.wildlife)
	var palette: Array = [Color("e6d6b9"),Color("b8694c"),Color("6f8168")]
	var silhouettes := {}
	for index in [0,1,2,3,4,5]:
		var house: Dictionary = city.houses[index+4]
		var node: Node3D = renderer._house(house)
		var marks: Array = node.find_children("*","Node3D",true,false).filter(func(n):return n.has_meta("neoclassical_kind"))
		check(not marks.is_empty(),"production assembly has derived facade: "+str(house.id))
		var porticoes := 0; var oriels := 0; var tiers := {}; var doorway_clear := true
		for mark: Node3D in marks:
			var level := int(mark.get_meta("story")); tiers[level]=true
			if mark.has_meta("portal_clear_width"):
				porticoes += 1
				for mesh: MeshInstance3D in mark.find_children("*","MeshInstance3D",true,false):
					var box: AABB = mesh.transform*mesh.mesh.get_aabb()
					if box.position.x<.36 and box.end.x>-.36 and box.position.y<1.24 and box.end.y>.31: doorway_clear=false
			if mark.has_node("OrielProjection"):
				oriels+=1
				var bay := mark.get_node("OrielProjection")
				check(level>0 and bay.find_children("OrielPick","CollisionShape3D",true,false).size()==1,"bay is above pedestrians and has actual Box pick")
			check(level==0 or not mark.has_meta("portal_clear_width"),"no upper floor copies a ground portico")
		check(doorway_clear,"actual portico mesh leaves doorway clear")
		if index in [0,1,3,4]: check(porticoes>0 and oriels==0,"cottage or row has ground porticoes and no fictitious corner")
		else: check(tiers.has(1) and tiers.has(2) and tiers.has(3) and (tiers.has(0) or not node.get_meta("arcades",[]).is_empty()) and porticoes==0 and oriels==3,"four-storey real street corner has exactly three upstairs bays")
		print("NEO_SHAPE ",house.id," tiers ",tiers.keys()," porticoes ",porticoes," oriels ",oriels)
		var structural := 0
		for mesh: MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			var m: Material = mesh.material_override
			if m.get_meta("creation_wall",false): structural+=1
			if mesh.name in ["PorticoPedimentFace0","PorticoPedimentFace2"]:
				var normals: PackedVector3Array = mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_NORMAL]
				var outward := Vector3(0,0,1) if mesh.name=="PorticoPedimentFace0" else Vector3(0,-1,0)
				check(normals.size()>0 and Array(normals).all(func(n):return n.dot(outward)>.99),"pediment front/underside faces retain outward planar normals")
		check(structural>10,"structural sources opt into shared paper/AO pipeline")
		silhouettes[index]=node.find_children("*","MeshInstance3D",true,false).size()
		preload("res://scripts/visual/city_creation_mesh_batcher.gd").new().merge(node)
		var batches := 0; var finite := true
		for mesh: MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			if mesh.material_override.get_meta("creation_wall_batch",false):
				batches+=1; check(float(mesh.material_override.get_shader_parameter("micro_normal_strength"))>0,"batch retains real micro-normal")
			for point: Vector3 in mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]: finite=finite and point.is_finite()
		check(batches>0 and finite,"published meshes finite and paper shaded")
		node.free()
	check(silhouettes[0]!=silhouettes[1] and silhouettes[1]!=silhouettes[2],"single, row and tall corner are geometrically distinct")
	var corner: Dictionary = city.houses[6]; var cell: Dictionary = corner.cells[1]
	check(Neo.corner_sides(city,corner,cell).size()==2,"two perpendicular real streets create corner")
	var roads: Array = city.roads.duplicate(true); city.roads.pop_back()
	check(Neo.corner_sides(city,corner,cell).is_empty(),"single street never fabricates oriel corner")
	city.roads.assign(roads)
	check(city.snapshot()==saved,"derivation and batching leave complete world unchanged")
	var loaded:=State.new();check(loaded.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and loaded.snapshot()==saved,"full JSON roundtrip preserves derived selection without new fields")
	var before: Array = city.houses.duplicate(true); city.add_cell(str(city.houses[4].id),0,0,1)
	check(Neo.floors(city.houses[4],city.houses[4].cells[0])==2,"adding floor changes actual cottage hierarchy")
	city.undo();check(city.houses==before and Neo.floors(city.houses[4],city.houses[4].cells[0])==1,"undo returns exact cottage geometry recipe")
	city.redo();check(Neo.floors(city.houses[4],city.houses[4].cells[0])==2,"redo reinstates townhouse hierarchy")
	check(not Neo.eligible({},"pastoral","timber") and not Neo.eligible({"signature":"bell_keep"},"pastoral","classic") and not Neo.eligible({},"modern_eco","classic"),"timber, landmark and other eras retain their own shapes")
	preload("res://tests/test_city_creation_neoclassical_civic.gd").run(self,check)
	print("NEOCLASSICAL ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	renderer.free(); quit(0 if failures.is_empty() else 1)

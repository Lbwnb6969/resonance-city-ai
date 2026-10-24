extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_clockwork_prototypes_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Choice=Fixture.Choice
const Clock=preload("res://scripts/visual/city_creation_clockwork.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var fixture:=Fixture.build();var city:RefCounted=fixture.city;var signatures:Array=[]
	var r:=Renderer.new();r.state=city;root.add_child(r);r.buildings=Node3D.new();r.add_child(r.buildings)
	for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	var before:Dictionary=city.snapshot()
	for kind:String in fixture.groups:
		for id:String in fixture.groups[kind]:
			var house:Dictionary=city.houses[city._house_index(id)]
			check(Choice.choices(city,house)==Choice.CLOCKWORK,"all four prototypes remain selectable for actual house "+id)
			var records:Array=Clock.prepare(city,house)
			check(not records.is_empty() and records.all(func(row):return row.prototype==kind),"worker prepares the selected recipe "+id)
			var built:Node3D=r._house(house);var parts:Array=[]
			check(built.get_meta("prototype_caption","")==Choice.label(kind),"published actual four-character caption "+kind)
			check(built.get_meta("clockwork_prototypes",[]).size()==records.size(),"each exposed roof receives selected geometry "+id)
			var picks:Array=built.find_children("ClockworkPrototypePick","CollisionShape3D",true,false)
			check(picks.size()==records.size() and picks.all(func(node):return node.shape is BoxShape3D and node.shape.size.x>0. and node.shape.size.y>0.),"lightweight positive roof pick boxes "+id)
			var finite:=true;var shaded:=true
			for mesh:MeshInstance3D in built.find_children("*","MeshInstance3D",true,false):
				var box:=mesh.mesh.get_aabb();finite=finite and box.position.is_finite() and box.size.is_finite() and mesh.transform.origin.is_finite()
				if mesh.get_parent().name.begins_with("ClockworkPrototype_") and mesh.material_override is StandardMaterial3D:shaded=shaded and bool(mesh.material_override.get_meta("creation_wall",false))
				parts.append([mesh.name,mesh.transform,box])
			check(finite and shaded,"finite component geometry retains contact-AO wall sources "+id)
			if id==fixture.groups[kind][0]:signatures.append(hash(parts))
			if kind=="sawtooth_atrium":check(built.find_children("SawtoothGlazing*","MeshInstance3D",true,false).size()==records.size()*3,"real three-tooth glazed profile")
			if kind=="clock_turret":check(built.find_children("RomanClockFace*","Node3D",true,false).size()==4,"one eight-sided copper turret has four actual Roman dials")
			if kind=="iron_conservatory":check(built.find_children("BarrelGlazing*","MeshInstance3D",true,false).size()==records.size()*14,"real arched glazing replaces opaque cylinder")
			if kind=="guild_arcade":check(not built.find_children("GroundBrickArcade","Node3D",true,false).is_empty(),"actual ground-level red-brick arcade")
			built.free()
	check({signatures[0]:true,signatures[1]:true,signatures[2]:true,signatures[3]:true}.size()==4,"four different complete mesh silhouettes")
	check(city.snapshot()==before,"rendering and prepared recipes never mutate authored city")
	var fresh:=Fixture.State.new();var restored:Dictionary=fresh.restore(JSON.parse_string(JSON.stringify(before,"",true,true)))
	check(restored.ok and fresh.snapshot()==before,"full Schema19 JSON roundtrip of all four explicit recipes")
	if not restored.ok or fresh.snapshot()!=before:
		print("ROUNDTRIP_DIAGNOSTIC ",restored)
		FileAccess.open("res://验证记录/M35/before.json",FileAccess.WRITE).store_string(JSON.stringify(before,"\t",true,true))
		FileAccess.open("res://验证记录/M35/after.json",FileAccess.WRITE).store_string(JSON.stringify(fresh.snapshot(),"\t",true,true))

	var id:String=fixture.groups.sawtooth_atrium[0];var home:Dictionary=city.houses[city._house_index(id)].duplicate(true)
	check(city.set_house_architecture(id,"clock_turret").ok,"public prototype replacement")
	check(city.undo().ok and city.houses[city._house_index(id)]==home,"native undo restores complete prior house")
	check(city.redo().ok and city.houses[city._house_index(id)].architecture=="clock_turret","native redo restores chosen prototype")
	check(city.set_house_architecture(id,"").ok and Clock.prepare(city,city.houses[city._house_index(id)]).all(func(row):return not row.has("prototype")),"return to original automatic mansard without resetting old works")
	var bad:Dictionary=before.duplicate(true);bad.houses[0].architecture="invented_clock"
	var empty:=Fixture.State.new();var snapshot:Dictionary=empty.snapshot()
	check(not empty.restore(bad).ok and empty.snapshot()==snapshot,"unknown recipe rejects atomically")
	r.free();print("CLOCKWORK_PROTOTYPES ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)

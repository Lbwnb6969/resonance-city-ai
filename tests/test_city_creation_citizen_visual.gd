extends SceneTree
const Visual=preload("res://scripts/visual/city_creation_citizen_visual.gd")
const Props=preload("res://scripts/visual/city_creation_citizen_props.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var signatures:Dictionary={}
	for role:String in ["resident","bakery","workshop","atelier","clockmaker"]:
		var a:=Visual.person(0);var b:=Visual.person(0);root.add_child(a);root.add_child(b);Visual.identify(a,role);Visual.identify(b,role)
		var mesh:MeshInstance3D=a.get_child(0).get_child(0);var other:MeshInstance3D=b.get_child(0).get_child(0)
		check(mesh.mesh==other.mesh and mesh.material_override==other.material_override,"shared complete body mesh and paper material "+role)
		signatures[role]=mesh.mesh.get_aabb()
		for kind:String in ["bread","workshop","atelier","clockmaker","lantern","cup",""]:
			Visual.hand(a,kind,1.)
			var visible:=0
			for node:MeshInstance3D in a.find_children("*","MeshInstance3D",true,false):
				if node.is_visible_in_tree() and node.mesh!=null:visible+=1
			check(visible<=2,"body plus held prop stay within original two draws "+role+"/"+kind)
		a.free();b.free()
	check(signatures.clockmaker.end.y>signatures.resident.end.y and signatures.bakery.size.x>signatures.resident.size.x,"actual brim and top-hat change silhouette")
	for role:String in ["workshop","atelier","clockmaker"]:
		var city:RefCounted=preload("res://tests/test_city_creation_clockmaker.gd").fixture();check(city.set_house_role("h2",role).ok,"earned role switch "+role)
		var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
		var worker:Dictionary=life.workshop.workers[0]
		for i in range(3000):
			if worker.phase=="to_target":break
			life._process(.05)
		check(worker.phase=="to_target" and worker.carry.visible and not city.workshop_status("h2").transit.is_empty(),"actual produced/reserved cargo drives visible prop "+role)
		check(worker.carry.get_child_count()==1 and worker.carry.get_child(0).mesh==Visual.prop_mesh(role),"typed cargo uses one shared merged mesh "+role)
		life.free()
	var city:=State.new();city.initialize();var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var carried:=false
	for i in range(4000):
		life._process(.05)
		for row:Dictionary in life.residents:
			if row.node.get_meta("citizen_prop","")=="bread":carried=true
		if carried:break
	check(carried and int(city.life_progress.purchases)>0,"real served bread appears in the shopper hand")
	var before:Dictionary=city.snapshot();Visual.hand(life.residents[0].node,"lantern");check(city.snapshot()==before,"visual prop changes leave full city unchanged")
	life.free();print("CITIZEN_VISUAL ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"mesh_pool":Visual.meshes.size(),"material_pool":Visual.materials.size()}));quit(0 if failures.is_empty() else 1)

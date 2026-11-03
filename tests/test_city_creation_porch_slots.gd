extends "res://tests/test_city_creation_gable_trim_slots.gd"
const PorchSites=preload("res://scripts/world/city_creation_porch_sites.gd")
const Porch=preload("res://scripts/visual/city_creation_porch_details.gd")
static func porch_fixture(era:String="pastoral",yaw:float=0.)->RefCounted:
	var city:RefCounted=fixture(era,yaw);city.set_house_architecture_variant("h1","timber_shutters");city.set_house_dormer("h1","gable_light");city.set_house_chimney("h1","brick_twin_pots");city.set_house_architecture_variant("h1","timber_verge","gable_trim");return city
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	for era:String in ["pastoral","renaissance"]:
		for key:String in Choice.PORCHES:
			var city:RefCounted=porch_fixture(era,.4);var original:Dictionary=city.snapshot();var doors:Array=city.house_entrances("h1").duplicate(true)
			check(city.set_house_architecture_variant("h1",key,"porch").ok,"explicit porch recipe "+era+key);var source:Dictionary=city.snapshot();var made:=build(city);var data:Dictionary=made.house.get_meta("porch_detail",{});print("PORCH_SITES ",era," ",key," count=",data.get("sites",[]).size())
			check(data.get("active",false) and not data.get("sites",[]).is_empty(),"actual completed mother has supported clear porch micro scenery")
			porch_geometry(made.house)
			check(city.snapshot()==source and city.house_entrances("h1")==doors and city.houses[0].seed==original.houses[0].seed,"read-only porch derivation leaves author, seed and exact original entries unchanged")
			for slot:String in ["windows","dormer","chimney","gable_trim"]:check(Choice.record(city.houses[0],slot)==Choice.record(original.houses[0],slot),"new porch preserves old "+slot+" identity")
			made.house.free();made.r.free()
	porch_history(out)
	porch_clearance()
	var geometry:=build(porch_fixture());var renderer=geometry.r;var natural:Material=Porch.timber(renderer,Color("77543c"));var painted:Material=preload("res://scripts/visual/city_creation_wall_material.gd").source(Color("77543c"),null,"component",5);var wall=preload("res://scripts/visual/city_creation_wall_material.gd");check(wall.profile(natural,0.,1.7)!=wall.profile(painted,0.,1.7) and wall.profile(natural,0.,1.7)[9]==5,"fixed natural wood has a distinct physical batch identity from an identical painted author RGB");geometry.house.free();renderer.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PORCH_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func porch_geometry(house:Node3D)->void:
	var finite:=true;var fit:=true;var triangles:=0;var normals_correct:=true
	for node:Node3D in house.find_children("PorchSite*","Node3D",true,false):
		var inverse:=node.global_transform.affine_inverse()
		for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
			var transform:=inverse*mesh.global_transform;var faces:=mesh.mesh.get_faces();triangles+=faces.size()/3;var arrays:Array=mesh.mesh.surface_get_arrays(0);var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX];var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
			for i in range(0,faces.size(),3):
				var n:Vector3=(faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]);finite=finite and faces[i].is_finite() and n.length_squared()>1e-12;normals_correct=normals_correct and normals[indices[i] if not indices.is_empty() else i].dot(-n.normalized())>.90
			for p:Vector3 in faces:
				var at:=transform*p;fit=fit and absf(at.x)<=PorchSites.HALF.x+.001 and absf(at.z)<=PorchSites.HALF.y+.001 and at.y>=-.001 and at.y<=PorchSites.HEIGHT+.001
	check(triangles>0 and finite,"actual pot or split wood triangles are finite, nondegenerate solids")
	check(fit,"every real decorative vertex stays inside the verified full footprint and height envelope")
	check(normals_correct,"merged ceramic, foliage, wooden crate and log faces retain matching outward normals and clockwise winding")
func porch_history(out:String)->void:
	var city:RefCounted=porch_fixture();var old:Dictionary=city.snapshot();var path:=out+"/work.json";check(city.save_city(path).ok,"original four-slot schema29 saves before porch adoption");var raw:=FileAccess.get_file_as_bytes(path)
	check(city.set_house_architecture_variant("h1","flower_pots","porch").ok and city.snapshot().schema==30 and Choice.valid(city.houses[0].architecture_variant),"explicit fifth slot adopts strictly valid schema30")
	var saved:Dictionary=city.snapshot();var seed_value:int=Choice.record(city.houses[0],"porch").seed;var reader:=Fixture.State.new()
	check(city.save_city(path).ok and reader.load_city(path).ok and reader.snapshot()==saved and FileAccess.get_file_as_bytes(out+"/废弃/城市存档/work.json.previous")==raw,"actual atomic save preserves original schema29 file and exact five-slot disk cold read")
	var revision:int=city.revision;check(city.set_house_architecture_variant("h1","flower_pots","porch").no_op and city.revision==revision,"repeating porch choice writes no history")
	check(city.set_house_architecture_variant("h1","firewood_crate","porch").ok and Choice.record(city.houses[0],"porch").seed==seed_value and city.undo().ok and city.houses==saved.houses and city.redo().ok,"porch choices preserve independent seed and native history")
	check(city.restore(saved).ok and city.set_house_architecture_variant("h1","","porch").ok and city.snapshot().schema==29 and city.houses==old.houses,"original porch restores exact four-slot schema29 authorship")
	var empty:Dictionary=reader.snapshot()
	for schema:int in [25,27,28,29]:
		var bad:Dictionary=saved.duplicate(true);bad.schema=schema;check(not reader.restore(bad).ok and reader.snapshot()==empty,"old schema cannot carry a fifth slot")
	for change:Callable in [func(d):d.version=true,func(d):d.version=2,func(d):d.seed=true,func(d):d.seed=-1,func(d):d.seed=.5,func(d):d.seed=2147483648,func(d):d.prototype="tiled_street",func(d):d.id="missing",func(d):d.extra=0]:
		var bad:Dictionary=saved.duplicate(true);change.call(bad.houses[0].architecture_variant.slots.porch);check(not reader.restore(bad).ok and reader.snapshot()==empty,"malformed porch data rejects atomically")
	city.restore(saved);var brush=preload("res://scripts/world/city_creation_build_brush.gd");check(brush.sample(city,"h1").ok and city.add_house_stroke(Vector2(-21,-20),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok and city.houses[-1].architecture_variant==city.houses[0].architecture_variant,"public appearance sampling carries all five independently versioned slots")
	city.houses[-1].architecture_variant.slots.porch.id="firewood_crate";check(Choice.porch(city.houses[0])=="flower_pots","sampled porch author record is a deep copy")
	check(city.restore(saved).ok and city.set_house_architecture("h1","rotunda").ok,"changing mother preserves dormant porch intent");var made:=build(city);check(not made.house.has_meta("porch_detail") and Choice.porch(city.houses[0])=="flower_pots","incompatible mother does not publish doorway clutter");made.house.free();made.r.free()
	check(city.set_house_architecture("h1","recessed_townhouse").ok,"return to compatible mother retains porch choice");made=build(city);check(made.house.get_meta("porch_detail",{}).get("active",false),"real porch returns after supported mother is restored");made.house.free();made.r.free()
	city.restore(saved);check(city.set_house_architecture_variant("h1","").ok and city.set_house_dormer("h1","").ok and city.set_house_chimney("h1","").ok and city.set_house_architecture_variant("h1","","gable_trim").ok and Choice.porch(city.houses[0])=="flower_pots","clearing each older slot independently retains the fifth")
	check(city.set_house_architecture_variant("h1","","porch").ok and not city.houses[0].has("architecture_variant"),"last clear returns old absent-field format")
	var legacy:=Fixture.State.new();legacy.initialize();legacy.set_house_architecture("h1","townhouse");check(legacy.set_house_architecture_variant("h1","firewood_crate","porch").ok and legacy.save_city(out+"/legacy.json").ok and reader.load_city(out+"/legacy.json").ok and not reader.CreationPolicy.is_free(reader),"actual legacy porch saves and cold reads without adopting free policy")
	city.restore(saved);var cutoff:Dictionary=city.harmony_journey.duplicate(true);var epoch:Dictionary=city.cozy_progression.duplicate(true);city.set_house_architecture_variant("h1","firewood_crate","porch");check(city.harmony_journey==cutoff and city.cozy_progression==epoch,"porch authoring leaves old cutoff and optional economy ledger unchanged")
static func road_beside(city,x:float)->Dictionary:return city.add_road([Vector2(x,-18.3),Vector2(x,-16.)] as Array[Vector2],"path","none",1.25)
func site_count(city)->int:
	var made:=build(city);var count:int=made.house.get_meta("porch_detail",{}).get("sites",[]).size();made.house.free();made.r.free();return count
func porch_clearance()->void:
	var city:RefCounted=porch_fixture();city.set_house_architecture_variant("h1","flower_pots","porch");var old:Dictionary=city.snapshot();var signature:=hash(PorchSites.signature(city,city.houses[0]));check(site_count(city)==2,"actual clear doorway supports both side clusters")
	var road:=road_beside(city,-28.77);print("PORCH_ROAD ",road);check(road.ok and site_count(city)==1,"a legal full-width approach beside the door masks its whole side cluster")
	check(hash(PorchSites.signature(city,city.houses[0]))!=signature,"road-side masking participates in the actual geometry dependency signature")
	road=road_beside(city,-27.23);check(road.ok and site_count(city)==0 and Choice.porch(city.houses[0])=="flower_pots","two actual side approaches leave no scenery while retaining author intent")
	check(city.undo().ok and site_count(city)==1 and city.undo().ok and site_count(city)==2,"removing approaches through native history restores exact usable clusters")
	city.restore(old);var water:Dictionary=city.add_water([Vector2(city.river_x(-18.3),-18.3),Vector2(-30.5,-18.3)] as Array[Vector2],1.2,"channel");print("PORCH_WATER ",water);check(water.ok and site_count(city)==0,"a legal near-door water channel rejects every unsupported or wet side candidate")
	check(city.undo().ok and site_count(city)==2,"water removal restores dry supported scenery")
	city.restore(old);var neighbor:Dictionary=city.add_house_stroke(Vector2(-29.8,-18.2),[{"x":0,"z":0,"level":0,"kind":"room"}]);print("PORCH_NEIGHBOR ",neighbor);check(neighbor.ok and site_count(city)==1,"actual close diagonal neighboring room masks intersecting porch envelopes")
	check(city.undo().ok and site_count(city)==2,"removing the real neighboring room restores side clearance")
	for role:String in ["bakery","workshop","garden_cafe","venue"]:
		city.restore(old);var result:Dictionary=city.set_house_role("h1",role)
		check(result.ok,"actual public "+role+" assignment")
		var made:=build(city);var data:Dictionary=made.house.get_meta("porch_detail",{});check(data.has("sites"),"actual "+role+" frontage is inspected after its original role props");made.house.free();made.r.free()
	city=grill_fixture();var made:=build(city);check(made.house.has_meta("grill_supply_transform") and made.house.get_meta("porch_detail",{}).get("active",false),"actual charcoal grill and clear porch publish together without mistaking hidden smoke for a solid");made.house.free();made.r.free()
	check(city.remove_road("r1").ok and site_count(city)==2,"without the street, the hidden smoke sphere cannot suppress the clear second site beyond the real grill")
	var ordinary:=Fixture.State.new();ordinary.initialize_free();preload("res://scripts/world/city_creation_build_brush.gd").select(ordinary,"pastoral","townhouse");ordinary.add_house(Vector2(-28,-20));ordinary.set_house_architecture_variant("h1","firewood_crate","porch");check(site_count(ordinary)>0,"original one-room townhouse finds an actual unobstructed site beyond its lower facade details")
static func grill_fixture()->RefCounted:
	var city:=Fixture.State.new();city.initialize_free();var brush=preload("res://scripts/world/city_creation_build_brush.gd");brush.select(city,"pastoral","recessed_townhouse");city.add_house(Vector2(-28,-20));city.set_house_food_kind("h1",city.Grillhouse.KIND);city.add_house(Vector2(-32,-20));city.set_house_role("h2","residential");city.add_road([Vector2(-34,-17.86),Vector2(-25,-17.86)] as Array[Vector2],"path","none");city.set_house_architecture_variant("h1","flower_pots","porch");return city

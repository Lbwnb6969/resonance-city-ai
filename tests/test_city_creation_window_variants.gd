extends "res://tests/test_city_creation_layered_windows.gd"
const Variants=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var geometry:Array=[]
	for era:String in ["pastoral","renaissance"]:
		for id:String in Variants.IDS:
			var f:=Fixture.build(era,.4);var city:RefCounted=f.city;var prior:Dictionary=city.snapshot();var entries:Array=city.house_entrances("h1")
			check(city.set_house_architecture_variant("h1",id).ok,"public variant transaction "+era+id)
			var expected:Dictionary=prior.houses[0].duplicate(true);expected.architecture_variant={"version":1,"prototype":Variants.PROTOTYPE,"windows":id,"seed":city.houses[0].architecture_variant.seed}
			check(city.houses[0]==expected and city.house_entrances("h1")==entries,"only authored detail field changes; seed, rooms, old colors and entries remain")
			var rev:int=city.revision;check(city.set_house_architecture_variant("h1",id).no_op and city.revision==rev,"repeat choice is a true no-op")
			var saved:Dictionary=city.snapshot();var reader:=Fixture.State.new();check(saved.schema==25 and reader.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and reader.snapshot()==saved,"schema25 full JSON canonical roundtrip")
			var built:=build(city);var marked:=0;var clear:=true;var bounds:=true;var finite:=true;var signature:Array=[]
			for wall:Node3D in built.house.find_children("*","Node3D",true,false):
				if not wall.has_meta("layered_window"):continue
				marked+=1;clear=clear and decoration_clear(wall)
				for mesh:MeshInstance3D in wall.find_children("*","MeshInstance3D",true,false):
					var transform:Transform3D=wall.global_transform.affine_inverse()*mesh.global_transform
					var faces:=mesh.mesh.get_faces()
					for i in range(0,faces.size(),3):finite=finite and (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()>1e-12 and faces[i].is_finite()
					if not str(mesh.get_parent().name).begins_with("VariantShutter") and not str(mesh.name).begins_with("VariantStonePediment"):continue
					for point:Vector3 in faces:
						var p:Vector3=transform*point;bounds=bounds and absf(p.x)<=.81 and p.z<=.211 and p.y<1.48;signature.append(p)
			check(marked==(4 if era=="renaissance" else 7) and clear and finite,"actual variant geometry has clear four-layer apertures and no degenerate faces")
			check(bounds and not signature.is_empty(),"new pieces fit measured existing facade envelope below cornice")
			var slats:Array=built.house.find_children("VariantShutterSlats*","MeshInstance3D",true,false)
			check(built.house.find_children("VariantStonePediment*","MeshInstance3D",true,false).size()==marked*2 if id=="stone_pediment" else slats.size()==marked*4 and slats.all(func(m):return m.mesh.get_faces().size()==216),"two solid recipes exist; every shutter panel contains six actual box slats in one mesh")
			geometry.append(hash(signature));built.house.free();built.r.free()
			check(city.undo().ok and city.houses==prior.houses and city.redo().ok and city.houses==saved.houses,"Undo Redo restores complete original and selected house")
			check(city.set_house_architecture("h1","townhouse").ok and Variants.selected(city.houses[0]).is_empty() and city.houses[0].architecture_variant==expected.architecture_variant,"another prototype retains the dormant author override")
			check(city.set_house_architecture("h1",Variants.PROTOTYPE).ok and Variants.selected(city.houses[0])==id,"return to mother prototype restores chosen detail")
	check(geometry[0]!=geometry[1] and geometry[2]!=geometry[3],"both eras contain distinguishable measured variant geometry")
	var seeded:=Fixture.build("pastoral",0.);seeded.city.set_house_architecture_variant("h1","timber_shutters");var detail_seed:int=seeded.city.houses[0].architecture_variant.seed
	check(seeded.city.set_house_architecture_variant("h1","stone_pediment").ok and seeded.city.houses[0].architecture_variant.seed==detail_seed,"changing detail preserves its independent seed instead of rerolling the house")
	var f:=Fixture.build("pastoral",0.);var city:RefCounted=f.city;var raw_path:=out+"/old_work.json";check(city.save_city(raw_path).ok,"old source saved only inside evidence folder");var raw:=FileAccess.get_file_as_bytes(raw_path)
	check(city.set_house_architecture_variant("h1","timber_shutters").ok and city.save_city(raw_path).ok,"first schema25 publication uses ordinary atomic serializer")
	var backup:=out+"/废弃/城市存档/old_work.json.previous";check(FileAccess.get_file_as_bytes(backup)==raw and city.Serializer.read(city,backup).ok,"exact old schema source retained in ordinary backup before publication")
	var saved:Dictionary=city.snapshot();var fresh:=Fixture.State.new();var empty:Dictionary=fresh.snapshot()
	for bad:Variant in [{},{"seed":0,"version":true,"prototype":Variants.PROTOTYPE,"windows":"timber_shutters"},{"seed":0,"version":2,"prototype":Variants.PROTOTYPE,"windows":"timber_shutters"},{"seed":0,"version":1,"prototype":"townhouse","windows":"timber_shutters"},{"version":1,"prototype":Variants.PROTOTYPE,"windows":"missing","seed":0},{"version":1,"prototype":Variants.PROTOTYPE,"windows":"stone_pediment","seed":0,"extra":0}]:
		var invalid:Dictionary=saved.duplicate(true);invalid.houses[0].architecture_variant=bad;check(not fresh.restore(invalid).ok and fresh.snapshot()==empty,"invalid or future recipe rejects atomically")
	for schema:int in [19,20,24]:
		var invalid:Dictionary=saved.duplicate(true);invalid.schema=schema;check(not fresh.restore(invalid).ok and fresh.snapshot()==empty,"older schema cannot silently accept new variant field")
	for seed_value:Variant in [true,-1,2147483648,.5,"0"]:
		var invalid:Dictionary=saved.duplicate(true);invalid.houses[0].architecture_variant.seed=seed_value;check(not fresh.restore(invalid).ok and fresh.snapshot()==empty,"invalid independent seed rejects atomically")
	check(Brush.sample(city,"h1").ok and city.add_house_stroke(Vector2(-23,-20),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok and city.houses[1].architecture_variant==city.houses[0].architecture_variant,"appearance sampling copies stable detail recipe into a real new house")
	city.houses[1].architecture_variant.windows="stone_pediment";check(city.houses[0].architecture_variant.windows=="timber_shutters","sampled houses own independent nested author records")
	check(city.set_house_architecture_variant("h1","").ok and not city.houses[0].has("architecture_variant"),"explicit original clears only its own variant record")
	var small:=Fixture.build("renaissance",0.,true,1);var before:Dictionary=small.city.snapshot();check(not small.city.set_house_architecture_variant("h1","stone_pediment").ok and small.city.snapshot()==before,"arcade-only one-floor house cannot select invisible variant")
	var epoch:=Fixture.build("pastoral",0.);var opened:Dictionary=epoch.city.begin_progression_epoch(out+"/epoch.json");var ledger:Dictionary=epoch.city.cozy_progression.duplicate(true);var cutoff:Dictionary=epoch.city.harmony_journey.growth_cutoff.duplicate(true)
	check(opened.ok and epoch.city.set_house_architecture_variant("h1","stone_pediment").ok,"actual account accepts an explicit non-economic detail")
	saved=epoch.city.snapshot();check(saved.schema==25 and fresh.restore(saved).ok and fresh.cozy_progression==ledger and fresh.harmony_journey.growth_cutoff==cutoff,"schema25 preserves actual schema24 epoch and old cutoff exactly")
	check(epoch.city.undo().ok and epoch.city.redo().ok and epoch.city.cozy_progression==ledger,"geometry history cannot rewind or replace the account")
	var later:=Fixture.build("pastoral",0.);later.city.set_house_architecture_variant("h1","timber_shutters");var identity:Dictionary=later.city.houses[0].architecture_variant.duplicate(true)
	check(later.city.begin_progression_epoch(out+"/variant_first_epoch.json").ok and later.city.snapshot().schema==25 and later.city.houses[0].architecture_variant==identity,"opening an account after first adopting schema25 preserves the recipe")
	check(later.city.CreationPolicy.set_progression_enabled(later.city,false,out+"/variant_first_epoch.json").ok and later.city.snapshot().schema==25 and not later.city.cozy_progression.enabled,"schema25 account can pause through its normal saved transaction")
	check(later.city.CreationPolicy.set_progression_enabled(later.city,true,out+"/variant_first_epoch.json").ok and later.city.cozy_progression.enabled and later.city.houses[0].architecture_variant==identity,"same schema25 account resumes without losing its independent author seed")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WINDOW_VARIANTS_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

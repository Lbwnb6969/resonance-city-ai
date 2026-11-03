extends "res://tests/test_city_creation_layered_windows.gd"
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const Sites=preload("res://scripts/visual/city_creation_dormer_sites.gd")
static func fixture(era:String="pastoral",yaw:float=0.,width:int=2,depth:int=1)->RefCounted:
	var f:=Fixture.build(era,0.);var city:RefCounted=f.city
	for z in range(depth):
		for x in range(width):
			if x==0 and z==0:continue
			city.add_cell("h1",x,z,0);city.add_cell("h1",x,z,1)
	city.rotate_house("h1",yaw);return city
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	for era:String in ["pastoral","renaissance"]:
		for key:String in ["gable_light","shed_light"]:
			var city:RefCounted=fixture(era,.4);var before:Dictionary=city.snapshot();var old:=build(city);check(old.house.get_meta("terracotta_skylights",0)>0,"old broad tiled roof has its actual automatic dormer");var surface:=Sites.faces(old.house,true);old.house.free();old.r.free()
			check(city.set_house_dormer("h1",key).ok,"public explicit dormer choice "+era+key)
			var made:=build(city);check(made.house.get_meta("roof_detail",{}).get("active",false),"actual source roof supports the selected new dormer")
			geometry(made.house,surface,2,1)
			check(city.houses[0].seed==before.houses[0].seed and city.houses[0].cells==before.houses[0].cells,"detail changes neither author seed nor room structure")
			made.house.free();made.r.free()
	for size:Vector2i in [Vector2i(1,2),Vector2i(2,2)]:
		var city:RefCounted=fixture("pastoral",PI*.5,size.x,size.y);var old:=build(city);var surface:=Sites.faces(old.house,true);old.house.free();old.r.free()
		check(city.set_house_dormer("h1","gable_light").ok,"orthogonal continuous roof accepts explicit detail");var made:=build(city);check(made.house.get_meta("roof_detail",{}).get("active",false),"actual opposite-axis or square roof has a supported single-slope site");geometry(made.house,surface,size.x,size.y);made.house.free();made.r.free()
	var joined:RefCounted=fixture("renaissance",0.,1,2);preload("res://scripts/world/city_creation_build_brush.gd").select(joined,"pastoral","");check(joined.add_house_stroke(Vector2(-26.2,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]).ok and joined.set_house_dormer("h1","gable_light").ok,"actual L-shaped shared roof arises from public neighboring construction")
	var l_shape:=build(joined);check(l_shape.house.get_meta("roof_detail",{}).get("active",false),"actual L-shaped shared roof still has a real clear site");l_shape.house.free();l_shape.r.free()
	history(out)
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("DORMER_SLOTS_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func geometry(house:Node3D,surface:Array[Vector3],width:int,depth:int)->void:
	var detail:Dictionary=house.get_meta("roof_detail",{});check(not surface.is_empty() and detail.get("active",false),"independent original roof triangles remain available beneath the new dormer")
	if not detail.get("active",false):return
	var site:Dictionary=detail.site;var bounds:Rect2=site.footprint;var supported:=true
	for x in range(11):
		for z in range(11):supported=supported and is_finite(Sites.height(surface,bounds.position+Vector2(x*.076,z*.08)))
	check(supported and int(site.samples)==121,"the complete authored support footprint lies over actual original roof triangles")
	if depth==1:check(bounds.position.y>-20. or bounds.end.y<-20.,"X-run dormer and its eaves lie wholly on one side of the actual Z-centered ridge")
	if width==1:check(bounds.position.x>-28. or bounds.end.x<-28.,"Z-run dormer and its eaves lie wholly on one side of the actual X-centered ridge")
	var ridge_center:=Vector2(-27.5,-20.) if depth==1 else Vector2(-28.,-19.5) if width==1 else Vector2(-27.1,-19.1)
	check(not Sites.clear_ridges(Sites.ridge_lines(surface),Rect2(ridge_center-Vector2(.38,.40),Vector2(.76,.80))),"an independent footprint centered across this original roof's real ridge is rejected")
	if width==2 and depth==2:
		var center:=Vector2(-27.1,-19.1)
		check(not Sites.Frame.segment(bounds,center-Vector2(2,2),center+Vector2(2,2)) and not Sites.Frame.segment(bounds,center-Vector2(2,-2),center+Vector2(2,-2)),"square hipped roof detail lies clear of both actual corner-to-peak diagonal ridges")
	var rays:=0;var blocked:=0;var panes:Array=house.find_children("DormerGlass*","MeshInstance3D",true,false)
	for pane:MeshInstance3D in panes:
		var normal:=Vector3.BACK if detail.id=="gable_light" else Vector3.UP
		for x:float in [-.10,.10]:
			for other:float in [-.05,.05]:
				var p:=Vector3(x,other,0) if detail.id=="gable_light" else Vector3(x,0,other);var a:=pane.to_global(p+normal*.16);var b:=pane.to_global(p-normal*.04);rays+=1
				for mesh:MeshInstance3D in house.find_children("*","MeshInstance3D",true,false):
					if mesh.material_override.get_meta("creation_facade_glass",false):continue
					var transform:=mesh.global_transform.affine_inverse();var faces:=mesh.mesh.get_faces()
					for i in range(0,faces.size(),3):
						if Geometry3D.segment_intersects_triangle(transform*a,transform*b,faces[i],faces[i+1],faces[i+2])!=null:blocked+=1;break
	check(panes.size()==1 and rays==4 and blocked==0,"complete merged house leaves every new glass quadrant visibly open instead of backed by the old roof or solid infill")
func history(out:String)->void:
	var r:=Renderer.new();root.add_child(r);var shell:=Node3D.new();r.add_child(shell);var source:StandardMaterial3D=r._material(Color("c4ae88"));var box:MeshInstance3D=r._box(shell,Vector3.ONE,Vector3.ZERO,source)
	for node:Node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	var two_sided:MeshInstance3D=r._triangles(shell,[Vector3.ZERO,Vector3.RIGHT,Vector3.UP],Color("c4ae88"));check(two_sided.material_override.cull_mode==BaseMaterial3D.CULL_DISABLED and box.material_override.cull_mode==BaseMaterial3D.CULL_BACK and source==r._material(Color("c4ae88")),"two-sided triangle creation cannot mutate a shared same-color solid box or the factory cache");r.free()
	var city:RefCounted=fixture();city.set_house_architecture_variant("h1","timber_shutters");var original:Dictionary=city.snapshot();var window:Dictionary=city.houses[0].architecture_variant.duplicate(true);var path:=out+"/dormer.json"
	check(city.save_city(path).ok,"ordinary old schema25 work saves before adoption");var raw:=FileAccess.get_file_as_bytes(path)
	check(city.set_house_dormer("h1","gable_light").ok and city.snapshot().schema==27 and Choice.record(city.houses[0])==window,"first roof choice explicitly upgrades slots while preserving the complete original window recipe")
	var saved:Dictionary=city.snapshot();var reader:=Fixture.State.new();check(reader.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok and reader.snapshot()==saved,"schema27 multi-slot JSON roundtrip preserves canonical author data")
	check(city.save_city(path).ok and FileAccess.get_file_as_bytes(out+"/废弃/城市存档/dormer.json.previous")==raw and reader.load_city(path).ok,"actual atomic publication retains the exact previous work and cold reads the new file")
	var seed_value:int=Choice.record(city.houses[0],"dormer").seed;var before:Dictionary=city.snapshot();check(city.set_house_dormer("h1","gable_light").no_op and city.snapshot()==before,"repeat roof choice is a true no-op")
	check(city.set_house_dormer("h1","shed_light").ok and Choice.record(city.houses[0],"dormer").seed==seed_value and Choice.record(city.houses[0])==window,"different roof geometry keeps its own stable seed and the independent window slot")
	check(city.undo().ok and city.houses==saved.houses and city.redo().ok and Choice.dormer(city.houses[0])=="shed_light","roof detail Undo and Redo restore the exact authored record")
	check(city.set_house_architecture_variant("h1","").ok and Choice.record(city.houses[0]).is_empty() and Choice.dormer(city.houses[0])=="shed_light","clearing windows leaves the roof slot intact")
	check(city.set_house_architecture_variant("h1","stone_pediment").ok and city.set_house_dormer("h1","").ok and city.houses[0].architecture_variant.version==1 and Choice.selected(city.houses[0])=="stone_pediment","clearing the roof folds back to the unchanged schema25 window format")
	check(city.restore(saved).ok and city.set_house_architecture("h1","rotunda").ok,"another actual mother receives the dormant roof override")
	var dormant:Dictionary=city.houses[0].architecture_variant.duplicate(true);var made:=build(city);check(not made.house.has_meta("roof_detail") and city.houses[0].architecture_variant==dormant,"unsupported roof preserves author intent and publishes its ordinary mother geometry");made.house.free();made.r.free()
	check(city.set_house_architecture("h1","recessed_townhouse").ok and Choice.dormer(city.houses[0])=="gable_light","return to the supported mother restores the stable selected roof")
	check(preload("res://scripts/world/city_creation_build_brush.gd").sample(city,"h1").ok and city.add_house_stroke(Vector2(-21,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":1,"z":0,"level":0,"kind":"room"}]).ok and city.houses[-1].architecture_variant==city.houses[0].architecture_variant,"public appearance sampling copies both independent stable slots into an actual new house")
	city.houses[-1].architecture_variant.slots.dormer.id="off";check(Choice.dormer(city.houses[0])=="gable_light","sampled nested author slots are independent records")
	var invalid_reader:=Fixture.State.new();var empty:Dictionary=invalid_reader.snapshot()
	var bad_rows:Array=[{}, {"version":2,"slots":{}},{"version":2,"slots":{"unknown":{}}},{"version":2,"slots":{"dormer":{"version":1,"prototype":"wrong","id":"gable_light","seed":0}}},{"version":true,"slots":saved.houses[0].architecture_variant.slots}]
	for bad:Variant in bad_rows:
		var data:Dictionary=saved.duplicate(true);data.houses[0].architecture_variant=bad;check(not invalid_reader.restore(data).ok and invalid_reader.snapshot()==empty,"malformed, unknown or future slot identity rejects atomically")
	for invalid:Variant in [true,-1,.5,2147483648,"0"]:
		var data:Dictionary=saved.duplicate(true);data.houses[0].architecture_variant.slots.dormer.seed=invalid;check(not invalid_reader.restore(data).ok and invalid_reader.snapshot()==empty,"malformed independent roof seed rejects atomically")
	for schema:int in [24,25,26]:
		var data:Dictionary=saved.duplicate(true);data.schema=schema;check(not invalid_reader.restore(data).ok,"earlier schemas cannot silently accept the multi-slot format")
	var small:=Fixture.build("pastoral");before=small.city.snapshot();check(not small.city.set_house_dormer("h1","gable_light").ok and small.city.snapshot()==before,"a lone small roof cannot select an unsupported invisible detail")
	check(city.restore(original).ok and city.houses==original.houses and not city.houses[0].has("roof_detail"),"an original old work restores without adopting new fields or recipes")
	var legacy:=Fixture.State.new();legacy.initialize();legacy.set_house_architecture("h1","recessed_townhouse");check(legacy.set_house_dormer("h1","gable_light").ok and legacy.save_city(out+"/legacy.json").ok and reader.load_city(out+"/legacy.json").ok and not reader.CreationPolicy.is_free(reader),"pure legacy accepts actual roof authoring and disk cold read without changing its policy")
	var epoch:RefCounted=fixture();check(epoch.set_house_dormer("h1","gable_light").ok and epoch.begin_progression_epoch(out+"/epoch.json").ok,"a new account can open after explicit schema27 adoption")
	var cutoff:Dictionary=epoch.harmony_journey.growth_cutoff.duplicate(true);var ledger:Dictionary=epoch.cozy_progression.duplicate(true)
	check(epoch.set_house_dormer("h1","shed_light").ok and epoch.cozy_progression==ledger and epoch.harmony_journey.growth_cutoff==cutoff,"new geometry neither awards growth nor rewrites old cutoff or the actual ledger")
	check(epoch.CreationPolicy.set_progression_enabled(epoch,false,out+"/epoch.json").ok and reader.load_city(out+"/epoch.json").ok and not reader.cozy_progression.enabled,"schema27 ordinary saved account can pause and cold read")
	check(epoch.CreationPolicy.set_progression_enabled(epoch,true,out+"/epoch.json").ok and epoch.cozy_progression.epoch_id==ledger.epoch_id,"schema27 resumes the same real account")

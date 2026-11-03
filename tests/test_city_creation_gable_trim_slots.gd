extends "res://tests/test_city_creation_dormer_slots.gd"
const Trim=preload("res://scripts/visual/city_creation_gable_trim.gd")
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	for era:String in ["pastoral","renaissance"]:
		for key:String in Choice.TRIMS:
			var city:RefCounted=fixture(era,.4);var before:Dictionary=city.snapshot();var doors:Array=city.house_entrances("h1").duplicate(true);check(city.set_house_architecture_variant("h1",key,"gable_trim").ok,"public explicit gable trim selection "+era+key)
			var made:=build(city);var data:Dictionary=made.house.get_meta("gable_trim",{});print("TRIM_GEOMETRY ",era," ",key," active=",data.get("active",false)," parts=",data.get("parts",[]).size())
			check(data.get("active",false) and data.parts.any(func(p):return p.kind=="verge") and data.parts.any(func(p):return p.kind=="eave"),"actual roof has raised gable and outline eave geometry")
			verify_geometry(made.house,city)
			check(city.houses[0].seed==before.houses[0].seed and city.houses[0].cells==before.houses[0].cells and city.house_entrances("h1")==doors,"new independent trim leaves old seed, room identity and exact frontage entrances unchanged");made.house.free();made.r.free()
	var small:=Fixture.State.new();small.initialize_free();preload("res://scripts/world/city_creation_build_brush.gd").select(small,"pastoral","townhouse");small.add_house(Vector2(-28,-20));check(small.set_house_architecture_variant("h1","timber_verge","gable_trim").ok,"single original roof accepts explicit trim");var made:=build(small);check(made.house.get_meta("gable_trim",{}).get("active",false),"single actual pitched roof publishes supported verge and eave trim");made.house.free();made.r.free()
	for size:Vector2i in [Vector2i(1,2),Vector2i(2,2)]:
		var city:RefCounted=fixture("renaissance",PI*.5,size.x,size.y);city.set_house_architecture_variant("h1","stone_dentils","gable_trim");var shape:=build(city);var parts:Array=shape.house.get_meta("gable_trim",{}).get("parts",[]);check(not parts.is_empty() and parts.any(func(p):return p.kind=="eave"),"rotated opposite-axis and square true outlines produce eave details");shape.house.free();shape.r.free()
	trim_history(out)
	neighbor_geometry()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("GABLE_TRIM_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func verify_geometry(house:Node3D,city:RefCounted)->void:
	var data:Dictionary=house.get_meta("gable_trim",{});var surface:=Sites.faces(house,true);var samples:=0;var aligned:=true;var finite:=true;var triangles:=0;var outward:=true
	for row:Dictionary in data.get("parts",[]):
		if row.kind!="verge":continue
		for at:Vector3 in [row.a,row.b,Vector3(row.a).lerp(row.b,.5)]:
			var height:=Sites.height(surface,Vector2(at.x,at.z));aligned=aligned and is_finite(height) and absf(at.y+.032-height)<.002;samples+=1
	check(samples>0 and aligned,"every raised gable segment follows the independent actual rendered roof curve including its era height scale")
	for mesh:MeshInstance3D in house.find_children("GableTrimCell_*","MeshInstance3D",true,false):
		var faces:=mesh.mesh.get_faces();triangles+=faces.size()/3;var owned:Array=data.parts.filter(func(p):return p.cell_id==mesh.get_meta("trim_cell_id"));var arrays:Array=mesh.mesh.surface_get_arrays(0);var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX];var normals:PackedVector3Array=arrays[Mesh.ARRAY_NORMAL]
		for i in range(0,faces.size(),3):
			var cross_product:Vector3=(faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]);finite=finite and faces[i].is_finite() and cross_product.length_squared()>1e-12
			var normal:Vector3=-cross_product.normalized();var part:Dictionary=owned[i/36];var center:Vector3=Vector3(part.a).lerp(part.b,.5)
			outward=outward and normal.dot((faces[i]+faces[i+1]+faces[i+2])/3.-center)>0 and normals[indices[i] if not indices.is_empty() else i].dot(normal)>.999
	check(finite and triangles==data.parts.size()*12,"merged physical trim preserves every finite box triangle without degenerate or missing pieces")
	check(outward,"every merged trim face retains the outward Box winding and matching outward stored normal")
	check(city.house_entrances("h1").all(func(e):return e.has("cell_id")),"roof trim retains real frontage cell identities")
func trim_history(out:String)->void:
	var city:RefCounted=fixture();city.set_house_architecture_variant("h1","stone_pediment");city.set_house_dormer("h1","shed_light");city.set_house_chimney("h1","copper_cowl");var old:Dictionary=city.snapshot();var path:=out+"/work.json";check(city.save_city(path).ok,"original schema28 three-slot author work saves before trim adoption");var raw:=FileAccess.get_file_as_bytes(path)
	check(city.set_house_architecture_variant("h1","timber_verge","gable_trim").ok and city.snapshot().schema==29 and Choice.valid(city.houses[0].architecture_variant),"explicit trim upgrades to schema29 and valid four-slot format")
	var saved:Dictionary=city.snapshot();var seed_value:int=Choice.record(city.houses[0],"gable_trim").seed;var reader:=Fixture.State.new()
	check(city.save_city(path).ok and reader.load_city(path).ok and reader.snapshot()==saved and FileAccess.get_file_as_bytes(out+"/废弃/城市存档/work.json.previous")==raw,"actual schema29 atomic previous-file backup and disk cold read preserve exact authorship")
	var revision:int=city.revision;check(city.set_house_architecture_variant("h1","timber_verge","gable_trim").no_op and city.revision==revision,"repeated trim selection has no state or history write")
	check(city.set_house_architecture_variant("h1","stone_dentils","gable_trim").ok and Choice.record(city.houses[0],"gable_trim").seed==seed_value and city.undo().ok and city.houses==saved.houses and city.redo().ok,"trim choices share their independent seed and exact UndoRedo history")
	check(city.restore(saved).ok and city.set_house_architecture_variant("h1","","gable_trim").ok and city.houses==old.houses and city.snapshot().schema==28,"original trim returns exact old schema28 three-slot author record")
	check(city.restore(saved).ok and city.set_house_architecture_variant("h1","").ok and city.set_house_dormer("h1","").ok and city.set_house_chimney("h1","").ok and Choice.trim(city.houses[0])=="timber_verge","clearing each old slot independently retains the fourth slot")
	check(city.set_house_architecture_variant("h1","","gable_trim").ok and not city.houses[0].has("architecture_variant"),"clearing the last slot restores original absent-field representation")
	check(city.restore(saved).ok and city.set_house_architecture("h1","rotunda").ok,"unsupported mother retains dormant trim intent");var made:=build(city);check(not made.house.has_meta("gable_trim") and Choice.trim(city.houses[0])=="timber_verge","unsupported mother publishes no incompatible raised trim");made.house.free();made.r.free()
	check(city.set_house_architecture("h1","recessed_townhouse").ok,"restoring compatible mother resumes trim");made=build(city);check(made.house.get_meta("gable_trim",{}).get("active",false),"retained trim author intent becomes real geometry again");made.house.free();made.r.free()
	var brush=preload("res://scripts/world/city_creation_build_brush.gd");check(brush.sample(city,"h1").ok and city.add_house_stroke(Vector2(-21,-20),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok and city.houses[-1].architecture_variant==city.houses[0].architecture_variant,"public appearance sampling copies all four slots")
	city.houses[-1].architecture_variant.slots.gable_trim.id="stone_dentils";check(Choice.trim(city.houses[0])=="timber_verge","sampled fourth-slot record is a deep independent copy")
	var empty:Dictionary=reader.snapshot()
	for schema:int in [24,25,26,27,28]:
		var bad:Dictionary=saved.duplicate(true);bad.schema=schema;check(not reader.restore(bad).ok and reader.snapshot()==empty,"old schema rejects fourth slot atomically")
	for change:Callable in [func(d):d.version=true,func(d):d.version=2,func(d):d.seed=true,func(d):d.seed=-1,func(d):d.seed=.5,func(d):d.seed=2147483648,func(d):d.prototype="wrong",func(d):d.id="missing",func(d):d.extra=0]:
		var bad:Dictionary=saved.duplicate(true);change.call(bad.houses[0].architecture_variant.slots.gable_trim);check(not reader.restore(bad).ok and reader.snapshot()==empty,"malformed or future trim record rejects without altering current city")
	check(not city.set_house_architecture_variant("h1","timber_verge","unknown").ok and not city.set_house_architecture_variant("missing","timber_verge","gable_trim").ok,"unknown slot and missing house reject through existing API")
	var legacy:=Fixture.State.new();legacy.initialize();legacy.set_house_architecture("h1","townhouse");check(legacy.set_house_architecture_variant("h1","stone_dentils","gable_trim").ok and legacy.save_city(out+"/legacy.json").ok and reader.load_city(out+"/legacy.json").ok and not reader.CreationPolicy.is_free(reader),"pure legacy trim authoring cold reads without adopting free policy")
	city.restore(saved);var ledger:Dictionary=city.cozy_progression.duplicate(true);var cutoff:Dictionary=city.harmony_journey.duplicate(true);city.set_house_architecture_variant("h1","stone_dentils","gable_trim");check(city.cozy_progression==ledger and city.harmony_journey==cutoff,"old-free trim selection leaves old cutoff and optional growth ledger unchanged")
static func neighbor_fixture()->RefCounted:
	var city:RefCounted=fixture();city.set_house_architecture_variant("h1","stone_dentils","gable_trim");var brush=preload("res://scripts/world/city_creation_build_brush.gd");brush.select(city,"pastoral","townhouse");city.add_house_stroke(Vector2(-24.24,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"},{"x":0,"z":0,"level":2,"kind":"room"}]);return city
func neighbor_geometry()->void:
	var city:RefCounted=neighbor_fixture();check(city.houses.size()==2,"legal close taller neighbor is built through actual public geometry API");var initial:=build(city);var old:Array=initial.house.get_meta("gable_trim",{}).get("parts",[]);var signature:=Sites.foreign_signature(city,city.houses[0]);initial.house.free();initial.r.free()
	var turn:Dictionary=city.rotate_house("h2",.15);print("TRIM_TURN ",turn);check(not signature.is_empty() and turn.ok,"trim-only source tracks nearby rotated room footprints");var made:=build(city);var changed:Array=made.house.get_meta("gable_trim",{}).get("parts",[]);print("TRIM_NEIGHBOR ",old.size()," -> ",changed.size())
	check(signature!=Sites.foreign_signature(city,city.houses[0]) and old!=changed,"neighbor yaw changes real trim mask and its incremental dependency signature");made.house.free();made.r.free()

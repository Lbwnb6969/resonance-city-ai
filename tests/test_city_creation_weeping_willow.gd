extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Foliage=preload("res://scripts/visual/city_creation_foliage.gd")
const Ambience=preload("res://scripts/audio/city_creation_ambience.gd")
const Landmarks=preload("res://scripts/world/city_creation_placed_landmarks.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture(water:bool=true)->RefCounted:
	var city:=State.new();city.initialize_free()
	if water:city.add_water([Vector2(-32,-17.7),Vector2(-24,-17.7)] as Array[Vector2],2.4,"pond")
	return city
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var f:=Foliage.new();var hashes:Array=[];var sizes:Array=[]
	check(State.GardenSpecies.IDS.slice(0,7)==["olive","cypress","shrub","golden_tree","pink_flower","white_flower","yellow_flower"],"old species identities and menu indices stay stable")
	for v in range(3):
		var parts:Dictionary=f.parts("weeping_willow",v);check(parts.has("trunk") and parts==f.parts("weeping_willow",v+3),"existing mesh bank shares both pieces for variant "+str(v))
		var mesh:ArrayMesh=parts.canopy;var a:Array=mesh.surface_get_arrays(0);var vertices:PackedVector3Array=a[Mesh.ARRAY_VERTEX];var normals:PackedVector3Array=a[Mesh.ARRAY_NORMAL];var indices:PackedInt32Array=a[Mesh.ARRAY_INDEX];var faces:=mesh.get_faces();var zero:=0;var hanging:=0
		for i in range(0,faces.size(),3):
			if (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()<.0000000001:zero+=1
		for at:Vector3 in vertices:
			if at.y<1.25 and Vector2(at.x,at.z).length()>.7:hanging+=1
		check(Array(vertices).all(func(x):return x.is_finite()) and Array(normals).all(func(x):return x.is_finite() and absf(x.length()-1.)<.001) and zero==0,"visible hanging canopy has finite complete nondegenerate geometry "+str(v))
		check(mesh.get_aabb().size.y>2. and mesh.get_aabb().size.x>2. and hanging>200,"distinct willow crown includes low hanging outer foliage "+str(v));hashes.append(var_to_bytes(a).hex_encode().sha256_text());sizes.append({"vertices":vertices.size(),"triangles":indices.size()/3,"hanging_vertices":hanging})
	check(hashes[0]!=hashes[1] and hashes[1]!=hashes[2] and hashes[0]!=hashes[2],"three deterministic seed variants have different actual foliage geometry")
	var city:RefCounted=fixture();var before:Dictionary=city.snapshot();check(city.place_plant(Vector2(-28,-20),"weeping_willow").ok and city.plants.size()==1,"free new city can plant a willow beside actual authored water without progression")
	var planted:Dictionary=city.snapshot();var author:Array=city.plants.duplicate(true);check(city.undo().ok and city.snapshot().plants==before.plants and city.redo().ok and city.plants==author,"one native author transaction retains exact willow position identity and seed")
	check(not city.place_plant(Vector2(-28,-17.7),"weeping_willow").ok and city.plants==author,"real water rejects a submerged trunk without author changes")
	planted=city.snapshot();check(city.save_city(out+"/willow.json").ok,"willow saves through existing atomic world API");var cold:=State.new();check(cold.load_city(out+"/willow.json").ok and cold.snapshot()==planted,"existing plant kind field and schema cold roundtrip exactly")
	var ambient:=Ambience.new();ambient.state=city;ambient.set_visibility_source(func():return {});ambient._refresh_trees({"p1":true});check(ambient._trees.size()==1,"published visible willow enters the existing forest mixer");ambient._refresh_trees({"p1":false});check(ambient._trees.is_empty(),"covered willow contributes no phantom forest voice");ambient.free()
	var dry:RefCounted=fixture(false);check(dry.place_plant(Vector2(-28,-20),"weeping_willow").ok,"same willow can be authored on dry land");var authored:Array=dry.plants.duplicate(true);check(Landmarks.place(dry,"riverbank",Vector2(-28,-20),.4).ok and not dry.vegetation_visible(dry.plants[0]) and dry.plants==authored,"real rotated landmark withdraws covered willow without deleting original author record");check(dry.undo().ok and dry.vegetation_visible(dry.plants[0]) and dry.plants==authored,"Undo restores exact covered tree through existing visibility rules")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"geometry":sizes};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WEEPING_WILLOW_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

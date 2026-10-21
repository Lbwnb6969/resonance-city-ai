extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Visual=preload("res://scripts/visual/city_creation_living_music.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Harmony=preload("res://scripts/audio/city_creation_cluster_harmony.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
class Host extends Node3D:
	var state:RefCounted
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func view(city:RefCounted,clock:float)->Dictionary:
	var records:Dictionary=Catalog.prepare(city).houses
	var acoustic:=Acoustic.new();acoustic.focus=Vector2(-23,-17);acoustic.evaluate(records,[],[])
	return {"records":records,"snapshot":{"audible":true,"clock_sec":clock,"choral_wave":Harmony.choral_wave(records,acoustic,clock)}}
func run()->void:
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-28,-22),Vector2(-23.5,-22),Vector2(-19,-22)]:check(city.add_house(at).ok,"authored initial choir house")
	var host:=Host.new();host.state=city;root.add_child(host)
	var visual:=Visual.new();visual.setup(host)
	var prepared:=view(city,1.2);var original:=city.snapshot()
	visual.update(prepared.records,prepared.snapshot,city.revision)
	check(visual.active_halos==3 and visual.report().motes==0,"three real cluster members receive quiet ground halos, without chamber particles")
	check(city.snapshot()==original,"derived choir display never writes a city field or history")
	for z:float in [-22.,-17.,-12.,-7.]:
		for x:float in [-28.,-23.5,-19.,-14.5]:
			if city.houses.size()<15 and city.validate_add_house(Vector2(x,z)).ok:city.add_house(Vector2(x,z))
	prepared=view(city,2.);visual.update(prepared.records,prepared.snapshot,city.revision)
	check(city.houses.size()==15 and visual.active_halos==0 and visual.report().motes==16,"fifteen actual joined houses replace the small halo with chamber motes")
	var last_id:=str(city.houses[-1].id);city.remove_house(last_id)
	prepared=view(city,2.1);visual.update(prepared.records,prepared.snapshot,city.revision)
	check(visual.report().motes==0,"fourteen houses cannot keep the chamber effect after removal")
	city.undo();prepared=view(city,2.2);visual.update(prepared.records,prepared.snapshot,city.revision)
	check(visual.report().motes==16,"ordinary undo restores the actual chamber threshold")
	var nodes:=visual.layer.get_child_count()
	check(city.add_terrain_stroke([Vector2(-35,-15)] as Array[Vector2],"raise",3.,1.).ok,"a real hillside lies inside the production ring")
	city.set_house_role("h1","bakery");city.set_house_temperament("h1","largo")
	prepared=view(city,3.);original=city.snapshot()
	check(visual.emit_production("h1",prepared.records.h1,3.),"a valid largo production view can display its completion")
	visual.update(prepared.records,prepared.snapshot,city.revision)
	check(visual.report().waves.size()==1 and city.snapshot()==original,"displaying a completion ring cannot manufacture bread, glow or history")
	var slot:Dictionary=visual.waves[0];var mesh:ArrayMesh=slot.node.mesh
	var arrays:Array=mesh.surface_get_arrays(0);var vertices:PackedVector3Array=arrays[Mesh.ARRAY_VERTEX]
	var indices:PackedInt32Array=arrays[Mesh.ARRAY_INDEX];var aligned:=true;var differences:Array=[]
	for i in range(0,indices.size(),3):
		var a:Vector3=vertices[indices[i]];var b:Vector3=vertices[indices[i+1]];var c:Vector3=vertices[indices[i+2]]
		var p:Vector3=(a+b+c)/3.;var at:=Vector2(p.x+slot.node.position.x,p.z+slot.node.position.z)
		if absf(at.x)>40. or absf(at.y)>40.:continue
		var gap:float=absf(p.y-city.ground_height(at)-.035)
		aligned=aligned and gap<.00001
		if gap>=.00001 and differences.size()<3:differences.append({"at":at,"gap":gap,"triangle":[a,b,c]})
	if not aligned:print("FIELD_GAPS ",differences)
	check(aligned,"ring triangles match the actual half-metre ground planes between vertices")
	var ordinary:Dictionary=prepared.records.h1.duplicate();ordinary.temperament="andante"
	check(not visual.emit_production("h1",ordinary,3.1),"ordinary production cannot trigger a largo ring")
	for i in range(8):visual.emit_production("h1",prepared.records.h1,3.+float(i)*.01)
	check(visual.layer.get_child_count()==nodes and visual.waves.size()==4,"repeated completions reuse a fixed four-ring pool")
	visual.update(prepared.records,{"clock_sec":3.2,"audible":true,"choral_wave":prepared.snapshot.choral_wave},city.revision,true)
	check(visual.report().motes==0 and visual.report().waves.is_empty(),"mute immediately removes music-linked particle and ring display")
	visual.update(prepared.records,{"clock_sec":6.,"audible":true,"choral_wave":prepared.snapshot.choral_wave},city.revision)
	check(visual.report().waves.is_empty(),"completed transient rings expire on the shared music clock")
	visual.update(prepared.records,{"clock_sec":6.1,"audible":false},city.revision)
	check(visual.report().motes==0 and visual.active_halos==0,"inaudible choir leaves the sky and meadow quiet")
	host.free()
	print("LIVING_MUSIC ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)

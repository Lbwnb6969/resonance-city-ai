extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Visual=preload("res://scripts/visual/city_creation_living_music.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Harmony=preload("res://scripts/audio/city_creation_cluster_harmony.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Courts=preload("res://scripts/visual/city_creation_courtyards.gd")
const Tram=preload("res://scripts/world/city_creation_tram.gd")
const TramVisual=preload("res://scripts/visual/city_creation_tram_visual.gd")
class Host extends Node3D:
	var state:RefCounted
	var courtyards=Courts.new()
	var house_roots:Dictionary={}
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
func fountain_geometry(host:Node3D)->void:
	var court:=Courts.new();court.setup(host)
	var node:=Node3D.new();host.add_child(node)
	var at:=Vector2(7.,-11.);var scale:=.16;var anchor_y:=1.3
	court._fountain(node,{"at":at,"scale":scale},anchor_y)
	var water:MeshInstance3D=node.get_node("FountainWater")
	var jet:MeshInstance3D=node.get_node("FountainJet")
	var source:Dictionary=court.source_parts.filter(func(part):return part.name=="FountainWater")[0]
	var expected:Transform3D=Transform3D(Basis.IDENTITY.scaled(Vector3.ONE*scale),Vector3(at.x,anchor_y,at.y))*source.transform
	check(water.mesh==source.mesh and water.transform.is_equal_approx(expected),"added jet preserves the recovered basin mesh and complete nonzero-height placement")
	var upper:=-INF
	for vertex:Vector3 in source.faces:upper=maxf(upper,(expected*vertex).y)
	check(is_equal_approx(float(water.material_override.get_shader_parameter("water_base_y")),upper),"both recovered basin surfaces lie at or below the fixed shader anchor")
	check(is_equal_approx(jet.position.y-jet.mesh.height*.5,upper) and jet.position.x==at.x and jet.position.z==at.y,"the central jet starts exactly on the real upper basin")
	check(jet.mesh.height>0. and jet.mesh.bottom_radius>jet.mesh.top_radius and jet.mesh.top_radius>0.,"a finite tapered water column exists above the recovered flat surfaces")
	check(jet.material_override==water.material_override and jet.extra_cull_margin>=jet.mesh.height*.065,"jet shares the actual choir shader and covers its maximum vertex displacement")
	var collision:CollisionShape3D=node.get_node("FountainObstacle").get_child(0)
	var original_stone_vertices:=0
	for part:Dictionary in court.source_parts:
		if part.name!="FountainWater":original_stone_vertices+=part.faces.size()
	check(collision.shape.get_faces().size()==original_stone_vertices,"water motion adds no obstacle or duplicate stone collision")
	node.free();court.layer.free()
func run()->void:
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-28,-22),Vector2(-23.5,-22),Vector2(-19,-22)]:check(city.add_house(at).ok,"authored initial choir house")
	var host:=Host.new();host.state=city;root.add_child(host)
	fountain_geometry(host)
	var visual:=Visual.new();visual.setup(host)
	var prepared:=view(city,1.2);var original:=city.snapshot()
	visual.update(prepared.records,prepared.snapshot,city.revision)
	check(visual.active_halos==3 and visual.report().motes==0,"three real cluster members receive quiet ground halos, without chamber particles")
	check(visual.large_members.is_empty(),"small choirs cannot enable chamber lighting")
	check(city.snapshot()==original,"derived choir display never writes a city field or history")
	for z:float in [-22.,-17.,-12.,-7.]:
		for x:float in [-28.,-23.5,-19.,-14.5]:
			if city.houses.size()<15 and city.validate_add_house(Vector2(x,z)).ok:city.add_house(Vector2(x,z))
	prepared=view(city,2.);visual.update(prepared.records,prepared.snapshot,city.revision)
	check(city.houses.size()==15 and visual.active_halos==0 and visual.report().motes==16,"fifteen actual joined houses replace the small halo with chamber motes")
	check(visual.large_members.size()==15 and visual.strength_at(prepared.records.h1.position)==1. and visual.strength_at(Vector2(38,38))==0.,"chamber light scope follows actual audible member positions")
	check(is_equal_approx(visual.phrase_pulse(0.),1.) and is_zero_approx(visual.phrase_pulse(1.5)) and is_equal_approx(visual.phrase_pulse(3.),1.),"all chamber responses share the three-second musical phrase")
	var court:=Courts.new()
	for id:String in ["h1","unrelated"]:
		var node:=Node3D.new();host.add_child(node);node.set_meta("members",[id])
		var material:=ShaderMaterial.new();material.shader=Courts.WaterShader;node.set_meta("water_material",material);court.roots[id]=node
	court.update_music({"clock_sec":3.,"audible":true},visual)
	check(is_equal_approx(float(court.roots.h1.get_meta("water_material").get_shader_parameter("choir_pulse")),1.) and is_zero_approx(float(court.roots.unrelated.get_meta("water_material").get_shader_parameter("choir_pulse"))),"daily chamber fountain needs actual member attribution even without an old lead or concert flag")
	var tram:=Tram.new(host)
	for i in range(2):tram.cars.append(TramVisual.car(host,i))
	tram.cars[0].node.position=Vector3(prepared.records.h1.position.x,0,prepared.records.h1.position.y)
	tram.cars[1].node.position=Vector3(38,0,38)
	tram.update_music(visual,3.)
	check(is_equal_approx(tram.cars[0].glass.emission_energy_multiplier,.42) and is_equal_approx(tram.cars[1].glass.emission_energy_multiplier,.10),"only the carriage near the audible chamber receives the daylight pulse")
	tram.update_music(visual,1.5)
	check(is_equal_approx(tram.cars[0].glass.emission_energy_multiplier,.10),"carriage warm light returns to its baseline between phrases")
	tram.set_night(true);tram.update_music(visual,3.)
	check(is_equal_approx(tram.cars[0].glass.emission_energy_multiplier,1.02) and is_equal_approx(tram.cars[1].glass.emission_energy_multiplier,.70),"chamber modulation preserves both existing night-light baselines")
	var last_id:=str(city.houses[-1].id);city.remove_house(last_id)
	prepared=view(city,2.1);visual.update(prepared.records,prepared.snapshot,city.revision)
	check(visual.report().motes==0,"fourteen houses cannot keep the chamber effect after removal")
	check(visual.large_members.is_empty(),"fourteen houses also remove the chamber light scope")
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
	tram.update_music(visual,3.);court.update_music({"clock_sec":3.,"audible":false},visual)
	check(visual.large_members.is_empty() and is_equal_approx(tram.cars[0].glass.emission_energy_multiplier,.70) and is_zero_approx(float(court.roots.h1.get_meta("water_material").get_shader_parameter("choir_pulse"))),"mute removes daily chamber modulation while keeping ordinary night lighting")
	visual.update(prepared.records,{"clock_sec":6.,"audible":true,"choral_wave":prepared.snapshot.choral_wave},city.revision)
	check(visual.report().waves.is_empty(),"completed transient rings expire on the shared music clock")
	visual.update(prepared.records,{"clock_sec":6.1,"audible":false},city.revision)
	check(visual.report().motes==0 and visual.active_halos==0,"inaudible choir leaves the sky and meadow quiet")
	host.free()
	print("LIVING_MUSIC ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	quit(0 if failures.is_empty() else 1)

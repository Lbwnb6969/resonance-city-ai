extends "res://tools/check_creation_functional_zones_live.gd"
const MarketFixture=preload("res://tools/fixtures/city_creation_market_frontages_fixture.gd")
func market_meshes()->Dictionary:
	var result:Dictionary={}
	for id:String in demo.town.cafes.roots:
		var root:Node3D=demo.town.cafes.roots[id];var parts:Array=[]
		for mesh:MeshInstance3D in root.find_children("*","MeshInstance3D",true,false):
			parts.append(mesh.transform)
			for surface in range(mesh.mesh.get_surface_count()):parts.append(mesh.mesh.surface_get_arrays(surface))
		var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(var_to_bytes(parts));result[id]=digest.finish().hex_encode()
	return result
func run()->void:
	OUT="res://验证记录/M84/market_frontages_20261029/live"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var original:=pool();var fixture:=MarketFixture.build();check(fixture.ok,"actual public shoreline street")
	await show(fixture.city,Vector2(-12,-20),"水岸条纹长街");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-12,.7,-20);demo.zoom=24.;demo.yaw=.1;demo.pitch=.75;demo._update_camera();await settle()
	var saved:Dictionary=demo.state.snapshot();var installed:=market_meshes();var houses:=meshes();var distant:int=demo.town.house_roots.h5.get_instance_id()
	check(installed.size()==4,"actual published four-house continuous frontage")
	var frontage_root:Node3D=demo.town.cafes.roots.h1;var canopy:Node3D=frontage_root.find_child("MarketAwning_*",true,false)
	check(canopy!=null and canopy.get_node("StripedCloth").material_override.shader==preload("res://scripts/visual/shaders/creation_market_cloth.gdshader"),"actual striped wind micro-normal cloth installed")
	await physics_frame
	var at:Vector3=canopy.to_global(Vector3(0,0,.8));var query:=PhysicsRayQueryParameters3D.create(at+Vector3.UP*5.,at+Vector3.DOWN*1.)
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(query)
	print("MARKET_PICK ",{"at":at,"hit":hit,"canopy":canopy.global_transform})
	check(not hit.is_empty() and hit.collider.name=="MarketAwningPick" and hit.collider.get_meta("house_id","")=="h1" and hit.collider.get_meta("cell_id","")=="c1","actual canopy ray picks original house and cell identity")
	for phase in range(3):demo._set_light_phase(phase);await capture("street_phase"+str(phase))
	demo.zoom=35.;demo._update_camera();await capture("street_35m");demo.zoom=18.;demo.pitch=.30;demo._update_camera();await capture("street_low_18m")
	check(demo.state.snapshot()==saved,"camera and preview observation never author house roles or rooms")
	var removed:Dictionary=demo.state.remove_road("r1");demo._after_edit(removed,"history");await settle();quiet();demo.life.set_process(false)
	check(removed.ok and market_meshes().is_empty(),"actual street removal retires derived awnings")
	check(demo.town.house_roots.h5.get_instance_id()==distant,"distant unrelated house identity preserved")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	check(market_meshes()==installed and meshes()==houses,"native Undo restores exact frontage and original house arrays")
	await key(KEY_Y,true);await settle();quiet();demo.life.set_process(false);check(market_meshes().is_empty(),"native Redo withdraws frontages")
	await key(KEY_Z,true);await settle();quiet();demo.life.set_process(false)
	var snapshot:Dictionary=demo.state.snapshot();var file:=FileAccess.open(OUT+"/work.json",FileAccess.WRITE);file.store_string(JSON.stringify(snapshot,"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(OUT+"/work.json"))).ok,"isolated disk read")
	await show(cold,Vector2(-12,-20),"街景冷算");quiet();demo.life.set_process(false)
	check(market_meshes()==installed and meshes()==houses,"cold publication equals incremental world and mesh arrays")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok and pool()==original,"actual unclipped PCM and original voice pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"frontages":installed};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("MARKET_FRONTAGES_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

extends "res://tools/check_creation_roof_valleys_live.gd"
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
func pool()->Array:
	var ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
	return [ids,demo.music._effects.size(),demo.music.spatial.report().bus_count]
func meshes()->Dictionary:
	var result:Dictionary={}
	for id:String in demo.town.house_roots:
		var hashes:Array=[]
		for mesh:MeshInstance3D in demo.town.house_roots[id].find_children("*","MeshInstance3D",true,false):
			for surface in range(mesh.mesh.get_surface_count()):
				var digest:=HashingContext.new();digest.start(HashingContext.HASH_SHA256);digest.update(var_to_bytes(mesh.mesh.surface_get_arrays(surface)));hashes.append(digest.finish().hex_encode())
		result[id]=hashes
	return result
func run()->void:
	OUT="res://验证记录/M84/prototype_roles_20261029/live"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();var city:=State.new();city.initialize_free()
	await show(city,Vector2(-22,-15),"原型用途");quiet()
	var cases:Array=[["clockwork","clock_turret","clockmaker"],["pastoral","ionic_stoa","venue"],["modern_eco","twin_gable","workshop"],["pastoral","rotunda","atelier"]]
	for i in range(cases.size()):
		var row:Array=cases[i];var before:Dictionary=demo.state.snapshot();var count:int=demo.state._undo.size()
		check(Brush.select(demo.state,row[0],row[1]) and demo.state.snapshot()==before,"transient prototype choice "+row[1])
		var result:Dictionary=demo.state.add_house(Vector2(-29+i*5.,-15));demo._after_edit(result,"history");await settle();quiet()
		check(result.ok and demo.state.houses[-1].role==row[2] and demo.state._undo.size()==count+1,"public new prototype role in one transaction "+row[1])
	var built:Array=demo.state.houses.duplicate(true);var initial:=meshes();var far:int=demo.town.house_roots.h1.get_instance_id()
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses.size()==3 and not demo.town.house_roots.has("h4"),"native Undo removes building and its role")
	await key(KEY_Y,true);await settle();quiet();check(demo.state.houses==built and meshes()==initial,"native Redo restores exact author fields and installed arrays")
	check(demo.town.house_roots.h1.get_instance_id()==far,"distant house instance survives local new-house UndoRedo")
	await select_house("h2");await key(KEY_ESCAPE)
	var changed:Dictionary=demo.state.set_house_role("h2","bakery");demo._after_edit(changed,"history");await settle();quiet()
	check(changed.ok and demo.state.houses[1].role=="bakery","manual use overrides seeded cultural use")
	await key(KEY_Z,true);await settle();quiet();check(demo.state.houses[1].role=="venue","native Undo restores seeded role")
	await key(KEY_Y,true);await settle();quiet();check(demo.state.houses[1].role=="bakery","native Redo restores manual use")
	demo.focus=Vector3(-21.5,1.,-15);demo.zoom=23.;demo.pitch=.7;demo.yaw=.2;demo._update_camera();demo.ui_layer.hide()
	for phase in range(3):demo._set_light_phase(phase);await create_timer(1.).timeout;await capture("prototype_roles_phase"+str(phase))
	var authored:Dictionary=demo.state.snapshot();var incremental:=meshes();var path:=OUT+"/work.json"
	var file:=FileAccess.open(path,FileAccess.WRITE);file.store_string(JSON.stringify(authored,"",true,true));file.close()
	var cold:=State.new();check(cold.restore(JSON.parse_string(FileAccess.get_file_as_string(path))).ok and cold.snapshot()==authored,"disk cold read retains original and manually overridden roles")
	await show(cold,Vector2(-22,-15),"原型用途冷读");quiet();check(meshes()==incremental,"cold publication equals incremental installed mesh arrays")
	facts.master=await Probe.record(OUT+"/Master.wav",3.2);check(facts.master.ok,"actual Master PCM saved without clipping")
	check(pool()==voices,"original 12long/4short/6bus/2nature pool retained")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PROTOTYPE_ROLES_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

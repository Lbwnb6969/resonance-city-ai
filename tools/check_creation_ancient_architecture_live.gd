extends "res://tools/check_creation_music_experience_live.gd"
const Fixture=preload("res://tools/fixtures/city_creation_ancient_fixture.gd")
func capture(label:String)->void:
	if "--geometry-only" not in OS.get_cmdline_user_args():await super.capture(label)
func run()->void:
	OUT="res://验证记录/M43/geometry_final" if "--geometry-only" in OS.get_cmdline_user_args() else "res://验证记录/M43/accepted"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var f:=Fixture.build();await show(f.city,Vector2(-20,-10),"ancient");demo.life.set_process(false)
	for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).poll();demo.get_meta(meta).set_process(false)
	await settle();demo.set_process(false);var snapshot:Dictionary=demo.state.snapshot()
	check(DisplayServer.get_name()!="headless","actual OpenGL")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size
		for phase in [0,2]:
			demo._set_light_phase(phase)
			for i in range(f.ids.size()):
				var id:String=f.ids[i];var h:Dictionary=demo.town._house_record(id);demo.focus=Vector3(h.origin[0]+(1.8 if i==3 else .7),1.5,h.origin[1]+(1.8 if i==3 else 0.));demo.zoom=12. if i==3 else 8.;demo.yaw=.62
				for pitch in [10,35]:demo.pitch=deg_to_rad(pitch);demo._update_camera();await capture("%d_%d_%d_%d"%[size.x,i,phase,pitch])
				await physics_frame;var at:=Vector3(h.origin[0]+.45,0,h.origin[1]);var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(at+Vector3.UP*15,at+Vector3.UP*.5,1))
				check(not hit.is_empty() and hit.collider.get_meta("house_id","")==id,"actual rotated-independent roof identity "+id)
	var temple:Node3D=demo.town.house_roots[f.ids[0]].find_child("GreekTempleMassing",true,false)
	var round:Node3D=demo.town.house_roots[f.ids[2]].find_child("RomanCircularCella",true,false)
	var space:PhysicsDirectSpaceState3D=demo.get_world_3d().direct_space_state
	var clear:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(temple.to_global(Vector3(0,.8,1.7)),temple.to_global(Vector3(0,.8,1.15)),1))
	check(clear.is_empty(),"true colonnade middle approach has no invisible collision box")
	var column:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(temple.to_global(Vector3(-.32,.8,1.7)),temple.to_global(Vector3(-.32,.8,1.15)),1))
	check(not column.is_empty() and column.collider.get_meta("house_id","")==f.ids[0],"actual Doric column mesh picks same house")
	var aperture:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(round.to_global(Vector3(0,4,0)),round.to_global(Vector3(0,.4,0)),1))
	check(aperture.is_empty(),"actual oculus and ring cornice remain physically hollow")
	var shell:Dictionary=space.intersect_ray(PhysicsRayQueryParameters3D.create(round.to_global(Vector3(2,.8,0)),round.to_global(Vector3(.7,.8,0)),1))
	check(not shell.is_empty() and shell.collider.get_meta("house_id","")==f.ids[2],"actual circular shell collision preserves authored identity")
	check(demo.state.snapshot()==snapshot,"viewing does not rewrite saved city")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(60):await process_frame;var now:=Time.get_ticks_usec();frames.append(float(now-last)/1000.);last=now
	frames.sort()
	var audio:Dictionary=await Probe.record(OUT+"/Master.wav",6.2);check(audio.ok,"actual Master unclipped")
	var reader:=State.new();check(reader.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok and reader.snapshot()==snapshot,"actual live city cold roundtrip")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"audio":audio,"frame_p95_ms":frames[56],"frame_max_ms":frames[-1]},"\t",true,true))
	print("ANCIENT_LIVE ",checks," ",failures);quit(0 if failures.is_empty() else 1)


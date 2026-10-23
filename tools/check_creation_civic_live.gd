extends RefCounted
const Fixture = preload("res://tools/fixtures/city_creation_civic_fixture.gd")
const Scene = preload("res://scenes/city_creation.tscn")
const Stamp = preload("res://scripts/ui/city_creation_postcard_stamp.gd")
const Probe = preload("res://tools/fixtures/city_creation_audio_probe.gd")
var tree: SceneTree
var demo
var out := "res://验证记录/M24"
var checks: Array = []
var facts: Dictionary = {}
func check(ok: bool, label: String) -> void:
	checks.append({"ok":ok,"label":label})
	if not ok: push_error(label)
func settle() -> void:
	var end := Time.get_ticks_msec()+45000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end: await tree.process_frame
	check(not demo.edit_pending() and not demo._edit_ui_pending,"real civic publication completes")
	for i in range(4): await tree.process_frame
	await tree.physics_frame
func capture(name: String) -> void:
	demo.town.clear_preview(); demo.toast.hide(); demo.toast_time=0
	var frame: Image = await Stamp.scene_frame(demo)
	check(frame.save_png(out+"/"+name+".png")==OK,"native civic frame "+name)
func signature() -> Array:
	var result: Array = []
	for node: Node3D in demo.town.house_roots.values():
		for item: Node in node.find_children("*","Node3D",true,false):
			if item.has_meta("civic_archetype"): result.append([node.name,item.name,item.get_meta("civic_archetype"),item.transform])
	result.sort_custom(func(a,b):return str(a)<str(b))
	return result
func run(scene_tree: SceneTree) -> void:
	tree=scene_tree
	for arg: String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="): out=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	if "--civic-only" not in OS.get_cmdline_user_args():
		check(await preload("res://tools/fixtures/city_creation_chemistry_live_probe.gd").run(tree,false,out+"/chemistry"),"six original geometry/pooled sound preview kinds still pass")
	tree.root.size=Vector2i(1440,900); Engine.max_fps=120
	var personal := FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate(); demo.persistence=false; demo.collection_directory=out+"/临时作品库"; tree.root.add_child(demo); demo.life.set_process(false)
	var end := Time.get_ticks_msec()+30000
	while demo.music._loading and Time.get_ticks_msec()<end: await tree.process_frame
	var voices: Array = demo.music.get_children().map(func(n):return n.get_instance_id())
	var data := Fixture.build(); var city: RefCounted = data.city
	demo._after_edit(demo.state.restore(city.snapshot()),"history"); await settle()
	demo.life.set_process(true); await tree.create_timer(.25).timeout; demo.life.set_process(false)
	demo.get_meta("inspiration_draft").poll(); demo.get_meta("vignette_journey").poll()
	var snapshot: Dictionary = demo.state.snapshot(); var courts: Array = demo.state.courtyard_plans()
	check(courts.size()==1 and courts[0].tiles.size()==4,"same real closed courtyard and acoustic plan")
	var arches := 0; var upper := 0; var clear := true
	for id: String in data.court_ids:
		for node: Node3D in demo.town.house_roots[id].find_children("*","Node3D",true,false):
			if node.get_meta("civic_archetype","")=="peristyle":
				arches+=1
				var from: Vector3=node.to_global(Vector3(-.85,.65,-.20)); var to: Vector3=node.to_global(Vector3(.85,.65,-.20))
				clear=clear and demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(from,to,1)).is_empty()
			if node.has_meta("peristyle_terrace"): upper+=1
	var expected := 0
	for id: String in data.court_ids:
		expected+=preload("res://scripts/world/city_creation_arcade_plan.gd").for_house(demo.state,demo.town._house_record(id)).filter(func(f):return f.source=="courtyard").size()
	check(arches==expected and arches>0 and upper==arches and clear,"every planned inward gallery has clear physics corridor and matching upper retreat")
	var start: String = demo.life.connected_houses.get(data.court_ids[0],"")
	var finish: String = demo.life.connected_houses.get(data.court_ids[2],"")
	var route: Array = demo.life._route(start,finish)
	check(route.size()>=2 and route.all(func(p):return p.is_finite()),"production resident graph still routes between actual courtyard homes")
	facts.gallery={"arches":arches,"upper_terraces":upper,"clear":clear,"route":route,"start":start,"finish":finish,"connections":demo.life.connected_houses.duplicate(true)}
	var representatives: Array = [{"id":data.court_ids[0],"at":Vector3(-25,1.2,-21),"zoom":17.,"kind":"peristyle"}]
	for id: String in data.studio_ids+data.hall_ids:
		var house: Dictionary = demo.town._house_record(id)
		representatives.append({"id":id,"at":Vector3(house.origin[0]+(.9 if id==data.studio_ids[1] else 0),1.0,house.origin[1]+(.9 if id==data.studio_ids[1] else 0)),"zoom":10.,"kind":"rotunda" if id in data.studio_ids else "guildhall"})
	var original := signature(); facts.archetypes=original
	demo.ui_layer.hide(); demo.yaw=-.55
	for size: Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size
		for i in range(representatives.size()):
			var row: Dictionary = representatives[i]
			demo.focus=row.at; demo.zoom=row.zoom
			for phase in range(3):
				demo.pitch=.78; demo._set_light_phase(phase); demo._update_camera()
				await capture("civic_%d_%d_%s_phase%d"%[size.x,i,row.kind,phase])
			for angle in [5,10,15]:
				demo.pitch=deg_to_rad(angle); demo._set_light_phase(0); demo._update_camera()
				check(absf(rad_to_deg(asin(demo.camera.global_basis.z.y))-angle)<.01,"actual low civic camera "+str(angle))
				await capture("civic_%d_%d_%s_low%d"%[size.x,i,row.kind,angle])
	check(demo.state.snapshot()==snapshot and demo.state.courtyard_plans()==courts,"all view changes leave complete world and courtyard unchanged")
	# Role changes alter the actual roof, with conserved native undo/redo.
	var target: String = data.hall_ids[1]
	demo._after_edit(demo.state.set_house_role(target,"residential"),"room"); await settle()
	check(not demo.town.house_roots[target].has_node("PedimentedGuildhall"),"changing actual workshop role removes civic hall roof")
	for code: int in [KEY_Z,KEY_Y,KEY_Z]:
		for down: bool in [true,false]:
			var event := InputEventKey.new(); event.keycode=code; event.ctrl_pressed=true; event.pressed=down; tree.root.push_input(event); await tree.process_frame
		await settle()
	check(signature()==original,"native undo/redo restores every civic mass and terrace")
	var saved: Dictionary = demo.state.snapshot()
	check(demo.state.save_city(out+"/civic_city.json").ok,"actual atomic civic save is isolated")
	var loaded := Fixture.State.new(); var result: Dictionary = loaded.restore(JSON.parse_string(FileAccess.get_file_as_string(out+"/civic_city.json")))
	check(result.ok and loaded.snapshot()==saved,"complete civic world roundtrips through disk JSON")
	demo._after_edit(demo.state.restore(loaded.snapshot()),"history"); await settle()
	check(signature()==original and demo.state.courtyard_plans()==courts,"fresh civic render retains exact saved archetypes and real courtyard")
	facts.audio=await Probe.record(out+"/Master.wav",3.2); check(facts.audio.ok,"actual Master audible and unclipped")
	check(demo.music.get_children().map(func(n):return n.get_instance_id())==voices and demo.music._players.size()==12 and demo.music._effects.size()==4 and demo.music.spatial._names.size()==6 and demo.ambience.get_child_count()==2,"same twelve/four/six/two original audio pool")
	check((FileAccess.get_file_as_bytes(Fixture.State.DEFAULT_PATH) if FileAccess.file_exists(Fixture.State.DEFAULT_PATH) else PackedByteArray())==personal,"personal user storage bytes untouched")
	var ok := checks.all(func(c):return c.ok)
	FileAccess.open(out+"/civic_live.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":ok,"checks":checks,"facts":facts},"\t",true,true))
	print("CIVIC_LIVE ",JSON.stringify({"ok":ok,"checks":checks.size(),"audio":facts.audio,"failed":checks.filter(func(c):return not c.ok)}))
	demo.queue_free(); await tree.process_frame; tree.quit(0 if ok else 1)

extends "res://tools/check_creation_reference_music_live.gd"
const Footprints=preload("res://scripts/visual/city_creation_street_furniture_footprints.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const Meadow=preload("res://scripts/visual/city_creation_meadow.gd")
var cases:Array=[]
func compare_cold(label:String,at:Vector2)->void:
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(demo.state.snapshot(),"",true,true))).ok,"actual publication cold JSON "+label)
	var meadow:=Meadow.new();meadow.record_only=true;meadow.setup(cold)
	var blocks:Array[Vector2i]=[Vector2i(floori(at.x/8.),floori(at.y/8.))];meadow.rebuild({},blocks)
	check(meadow.base_records[blocks[0]]==demo.town.meadow.base_records[blocks[0]],"published incremental lawn equals independent cold records "+label);meadow.free()
func capture(label:String)->void:
	demo.toast_time=0.;demo.toast.hide();demo.town.clear_preview()
	for i in range(3):await process_frame
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(OUT+"/"+label+".png")==OK,"actual same-view image "+label)
func run()->void:
	OUT="res://验证记录/M83/furniture_baseline"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	var verify:bool="--verify-contact" in OS.get_cmdline_user_args()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var voices:=pool()
	for choice:String in ["trees","benches","flowers"]:
		var city:=State.new();city.initialize_free()
		check(city.add_road([Vector2(-32,-20),Vector2(-13,-20)] as Array[Vector2],"gravel","none",1.25,choice).ok,"actual decorated road "+choice)
		await show(city,Vector2(-28,-20),choice);quiet();demo.life.set_process(false)
		var records:Array=demo.town.promenade.prepare(demo.town,demo.state.roads[0]);var record:Dictionary=records[1]
		demo.focus=Vector3(record.at.x,.3,record.at.y);demo.zoom=6.;demo.yaw=.5;demo.pitch=.50;demo._update_camera();demo.ui_layer.hide();await settle()
		var visible:=0;var count:=0
		for fp:Variant in Footprints.for_record(record):
			var bounds:=Footprints.Frame.bounds(fp)
			for x in range(9):
				for z in range(9):
					var at:Vector2=bounds.position+bounds.size*Vector2((x+.5)/9.,(z+.5)/9.)
					if not Footprints.Frame.contains(fp,at):continue
					var mask:=Mask.new();mask.setup(demo.state,Vector2i(floori(at.x/8.),floori(at.y/8.)))
					visible+=int(mask.visible(at,.18));count+=1
		cases.append({"choice":choice,"visible_inside":visible,"samples":count,"record":record})
		if verify:check(visible==0,"fine grass roots cannot occupy actual furniture solids "+choice)
		for phase in range(3):demo._set_light_phase(phase);await capture(choice+"_phase"+str(phase))
		if verify:
			var far:Array=demo.town.meadow.base_records[Vector2i(3,3)]
			var changed:Dictionary=demo.state.add_road([Vector2(-32,-20),Vector2(-13,-20)] as Array[Vector2],"gravel","none",1.25,"none")
			demo._after_edit(changed,"history");await settle();quiet();await compare_cold(choice+" removed",record.at)
			check(changed.ok and is_same(far,demo.town.meadow.base_records[Vector2i(3,3)]),"actual furniture edit retains distant lawn "+choice)
			demo._after_edit(demo.state.undo(),"history");await settle();quiet();await compare_cold(choice+" Undo",record.at)
			demo._after_edit(demo.state.redo(),"history");await settle();quiet();await compare_cold(choice+" Redo",record.at)
	var recording:Dictionary=await Probe.record(OUT+"/street_contact_city.wav",4.)
	check(recording.ok,"actual natural ambience on empty-road fixture, zero clipping")
	check(pool()==voices,"original bounded audio pool retained")
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for i in range(120):
		await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"verified_contact":verify,"cases":cases,"recording":recording,"bank_signature":demo.music.BankCache.source_signature(),"capped_for_observation":60,"frame_p95_ms":frames[113],"frame_max_ms":frames[-1]}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("STREET_FURNITURE_CONTACT ",JSON.stringify(report));demo.queue_free();await process_frame;await create_timer(.2).timeout;quit(0 if failures.is_empty() else 1)

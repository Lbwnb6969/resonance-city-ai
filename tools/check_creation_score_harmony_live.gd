extends "res://tools/check_creation_close_life_audio_live.gd"
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Master=preload("res://scripts/audio/city_creation_master_score.gd")
const Harmony=preload("res://scripts/audio/city_creation_score_harmony.gd")
const SpatialFixture=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd")
func p_key(down:bool)->void:
	var event:=InputEventKey.new();event.device=92;event.keycode=KEY_P;event.physical_keycode=KEY_P;event.pressed=down;root.push_input(event);await process_frame
func hover_house(id:String)->void:
	var house:Dictionary=demo.town._house_record(id);var at:Vector2=demo.camera.unproject_position(Vector3(house.origin[0],float(house.get("base_y",0.))+1.2,house.origin[1]))
	var event:=InputEventMouseMotion.new();event.device=92;event.position=at;event.global_position=at;root.push_input(event);await process_frame
func inside(midi:int,chord:Array)->bool:return chord.any(func(n):return posmod(int(n)-midi,12)==0)
func run()->void:
	OUT="res://验证记录/M84/shared_harmony_20261029/live";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();var original:=pool()
	var fixture:=SpatialFixture.build();check(fixture.ok,"normal public free-city fixture with real resident routes")
	await show(fixture.city,Vector2(-30,-20),"母曲单音共享和声");quiet();demo.zoom=9.;demo.life.set_process(true);var actor:=ready_actor("step");check(not actor.is_empty(),"actual resident available")
	var saved:Dictionary=demo.state.snapshot();facts.modes=[]
	FileAccess.open(OUT+"/before_world.json",FileAccess.WRITE).store_string(JSON.stringify(saved,"\t"))
	check(demo.music.audio_report.get("bank_source")=="precompiled","unchanged production precompiled bank")
	check(not Import.request_master(demo.music,0,4).ok,"public audition guard remains until composite cues are integrated")
	for mode in [4,8,0]:
		demo.life.set_process(false);var before_preview:Dictionary=demo.state.snapshot()
		var data:=Master.section(0,mode)
		# Exercise the production worker below the public all-cue guard. Only the
		# covered single-note callers are assessed; this is not an all-cue release.
		check(Import._request_data(demo.music,data).ok,"production worker accepts internal test section "+str(mode))
		check(await wait_for(func():return demo.music.get_meta("authored_score",{}).get("signature","")==data.signature,60000),"actual metadata and PCM published together "+str(mode))
		check(await wait_for(func():return demo.music._variation_active.values().has("study1/"+data.signature+"/lead"),15000),"actual pooled lead adopts mapped score "+str(mode))
		check(await wait_for(func():return [["foundation","foundation"],["air","pulse"],["terrace","answer"]].all(func(pair):return demo.music._variation_active.get(pair[0],"")=="study1/"+data.signature+"/"+pair[1]),15000),"three actual support players adopt same section "+str(mode))
		check(demo.state.snapshot()==before_preview,"preview worker never edits author state or real inventory "+str(mode))
		var all_keys:=true
		for bar in range(8):
			for house:Dictionary in demo.state.houses:
				var base:=Harmony.Pitch.plan(demo.state,str(house.id),bar*3.+.01,mode);var row:=Harmony.pluck(demo.music,base,bar*3.+.01)
				all_keys=all_keys and demo.music._edit_streams.has(row.stream_key)
		check(all_keys,"all fixture house mapped notes exist in original bank "+str(mode))
		if mode==4:check(await wait_for(func():return Harmony.current(demo.music,demo.music.CueGrid.transport_clock(demo.music)).bar==1,26000),"real transport reaches previously conflicting second bar")
		demo.life.set_process(true);helper().events.clear();var record:=Span.start();var shorts:=short_recorders();var deadline:=Time.get_ticks_msec()+2200
		while Time.get_ticks_msec()<deadline:follow(actor);await process_frame
		var contacts:Array=helper().events.duplicate(true);var pcm:=Span.finish(record,OUT+"/mode"+str(mode)+"_Master.wav");var buses:=end_short(shorts,"mode"+str(mode))
		check(pcm.ok and buses.any(func(b):return b.peak>.00001),"real Master and nonzero short-bus PCM "+str(mode))
		check(not contacts.is_empty() and contacts.all(func(e):return e.get("harmony_signature","")==data.signature and inside(int(e.midi),data.harmony[int(e.bar)])),"actual resident contacts share adopted mother chord "+str(mode))
		check(contacts.all(func(e):return demo.music._edit_streams[e.stream_key].get_instance_id()==int(e.stream_id)),"reported contact pitch key is the actual played stream "+str(mode))
		var grids:Array=demo.music.get_meta("cue_grid_events",[])
		check(contacts.all(func(e):return grids.any(func(g):return g.serial==e.serial and g.stream_id==e.stream_id and int(g.bar)==int(e.bar))),"resolved chord agrees with actual quantized playback bar "+str(mode))
		demo.life.set_process(false);var before_input:Dictionary=demo.state.snapshot()
		demo.focus=Vector3(-30,.8,-20);demo.zoom=12.;demo._update_camera();await process_frame
		var serial:int=demo.music.get_meta("held_strum_serial",0);await p_key(true);await hover_house("h1")
		check(await wait_for(func():return int(demo.music.get_meta("held_strum_serial",0))>serial),"native P and roof hover execute original foreground queue "+str(mode))
		await p_key(false);var held:Dictionary=demo.music.get_meta("held_strum",{});var voice:AudioStreamPlayer
		for player:AudioStreamPlayer in demo.music._effects:
			if player.get_instance_id()==held.get("player_id",0):voice=player
		var held_harmony:=Harmony.current(demo.music,float(held.get("clock",0.)))
		check(held.get("harmony_signature","")==data.signature and inside(int(held.get("midi",0)),held_harmony.chord) and voice!=null and voice.stream!=null,"native held note uses current mother chord on original short player "+str(mode))
		check(demo.music.Construction.house(demo.music,"h1"),"real construction API queues ascending house note "+str(mode))
		check(await wait_for(func():return demo.music._pluck_active.get("harmony_signature","")==data.signature and demo.music._pluck_active.has("construction_step")),"construction executes shared chord and original PCM bank "+str(mode))
		var note:Dictionary=demo.music._pluck_active.duplicate();check(demo.music._pluck_stream==demo.music._edit_streams[note.stream_key] and inside(int(note.midi),data.harmony[int(note.bar)]),"construction attribution equals actual player stream "+str(mode))
		check(demo.state.snapshot()==before_input,"native musical inputs preserve current author state and earned inventory "+str(mode))
		facts.modes.append({"mode":mode,"signature":data.signature,"contacts":contacts,"pcm":pcm,"buses":buses,"held":held,"construction":note})
		if mode==4:await capture("mapped_mode4_single_notes")
	var after:Dictionary=demo.state.snapshot();FileAccess.open(OUT+"/after_world.json",FileAccess.WRITE).store_string(JSON.stringify(after,"\t"))
	facts.changed_fields=saved.keys().filter(func(k):return saved[k]!=after[k]);print("AUTHOR_DIFF ",facts.changed_fields)
	check(facts.changed_fields.all(func(k):return k=="workshop_supply"),"only actual simulated workshop deliveries may advance during resident recording")
	demo.life.set_process(false);Import.discard(demo.music,demo.music.get_meta("authored_score"));check(not demo.music.has_meta("authored_score") and Harmony.current(demo.music,3.).signature.is_empty(),"discard retires owner-local harmony")
	check(demo.music._biome_mode==Harmony.Palette.for_city(demo.state),"discard restores actual city mode immediately")
	var legacy:=State.new();legacy.initialize();await show(legacy,Vector2(-5,0),"经典城和声恢复");quiet();check(Harmony.current(demo.music,3.).signature.is_empty(),"city switch never retains preview harmony")
	check(Import.Document.read("res://数据/原创谱材/河湾练习_v1/score.json").ok,"old authored schema1 remains readable")
	check(pool()==original,"original twelve long four short six buses two nature pool unchanged")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("SCORE_HARMONY_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

extends "res://tools/check_creation_music_experience_live.gd"
const Civic=preload("res://scripts/world/city_creation_civic_supply.gd")
const CivicFixture=preload("res://tests/test_city_creation_civic_supply.gd")
const Rarity=preload("res://scripts/world/city_creation_draft_rarity.gd")
const Encore=preload("res://scripts/world/city_creation_debut_encore.gd")
func click(button:Button)->void:
	var at:=button.get_global_rect().get_center();Input.warp_mouse(at)
	var move:=InputEventMouseMotion.new();move.position=at;Input.parse_input_event(move);await process_frame
	var event:=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.pressed=true;Input.parse_input_event(event);await process_frame
	event=InputEventMouseButton.new();event.button_index=MOUSE_BUTTON_LEFT;event.position=at;event.pressed=false;Input.parse_input_event(event);await process_frame
func run()->void:
	OUT="res://验证记录/M46/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();demo.life.set_process(false)
	var ids:Array=[]
	for player:AudioStreamPlayer in demo.music._players.values():ids.append(player.get_instance_id())
	if "--cold-only" in OS.get_cmdline_user_args():
		await cold_only(personal,ids);return
	var city:=CivicFixture.fixture()
	for x:float in [-30.,-26.,-22.,-18.]:check(city.add_house(Vector2(x,-12)).ok,"real additional resident home")
	check(city.add_road([Vector2(-33,-15.45),Vector2(-33,-10.45)] as Array[Vector2]).ok and city.add_road([Vector2(-33,-10.45),Vector2(-18,-10.45)] as Array[Vector2]).ok,"real third-row walking streets")
	await show(city,Vector2(-25,-18),"civic_supply")
	var draft=demo.get_meta("inspiration_draft");draft.poll();draft.postponed=true;draft.display()
	facts.debut_ms=[]
	for i in range(5):
		var id:="h%d"%[i+1];var result:Dictionary=demo.state.set_house_role(id,Civic.ROLES[i])
		check(result.ok,"actual public role: "+Civic.ROLES[i]);var began:=Time.get_ticks_usec()
		demo._after_edit(result,"room");var elapsed:=(Time.get_ticks_usec()-began)/1000.
		var received:bool=demo.state.wish_rewards.get(id,{}).has("water" if i==0 else "tree") if i<2 else demo.state.harmony_journey.get("receipts",{}).has("debut/"+id+"/"+Encore.KINDS[Civic.ROLES[i]])
		check(received and elapsed<200.,"first-show object/table recorded synchronously within .2s")
		facts.debut_ms.append(elapsed);await settle();draft.postponed=true;draft.display()
	Civic.bind(demo.life)
	check(Civic.status(demo.state,"h4").tier==2 and Civic.status(demo.state,"h2").tier==2,"actual workshop-to-academy supply reached both second tiers")
	demo.spatial_popover.open_for_house("h4");await settle();await capture("academy_supply_1440");demo.spatial_popover.close()
	check(demo.state.life_progress.tea_parties==0,"first cafe feedback did not count a nonexistent party")
	demo.life.set_process(true)
	check(await wait_for(func():return int(demo.state.life_progress.tea_parties)>0,95000),"actual residents buy bread, follow streets, occupy seats and complete their first supplied tea")
	check(int(demo.state.harmony_journey.get("receipts",{}).get("civic_meal/h3",0))>0,"a real seated tea group consumed conserved bakery food")
	check(Civic.status(demo.state,"h3").tier==2 and Civic.status(demo.state,"h1").tier==2,"actual tea supply reaches both second tiers")
	check(await wait_for(func():return not demo.music.get_meta("civic_duet_events",[]).is_empty(),10000),"supplied tea plays a real flute/oboe duet in the original short pool")
	facts.economy={"bread":demo.state.bakery_supply.duplicate(true),"craft":demo.state.workshop_supply.duplicate(true),"progress":demo.state.life_progress.duplicate(true),"deliveries":demo.state.get_meta("civic_deliveries",[]).duplicate(true),"duets":demo.music.get_meta("civic_duet_events",[]).duplicate(true)}
	demo.life.set_process(false);demo.music.set_cafe_view(demo.life.cafe.view())
	var music_record:Dictionary=await Probe.record(OUT+"/supplied_cafe_Master.wav",12.2);facts.recording=music_record;check(music_record.ok,"actual supplied-cafe Master has bounded level and no clipping")
	if not demo.state.get_meta("encore_events",[]).any(func(e):return e.ambient):
		demo.life.set_process(true)
		check(await wait_for(func():return demo.state.get_meta("encore_events",[]).any(func(e):return e.ambient),55000),"actual ambient controller celebrates fresh work after its 48-second interval")
		demo.life.set_process(false)
	else:check(true,"actual ambient controller already recorded its earned return")
	check(not Encore.encore(demo,str(demo.state.get_meta("encore_events",[])[-1].id)),"brushing cannot duplicate celebration progress inside cooldown or without new work")
	facts.encores=demo.state.get_meta("encore_events",[]).duplicate(true)
	await create_timer(.4).timeout;await capture("supplied_street_1440")
	draft.poll();draft.postponed=false;draft.refresh(true)
	check(draft.paper.visible and draft.buttons.size()==3,"earned civic activity opens the actual three-card draft")
	var offers:Array=demo.state.harmony_journey.pending_draft.duplicate()
	var serial:=int(demo.state.harmony_journey.get("draft_serial",0));await click(draft.reroll_button);await settle()
	check(int(demo.state.harmony_journey.receipts.get("rerolls/"+str(serial),0))==1,"real native pointer click spends the reroll of this invitation")
	await capture("rarity_cards_1440");root.size=Vector2i(1024,768);await settle();await capture("rarity_cards_1024")
	var chosen:String=demo.state.harmony_journey.pending_draft[0];var tier:=Rarity.tier(demo.state.harmony_journey,chosen)
	await click(draft.buttons[chosen]);await settle()
	check(int(demo.state.harmony_journey.rarity_ranks.get(chosen,0))==tier,"native card selection persists its displayed rarity")
	check(demo.state.set_journey_checkpoint(demo.life.checkpoint()).ok,"actual production, attendance and worker routes validate for checkpoint")
	var saved:Dictionary=demo.state.snapshot()
	FileAccess.open(OUT+"/actual_city.json",FileAccess.WRITE).store_string(JSON.stringify(saved,"\t",true,true))
	var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"complete actual fifth-phase city cold-restores through JSON")
	for field:String in ["bakery_supply","workshop_supply","harmony_journey"]:
		var left:Dictionary=demo.state.get(field);var right:Dictionary=copy.get(field)
		if left!=right:
			for key:Variant in left:
				if left.get(key)!=right.get(key):print("COLD_FIELD_DIFF ",field,"/",key," live ",JSON.stringify(left[key])," cold ",JSON.stringify(right.get(key)))

	check(copy.bakery_supply==demo.state.bakery_supply and copy.workshop_supply==demo.state.workshop_supply and copy.harmony_journey==demo.state.harmony_journey,"actual stocks, instrument ownership, rarity and reroll receipts survive exact cold round trip")
	facts.rarities=demo.state.harmony_journey.get("rarity_ranks",{}).duplicate()
	await finish(personal,ids)

func cold_only(personal:PackedByteArray,ids:Array)->void:
	var data:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://验证记录/M46/cold_verified/actual_city.json"))
	var city:=State.new();check(city.restore(data).ok,"actual previous live city validates, including conserved academy instruments")
	await show(city,Vector2(-25,-18),"civic_cold_continue")
	var saved:Dictionary=demo.state.snapshot();var copy:=State.new()
	check(copy.restore(JSON.parse_string(JSON.stringify(saved,"",true,true))).ok,"production full-precision JSON cold-restores the actual city")
	check(copy.bakery_supply==demo.state.bakery_supply and copy.workshop_supply==demo.state.workshop_supply and copy.harmony_journey==demo.state.harmony_journey,"all stocks, acquired rarities, reroll receipts and exact active-poem coordinates survive cold restore")
	check(Civic.status(demo.state,"h4").tier==2 and Civic.status(demo.state,"h3").tier==2,"loaded actual town rederives academy and cafe second tiers")
	facts.recording=await Probe.record(OUT+"/cold_Master.wav",3.3)
	check(facts.recording.ok,"actual loaded fifth-phase Master has no clipping")
	await capture("cold_city_1440")
	await finish(personal,ids)

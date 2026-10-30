extends "res://tools/check_creation_placed_landmarks_live.gd"
const ConversionFixture=preload("res://tools/fixtures/city_creation_growth_conversion_fixture.gd")
const Receipts=ConversionFixture.Receipts
const Journey=ConversionFixture.Journey
const OldQuest=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
const AudioProbe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
func economic()->Array:
	return [demo.state.harmony_journey.harmony_xp,demo.state.harmony_journey.harmony_level,demo.state.harmony_journey.get("xp_remainder",0.),Journey.credits(demo.state.harmony_journey),demo.state.harmony_journey.pending_draft.duplicate(),demo.state.harmony_journey.get("draft_rarities",{}).duplicate()]
func run()->void:
	OUT="res://验证记录/M84/growth_conversion_20261030/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input();quiet();var voices:=pool()
	await show(ConversionFixture.legacy_pending(),Vector2(-25,-25),"旧额度转换");quiet()
	var original:Array=demo.state.harmony_journey.pending_draft.duplicate();var metadata:Array=[demo.state.harmony_journey.draft_serial,demo.state.harmony_journey.draft_rarities.duplicate()]
	var added:Dictionary=demo.state.add_house(Vector2(-29,-14));demo._after_edit(added,"room");await settle()
	var expected:=State.new();check(expected.restore(demo.state.snapshot()).ok,"independent original collector reads current legacy geometry");var payout:Dictionary=Receipts.collect(expected)
	check(added.ok and payout.earned>=2,"actual pending pre-conversion house difference exists")
	await key(KEY_F1);await settle();var options:Node=demo.get_meta("creation_options")
	check(options.convert_button.is_visible_in_tree() and "不再新增经营共鸣" in options.convert_button.tooltip_text,"native conversion explains cutoff and retained old rights")
	await capture("legacy_conversion_entry");await ui_click(options.convert_button);await settle()
	check(await wait_for(func():return not options.last_conversion.is_empty() and not demo.gallery.busy,12000),"native conversion completes backed-up work transaction")
	check(options.last_conversion.ok and demo.state.harmony_journey.growth_cutoff.source=="converted_legacy" and not options.convert_button.visible,"actual handbook click commits cutoff and retires conversion button")
	check(demo.state.harmony_journey.harmony_xp==expected.harmony_journey.harmony_xp and demo.state.harmony_journey.pending_draft==original and [demo.state.harmony_journey.draft_serial,demo.state.harmony_journey.draft_rarities]==metadata,"real conversion settles exact old difference without replacing invitation metadata")
	var backup:=State.new();check(backup.load_city(options.last_conversion.backup).ok and not backup.CreationPolicy.is_free(backup) and not backup.harmony_journey.has("growth_cutoff"),"actual button-produced backup remains original legacy work")
	await capture("converted_handbook");await key(KEY_ESCAPE)
	var cut:=economic();var created:Dictionary=demo.state.add_house(Vector2(-26,-14));demo._after_edit(created,"room");await settle();quiet()
	check(created.ok and economic()==cut,"real post-conversion edit and UI collector do not award new XP")
	await key(KEY_Z,true);await settle();quiet();await key(KEY_Y,true);await settle();quiet();check(economic()==cut and demo.state.harmony_journey.has("growth_cutoff"),"native geometry Undo/Redo cannot undo cutoff or consume remainder")
	for size:Vector2i in [Vector2i(1024,768),Vector2i(1440,900)]:
		root.size=size;await settle();await key(KEY_F1);await settle();var letters:Node=demo.get_meta("city_letters")
		check(not letters.claim.disabled and Rect2(Vector2.ZERO,Vector2(size)).encloses(letters.claim.get_global_rect()),"original credit remains reachable from native handbook "+str(size.x))
		await ui_click(letters.claim);await settle();var draft:Node=demo.get_meta("inspiration_draft")
		check(draft.paper.visible and draft.buttons.keys()==original and "旧城传承" in draft.badge.tooltip_text,"native old invitation contains original three cards "+str(size.x))
		await capture("old_invitation_"+str(size.x));draft.postponed=true;draft.paper.hide()
	var draft:Node=demo.get_meta("inspiration_draft");await key(KEY_F1);await settle();await ui_click(demo.get_meta("city_letters").claim);await settle()
	await ui_click(draft.reroll_button);await settle();var paid:Array=demo.state.harmony_journey.pending_draft.duplicate();var paid_metadata:Array=[demo.state.harmony_journey.draft_serial,demo.state.harmony_journey.draft_rarities.duplicate()]
	check(Journey.Rarity.rerolls_left(demo.state.harmony_journey)==0,"native original reroll budget consumed once")
	draft.postponed=true;draft.paper.hide();await key(KEY_Z,true);await settle();quiet()
	check(demo.state.harmony_journey.pending_draft==paid and [demo.state.harmony_journey.draft_serial,demo.state.harmony_journey.draft_rarities]==paid_metadata and Journey.Rarity.rerolls_left(demo.state.harmony_journey)==0,"native reroll Undo preserves paid invitation and spent budget")
	await key(KEY_F1);await settle();await ui_click(demo.get_meta("city_letters").claim);await settle();await ui_click(draft.buttons[paid[0]]);await settle();quiet()
	check(Journey.credits(demo.state.harmony_journey)==0 and demo.state.harmony_journey.ranks.get(paid[0],0)==1,"native old credit redeems actual chosen card")
	await capture("old_credit_claimed");await key(KEY_Z,true);await settle();quiet()
	check(Journey.credits(demo.state.harmony_journey)==1 and demo.state.harmony_journey.pending_draft==paid and Journey.Rarity.rerolls_left(demo.state.harmony_journey)==0,"native choice Undo restores only same old paid offer")
	await key(KEY_Y,true);await settle();quiet();check(Journey.credits(demo.state.harmony_journey)==0,"native choice Redo redeems same historic credit")
	var cold:=State.new();var saved:Dictionary=demo.state.harmony_journey.duplicate(true)
	check(demo.state.save_city(OUT+"/claimed.json").ok and cold.load_city(OUT+"/claimed.json").ok and cold.harmony_journey==saved,"claimed cutoff disk cold reads exact ledgers")
	await show(cold,Vector2(-25,-25),"旧权益冷读");quiet();check(demo.state.harmony_journey==saved,"actual cold scene publishes no new offer or payout")
	var quest_city:RefCounted=OldQuest.start(OldQuest.Vignettes.IDS[0]);var quest:Dictionary=quest_city.harmony_journey.active_vignette.duplicate(true)
	check(quest_city.CreationPolicy.convert(quest_city,OUT+"/old_letter.json").ok,"real unfinished old letter cutoff")
	var changes:=OldQuest.construct(quest_city);check(changes.all(func(r):return r.ok),"actual construction after cutoff meets old letter geometry")
	await show(quest_city,Vector2(quest.anchor[0],quest.anchor[1]),"原来信延期领取");quiet()
	check(not demo.state.harmony_journey.active_vignette.is_empty() and not demo.state.harmony_journey.growth_cutoff.vignette.claimed,"eligible old letter remains unpaid until explicit journal action")
	await key(KEY_J);await settle();var history:Node=demo.get_meta("historical_tasks");demo.journal.cards.get_parent().ensure_control_visible(history.read);await settle();await ui_click(history.read);await settle()
	check(history.last_result.status=="claimed" and demo.state.harmony_journey.growth_cutoff.vignette.claimed and demo.state.harmony_journey.active_vignette.is_empty(),"native history button claims only preserved old letter once")
	check(history.last_result.reward.xp==OldQuest.Vignettes.template(quest.id).reward_xp,"native old letter pays original actual amount")
	await capture("old_letter_claimed");var earned:Dictionary=demo.state.harmony_journey.duplicate(true)
	await ui_click(history.read);await settle();check(demo.state.harmony_journey==earned,"native repeated read cannot pay old reward twice")
	await key(KEY_ESCAPE);await key(KEY_Z,true);await settle();quiet();await key(KEY_Y,true);await settle();quiet();check(demo.state.harmony_journey==earned,"native geometry history cannot revive consumed old letter")
	var pcm:Dictionary=await AudioProbe.record(OUT+"/Master.wav",3.2)
	check(pcm.ok and pool()==voices,"actual Master and original bounded audio pool")
	check(DisplayServer.get_name()!="headless" and AudioServer.get_driver_name()=="WASAPI","real NVIDIA OpenGL and WASAPI")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save byte identical")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.,"actual_settlement":payout.earned,"master":pcm,"bank_signature":demo.music.BankCache.source_signature()}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("GROWTH_CONVERSION_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

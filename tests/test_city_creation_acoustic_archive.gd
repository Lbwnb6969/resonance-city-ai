extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Store=preload("res://scripts/world/city_creation_acoustic_archive.gd")
const Fixture=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Phono=preload("res://scripts/audio/city_creation_phonograph.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const OUT="res://验证记录/留声机与名胜图鉴_2026-10-22"
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var archive:=Store.new();archive.enabled=true;archive.directory=OUT+"/cpu_"+str(Time.get_ticks_usec())
	var disabled:=Store.new();disabled.directory=OUT+"/disabled_"+str(Time.get_ticks_usec());var blank:=State.new();blank.initialize()
	check(not disabled.observe(blank).changed and not DirAccess.dir_exists_absolute(disabled.directory),"disabled verification store never writes personal data")
	var old:=blank.snapshot()
	check(not blank.set_house_finish("h1","river_jade").ok and not blank.set_music_mode("gong_pentatonic").ok,"unearned paints and modes remain locked")
	var worlds:Array=[Fixture.pastoral(),Fixture.highland(),Fixture.renaissance(),Fixture.clockwork(),Fixture.chrono()]
	for i in range(worlds.size()):
		var city:RefCounted=worlds[i]
		var result:=archive.observe(city)
		check(result.ok and not city.synergy_buffs().active_chords.is_empty(),"real construction discovers chord in world "+str(i))
	check(archive.chords.size()==5 and archive.awards==["five_chords"],"five genuinely constructed chord combinations across worlds award one permanent entry")
	var reloaded:=Store.new();reloaded.directory=archive.directory;reloaded.enabled=true;reloaded.load_records()
	check(reloaded.chords==archive.chords and reloaded.awards==archive.awards,"new archive instance restores immutable discovery receipts")
	var count:=DirAccess.open(archive.directory).get_files().size()
	check(not archive.observe(worlds[-1]).changed and DirAccess.open(archive.directory).get_files().size()==count,"observing unchanged work creates no duplicate receipt")
	blank.apply_archive_unlocks(reloaded.awards)
	check(blank.set_house_finish("h1","river_jade").ok and blank.set_music_mode("gong_pentatonic").ok,"permanent reward applies real finish and tonal choice in a new town")
	var saved:Dictionary=JSON.parse_string(JSON.stringify(blank.snapshot()));var copy:=State.new()
	check(saved.schema==19 and copy.restore(saved).ok and copy.houses[0].finish=="river_jade" and copy.music_mode=="gong_pentatonic","portable reward and chosen finish/key survive JSON without adding growth chapters")
	check(copy.growth_memories.is_empty() and copy.life_progress==blank.life_progress,"cosmetic archive never fabricates native journal or production history")
	check(blank.undo().ok and blank.music_mode.is_empty() and blank.archive_unlocks==["five_chords"] and blank.redo().ok,"authored mode undo keeps the permanent earned permission")
	var bad:=saved.duplicate(true);bad.archive_unlocks=[]
	check(not copy.restore(bad).ok,"save cannot use a locked reward key")
	bad=saved.duplicate(true);bad.archive_unlocks=["unknown"]
	check(not copy.restore(bad).ok,"unknown award rejected")
	check(copy.restore(old).ok and copy.archive_unlocks.is_empty() and copy.music_mode.is_empty(),"old work restores neutral key/permissions through the unchanged API")
	for mode in [8,9]:
		var progression:Array=Palette.chords(mode)
		check(progression.size()==8 and progression[7][0]%12==[0,5][mode-8],"reward mode terminates in its own tonic: "+str(mode))
		var safe:=true
		for rank in range(14):safe=safe and Palette.stair_pitch(mode,rank)%12 in Palette.KEY_TONES[mode]
		check(safe,"all fourteen actual keyboard ranks belong to reward mode: "+str(mode))
	var legacy_mix:=Phono.reconstruct(worlds[2],{"focus":[-10.,0.,0.],"zoom":24.})
	check(Phono.valid(legacy_mix),"pre-phonograph work reconstructs a valid mix from original city")
	bad=legacy_mix.duplicate(true);bad.tracks.wood.key="not-a-resource"
	check(not Phono.valid(bad),"mix descriptor cannot reference arbitrary resource paths")
	grand(archive)
	var broken:=FileAccess.open(archive.directory+"/receipt_broken.json",FileAccess.WRITE);broken.store_string("{}");broken.close()
	reloaded.load_records()
	check(reloaded.awards.size()==2 and not reloaded.error.is_empty() and FileAccess.file_exists(archive.directory+"/receipt_broken.json"),"bad receipt preserves valid permanent awards and original invalid bytes")
	var marker:=archive.directory+"/blocked_target";var blocker:=FileAccess.open(marker,FileAccess.WRITE);blocker.store_string("original");blocker.close()
	var refused:=Store.new();refused.enabled=true;refused.directory=marker
	check(not refused.observe(worlds[0]).ok and refused.awards.is_empty() and refused.chords.is_empty() and FileAccess.get_file_as_string(marker)=="original","failed publication never grants memory-only progress or overwrites the blocking original")
	print("ACOUSTIC_ARCHIVE ",JSON.stringify({"checks":checks,"failures":failures,"archive":archive.summary()}))
	quit(0 if failures.is_empty() else 1)
func grand(archive:RefCounted)->void:
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"real hundred-house four-era example loads")
	var hall:=""
	for house:Dictionary in city.houses:
		if house.get("signature","")=="floating_amphitheater":hall=str(house.id)
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	check(archive.observe(city).ok and "century_symphony" not in archive.awards,"loading a hundred houses with old concerts never manufactures the new achievement")
	check(life.invite_landmark_movement(hall).ok,"real landmark movement invitation succeeds")
	life.cancel_concert();archive.observe(city,life.last_completed_movement)
	check("century_symphony" not in archive.awards,"cancelled gathering never awards a completed symphony")
	check(life.invite_landmark_movement(hall).ok,"actual movement can start after cancellation")
	var before:=int(city.life_progress.concerts)
	for i in range(1800):
		life._process(.5)
		if int(city.life_progress.concerts)>before:break
	var result:Dictionary=archive.observe(city,life.last_completed_movement)
	check(result.ok and "century_symphony" in archive.awards and life.last_completed_movement.eras.size()==4,"actual full movement completion with four eras awards the permanent hundred-house record")
	city.apply_archive_unlocks(archive.awards)
	check(city.set_music_mode("impressionist_major7").ok and city.set_house_finish("h1","opal").ok and State.new().restore(city.snapshot()).ok,"earned second key and rendered finish remain save-compatible")
	check(not archive.observe(city,life.last_completed_movement).changed,"re-observing completed event never duplicates the award")
	life.free()

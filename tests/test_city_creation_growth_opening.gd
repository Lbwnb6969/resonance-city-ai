extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Historical=preload("res://tools/fixtures/city_creation_pre_cutoff_free.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Opening=preload("res://scripts/world/city_creation_growth_opening.gd")
const Benefits=preload("res://scripts/world/city_creation_functional_benefits.gd")
const Journey=Receipts.Journey
const Library=preload("res://scripts/world/city_creation_collection.gd")
var out:="res://验证记录/M84/free_growth_opening_20261030/cpu"
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func raw(path:String)->RefCounted:
	var city:=State.new();var read:Dictionary=city.Serializer.read(city,path)
	check(read.ok and city.restore(read.data).ok,"read-only cold audit "+path)
	return city
func old_pending()->RefCounted:
	var city:=Historical.fresh();Receipts.initialize(city)
	for i in range(50):assert(city.add_house(Vector2(-35+(i%10)*3.,-35+(i/10)*3.)).ok)
	assert(Receipts.collect(city).earned==100)
	assert(city.add_house(Vector2(-35,-14)).ok and city.add_house(Vector2(-32,-14)).ok)
	return city
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	var began:=Time.get_ticks_msec();DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var city:=State.new();city.initialize_free()
	check(city.harmony_journey.growth_cutoff.source=="new_free" and city.harmony_journey.harmony_level==1 and city.harmony_journey.harmony_xp==0 and Journey.credits(city.harmony_journey)==0,"normal new free starts at explicit zero-growth boundary")
	for i in range(50):check(city.add_house(Vector2(-35+(i%10)*3.,-35+(i/10)*3.)).ok,"real new free authored home")
	check(Receipts.collect(city).earned==0 and Journey.credits(city.harmony_journey)==0 and city.harmony_journey.pending_draft.is_empty(),"fifty actual new free houses never open a new reward pool")
	var ledger:Dictionary=city.harmony_journey.duplicate(true)
	check(Benefits.award_xp(city,10000.).earned==0 and not Journey.add_harmony_xp(city.harmony_journey,10000).leveled_up and city.harmony_journey==ledger,"both normal city and raw dictionary XP APIs stay stopped")
	check(city.undo().ok and city.redo().ok and city.harmony_journey==ledger,"new free geometry history preserves stop and true receipts")
	var untouched:Dictionary=city.snapshot()
	check(not city.choose_era_modifier("garden_salons").ok and city.snapshot()==untouched,"direct era-modifier API cannot create a new free invitation outside old receipts")
	var forged:Dictionary=untouched.duplicate(true);forged.harmony_journey.harmony_level=2;forged.harmony_journey.pending_draft=Journey.roll_inspiration_draft(forged.harmony_journey,1,74001)
	check(not city.restore(forged).ok and city.snapshot()==untouched,"new-free source cannot carry an old positive credit ledger")
	forged.harmony_journey.growth_cutoff.source="migrated_free"
	check(State.new().restore(forged).ok,"same positive ledger is valid as archived migrated-free data")
	check(city.save_city(out+"/new.json").ok,"new free disk save")
	var fresh:=State.new();var opened:Dictionary=fresh.load_city(out+"/new.json")
	check(opened.ok and not opened.growth_opening.migrated and fresh.harmony_journey==ledger,"new boundary cold opens without retroactive migration")
	for biome:String in State.Biomes.IDS:
		var seeded:=State.new();check(seeded.CreationPolicy.initialize_biome(seeded,biome,"2026-10-30").ok and seeded.harmony_journey.growth_cutoff.source=="new_free","real biome entry starts stopped "+biome)
		check(not preload("res://scripts/world/city_creation_heritage_draft.gd").grant(seeded,["five_chords","century_symphony"]) and Journey.credits(seeded.harmony_journey)==0 and not seeded.harmony_journey.has("heritage_credit"),"archive awards do not create new free heritage pool "+biome)
	var old:=old_pending();old.harmony_journey.xp_remainder=.7
	var before:Dictionary=old.snapshot();var original:Dictionary=old.harmony_journey.duplicate(true)
	check(old.save_city(out+"/old.json").ok,"actual historical free input saved")
	var bytes:=FileAccess.get_file_as_bytes(out+"/old.json");var reader:=State.new();reader.initialize_empty();reader.add_house(Vector2(10,10))
	var migrated:Dictionary=reader.load_city(out+"/old.json")
	check(migrated.ok and migrated.growth_opening.migrated and not migrated.growth_opening.cached and migrated.growth_opening.earned==4,"formal old-free load settles exactly two old real house events")
	check(reader.harmony_journey.growth_cutoff.source=="migrated_free" and reader.harmony_journey.harmony_xp==4 and is_equal_approx(reader.harmony_journey.xp_remainder,.7),"old free exact integer and fractional history preserved")
	for field:String in ["pending_draft","draft_serial","draft_rarities","ranks","traditions"]:check(reader.harmony_journey.get(field)==original.get(field),"old original invitation format retained "+field)
	check(FileAccess.get_file_as_bytes(out+"/old.json")==bytes and raw(migrated.growth_opening.backup).snapshot()==before,"original raw file bytes and independent pre-migration city remain exact")
	var baseline:Dictionary=reader.snapshot();var again:Dictionary=reader.load_city(out+"/old.json")
	check(again.ok and again.growth_opening.cached and again.growth_opening.earned==0 and reader.snapshot()==baseline,"reopening unchanged old source uses persisted boundary instead of another settlement")
	check(reader.add_house(Vector2(-29,-14)).ok and Receipts.collect(reader).earned==0,"new event after old-free opening never reaches pre-cutoff settlement")
	check(reader.undo().ok and reader.redo().ok and reader.harmony_journey.harmony_xp==4,"old-free geometry Undo/Redo cannot restart growth")
	check(Journey.choose(reader,reader.harmony_journey.pending_draft[0]).ok and Journey.credits(reader.harmony_journey)==0,"original old-free credit stays redeemable")
	check(reader.save_city(out+"/changed.json").ok and fresh.load_city(out+"/changed.json").ok and fresh.harmony_journey==reader.harmony_journey,"changed cutoff work cold reads consumed old credit without new offer")
	spatial_settlement()
	old_formats()
	failure_boundaries(before)
	collection_original(before)
	var legacy:=State.new();legacy.initialize_empty();Receipts.initialize(legacy);legacy.add_house(Vector2(-25,-12));legacy.save_city(out+"/legacy.json")
	var ordinary:=State.new();var classic:Dictionary=ordinary.load_city(out+"/legacy.json")
	check(classic.ok and not classic.growth_opening.migrated and Receipts.collect(ordinary).earned==2 and not ordinary.harmony_journey.has("growth_cutoff"),"formal legacy load remains genuine old growth")
	check(ordinary.choose_era_modifier("garden_salons").ok,"legacy direct era-modifier API retains original eligibility")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"elapsed_seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("GROWTH_OPENING ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func spatial_settlement()->void:
	var fixture:=preload("res://tools/fixtures/city_creation_functional_zones_fixture.gd").build(Historical.fresh());var city:RefCounted=fixture.city
	check(fixture.ok,"actual old-free artisan, market and courtyard geometry")
	Receipts.initialize(city);city.harmony_journey.xp_remainder=.3
	check(city.add_house(Vector2(-35,16)).ok,"actual last old-free home event")
	var history:Array=[city.life_progress.duplicate(true),city.bakery_supply.duplicate(true),city.workshop_supply.duplicate(true),city.cafe_progress.duplicate(true),city.houses.duplicate(true)]
	var migrated:=Opening.ensure(city,out+"/spatial")
	check(migrated.ok and migrated.earned==84 and city.harmony_journey.harmony_xp==84,"original true graph grants 62 old points times official 1.35 plus old .3 remainder")
	check([city.life_progress,city.bakery_supply,city.workshop_supply,city.cafe_progress,city.houses]==history,"graph-only settlement starts no Life, production, visits or author edits")
	check(raw(migrated.backup).harmony_journey.harmony_xp==0,"spatial migration backup precedes all old difference settlement")
func failure_boundaries(before:Dictionary)->void:
	var city:=State.new();city.restore(before);city.rotate_house("h1",.3);var retained:Dictionary=city.snapshot();var flags:Array=[city.dirty,city.life_progress_dirty,city._undo.duplicate(true),city._redo.duplicate(true),city._wish_epoch]
	var blocked:=out+"/blocked";FileAccess.open(blocked,FileAccess.WRITE).store_string("retained directory blocker")
	check(not Opening.ensure(city,blocked).ok and city.snapshot()==retained and [city.dirty,city.life_progress_dirty,city._undo,city._redo,city._wish_epoch]==flags,"backup directory failure preserves live city, flags and authored history")
	var source:=JSON.stringify(retained,"\t",true,true).sha256_text();var conflict:=out+"/publish_failure"
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(conflict.path_join("成长截止").path_join(source+".json")))
	check(not Opening.ensure(city,conflict).ok and city.snapshot()==retained and [city.dirty,city.life_progress_dirty,city._undo,city._redo,city._wish_epoch]==flags,"late atomic cache publication failure leaves original city and cutoff absent")
	var corrupt:=out+"/corrupt";var first:=Opening.ensure(city,corrupt);check(first.ok,"independent valid cache before corruption test")
	var encoded:=FileAccess.get_file_as_string(first.path);var malformed:Dictionary=JSON.parse_string(encoded);malformed.sha256="wrong";FileAccess.open(first.path,FileAccess.WRITE).store_string(JSON.stringify(malformed,"\t",true,true))
	var old:=State.new();old.restore(retained);var unchanged:Dictionary=old.snapshot()
	check(not Opening.ensure(old,corrupt).ok and old.snapshot()==unchanged and FileAccess.get_file_as_string(first.path)!=encoded,"bad cached boundary is refused without silently recalculating or replacing originals")
	FileAccess.open(out+"/bad_source.json",FileAccess.WRITE).store_string("broken original")
	check(not old.load_city(out+"/bad_source.json").ok and old.snapshot()==unchanged,"bad source load fails before touching current city")
func collection_original(before:Dictionary)->void:
	var library:=Library.new();library.directory=out+"/works";var cover:=Image.create(24,24,false,Image.FORMAT_RGBA8);cover.fill(Color.DARK_GREEN)
	var view:={"focus":[-25.,.8,-25.],"yaw":.25,"pitch":.8,"zoom":18.,"evening":false,"light_phase":0}
	var saved:Dictionary=library.save("真实旧free版本",before,view,cover)
	check(saved.ok,"actual immutable old-free collection version saved")
	var bytes:=FileAccess.get_file_as_bytes(saved.path);var read:Dictionary=library.read(saved.id)
	check(read.ok and not read.world.harmony_journey.has("growth_cutoff") and not DirAccess.dir_exists_absolute(library.directory.path_join("成长截止")),"collection read and listing validation perform no migration I/O")
	var candidate:=State.new();candidate.restore(read.world);var opened:=Opening.ensure(candidate,library.directory,read.path)
	check(opened.ok and candidate.harmony_journey.growth_cutoff.source=="migrated_free","formal candidate opening uses separate backed-up cutoff city")
	check(FileAccess.get_file_as_bytes(saved.path)==bytes and library.read(saved.id).world==read.world and library.entries().items.size()==1,"immutable original envelope, cover and collection entry remain unchanged")
	var repeated:=State.new();repeated.restore(library.read(saved.id).world);var cached:=Opening.ensure(repeated,library.directory,read.path)
	check(cached.ok and cached.cached and repeated.harmony_journey==candidate.harmony_journey,"same immutable source reopens same recorded cutoff without replaying settlement")
	var moved:=out+"/works_moved";var absolute_out:=ProjectSettings.globalize_path(out)
	check(ProjectSettings.globalize_path(library.directory).begins_with(absolute_out+"/") and ProjectSettings.globalize_path(moved).begins_with(absolute_out+"/") and DirAccess.rename_absolute(ProjectSettings.globalize_path(library.directory),ProjectSettings.globalize_path(moved))==OK,"move only the verified isolated work directory with all originals and backups")
	library.directory=moved;var relocated:Dictionary=library.read(saved.id);var reopened:=State.new();reopened.restore(relocated.world)
	var relocated_opening:=Opening.ensure(reopened,library.directory,relocated.path)
	check(relocated.ok and relocated_opening.ok and relocated_opening.cached and reopened.harmony_journey==candidate.harmony_journey,"whole collection directory relocation preserves cached cutoff and readable original backup")
func old_formats()->void:
	# Explicit archived numeric formats, independent of the current new-town API.
	for missing:bool in [false,true]:
		var city:=old_pending();city.harmony_journey.harmony_level=3;city.harmony_journey.harmony_xp=7;city.harmony_journey.xp_remainder=.7
		if missing:city.harmony_journey.erase("draft_serial");city.harmony_journey.erase("draft_rarities")
		var original:Dictionary=city.harmony_journey.duplicate(true);var folder:=out+"/old_format_"+str(missing)
		var migrated:=Opening.ensure(city,folder)
		check(migrated.ok and Journey.credits(city.harmony_journey)==2 and city.harmony_journey.harmony_xp==11 and is_equal_approx(city.harmony_journey.xp_remainder,.7),"old-free multi-credit and fraction settle original difference "+str(missing))
		check(city.harmony_journey.pending_draft==original.pending_draft and city.harmony_journey.get("draft_serial")==original.get("draft_serial") and city.harmony_journey.get("draft_rarities")==original.get("draft_rarities"),"old-free opening does not fill or reroll original invitation metadata "+str(missing))
		var first:String=city.harmony_journey.pending_draft[0];check(Journey.choose(city,first).ok and Journey.credits(city.harmony_journey)==1 and Journey.choose(city,city.harmony_journey.pending_draft[0]).ok and Journey.credits(city.harmony_journey)==0,"all old-free historic credits remain redeemable "+str(missing))
	var quest_fixture=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
	var legacy:RefCounted=quest_fixture.start(quest_fixture.Vignettes.IDS[0]);var historical:Dictionary=legacy.snapshot();var extension:Dictionary=Historical.fresh().snapshot()
	historical.schema=20
	for key:String in legacy.CreationPolicy.Save.FIELDS:historical[key]=extension[key]
	var city:=State.new();check(city.restore(historical).ok,"valid archived free-policy format carries actual originally offered letter")
	var opening:=Opening.ensure(city,out+"/old_letter");var quest:Dictionary=city.harmony_journey.active_vignette.duplicate(true)
	check(opening.ok and city.harmony_journey.growth_cutoff.vignette.id==quest.id and not city.harmony_journey.growth_cutoff.vignette.claimed,"old-free first opening preserves unpaid original letter identity")
	var changes:Array=quest_fixture.construct(city);check(changes.all(func(r):return r.ok),"actual new construction completes retained old-free letter")
	var network:RefCounted=load("res://scripts/world/city_creation_network.gd").new();network.state=city;network._build_graph();city.prepare_regional_echo(network)
	var reward:Dictionary=quest_fixture.Vignettes.complete(city,network.connected_houses)
	check(not reward.is_empty() and reward.xp==quest_fixture.Vignettes.template(quest.id).reward_xp and city.harmony_journey.growth_cutoff.vignette.claimed,"real old-free letter claims original reward once after opening")
	var ledger:Dictionary=city.harmony_journey.duplicate(true)
	check(quest_fixture.Vignettes.complete(city,network.connected_houses).is_empty() and city.undo().ok and city.redo().ok and city.harmony_journey==ledger,"old-free history cannot revive consumed old-letter payout")

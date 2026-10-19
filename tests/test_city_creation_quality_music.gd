extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Music=preload("res://scripts/audio/city_creation_music.gd")
var failures: Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"actual flagship restores")
	var fast:=Music.new();var full:=Music.new();fast.update_city(city);full.update_city(city)
	fast.set_listener_frame(Vector2(-25,-27),Vector2.RIGHT,23.);full.set_listener_frame(Vector2(-25,-27),Vector2.RIGHT,23.)
	var grouping_revision:=int(fast.acoustic.revision)
	var groups: Array=fast.canon.groups.duplicate(true);var origins: Dictionary={}
	for house: Dictionary in city.houses:
		var era: String=city.house_era(house)
		if not house.has("signature") and not origins.has(era):origins[era]=house.id
	var native_us:=0;var full_us:=0;var exact:=true
	# Audio view fixture only. Earned tiers and schema validity belong to the
	# existing Quality/Life tests; this compares the two actual catalog APIs.
	for tier in range(2,6):
		var events: Array=[]
		for id: String in origins.values():
			city.building_quality[id]={"level_tier":tier,"source_id":id,"street":true,"amenity":true,"prestige":true}
			events.append({"house_id":id,"from":tier-1,"to":tier})
		var began:=Time.get_ticks_usec();fast.update_quality(city,events);native_us+=Time.get_ticks_usec()-began
		began=Time.get_ticks_usec();full.update_city(city);full_us+=Time.get_ticks_usec()-began
		exact=exact and fast._house_music==full._house_music and fast._targets==full._targets and fast._daily_houses==full._daily_houses and fast._tower_count==full._tower_count
	check(exact and origins.size()==4,"all four eras and tiers 2-5 match the full production music catalog exactly")
	check(fast.acoustic.zones==full.acoustic.zones and fast.acoustic.focus_ids==full.acoustic.focus_ids and fast.acoustic.linked_ids==full.acoustic.linked_ids,"quality-only catalog changes retain the exact four-zone weights and membership of a full refresh")
	check(fast.acoustic.revision==grouping_revision,"service rewards do not repeat unchanged geometric grouping")
	check(fast.canon.groups==groups,"quality changes preserve the current geometric canon rings")
	for id: String in origins.values():
		city.house_improvements[id]=2;city.house_culture[id]=1;city.house_clockwork[id]=1
		fast.update_house_traits(city,[id]);full.update_city(city)
	check(fast._house_music==full._house_music and fast._targets==full._targets,"actual woodwork, painting and clockwork catalog fields match full refresh after each installation")
	var before: Dictionary=city.snapshot();fast.update_quality(city,[{"house_id":"h99999","to":5}])
	check(city.snapshot()==before and fast._house_music==full._house_music,"stale removed-house event neither invents an audio source nor mutates city state")
	var other:=State.new();other.initialize();fast.update_quality(other,[{"house_id":"h1","to":2}]);full.update_city(other)
	check(fast._pluck_city==other and fast._house_music==full._house_music,"switching cities still builds the new catalog")
	fast.free();full.free();print("QUALITY_MUSIC ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"incremental_us":native_us,"full_us":full_us,"failures":failures}));quit(0 if failures.is_empty() else 1)

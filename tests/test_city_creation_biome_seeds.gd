extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Biomes=preload("res://scripts/world/city_creation_biome_seeds.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Harmony=preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func roundtrip(city:RefCounted,label:String)->RefCounted:
	var restored:=State.new();var loaded:Dictionary=restored.restore(JSON.parse_string(JSON.stringify(city.snapshot())))
	check(loaded.ok,label+" validated JSON restore: "+str(loaded.get("message","")))
	return restored
func run()->void:
	for id:String in Biomes.IDS:
		var city:=State.new();var built:Dictionary=Biomes.create(city,id,"2026-10-21")
		check(built.ok,id+" creates actual world: "+str(built.get("message","")))
		var loaded:=roundtrip(city,id)
		check(loaded.biome_seed==city.biome_seed and loaded.terrain_strokes==city.terrain_strokes and loaded.waters==city.waters and loaded.plants==city.plants,id+" preserves authored seed and editable world")
		check(city.life_progress.tea_parties==0 and city.life_progress.purchases==0 and city.growth_memories.is_empty() and city.era_unlocks==["pastoral"],id+" never invents earned life or era history")
	var peaks:=State.new();Biomes.create(peaks,"terraced_peaks")
	var heights:Array=[]
	for z:float in [-15.,-1.,13.]:heights.append(peaks.ground_height(Vector2(-20,z)))
	check(heights[0]>=1. and heights[1]>heights[0]+.8 and heights[2]>heights[1]+.8,"three actual sampled terrace levels: "+str(heights))
	var high:Dictionary=peaks.add_house(Vector2(-20,13));var flat:Dictionary=peaks.add_house(Vector2(14,0))
	check(high.ok and flat.ok and peaks.set_house_role(high.house_id,"workshop").ok,"build ordinary real highland workshop")
	check(is_equal_approx(float(peaks.biome_bonus(high.house_id).production),1.4) and is_equal_approx(float(peaks.biome_bonus(flat.house_id).production),1.),"40 percent production belongs only to real elevated homes")
	var production:float=peaks.site_production_multiplier(high.house_id)
	check(peaks.set_house_palette(high.house_id,1).ok and peaks.undo().ok and is_equal_approx(peaks.site_production_multiplier(high.house_id),production),"appearance undo preserves seed production")
	check(is_equal_approx(roundtrip(peaks,"highland workshop").site_production_multiplier(high.house_id),production),"real production factors survive JSON")
	var islands:=State.new();Biomes.create(islands,"misty_archipelago")
	check(islands.waters.size()==4 and islands.water_clearance(Vector2(-12,-14))>3. and islands.water_clearance(Vector2(islands.waters[0].points[0][0],islands.waters[0].points[0][1]))<0.,"four dry buildable islands are enclosed by actual water")
	var bridge:Dictionary=islands.add_road([Vector2(-27,-14),Vector2(-12,-14)] as Array[Vector2])
	check(bridge.ok and islands.roads[0].bridge,"ordinary road validation produces a real sandbar bridge")
	var home:Dictionary=islands.add_house(Vector2(-15,-11))
	check(home.ok and islands.set_house_role(home.house_id,"bakery").ok,"place island bakery on actual dry shore")
	if home.ok:
		var blessing:Dictionary=islands.site_blessing(home.house_id)
		check(is_equal_approx(float(blessing.speed_multiplier),1.7) and int(blessing.bonus_batch)==2,"island water bonus doubles only the existing water increments")
	var forest:=State.new();Biomes.create(forest,"sylvan_sanctuary")
	check(forest.plants.size()>100 and forest.Signatures.planted_count(forest)==0 and forest.signature_unlocks==["botanical_palace"],"real retained forest grants palace entitlement, not 120 fabricated player plants")
	var homes:Array[String]=[]
	for at:Vector2 in [Vector2(-20,-20),Vector2(-16.4,-20),Vector2(-12.8,-20)]:
		var added:Dictionary=forest.add_house(at)
		check(added.ok,"build actual forest choir home")
		if added.ok:homes.append(added.house_id)
	var rows:Dictionary=Catalog.prepare(forest).houses;var acoustic:=Acoustic.new();acoustic.focus=Vector2(-17,-20);acoustic.evaluate(rows,[])
	var music:Dictionary=Harmony.evaluate(rows,acoustic,[],0,false)
	check(homes.size()==3 and rows[homes[0]].biome_forest and float(music.targets.wood_sylvan)>-55.,"three-home retained forest wakes an actual synchronized forest layer")
	for plant:Dictionary in forest.plants:plant.source="player"
	forest.revision+=1
	check(not forest.biome_bonus(homes[0]).forest,"planted replacements do not masquerade as retained seed forest")
	var night:=State.new();Biomes.create(night,"starlight_nocturne")
	var resident:Dictionary=night.add_house(Vector2(-6,0));var workshop:Dictionary=night.add_house(Vector2(-6,4))
	night.set_house_role(workshop.house_id,"workshop")
	rows=Catalog.prepare(night).houses;acoustic=Acoustic.new();acoustic.focus=Vector2(-30,0);acoustic.zoom=25.;acoustic.evaluate(rows,[])
	check(night.microclimate=="starlight_fireflies" and float(rows[resident.house_id].radius_multiplier)==1.5 and float(rows[workshop.house_id].radius_multiplier)==1.,"night starts in real weather and only warm homes receive enlarged voice radius")
	check(acoustic.weight(resident.house_id)>0. and acoustic.weight(workshop.house_id)==0.,"per-house 50 percent sound radius changes actual grouping weights")
	check(night.add_road([Vector2(-8,1.55),Vector2(-8,7)] as Array[Vector2],"promenade").ok and float(night.biome_bonus(workshop.house_id).radius)==1.5,"a real lamp street extends neighboring workshop voice")
	var gifts:Dictionary={};var timestamp:=Time.get_unix_time_from_datetime_string("2026-10-01T00:00:00")
	for offset in range(40):
		var day:=Time.get_date_string_from_unix_time(timestamp+offset*86400)
		var seed:=Biomes.descriptor("daily_resonance",day);var gift:String=Biomes.profile(seed).gift
		if gifts.has(gift):continue
		var daily:=State.new();var created:=Biomes.create(daily,"daily_resonance",day)
		check(created.ok and daily.houses.size()==1 and daily.houses[0].get("signature","")==gift,"daily date "+day+" places the real gifted "+gift+": "+str(created))
		var loaded:=roundtrip(daily,"daily "+gift)
		check(loaded.era_unlocks==["pastoral"] and loaded.life_progress.tea_parties==0,"gifted "+gift+" keeps ordinary era and visit locks")
		var again:=State.new();Biomes.create(again,"daily_resonance",day)
		check(again.snapshot()==daily.snapshot(),"daily "+gift+" creates the same geometry, IDs and gift on the same date")
		gifts[gift]=true
	check(gifts.size()==6,"daily dates can actually place all six different landmarks")
	var legacy:=State.new();legacy.initialize();var snapshot:Dictionary=legacy.snapshot()
	check(not snapshot.has("biome_seed") and night.restore(snapshot).ok and night.biome_seed.is_empty(),"old city load clears prior seed without changing legacy format")
	var malformed:Dictionary=peaks.snapshot();malformed.schema=18
	check(not State.new().restore(malformed).ok,"seed needs schema19")
	malformed=peaks.snapshot();malformed.biome_seed={"id":"daily_resonance","day":"2026-02-30"}
	check(not State.new().restore(malformed).ok,"invalid daily calendar date is rejected")
	malformed=peaks.snapshot();malformed.biome_seed={"id":"sunny_banks","gift":"clockwork_depot"}
	check(not State.new().restore(malformed).ok,"seed cannot carry arbitrary forged gifts")
	print("BIOME_SEEDS ",checks-failures.size(),"/",checks," ",failures)
	quit(0 if failures.is_empty() else 1)

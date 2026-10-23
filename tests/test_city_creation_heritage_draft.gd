extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Heritage=preload("res://scripts/world/city_creation_heritage_draft.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize():run.call_deferred()
func check(ok:bool,label:String):
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run():
	var blank:=State.new();blank.initialize_empty()
	check(not Heritage.grant(blank,["five_chords"]),"ordinary old/blank town receives no retroactive draft")
	for biome:String in State.Biomes.IDS:
		var city:=State.new();check(city.Biomes.create(city,biome,"2026-10-23").ok,"actual new biome: "+biome)
		check(not Heritage.grant(city,[]) and city.harmony_journey.is_empty(),"unearned archive grants nothing: "+biome)
		var native:Dictionary=city.life_progress.duplicate(true);var memories:Array=city.growth_memories.duplicate()
		check(Heritage.grant(city,["five_chords","century_symphony"]) and Journey.credits(city.harmony_journey)==1,"both awards grant exactly one city-owned leaf")
		var j:Dictionary=city.harmony_journey
		check(j.harmony_level==1 and j.harmony_xp==0 and j.pending_draft.size()==3 and city.life_progress==native and city.growth_memories==memories,"heritage fabricates no XP, era or life history")
		check(j.pending_draft.all(func(id):return not Journey.cards()[id].has("era") or Journey.cards()[id].era in city.era_unlocks),"heritage respects current era")
		var copy:=State.new();check(copy.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok and copy.harmony_journey==j,"unfinished heritage JSON round-trip")
		check(Journey.choose(city,str(j.pending_draft[0])).ok and Journey.credits(j)==0,"actual level-one card choice spends the heritage credit")
		check(not Heritage.grant(city,["five_chords"]) and Journey.credits(j)==0,"repeated grant cannot refresh spent credit")
		check(city.undo().ok and Journey.credits(city.harmony_journey)==1 and city.redo().ok and Journey.credits(city.harmony_journey)==0,"one authored card transaction conserves gift on undo/redo")
		check(copy.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok and not Heritage.grant(copy,["five_chords"]),"spent gift survives reopen without new credit")
		var bad:Dictionary=city.snapshot();bad.harmony_journey.heritage_credit=2;check(not copy.restore(bad).ok,"two heritage credits rejected")
		bad=city.snapshot();bad.archive_unlocks=[];check(not copy.restore(bad).ok,"gift without archive permission rejected")
		bad=city.snapshot();bad.harmony_journey.receipts.erase("heritage/draft");check(not copy.restore(bad).ok,"gift without permanent receipt rejected")
	var old:=State.new();old.Biomes.create(old,"sunny_banks");old.add_house(Vector2(-20,-20))
	check(not Heritage.grant(old,["century_symphony"]),"existing ordinary home prevents late creation grant")
	print("HERITAGE_CPU ",checks-failures.size(),"/",checks," ",failures);quit(0 if failures.is_empty() else 1)

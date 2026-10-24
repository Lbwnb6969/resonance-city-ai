extends SceneTree
const Family=preload("res://scripts/world/city_creation_prototype_resonance.gd")
const Choice=Family.Choice
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Mix=preload("res://scripts/audio/city_creation_prototype_mix.gd")
const Tide=preload("res://scripts/audio/city_creation_phrase_tide.gd")
const Field=preload("res://scripts/audio/city_creation_acoustic_field.gd")
var count:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	count+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var all:Array=Choice.NEO+Choice.ALPINE+Choice.CLOCKWORK+Choice.RENAISSANCE
	for key:String in all:
		check(Family.family_for(key)!="natural" and Family.family_caption(key)!="随形共鸣","all eighteen stable choices have a family "+key)
		check(int(Family.echo_radius_bonus(key)>0.)+int(Family.satisfies_scenic_belvedere(key))+Family.domino_extra_hops(key)==1,"family traits mutually exclusive "+key)
	var clock:Dictionary=preload("res://tools/fixtures/city_creation_clockwork_prototypes_fixture.gd").build()
	var renaissance:Dictionary=preload("res://tools/fixtures/city_creation_renaissance_prototypes_fixture.gd").build()
	for f:Dictionary in [clock,renaissance]:
		var catalog:Dictionary=Catalog.prepare(f.city)
		for key:String in f.groups:
			for id:String in f.groups[key]:check(catalog.houses[id].prototype==key,"actual authored choice reaches published music catalog "+id+key)
	var city:RefCounted=renaissance.city;var id:String=renaissance.groups.venetian_loggia[1]
	var h:Dictionary=city.houses[city._house_index(id)];var before:Dictionary=city.snapshot()
	check(Family.scenic_needed(city,h),"actual two-storey loggia resident has a scenic wish")
	check(city.set_house_architecture(id,"belvedere_villa").ok and not Family.scenic_needed(city,city.houses[city._house_index(id)]),"real lookout selection satisfies wish")
	check(city.undo().ok and Family.scenic_needed(city,city.houses[city._house_index(id)]),"undo restores need without giving inventory or XP")
	var restored:Dictionary=city.snapshot();restored.erase("revision");before.erase("revision");check(restored==before,"scenic traits do not alter original geometry, stock or progress")
	check(city.redo().ok,"redo real lookout")
	var catalog:Dictionary=Catalog.prepare(city)
	var score:Dictionary={"source_id":id,"lead_track":"renaissance_fugue","source_ids":{"renaissance_fugue":id},"targets":{"renaissance_fugue":-14.,"terrace":-60.,"foundation":-17.}}
	score.prototype_gain=Mix.conduct(catalog.houses,score)
	check(score.source_ids.wood_weave==id and score.targets.wood_weave==-29. and is_equal_approx(Tide.gain("wood_weave",score,0.),-27.8),"real lookout source adds plucked strings +1.2dB on actual wood_weave stem")
	check(city.set_house_architecture(id,"townhouse").ok,"select real chamber townhouse")
	catalog=Catalog.prepare(city);score={"source_id":id,"lead_track":"renaissance_fugue","source_ids":{"renaissance_fugue":id},"targets":{"renaissance_fugue":-14.,"terrace":-60.,"foundation":-17.}}
	var dry:float=Tide.gain("renaissance_fugue",score,0.);score.prototype_gain=Mix.conduct(catalog.houses,score)
	check(is_equal_approx(Tide.gain("renaissance_fugue",score,0.)-dry,1.5) and Tide.gain("foundation",score,0.)==-16.5,"chamber source boosts its solo by1.5dB while foundation retains cadence only")
	var echo:Dictionary=Catalog.prepare(clock.city);var echo_id:String=clock.groups.iron_conservatory[0]
	check(echo.houses[echo_id].echo_radius_bonus==1.2,"actual glasshouse recipe has1.2m reach")
	var field:=Field.new();field.set_view(Vector2(echo.houses[echo_id].position)+Vector2(14.1,0),18.)
	field.evaluate(echo.houses,[]);check(field.focus_weight(echo_id)>0.,"source is audible inside extended reach")
	echo.houses[echo_id].echo_radius_bonus=0.;field.evaluate(echo.houses,[]);check(field.focus_weight(echo_id)==0.,"same source without trait falls outside ordinary radius")
	echo.houses[echo_id].echo_radius_bonus=1.2;field.set_view(field.focus,18.,func(_id):return false);field.evaluate(echo.houses,[])
	check(field.focus_weight(echo_id)==0.,"extended reach never promotes offscreen sources")
	var legacy:RefCounted=preload("res://tools/fixtures/city_creation_neoclassical_fixture.gd").city();var old:Dictionary=legacy.snapshot()
	for home:Dictionary in legacy.houses:Family.prototype(legacy,home)
	check(legacy.snapshot()==old,"automatic old recipes resolve without writing to saves")
	print("PROTOTYPE_RESONANCE ",JSON.stringify({"checks":count,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)

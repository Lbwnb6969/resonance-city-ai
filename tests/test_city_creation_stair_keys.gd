extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Keys=preload("res://scripts/world/city_creation_stair_keys.gd")
const Travel=preload("res://scripts/world/city_creation_travel.gd")
const Network=preload("res://scripts/world/city_creation_network.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();check(city.Biomes.create(city,"terraced_peaks").ok,"start actual three-terrace world")
	var placed:Dictionary=city.add_road([Vector2(-32,13),Vector2(-20,13),Vector2(-8,13)] as Array[Vector2])
	check(placed.ok,"draw a real road up and down the natural terrace")
	var road:Dictionary=city.roads[0];var profile:Dictionary=city.road_profile(road)
	check(profile.treads.size()>10,"shared collision/navigation height field actually produces stone stairs")
	var layout:Dictionary=Keys.layout(road,profile,4);var expected:Dictionary={}
	for tread:Dictionary in profile.treads:expected["%d/%d"%[int(tread.run),int(tread.step)]]=true
	check(layout.sites.size()==expected.size() and layout.ranks.size()==expected.size(),"one acoustic key per physical tread, including curve-split faces")
	var travel:=Travel.new();travel.sync(city)
	var sites:Array=travel.sites.values().filter(func(row):return row.kind=="stair")
	check(sites.size()==layout.sites.size(),"actual walking observer publishes exactly the real keys")
	var aligned:=true;var light:=false;var dark:=false
	for site:Dictionary in sites:
		aligned=aligned and site.at.is_finite() and is_equal_approx(site.axis.length(),1.) and absf(city.street_height(site.at)-float(site.height))<.001
		var midi:int=Keys.Palette.stair_pitch(4,int(site.rank))
		aligned=aligned and posmod(midi,12) in [7,9,11,1,2,4,6]
		if posmod(midi,12) in [1,6]:dark=true
		else:light=true
	check(aligned and dark and light,"key positions match navigable tread heights and contain G Lydian white/black tones")
	var target:Dictionary=sites[int(sites.size()/3)];var a:Vector2=target.at-target.axis*.08;var b:Vector2=target.at+target.axis*.08
	check(not travel.point_stair(target.at).is_empty() and travel.point_stair(Vector2(30,30)).is_empty(),"pointer picking uses actual stair footprint and rejects distant ground")
	var first:Array=travel.observe("resident/real-path",a,b,0.)
	check(first.filter(func(event):return event.id==target.id).size()==1,"one real crossing is observed once")
	check(travel.observe("resident/real-path",b,a,1.).filter(func(event):return event.id==target.id).is_empty(),"the same physical step observes its real cooldown")
	check(travel.observe("resident/real-path",a,b,7.).filter(func(event):return event.id==target.id).size()==1,"a later real recrossing can answer again")
	var prepared:=Network.new().prepare(city.snapshot(),{},[])
	check(prepared.state.biome_seed==city.biome_seed and prepared.prepared_travel.sites.values().filter(func(row):return row.kind=="stair").size()==sites.size(),"private network preparation preserves seed and the actual stair observer")
	var loaded:=State.new();check(loaded.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"stair world JSON restores")
	var restored:=Travel.new();restored.sync(loaded)
	check(restored.sites==travel.sites,"save restoration re-derives identical keys without saved musical cursors")
	var before:Dictionary=city.snapshot();city.biome_seed={"id":"sunny_banks"};city.revision+=1;travel.sync(city)
	check(city.road_profile(road).treads.size()>10 and travel.sites.values().filter(func(row):return row.kind=="stair").size()==sites.size(),"ordinary-map stairs keep the same real keyboard after a seed change")
	city.restore(before);travel.sync(city)
	check(travel.sites.values().filter(func(row):return row.kind=="stair").size()==sites.size(),"switching back restores derived keys from unchanged real geometry")
	for mode in range(Keys.Palette.SCALES.size()):
		var notes:Dictionary={};var valid:=true
		for degree in range(20):
			var rank:=Keys.voice_rank(mode,degree);var pitch:=Keys.Palette.stair_pitch(mode,rank)
			valid=valid and rank>=0 and rank<14 and posmod(pitch,12) in Keys.Palette.SCALES[mode]
			notes[posmod(pitch,12)]=true
		check(valid and notes.size()==5,"five actual bank pitches in both octaves, mode "+str(mode))
	var boundary:Dictionary=profile.duplicate(true)
	for tread:Dictionary in boundary.treads:tread.rise=.999
	check(Keys.layout(road,boundary).sites.is_empty(),"sub-metre physical stair runs remain ordinary stone")
	for tread:Dictionary in boundary.treads:tread.rise=1.
	check(not Keys.layout(road,boundary).sites.is_empty(),"exact one-metre stair run activates keys")
	var ordinary:=State.new();check(ordinary.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/高地河湾样例.json"))).ok,"restore an ordinary hand-sculpted old map with no biome seed")
	var ordinary_travel:=Travel.new();ordinary_travel.sync(ordinary)
	check(ordinary.biome_seed.is_empty() and ordinary_travel.sites.values().any(func(row):return row.kind=="stair"),"authored terrain, without any biome identity, publishes real keys")
	print("STAIR_KEYS ",checks-failures.size(),"/",checks," ",failures)
	quit(0 if failures.is_empty() else 1)

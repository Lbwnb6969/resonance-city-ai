extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Harmony=preload("res://scripts/audio/city_creation_cluster_harmony.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
var checks:=0
var failures:Array[String]=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=State.new();city.initialize()
	city.houses.clear();city.roads.clear();city.plants.clear();city.districts.clear();city.revision+=1
	city.era_unlocks.assign(["pastoral","renaissance"])
	check(city.add_house(Vector2(-28,-20)).ok,"first authored home")
	var first:=str(city.houses[0].id)
	check(city.set_cluster_style(first,"sylvan").ok and city.set_cluster_era(first,"renaissance").ok,"choose first cluster voice and era")
	check(city.add_house(Vector2(-22.3,-20)).ok,"new home within 5.8m but outside former 5.4m")
	var second:=str(city.houses[-1].id)
	check(city.house_era(city.houses[-1])=="renaissance" and city.house_acoustic_style(city.houses[-1])=="sylvan","new home inherits both unlocked era and music without painting")
	check(city.natural_clusters()[first].size==2,"new reach really joins the two homes")
	var preview_before:=city.snapshot()
	var preview:Dictionary=city.preview_house_stroke(Vector2(-22.3,-15),[{"x":0,"z":0,"level":0,"kind":"room"}])
	check(preview.ok and city.snapshot()==preview_before,"stroke preview leaves inherited traits and history untouched")
	check(city.add_house_stroke(Vector2(-22.3,-15),[{"x":0,"z":0,"level":0,"kind":"room"}]).ok,"stroke commits inherited home")
	check(city.house_era(city.houses[-1])=="renaissance" and city.house_acoustic_style(city.houses[-1])=="sylvan","committed stroke also inherits era and voice")
	check(city.add_house(Vector2(-34,-20)).ok,"separate home outside 5.8m")
	var isolated:=str(city.houses[-1].id)
	check(city.natural_clusters()[isolated].size==1 and not city.houses[-1].has("era_theme"),"remote home stays a separate original-era cluster")
	var before:=city.snapshot()
	check(city.set_cluster_style(second,"market").ok,"change whole natural cluster")
	check(city.houses.slice(0,3).all(func(h):return city.house_acoustic_style(h)=="market") and city.house_acoustic_style(city.houses[-1])=="warm","whole cluster changes without leaking to remote home")
	check(city.undo().ok and city.houses==before.houses and city.redo().ok,"cluster edit undo and redo preserve authored rows")
	check(city.districts.is_empty() and city.musical_links.is_empty(),"automatic membership never invents painted areas or history")
	city.set_cluster_era(first,"pastoral");city.era_unlocks.assign(["pastoral"])
	var saved:=city.snapshot();var restored:=State.new()
	var loaded:Dictionary=restored.restore(saved)
	check(saved.schema==19 and loaded.ok and restored.houses==city.houses,"inherited era and voice round trip in schema19: "+str(loaded))
	var invalid:=saved.duplicate(true);invalid.houses[0].acoustic_style="unknown"
	check(not restored.restore(invalid).ok and restored.houses==saved.houses,"invalid music style rejects atomically")
	invalid=saved.duplicate(true);invalid.schema=18
	check(not restored.restore(invalid).ok,"new inherited music data requires schema19")
	check(city.set_house_temperament(first,"largo").ok,"choose temperament")
	saved=city.snapshot();check(restored.restore(saved).ok and restored.houses[0].temperament=="largo","temperament has validated persistent representation")
	invalid=saved.duplicate(true);invalid.houses[0].temperament="fastest"
	check(not restored.restore(invalid).ok,"invalid temperament rejects")
	var records:Dictionary=Catalog.prepare(city).houses
	var acoustic:=Acoustic.new();acoustic.focus=Vector2(-25,-18);acoustic.zoom=38.;acoustic.evaluate(records,[],[])
	check(records[first].style=="market" and records[first].cluster_order.size()==3,"playback catalog consumes the shared model")
	var baking:Array=[{"bakery_id":first,"phase":"baking"}]
	var crafting:Array=[{"workshop_id":second,"phase":"crafting"}]
	var tea_id:=str(city.houses[2].id)
	var actual:=Harmony.life_stems(records,acoustic,baking,crafting,{tea_id:{"phase":"tea"}})
	check(actual.targets.has("wood_market") and actual.targets.has("wood_weave") and actual.targets.has("wood_sylvan"),"actual attended phases produce the three continuous instrument families")
	check(actual.sources.wood_market==first and actual.sources.wood_weave==second,"each live stem retains its real source")
	baking[0].phase="paused";crafting[0].phase="paused"
	check(Harmony.life_stems(records,acoustic,baking,crafting,{tea_id:{"phase":"gathering"}}).targets.is_empty(),"paused workers and guests still gathering do not pretend to produce or drink")
	var wave:=Harmony.choral_wave(records,acoustic,0.)
	check(not wave.has(isolated) and wave.size()==3,"isolated home never receives choir glow")
	check(is_equal_approx(wave[first],wave[second]),"three-home cluster breathes together on the shared bar")
	# A five-home ring advances clockwise without consuming random state.
	var ring:Array=[]
	for i:int in range(5):
		var at:=Vector2(sin(TAU*i/5.),-cos(TAU*i/5.))*3.
		ring.append({"id":"h%d"%(i+1),"origin":[at.x,at.y]})
	var groups:Dictionary=State.NaturalClusters.derive(ring)
	var ring_records:Dictionary={}
	for h:Dictionary in ring:
		ring_records[h.id]={"position":Vector2(h.origin[0],h.origin[1]),"cluster_size":5,"cluster_rank":groups[h.id].ordered_members.find(h.id)}
	acoustic.focus=Vector2.ZERO;acoustic.evaluate(ring_records,[],[])
	var start:=Harmony.choral_wave(ring_records,acoustic,0.)
	var next:=Harmony.choral_wave(ring_records,acoustic,.6)
	check(start.h1>start.h2 and next.h2>next.h1,"five-home crest travels clockwise by actual transport time")
	var earned:=State.new();earned.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json")))
	var earned_id:=str(earned.houses[0].id)
	check(earned.set_cluster_style(earned_id,"sylvan").ok and earned.set_cluster_era(earned_id,"renaissance").ok and restored.restore(earned.snapshot()).ok,"earned multi-era city retains validated rights through cluster editing and save")
	var automatic:=State.new();automatic.initialize_empty()
	for at:Vector2 in [Vector2(-28,-20),Vector2(-24.4,-20),Vector2(-20.8,-20),Vector2(-28,0),Vector2(-24.4,0),Vector2(-20.8,0)]:check(automatic.add_house(at).ok,"natural district member")
	check(automatic.districts.size()==2 and automatic.districts.all(func(d):return d.auto_members.size()==3),"new river creates two real district identities without painting")
	var first_district:=str(automatic.district_for_house(str(automatic.houses[0].id)).id)
	check(automatic.link_districts(first_district,str(automatic.districts[1].id)).ok,"automatic districts use the original real link transaction")
	var auto_load:Dictionary=restored.restore(automatic.snapshot())
	check(auto_load.ok and restored.districts==automatic.districts,"automatic district identities and links survive save: "+str(auto_load))
	invalid=automatic.snapshot();invalid.districts[0].auto_members[0]=invalid.districts[1].auto_members[0]
	check(not restored.restore(invalid).ok,"forged cross-cluster membership rejects")
	check(automatic.add_house(Vector2(-17.2,-20)).ok and automatic.district_for_house(str(automatic.houses[-1].id)).id==first_district,"growing a natural district preserves its issued identity")
	check(automatic.undo().ok and automatic.district_for_house(str(automatic.houses[0].id)).id==first_district,"undo restores exact natural membership identity")
	var shared:=State.new();shared.initialize_empty()
	for x:float in [-28.,-20.,-12.]:shared.add_house(Vector2(x,-20))
	check(shared.districts.is_empty(),"three remote homes do not pretend to share a neighborhood")
	check(shared.add_road([Vector2(-30,-18.45),Vector2(-10,-18.45)]).ok,"connect remote homes along one actual street")
	check(shared.natural_clusters()[str(shared.houses[0].id)].size==3 and shared.districts.size()==1,"shared street unifies homes outside geometric reach")
	check(restored.restore(shared.snapshot()).ok,"shared-street membership validates on reload")
	print("NATURAL_CLUSTERS ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)

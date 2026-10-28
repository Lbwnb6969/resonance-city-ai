extends SceneTree
const Core=preload("res://scripts/audio/city_creation_core_scores.gd")
const Plan=preload("res://scripts/audio/city_creation_orchestration_plan.gd")
const Cache=preload("res://scripts/audio/city_creation_core_score_cache.gd")
const Events=preload("res://scripts/audio/city_creation_score_events.gd")
const Palette=preload("res://scripts/audio/city_creation_harmonic_palette.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var signatures:Dictionary={}
	for style:String in Core.STYLES:
		for material in range(3):
			for mode in range(10):
				var lead:=Core.lead(style,material,mode)
				check(Events.valid(lead) and lead.all(func(e):return e.role=="lead" and e.layer==3 and posmod(int(e.midi),12) in Palette.KEY_TONES[mode]),"actual authored legal lead "+str([style,material,mode]))
				if style=="deep_flow" and material==2:check(lead.all(func(e):return e.midi>=48 and e.midi<=67),"true low layer3 lead "+str(mode))
				for role:String in ["foundation","pulse","answer"]:check(Events.valid(Core.support(style,material,mode,role,0)),"bounded modal support "+str([style,material,mode,role]))
				if mode==0:signatures[style+str(material)]=hash(lead.map(func(e):return [e.start,e.duration,e.midi]))
	check(signatures.values().size()==9 and signatures.values().all(func(v):return signatures.values().count(v)==1),"nine independently different A/B/C melodies")
	check(Core.lead("felt_nocturne",0,0).size()<Core.lead("pastoral_breeze",0,0).size(),"night rests are authored instead of gain-only")
	var ctx:={"night":false,"strolling":false,"era":"pastoral","water":999.,"peers":[],"living":false,"source":"h1"}
	var prefs:={"mode":"auto","style":"","seed":74001};var state:=Plan.choose({},ctx,prefs,0.)
	check(state.style=="pastoral_breeze","empty history starts correct contextual style")
	var families:Array=[];var dense:Array=[]
	for section in range(6):
		state=Plan.choose(state,ctx,prefs,section*24.);families.append(state.material);dense.append([state.foundation,state.pulse,state.density])
	check(families==[0,1,0,1,2,0] and dense[0]!=dense[2] and dense[3]!=dense[4],"six144second passages change material and orchestration")
	var plans:Array=[]
	for i in range(6):plans.append(str([families[i],dense[i]]))
	check(plans.all(func(p):return plans.count(p)==1),"all six passage arrangements differ in material or active roles")
	ctx.water=1.;state=Plan.choose(state,ctx,prefs,121.)
	check(state.style=="pastoral_breeze","rapid camera candidate does not interrupt theme")
	state=Plan.choose(state,ctx,prefs,144.);check(state.style=="deep_flow" and state.reason=="实际临水","stable context commits at next144 boundary")
	ctx.night=true;prefs={"mode":"fixed","style":"pastoral_breeze","seed":74001};state=Plan.choose(state,ctx,prefs,145.);state=Plan.choose(state,ctx,prefs,168.)
	check(state.style=="pastoral_breeze" and state.reason=="玩家固定风格","fixed style survives night")
	prefs.mode="quiet";state=Plan.choose(state,ctx,prefs,170.);state=Plan.choose(state,ctx,prefs,192.)
	check(state.style=="felt_nocturne" and not state.pulse and not state.foundation,"quiet affects sound roles only")
	var linked:=ctx.duplicate(true);linked.peers=["h2"]
	check(Plan.choose({},ctx,prefs,0.).response==false and Plan.choose({},linked,prefs,0.).response==true,"only changing actual connectivity enables answer")
	check(Plan.choose({},linked,prefs,50.)==Plan.choose({},linked,prefs,50.),"same contextseedtransport deterministic")
	var city:=State.new();city.initialize_free();var history:=city.snapshot();var request:={"mode":"fixed","style":"deep_flow","seed":74001}
	check(city.CreationPolicy.set_preferences(city,{"music":request}).ok,"preferences use real transaction")
	var saved:Dictionary=city.snapshot();var reader:=State.new()
	check(reader.restore(JSON.parse_string(JSON.stringify(saved))).ok and reader.creative_settings.music==request,"saved preferences cold restore")
	check(city.undo().ok and city.creative_settings==history.creative_settings and city.redo().ok and city.creative_settings.music==request,"preferences UndoRedo")
	city.creative_settings.music.style="unknown_future_style";check(Plan.preferences(city).mode=="auto" and city.creative_settings.music.style=="unknown_future_style","unknown futurestyle downgrades playback without rewriting saved field")
	for id:String in ["core1/../../0/0/lead","core1/deep_flow/0/99/0/lead","core1/deep_flow/0/0/0/unknown","core1/deep_flow/00/0/0/lead"]:check(Cache.parse(id).is_empty(),"reject cachekey "+id)
	check(not Cache.parse(Cache.key("deep_flow",2,8,1,"lead")).is_empty(),"versioned preset/material/mode/seed/register role key")
	check(Cache.valid_for(Cache.key("deep_flow",0,0,0,"lead"),"wood") and not Cache.valid_for(Cache.key("deep_flow",0,0,0,"lead"),"foundation"),"archive rejects melody in foundation stem")
	var context:=preload("res://scripts/audio/city_creation_music.gd").new();context._pluck_city=State.new();context._pluck_city.initialize_free();context._pluck_city.add_house(Vector2(-25,-20));context._pluck_city.creative_settings.music={"mode":"fixed","style":"deep_flow","seed":74001}
	context._house_music=preload("res://scripts/audio/city_creation_music_catalog.gd").prepare(context._pluck_city).houses;context.emergence.score={"source_id":"h1"}
	var roles:={"wood":{"layer":3},"foundation":{"layer":1},"air":{"layer":2},"terrace":{"layer":2}}
	for role:String in Cache.ROLES:context._harmony_streams[Cache.key("deep_flow",0,0,0,role,74001)]=AudioStreamWAV.new()
	preload("res://scripts/audio/city_creation_core_orchestration.gd").apply(context,roles,"wood",0)
	var held:String=roles.wood.id;context._harmony_streams.clear();roles.wood.id="legacy_missing"
	preload("res://scripts/audio/city_creation_core_orchestration.gd").apply(context,roles,"wood",0)
	check(roles.wood.id==held and held.begins_with("core1/deep_flow/"),"missing next bundle preserves prior core subject instead of legacy fallback");context.free()
	var music:=preload("res://scripts/audio/city_creation_music.gd").new();root.add_child(music);music.set_process(false)
	var reference:=AudioStreamPlayer.new();music.add_child(reference);var silence:=AudioStreamWAV.new();var bytes:=PackedByteArray();bytes.resize(1058400);silence.data=bytes;silence.mix_rate=22050;reference.stream=silence;reference.play(4.25);await process_frame
	music._players.concert=reference;music._clock_cycles=2;music._clock_previous=4.25;reference.stream_paused=true
	check(is_equal_approx(music._playback_clock(),52.25),"paused reference returns retained monotonic clock instead of zero")
	music._players.clear();reference.stream_paused=false;reference.stop();reference.stream=null;music.queue_free();await process_frame;await create_timer(.2).timeout
	print("CORE_SCORES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"signatures":signatures}));quit(0 if failures.is_empty() else 1)

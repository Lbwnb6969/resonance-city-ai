extends RefCounted
## Pure context decisions and a transport-driven latch; no second city simulator.
const Styles=preload("res://scripts/audio/city_creation_core_scores.gd")
const MATERIALS:=[0,1,0,1,2,0]
static func preferences(city)->Dictionary:
	var prefs:Dictionary=city.creative_settings.get("music",{}) if city!=null else {}
	var mode:=str(prefs.get("mode","auto"));var style:=str(prefs.get("style",""))
	if mode=="fixed" and style not in Styles.STYLES:mode="auto"
	return {"mode":mode,"style":style,"seed":int(prefs.get("seed",74001))}
static func context(owner:Node,source:String)->Dictionary:
	var row:Dictionary=owner._house_music.get(source,{})
	var city=owner._pluck_city;var peers:Array=[]
	if city!=null and city._region_network_revision==city.revision:
		var components:Dictionary=city._region_network.get("house_components",{})
		if components.has(source):
			for id:String in components:
				if id!=source and components[id]==components[source] and owner._house_music.has(id):peers.append(id)
	peers.sort()
	if city!=null:
		for pair:Dictionary in owner.manual_reply_pairs():
			var a:=str(pair.get("from_id",""));var b:=str(pair.get("to_id",""))
			if a==source and not peers.has(b):peers.append(b)
			elif b==source and not peers.has(a):peers.append(a)
	var living:=false
	for event:Dictionary in owner._life_activity.values():
		if event.source_id==source and float(event.until)>owner._playback_clock():living=true
	return {"source":source,"era":str(row.get("era_theme","pastoral")),"district":str(row.get("district_id","")),"water":float(row.get("water_distance",999.)),"height":float(row.get("base_y",0.)),"night":owner.night,"strolling":owner.attention_strolling,"living":living,"peers":peers,"houses":owner._house_music.size()}
static func candidate(ctx:Dictionary,prefs:Dictionary)->Dictionary:
	if prefs.mode=="fixed":return {"style":prefs.style,"reason":"玩家固定风格"}
	if prefs.mode=="quiet":return {"style":"felt_nocturne","reason":"玩家安静模式"}
	if ctx.night or ctx.strolling:return {"style":"felt_nocturne","reason":"夜景" if ctx.night else "街头静听"}
	if ctx.era=="modern_eco" or ctx.water<5.:return {"style":"deep_flow","reason":"现代风貌" if ctx.era=="modern_eco" else "实际临水"}
	return {"style":"pastoral_breeze","reason":"庭院与风貌"}
static func choose(previous:Dictionary,ctx:Dictionary,prefs:Dictionary,clock:float)->Dictionary:
	var state:=previous.duplicate(true);var proposed:=candidate(ctx,prefs);var desired:String=proposed.style
	var cycle:=floori(clock/24.);var passage:=posmod(cycle,6)
	if state.get("candidate","")!=desired:state.candidate=desired;state.since=clock
	if not state.has("style"):state.style=desired;state.committed=cycle;state.reason=proposed.reason
	if state.style==desired:state.reason=proposed.reason
	var fixed:bool=prefs.mode in ["fixed","quiet"]
	# A complete six-passage theme survives camera travel; manual modes use next unit.
	if desired!=state.style and clock-float(state.since)>=3. and cycle>int(state.committed) and (fixed or passage==0):
		state.style=desired;state.committed=cycle;state.reason=proposed.reason
	state.passage=passage;state.material=MATERIALS[passage];state.color=posmod(int(prefs.seed),3);state.mode=prefs.mode
	state.response=bool(ctx.living) or not ctx.peers.is_empty();state.context=ctx;state.seed=prefs.seed
	state.density="thin" if passage in [2,5] else "solo" if passage==4 else "full"
	state.pulse=passage not in [3,4,5] and prefs.mode!="quiet";state.foundation=not (passage==2 or prefs.mode=="quiet")
	return state

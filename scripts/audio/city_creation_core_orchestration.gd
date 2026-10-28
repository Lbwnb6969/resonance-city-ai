extends RefCounted
const Plan=preload("res://scripts/audio/city_creation_orchestration_plan.gd")
const Cache=preload("res://scripts/audio/city_creation_core_score_cache.gd")
static func apply(owner:Node,roles:Dictionary,leader:String,mode:int)->void:
	if owner.get_meta("legacy_score",false) or owner.concert_active or owner._pluck_city==null or leader.is_empty():return
	var source:=str(owner.emergence.score.get("source_id",""));var clock:float=owner._playback_clock()
	if owner.get_meta("orchestration_city",0)!=owner._pluck_city.get_instance_id():
		owner.remove_meta("orchestration_plan");owner.remove_meta("core_ready");owner.set_meta("orchestration_city",owner._pluck_city.get_instance_id())
	var ctx:=Plan.context(owner,source);var prefs:=Plan.preferences(owner._pluck_city)
	var plan:=Plan.choose(owner.get_meta("orchestration_plan",{}),ctx,prefs,clock)
	owner.set_meta("orchestration_plan",plan)
	if preload("res://scripts/audio/city_creation_authored_score.gd").apply(owner,roles,leader):return
	# Only stream preparation looks ahead; sounding role gates follow current transport.
	var upcoming:=Plan.choose(plan,ctx,prefs,clock+3.5)
	var ids:Dictionary={};var ready:=true
	for role:String in Cache.ROLES:
		var id:=Cache.key(upcoming.style,upcoming.answer_material if role=="answer" else upcoming.material,mode,upcoming.color,role,upcoming.seed);ids[role]=id
		ready=Cache.request(owner,id) and ready
	if not ready:
		plan.waiting="后台准备谱材，保留当前乐句"
		var previous:Dictionary=owner.get_meta("core_ready",{})
		if previous.get("leader","")==leader:
			for stem:String in roles:
				if previous.roles.has(stem):roles[stem].merge(previous.roles[stem],true)
			dynamics(roles,leader,plan)
		return
	plan.waiting=""
	for stem:String in roles:
		if stem in [leader,"foundation","air","terrace"]:continue
		roles[stem].active=false
	for pair:Array in [[leader,"lead"],["foundation","foundation"],["air","pulse"],["terrace","answer"]]:
		var stem:String=pair[0];var role:String=pair[1];var id:String=ids[role]
		roles[stem].merge({"id":id,"base_id":id,"bank":"harmony","legato":false,"role":role,"preset":plan.style,"passage_id":plan.passage,"active":true},true)
	dynamics(roles,leader,plan)
	var held:Dictionary={}
	for stem:String in roles:
		held[stem]={}
		for field:String in ["id","base_id","bank","legato","role","preset","passage_id","active","gain_offset"]:
			if roles[stem].has(field):held[stem][field]=roles[stem][field]
	owner.set_meta("core_ready",{"leader":leader,"roles":held})
static func dynamics(roles:Dictionary,leader:String,plan:Dictionary)->void:
	for stem:String in [leader,"foundation","air","terrace"]:
		if not roles.has(stem):continue
		roles[stem].passage_id=plan.passage
		roles[stem].gain_offset=-4. if plan.density=="thin" else 0.
	roles.foundation.active=plan.foundation;roles.air.active=plan.pulse
	roles.terrace.active=(plan.response or plan.passage in [1,3]) and plan.passage!=5
	if plan.get("inspiration","")!="" and plan.passage not in [4,5]:roles.terrace.active=true;roles.terrace.gain_offset-=3.
static func key(owner:Node)->Array:
	var city=owner._pluck_city
	return [floori(owner._playback_clock()/3.),floori((owner._playback_clock()+3.5)/3.),city.get_instance_id() if city!=null else 0,city.revision if city!=null else -1,Plan.preferences(city),owner.attention_strolling,owner._life_activity]

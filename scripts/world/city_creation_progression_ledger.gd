extends RefCounted
## Independent epoch accounting. Old offers, credits and cutoff stay historical.
const SCHEMA:=24
const MAX_INTEGER:=9007199254740991
const FIELDS:=["version","enabled","epoch_id","started_at","origin_sha256","inflight_policy","level","xp","xp_remainder","baseline","receipts"]
const Counters=preload("res://scripts/world/city_creation_receipt_counters.gd")
const Rewards=preload("res://scripts/world/city_creation_receipt_rewards.gd")
const Spatial=preload("res://scripts/world/city_creation_functional_benefits.gd")
static func integer(value:Variant)->bool:
	return (value is int or value is float) and is_finite(float(value)) and value>=0 and value<=MAX_INTEGER and float(value)==floorf(float(value))
static func hash_id(value:Variant)->bool:
	if not value is String or value.length()!=64:return false
	for c:String in value:
		if c not in "0123456789abcdef":return false
	return true
static func counts_valid(value:Variant)->bool:
	if not value is Dictionary:return false
	for key:Variant in value:
		if not key is String or not Counters.recognized(key) or not integer(value[key]):return false
	return true
static func threshold(level:int)->int:return 100+65*(level-1)
static func valid(value:Variant)->bool:
	if not value is Dictionary or value.size()!=FIELDS.size():return false
	for field:String in FIELDS:
		if not value.has(field):return false
	if not integer(value.version) or value.version!=1 or not value.enabled is bool:return false
	if not hash_id(value.epoch_id) or not hash_id(value.origin_sha256) or not integer(value.started_at) or value.inflight_policy!="pause":return false
	if not integer(value.level) or value.level<1 or not integer(value.xp) or value.xp>=threshold(int(value.level)):return false
	var remainder:Variant=value.xp_remainder
	return (remainder is int or remainder is float) and is_finite(float(remainder)) and remainder>=0 and remainder<1 and counts_valid(value.baseline) and counts_valid(value.receipts)
static func validate(city:RefCounted,data:Dictionary)->Dictionary:
	if data.has("prosperity_enabled") and (data.schema==SCHEMA or data.has("cozy_progression")):return city._fail("经营政策只接受单一版本化账期")
	if not data.has("cozy_progression"):
		return city._fail("版本24缺少经营账期") if data.schema==SCHEMA else {"ok":true}
	var settings:Variant=data.get("creative_settings",{});var journey:Variant=data.get("harmony_journey",{})
	if data.schema!=SCHEMA or not settings is Dictionary or settings.get("creation_policy")!="free" or not journey is Dictionary or not journey.has("growth_cutoff"):return city._fail("新经营账期需要版本24及既有自由创作截止")
	return {"ok":true} if valid(data.cozy_progression) else city._fail("经营账期字段或计数无效")
static func write(city:RefCounted,data:Dictionary)->void:
	if city.cozy_progression.is_empty():return
	data.cozy_progression=city.cozy_progression.duplicate(true);data.schema=SCHEMA
static func apply(city:RefCounted,data:Dictionary,history:bool)->void:
	# Geometry history never revokes an epoch, its enabled state or earned receipts.
	if history and not city.cozy_progression.is_empty():return
	city.cozy_progression=data.get("cozy_progression",{}).duplicate(true)
	if city.cozy_progression.is_empty():return
	for key:String in ["version","started_at","level","xp"]:city.cozy_progression[key]=int(city.cozy_progression[key])
	for field:String in ["baseline","receipts"]:
		for key:String in city.cozy_progression[field]:city.cozy_progression[field][key]=int(city.cozy_progression[field][key])
	city.cozy_progression.xp_remainder=float(city.cozy_progression.xp_remainder)
static func create(city:RefCounted,source:String,epoch:String)->Dictionary:
	return {"version":1,"enabled":true,"epoch_id":epoch,"started_at":int(Time.get_unix_time_from_system()),"origin_sha256":source,"inflight_policy":"pause","level":1,"xp":0,"xp_remainder":0.,"baseline":Counters.baseline(city),"receipts":{}}
static func _advance(policy:Dictionary,total:int)->void:
	var cost:int=threshold(int(policy.level));var low:=0;var high:=mini(int(total/cost)+1,int(sqrt(total*2./65.))+2)
	while low<high:
		var steps:int=(low+high+1)/2
		var needed:int=steps*cost+65*steps*(steps-1)/2
		if needed<=total:low=steps
		else:high=steps-1
	policy.level=int(policy.level)+low;policy.xp=total-(low*cost+65*low*(low-1)/2)
static func collect(city:RefCounted)->Dictionary:
	if city.cozy_progression.is_empty():return {}
	var policy:Dictionary=city.cozy_progression
	var result:={"ok":true,"earned":0,"leveled_up":false,"level":policy.level,"events":{},"epoch_id":policy.epoch_id}
	if not policy.enabled:return result
	var next:Dictionary={};var raw:=0.
	var counts:=Counters.current(city)
	for key:String in counts:
		var high:int=maxi(int(policy.baseline.get(key,0)),int(policy.receipts.get(key,0)))
		var delta:int=maxi(0,int(counts[key])-high)
		if delta==0:continue
		if next.is_empty():next=policy.duplicate(true)
		next.receipts[key]=int(counts[key]);raw+=Rewards.event_xp(city,key,delta)
		var kind:=key.get_slice("/",0);result.events[kind]=int(result.events.get(kind,0))+delta
	if next.is_empty():return result
	var exact:float=Rewards.scale(city.harmony_journey,raw)*float(Spatial.for_city(city).inspiration_multiplier)+float(policy.xp_remainder)
	if not is_finite(exact) or exact>MAX_INTEGER-int(policy.xp):return city._fail("账期结算超出精确计数范围，收益与收据保持")
	result.earned=int(exact);next.xp_remainder=exact-floorf(exact);_advance(next,int(policy.xp)+int(exact))
	result.level=next.level;result.leveled_up=next.level!=policy.level
	city.cozy_progression=next;city.dirty=true;city.life_progress_dirty=true
	return result

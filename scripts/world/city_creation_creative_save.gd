extends RefCounted
## Schema20 extension. Historical ledgers remain validated by their original owners.
const SCHEMA:=20
const LATEST_SCHEMA:=23
const VERSION:=1
const FIELDS:=["creative_settings","placed_landmarks","next_landmark_id","landmark_high_watermark"]
const SETTING_FIELDS:=["version","creation_policy","migration_version","guidance","music","presentation"]

static func defaults(policy:String="free",migration:int=0)->Dictionary:
	return {"version":VERSION,"creation_policy":policy,"migration_version":migration,"guidance":policy=="legacy","music":{"mode":"auto","style":"","seed":74001},"presentation":{"automatic_decoration":true,"legacy_crowns":policy=="legacy"}}

static func reset(city:RefCounted)->void:
	city.terrain_policy=1
	city.creative_settings={};city.placed_landmarks.clear();city._next_landmark_id=1;city._landmark_high_watermark=0
	if city.has_meta("new_house_brush"):city.remove_meta("new_house_brush")

static func write(city:RefCounted,result:Dictionary)->void:
	if city.creative_settings.is_empty():return
	result.schema=SCHEMA;result.creative_settings=city.creative_settings.duplicate(true)
	result.placed_landmarks=city.placed_landmarks.duplicate(true)
	result.next_landmark_id=city._next_landmark_id;result.landmark_high_watermark=city._landmark_high_watermark

static func settings_valid(city:RefCounted,value:Variant)->bool:
	if not value is Dictionary or value.size()!=SETTING_FIELDS.size():return false
	for key:String in SETTING_FIELDS:
		if not value.has(key):return false
	if not city._is_integer(value.version) or value.version!=VERSION:return false
	if value.creation_policy not in ["legacy","free"] or not value.guidance is bool:return false
	if not city._is_integer(value.migration_version) or int(value.migration_version) not in [0,1]:return false
	if value.migration_version==1 and value.creation_policy!="free":return false
	var music:Variant=value.music
	if not music is Dictionary or music.size()!=3 or music.get("mode") not in ["auto","fixed","quiet"]:return false
	if not music.get("style") is String or music.style.length()>48:return false
	for character:String in music.style:
		if character not in "abcdefghijklmnopqrstuvwxyz0123456789_":return false
	if music.mode=="fixed" and music.style.is_empty():return false
	if not city._is_integer(music.get("seed")) or music.seed<0 or music.seed>2147483647:return false
	var presentation:Variant=value.presentation
	if not presentation is Dictionary or presentation.size()!=2:return false
	return presentation.get("automatic_decoration") is bool and presentation.get("legacy_crowns") is bool

static func validate(city:RefCounted,data:Dictionary)->Dictionary:
	if not city._is_integer(data.get("schema")) or data.schema<1 or data.schema>LATEST_SCHEMA:return city._fail("不支持的城市存档版本")
	if data.schema<SCHEMA or (data.schema>SCHEMA and not data.has("creative_settings")):
		for key:String in FIELDS:
			if data.has(key):return city._fail("创作政策需要版本20存档")
		return {"ok":true}
	if not settings_valid(city,data.get("creative_settings")):return city._fail("创作政策或偏好字段无效")
	return preload("res://scripts/world/city_creation_placed_landmarks.gd").validate_fields(city,data)

static func apply(city:RefCounted,data:Dictionary,history:bool)->void:
	var current:Dictionary=city.creative_settings
	var incoming:Dictionary=data.get("creative_settings",{}).duplicate(true)
	if history and current.get("creation_policy","")=="free":
		if incoming.is_empty():incoming=current.duplicate(true)
		incoming.creation_policy="free"
		incoming.migration_version=maxi(int(current.migration_version),int(incoming.get("migration_version",0)))
	if not incoming.is_empty():
		incoming.version=int(incoming.version);incoming.migration_version=int(incoming.migration_version);incoming.music.seed=int(incoming.music.seed)
	city.creative_settings=incoming
	city.placed_landmarks.assign(data.get("placed_landmarks",[]).duplicate(true))
	city._next_landmark_id=int(data.get("next_landmark_id",1))
	var watermark:=int(data.get("landmark_high_watermark",0))
	city._landmark_high_watermark=maxi(city._landmark_high_watermark,watermark) if history else watermark

static func appearance_compatible(city:RefCounted,target:Dictionary)->bool:
	if city.placed_landmarks!=target.get("placed_landmarks",[]):return false
	var expected:Dictionary=target.get("creative_settings",{})
	# Old geometry history predates this extension; it cannot revoke conversion.
	if expected.is_empty():return true
	for key:String in ["guidance","music","presentation"]:
		if city.creative_settings.get(key)!=expected.get(key):return false
	return true

extends RefCounted
## JSON-only import boundary. No resource path or script reference is accepted.
const Events=preload("res://scripts/audio/city_creation_score_events.gd")
const Styles=preload("res://scripts/audio/city_creation_core_scores.gd")
const FIELDS:=["schema","id","style","origin","bpm","beats_per_bar","bars","harmony_mode","events","features_sha256"]
const EVENT_FIELDS:=["beat","beats","midi","gain","timbre","role","layer"]
static func hex_hash(value:Variant)->bool:
	if not value is String or value.length()!=64:return false
	for c:String in value:
		if c not in "0123456789abcdef":return false
	return true
static func validate(value:Variant)->Dictionary:
	if not value is Dictionary or value.size()!=FIELDS.size():return {"ok":false,"message":"谱材字段不符合版本1"}
	for field:String in FIELDS:
		if not value.has(field):return {"ok":false,"message":"谱材缺少字段："+field}
	for field:String in ["schema","bpm","beats_per_bar","bars","harmony_mode"]:
		if not value[field] is int and not value[field] is float:return {"ok":false,"message":"拍钟字段必须是数值"}
		if not is_finite(float(value[field])) or value[field]!=floorf(value[field]):return {"ok":false,"message":"拍钟字段必须是有限整数"}
	if value.schema!=1 or value.bpm!=80 or value.beats_per_bar!=4 or value.bars!=8 or value.harmony_mode<0 or value.harmony_mode>9:return {"ok":false,"message":"谱材仅支持80BPM四拍八小节"}
	if value.origin!="authored" or value.style not in Styles.STYLES or not hex_hash(value.features_sha256):return {"ok":false,"message":"谱材来源、风格或特征哈希无效"}
	if not value.id is String or value.id.is_empty() or value.id.length()>48:return {"ok":false,"message":"谱材名称无效"}
	for c:String in value.id:
		if c not in "abcdefghijklmnopqrstuvwxyz0123456789_":return {"ok":false,"message":"谱材名称不能包含路径或代码"}
	if not value.events is Array or value.events.is_empty() or value.events.size()>256:return {"ok":false,"message":"谱材音符数量无效"}
	var events:Array=[];var roles:Dictionary={}
	for item:Variant in value.events:
		if not item is Dictionary or item.size()!=EVENT_FIELDS.size():return {"ok":false,"message":"音符结构无效"}
		for field:String in EVENT_FIELDS:
			if not item.has(field):return {"ok":false,"message":"音符缺少："+field}
		for field:String in ["beat","beats"]:
			if not item[field] is float and not item[field] is int:return {"ok":false,"message":"音符拍位必须是数值"}
		var row:Dictionary=item.duplicate(true);row.start=float(row.beat)*.75;row.duration=float(row.beats)*.75
		if not Events.valid([row]):return {"ok":false,"message":"音符拍位、音域、角色或音色无效"}
		roles[row.role]=true;events.append(row)
	if roles.keys().size()!=4 or not roles.has_all(["lead","foundation","pulse","answer"]):return {"ok":false,"message":"谱材需要领唱、基础、推进与回答四角色"}
	return {"ok":true,"document":value.duplicate(true),"events":events}
static func read(path:String)->Dictionary:
	if not FileAccess.file_exists(path):return {"ok":false,"message":"找不到谱材JSON"}
	var file:=FileAccess.open(path,FileAccess.READ)
	if file==null or file.get_length()>1000000:return {"ok":false,"message":"谱材JSON过大或无法读取"}
	var text:=file.get_as_text();var parser:=JSON.new()
	if parser.parse(text)!=OK:return {"ok":false,"message":"谱材JSON解析失败"}
	var result:=validate(parser.data)
	if result.ok:result.signature=text.sha256_text()
	return result

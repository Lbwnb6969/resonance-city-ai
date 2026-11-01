extends RefCounted
## Coalesce the latest full-score intent without announcing it as sounding.
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
static func result(signature:String,stage:String)->Dictionary:
	return {"ok":true,"message":"复用现有母曲内容","signature":signature,"reused":true,"stage":stage}
static func find(owner:Node,reader:Node,data:Dictionary)->Dictionary:
	if data.get("duration",24.)!=144. or owner.concert_active or owner.phonograph.active:return {}
	var signature:=str(data.signature);var city:RefCounted=owner._pluck_city
	if reader.worker!=null:
		if reader.city_id==city.get_instance_id() and reader.request_data.get("signature","")==signature and reader.request_data.get("content_context",[])==Whole.context(city):return result(signature,"preparing")
		return {}
	for field:String in ["authored_score_ready","authored_score"]:
		var candidate:Dictionary=owner.get_meta(field,{})
		if candidate.is_empty():continue
		if candidate.get("signature","")==signature and Whole.valid(owner,candidate):return result(signature,"ready" if field=="authored_score_ready" else "active")
		# A different pending target must not be hidden by the old sounding work.
		return {}
	return {}

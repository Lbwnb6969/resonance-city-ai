extends RefCounted
## Work-level authorship only; no fields are added to an authored city snapshot.
const FIELDS:=["parent_work_id","author_note","chronicle","gilded_seal"]
static func defaults()->Dictionary:return {"parent_work_id":"","author_note":"","chronicle":[],"gilded_seal":false}
static func valid_id(id:String)->bool:
	var pattern:=RegEx.new();pattern.compile("^w_[0-9]{13}_[0-9a-f]{16}$");return id.length()==32 and pattern.search(id)!=null
static func line(value:Variant,limit:int)->bool:
	if not value is String or value.length()>limit:return false
	for i in range(value.length()):
		if value.unicode_at(i)<32:return false
	return true
static func can_seal(world:Dictionary)->bool:
	var settings:Variant=world.get("creative_settings",{});var account:Variant=world.get("cozy_progression",{})
	return settings is Dictionary and settings.get("creation_policy","")=="free" and account is Dictionary and int(account.get("level",0))>=5
static func fields(data:Dictionary)->Dictionary:
	var result:=defaults()
	for key:String in FIELDS:
		if data.has(key):result[key]=data[key].duplicate(true) if data[key] is Array else data[key]
	return result
static func prepare(data:Dictionary,world:Dictionary,id:String="")->Dictionary:
	for key:Variant in data:
		if key not in FIELDS:return {"ok":false,"message":"作品题跋字段无效"}
	var result:=fields(data);var parent:Variant=result.parent_work_id
	if not parent is String or (not parent.is_empty() and (not valid_id(parent) or parent==id)):return {"ok":false,"message":"作品衍生来源身份无效"}
	if not line(result.author_note,48):return {"ok":false,"message":"作者题跋最多48个单行字符"}
	if not result.gilded_seal is bool or (result.gilded_seal and not can_seal(world)):return {"ok":false,"message":"鎏金题跋章需要新账期等级5"}
	var rows:Variant=result.chronicle
	if not rows is Array or rows.size()>12:return {"ok":false,"message":"城市编年最多保留12条小记"}
	var kind_pattern:=RegEx.new();kind_pattern.compile("^[a-z][a-z0-9_]{0,31}$")
	for row:Variant in rows:
		if not row is Dictionary or row.size()!=3 or not row.get("kind") is String or kind_pattern.search(row.kind)==null or not line(row.get("caption"),96) or row.caption.is_empty():return {"ok":false,"message":"城市编年小记格式无效"}
		var at:Variant=row.get("at_sec")
		if not (at is int or at is float) or not is_finite(float(at)) or float(at)<0.:return {"ok":false,"message":"城市编年时刻无效"}
	return {"ok":true,"data":result}

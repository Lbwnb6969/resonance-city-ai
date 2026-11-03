extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Variants=preload("res://scripts/world/city_creation_architecture_variants.gd")
const FIELDS:=["palette","finish","custom_colors","style","era_theme","architecture","architecture_variant"]
static func custom(house:Dictionary)->bool:
	return house.has("custom_colors") or not str(house.get("architecture","")).is_empty() or not house.get("architecture_variant",{}).is_empty() or house.has("finish")
static func appearance(house:Dictionary)->Dictionary:
	var result:Dictionary={}
	for key:String in FIELDS:
		if house.has(key):result[key]=house[key].duplicate(true) if house[key] is Dictionary else house[key]
	return result
static func change(city,id:String,operation:Dictionary)->Dictionary:
	match operation.kind:
		"palette":return city.set_house_palette(id,int(operation.value))
		"era":return city.set_house_era(id,str(operation.value))
		"style":return city.set_house_style(id,str(operation.value))
		"architecture":return city.set_house_architecture(id,str(operation.value))
		"windows":return city.set_house_architecture_variant(id,str(operation.value))
		"dormer":return city.set_house_dormer(id,str(operation.value))
		"chimney":return city.set_house_chimney(id,str(operation.value))
		"gable_trim":return Variants.set_trim(city,id,str(operation.value))
		"porch":return Variants.set_porch(city,id,str(operation.value))
	return {"ok":false,"message":"请选择一种现有外观"}
static func plan(city,ids:Array,operation:Dictionary,protect:bool=true)->Dictionary:
	var draft:=State.new();draft.restore(city.snapshot())
	var result:={"context":[city.get_instance_id(),city.revision],"operation":operation.duplicate(),"city":draft,"changed":[],"protected":[],"skipped":[]}
	for id:String in ids:
		var index:int=city._house_index(id)
		if index<0:continue
		var house:Dictionary=city.houses[index]
		if house.has("signature") or protect and custom(house):result.protected.append(id);continue
		var previous:=appearance(draft.houses[index]);var outcome:=change(draft,id,operation)
		if not outcome.ok:result.skipped.append({"id":id,"reason":outcome.get("message","此屋尚未适配")})
		elif appearance(draft.houses[index])!=previous:result.changed.append(id)
	return result
static func apply(city,plan:Dictionary)->Dictionary:
	if plan.context!=[city.get_instance_id(),city.revision]:return {"ok":false,"message":"城市已变化，请重新预览"}
	if plan.changed.is_empty():return {"ok":true,"no_op":true,"message":"选中房屋外观未变"}
	var before:Dictionary=city.snapshot()
	for id:String in plan.changed:
		var target:Dictionary=city.houses[city._house_index(id)];var source:Dictionary=plan.city.houses[plan.city._house_index(id)]
		for key:String in FIELDS:
			if source.has(key):target[key]=source[key].duplicate(true) if source[key] is Dictionary else source[key]
			else:target.erase(key)
	city._commit(before,"成组修改%d栋房屋外观"%plan.changed.size())
	var result:={"ok":true,"message":"已为%d栋房屋换上外观"%plan.changed.size(),"house_ids":plan.changed.duplicate()}
	if plan.operation.kind=="palette":result.appearance_house_ids=plan.changed.duplicate()
	return result

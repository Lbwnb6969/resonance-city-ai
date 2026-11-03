extends RefCounted
const Choice=preload("res://scripts/world/city_creation_architecture_variants.gd")
const META:={"windows":"window_detail","dormer":"roof_detail","chimney":"chimney_detail","gable_trim":"gable_trim","porch":"porch_detail"}
static func supported(city,house:Dictionary,slot:String)->bool:
	match slot:
		"windows":return Choice.supported(city,house)
		"dormer":return Choice.dormer_supported(city,house)
		"chimney":return Choice.chimney_supported(city,house)
		"gable_trim":return Choice.trim_supported(city,house)
		"porch":return Choice.porch_supported(city,house)
	return false
static func publish(city,parent:Node3D,house:Dictionary)->void:
	var result:Dictionary={}
	for slot:String in META:
		var record:=Choice.record(house,slot);var id:=str(record.get("windows" if slot=="windows" else "id",""))
		if id.is_empty() or id=="off":continue
		var key:String=META[slot];var data:Dictionary=parent.get_meta(key,{})
		if not supported(city,house,slot):data={"id":id,"active":false,"dormant_reason":"top_roof_span_missing" if slot=="dormer" and Choice.chimney_supported(city,house) else "shape_unsupported"}
		elif slot=="windows":data={"id":id,"active":parent.find_children("WindowVariant_*","Node3D",true,false).any(func(n):return not n.find_children("*","MeshInstance3D",true,false).is_empty()),"dormant_reason":"exposed_window_missing"}
		if data.get("active",false):data.erase("dormant_reason");data.erase("rejected")
		result[slot]=data
	parent.set_meta("architecture_detail_status",result)

extends RefCounted
const IDS:=["legacy","none","lamps","flowers","trees","benches"]
const NAMES:=["原款","留白","路灯","花箱","树池","长椅"]
static func selected(demo)->String:return str(demo.get_meta("road_decoration",""))
static func valid(value:String)->bool:return value.is_empty() or value in IDS
static func assign(road:Dictionary,value:String)->void:
	if value.is_empty():return
	if value=="legacy":road.erase("decoration")
	else:road.decoration=value
static func preview(check:Dictionary,value:String,road:Dictionary)->Dictionary:
	if value.is_empty() or not check.ok:return check
	if value!=str(road.get("decoration","legacy")):
		check.no_op=false;check.upgraded=true
		check.message="更新道路街具 · "+str(NAMES[IDS.find(value)])
	return check
static func style(road:Dictionary)->String:
	match str(road.get("decoration","legacy")):
		"none":return ""
		"trees":return "avenue"
		"lamps","flowers","benches":return "promenade"
	return str(road.get("style","path"))
static func filter_records(records:Array,road:Dictionary)->Array:
	var selected:=str(road.get("decoration","legacy"))
	if selected=="legacy":return records
	var kind:String={"lamps":"lamp","flowers":"flower","trees":"tree","benches":"bench","none":""}[selected]
	return records.filter(func(row):return str(row.kind)==kind)

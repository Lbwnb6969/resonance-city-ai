extends RefCounted
const ID:="pastoral_breeze_v1"
static func apply(owner:Node,roles:Dictionary,leader:String,mode:int,variant:int)->void:
	if owner.get_meta("legacy_score",false) or owner.concert_active or mode!=0 or leader!="wood":return
	var cycle:=floori(owner._playback_clock()/24.)
	var material:Array=owner.get_meta("sample_material",[])
	if material.is_empty() or int(material[0])!=cycle:material=[cycle,variant];owner.set_meta("sample_material",material)
	variant=int(material[1])
	var night:bool=preload("res://scripts/audio/city_creation_camera_orchestration.gd").nocturne(owner)
	var key:=ID+"/night" if night else ID+"/lead/"+str(variant)
	if not owner._harmony_streams.has(key):return
	roles[leader].merge({"id":key,"base_id":key,"bank":"harmony","legato":false,"role":"lead","preset":ID},true)
	for stem:String in ["foundation","air","terrace"]:
		roles[stem].id=ID+"/"+stem;roles[stem].role={"foundation":"foundation","air":"pulse","terrace":"answer"}[stem];roles[stem].preset=ID

static func valid_key(key:String,stem:String)->bool:
	if stem=="wood":return key in [ID+"/lead/0",ID+"/lead/1",ID+"/lead/2",ID+"/night"]
	return stem in ["foundation","air","terrace"] and key==ID+"/"+stem

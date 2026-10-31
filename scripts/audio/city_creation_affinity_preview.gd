extends Node
## Explicit developer sample, not the default music director. No extra players.
const Affinity=preload("res://scripts/audio/city_creation_music_affinity.gd")
const Envelope=preload("res://scripts/audio/city_creation_affinity_envelope.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
var affinity:=Affinity.new()
var envelope:=Envelope.new()
var city_id:=0
var began:=0
var signature:=""
static func start(owner:Node)->Dictionary:
	if owner._pluck_city==null:return {"ok":false,"message":"请先打开城市"}
	if owner.get_node_or_null("MusicAffinityPreview")!=null:return {"ok":false,"message":"空间样板已在运行"}
	var result:=Import.request_affinity(owner)
	if not result.ok:return result
	var node=load("res://scripts/audio/city_creation_affinity_preview.gd").new();node.name="MusicAffinityPreview";node.city_id=owner._pluck_city.get_instance_id();node.began=Time.get_ticks_msec();node.signature=result.signature;owner.add_child(node)
	return result
static func gain(owner:Node,key:String)->float:
	if key!="foundation" or not owner.get_meta("authored_score",{}).get("affinity_preview",false):return 0.
	return float(owner.get_meta("music_affinity_preview",{}).get("value",0.))*4.
func _process(delta:float)->void:
	var owner:=get_parent()
	if owner._pluck_city==null or owner._pluck_city.get_instance_id()!=city_id:
		owner.remove_meta("music_affinity_preview");queue_free();return
	var importer:=owner.get_node_or_null("AuthoredScore")
	var pending:bool=importer!=null and importer.worker!=null and importer.request_data.get("signature","")==signature
	if not pending and owner.get_meta("authored_score_ready",{}).get("signature","")!=signature and owner.get_meta("authored_score",{}).get("signature","")!=signature:
		owner.remove_meta("music_affinity_preview");queue_free();return
	affinity.refresh(owner._pluck_city)
	var facts:=affinity.sample(owner.acoustic.focus,float(owner.acoustic.zoom))
	owner.set_meta("music_affinity_preview",envelope.step(facts,(Time.get_ticks_msec()-began)/1000.,delta))
func _exit_tree()->void:
	get_parent().remove_meta("music_affinity_preview")

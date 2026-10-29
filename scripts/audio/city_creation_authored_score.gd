extends Node
## Explicit developer import into the production role routing and pooled players.
const Document=preload("res://scripts/audio/city_creation_score_document.gd")
var worker:Thread
var request_data:Dictionary={}
var city_id:=0
var revision:=-1
static func request(owner:Node,path:String)->Dictionary:
	return _request_data(owner,Document.read(path))
static func request_master(owner:Node,section:int,mode:int=0)->Dictionary:
	if mode!=0:return {"ok":false,"message":"母曲试听目前使用D大调；其他调式须先接通交互短声的共享和声"}
	return _request_data(owner,preload("res://scripts/audio/city_creation_master_score.gd").section(section,mode))
static func _request_data(owner:Node,data:Dictionary)->Dictionary:
	if owner._pluck_city==null:return {"ok":false,"message":"请先打开用于预览的城市"}
	if not data.ok:return data
	var node:=owner.get_node_or_null("AuthoredScore")
	if node==null:node=load("res://scripts/audio/city_creation_authored_score.gd").new();node.name="AuthoredScore";owner.add_child(node)
	if node.worker!=null:return {"ok":false,"message":"上一份谱材仍在准备"}
	node.city_id=owner._pluck_city.get_instance_id();node.revision=owner._pluck_city.revision;node.request_data=data
	var copied:Dictionary=data.duplicate(true);node.worker=Thread.new();node.worker.start(func():return render(copied))
	return {"ok":true,"message":"原创谱材已进入后台准备","signature":data.signature}
static func render(data:Dictionary)->Dictionary:
	var synth=load("res://scripts/audio/city_creation_music.gd").new();var score=load("res://scripts/audio/city_creation_chamber_score.gd");var out:={}
	for role:String in ["lead","foundation","pulse","answer"]:
		out[role]=score.render(data.events.filter(func(e):return e.role==role),synth._add_harmony_note,synth._pcm_stream)
	synth.free();return out
static func valid_key(id:String,stem:String)->bool:
	var parts:=id.split("/")
	if parts.size()!=3 or parts[0]!="study1" or not Document.hex_hash(parts[1]):return false
	if parts[2]=="lead":return stem in preload("res://scripts/audio/city_creation_harmonic_emergence.gd").LEADS+["concert"]
	return parts[2] in ["foundation","pulse","answer"] and stem=={"foundation":"foundation","pulse":"air","answer":"terrace"}[parts[2]]
static func apply(owner:Node,roles:Dictionary,leader:String)->bool:
	var data:Dictionary=owner.get_meta("authored_score",{})
	if data.is_empty():return false
	if owner._pluck_city==null or data.city!=owner._pluck_city.get_instance_id():discard(owner,data);return false
	if data.revision!=owner._pluck_city.revision:
		owner._biome_mode=preload("res://scripts/audio/city_creation_harmonic_palette.gd").for_city(owner._pluck_city);discard(owner,data);return false
	for stem:String in roles:roles[stem].active=false
	for pair:Array in [[leader,"lead"],["foundation","foundation"],["air","pulse"],["terrace","answer"]]:
		var id:="study1/"+str(data.signature)+"/"+str(pair[1]);var stem:String=pair[0]
		roles[stem].merge({"id":id,"base_id":id,"bank":"harmony","legato":false,"role":pair[1],"preset":data.document.id,"active":true,"gain_offset":0.},true)
	return true
static func discard(owner:Node,data:Dictionary)->void:
	for role:String in ["lead","foundation","pulse","answer"]:
		var id:="study1/"+str(data.signature)+"/"+role;owner._harmony_streams.erase(id);owner.audio_report.get("harmony_notes",{}).erase(id)
	owner.remove_meta("authored_score")
	if owner._pluck_city!=null and data.get("city",0)==owner._pluck_city.get_instance_id() and owner._biome_mode==int(data.get("document",{}).get("harmony_mode",-2)):
		owner._biome_mode=preload("res://scripts/audio/city_creation_harmonic_palette.gd").for_city(owner._pluck_city)
func _process(_delta:float)->void:
	if worker==null or worker.is_alive():return
	var data:Dictionary=worker.wait_to_finish();worker=null;var owner:=get_parent()
	if owner._pluck_city==null or city_id!=owner._pluck_city.get_instance_id() or revision!=owner._pluck_city.revision:return
	var prior:Dictionary=owner.get_meta("authored_score",{})
	if not prior.is_empty():discard(owner,prior)
	for role:String in data:
		var id:="study1/"+str(request_data.signature)+"/"+role
		owner._harmony_streams[id]=data[role].stream;owner.audio_report.get_or_add("harmony_notes",{})[id]=data[role].notes
	owner._biome_mode=int(request_data.document.harmony_mode)
	owner.set_meta("authored_score",{"signature":request_data.signature,"document":request_data.document,"city":city_id,"revision":revision,"harmony":request_data.get("harmony",[])});owner.remove_meta("chamber_role_key")
func _exit_tree()->void:
	if worker!=null:worker.wait_to_finish();worker=null

extends Node
## Explicit developer import into the production role routing and pooled players.
const Document=preload("res://scripts/audio/city_creation_score_document.gd")
const Cues=preload("res://scripts/audio/city_creation_score_cue_bank.gd")
const ROLES:=["lead","foundation","pulse","answer"]
var worker:Thread
var request_data:Dictionary={}
var city_id:=0
var revision:=-1
static func request(owner:Node,path:String)->Dictionary:
	return _request_data(owner,Document.read(path))
static func request_master(owner:Node,section:int,mode:int=0)->Dictionary:
	if mode!=0:return {"ok":false,"message":"母曲公开试听目前使用D大调；其他调式须先完成全局换段与跨小节提示的和声接续"}
	return _request_data(owner,preload("res://scripts/audio/city_creation_master_score.gd").section(section,mode))
static func request_master_continuous(owner:Node,mode:int=0)->Dictionary:
	if mode!=0:return {"ok":false,"message":"连续母曲目前仅开放已验证的D大调基础谱"}
	return _request_data(owner,preload("res://scripts/audio/city_creation_master_performance.gd").prepare(mode))
static func _request_data(owner:Node,data:Dictionary)->Dictionary:
	if owner._pluck_city==null:return {"ok":false,"message":"请先打开用于预览的城市"}
	if not data.ok:return data
	var node:=owner.get_node_or_null("AuthoredScore")
	if node==null:node=load("res://scripts/audio/city_creation_authored_score.gd").new();node.name="AuthoredScore";owner.add_child(node)
	if node.worker!=null:return {"ok":false,"message":"上一份谱材仍在准备"}
	if data.get("duration",24.)==144.:data.content_context=preload("res://scripts/audio/city_creation_master_performance.gd").context(owner._pluck_city)
	if data.has("harmony"):data.cue_templates=Cues.templates(owner,int(data.document.harmony_mode))
	node.city_id=owner._pluck_city.get_instance_id();node.revision=owner._pluck_city.revision;node.request_data=data
	var copied:Dictionary=data.duplicate(true);node.worker=Thread.new();node.worker.start(func():return render(copied))
	return {"ok":true,"message":"原创谱材已进入后台准备","signature":data.signature}
static func render(data:Dictionary)->Dictionary:
	var synth=load("res://scripts/audio/city_creation_music.gd").new();var score=load("res://scripts/audio/city_creation_chamber_score.gd");var out:={}
	if data.get("duration",24.)==144.:
		out=preload("res://scripts/audio/city_creation_master_performance.gd").render(data,synth);synth.free();return out
	for role:String in ROLES:
		out[role]=score.render(data.events.filter(func(e):return e.role==role),synth._add_harmony_note,synth._pcm_stream)
	if data.has("cue_templates"):out.short_cues=Cues.render(data.cue_templates,data.harmony,str(data.signature),synth)
	synth.free();return out
static func valid_key(id:String,stem:String)->bool:
	var parts:=id.split("/")
	if parts.size()!=3 or parts[0]!="study1" or not Document.hex_hash(parts[1]):return false
	if parts[2]=="lead":return stem in preload("res://scripts/audio/city_creation_harmonic_emergence.gd").LEADS+["concert"]
	return parts[2] in ["foundation","pulse","answer"] and stem=={"foundation":"foundation","pulse":"air","answer":"terrace"}[parts[2]]
static func apply(owner:Node,roles:Dictionary,leader:String)->bool:
	var data:Dictionary=owner.get_meta("authored_score_ready",owner.get_meta("authored_score",{}))
	if data.is_empty():return false
	if owner._pluck_city==null or data.city!=owner._pluck_city.get_instance_id():discard(owner,data);return false
	if not preload("res://scripts/audio/city_creation_master_performance.gd").valid(owner,data):
		owner._biome_mode=preload("res://scripts/audio/city_creation_harmonic_palette.gd").for_city(owner._pluck_city);discard(owner,data);return false
	leader=str(owner.get_meta("authored_score_stem",leader));owner.set_meta("authored_score_stem",leader)
	for stem:String in roles:roles[stem].active=false
	for pair:Array in [[leader,"lead"],["foundation","foundation"],["air","pulse"],["terrace","answer"]]:
		var id:="study1/"+str(data.signature)+"/"+str(pair[1]);var stem:String=pair[0]
		roles[stem].merge({"id":id,"base_id":id,"bank":"harmony","legato":false,"role":pair[1],"preset":data.document.id,"active":true,"gain_offset":0.,"layer":3 if pair[1]=="lead" else 1 if pair[1]=="foundation" else 2},true)
	return true
static func discard(owner:Node,data:Dictionary)->void:
	var ready:Dictionary=owner.get_meta("authored_score_ready",{})
	var active:Dictionary=owner.get_meta("authored_score",{})
	if not ready.is_empty():release(owner,ready)
	if not active.is_empty():release(owner,active)
	Cues.retire(owner)
	owner.remove_meta("chamber_role_key")
	owner.remove_meta("authored_score_ready")
	var playback:=owner.get_node_or_null("ScorePlayback")
	if playback!=null:playback.cancel(true)
	release(owner,data)
	owner.remove_meta("authored_score")
	owner.remove_meta("authored_score_stem")
	if owner._pluck_city!=null and data.get("city",0)==owner._pluck_city.get_instance_id() and owner._biome_mode==int(data.get("document",{}).get("harmony_mode",-2)):
		owner._biome_mode=preload("res://scripts/audio/city_creation_harmonic_palette.gd").for_city(owner._pluck_city)
static func release(owner:Node,data:Dictionary)->void:
	if data.is_empty():return
	for role:String in ["lead","foundation","pulse","answer"]:
		var id:="study1/"+str(data.signature)+"/"+role;owner._harmony_streams.erase(id);owner.audio_report.get("harmony_notes",{}).erase(id)
		owner.audio_report.get("harmony_peaks",{}).erase(id)

func _process(_delta:float)->void:
	if worker==null or worker.is_alive():return
	var data:Dictionary=worker.wait_to_finish();worker=null;var owner:=get_parent()
	if owner._pluck_city==null or city_id!=owner._pluck_city.get_instance_id():return
	if request_data.get("duration",24.)==144.:
		if request_data.content_context!=preload("res://scripts/audio/city_creation_master_performance.gd").context(owner._pluck_city) or not preload("res://scripts/audio/city_creation_master_performance.gd").source_valid(request_data):return
	elif revision!=owner._pluck_city.revision:return
	var prior:Dictionary=owner.get_meta("authored_score_ready",{})
	if not prior.is_empty() and prior.get("signature","")!=owner.get_meta("authored_score",{}).get("signature",""):release(owner,prior)
	owner._harmony_streams=owner._harmony_streams.duplicate()
	for role:String in ROLES:
		var id:="study1/"+str(request_data.signature)+"/"+role
		owner._harmony_streams[id]=data[role].stream;owner.audio_report.get_or_add("harmony_notes",{})[id]=data[role].notes
		owner.audio_report.get_or_add("harmony_peaks",{})[id]=data[role].peak
	owner.set_meta("authored_score_ready",{"signature":request_data.signature,"document":request_data.document,"city":city_id,"revision":revision,"harmony":request_data.get("harmony",[]),"short_cues":data.get("short_cues",{}),"section":request_data.get("section",-1),"master_signature":request_data.get("master_signature","")});owner.remove_meta("chamber_role_key")
	var ready:Dictionary=owner.get_meta("authored_score_ready")
	for key:String in ["duration","sections","dsp_signature","content_context"]:
		if request_data.has(key):ready[key]=request_data[key]
	if data.has("section_cues"):ready.section_cues=data.section_cues
	preload("res://scripts/audio/city_creation_score_playback.gd").ensure(owner)
func _exit_tree()->void:
	if worker!=null:worker.wait_to_finish();worker=null

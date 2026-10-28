extends Node
## Only the requested four-role bundle is synthesized. Six bundles stay resident.
const Core=preload("res://scripts/audio/city_creation_core_scores.gd")
const ROLES:=["lead","foundation","pulse","answer"]
var pending:Dictionary={}
var worker:Thread
var job:=""
var revision:=-1
var city_id:=0
var lru:Array[String]=[]
var generated:=0
static func key(style:String,material:int,mode:int,color:int,role:String,seed:int=-1)->String:
	return "core1/%s/%d/%d/%d/"%[style,material,mode,color]+(str(seed)+"/" if seed>=0 else "")+role
static func parse(id:String)->Dictionary:
	var p:=id.split("/")
	if p.size() not in [6,7] or p[0]!="core1" or p[1] not in Core.STYLES or p[-1] not in ROLES:return {}
	for i:int in [2,3,4]:
		if not p[i].is_valid_int() or str(int(p[i]))!=p[i]:return {}
	if int(p[2]) not in [0,1,2] or int(p[3])<0 or int(p[3])>9 or int(p[4]) not in [0,1,2]:return {}
	if p.size()==7 and (not p[5].is_valid_int() or str(int(p[5]))!=p[5] or int(p[5])<0 or int(p[5])>2147483647):return {}
	return {"style":p[1],"material":int(p[2]),"mode":int(p[3]),"color":int(p[4]),"role":p[-1],"seed":int(p[5]) if p.size()==7 else -1}
static func ensure(owner:Node)->Node:
	var node:=owner.get_node_or_null("CoreScoreCache")
	if node==null:node=load("res://scripts/audio/city_creation_core_score_cache.gd").new();node.name="CoreScoreCache";owner.add_child(node)
	return node
static func request(owner:Node,id:String)->bool:
	if owner._harmony_streams.has(id):return true
	var data:=parse(id)
	if not data.is_empty() and data.seed>=0:
		var shared:=key(data.style,data.material,data.mode,data.color,data.role)
		if owner._harmony_streams.has(shared):
			owner._harmony_streams[id]=owner._harmony_streams[shared]
			for field:String in ["harmony_notes","harmony_peaks"]:owner.audio_report.get_or_add(field,{})[id]=owner.audio_report.get(field,{}).get(shared,[] if field=="harmony_notes" else 0.)
			if owner.is_inside_tree():
				var node=ensure(owner);var base:=id.get_base_dir();node.lru.erase(base);node.lru.append(base)
			return true
	if data.is_empty() or not owner.is_inside_tree():return false
	var node=ensure(owner);var base:=id.get_base_dir()
	if not node.pending.has(base):
		node.pending[base]=data
		while node.pending.size()>3:node.pending.erase(node.pending.keys()[0])
	return false
static func valid_for(id:String,stem:String)->bool:
	var data:=parse(id)
	if data.is_empty():return false
	if data.role=="lead":return stem in preload("res://scripts/audio/city_creation_harmonic_emergence.gd").LEADS+["concert"]
	return stem=={"foundation":"foundation","pulse":"air","answer":"terrace"}[data.role]
static func render(data:Dictionary)->Dictionary:
	# Detached, worker-owned synth exposes only deterministic math methods.
	var synth=load("res://scripts/audio/city_creation_music.gd").new()
	var result:=Core.bundle(data.style,data.material,data.mode,data.color,synth._add_harmony_note,synth._pcm_stream)
	synth.free();return result
static func install(owner:Node,base:String,data:Dictionary)->void:
	for role:String in data:
		var id:=base+"/"+role;var row:Dictionary=data[role]
		owner._harmony_streams[id]=row.stream;owner.audio_report.get_or_add("harmony_notes",{})[id]=row.notes;owner.audio_report.get_or_add("harmony_peaks",{})[id]=row.peak
	owner.remove_meta("chamber_role_key")
static func materialize(owner:Node,id:String)->bool:
	if owner._harmony_streams.has(id):return true
	var data:=parse(id)
	if data.is_empty():return false
	install(owner,id.get_base_dir(),render(data));return owner._harmony_streams.has(id)
func _process(_delta:float)->void:
	var owner:=get_parent()
	prune(owner)
	if worker!=null:
		if worker.is_alive():return
		var result:Dictionary=worker.wait_to_finish();worker=null
		if owner._pluck_city!=null and city_id==owner._pluck_city.get_instance_id() and revision==owner._pluck_city.revision:
			install(owner,job,result);lru.erase(job);lru.append(job);generated+=1
		job=""
	if pending.is_empty() or owner._pluck_city==null:return
	job=str(pending.keys()[0]);var data:Dictionary=pending[job];pending.erase(job)
	if owner._harmony_streams.has(job+"/lead"):job="";return
	revision=owner._pluck_city.revision;city_id=owner._pluck_city.get_instance_id()
	worker=Thread.new();worker.start(func():return render(data))
func prune(owner:Node)->void:
	var attempts:=lru.size()
	while lru.size()>6 and attempts>0:
		attempts-=1
		var base:String=lru.pop_front();var active:=false
		for id:String in owner._variation_active.values():active=active or id.begins_with(base+"/")
		if active:lru.append(base);continue
		for role:String in ROLES:
			var id:=base+"/"+role;owner._harmony_streams.erase(id);owner.audio_report.get("harmony_notes",{}).erase(id);owner.audio_report.get("harmony_peaks",{}).erase(id)
func _exit_tree()->void:
	if worker!=null:worker.wait_to_finish();worker=null

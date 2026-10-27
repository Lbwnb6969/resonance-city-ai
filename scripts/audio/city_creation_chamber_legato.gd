extends Node
## The selected organic neighbourhood prepares its longer articulation off
## the owning thread. The ordinary bank keeps playing until a silent seam.
const Score=preload("res://scripts/audio/city_creation_chamber_score.gd")
var worker:Thread
var pending:Dictionary={}
var active_key:=""
static func base(key:String)->String:return key.trim_prefix("chamber_legato/")
static func valid_key(key:String)->bool:
	if not key.begins_with("chamber_legato/"):return false
	var parts:=base(key).split("/")
	if parts.size()==2 and parts[0].is_valid_int() and parts[1]=="nocturne":return int(parts[0])>=0 and int(parts[0])<10
	if parts.size()==3:
		if not parts[0].is_valid_int() or int(parts[0])<1 or int(parts[0])>=10:return false
	elif parts.size()!=2:return false
	return parts[-2] in Score.TIMBRES and parts[-1] in ["0","1","2"]
static func ledger(owner:Node,key:String)->Array:
	var source:=base(key)
	var notes:Array=owner.audio_report.get("variation_notes",{}).get(source,owner.audio_report.get("harmony_notes",{}).get(source,[])).duplicate(true)
	for event:Dictionary in notes:
		if int(event.get("layer",3)) not in [2,3]:continue
		event.duration=minf(float(event.duration)+.13,(2.20 if int(event.get("layer",3))==3 else 2.88)-fposmod(float(event.start),3.));event.legato=true
	return notes
static func render(owner:Node,key:String)->Dictionary:
	var events:=ledger(owner,key)
	return Score.render(events,owner._add_harmony_note,owner._pcm_stream) if not events.is_empty() else {}
static func install(owner:Node,key:String,data:Dictionary)->void:
	if data.is_empty():return
	owner._harmony_streams=owner._harmony_streams.duplicate()
	owner._harmony_streams[key]=data.stream;owner.audio_report.harmony_notes[key]=data.notes;owner.audio_report.harmony_peaks[key]=data.peak
static func materialize(owner:Node,key:String)->bool:
	if owner._harmony_streams.has(key):return true
	if not valid_key(key):return false
	install(owner,key,render(owner,key));return owner._harmony_streams.has(key)
static func request(owner:Node,source:String)->String:
	var key:="chamber_legato/"+source
	if owner._harmony_streams.has(key):return key
	var node=owner.get_node_or_null("ChamberLegato")
	if node==null:node=load("res://scripts/audio/city_creation_chamber_legato.gd").new();node.name="ChamberLegato";owner.add_child(node)
	if node.active_key!=key:node.pending[key]=true
	return source
func _process(_delta:float)->void:
	var music:=get_parent()
	if worker!=null:
		if worker.is_alive():return
		var data:Dictionary=worker.wait_to_finish();worker=null;install(music,active_key,data);active_key=""
	if pending.is_empty():return
	active_key=str(pending.keys()[0]);pending.erase(active_key)
	if music._harmony_streams.has(active_key):active_key="";return
	var key:=active_key;worker=Thread.new();worker.start(func():return render(music,key))
func _exit_tree()->void:
	if worker!=null:worker.wait_to_finish();worker=null

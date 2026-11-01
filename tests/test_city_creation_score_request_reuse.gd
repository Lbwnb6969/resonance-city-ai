extends SceneTree
## Lightweight request-state tests; no audio rendering. Engine execution pending.
const Reuse=preload("res://scripts/audio/city_creation_score_request_reuse.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
class Owner:
	extends Node
	var _pluck_city:RefCounted
	var concert_active:=false
	var phonograph:={"active":false}
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func candidate(owner:Node,signature:String)->Dictionary:
	return {"signature":signature,"duration":144.,"city":owner._pluck_city.get_instance_id(),"revision":owner._pluck_city.revision,"content_context":Whole.context(owner._pluck_city)}
func run()->void:
	if not OS.get_cmdline_user_args().has("--isolated-session"):push_error("isolated session required");quit(1);return
	var owner:=Owner.new();owner._pluck_city=State.new();owner._pluck_city.initialize_free()
	var reader:=Import.new();reader.name="AuthoredScore";owner.add_child(reader)
	var data:={"ok":true,"signature":"same_full_signature","duration":144.}
	check(Reuse.find(owner,reader,data).is_empty(),"nothing prepared means no reuse")
	reader.worker=Thread.new();var worker:Thread=reader.worker;reader.city_id=owner._pluck_city.get_instance_id();reader.request_data=data.duplicate(true);reader.request_data.content_context=Whole.context(owner._pluck_city)
	var reply:=Import._request_data(owner,data.duplicate(true))
	check(reply.ok and reply.reused and reply.stage=="preparing" and reader.worker==worker,"public request coalesces the identical in-flight worker")
	var other:=data.duplicate(true);other.signature="different_full_signature"
	check(Reuse.find(owner,reader,other).is_empty(),"different pending content is not reused")
	check(not Import._request_data(owner,other).ok and reader.worker==worker,"different busy request retains original admission behavior")
	reader.city_id=-1;check(Reuse.find(owner,reader,data).is_empty(),"worker from another city not reused");reader.city_id=owner._pluck_city.get_instance_id()
	reader.request_data.content_context=[];check(Reuse.find(owner,reader,data).is_empty(),"worker with stale intent not reused");reader.worker=null
	owner.set_meta("authored_score_ready",candidate(owner,data.signature));owner.set_meta("authored_score",candidate(owner,"old_signature"))
	reply=Import._request_data(owner,data.duplicate(true));check(reply.reused and reply.stage=="ready" and reader.worker==null,"prepared target reused before cues or rendering")
	owner.set_meta("authored_score_ready",candidate(owner,"newer_target"));owner.set_meta("authored_score",candidate(owner,data.signature))
	check(Reuse.find(owner,reader,data).is_empty(),"old active A does not hide newer pending B")
	owner.set_meta("authored_score_ready",{});var saved:Dictionary=owner._pluck_city.snapshot();var active:Dictionary=owner.get_meta("authored_score").duplicate(true)
	reply=Import._request_data(owner,data.duplicate(true));check(reply.reused and reply.stage=="active" and reader.worker==null,"active full work reused without a new worker")
	check(owner._pluck_city.snapshot()==saved and owner.get_meta("authored_score")==active,"reuse does not write author or played state")
	owner._pluck_city.add_house(Vector2(-20,-20));check(Reuse.find(owner,reader,data).get("stage")=="active","unrelated geometry revision keeps valid full content")
	var short:=data.duplicate(true);short.duration=24.;check(Reuse.find(owner,reader,short).is_empty(),"M80 and single-section requests keep existing semantics")
	owner.concert_active=true;check(Reuse.find(owner,reader,data).is_empty(),"concert ownership does not report active reuse");owner.concert_active=false
	owner.phonograph.active=true;check(Reuse.find(owner,reader,data).is_empty(),"phonograph ownership does not report active reuse");owner.phonograph.active=false
	owner._pluck_city.music_mode="gong_pentatonic";check(Reuse.find(owner,reader,data).is_empty(),"changed modal intent rejects active reuse")
	owner._pluck_city=State.new();owner._pluck_city.initialize_free();check(Reuse.find(owner,reader,data).is_empty(),"new city rejects old active reuse")
	owner.free();print("FULL_REQUEST_REUSE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

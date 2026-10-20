extends SceneTree
const Reclaimer=preload("res://scripts/visual/city_creation_cpu_retirement.gd")
class TrackedCPU extends RefCounted:
	var report:Dictionary
	func _init(output:Dictionary)->void:report=output
	func _notification(what:int)->void:
		if what==NOTIFICATION_PREDELETE:report.thread=OS.get_thread_caller_id()
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var reclaimer:=Reclaimer.new();var first:Dictionary={};var second:Dictionary={}
	var a:=TrackedCPU.new(first);var b:=TrackedCPU.new(second);var weak_a:WeakRef=weakref(a);var weak_b:WeakRef=weakref(b)
	var live:Dictionary={"positions":[Vector3(1,2,3)],"nested":{"enabled":true}};var before:=var_to_bytes(live)
	var incoming:Array=[a,live];reclaimer.enqueue(incoming);incoming=[];a=null
	check(reclaimer.pending() and reclaimer.pending_count()==2 and weak_a.get_ref()!=null,"obsolete CPU values stay alive until an explicit worker handoff")
	reclaimer.pump();reclaimer.enqueue([b]);b=null
	reclaimer.close()
	check(weak_a.get_ref()==null and weak_b.get_ref()==null and first.has("thread") and second.has("thread"),"shutdown joins the active release and drains values queued while it was running")
	check(first.thread!=OS.get_thread_caller_id() and second.thread!=OS.get_thread_caller_id(),"both actual final destructors run off the main thread")
	check(var_to_bytes(live)==before,"dropping obsolete references never clears or mutates still-published shared containers")
	check(not reclaimer.pending() and reclaimer.stats.batches==2 and reclaimer.stats.values==3,"completed release reports contain only counts and time and no retained CPU objects")
	reclaimer.close();check(not reclaimer.pending(),"closing a drained reclaimer is idempotent")
	print("CPU_RETIREMENT ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"stats":reclaimer.stats}));quit(0 if failures.is_empty() else 1)

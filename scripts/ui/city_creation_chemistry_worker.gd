extends RefCounted
## One detached value-only plan; GPU ghosts are published by the owner thread.
const Plans=preload("res://scripts/world/city_creation_chemistry_preview.gd")
var thread:Thread
var stats:Dictionary={"requested":0,"completed":0,"worker_ms":0.,"capture_ms":0.}
func busy()->bool:return thread!=null
func start(city:RefCounted,request:Dictionary)->void:
 var began:=Time.get_ticks_usec();var source:=Plans.fork(city)
 for field:String in ["houses","roads","plants","waters","terrain_strokes","districts","biome_seed","harmony_journey","era_modifiers"]:source.set(field,city.get(field).duplicate(true))
 stats.capture_ms=(Time.get_ticks_usec()-began)/1000.;stats.requested+=1
 var queued:Dictionary=request.duplicate(true);queued.state_id=city.get_instance_id()
 thread=Thread.new();thread.start(_work.bind(source,queued))
static func _work(source:RefCounted,request:Dictionary)->Dictionary:
 var began:=Time.get_ticks_usec()
 var rows:Array=Plans.building(source,request.candidate) if request.mode=="house" else Plans.road(source,request.points,request.width,request.style,bool(request.candidate.valid))
 return {"key":request.key,"mode":request.mode,"preview_ids":request.get("preview_ids",[]),"state_id":request.state_id,"revision":source.revision,"rows":rows,"ms":(Time.get_ticks_usec()-began)/1000.}
func poll()->Dictionary:
 if thread==null or thread.is_alive():return {}
 var row:Dictionary=thread.wait_to_finish();thread=null;stats.completed+=1;stats.worker_ms=row.ms;return row
func close()->void:
 if thread!=null:thread.wait_to_finish();thread=null

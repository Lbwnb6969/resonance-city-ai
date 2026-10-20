extends RefCounted
## Main-thread queue; a single worker only drops detached CPU value references.
## Callers never enqueue scene nodes, rendering resources or mutable live owners.
var queued:Array=[]
var worker:Thread
var running_count:=0
var stats:Dictionary={"batches":0,"values":0,"worker_ms":0.,"worker_peak_ms":0.}
func enqueue(values:Array)->void:queued.append_array(values)
func pending()->bool:return worker!=null or not queued.is_empty()
func pending_count()->int:return running_count+queued.size()
static func _release_values(values:Array)->Dictionary:
	var began:=Time.get_ticks_usec();var count:=values.size()
	# Clear the bound array here, so the callable cannot retain its last refs
	# until wait_to_finish() later runs on the main thread.
	values.clear()
	return {"values":count,"worker_ms":float(Time.get_ticks_usec()-began)/1000.}
func _join()->void:
	var result:Dictionary=worker.wait_to_finish();worker=null;running_count=0
	stats.batches+=1;stats.values+=int(result.values)
	stats.worker_ms+=float(result.worker_ms);stats.worker_peak_ms=maxf(float(stats.worker_peak_ms),float(result.worker_ms))
func pump()->void:
	if worker!=null:
		if worker.is_alive():return
		_join()
	if queued.is_empty():return
	var batch:=queued;queued=[];running_count=batch.size()
	worker=Thread.new();worker.start(_release_values.bind(batch))
func close()->void:
	if worker!=null:_join()
	if not queued.is_empty():pump();_join()

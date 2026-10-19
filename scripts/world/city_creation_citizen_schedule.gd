extends RefCounted
## Only awake residents enter the per-frame state machine. Hidden straight
## legs wait in a deadline heap; visibility and edits can wake them early.
var ready: Array[Dictionary]=[]
var sleeping: Dictionary={}
var _heap: Array[Dictionary]=[]
var _order:Dictionary={}
var _order_changed:=false
func reset(residents: Array[Dictionary])->void:
	ready.assign(residents);sleeping.clear();_heap.clear()
	_order.clear();_order_changed=false
	for i in range(residents.size()):_order[str(residents[i].home_id)]=i
func retain(resident: Dictionary)->void:ready.append(resident)
func sleep(resident: Dictionary,motion: RefCounted)->void:
	var home: String=resident.home_id
	sleeping[home]=motion
	var entry: Dictionary={"at":motion.due_at,"home":home,"resident":resident,"motion":motion}
	_heap.append(entry);var index:=_heap.size()-1
	while index>0:
		var parent: int=(index-1)/2
		if float(_heap[parent].at)<=float(entry.at):break
		_heap[index]=_heap[parent];index=parent
	_heap[index]=entry
func wake(resident: Dictionary)->void:
	if sleeping.erase(str(resident.home_id)):ready.append(resident);_order_changed=true
func take(now: float)->Array[Dictionary]:
	while not _heap.is_empty() and float(_heap[0].at)<=now:
		var entry: Dictionary=_heap[0];var last: Dictionary=_heap.pop_back()
		if not _heap.is_empty():
			var index:=0
			while index*2+1<_heap.size():
				var child:=index*2+1
				if child+1<_heap.size() and float(_heap[child+1].at)<float(_heap[child].at):child+=1
				if float(last.at)<=float(_heap[child].at):break
				_heap[index]=_heap[child];index=child
			_heap[index]=last
		if sleeping.get(entry.home)!=entry.motion or float(entry.at)!=float(entry.motion.due_at):continue
		sleeping.erase(entry.home);ready.append(entry.resident);_order_changed=true
	# A sleeper joining the ready set keeps its authored resident order. The
	# same-frame last loaf must go to the same household as full simulation.
	if _order_changed:
		ready.sort_custom(func(a:Dictionary,b:Dictionary)->bool:return int(_order[str(a.home_id)])<int(_order[str(b.home_id)]))
		_order_changed=false
	var result:=ready;ready=[];return result

extends RefCounted
## One shared transport grid. Queued plans are transient, never saved with a town.
enum Mode { SCULPTING, MANAGING, STROLLING, SYMPHONY }
const SLOT_SECONDS:=.1875
const BAR_SECONDS:=3.
const MAX_ARP_QUEUE:=5
const EVENT_SLOTS:={"tower_bell":0,"quality_upgrade":1,"waterwheel":2,"cafe_flute":4,"bakery_cue":6,"district_reply":8,"tram_chime":10,"travel_crossing":12,"quality_flourish":14}
const PERIODIC:={0:"tower_bell",2:"waterwheel",4:"cafe_flute",6:"bakery_cue",8:"district_reply",10:"tram_chime",12:"travel_crossing",14:"quality_flourish"}
const WINDOW:=.10
var current_mode: Mode=Mode.MANAGING
var backing_duck_db:=0.
var dragging:=false
var concerting:=false
var last_sculpt_sec:=-INF
var _last_slot:=-1
var _arp_queue: Array[Dictionary]=[]
var _events: Dictionary={}
var _cooldowns: Dictionary={}
var stats: Dictionary={"plucks":0,"coalesced":0,"superseded":0,"events":0,"late":0}

func notify_sculpt_action(clock_sec: float)->void:last_sculpt_sec=clock_sec

func evaluate_mode(zoom:float,concert_active:bool,strolling:bool,delta:float,clock_sec:float)->Mode:
	concerting=concert_active
	if dragging:last_sculpt_sec=clock_sec
	if concert_active:current_mode=Mode.SYMPHONY
	elif dragging or clock_sec-last_sculpt_sec<=.6:current_mode=Mode.SCULPTING
	elif strolling or zoom<=18.:current_mode=Mode.STROLLING
	elif zoom>32.:current_mode=Mode.SYMPHONY
	else:current_mode=Mode.MANAGING
	var target:float=preload("res://scripts/audio/city_creation_music_experience.gd").SCULPT_DUCK_DB if current_mode==Mode.SCULPTING else (2. if current_mode==Mode.SYMPHONY else 0.)
	backing_duck_db=lerpf(backing_duck_db,target,1.-exp(-maxf(0.,delta)*6.))
	return current_mode

func allows(category:String)->bool:
	if category=="pluck_arp":return current_mode==Mode.SCULPTING or current_mode==Mode.STROLLING or current_mode==Mode.MANAGING
	if category=="quality_upgrade":return true
	if current_mode==Mode.SCULPTING:return false
	if current_mode==Mode.SYMPHONY:return category=="tower_bell"
	return true

func enqueue_pluck_arpeggio(plan:Dictionary,clock_sec:float,player_action:bool=true)->bool:
	if plan.is_empty():return false
	if player_action:notify_sculpt_action(clock_sec)
	if not _arp_queue.is_empty() and _arp_queue[-1].stream_key==plan.stream_key and _arp_queue[-1].house_id==plan.house_id:
		stats.coalesced+=1;return true
	if _arp_queue.size()==MAX_ARP_QUEUE:_arp_queue.pop_front();stats.superseded+=1
	var item:=plan.duplicate();item.queued_at=clock_sec
	_arp_queue.append(item);return true

func schedule_event(category:String,payload:Dictionary,clock_sec:float,min_cooldown:float=6.)->bool:
	if not EVENT_SLOTS.has(category) or not allows(category):return false
	var key:=category+":"+str(payload.get("region_id",payload.get("source_id","")))
	if clock_sec<float(_cooldowns.get(key,-INF)):stats.coalesced+=1;return true
	if _events.has(key):
		_events[key].payload=payload.duplicate();stats.coalesced+=1;return true
	# At most one phrase of candidates per category; nearby events coalesce.
	if _events.size()>=32:return false
	var due:=floori(clock_sec/BAR_SECONDS)*16+int(EVENT_SLOTS[category])
	if due*SLOT_SECONDS<clock_sec-.000001 or due<=_last_slot:due+=16
	_events[key]={"category":category,"payload":payload.duplicate(),"due":due,"queued_at":clock_sec,"cooldown":min_cooldown}
	return true

func clear()->void:
	_arp_queue.clear();_events.clear();_cooldowns.clear();_last_slot=-1

func step(clock_sec:float,trigger:Callable)->void:
	var slot:=floori(maxf(0.,clock_sec)/SLOT_SECONDS)
	if slot==_last_slot:return
	if slot<_last_slot:clear()
	_last_slot=slot
	# Recover a stalled frame with a rest, never a burst of stale notes.
	if clock_sec-slot*SLOT_SECONDS>WINDOW:stats.late+=1;return
	for key:String in _cooldowns.keys():
		if clock_sec>=float(_cooldowns[key]):_cooldowns.erase(key)
	while not _arp_queue.is_empty():
		var plan:Dictionary=_arp_queue.pop_front()
		if clock_sec-float(plan.queued_at)>1.2:continue
		if allows("pluck_arp") and bool(trigger.call("pluck_arp",plan)):stats.plucks+=1;return
	for key:String in _events.keys():
		var item:Dictionary=_events[key]
		if clock_sec-float(item.queued_at)>BAR_SECONDS+.2:_events.erase(key);continue
		if int(item.due)!=slot:continue
		_events.erase(key)
		if allows(item.category) and bool(trigger.call(item.category,item.payload)):
			_cooldowns[key]=clock_sec+float(item.cooldown);stats.events+=1;return
	var category:String=PERIODIC.get(posmod(slot,16),"")
	if not category.is_empty() and allows(category) and (concerting or preload("res://scripts/audio/city_creation_long_form.gd").allows_periodic(clock_sec)):trigger.call(category,{"phrase":int(slot/16),"periodic":true})

func report()->Dictionary:
	return {"mode":Mode.keys()[current_mode],"backing_duck_db":backing_duck_db,"arp_pending":_arp_queue.size(),"events_pending":_events.size(),"slot":_last_slot,"stats":stats.duplicate()}

extends Node
const Events=preload("res://scripts/ui/city_creation_juice_events.gd")
const Arcs=preload("res://scripts/visual/city_creation_juice_arcs.gd")
const Flight=preload("res://scripts/ui/city_creation_juice_flight.gd")
const STEP:=.1875
var demo:Node3D
var detector:=Events.new()
var arcs:=Arcs.new()
var flight:Control
var chains:Array[Dictionary]=[]
var journal:Array[Dictionary]=[]
var dirty:=false
var baseline:=true
var epoch:Variant=null
var serial:=0
func _clock()->float:
	return demo.music._playback_clock()+AudioServer.get_time_since_last_mix()
func _record(row:Dictionary)->void:
	journal.append(row)
	if journal.size()>256:journal.pop_front()
static func edited(owner:Node3D,result:Dictionary,kind:String)->void:
	owner.life.site_wishes.on_edit(result)
	if owner.has_meta("juice_feedback"):owner.get_meta("juice_feedback").mark(kind)
func setup(owner:Node3D,parent:Control)->void:
	demo=owner;name="JuiceFeedback";demo.add_child(self);demo.set_meta("juice_feedback",self)
	arcs.setup(demo);flight=Flight.new();flight.setup(demo,parent)
	epoch=[demo.state.get_instance_id(),demo.town.get_instance_id(),demo.state._wish_epoch]
	demo.town.set_meta("juice_feedback",self);detector.rebase(demo.state);baseline=false
func mark(kind:String)->void:
	if kind=="history":clear();baseline=true
	dirty=true
func clear()->void:
	chains.clear();arcs.clear();flight.clear()
func enqueue(event:Dictionary)->void:
	var ids:=Events.sequence(demo.state,str(event.source),event.members)
	ids=preload("res://scripts/visual/city_creation_prototype_activity.gd").extend(demo,event,ids)
	if ids.is_empty():return
	serial+=1
	var clock:float=_clock()
	chains.append({"serial":serial,"event":event.duplicate(true),"ids":ids,"index":0,"start":clock,"next":clock})
	_record({"serial":serial,"phase":"queued","kind":event.kind,"ids":ids.duplicate(),"members":event.members.duplicate(),"prototype_extra":event.get("prototype_extra",""),"clock":clock})
func wish(id:String,kind:String)->void:
	var group:Dictionary=demo.state.natural_clusters().get(id,{})
	var members:Array=group.get("members",[id]).duplicate()
	enqueue({"kind":"wish","source":id,"members":members,"label":{"water":"活水初炉","tree":"良木成林","bloom":"花下备席","arcade":"廊下初画","chime":"铜铃首鸣"}.get(kind,"街坊初聚")})
func quality(events:Array)->void:
	var ids:Array[String]=[];var tier:=1
	for event:Dictionary in events:
		if int(event.to)<=int(event.get("from",1)):continue
		ids.append(str(event.house_id));tier=maxi(tier,int(event.to))
	if not ids.is_empty():enqueue({"kind":"quality","source":ids[0],"members":ids,"label":"共鸣品质 "+str(tier)})
func _process(_delta:float)->void:
	var key:=[demo.state.get_instance_id(),demo.town.get_instance_id(),demo.state._wish_epoch]
	if key!=epoch:
		epoch=key;clear();baseline=true;dirty=true;demo.town.set_meta("juice_feedback",self)
	if demo.gallery.busy:return
	preload("res://scripts/world/city_creation_debut_encore.gd").tick(self)
	if not demo.edit_pending() and (dirty or baseline):
		if baseline:detector.rebase(demo.state);baseline=false
		else:
			for event:Dictionary in detector.collect(demo.state):enqueue(event)
		dirty=false
	var clock:float=_clock()
	for chain:Dictionary in chains.duplicate():
		while int(chain.index)<chain.ids.size() and clock>=float(chain.next):
			var id:String=chain.ids[chain.index]
			if not demo.town.house_roots.has(id):chains.erase(chain);break
			var scheduled:float=chain.next
			demo.town.animate_house_bounce(id,.04)
			if demo.town.touch.active.has(id):demo.town.touch.active[id].elapsed=minf(.55,maxf(0.,clock-scheduled))
			if int(chain.index)>0:arcs.emit(demo.state,chain.ids[chain.index-1],id,scheduled)
			_record({"serial":chain.serial,"phase":"bounce","id":id,"index":chain.index,"clock":clock,"scheduled":scheduled})
			chain.index+=1;chain.next=float(chain.start)+int(chain.index)*STEP
			if int(chain.index)>=chain.ids.size():
				var house:Dictionary=demo.town._house_record(id);var highest:=0
				for cell:Dictionary in house.cells:highest=maxi(highest,int(cell.level))
				flight.emit(Vector3(house.origin[0],float(house.get("base_y",0.))+(highest+1)*1.7+.45,house.origin[1]),chain.event.kind,chain.event.label,scheduled)
				_record({"serial":chain.serial,"phase":"flight","id":id,"clock":clock});chains.erase(chain)
	arcs.update(clock);flight.update(clock)

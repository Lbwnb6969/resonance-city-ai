extends Node
## All automatic life candidates compete before the two quiet tail slots.
const Grid=preload("res://scripts/audio/city_creation_cue_grid.gd")
var pending:Dictionary={}
var events:Array[Dictionary]=[]
var seen:Dictionary={}
var generation:Variant=null
var last_slot:=-1
var bar:=-1
var played:=0
static func ensure(owner:Node)->Node:
	var node:=owner.get_node_or_null("ChamberOrnaments")
	if node==null:node=load("res://scripts/audio/city_creation_chamber_ornaments.gd").new();node.name="ChamberOrnaments";owner.add_child(node)
	return node
static func nearest(owner:Node,ids:Array)->Dictionary:
	var selected:Dictionary={};var distance:=INF
	for id:String in ids:
		var at:Vector2=owner._source_position(id);var d:float=owner._listener_focus.distance_squared_to(at)
		if d<distance or is_equal_approx(d,distance) and id<str(selected.get("id","~")):selected={"id":id,"at":at};distance=d
	return selected
static func ordered(owner:Node,ids:Array)->Array:
	var result:=ids.duplicate()
	result.sort_custom(func(a:String,b:String):var da:float=owner._listener_focus.distance_squared_to(owner._source_position(a));var db:float=owner._listener_focus.distance_squared_to(owner._source_position(b));return a<b if is_equal_approx(da,db) else da<db)
	return result
static func select(owner:Node,ids:Array)->String:
	var preferred:=str(owner.get_meta("chamber_candidate",{}).get("id",""))
	return preferred if preferred in ids else str(nearest(owner,ids).get("id",""))
static func candidate(owner:Node,category:String)->Dictionary:
	if category=="bakery_cue":
		var row:Dictionary=owner.bakery_cues._pending
		return {} if row.is_empty() or not owner.bakery_cues._valid(row) else {"id":str(row.source_id),"at":row.position}
	if category=="travel_crossing":
		var row:Dictionary=owner._travel_pending
		return {} if row.is_empty() or not owner._travel_eligible(row) else {"id":str(row.source_id),"at":row.position}
	if category=="tram_chime":
		var row:Dictionary=owner._tram_pending
		return {} if row.is_empty() else {"id":str(row.station),"at":row.position}
	if category=="district_reply":
		var row:Dictionary=owner.reply._pending
		if not row.is_empty():return {"id":str(row.to_id),"at":row.to_position}
		var ids:Array=[]
		for pair:Dictionary in owner.reply._pairs.values():
			if owner.reply._pair_valid(pair):ids.append(str(pair.from_id));ids.append(str(pair.to_id))
		return nearest(owner,ids)
	var ids:Array=[]
	for id:String in owner._house_music:
		var row:Dictionary=owner._house_music[id]
		if category=="cafe_flute" and owner._cafe_eligible(id):ids.append(id)
		elif category=="tower_bell" and owner._nearest_tower(id).is_finite():ids.append(id)
		elif category=="waterwheel" and row.get("signature","")=="watermill" and owner.acoustic.focus_weight(id)>0.:ids.append(id)
		elif category=="quality_flourish" and (int(row.get("level_tier",1))>=3 or int(row.get("mechanisms",0))>0) and owner.acoustic.focus_weight(id)>0.:ids.append(id)
	return nearest(owner,ids)
static func route(owner:Node,category:String,payload:Dictionary)->bool:
	if owner.get_meta("chamber_dispatch",false):return false
	var row:=candidate(owner,category)
	if not row.is_empty():
		var callback:=func():return owner._attention_trigger(category,{"phrase":floori(owner._playback_clock()/3.),"periodic":payload.get("periodic",false)})
		request(owner,category,str(row.id),row.at,callback,1,"answer" if category=="district_reply" and not owner.reply._pending.is_empty() else "call" if category=="district_reply" else "")
	return true
static func request(owner:Node,category:String,id:String,at:Vector2,callback:Callable,cost:int=1,phase:String="")->bool:
	if owner.muted or owner._loading or owner.phonograph.active or not at.is_finite():return false
	if owner.acoustic.point_weight(at)<=0. and category!="tower_bell":return false
	var node=ensure(owner);var clock:=Grid.transport_clock(owner);var key:=category+"/"+id+("/"+phase if not phase.is_empty() else "")
	if clock-float(node.seen.get(key,-INF))<3.:return false
	var revision:int=owner._pluck_city.revision if owner._pluck_city!=null else -1
	if node.pending.size()>=32 and not node.pending.has(key):return false
	node.pending[key]={"category":category,"id":id,"at":at,"callback":callback,"queued":clock,"revision":revision,"cost":cost}
	return true
static func offset(owner:Node,fallback:float)->float:return fposmod(owner._playback_clock(),3.) if owner.get_meta("chamber_dispatch",false) else fallback
static func wave(owner:Node,original:AudioStreamWAV,variant:int=-1)->AudioStreamWAV:
	if not owner.get_meta("chamber_dispatch",false):return original
	if variant<0:variant=int(owner.get_meta("chamber_slot_ordinal",0))
	var bar:=Grid.bar(Grid.transport_clock(owner));var key:="%d/chamber_sparkle_%d_%d"%[maxi(0,owner.harmony_mode()),bar,variant%2]
	return owner._harmony_streams.get(key,original)
static func concert(owner:Node,phrase:int)->void:
	route(owner,"tower_bell",{"phrase":phrase})
	route(owner,"quality_flourish" if phrase%2==1 else "waterwheel",{"phrase":phrase})
func _process(_delta:float)->void:
	var owner:=get_parent()
	if owner._loading or owner.muted or owner.phonograph.active:pending.clear();return
	var revision:int=owner._pluck_city.revision if owner._pluck_city!=null else -1
	var clock:=Grid.transport_clock(owner);var current:=floori(clock/3.)
	if current!=bar:bar=current;played=0
	for key:String in pending.keys():
		var row:Dictionary=pending[key]
		if revision!=int(row.revision) or clock-float(row.queued)>3.2 or owner.acoustic.point_weight(row.at)<=0. and row.category!="tower_bell":pending.erase(key)
	if played>=2:return
	var slot:=floori(clock/Grid.GRID);var tick:=posmod(slot,16)
	if slot==last_slot or tick not in [12,14] or clock-slot*Grid.GRID>.10:return
	last_slot=slot
	var keys:Array=pending.keys()
	keys.sort_custom(func(a:String,b:String):var da:float=owner._listener_focus.distance_squared_to(pending[a].at);var db:float=owner._listener_focus.distance_squared_to(pending[b].at);return a<b if is_equal_approx(da,db) else da<db)
	for key:String in keys:
		var row:Dictionary=pending[key]
		if played+int(row.get("cost",1))>2:continue
		pending.erase(key)
		if clock-float(seen.get(key,-INF))<3.:continue
		var before:=serials(owner);var prior:Array=[]
		for player:AudioStreamPlayer in owner._effects:prior.append(int(player.get_meta("creation_voice_serial",0)))
		owner.set_meta("chamber_dispatch",true);owner.set_meta("chamber_candidate",row);owner.set_meta("chamber_slot_ordinal",played)
		row.callback.call();owner.set_meta("chamber_dispatch",false)
		var count:=serials(owner)-before
		if count==0:continue
		played+=count;seen[key]=clock
		var grid_events:Array=owner.get_meta("cue_grid_events",[]);var actual_onset:=float(grid_events[-1].onset) if not grid_events.is_empty() else clock
		var diagnostic:={"category":row.category,"source_id":row.id,"position":row.at,"distance":owner._listener_focus.distance_to(row.at),"clock":clock,"onset":actual_onset,"bar":floori(actual_onset/3.),"notes":count,"dispatch_slot":tick,"slot":posmod(roundi(actual_onset/Grid.GRID),16),"layer":4,"pitches":[],"streams":[]}
		for index in owner._effects.size():
			var player:AudioStreamPlayer=owner._effects[index]
			if int(player.get_meta("creation_voice_serial",0))<=prior[index]:continue
			if player.stream!=null and player.stream.has_meta("chamber_midi"):
				diagnostic.pitches.append(int(player.stream.get_meta("chamber_midi")));diagnostic.streams.append(str(player.stream.get_meta("chamber_key")))
		events.append(diagnostic)
		if events.size()>128:events.pop_front()
		owner.set_meta("chamber_ornament_events",events.duplicate(true));break
static func serials(owner:Node)->int:
	var result:=0
	for player:AudioStreamPlayer in owner._effects:result+=int(player.get_meta("creation_voice_serial",0))
	return result

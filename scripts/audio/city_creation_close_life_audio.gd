extends RefCounted
## Visible action contacts borrow one idle short voice; nothing enters State.
const RADIUS:=5.5
const OUT_ZOOM:=18.
const FULL_ZOOM:=10.
const GAIN_DB:=-9.
const BANK:={"step":["step_a","step_b"],"wood":["wood_a","wood_b"],"bread":["bread"],"cup":["cup_0","cup_1"]}
var bank:Dictionary={}
var memo:Dictionary={}
var epoch:Array=[]
var elapsed:=0.
var next_query:=0.
var next_sound:=0.
var active:Dictionary={}
var events:Array=[]
var counts:Dictionary={}
var skipped_busy:=0
var inspected:=0
static func weight(zoom:float,distance:float)->float:
	return (1.-smoothstep(FULL_ZOOM,OUT_ZOOM,zoom))*(1.-smoothstep(1.5,RADIUS,distance))
static func update(demo,delta:float)->void:
	if not demo.has_meta("close_life_audio"):demo.set_meta("close_life_audio",load("res://scripts/audio/city_creation_close_life_audio.gd").new())
	demo.get_meta("close_life_audio").tick(demo,delta)
func _owned()->bool:
	return not active.is_empty() and is_instance_valid(active.player) and active.player.stream==active.stream and int(active.player.get_meta("creation_voice_serial",0))==int(active.serial)
func stop()->void:
	if _owned():active.player.stop()
	active.clear();memo.clear()
func _weight(demo,node)->float:
	if not is_instance_valid(node) or not node.is_visible_in_tree() or not node.get_child(0).is_visible_in_tree() or not demo.camera.is_position_in_frustum(node.global_position+Vector3.UP*.3):return 0.
	return weight(demo.zoom,Vector2(node.global_position.x-demo.focus.x,node.global_position.z-demo.focus.z).length())
func _bank(kind:String,tick:int)->AudioStreamWAV:
	var id:String=BANK[kind][posmod(tick,BANK[kind].size())]
	if not bank.has(id):
		var path:="res://资源/生活声/"+id+".wav"
		bank[id]=AudioStreamWAV.load_from_file(path) if FileAccess.file_exists(path) else load(path)
		bank[id].set_meta("life_foley_kind",kind)
	return bank[id]
func _allowed(demo)->bool:
	return not demo.music.muted and not demo.music._loading and not demo.music.concert_active and not demo.music.phonograph.active and not demo._edit_pending and not demo.gallery.busy and demo.gallery.preview_id.is_empty() and demo.life.is_processing() and not demo.life.budget_sync_pending()
func _tail(demo,delta:float,allowed:bool)->void:
	if not _owned() or not active.player.playing:active.clear();return
	if demo.music.muted:stop();return
	var strength:=_weight(demo,active.node) if allowed else 0.
	if is_instance_valid(active.node) and active.node.get_meta("life_foley",{}).get("kind","")!=active.kind:strength=0.
	active.gain=lerpf(float(active.gain),strength,1.-exp(-maxf(0.,delta)*20.))
	active.player.volume_linear=db_to_linear(float(active.get("base_db",GAIN_DB)))*float(active.gain)
	if float(active.gain)<.001:active.player.stop();active.clear()
func tick(demo,delta:float)->void:
	elapsed+=maxf(0.,delta)
	var musical:bool=demo.state.CreationPolicy.is_free(demo.state)
	var key:Array=[demo.state.get_instance_id(),demo.life.get_instance_id(),musical]
	if key!=epoch:stop();epoch=key
	var allowed:=_allowed(demo);_tail(demo,delta,allowed)
	if not allowed or demo.zoom>=OUT_ZOOM:
		memo.clear();return
	if elapsed<next_query:return
	next_query=elapsed+.06
	var candidates:Array=[];inspected=0
	for rows:Array in [demo.life.residents,demo.life.bakery.workers,demo.life.workshop.workers]:
		for actor:Dictionary in rows:
			var node:Node3D=actor.node;var strength:=_weight(demo,node);inspected+=1
			if strength<=.01:continue
			candidates.append({"node":node,"gain":strength,"id":str(actor.home_id)})
	candidates.sort_custom(func(a,b):return a.gain>b.gain)
	if candidates.size()>6:candidates.resize(6)
	var fresh:Dictionary={};var contacts:Array=[]
	for actor:Dictionary in candidates:
		var node:Node3D=actor.node;var id:=node.get_instance_id();var contact:Dictionary=node.get_meta("life_foley",{})
		if contact.get("kind","").is_empty() or absf(demo.life.time-float(contact.get("time",-1.)))>.15:continue
		var token:Array=[contact.kind,contact.tick];fresh[id]=token
		if not memo.has(id) or memo[id][0]!=contact.kind or memo[id]==token:continue
		actor.kind=contact.kind;actor.tick=contact.tick;actor.rank=actor.gain*(3. if contact.kind=="cup" else 2. if contact.kind in ["bread","wood"] else 1.)
		contacts.append(actor)
	memo=fresh
	if contacts.is_empty() or elapsed<next_sound:return
	contacts.sort_custom(func(a,b):return a.rank>b.rank)
	if _owned() and active.player.playing:skipped_busy+=1;return
	if musical:
		var event:Dictionary=contacts[0]
		if demo.music.attention.enqueue_life_sparkle({"world_kind":"life_sparkle","life_actor":weakref(event.node),"life_demo":weakref(demo),"life_helper":weakref(self),"epoch":epoch.duplicate(),"source_id":event.id,"kind":event.kind,"tick":event.tick},demo.music._playback_clock()):next_sound=elapsed+.30
		return
	# At least one short remains free for an edit, pluck or musical response.
	var free:Array=demo.music._effects.filter(func(player):return not player.playing)
	if free.size()<2:skipped_busy+=1;return
	var event:Dictionary=contacts[0];var player:AudioStreamPlayer=free[-1];var stream:=_bank(event.kind,event.tick)
	var at:=Vector2(event.node.global_position.x,event.node.global_position.z)
	demo.music.spatial.place_effect(player,at,false)
	var serial:=int(player.get_meta("creation_voice_serial",0))+1;player.set_meta("creation_voice_serial",serial)
	player.stream=stream;player.volume_db=GAIN_DB+linear_to_db(float(event.gain));player.play()
	active={"player":player,"stream":stream,"serial":serial,"node":event.node,"kind":event.kind,"gain":event.gain}
	counts[event.kind]=int(counts.get(event.kind,0))+1;next_sound=elapsed+.30
	events.append({"kind":event.kind,"activity":event.node.get_meta("visible_activity",""),"source_id":event.id,"actor_id":event.node.get_instance_id(),"life_time":demo.life.time,"contact_tick":event.tick,"at":at,"zoom":demo.zoom,"gain":event.gain,"volume_db":player.volume_db,"serial":serial,"player_id":player.get_instance_id(),"stream_id":stream.get_instance_id()})
	if events.size()>48:events.pop_front()
func report()->Dictionary:
	return {"counts":counts.duplicate(),"active":_owned() and active.player.playing,"kind":active.get("kind",""),"events":events.duplicate(true),"skipped_busy":skipped_busy,"memo_size":memo.size(),"inspected":inspected,"max_foley_voices":1,"zoom_full":FULL_ZOOM,"zoom_out":OUT_ZOOM,"radius":RADIUS,"authored_writes":0}

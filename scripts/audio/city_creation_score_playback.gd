extends Node
## Prepared scores become audible as one four-role change on a real PCM bar.
const Transition=preload("res://scripts/audio/city_creation_stream_transition.gd")
const Cues=preload("res://scripts/audio/city_creation_score_cue_bank.gd")
var worker:Thread
var job:Dictionary={}
var scheduled:Dictionary={}
var stems:Dictionary={}
static func ensure(owner:Node)->Node:
	var node:=owner.get_node_or_null("ScorePlayback")
	if node==null:node=load("res://scripts/audio/city_creation_score_playback.gd").new();node.name="ScorePlayback";owner.add_child(node)
	return node
static func owns(owner:Node,key:String)->bool:
	var node:=owner.get_node_or_null("ScorePlayback")
	return node!=null and node.stems.has(key) and (owner.has_meta("authored_score_ready") or owner.has_meta("authored_score"))
static func at(owner:Node,clock:float)->Dictionary:
	if owner.phonograph.active or owner.concert_active:return {}
	var node:=owner.get_node_or_null("ScorePlayback");var data:Dictionary=owner.get_meta("authored_score",{})
	if node!=null and not node.scheduled.is_empty() and clock>=float(node.scheduled.boundary):data=node.scheduled.data
	if owner._pluck_city==null or data.get("city",0)!=owner._pluck_city.get_instance_id() or data.get("revision",-1)!=owner._pluck_city.revision:return {}
	return data
static func position_at(owner:Node,clock:float)->float:
	var stem:=str(owner.get_meta("authored_score_stem",""))
	if not owner._players.has(stem):return fposmod(clock,24.)
	var player:AudioStreamPlayer=owner._players[stem]
	var bias:float=owner.get_meta("cue_clock_bias",0.)
	var reference:float=preload("res://scripts/audio/city_creation_cue_grid.gd").transport_clock(owner)
	var local:=fposmod(player.get_playback_position()-bias,24.)
	return fposmod(local+clock-reference,24.)
static func bar_at(owner:Node,clock:float)->int:
	# QOA and PCM resamplers can differ by two priming frames at the bar edge.
	return posmod(floori((position_at(owner,clock)+2./22050.+.0000001)/3.),8)
static func cursor(owner:Node)->Dictionary:
	var clock:float=preload("res://scripts/audio/city_creation_cue_grid.gd").transport_clock(owner)
	var data:=at(owner,clock)
	if data.is_empty():return {}
	return {"signature":data.signature,"master_signature":data.get("master_signature",""),"section":data.get("section",-1),"clock":clock,"position":position_at(owner,clock),"bar":bar_at(owner,clock),"global_bar":int(data.get("section",0))*8+bar_at(owner,clock),"mode":int(data.document.harmony_mode),"harmony":data.get("harmony",[])}
static func resolve_cue(owner:Node,wave:AudioStreamWAV,clock:float)->AudioStreamWAV:
	var data:=at(owner,clock)
	if data.is_empty():return wave
	var key:=str(wave.get_meta("master_cue_key",owner.get_meta("score_cue_keys",{}).get(wave.get_instance_id(),"")))
	key=Cues.key_at(key,int(data.document.harmony_mode),bar_at(owner,clock))
	return data.get("short_cues",{}).get(key,wave)
static func update(owner:Node)->void:
	var node:=owner.get_node_or_null("ScorePlayback")
	if node!=null:node.advance(owner)
func advance(owner:Node)->void:
	if owner.phonograph.active:return
	if owner.concert_active and (owner.has_meta("authored_score") or owner.has_meta("authored_score_ready")):
		preload("res://scripts/audio/city_creation_authored_score.gd").discard(owner,owner.get_meta("authored_score",{}));return
	for field:String in ["authored_score_ready","authored_score"]:
		var data:Dictionary=owner.get_meta(field,{})
		if not data.is_empty() and (owner._pluck_city==null or data.get("city",0)!=owner._pluck_city.get_instance_id() or data.get("revision",-1)!=owner._pluck_city.revision):
			preload("res://scripts/audio/city_creation_authored_score.gd").discard(owner,data);return
	var clock:float=preload("res://scripts/audio/city_creation_cue_grid.gd").transport_clock(owner)
	if not scheduled.is_empty():
		if at(owner,float(scheduled.boundary)).is_empty():scheduled.clear();stems.clear();return
		if clock>=float(scheduled.boundary) and owner.get_meta("authored_score",{}).get("signature","")!=scheduled.data.signature:
			Cues.retire(owner);Cues.install(owner,scheduled.data.get("short_cues",{}))
			owner.set_meta("authored_score",scheduled.data);owner._biome_mode=int(scheduled.data.document.harmony_mode)
			for key:String in stems:owner._variation_active[key]=stems[key];owner._variation_pending.erase(key)
			owner.remove_meta("chamber_role_key")
		if clock<float(scheduled.boundary)+Transition.FADE:return
		for key:String in stems:
			var player:AudioStreamPlayer=owner._players[key]
			if player.stream==scheduled.waves[key]:player.stream=scheduled.targets[key];player.play(fposmod(clock,24.))
		var previous:Dictionary=scheduled.get("previous",{})
		if not previous.is_empty() and previous.signature!=scheduled.data.signature:preload("res://scripts/audio/city_creation_authored_score.gd").release(owner,previous)
		if owner.get_meta("authored_score_ready",{}).get("signature","")==scheduled.data.signature:owner.remove_meta("authored_score_ready")
		scheduled.clear()
	if worker!=null:
		if worker.is_alive():return
		var waves:Dictionary=worker.wait_to_finish();worker=null
		var ready:Dictionary=owner.get_meta("authored_score_ready",{})
		var valid:bool=ready.get("signature","")==job.data.signature and owner._pluck_city!=null and ready.get("city",0)==owner._pluck_city.get_instance_id() and ready.get("revision",-1)==owner._pluck_city.revision
		for key:String in job.old:valid=valid and owner._players[key].stream==job.old[key]
		if valid and clock<float(job.boundary)-.25:
			stems=job.stems;scheduled={"data":ready,"boundary":job.boundary,"waves":waves,"targets":job.targets,"previous":owner.get_meta("authored_score",{})}
			for key:String in stems:
				var player:AudioStreamPlayer=owner._players[key];player.stream=waves[key];player.play(clock-float(job.cycle))
				owner._variation_pending[key]={"id":stems[key],"requested_clock":clock}
				player.set_meta("last_smooth_swap",{"clock":clock,"boundary":job.boundary,"id":stems[key],"method":"score_cohort","fade_seconds":Transition.FADE})
		job={}
		if not scheduled.is_empty():return
	var ready:Dictionary=owner.get_meta("authored_score_ready",{})
	if ready.is_empty():return
	var roles:Dictionary=owner.get_meta("chamber_roles",{}).get("roles",{});var chosen:Dictionary={}
	for key:String in roles:
		if roles[key].get("id","").begins_with("study1/"+str(ready.signature)+"/"):chosen[key]=roles[key].id
	if chosen.size()!=4:return
	var transition:=owner.get_node_or_null("StreamTransition")
	for key:String in chosen:
		if transition!=null and transition.moving.has(key):return
	var old:Dictionary={};var targets:Dictionary={}
	for key:String in chosen:
		old[key]=owner._players[key].stream;targets[key]=owner._harmony_streams[chosen[key]]
		owner._variation_pending[key]={"id":chosen[key],"requested_clock":clock}
		if transition!=null:transition.pending.erase(key)
	stems=chosen
	job={"data":ready,"stems":chosen,"old":old,"targets":targets,"boundary":(floorf((clock+2.)/3.)+1.)*3.,"cycle":floorf(clock/24.)*24.}
	var copied:=job.duplicate();worker=Thread.new();worker.start(func():return render(copied))
static func render(data:Dictionary)->Dictionary:
	var renderer:=Transition.new();var result:Dictionary={}
	for key:String in data.stems:result[key]=renderer.render({"old":data.old[key],"target":data.targets[key],"boundary":data.boundary-data.cycle})
	renderer.free();return result
func cancel(restore:bool=false)->void:
	var owner:=get_parent()
	for key:String in stems:
		owner._variation_pending.erase(key)
		if restore and owner._original_streams.has(key):
			var player:AudioStreamPlayer=owner._players[key];var position:=fposmod(player.get_playback_position(),24.)
			player.stream=owner._original_streams[key];player.play(position);owner._variation_active[key]="original"
	scheduled.clear();stems.clear()
func _exit_tree()->void:
	if worker!=null:worker.wait_to_finish();worker=null

extends Node
## Worker-built two-cycle WAV: old until the next bar, short crossfade, target.
## A single pooled player owns it; after the fade it rejoins the stable bank.
const RATE:=22050
const FRAMES:=529200
const FADE:=.15
var worker:Thread
var pending:Dictionary={}
var job:Dictionary={}
var moving:Dictionary={}
var decoded:Dictionary={}

static func ensure(owner:Node)->Node:
	var node:=owner.get_node_or_null("StreamTransition")
	if node==null:node=load("res://scripts/audio/city_creation_stream_transition.gd").new();node.name="StreamTransition";owner.add_child(node)
	return node

static func request(owner:Node,key:String,id:String,target:AudioStream,clock:float)->bool:
	if target==null:return false
	var node=ensure(owner);var player:AudioStreamPlayer=owner._players[key]
	if node.moving.has(key):return false
	if not player.playing or player.volume_db<=-45.:
		player.stream=target;player.play(fposmod(clock,24.));owner._variation_active[key]=id
		player.set_meta("last_smooth_swap",{"clock":clock,"db":player.volume_db,"id":id,"method":"inaudible"});return true
	if not node.pending.has(key) or node.pending[key].id!=id:node.pending[key]={"key":key,"id":id,"old":player.stream,"target":target}
	return false

func decode(wave:AudioStream)->PackedFloat32Array:
	var id:=wave.get_instance_id()
	if decoded.has(id):return decoded[id]
	var out:=PackedFloat32Array();out.resize(FRAMES)
	if wave is AudioStreamWAV and wave.format==AudioStreamWAV.FORMAT_16_BITS:
		var bytes:PackedByteArray=wave.data
		for i in range(FRAMES):out[i]=bytes.decode_s16(i*2)/32768.
	else:
		var playback:=wave.instantiate_playback();playback.start(0.)
		# Native cubic resampling primes two history frames even at1:1 rate.
		var samples:=playback.mix_audio(float(AudioServer.get_mix_rate())/RATE,FRAMES+2)
		for i in range(FRAMES):out[i]=samples[i+2].x
		playback.stop()
	# A small cache avoids retaining the complete decoded catalogue.
	if decoded.size()>=8:decoded.clear()
	decoded[id]=out;return out

func render(data:Dictionary)->AudioStreamWAV:
	var old:=decode(data.old);var target:=decode(data.target)
	var bytes:=PackedByteArray();bytes.resize(FRAMES*4)
	var begin:=roundi(data.boundary*RATE);var count:=roundi(FADE*RATE)
	for i in range(FRAMES*2):
		var weight:=smoothstep(0.,1.,float(i-begin)/count)
		var value:=lerpf(old[i%FRAMES],target[i%FRAMES],weight)
		bytes.encode_s16(i*2,clampi(roundi(value*32768.),-32768,32767))
	var result:=AudioStreamWAV.new();result.mix_rate=RATE;result.format=AudioStreamWAV.FORMAT_16_BITS;result.data=bytes
	result.loop_mode=AudioStreamWAV.LOOP_FORWARD;result.loop_begin=FRAMES;result.loop_end=FRAMES*2
	result.set_meta("transition",true);return result

func _process(_delta:float)->void:
	var owner:=get_parent()
	if owner.phonograph.active:return
	var clock:float=owner._playback_clock()
	for key:String in moving.keys():
		var row:Dictionary=moving[key];var player:AudioStreamPlayer=owner._players[key]
		if clock<row.until:continue
		if player.stream==row.stream:
			var gain:=player.volume_db;player.stream=row.target;player.play(fposmod(clock,24.));player.volume_db=gain
			player.set_meta("transition_complete",{"clock":clock,"id":row.id})
		moving.erase(key)
	if worker!=null:
		if worker.is_alive():return
		var wave:AudioStreamWAV=worker.wait_to_finish();worker=null
		var player:AudioStreamPlayer=owner._players[job.key]
		if clock<job.deadline and player.stream==job.old and owner._variation_pending.get(job.key,{}).get("id","")==job.id:
			var gain:=player.volume_db;player.stream=wave;player.play(fposmod(clock,24.));player.volume_db=gain
			owner._variation_active[job.key]=job.id;owner._variation_pending.erase(job.key)
			moving[job.key]={"stream":wave,"target":job.target,"id":job.id,"until":job.deadline+FADE}
			player.set_meta("last_smooth_swap",{"clock":clock,"boundary":job.deadline,"db":gain,"id":job.id,"method":"premixed","fade_seconds":FADE})
		else:pending[job.key]={"key":job.key,"id":job.id,"old":player.stream,"target":job.target}
		job={}
	if pending.is_empty():return
	var key:String=str(pending.keys()[0]);job=pending[key];pending.erase(key)
	if moving.has(key) or owner._variation_active.get(key)==job.id:job={};return
	if owner._variation_pending.get(key,{}).get("id","")!=job.id:job={};return
	clock=owner._playback_clock();job.deadline=(floorf((clock+1.)/3.)+1.)*3.;job.boundary=job.deadline-floorf(clock/24.)*24.
	worker=Thread.new();var data:=job.duplicate();worker.start(func():return render(data))

func _exit_tree()->void:
	if worker!=null:worker.wait_to_finish();worker=null
	pending.clear();moving.clear();decoded.clear()

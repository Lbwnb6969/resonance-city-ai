extends SceneTree
## Pending engine execution: compare copied spans with the prior scalar algorithm.
const PCM=preload("res://scripts/audio/city_creation_pcm_crossfade.gd")
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func bytes(frames:int,seed:int)->PackedByteArray:
	var result:=PackedByteArray();result.resize(frames*2)
	for i in range(frames):result.encode_s16(i*2,posmod(i*7919+seed*104729,65536)-32768)
	return result
func scalar(old:PackedByteArray,target:PackedByteArray,intro:int,offset:int,origin:int,fade:int)->PackedByteArray:
	var result:=PackedByteArray();var frames:=target.size()/2;result.resize((intro+frames)*2)
	for i in range(intro+frames):
		var weight:=smoothstep(0.,1.,float(i-intro)/fade)
		var a:=old.decode_s16(posmod(i+offset,old.size()/2)*2)/32768.
		var b:=target.decode_s16(posmod(i-intro+origin,frames)*2)/32768.
		result.encode_s16(i*2,clampi(roundi(lerpf(a,b,weight)*32768.),-32768,32767))
	return result
func run()->void:
	if not OS.get_cmdline_user_args().has("--isolated-session"):push_error("isolated session required");quit(1);return
	for target_frames:int in [1,7,31,257]:
		var old:=bytes(17,3);var target:=bytes(target_frames,5);var old_copy:=old.duplicate();var target_copy:=target.duplicate()
		for intro:int in [0,1,19,100]:
			for offset:int in [-101,-1,0,19]:
				for origin:int in [-13,0,43]:
					for fade:int in [1,8,32]:check(PCM.render(old,target,intro,offset,origin,fade)==scalar(old,target,intro,offset,origin,fade),"byte equivalent across wrap/fade cases")
		check(old==old_copy and target==target_copy,"inputs immutable")
	var old:=AudioStreamWAV.new();old.mix_rate=22050;old.format=AudioStreamWAV.FORMAT_16_BITS;old.data=bytes(529200,11)
	var target:=AudioStreamWAV.new();target.mix_rate=22050;target.format=AudioStreamWAV.FORMAT_16_BITS;target.data=bytes(3175200,13)
	var job:={"old":{"lead":old},"targets":{"lead":target},"boundary":30.,"cycle":24.,"start_local":1.,"old_positions":{"lead":22.},"data":{"duration":144.}}
	var wave:=Whole.transition(job,"lead")
	check(wave.data==scalar(old.data,target.data,132300,463050,0,3308),"production full transition matches prior scalar PCM")
	check(wave.loop_begin==132300 and wave.loop_end==3307500 and wave.get_meta("master_offset")==6. and wave.get_meta("previous_master_offset")==-21.,"production loop and offsets preserved")
	print("PCM_CROSSFADE ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

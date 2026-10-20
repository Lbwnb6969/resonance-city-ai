extends SceneTree
## A loopback debugger receives AudioServer's native servers-profiler data.
const OUT="res://验证记录/音频原生调度_2026-10-19"
var phase:=""
var durations:Dictionary={}
var frames:Array[Dictionary]=[]
func _profile(data:Array)->void:
	if phase.is_empty():return
	var index:=7
	for server in range(int(data[6])):
		var name:=str(data[index]);var count:=int(data[index+1]);index+=2
		if name=="audio_thread":
			var total:=0.;var stages:Dictionary={}
			for i in range(index,index+count,2):
				var key:=str(data[i]);var value:=float(data[i+1])*1000.
				total+=value;stages[key]=float(stages.get(key,0.))+value
			frames.append({"phase":phase,"frame":data[0],"total_ms":total,"stages":stages})
		index+=count
func _metrics(values:Array[float])->Dictionary:
	if values.is_empty():return {"count":0}
	values.sort();var sum:=0.
	for value:float in values:sum+=value
	return {"count":values.size(),"sum_ms":sum,"mean_ms":sum/values.size(),"p95_ms":values[int(values.size()*.95)],"max_ms":values[-1]}
func _initialize()->void:_run.call_deferred()
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var server:=TCPServer.new();var port:=6037
	while port<6050 and server.listen(port,"127.0.0.1")!=OK:port+=1
	if not server.is_listening():push_error("No loopback debugger port available");quit(1);return
	var driver:="Dummy"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--profile-driver="):driver=arg.trim_prefix("--profile-driver=")
	var args:=PackedStringArray(["--path",ProjectSettings.globalize_path("res://"),"--rendering-method","gl_compatibility","--audio-driver",driver,"--remote-debug","tcp://127.0.0.1:%d"%port,"--script","res://tools/check_creation_audio_profile_live.gd","--","--isolated-session","--profile-driver="+driver])
	var pid:=OS.create_process(OS.get_executable_path(),args,false)
	if pid<0:push_error("Cannot start the isolated audio profiling child");server.stop();quit(1);return
	var peer:StreamPeerTCP;var packet:=PacketPeerStream.new();var errors:Array=[];var done:=false;var warnings:=0
	var timeout:=Time.get_ticks_msec()+90000
	while Time.get_ticks_msec()<timeout:
		await process_frame
		if peer==null and server.is_connection_available():peer=server.take_connection();packet.stream_peer=peer
		if peer!=null:
			peer.poll()
			while packet.get_available_packet_count()>0:
				var value:Variant=packet.get_var()
				if value is Array and value.size()==3:
					if value[0]=="creation_audio:done":done=true
					elif value[0]=="creation_audio:phase":phase=str(value[2][0])
					elif value[0]=="creation_audio:end_phase":durations[str(value[2][0])]=float(value[2][1]);phase=""
					elif value[0]=="servers:profile_frame":_profile(value[2])
					elif value[0]=="error":
						if value[2].size()>9 and value[2][9]==true:warnings+=1
						else:errors.append(value[2])
		if not OS.is_process_running(pid):break
	if OS.is_process_running(pid):OS.kill(pid);errors.append("Isolated audio child exceeded ninety seconds")
	if peer!=null:peer.disconnect_from_host()
	server.stop()
	var path:=OUT+"/"+driver+"_scene.json"
	var report:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(path)) if FileAccess.file_exists(path) else {}
	var stages:Dictionary={};var native_checks:Array=[]
	for name:String in ["daily","four_filtered_shorts"]:
		var values:Array[float]=[];var active:Array[float]=[]
		for row:Dictionary in frames:
			if row.phase!=name:continue
			values.append(row.total_ms)
			if row.total_ms>0.:active.append(row.total_ms)
			for key:String in row.stages:stages[key]=float(stages.get(key,0.))+float(row.stages[key])
		var measured:=_metrics(values);measured.nonzero_mix_frames=_metrics(active)
		var coverage:bool=values.size()>300 and active.size()>50 and durations.has(name)
		measured.elapsed_seconds=durations.get(name,0.)
		measured.cpu_ms_per_second=float(measured.get("sum_ms",0.))/maxf(.001,measured.elapsed_seconds)
		report.facts[name]=measured
		native_checks.append({"label":"actual native buffers sampled: "+name,"ok":coverage})
	native_checks.append({"label":"native mix includes server, driver and six buses' effects","ok":stages.has("audio_server") and stages.has("audio_driver") and stages.size()>=8})
	report.facts.stages_total_ms=stages;report.facts.parser_warnings=warnings;report.facts.performance_policy="reference_only"
	report.checks.append_array(native_checks)
	var ok:bool=done and errors.is_empty() and report.get("ok",false) and int(report.facts.get("child_pid",-1))==pid
	for item:Dictionary in native_checks:ok=ok and item.ok
	report.ok=ok
	FileAccess.open(OUT+"/"+driver+".json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true))
	FileAccess.open(OUT+"/"+driver+"_frames.json",FileAccess.WRITE).store_string(JSON.stringify(frames))
	print("NATIVE_AUDIO_PROFILE ",JSON.stringify({"ok":ok,"driver":driver,"errors":errors,"child_completed":done,"report":report}))
	quit(0 if ok else 1)

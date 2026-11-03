extends RefCounted
## Explicit audition container; never interpreted as an old score or PCM bank.
static func wave(row:Dictionary,frames:int,rate:int)->AudioStreamWAV:
	var path:=str(row.get("path",""))
	if not FileAccess.file_exists(path) or FileAccess.get_sha256(path)!=row.get("sha256",""):return null
	var stream:=AudioStreamWAV.load_from_file(path)
	if stream==null or stream.format!=AudioStreamWAV.FORMAT_16_BITS or not stream.stereo or stream.mix_rate!=rate or stream.data.size()!=frames*4:return null
	stream.loop_mode=AudioStreamWAV.LOOP_DISABLED
	return stream

static func read(path:String)->Dictionary:
	var data:Variant=JSON.parse_string(FileAccess.get_file_as_string(path)) if FileAccess.file_exists(path) else null
	if not data is Dictionary or data.get("schema")!="lyria_spatial_preview_v1":return {"ok":false,"reason":"invalid_manifest"}
	var frames:=int(data.get("frames",0));var rate:=int(data.get("sample_rate",0))
	if frames<=0 or rate!=44100 or int(data.get("channels",0))!=2 or data.get("loop_enabled",true):return {"ok":false,"reason":"invalid_timeline"}
	var fallback:=wave(data.get("full_mix",{}),frames,rate)
	if fallback==null:return {"ok":false,"reason":"invalid_master"}
	var streams:Array=[];var rows:Array=data.get("stems",[])
	if rows.size()==2 and rows[0].get("id")=="core" and rows[1].get("id")=="color" and data.get("color_gain_range")==[.4,1.]:
		for row:Dictionary in rows:
			var stream:=wave(row,frames,rate)
			if stream==null:streams.clear();break
			streams.append(stream)
	var degraded:=streams.size()!=2
	if degraded:streams=[fallback]
	var synced:=AudioStreamSynchronized.new();synced.stream_count=streams.size()
	for index:int in streams.size():synced.set_sync_stream(index,streams[index])
	return {"ok":true,"stream":synced,"manifest":data,"fallback":degraded,"frames":frames,"rate":rate,"signature":FileAccess.get_sha256(path)}

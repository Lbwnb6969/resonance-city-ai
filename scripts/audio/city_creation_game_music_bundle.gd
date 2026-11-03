extends RefCounted
## Explicit full-length stereo container; never uses the old 24-second grid.
const Wave=preload("res://scripts/audio/city_creation_lyria_bundle.gd")
const Harmony=preload("res://scripts/audio/city_creation_game_music_harmony.gd")

static func read(path:String)->Dictionary:
	var data:Variant=JSON.parse_string(FileAccess.get_file_as_string(path)) if FileAccess.file_exists(path) else null
	if not data is Dictionary or data.get("schema")!="city_adaptive_music_v1":return {"ok":false,"reason":"invalid_manifest"}
	var frames:=int(data.get("frames",0));var rate:=int(data.get("sample_rate",0))
	if frames<=0 or rate!=44100 or data.get("channels")!=2 or data.get("operations",{}).get("loop_enabled",true):return {"ok":false,"reason":"invalid_timeline"}
	var common:=float(data.get("common_gain",0.))
	if not is_finite(common) or common<=0. or common>1.:return {"ok":false,"reason":"invalid_gain"}
	var fallback:=Wave.wave(data.get("full_mix",{}),frames,rate)
	if fallback==null:return {"ok":false,"reason":"invalid_master"}
	var rows:Array=data.get("layers",[]);var streams:Array=[];var ids:Array=[]
	if rows.size()>=1 and rows.size()<=4:
		for row:Dictionary in rows:
			var id:=str(row.get("id",""));var low:=float(row.get("min_gain",0.))
			if id not in ["core","body","motion","detail"] or ids.has(id) or row.get("max_gain")!=1. or low!=(1. if id=="core" else .35):streams.clear();break
			var stream:=Wave.wave(row,frames,rate)
			if stream==null:streams.clear();break
			streams.append(stream);ids.append(id)
	var degraded:bool=streams.size()!=rows.size() or ids.is_empty() or ids[0]!="core"
	if degraded:streams=[fallback];ids=["core"]
	var synced:=AudioStreamSynchronized.new();synced.stream_count=streams.size()
	for i:int in streams.size():
		synced.set_sync_stream(i,streams[i]);synced.set_sync_stream_volume(i,linear_to_db(common) if degraded else 0.)
	var timeline:Dictionary={};var marker:Variant=data.get("timeline",{})
	if marker is Dictionary and FileAccess.file_exists(str(marker.get("path",""))) and FileAccess.get_sha256(str(marker.path))==marker.get("sha256",""):
		var parsed:Variant=JSON.parse_string(FileAccess.get_file_as_string(marker.path))
		if parsed is Dictionary and Harmony.valid(parsed,data):timeline=parsed
	return {"ok":true,"stream":synced,"ids":ids,"fallback":degraded,"manifest":data,"signature":FileAccess.get_sha256(path),"timeline":timeline}

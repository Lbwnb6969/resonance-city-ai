extends RefCounted
## Append-only receipts live beside the collection, never inside a city undo.
const Rewards=preload("res://scripts/world/city_creation_archive_rewards.gd")
const CHORDS:=["pastoral_triad","highland_fifth","renaissance_fugue","clockwork_waltz","chrono_counterpoint"]
const LANDMARKS:=["bell_keep","watermill","music_academy","botanical_palace","clockwork_depot","floating_amphitheater"]
var directory:=""
var enabled:=false
var chords:Array[String]=[]
var landmarks:Array[String]=[]
var performances:Array[String]=[]
var awards:Array[String]=[]
var error:=""

func load_records()->void:
	chords.clear();landmarks.clear();performances.clear();awards.clear();error=""
	if not enabled or not DirAccess.dir_exists_absolute(directory):return
	var folder:=DirAccess.open(directory)
	if folder==null:error="无法读取声学图鉴";return
	for file:String in folder.get_files():
		if not file.begins_with("receipt_") or not file.ends_with(".json"):continue
		var envelope:Variant=JSON.parse_string(FileAccess.get_file_as_string(directory.path_join(file)))
		if not envelope is Dictionary or not envelope.get("payload") is String or envelope.get("sha256")!=str(envelope.payload).sha256_text():error="有一页图鉴校验未通过，原文件保留";continue
		var row:Variant=JSON.parse_string(envelope.payload)
		if not _valid(row):error="有一页图鉴内容无效，原文件保留";continue
		_merge(row)

func _valid(row:Variant)->bool:
	if not row is Dictionary or row.get("schema")!=1:return false
	for pair:Array in [["chords",CHORDS],["landmarks",LANDMARKS],["performances",LANDMARKS],["awards",Rewards.IDS]]:
		var values:Variant=row.get(pair[0]);var seen:Array=[]
		if not values is Array or values.size()>pair[1].size():return false
		for id:Variant in values:
			if id not in pair[1] or id in seen:return false
			seen.append(id)
	return true

func _merge(row:Dictionary)->void:
	for key:String in ["chords","landmarks","performances","awards"]:
		var destination:Array=get(key)
		for id:String in row[key]:
			if id not in destination:destination.append(id)

func observe(city:RefCounted,completed:Dictionary={})->Dictionary:
	if not enabled:return {"ok":true,"changed":false,"earned":[]}
	var row:Dictionary={"schema":1,"chords":city.synergy_buffs().active_chords.duplicate(),"landmarks":[],"performances":[],"awards":[]}
	for house:Dictionary in city.houses:
		var id:=str(house.get("signature",""))
		if id in LANDMARKS and id not in row.landmarks:row.landmarks.append(id)
	for id:String in city.archive_unlocks:
		if id not in awards and id not in row.awards:row.awards.append(id)
	var all_chords:Array=chords.duplicate()
	for id:String in row.chords:
		if id not in all_chords:all_chords.append(id)
	if all_chords.size()==CHORDS.size() and "five_chords" not in awards and "five_chords" not in row.awards:row.awards.append("five_chords")
	if not completed.is_empty() and completed.get("signature","") in LANDMARKS and completed.get("duration",0.)>=24. and completed.get("concerts",0)==int(city.life_progress.concerts):
		row.performances.append(str(completed.signature))
		if completed.get("houses",0)==city.houses.size() and city.houses.size()>=100 and completed.get("eras",[]).size()>=4 and "century_symphony" not in awards:row.awards.append("century_symphony")
	var changed:=false
	for key:String in ["chords","landmarks","performances","awards"]:
		for id:String in row[key]:
			if id not in get(key):changed=true
	if not changed:return {"ok":true,"changed":false,"earned":[]}
	row["created_at"]=Time.get_unix_time_from_system();row["city_hash"]=JSON.stringify(city.snapshot()).sha256_text()
	if DirAccess.make_dir_recursive_absolute(directory)!=OK:return {"ok":false,"message":"无法保存声学图鉴"}
	var name:="receipt_%d_%d_%s.json"%[int(Time.get_unix_time_from_system()*1000.),Time.get_ticks_usec(),str(get_instance_id())]
	var path:=directory.path_join(name)
	var encoded:=JSON.stringify(row,"",true,true)
	var file:=FileAccess.open(path+".tmp",FileAccess.WRITE)
	if file==null:return {"ok":false,"message":"无法写入声学图鉴"}
	file.store_string(JSON.stringify({"payload":encoded,"sha256":encoded.sha256_text()},"\t"));file.flush();file.close()
	var written:Variant=JSON.parse_string(FileAccess.get_file_as_string(path+".tmp"))
	if not written is Dictionary or written.get("payload")!=encoded or written.get("sha256")!=encoded.sha256_text() or DirAccess.rename_absolute(path+".tmp",path)!=OK:return {"ok":false,"message":"声学图鉴尚未发布，原记录保持"}
	_merge(row)
	return {"ok":true,"changed":true,"earned":row.awards.duplicate()}

func summary()->Dictionary:
	return {"chords":chords.duplicate(),"landmarks":landmarks.duplicate(),"performances":performances.duplicate(),"awards":awards.duplicate(),"error":error}

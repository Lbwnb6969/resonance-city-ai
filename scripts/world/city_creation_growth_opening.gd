extends RefCounted
## Formal opening owns I/O. Raw snapshot validation and previews stay read-only.
const Transition=preload("res://scripts/world/city_creation_growth_transition.gd")
static func needed(city:RefCounted)->bool:
	return city.CreationPolicy.is_free(city) and not city.harmony_journey.has("growth_cutoff")
static func load_into(city:RefCounted,path:String)->Dictionary:
	var read:Dictionary=city.Serializer.read(city,path)
	if not read.ok:return read
	var candidate:RefCounted=city.get_script().new()
	var restored:Dictionary=candidate.restore(read.data)
	if not restored.ok:return restored
	var opening:=ensure(candidate,path.get_base_dir(),path)
	if not opening.ok:return opening
	var applied:Dictionary=city.restore(candidate.snapshot())
	if opening.get("migrated",false):city.dirty=true;city.life_progress_dirty=true
	applied.growth_opening=opening
	return applied
static func ensure(city:RefCounted,directory:String,original_path:String="")->Dictionary:
	if not needed(city):return {"ok":true,"migrated":false,"earned":0}
	if directory.is_empty() or FileAccess.file_exists(directory):return city._fail("成长截止保存目录不可用，原作品保持")
	var before:Dictionary=city.snapshot();var candidate:RefCounted=city.get_script().new()
	var valid:Dictionary=candidate.restore(before)
	if not valid.ok:return valid
	var encoded:=JSON.stringify(before,"\t",true,true);var source:=encoded.sha256_text()
	var cache_dir:=directory.path_join("成长截止");var path:=cache_dir.path_join(source+".json")
	if FileAccess.file_exists(path):
		var cached:=_read_cache(city,path,source)
		if not cached.ok:return cached
		city.restore(cached.world);city.dirty=true;city.life_progress_dirty=true
		return {"ok":true,"migrated":true,"cached":true,"earned":0,"path":path,"backup":cached.backup}
	var relative_folder:="废弃/成长截止".path_join(source).path_join(str(Time.get_ticks_usec()))
	var folder:=directory.path_join(relative_folder)
	if DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(folder))!=OK:return city._fail("无法建立成长截止备份，原作品保持")
	var backup:=folder.path_join("原城市.json");var written:=_write(backup,encoded)
	if not written.ok:return written
	var reread:Dictionary=city.Serializer.read(city,backup)
	if not reread.ok:return city._fail("成长截止备份未通过回读，原作品保持")
	if not original_path.is_empty() and FileAccess.file_exists(original_path):
		var original:=folder.path_join("原文件.json")
		if DirAccess.copy_absolute(ProjectSettings.globalize_path(original_path),ProjectSettings.globalize_path(original))!=OK or FileAccess.get_sha256(original_path)!=FileAccess.get_sha256(original):return city._fail("成长截止原文件备份失败，原作品保持")
	# Only derive the original street graph. Never start Life, production or quests.
	var network:RefCounted=load("res://scripts/world/city_creation_network.gd").new()
	network.state=candidate;network._build_graph();candidate.prepare_regional_echo(network)
	var settled:=Transition.settle(candidate,"migrated_free");candidate.revision+=1
	var world:=JSON.stringify(candidate.snapshot(),"\t",true,true)
	var envelope:={"version":1,"source_sha256":source,"world":world,"sha256":world.sha256_text(),"backup":relative_folder.path_join("原城市.json"),"earned":settled.earned}
	if DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(cache_dir))!=OK:return city._fail("无法保存成长截止副本，原作品保持")
	var staged:=path+".%d.tmp"%Time.get_ticks_usec();written=_write(staged,JSON.stringify(envelope,"\t",true,true))
	if not written.ok:return written
	var checked:=_read_cache(city,staged,source)
	if not checked.ok:return checked
	if FileAccess.file_exists(path) or DirAccess.rename_absolute(ProjectSettings.globalize_path(staged),ProjectSettings.globalize_path(path))!=OK:return city._fail("成长截止副本未发布，原作品保持")
	city.restore(checked.world);city.dirty=true;city.life_progress_dirty=true
	return {"ok":true,"migrated":true,"cached":false,"earned":settled.earned,"path":path,"backup":backup}
static func _read_cache(city:RefCounted,path:String,source:String)->Dictionary:
	var value:Variant=JSON.parse_string(FileAccess.get_file_as_string(path))
	if not value is Dictionary or value.size()!=6 or not city._is_integer(value.get("version")) or value.version!=1 or value.get("source_sha256")!=source or not value.get("world") is String or not value.get("backup") is String:return city._fail("成长截止副本来源无效，原作品保持")
	if value.get("sha256")!=value.world.sha256_text() or not city._is_integer(value.get("earned")) or value.earned<0:return city._fail("成长截止副本校验失败，原作品保持")
	var parts:PackedStringArray=value.backup.split("/")
	if parts.size()!=5 or parts[0]!="废弃" or parts[1]!="成长截止" or parts[2]!=source or not parts[3].is_valid_int() or parts[4]!="原城市.json":return city._fail("成长截止备份引用无效，原作品保持")
	var backup:=path.get_base_dir().get_base_dir().path_join(value.backup)
	var before:Dictionary=city.Serializer.read(city,backup)
	if not before.ok:return city._fail("成长截止原貌备份不可回读，原作品保持")
	var original:RefCounted=city.get_script().new();original.restore(before.data)
	if JSON.stringify(original.snapshot(),"\t",true,true).sha256_text()!=source:return city._fail("成长截止备份与来源不一致，原作品保持")
	var world:Variant=JSON.parse_string(value.world)
	if not world is Dictionary:return city._fail("成长截止城市无效，原作品保持")
	var candidate:RefCounted=city.get_script().new();var check:Dictionary=candidate.restore(world)
	if not check.ok:return check
	if candidate.harmony_journey.get("growth_cutoff",{}).get("source")!="migrated_free":return city._fail("成长截止副本缺少迁移记录，原作品保持")
	return {"ok":true,"world":candidate.snapshot(),"backup":backup}
static func _write(path:String,value:String)->Dictionary:
	if FileAccess.file_exists(path):return {"ok":false,"message":"成长备份已存在，原件保持"}
	var file:=FileAccess.open(path,FileAccess.WRITE)
	if file==null:return {"ok":false,"message":"无法写入成长截止副本，原作品保持"}
	file.store_string(value);file.flush();var error:=file.get_error();file.close()
	return {"ok":true} if error==OK and FileAccess.get_file_as_string(path)==value else {"ok":false,"message":"成长截止文件未完整写入，原作品保持"}

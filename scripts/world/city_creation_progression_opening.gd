extends RefCounted
## Explicit first epoch transaction. Normal loads and previews never create one.
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
static func begin(city:RefCounted,path:String)->Dictionary:
	if not city.CreationPolicy.is_free(city) or not city.harmony_journey.has("growth_cutoff"):return city._fail("请先完成自由创作及旧成长截止，再主动建立新账期")
	if not city.cozy_progression.is_empty():return {"ok":true,"no_op":true,"epoch_id":city.cozy_progression.epoch_id}
	if path.is_empty() or DirAccess.dir_exists_absolute(ProjectSettings.globalize_path(path)):return city._fail("请选择经营账期副本的保存位置")
	if FileAccess.file_exists(path) and not city.Serializer.read(city,path).ok:return city._fail("目标原件无法回读，已保留原文件")
	var before:Dictionary=city.snapshot();var candidate:RefCounted=city.get_script().new()
	var restored:Dictionary=candidate.restore(before)
	if not restored.ok:return restored
	var encoded:=JSON.stringify(before,"\t",true,true);var source:=encoded.sha256_text()
	var epoch:=Crypto.new().generate_random_bytes(32).hex_encode()
	var folder:=path.get_base_dir().path_join("废弃/经营新账期").path_join(source).path_join(epoch)
	if DirAccess.dir_exists_absolute(folder) or DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(folder))!=OK:return city._fail("无法建立独立经营账期备份")
	var backup:=folder.path_join("原城市.json");var written:=_write(backup,encoded)
	if not written.ok:return written
	var reread:Dictionary=city.Serializer.read(city,backup)
	if not reread.ok:return city._fail("经营账期备份未通过回读，原城市保持")
	var original:RefCounted=city.get_script().new();restored=original.restore(reread.data)
	if not restored.ok or JSON.stringify(original.snapshot(),"\t",true,true).sha256_text()!=source:return city._fail("经营账期备份与来源不一致，原城市保持")
	var original_file:=""
	if FileAccess.file_exists(path):
		original_file=folder.path_join("原文件.json")
		if DirAccess.copy_absolute(ProjectSettings.globalize_path(path),ProjectSettings.globalize_path(original_file))!=OK or FileAccess.get_sha256(path)!=FileAccess.get_sha256(original_file):return city._fail("经营原文件备份失败，原城市保持")
	# Derive the pre-epoch real network once; do not run Life or production.
	var network:RefCounted=load("res://scripts/world/city_creation_network.gd").new()
	network.state=candidate;network._build_graph();candidate.prepare_regional_echo(network)
	candidate.cozy_progression=Ledger.create(candidate,source,epoch);candidate.revision+=1
	var saved:Dictionary=candidate.save_city(path)
	if not saved.ok:return saved
	# Only the new ledger is published; construction Undo and in-flight work survive.
	city.cozy_progression=candidate.cozy_progression.duplicate(true);city.revision=candidate.revision
	city.dirty=false;city.life_progress_dirty=false
	return {"ok":true,"no_op":false,"epoch_id":epoch,"path":path,"backup":backup,"original_backup":original_file,"earned":0}
static func _write(path:String,value:String)->Dictionary:
	if FileAccess.file_exists(path):return {"ok":false,"message":"账期备份已存在，原件保持"}
	var file:=FileAccess.open(path,FileAccess.WRITE)
	if file==null:return {"ok":false,"message":"无法写入经营账期备份"}
	file.store_string(value);file.flush();var error:=file.get_error();file.close()
	return {"ok":true} if error==OK and FileAccess.get_file_as_string(path)==value else {"ok":false,"message":"经营账期备份未完整写入，原城市保持"}

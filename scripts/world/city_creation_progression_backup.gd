extends RefCounted
## Immutable validated source and raw target backup shared by epoch transactions.
static func create(city:RefCounted,before:Dictionary,path:String,category:String)->Dictionary:
	if path.is_empty() or DirAccess.dir_exists_absolute(ProjectSettings.globalize_path(path)):return city._fail("请选择经营副本的保存位置")
	if FileAccess.file_exists(path) and not city.Serializer.read(city,path).ok:return city._fail("目标原件无法回读，已保留原文件")
	var encoded:=JSON.stringify(before,"\t",true,true);var source:=encoded.sha256_text()
	var operation:=Crypto.new().generate_random_bytes(32).hex_encode()
	var folder:=path.get_base_dir().path_join("废弃/"+category).path_join(source).path_join(operation)
	if DirAccess.dir_exists_absolute(folder) or DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(folder))!=OK:return city._fail("无法建立独立经营备份")
	var backup:=folder.path_join("原城市.json");var written:=_write(backup,encoded)
	if not written.ok:return written
	var reread:Dictionary=city.Serializer.read(city,backup)
	if not reread.ok:return city._fail("经营备份未通过回读，原城市保持")
	var original:RefCounted=city.get_script().new();var restored:Dictionary=original.restore(reread.data)
	# _write verified exact source bytes; JSON decoding rounds final float bits.
	# Compare restored semantics against that validated decode, not pre-JSON floats.
	if not restored.ok or not same_decoded(original.snapshot(),reread.data):return city._fail("经营备份与来源不一致，原城市保持")
	var raw:=""
	if FileAccess.file_exists(path):
		raw=folder.path_join("原文件.json")
		if DirAccess.copy_absolute(ProjectSettings.globalize_path(path),ProjectSettings.globalize_path(raw))!=OK or FileAccess.get_sha256(path)!=FileAccess.get_sha256(raw):return city._fail("经营原文件备份失败，原城市保持")
	return {"ok":true,"source":source,"operation_id":operation,"backup":backup,"original_backup":raw}
static func same_decoded(a:Variant,b:Variant)->bool:
	# Restore normalizes authoritative JSON integers; keep every numeric value exact.
	if (a is int or a is float) and (b is int or b is float):return a==b
	if typeof(a)!=typeof(b):return false
	if a is Dictionary:
		if a.size()!=b.size():return false
		for key:Variant in a:
			if not b.has(key) or not same_decoded(a[key],b[key]):return false
		return true
	if a is Array:
		if a.size()!=b.size():return false
		for i in range(a.size()):
			if not same_decoded(a[i],b[i]):return false
		return true
	return a==b
static func _write(path:String,value:String)->Dictionary:
	if FileAccess.file_exists(path):return {"ok":false,"message":"经营备份已存在，原件保持"}
	var file:=FileAccess.open(path,FileAccess.WRITE)
	if file==null:return {"ok":false,"message":"无法写入经营备份"}
	file.store_string(value);file.flush();var error:=file.get_error();file.close()
	return {"ok":true} if error==OK and FileAccess.get_file_as_string(path)==value else {"ok":false,"message":"经营备份未完整写入，原城市保持"}

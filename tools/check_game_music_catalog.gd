extends SceneTree
const Bundle=preload("res://scripts/audio/city_creation_game_music_bundle.gd")
const Player=preload("res://scripts/audio/city_creation_game_music_player.gd")
func _initialize()->void:
	var began:=Time.get_ticks_msec();var rows:Array=[];var failures:Array=[]
	var source:="res://数据/音乐资产/游戏音乐包/20261103_v1/catalog.json";var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--catalog="):source=arg.trim_prefix("--catalog=")
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	var catalog:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(source))
	for item:Dictionary in catalog.packs:
		var result:=Bundle.read(item.manifest)
		var ok:bool=result.ok and not result.fallback and result.stream.stream_count==item.layer_count and FileAccess.get_sha256(item.manifest)==item.manifest_sha256
		if not ok:failures.append(item.name)
		rows.append({"name":item.name,"ok":ok,"layers":item.layer_count})
	var report:={"ok":failures.is_empty(),"sources":rows.size(),"packs":rows,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"default_changed":false,"listening_approved":false}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	FileAccess.open(out+"/catalog_engine.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"))
	print("GAME_MUSIC_CATALOG ",JSON.stringify({"ok":report.ok,"sources":rows.size(),"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)

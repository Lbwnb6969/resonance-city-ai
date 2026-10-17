extends RefCounted
const Stamp=preload("res://scripts/audio/city_creation_bank_stamp.gd")
const PATH:="res://资源/音乐/城市同步声部库.res"
const SOURCES:=["res://scripts/audio/city_creation_music.gd","res://scripts/audio/city_creation_theme_pcm.gd","res://scripts/audio/city_creation_reply_pcm.gd","res://scripts/audio/city_creation_pitch_pluck.gd","res://scripts/audio/city_creation_bakery_cues.gd","res://scripts/audio/city_creation_spatial.gd"]
static func source_signature()->String:
	var parts:=PackedStringArray()
	# Git checks out LF; existing Windows workspaces can still contain CRLF.
	for path:String in SOURCES:parts.append(FileAccess.get_file_as_string(path).replace("\r\n","\n").sha256_text())
	return "|".join(parts).sha256_text()
static func load_bank()->Dictionary:
	var started:=Time.get_ticks_usec()
	if not ResourceLoader.exists(PATH):return {}
	# Development detects changed synthesis sources. Exports use the baked
	# stamp because original .gd text need not be present in a PCK.
	var expected:=source_signature() if OS.has_feature("editor") else Stamp.SIGNATURE
	var resource:Resource=ResourceLoader.load(PATH)
	if resource.get_meta("signature","")!=expected:return {}
	var bank:Dictionary=resource.get_meta("bank")
	var report:Dictionary=bank.report.duplicate(true);report.bank_source="precompiled";report.bank_load_ms=float(Time.get_ticks_usec()-started)/1000.
	return {"streams":bank.streams,"edits":bank.edits,"report":report}

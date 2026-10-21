extends RefCounted
## Immutable creation works. Publish the flushed, checked JSON marker last.
## A work owns its complete State snapshot; loading never remaps authored IDs.
const Phonograph=preload("res://scripts/audio/city_creation_phonograph.gd")
const State = preload("res://scripts/world/city_creation_state.gd")
const DIRECTORY := "user://city_creation_works"
const SCHEMA := "resonance_creation_work_v1"
const COVER_SIZE := Vector2i(480, 300)
var directory := DIRECTORY


func save(title: String, world: Dictionary, view: Dictionary, cover: Image, reason: String = "manual", mix:Dictionary={}) -> Dictionary:
	var clean_title := title.strip_edges()
	if not _valid_text(clean_title): return _fail("请为作品填写单行名称")
	if not _valid_text(reason): return _fail("作品保存来源无效")
	var checked := State.new().restore(world)
	if not checked.ok: return _fail("作品城市无效：" + str(checked.message))
	if not _valid_view(view): return _fail("作品镜头格式无效")
	if not mix.is_empty() and not Phonograph.valid(mix):return _fail("作品混音格式无效")
	if cover == null or cover.is_empty(): return _fail("作品封面为空")
	if DirAccess.make_dir_recursive_absolute(directory) != OK: return _fail("无法创建作品收藏目录")
	var saved_at := int(Time.get_unix_time_from_system() * 1000.0)
	var id := _new_id(saved_at)
	var path := directory.path_join(id + ".json")
	var cover_path := directory.path_join(id + ".png")
	var image: Image = cover.duplicate()
	image.convert(Image.FORMAT_RGBA8)
	image.resize(COVER_SIZE.x, COVER_SIZE.y, Image.INTERPOLATE_LANCZOS)
	var cover_bytes := image.save_png_to_buffer()
	if cover_bytes.is_empty(): return _fail("作品封面编码失败")
	var payload := {"id":id,"title":clean_title,"saved_at":saved_at,"reason":reason,
		"world":world.duplicate(true),"view":view.duplicate(true),"cover_sha256":_digest(cover_bytes)}
	if not mix.is_empty():payload["phonograph_mix"]=mix.duplicate(true)
	# Hash the exact serialized text: JSON.parse converts integer values to
	# floats, so hashing a reserialized Dictionary would change valid digests.
	var encoded_payload := JSON.stringify(payload, "", true, true)
	var envelope := {"schema":SCHEMA,"payload":encoded_payload,"sha256":encoded_payload.sha256_text()}
	var bytes := JSON.stringify(envelope, "\t", true, true).to_utf8_buffer()
	var written := _write_checked(cover_path + ".tmp", cover_bytes)
	if not written.ok: return written
	written = _write_checked(path + ".tmp", bytes)
	if not written.ok: return written
	var staged := _read_path(path + ".tmp", id, cover_path + ".tmp")
	if not staged.ok: return _fail("作品临时文件校验失败：" + str(staged.message))
	if not staged.preview_valid: return _fail("作品临时封面校验失败")
	# Earlier works, partial writes and orphan covers are never overwritten or
	# removed. Only the final JSON makes this new version visible in entries().
	if FileAccess.file_exists(cover_path) or FileAccess.file_exists(path): return _fail("作品身份已存在，原版本保持")
	if DirAccess.rename_absolute(cover_path + ".tmp", cover_path) != OK: return _fail("作品封面尚未发布")
	if DirAccess.rename_absolute(path + ".tmp", path) != OK: return _fail("作品尚未发布，原收藏保持")
	return {"ok":true,"message":"已收藏新版本","id":id,"title":clean_title,"path":path}


func entries() -> Dictionary:
	var items: Array[Dictionary] = []
	if not DirAccess.dir_exists_absolute(directory): return {"ok":true,"message":"还没有收藏作品","items":items}
	var folder := DirAccess.open(directory)
	if folder == null: return {"ok":false,"message":"无法读取作品收藏目录","items":items}
	for filename: String in folder.get_files():
		if not filename.ends_with(".json"): continue
		var id := filename.trim_suffix(".json")
		var path := directory.path_join(filename)
		var result := read(id)
		var item := {"id":id,"title":str(result.get("title", "无法读取的作品")),
			"saved_at":result.get("saved_at", FileAccess.get_modified_time(path) * 1000),
			"reason":str(result.get("reason", "")),"stats":{"houses":0,"rooms":0,"concerts":0},
			"cover_path":"","preview_valid":false,"valid":bool(result.ok),"message":str(result.message)}
		if result.ok:
			item.stats = _stats(result.world)
			item.cover_path = result.cover_path
			item.preview_valid = result.preview_valid
		items.append(item)
	items.sort_custom(func(a: Dictionary, b: Dictionary) -> bool:
		if int(a.saved_at) == int(b.saved_at): return str(a.id) > str(b.id)
		return int(a.saved_at) > int(b.saved_at))
	return {"ok":true,"message":"","items":items}


func read(id: String) -> Dictionary:
	if not _valid_id(id): return _fail("作品身份无效")
	return _read_path(directory.path_join(id + ".json"), id, directory.path_join(id + ".png"))


func _read_path(path: String, id: String, cover_path: String) -> Dictionary:
	var file := FileAccess.open(path, FileAccess.READ)
	if file == null: return _fail("无法读取作品")
	var json := JSON.new()
	var error := json.parse(file.get_as_text())
	file.close()
	if error != OK or not json.data is Dictionary: return _fail("作品文件损坏")
	var envelope: Dictionary = json.data
	if envelope.get("schema") != SCHEMA: return _fail("作品收藏版本不支持")
	if not envelope.get("payload") is String or not envelope.get("sha256") is String: return _fail("作品封套不完整")
	var encoded_payload: String = envelope.payload
	if encoded_payload.sha256_text() != envelope.sha256: return _fail("作品完整性校验失败")
	var parsed_payload: Variant = JSON.parse_string(encoded_payload)
	if not parsed_payload is Dictionary: return _fail("作品内容损坏")
	var payload: Dictionary = parsed_payload
	if payload.size() not in [7,8] or (payload.size()==8 and not payload.has("phonograph_mix")) or payload.get("id") != id or not _valid_id(id): return _fail("作品身份与文件不一致")
	if not payload.get("title") is String or not _valid_text(payload.title): return _fail("作品名称无效")
	if not payload.get("reason") is String or not _valid_text(payload.reason): return _fail("作品保存来源无效")
	if not _integer(payload.get("saved_at")) or payload.saved_at <= 0: return _fail("作品保存时间无效")
	if not payload.get("world") is Dictionary or not payload.get("view") is Dictionary: return _fail("作品内容不完整")
	if not _valid_view(payload.view): return _fail("作品镜头格式无效")
	if payload.has("phonograph_mix") and not Phonograph.valid(payload.phonograph_mix):return _fail("作品混音格式无效")
	var city := State.new()
	var checked := city.restore(payload.world)
	if not checked.ok: return _fail("作品城市无效：" + str(checked.message))
	var preview_valid := _preview_valid(cover_path, payload.get("cover_sha256"))
	return {"ok":true,"message":"","id":id,"title":payload.title,"world":city.snapshot(),
		"phonograph_mix":payload.get("phonograph_mix",{}).duplicate(true),"view":payload.view,"saved_at":int(payload.saved_at),"reason":payload.reason,"path":path,
		"cover_path":cover_path if preview_valid else "","preview_valid":preview_valid}


func _preview_valid(path: String, expected_digest: Variant) -> bool:
	if not expected_digest is String or not FileAccess.file_exists(path): return false
	var bytes := FileAccess.get_file_as_bytes(path)
	if _digest(bytes) != expected_digest: return false
	var image := Image.new()
	return image.load_png_from_buffer(bytes) == OK and image.get_size() == COVER_SIZE


func _new_id(stamp: int) -> String:
	var crypto := Crypto.new()
	while true:
		var id := "w_%013d_%s" % [stamp, crypto.generate_random_bytes(8).hex_encode()]
		var path := directory.path_join(id)
		if not FileAccess.file_exists(path + ".json") and not FileAccess.file_exists(path + ".png") and not FileAccess.file_exists(path + ".json.tmp") and not FileAccess.file_exists(path + ".png.tmp"): return id
	return ""


func _valid_id(id: String) -> bool:
	if id.length() != 32: return false
	var pattern := RegEx.new()
	pattern.compile("^w_[0-9]{13}_[0-9a-f]{16}$")
	return pattern.search(id) != null


func _valid_text(value: String) -> bool:
	if value.is_empty() or value != value.strip_edges(): return false
	for index in range(value.length()):
		if value.unicode_at(index) < 32: return false
	return true


func _valid_view(view: Dictionary) -> bool:
	var has_phase: bool=view.has("light_phase")
	if view.size() != (6 if has_phase else 5) or not view.get("focus") is Array or view.focus.size() != 3: return false
	for coordinate in view.focus:
		if not _number(coordinate): return false
	for key in ["yaw", "pitch", "zoom"]:
		if not _number(view.get(key)): return false
	if view.pitch < 0.3 or view.pitch > 1.2 or view.zoom < State.Bounds.MIN_ZOOM or view.zoom > State.Bounds.MAX_ZOOM or typeof(view.get("evening")) != TYPE_BOOL: return false
	if not has_phase: return true
	var phase: Variant=view.light_phase
	return _integer(phase) and int(phase)>=0 and int(phase)<=2 and bool(view.evening)==(int(phase)>=1)


func _number(value: Variant) -> bool:
	return (typeof(value) == TYPE_INT or typeof(value) == TYPE_FLOAT) and is_finite(float(value))


func _integer(value: Variant) -> bool:
	return _number(value) and floorf(float(value)) == float(value)


func _stats(world: Dictionary) -> Dictionary:
	var rooms := 0
	for house: Dictionary in world.houses:
		for cell: Dictionary in house.cells:
			if cell.kind == "room": rooms += 1
	return {"houses":world.houses.size(),"rooms":rooms,"concerts":int(world.get("life_progress", {}).get("concerts", 0))}


func _write_checked(path: String, bytes: PackedByteArray) -> Dictionary:
	if FileAccess.file_exists(path): return _fail("作品临时文件已存在，原字节保持")
	var file := FileAccess.open(path, FileAccess.WRITE)
	if file == null: return _fail("无法写入作品临时文件")
	file.store_buffer(bytes)
	file.flush()
	var error := file.get_error()
	file.close()
	if error != OK or FileAccess.get_file_as_bytes(path) != bytes: return _fail("作品临时文件未完整写入")
	return {"ok":true,"message":""}


func _digest(bytes: PackedByteArray) -> String:
	var context := HashingContext.new()
	context.start(HashingContext.HASH_SHA256)
	context.update(bytes)
	return context.finish().hex_encode()


func _fail(message: String) -> Dictionary:
	return {"ok":false,"message":message}

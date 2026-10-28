extends RefCounted
## Build rights are independent of earned eras, cards and actual completed events.
const Save=preload("res://scripts/world/city_creation_creative_save.gd")
const ERAS:=["pastoral","renaissance","clockwork","modern_eco"]
const ROLE_ERAS:={"atelier":"renaissance","clockmaker":"clockwork","symphony_hall":"modern_eco"}

static func is_free(city:RefCounted)->bool:return city.creative_settings.get("creation_policy", "legacy")=="free"
static func can_build_era(city:RefCounted,era:String)->bool:return era in ERAS and (is_free(city) or era in city.era_unlocks)
static func eras(city:RefCounted)->Array:return ERAS.duplicate() if is_free(city) else city.era_unlocks.duplicate()
static func can_assign_role(city:RefCounted,role:String)->bool:
	return role in city.HOUSE_ROLES and (not ROLE_ERAS.has(role) or can_build_era(city,ROLE_ERAS[role]))

static func data_can_build_era(data:Dictionary,era:Variant)->bool:
	if not era is String or era not in ERAS:return false
	var settings:Variant=data.get("creative_settings",{})
	var free:bool=data.get("schema",0)==Save.SCHEMA and settings is Dictionary and settings.get("creation_policy")=="free"
	return free or era in data.get("era_unlocks",["pastoral"])

static func initialize(city:RefCounted,empty:bool=true)->void:
	# Retain initialize()/initialize_empty() as legacy recipe APIs. Production
	# new-city entry and new callers explicitly choose this free creation route.
	if empty:city.initialize_empty()
	else:city.initialize()
	city.creative_settings=Save.defaults()

static func initialize_biome(city:RefCounted,id:String,day:String="")->Dictionary:
	var result:Dictionary=city.Biomes.create(city,id,day)
	if result.ok:city.creative_settings=Save.defaults()
	return result

static func set_preferences(city:RefCounted,patch:Dictionary)->Dictionary:
	if city.creative_settings.is_empty():return city._fail("请先开启自由创作，再保存创作偏好")
	var target:Dictionary=city.creative_settings.duplicate(true)
	for key:Variant in patch:
		if key not in ["guidance","music","presentation"]:return city._fail("不能用偏好设置修改创作政策")
		target[key]=patch[key].duplicate(true) if patch[key] is Dictionary else patch[key]
	if not Save.settings_valid(city,target):return city._fail("创作偏好无效")
	if target==city.creative_settings:return {"ok":true,"no_op":true}
	var before:Dictionary=city.snapshot();city.creative_settings=target;city._commit(before,"更改创作偏好")
	return {"ok":true,"message":"创作偏好已保存"}

static func convert(city:RefCounted,path:String)->Dictionary:
	if is_free(city):return {"ok":true,"no_op":true,"message":"这座城已开启自由创作"}
	var before:Dictionary=city.snapshot();var valid:Dictionary=city._validate_snapshot(before)
	if not valid.ok:return valid
	if path.is_empty():return city._fail("请选择转换副本的保存位置")
	var absolute:=ProjectSettings.globalize_path(path)
	if DirAccess.dir_exists_absolute(absolute):return city._fail("保存位置不能是文件夹")
	if FileAccess.file_exists(path) and not city.Serializer.read(city,path).ok:return city._fail("目标原档无法验证，已保留原文件")
	var parent:=absolute.get_base_dir().path_join("废弃/自由创作转换")
	var folder:=parent.path_join("%d_%d"%[int(Time.get_unix_time_from_system()),Time.get_ticks_usec()])
	if DirAccess.dir_exists_absolute(folder) or DirAccess.make_dir_recursive_absolute(folder)!=OK:return city._fail("无法建立独立转换备份")
	var backup:=folder.path_join("转换前城市.json")
	var file:=FileAccess.open(backup,FileAccess.WRITE)
	if file==null:return city._fail("无法写入转换备份")
	file.store_string(JSON.stringify(before,"\t",true,true));var error:=file.get_error();file.close()
	if error!=OK or not city.Serializer.read(city,backup).ok:return city._fail("转换备份未通过回读，当前城市保留")
	var original:=""
	if FileAccess.file_exists(path):
		original=folder.path_join("原文件.json")
		if DirAccess.copy_absolute(absolute,original)!=OK or FileAccess.get_sha256(absolute)!=FileAccess.get_sha256(original):return city._fail("原文件备份失败，当前城市保留")
	var settings:Dictionary=city.creative_settings.duplicate(true);var revision:int=city.revision;var dirty:bool=city.dirty;var life_dirty:bool=city.life_progress_dirty
	city.creative_settings=Save.defaults("free",1) if settings.is_empty() else settings.duplicate(true)
	city.creative_settings.creation_policy="free";city.creative_settings.migration_version=1
	# Conversion preserves the old derived roof display; M81 can explicitly
	# convert it to placeable blueprints without inventing a ground entity.
	if settings.is_empty():city.creative_settings.presentation.legacy_crowns=true
	city.revision+=1;city.dirty=true
	var saved:Dictionary=city.save_city(path)
	if not saved.ok:
		city.creative_settings=settings;city.revision=revision;city.dirty=dirty;city.life_progress_dirty=life_dirty
		return saved
	return {"ok":true,"message":"已开启自由创作；旧城与原文件备份已保留","path":path,"backup":backup,"original_backup":original}

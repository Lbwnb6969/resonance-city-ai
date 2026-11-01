extends RefCounted
## Only production-created towns enter here. Loading a work never opens an epoch.
static func path_for(owner:Node3D,active:bool=false)->String:
	if active and owner.persistence:return owner.SAVE_PATH
	var directory:String=owner.collection_directory
	if not owner.persistence and not directory.begins_with("res://验证记录/"):directory="res://验证记录/新城会话"
	return directory.path_join("经营副本").path_join(Crypto.new().generate_random_bytes(16).hex_encode()+".json")
static func begin(city:RefCounted,owner:Node3D,active:bool=false)->Dictionary:
	return city.begin_progression_epoch(path_for(owner,active))
static func startup(owner:Node3D)->void:
	if owner.save_blocked:return
	if owner.persistence and FileAccess.file_exists(owner.SAVE_PATH):return
	for arg:String in OS.get_cmdline_user_args():
		if arg.ends_with("-example"):return
	var result:=begin(owner.state,owner,true)
	owner.set_meta("new_city_opening",result)
	if not result.ok:owner.save_blocked=true
static func notify(owner:Node3D)->void:
	var result:Dictionary=owner.get_meta("new_city_opening",{})
	if not result.is_empty() and not result.ok:owner._message("新经营账期未建立："+str(result.message))

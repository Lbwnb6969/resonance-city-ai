extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Library=preload("res://scripts/world/city_creation_collection.gd")
func _initialize() -> void:
	var state:=State.new()
	state.initialize()
	var library:=Library.new()
	library.directory="res://验证记录/作品收藏_2026-10-16/服务探针"
	var cover:=Image.create(16,16,false,Image.FORMAT_RGB8)
	cover.fill(Color("638b75"))
	var saved:=library.save("读写探针",state.snapshot(),{"focus":[-3,0.7,0],"yaw":0.62,"pitch":0.64,"zoom":25.0,"evening":false},cover)
	print("COLLECTION_STORAGE ",JSON.stringify(saved))
	quit(0 if saved.ok else 1)

extends RefCounted
const Archive=preload("res://scripts/world/city_creation_acoustic_archive.gd")
const Chords=preload("res://scripts/world/city_creation_synergy_buffs.gd")
const Rewards=preload("res://scripts/world/city_creation_archive_rewards.gd")
static func render(panel:Control)->void:
	var lines:PackedStringArray=[]
	for id:String in Archive.CHORDS:lines.append(("✓ " if id in panel._archive_data.get("chords",[]) else "○ ")+str(Chords.CHORD_NAMES[id]))
	var card:VBoxContainer=panel._archive_card("和弦留痕 · %d/5"%panel._archive_data.get("chords",[]).size(),"\n".join(lines)+"\n打开留有对应和弦的作品，点击巡礼可看与听，随时返回。")
	for id:String in Archive.CHORDS:
		var button:=Button.new();button.name="TourChord_"+id;button.text="巡礼 · "+str(Chords.CHORD_NAMES[id]);button.disabled=id not in panel._archive_data.get("chords",[]);card.add_child(button)
		button.pressed.connect(func()->void:panel.chord_tour_requested.emit(id))
	panel._archive_card("旧城赠来的第一缕灵感","开启新的地貌河湾时，可任选一页开局传世手札。每座新城一页，两项大奖同获仍赠一页。" if Rewards.heritage_available(panel._archive_rewards) else "五种和弦或百屋跨时代交响留下图鉴大奖后，新河湾会收到一页开局传世手札。")
	panel.footer.text="跨城图鉴 · 和弦%d/5 · 名胜%d/6 · 乐章%d/6\n关上收藏馆，继续这一座河湾。"%[panel._archive_data.get("chords",[]).size(),panel._archive_data.get("landmarks",[]).size(),panel._archive_data.get("performances",[]).size()]

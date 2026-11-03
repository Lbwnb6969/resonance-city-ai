extends Node
## Installed only by the isolated construction launcher; never a default music policy.
const Player=preload("res://scripts/audio/city_creation_game_music_player.gd")
var demo:Node3D
var packs:Array=[]
var picker:OptionButton
var play_button:Button
var pause_button:Button
var stop_button:Button
var status:Label
var conductor:Node
var background:Array=[]
func install(owner:Node3D)->bool:
	demo=owner
	var pointer:Variant=JSON.parse_string(FileAccess.get_file_as_string("res://数据/音乐资产/active_game_music.json"))
	if not pointer is Dictionary or FileAccess.get_sha256(pointer.catalog)!=pointer.catalog_sha256:return false
	var catalog:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(pointer.catalog))
	for row:Dictionary in catalog.packs:
		if row.kind=="music":packs.append(row)
	if packs.is_empty():return false
	var background_ids:Array=pointer.get("trial_background",{}).get("source_ids",[])
	for row:Dictionary in packs:
		if row.source_id in background_ids:background.append(row)
	var box:=VBoxContainer.new();box.name="MusicTrialControls";demo.ledger.scroll.get_child(0).add_child(box);demo.ledger.scroll.get_child(0).move_child(box,0)
	status=Label.new();status.autowrap_mode=TextServer.AUTOWRAP_WORD_SMART;status.text="隔离候选试听 · 技术通过 · 待听评";box.add_child(status)
	picker=OptionButton.new();picker.name="MusicTrialPicker";picker.clip_text=true;picker.fit_to_longest_item=false;picker.custom_minimum_size.x=220;box.add_child(picker)
	for row:Dictionary in packs:picker.add_item(("背景候选 · " if row.source_id in background_ids else "")+str(row.name).get_basename())
	for i in range(packs.size()):
		if packs[i].source_id==pointer.get("trial_background",{}).get("first_source_id",""):picker.select(i)
	var buttons:=HBoxContainer.new();box.add_child(buttons)
	play_button=demo._button("试听所选",start_selected);buttons.add_child(play_button)
	pause_button=demo._button("暂停",toggle_pause);buttons.add_child(pause_button)
	stop_button=demo._button("结束试听",stop);buttons.add_child(stop_button)
	demo.set_meta("music_trial",self);return true
func start_selected()->void:
	stop()
	while demo.music.get_node_or_null("GameMusicPlayer")!=null:await get_tree().process_frame
	var row:Dictionary=packs[picker.selected]
	if FileAccess.get_sha256(row.manifest)!=row.manifest_sha256:status.text="候选文件与目录签名不符";return
	var ticket:Dictionary=Player.request(demo.music,row.manifest)
	if not ticket.ok:status.text="当前音乐正在使用，请结束留声机或其他试听";return
	conductor=ticket.node
	var is_background:bool=background.has(row)
	conductor.set_meta("background_intent_trial",is_background)
	conductor.sequence.configure(conductor,background if is_background else packs);demo.ledger._last_refresh=-500
func toggle_pause()->void:
	if is_instance_valid(conductor):conductor.set_paused(not conductor.paused)
func stop()->void:
	if is_instance_valid(conductor):conductor.stop()
	conductor=null
func _process(_delta:float)->void:
	if status==null:return
	var present:=is_instance_valid(conductor)
	pause_button.disabled=not present;stop_button.disabled=not present
	play_button.disabled=present and conductor.worker!=null
	pause_button.text="继续" if present and conductor.paused else "暂停"

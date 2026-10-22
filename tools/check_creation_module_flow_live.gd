extends SceneTree
## Actual rapid edits while the full house and resident routes prepare.
const Scene=preload("res://scenes/city_creation.tscn")
const Examples=preload("res://scripts/world/city_creation_examples.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var output:="res://验证记录/连续加建_2026-10-22/native"
var demo
var checks:=0
var failures:Array[String]=[]
var facts:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func key(code:int,ctrl:bool=false)->void:
	for pressed:bool in [true,false]:
		var event:=InputEventKey.new();event.keycode=code;event.pressed=pressed;event.ctrl_pressed=ctrl;root.push_input(event);await process_frame
func move(at:Vector2)->void:
	var event:=InputEventMouseMotion.new();event.position=at;event.global_position=at;root.push_input(event);await process_frame
func click(at:Vector2)->void:
	await move(at)
	for pressed:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.position=at;event.global_position=at;event.pressed=pressed;event.button_index=MOUSE_BUTTON_LEFT;root.push_input(event);await process_frame
func house(id:String)->Dictionary:return demo.town._house_record(id)
func roof(id:String)->Vector2:
	var row:Dictionary=house(id);var top:=0
	for cell:Dictionary in row.cells:top=maxi(top,int(cell.level))
	return demo.camera.unproject_position(Vector3(row.origin[0],float(row.get("base_y",0.))+(top+1)*1.7+.35,row.origin[1]))
func settle()->void:
	while demo.edit_pending() or demo._edit_ui_pending:await process_frame
	await physics_frame;await process_frame
func shot(name:String)->void:
	demo.toast.hide();demo.toast_time=0.
	await RenderingServer.frame_post_draw
	check(root.get_texture().get_image().save_png(output+"/"+name+".png")==OK,"native construction image "+name)
func burst(size:Vector2i)->void:
	root.size=size;demo.select_tool(0)
	var a:Dictionary=house("h60");var b:Dictionary=house("h61")
	var levels:=0
	for row:Dictionary in [a,b]:
		for cell:Dictionary in row.cells:levels=maxi(levels,int(cell.level))
	demo.focus=Vector3(-17.,maxf(3.,float(levels)*1.7),-35.);demo.zoom=15.;demo.yaw=0.;demo.pitch=1.05;demo._update_camera()
	for i in range(10):await process_frame
	await click(roof("h60"));check(demo.selected_house=="h60" and demo.spatial_popover.card.visible,"actual roof opens its card "+str(size))
	# Resizing moves the roof card from its previous viewport anchor. Wait for
	# that existing spring/anchor motion before aiming at its add button.
	for i in range(25):await process_frame
	await click(demo.spatial_popover.card.find_child("ExtendHouse",true,false).get_global_rect().get_center())
	check(demo.house_module_mode and not demo.spatial_popover.card.visible,"actual add-module action "+str(size))
	if not demo.house_module_mode:return
	var counts:Array=[house("h60").cells.size(),house("h61").cells.size()]
	var roots:Array=[demo.town.house_roots.h60.get_instance_id(),demo.town.house_roots.h61.get_instance_id()]
	var second_at:=roof("h61");var began:=Time.get_ticks_usec()
	await click(roof("h60"))
	check(demo.edit_pending() and house("h60").cells.size()==int(counts[0])+1,"first real roof click commits immediately "+str(size))
	check(demo.pending_modules.records.size()==1 and demo.pending_modules.root.is_visible_in_tree(),"first addition has immediate visible feedback "+str(size))
	if not is_instance_valid(demo.pending_modules.root):return
	check(demo.pending_modules.root.find_children("*","CollisionObject3D",true,false).is_empty(),"feedback adds no resident collision bodies "+str(size))
	await click(second_at)
	check(house("h61").cells.size()==int(counts[1])+1 and demo.edit_pending(),"next roof remains editable before previous publication "+str(size))
	check(demo.pending_modules.records.size()==2,"latest request keeps both additions "+str(size))
	var first:Dictionary={}
	for row:Dictionary in demo.pending_modules.records:
		if row.house_id=="h60":first=row;break
	var bounds:AABB=first.bounds
	var at:Vector2=demo.camera.unproject_position(Vector3(bounds.get_center().x,bounds.end.y-.01,bounds.get_center().z))
	await move(at);var hit:Dictionary=demo._ray_hit(at)
	check(hit.get("house_id","")=="h60" and hit.get("cell_id","")==first.cell_id and hit.normal.y>.45,"actual pointer hits the new unpublished module top "+str(size))
	await click(at)
	check(house("h60").cells.size()==int(counts[0])+2 and demo.pending_modules.records.size()==3,"a new outlined module supports the next real roof click "+str(size))
	check([demo.town.house_roots.h60.get_instance_id(),demo.town.house_roots.h61.get_instance_id()]==roots,"complete old houses stay published during the burst "+str(size))
	var burst_ms:=float(Time.get_ticks_usec()-began)/1000.
	await shot("pending_"+str(size.x))
	var expected:Array=[house("h60").cells.duplicate(true),house("h61").cells.duplicate(true)]
	await key(KEY_ESCAPE)
	check(not demo.house_module_mode and demo.pending_modules.records.size()==3,"Escape leaves already committed additions intact "+str(size))
	await key(KEY_Z,true)
	check(house("h60").cells.size()==int(counts[0])+1 and demo.pending_modules.records.size()==2,"real undo withdraws the last unfinished addition "+str(size))
	await key(KEY_Y,true)
	check(house("h60").cells==expected[0] and house("h61").cells==expected[1] and demo.pending_modules.records.size()==3,"real redo restores exact issued cells and feedback "+str(size))
	await settle()
	check(demo.pending_modules.records.is_empty() and not is_instance_valid(demo.pending_modules.root) and not demo.pending_modules.tracking,"finished publication removes all feedback "+str(size))
	check(demo.life.last_revision==demo.state.revision and demo.town.budget_rebuild.committed_generation==demo.town.budget_rebuild.generation,"models and resident routes publish the latest burst together "+str(size))
	var body_ids:Array=[]
	for body:StaticBody3D in demo.town.house_roots.h60.find_children("*","StaticBody3D",true,false):body_ids.append(str(body.get_meta("cell_id","")))
	check(body_ids.has(str(house("h60").cells[-1].id)),"final top module has its real published collider "+str(size))
	check(house("h60").cells==expected[0] and house("h61").cells==expected[1],"publication preserves every clicked module "+str(size))
	facts.append({"resolution":size,"three_clicks_ms":burst_ms,"counts_before":counts,"counts_after":[house("h60").cells.size(),house("h61").cells.size()],"publication":demo.edit_budget_report()})
	await shot("published_"+str(size.x))
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):output=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(output));root.size=Vector2i(1440,900);Engine.max_fps=100
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var source:=FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json")
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=output+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	while demo.music._loading:await process_frame
	await demo.gallery._open_chosen(Examples.read("example_flagship"));demo.life.set_process(false);demo.life_save_timer=100000.
	var voices:Array=[]
	for player:Node in demo.music._players.values()+demo.music._effects:voices.append(player.get_instance_id())
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:await burst(size)
	var current:Array=[]
	for player:Node in demo.music._players.values()+demo.music._effects:current.append(player.get_instance_id())
	check(current==voices and voices.size()==16,"rapid construction retains all twelve long and four short voice identities")
	check(source==FileAccess.get_file_as_bytes("res://数据/四库共鸣交响大城样例.json") and personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"source work and personal save bytes remain unchanged")
	var report:Dictionary={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts}
	FileAccess.open(output+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("MODULE_FLOW_LIVE ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures}));demo.queue_free();await process_frame;quit(0 if report.ok else 1)

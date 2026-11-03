extends "res://tools/check_creation_mixed_detail_journey_live.gd"
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const HingeActions=preload("res://scripts/world/city_creation_hinge_actions.gd")
func finished()->void:
	await settle();quiet();check(await wait_for(func():return demo.town.touch.active.is_empty(),1500),"transform feedback settles before geometry sampling");await physics_frame
func transformed_glass(label:String)->void:
	var result:Dictionary=preload("res://tools/fixtures/city_creation_transformed_window_probe.gd").scan(demo.town.house_roots.h1,demo.state.houses[0],demo.town.get_world_3d().direct_space_state)
	check(result.rays>0 and result.blocked==0 and result.glass==result.rays,label+" independently transformed aperture quadrants remain clear with actual final GPU glass")
	check(result.picked==result.rays,label+" all transformed visible glass quadrants retain actual Jolt house picking")
	facts[label]=result;print("APERTURE ",label," ",JSON.stringify(result))
func pictures(label:String,phases:Array=[0],yaw:float=.7)->void:
	demo.focus=Vector3(-27.2,2.,-20);demo.zoom=7.2;demo.pitch=.65;demo.yaw=yaw;demo._update_camera();demo.set_process(false);demo.town.clear_preview()
	var poem:Label=demo.find_child("SeasonMomentPoem",true,false)
	if poem!=null:poem.hide()
	for phase:int in phases:demo._set_light_phase(phase);await settle();await capture(label+"_"+str(phase))
	demo.set_process(true)
func complete_city(era:String,yaw:float)->RefCounted:
	var city:RefCounted=Porches.porch_fixture(era,yaw);check(city.set_house_architecture_variant("h1","flower_pots","porch").ok,"five-slot starting house "+era);return city
func rotated_case(era:String,yaw:float)->void:
	var city:=complete_city(era,yaw);await show(city,Vector2(-27.2,-20),"旋转街屋细部");await finished();var original:Dictionary=demo.state.snapshot();var initial:=row_arrays()
	check(demo.town.house_roots.h1.get_meta("porch_detail",{}).get("sites",[]).size()==2,"rotated clear door has two actual supported porch clusters")
	transformed_glass(era+"_yaw_"+str(yaw));var first:=Frame.point(demo.state.houses[0],Vector2(-28.77,-18.3));var last:=Frame.point(demo.state.houses[0],Vector2(-28.77,-16.))
	var edit:Dictionary=demo.state.add_road([first,last] as Array[Vector2],"path","none",1.25);demo._after_edit(edit,"road");await finished()
	check(edit.ok and demo.town.house_roots.h1.get_meta("porch_detail",{}).get("sites",[]).size()==1,"world-space rotated full-width approach masks exactly its actual side scenery")
	var changed:=row_arrays();await key(KEY_Z,true);await finished();check(demo.state.roads==original.roads and row_arrays()==initial,"native Undo restores exact rotated road authors and all five-slot GPU geometry")
	await key(KEY_Y,true);await finished();check(row_arrays()==changed,"native Redo restores exact rotated road masking")
	await row_cold(era+"旋转门路冷算");await finished();transformed_glass(era+"_road_"+str(yaw))
	if is_equal_approx(yaw,.4):await pictures(era+"_rotated",[0,1,2])
func fold_case(era:String,degrees:float)->void:
	var city:=complete_city(era,.4);await show(city,Vector2(-27.2,-20),"折翼细部兼容");await finished();var original:Dictionary=demo.state.snapshot();var straight:=row_arrays()
	if not HingeActions.supported(demo.state,demo.state.houses[0]):
		var revision:int=demo.state.revision;var history:int=demo.state._undo.size();var refused:Dictionary=HingeActions.set_angle(demo.state,"h1",degrees)
		check(not refused.ok and demo.state.snapshot()==original and demo.state.revision==revision and demo.state._undo.size()==history and row_arrays()==straight,"real column arcade rejects unsupported fold without author/history/GPU changes")
		facts[era+"_refused_"+str(degrees)]=refused;return
	var edit:Dictionary=HingeActions.set_angle(demo.state,"h1",degrees);demo._after_edit(edit,"room");await finished()
	check(edit.ok and demo.town.house_roots.h1.has_meta("hinged_wing"),"actual public action publishes chosen folded wing "+era+str(degrees))
	check(demo.state.houses[0].architecture_variant==original.houses[0].architecture_variant and demo.state.houses[0].seed==original.houses[0].seed,"fold retains exact independent five-slot author records and house seed")
	for name:String in ["roof_detail","chimney_detail","gable_trim","porch_detail"]:check(not demo.town.house_roots.h1.get_meta(name,{}).get("active",false),"incompatible folded roof/frontage suspends "+name)
	transformed_glass(era+"_fold_"+str(degrees));var bent:=row_arrays()
	await pictures(era+"_fold_"+str(degrees))
	await pictures(era+"_inner_"+str(degrees),[0,1,2],.7+PI if degrees>0 else .7)
	await key(KEY_Z,true);await finished();check(demo.state.houses==original.houses and row_arrays()==straight,"native Undo restores exact straight house and every dormant detail")
	await key(KEY_Y,true);await finished();check(row_arrays()==bent,"native Redo restores exact folded windows and dormant detail masks")
	var saved:Dictionary=demo.state.snapshot();var path:=OUT+"/fold_"+era+str(degrees)+".json";check(demo.state.save_city(path).ok,"actual folded five-slot schema30 saves")
	var cold:=State.new();check(cold.load_city(path).ok and cold.snapshot()==saved,"disk cold read preserves fold, independent seeds and all dormant choices")
	await show(cold,Vector2(-27.2,-20),"折翼冷读");await finished();check(row_arrays()==bent,"all folded final GPU geometry cold-equals native edits")
	# Return with the actual leaf seal: positive -> negative -> straight.
	demo.select_tool(0);demo.spatial_popover.open_for_house("h1");await settle();var seal:Button=demo.find_child("OrganicCarvingStamp",true,false)
	check(seal!=null and seal.is_visible_in_tree(),"native leaf seal remains reachable on folded five-slot house")
	if seal!=null:
		if degrees>0.:await ui_click(seal);await finished()
		await ui_click(seal);await finished()
	await key(KEY_ESCAPE);await finished()
	check(not demo.town.house_roots.h1.has_meta("hinged_wing") and demo.state.houses[0].architecture_variant==original.houses[0].architecture_variant,"native leaf returns straight while retaining all five authored recipes")
	check(row_arrays()==straight,"return to straight restores exact original complete five-slot GPU buffers")
	for name:String in ["roof_detail","chimney_detail","gable_trim","porch_detail"]:check(demo.town.house_roots.h1.get_meta(name,{}).get("active",false),"native straight return restores actual "+name)
	await row_cold(era+"折回直屋冷算")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	if OS.get_cmdline_user_args().has("--probe-fold"):await fold_case("pastoral",24.)
	else:
		for era:String in ["pastoral","renaissance"]:
			for yaw:float in [.4,-.4,PI*.5]:await rotated_case(era,yaw)
			for degrees:float in [24.,-24.]:await fold_case(era,degrees)
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal default save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("TRANSFORMED_DETAIL_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

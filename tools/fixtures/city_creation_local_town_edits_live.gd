extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Layout=preload("res://scripts/world/city_creation_cafe_layout_context.gd")
static func settle(demo)->void:
	var end:=Time.get_ticks_msec()+120000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<end:await demo.get_tree().process_frame
	for i in range(4):await demo.get_tree().process_frame
static func cold_services(demo)->bool:
	var cold:=State.new()
	if not cold.restore(demo.state.snapshot()).ok:return false
	if cold.courtyard_plans()!=demo.state.courtyard_plans():return false
	for house:Dictionary in cold.houses:
		if cold.site_blessing(str(house.id))!=demo.state.site_blessing(str(house.id)):return false
	var layout:=Layout.new()
	for id:String in demo.town.cafes.roots:
		if layout.layout(cold,id)!=demo.town.cafes.roots[id].get_meta("layout",{}):return false
	return true
static func run(demo,out:String)->Dictionary:
	var checks:Dictionary={};var operations:Array=[]
	demo.life.set_process(false);demo.spatial_popover.close();demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	# Keep the earned reward pending while photographing the actual edit.
	demo.get_meta("inspiration_draft").postponed=true;demo.get_meta("inspiration_draft").paper.hide()
	var base:Dictionary=demo.state.snapshot()
	for kind:String in ["house","road","water"]:
		var began:=Time.get_ticks_usec();var edit:Dictionary
		match kind:
			"house":edit=demo.state.add_house(Vector2(35,35))
			"road":edit=demo.state.add_road([Vector2(30,32),Vector2(38,32)] as Array[Vector2])
			"water":edit=demo.state.add_water([Vector2(30,34)] as Array[Vector2],2.4,"pond")
		demo._after_edit(edit,"room" if kind=="house" else kind);await settle(demo)
		var budget:Dictionary=demo.edit_budget_report().duplicate(true)
		checks["edit_"+kind]=edit.ok and not demo.edit_pending() and cold_services(demo)
		operations.append({"kind":kind,"total_ms":(Time.get_ticks_usec()-began)/1000.,"budget":budget})
		demo.focus=Vector3(34,.7,33);demo.zoom=13.;demo._update_camera();await RenderingServer.frame_post_draw
		demo.get_tree().root.get_texture().get_image().save_png(out+"/local_300_"+kind+".png")
		demo._after_edit(demo.state.undo(),"history");await settle(demo)
		checks["undo_"+kind]=demo.state.houses==base.houses and demo.state.roads==base.roads and demo.state.waters==base.waters and cold_services(demo)
	var result:={"ok":checks.values().all(func(v):return v),"checks":checks,"operations":operations}
	FileAccess.open(out+"/local_town_edits.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));return result

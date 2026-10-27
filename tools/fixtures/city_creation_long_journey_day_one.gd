extends RefCounted
const Vignettes=preload("res://scripts/world/city_creation_vignettes.gd")
const Builder=preload("res://tools/fixtures/city_creation_vignette_fixture.gd")
static func run(c:RefCounted)->void:
	c.stage("空白河湾实际落笔");c.demo.select_tool(0);await c.ground(Vector2(-30,-22));await c.settle()
	c.check(c.demo.state.houses.size()==1,"native_first_house")
	if c.demo.state.houses.is_empty():return
	var first:Dictionary=c.demo.state.houses[0];var origin:=Vector2(first.origin[0],first.origin[1])
	for offset:Vector2 in [Vector2(4,0),Vector2(8,0),Vector2(0,5),Vector2(4,5),Vector2(8,5)]:await c.edit(c.demo.state.add_house(origin+offset))
	for entry:Array in [["h1","bakery"],["h2","workshop"],["h4","garden_cafe"]]:await c.edit(c.demo.state.set_house_role(entry[0],entry[1]))
	var x:=origin.x-3.
	await c.edit(c.demo.state.add_road([Vector2(x,origin.y+1.55),Vector2(x,origin.y+6.55)] as Array[Vector2]),"road")
	for z:float in [origin.y+1.55,origin.y+6.55]:await c.edit(c.demo.state.add_road([Vector2(x,z),Vector2(origin.x+8,z)] as Array[Vector2]),"road")
	c.check(c.demo.state.houses.all(func(h):return c.demo.life.house_connected(str(h.id))),"six_houses_on_actual_network")
	c.stage("挖池塘瞬间首炉");c.demo.life.site_wishes.arm("h1","water");c.demo.tactile_dock._nature_mode(1)
	var at:=origin+Vector2(-3,-2);var screen:Vector2=c.demo.camera.unproject_position(Vector3(at.x,c.demo.state.ground_height(at),at.y))
	await c.mouse(screen,true);var released:=Time.get_ticks_usec();await c.mouse(screen,false)
	var latency:float=(Time.get_ticks_usec()-released)/1000.
	c.check(int(c.demo.state.bakery_status("h1").produced)>=2 and c.demo.state.wish_rewards.get("h1",{}).get("water",0)==2 and latency<500.,"native_pond_immediate_first_bread")
	c.details.first_bread_latency_ms=latency;await c.settle();await c.capture("首炉")
	c.stage("真实林间小目标");var quest:Node=c.demo.get_meta("vignette_journey")
	await c.postpone();c.demo.select_tool(0);await c.settle();quest.poll();await c.settle();quest.poll();await c.settle()
	if quest.paper.get_meta("letter_folded",true):await c.click(quest.paper.find_child("FoldWoodlandLetter",true,false))
	for i in range(5):
		if c.demo.state.harmony_journey.get("active_vignette",{}).get("id","")==Vignettes.IDS[3]:break
		await c.click(quest.paper.find_child("RefreshVignette",true,false))
	c.check(c.demo.state.harmony_journey.get("active_vignette",{}).get("id","")==Vignettes.IDS[3],"native_refresh_offers_local_workshop")
	var results:Array=Builder.construct(c.demo.state)
	for result:Dictionary in results:c.demo._after_edit(result,"plant")
	await c.settle();quest.poll();c.demo.get_meta("inspiration_draft").poll()
	c.check(int(c.demo.state.harmony_journey.get("completed_vignettes",{}).get(Vignettes.IDS[3],0))==1,"actual_forest_vignette_completed")
	c.stage("三选一永久手札");var draft:Node=c.demo.get_meta("inspiration_draft")
	for i in range(6):await c.tree.process_frame
	c.check(draft.paper.visible and draft.buttons.size()==3,"earned_three_leaves")
	if draft.buttons.size()==3:
		var id:String="warm_hearth_ballad" if draft.buttons.has("warm_hearth_ballad") else str(draft.buttons.keys()[0]);await c.click(draft.buttons[id]);c.details.selected=id
		c.check(id in c.demo.state.harmony_journey.traditions,"native_leaf_choice_saved")
	c.demo.select_tool(4);await c.capture("留住首日回响")
	var saved:Dictionary=await c.save_work("第一晚的林间河湾")
	if not saved.get("ok",false):return
	var record:={"id":c.demo.gallery.last_saved_id,"world":c.demo.state.snapshot(),"total_xp":c.total_xp(),"process_id":OS.get_process_id(),"phase":"day1","selected":c.details.get("selected","")}
	FileAccess.open(c.out+"/handoff.json",FileAccess.WRITE).store_string(JSON.stringify(record,"\t",true,true))
	c.details.saved_id=record.id;c.details.process_id=record.process_id;c.details.houses=c.demo.state.houses.size()
	c.check(c.demo.state.save_city(c.out+"/第一夜原子存档.json").ok,"isolated_atomic_save")

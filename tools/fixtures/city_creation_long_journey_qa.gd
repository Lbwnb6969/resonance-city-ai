extends RefCounted
const Audit=preload("res://tools/fixtures/city_creation_render_safety_audit.gd")
const Probe=preload("res://tools/fixtures/city_creation_audio_probe.gd")
static func run(c:RefCounted)->void:
	c.stage("127屋四时代昼夕夜与近景总检")
	var source:="res://数据/四库共鸣交响大城样例.json";var original:=FileAccess.get_file_as_bytes(source)
	await c.demo.gallery.open_example("example_flagship");await c.settle();c.demo.life.set_process(false)
	c.check(c.demo.state.houses.size()==127,"flagship_127")
	var audit:=Audit.multimeshes(c.demo);c.details.gpu=audit;c.check(audit.invalid.is_empty(),"valid_gpu_slots")
	c.demo.select_tool(4);c.look(Vector2(0,2),88.)
	for phase in range(3):
		c.demo._set_light_phase(phase);await c.tree.process_frame;await c.capture("旗舰_"+str(phase))
	var selected:Dictionary={}
	for house:Dictionary in c.demo.state.houses:
		if house.has("signature") or house.cells.size()>6:continue
		var count:=0
		for neighbor:Dictionary in c.demo.state.houses:
			if neighbor.id!=house.id and Vector2(house.origin[0],house.origin[1]).distance_to(Vector2(neighbor.origin[0],neighbor.origin[1]))<6.:count+=1
		if count>=2:selected=house;break
	c.check(not selected.is_empty(),"real_neighbor_selection")
	if not selected.is_empty():
		for level in range(1,4):
			if c.demo.state.validate_add_cell(str(selected.id),0,0,level).ok:await c.edit(c.demo.state.add_cell(str(selected.id),0,0,level))
		c.demo._set_light_phase(0);c.look(Vector2(selected.origin[0],selected.origin[1]),28.);c.demo.spatial_popover.open_for_house(str(selected.id));await c.tree.create_timer(.35).timeout
		var ring:RefCounted=c.demo.spatial_popover.ring;var center:Rect2=ring.house_rect
		c.check(ring.placement_ok and ring.controls().all(func(item):return not item.get_global_rect().intersects(center)),"roof_hollow")
		var neighbors:Array=[]
		for house:Dictionary in c.demo.state.houses:
			if house.id!=selected.id and Vector2(house.origin[0],house.origin[1]).distance_to(Vector2(selected.origin[0],selected.origin[1]))<6.:neighbors.append(ring.project(c.demo.spatial_popover,house))
		c.check(neighbors.all(func(rect):return not ring.bottom.get_global_rect().intersects(rect)),"status_capsule_clears_neighbors")
		for dock:Control in [c.demo.tactile_dock.bubble_rows,c.demo.tactile_dock.nature_row]:
			if dock.is_visible_in_tree():c.check(ring.controls().all(func(item):return not item.get_global_rect().intersects(dock.get_global_rect())),"roof_clears_"+str(dock.name))
		await c.capture("中空罗盘邻屋留白");c.demo.spatial_popover.close()
		var companion:String=""
		for house:Dictionary in c.demo.state.houses:
			if house.id!=selected.id and Vector2(house.origin[0],house.origin[1]).distance_to(Vector2(selected.origin[0],selected.origin[1]))<6.:companion=str(house.id);break
		if not companion.is_empty():
			var juice:Node=c.demo.get_meta("juice_feedback");juice.enqueue({"kind":"qa_visual","source":selected.id,"members":[selected.id,companion],"label":"街坊回响"})
			var deadline:=Time.get_ticks_msec()+2000;var captured:=false
			while Time.get_ticks_msec()<deadline:
				await c.tree.process_frame
				if juice.arcs.slots.any(func(row):return row.node.visible and juice._clock()-float(row.clock)>.3):await c.capture("近景金弧");captured=true;break
			c.check(captured,"widened_lit_gold_arc_visible")
	c.demo.camera_rig.toggle(c.demo);c.demo.ui_layer.hide();c.demo.camera.fov=48.
	var at:=Vector2(-12,1);c.demo.focus=Vector3(at.x,c.demo.state.street_height(at)+1.2,at.y)
	for phase in range(3):
		c.demo._set_light_phase(phase)
		for angle:float in [5.,10.,15.]:
			c.demo.pitch=deg_to_rad(angle);c.demo.yaw=.62;c.demo._update_camera();await c.capture("漫步_%d_%02d"%[phase,int(angle)])
	var saved:Dictionary=await c.demo.gallery._capture("低视角漫步也能收藏","stroll_qa")
	c.check(saved.ok and c.demo.gallery.library.read(str(saved.id)).ok,"stroll_work_saved")
	c.demo.ui_layer.show();c.demo.camera_rig.toggle(c.demo);c.look(Vector2(0,2),88.)
	c.details.audio=await Probe.record(c.out+"/qa_旗舰实录.wav",3.2);c.check(c.details.audio.ok,"unclipped_qa_audio")
	c.check(FileAccess.get_file_as_bytes(source)==original,"packaged_flagship_untouched")
	c.details.process_id=OS.get_process_id()

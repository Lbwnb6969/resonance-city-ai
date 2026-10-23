extends RefCounted
const Stamp=preload("res://scripts/ui/city_creation_postcard_stamp.gd")
static func clear(city,at:Vector2)->bool:
	for house:Dictionary in city.houses:
		for cell:Dictionary in house.cells:
			if int(cell.level)!=0:continue
			var center:=Vector2(house.origin[0]+cell.x*1.8,house.origin[1]+cell.z*1.8)
			if absf(center.x-at.x)<1.35 and absf(center.y-at.y)<1.35:return false
	return true
static func street_view(city,at:Vector2)->Vector2:
	for radius:float in [4.2,6.2,8.2]:
		for i in range(24):
			var candidate:=at+Vector2.from_angle(TAU*i/24.)*radius
			if clear(city,candidate):return candidate
	return at
static func capture(demo,out:String)->Dictionary:
	var tree:SceneTree=demo.get_tree()
	for i in range(12):await tree.process_frame
	demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	var world:Dictionary=demo.state.snapshot()
	var representatives:Dictionary={}
	for house:Dictionary in demo.state.houses:
		var era:String=demo.state.house_era(house)
		if house.has("signature"):continue
		if not representatives.has(era) or house.cells.size()>representatives[era].cells.size():representatives[era]=house
	var images:=0;var cameras:Array=[]
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size;demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
		demo.focus=Vector3.ZERO;demo.zoom=94.;demo.pitch=.83;demo.yaw=.4;demo._update_camera()
		for phase:int in range(3):
			demo._set_light_phase(phase)
			for i in range(5):await tree.process_frame
			var image:Image=await Stamp.scene_frame(demo);image.save_png(out+"/final_%d_overview_%d.png"%[size.x,phase]);images+=1
		for era:String in representatives:
			var house:Dictionary=representatives[era];var at:=Vector2(house.origin[0],house.origin[1])
			demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
			demo.focus=Vector3(at.x,2.8,at.y);demo.zoom=10.;demo.pitch=.68;demo._update_camera()
			for phase:int in range(3):
				demo._set_light_phase(phase)
				for i in range(5):await tree.process_frame
				var image:Image=await Stamp.scene_frame(demo);image.save_png(out+"/final_%d_%s_%d.png"%[size.x,era,phase]);images+=1
			demo.camera_rig.strolling=true;demo.camera.projection=Camera3D.PROJECTION_PERSPECTIVE;demo.camera.fov=48.
			var camera_at:=street_view(demo.state,at);cameras.append(clear(demo.state,camera_at))
			demo.focus=Vector3(camera_at.x,demo.state.street_height(camera_at)+1.2,camera_at.y);demo.yaw=atan2(camera_at.x-at.x,camera_at.y-at.y);demo._set_light_phase(1)
			for angle:float in [5.,10.,15.]:
				demo.pitch=deg_to_rad(angle);demo._update_camera()
				for i in range(5):await tree.process_frame
				var image:Image=await Stamp.scene_frame(demo);image.save_png(out+"/final_%d_%s_low%02d.png"%[size.x,era,int(angle)]);images+=1
		demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
	demo.focus=Vector3.ZERO;demo.zoom=94.;demo.pitch=.83;demo._set_light_phase(0);demo._update_camera()
	if demo.state.snapshot()!=world:
		FileAccess.open(out+"/views_before.json",FileAccess.WRITE).store_string(JSON.stringify(world,"\t",true,true))
		FileAccess.open(out+"/views_after.json",FileAccess.WRITE).store_string(JSON.stringify(demo.state.snapshot(),"\t",true,true))
	return {"ok":demo.state.snapshot()==world and representatives.size()==4 and cameras.all(func(v):return v),"clear_camera_positions":cameras,"images":images,"eras":representatives.keys()}

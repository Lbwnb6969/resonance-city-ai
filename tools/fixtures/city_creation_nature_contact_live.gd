extends RefCounted
const Live=preload("res://tools/fixtures/city_creation_alpine_live.gd")
static func capture(demo, out: String) -> Dictionary:
	var source:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/高地河湾样例.json"))
	demo._after_edit(demo.state.restore(source),"history");await Live.settle(demo)
	demo.life.set_process(false);demo.get_meta("inspiration_draft").poll();demo.get_meta("vignette_journey").poll()
	var saved:Dictionary=demo.state.snapshot();var checks:Dictionary={}
	var plinth:Node3D=demo.town.house_roots.h7
	var shader:Shader=preload("res://scripts/visual/shaders/creation_plinth_contact.gdshader")
	var plinth_count:=0
	for mesh:MeshInstance3D in plinth.find_children("*","MeshInstance3D",true,false):
		if mesh.material_override is ShaderMaterial and mesh.material_override.shader==shader:plinth_count+=mesh.mesh.surface_get_array_len(0)
	checks.actual_plinth_contact=plinth_count>0
	var stairs:Node3D=demo.town.road_roots.r7
	checks.actual_stair_contact=not stairs.find_children("StairContactSkirt","MeshInstance3D",true,false).is_empty()
	var gap:=0.;var finite:=true;var vertices:=0
	for mesh:MeshInstance3D in demo.town.find_children("*","MeshInstance3D",true,false):
		if not mesh.material_override is ShaderMaterial or mesh.material_override.shader!=shader:continue
		for point:Vector3 in mesh.mesh.surface_get_arrays(0)[Mesh.ARRAY_VERTEX]:
			var p:Vector3=mesh.global_transform*point;finite=finite and p.is_finite();vertices+=1
			gap=maxf(gap,absf(p.y-demo.state.ground_height(Vector2(p.x,p.z))-.012))
	checks.published_ground_contact=finite and gap<.00002 and vertices>0
	demo.ui_layer.hide();demo.camera_rig.strolling=false;demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
	var images:=0;var tree:SceneTree=demo.get_tree();demo.yaw=.85
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		tree.root.size=size
		for subject:String in ["plinth","stairs"]:
			demo.focus=Vector3(-14.1,1.3,0) if subject=="plinth" else Vector3(-13.,.75,1.55);demo.zoom=8.
			for phase in range(3):
				demo.pitch=.48;demo._set_light_phase(phase);demo._update_camera()
				if await Live.shot(demo,out,"contact_%s_%d_phase%d"%[subject,size.x,phase]):images+=1
			for angle:int in [5,10,15]:
				demo.pitch=deg_to_rad(angle);demo._set_light_phase(0);demo._update_camera()
				if await Live.shot(demo,out,"contact_%s_%d_low%d"%[subject,size.x,angle]):images+=1
	checks.images=images==24;checks.readonly=demo.state.snapshot()==saved
	var result:={"ok":checks.values().all(func(v):return v),"checks":checks,"contact_vertices":vertices,"gap_error":gap}
	FileAccess.open(out+"/nature_contact.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));return result

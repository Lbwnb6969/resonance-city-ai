extends "res://tools/check_creation_three_road_modes_live.gd"
const Fixture=preload("res://tests/test_city_creation_landmark_vegetation.gd")
const Plan=preload("res://scripts/world/city_creation_placed_landmarks.gd")
var tool
func plant_count(at:Vector2)->int:
	var count:=0
	for node:MultiMeshInstance3D in demo.town.vegetation_layer.find_children("*","MultiMeshInstance3D",true,false):
		for i in range(node.multimesh.instance_count):
			var p:Vector3=(node.global_transform*node.multimesh.get_instance_transform(i)).origin
			if Vector2(p.x,p.z).distance_to(at)<.05:count+=1
	return count
func plant_at(id:String)->Vector2:
	var p:Dictionary=demo.state.plants.filter(func(row):return row.id==id)[0];return Vector2(p.position[0],p.position[1])
func signatures()->Dictionary:
	var result:Dictionary={}
	for layer:Node3D in [demo.town.vegetation_layer,demo.town.meadow]:
		for mesh:MultiMeshInstance3D in layer.find_children("*","MultiMeshInstance3D",true,false):
			var records:Array=[]
			for i in range(mesh.multimesh.instance_count):records.append(mesh.multimesh.get_instance_transform(i))
			result[str(layer.get_path_to(mesh))]=hash(records)
	return result
func edit(result:Dictionary)->void:
	check(result.ok,"actual public landmark transaction");demo._after_edit(result,"terrace");await settle();quiet();demo.life.set_process(false)
func hidden_proof(at:Vector2,door:Vector2)->void:
	check(not demo.town.vegetation_visibility.p1 and not demo.town.vegetation_visibility.p2 and demo.town.vegetation_visibility.p3,"published visibility hides only actual base and entrance plants")
	check(plant_count(plant_at("p1"))==0 and plant_count(plant_at("p2"))==0 and plant_count(plant_at("p3"))>0,"actual tree/shrub MultiMeshes remove covered instances and retain far tree")
	for p:Vector2 in [at,door]:
		var block:=Vector2i((p/8.).floor());check(demo.town.meadow.query_masks.has(block) and not demo.town.meadow.query_masks[block].visible(p,.2),"published meadow mask excludes actual base and entrance")
	check(demo.state._region_plant_visibility==demo.town.vegetation_visibility and demo.state._region_visibility_revision==demo.state.revision,"ecology and spatial consumers receive same published visibility")
	await physics_frame
	var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(at.x,8.,at.y),Vector3(at.x,-2.,at.y),1))
	check(not hit.is_empty() and hit.collider.has_meta("landmark_id"),"actual landmark remains physically pickable through hidden foliage")
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not OUT.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(OUT):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60;var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var f:=Fixture.fixture(PI*.5);check(f.ok,"authored planted site fixture");await show(f.city,f.at,"地标植物退让");quiet();demo.life.set_process(false)
	demo.focus=Vector3(-27,.5,-19);demo.zoom=20.;demo.pitch=.85;demo.yaw=.3;demo._update_camera();await settle();tool=demo.get_meta("ground_landmark_tool")
	var before:Dictionary=demo.state.snapshot();var initial:=signatures();var door:=Plan.entrance({"position":[f.at.x,f.at.y],"blueprint":"riverbank","yaw":PI*.5})
	check(plant_count(plant_at("p1"))>0 and plant_count(plant_at("p2"))>0,"actual authored trees and shrub exist before coverage")
	tool.begin("riverbank");await motion(f.at);await key(KEY_E);await motion(f.at);await settle()
	check(tool.candidate.ok and tool.candidate.affected_plants==["p1","p2"] and tool.impact_label.visible and tool.impact_label.text.contains("2 株"),"native rotated preview names affected author plants")
	check(demo.state.snapshot()==before and signatures()==initial,"preview preserves authors and all published plant/meadow instances");await capture("affected_preview")
	await key(KEY_ESCAPE);await settle();check(demo.state.snapshot()==before and signatures()==initial,"native cancel leaves actual plants intact")
	tool.begin("riverbank");await motion(f.at);await key(KEY_E);await click_world(f.at);await settle();quiet();demo.life.set_process(false)
	check(demo.state.placed_landmarks.size()==1 and demo.state.plants==before.plants,"native place retains all plant identities positions scales and seeds")
	await hidden_proof(f.at,door);await capture("covered_rotated")
	var covered:=signatures();var saved:Dictionary=demo.state.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok,"ordinary cold restore including hidden plants")
	await show(cold,f.at,"隐退植物冷读");quiet();demo.life.set_process(false);check(signatures()==covered,"all actual tree and meadow transforms cold-equal incremental publication");await hidden_proof(f.at,door)
	await edit(Plan.place(demo.state,"riverbank",f.at+Vector2(0,9),PI*.5,"lm1"))
	check(plant_count(plant_at("p1"))>0 and plant_count(plant_at("p2"))>0 and demo.state.plants==before.plants,"moving landmark restores original actual tree and shrub without replacing records")
	var moved:=signatures();await key(KEY_Z,true);await settle();quiet();check(signatures()==covered,"native Undo restores all covered vegetation/meadow transforms")
	await key(KEY_Y,true);await settle();quiet();check(signatures()==moved,"native Redo restores exact moved landmark masks")
	await edit(Plan.remove(demo.state,"lm1"));check(signatures()==initial and demo.state.plants==before.plants,"recycling restores complete original vegetation and meadow transforms")
	await physics_frame;var hit:Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(PhysicsRayQueryParameters3D.create(Vector3(f.at.x,8.,f.at.y),Vector3(f.at.x,-2.,f.at.y),1))
	check(hit.is_empty(),"recycled landmark leaves no stale body collider");await capture("restored_plants")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("LANDMARK_PLANTS_LIVE ",JSON.stringify(report));demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

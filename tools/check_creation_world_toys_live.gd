extends SceneTree
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/万物可拨_2026-10-21"
var demo
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func settle()->void:
	var until:=Time.get_ticks_msec()+30000
	while (demo.edit_pending() or demo._edit_ui_pending or demo.music._loading) and Time.get_ticks_msec()<until:await process_frame
	for i:int in range(15):await process_frame
func hover(at:Vector2)->void:
	var point:Vector2=demo.camera.unproject_position(Vector3(at.x,0.,at.y))
	var move:=InputEventMouseMotion.new();move.position=point;move.global_position=point;root.push_input(move);await process_frame
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=120
	demo=Scene.instantiate();demo.persistence=false;demo.start_empty=true;demo.collection_directory=OUT+"/隔离作品";root.add_child(demo);demo.life.set_process(false)
	for at:Vector2 in [Vector2(-28,-20),Vector2(-24.4,-20),Vector2(-20.8,-20)]:check(demo.state.add_house(at).ok,"choir home")
	check(demo.state.place_plant(Vector2(-26,-14),"golden_tree").ok,"golden crown toy fixture")
	check(demo.state.add_water([Vector2(-18,-14)] as Array[Vector2],3.2,"pond").ok,"actual pond toy fixture")
	demo._after_edit({"ok":true,"message":"隔离八音盒"},"history");await settle();demo.life.set_process(false)
	demo.focus=Vector3(-23,.7,-17);demo.zoom=24.;demo.pitch=.95;demo._update_camera();demo.select_tool(4)
	var authored:Dictionary=demo.state.snapshot();var clock:float=demo.music._playback_clock()
	for kind:String in ["tree","water"]:
		await hover(Vector2(-26,-14) if kind=="tree" else Vector2(-18,-14))
		var until:=Time.get_ticks_msec()+1500
		while str(demo.music.get_meta("world_pluck",{}).get("kind",""))!=kind and Time.get_ticks_msec()<until:await process_frame
		var note:Dictionary=demo.music.get_meta("world_pluck",{})
		check(note.get("kind","")==kind,"actual pointer hover plays "+kind+" through the finger queue")
		if note.has("clock"):check(fposmod(float(note.clock),.1875)<=demo.music.AttentionMixer.WINDOW+.001,"world note uses the sixteenth-note grid")
		for i:int in range(10):await process_frame
		if kind=="tree":
			var responded:=false
			for material:Material in demo.town.foliage._materials.values():
				if material is ShaderMaterial:responded=responded or Vector2(material.get_shader_parameter("touch_at")).distance_to(Vector2(-26,-14))<.1
			check(responded,"shared leaf material receives the actual touched crown")
		else:check(float(demo.town.water_material.get_shader_parameter("travel_ripple_strength"))>0.,"actual pond material displays radial touch waves")
		await RenderingServer.frame_post_draw;root.get_texture().get_image().save_png(OUT+"/"+kind+".png")
	check(demo.state.snapshot()==authored,"browsing trees and water never alters authored city or ledgers")
	check(demo.music._playback_clock()>clock and demo.music._effects.size()==4 and demo.music._players.size()==12,"world play preserves transport and fixed voice pool")
	var result:Dictionary={"checks":checks,"failures":failures,"ok":failures.is_empty(),"last_note":demo.music.get_meta("world_pluck",{})}
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("WORLD_TOYS_LIVE ",JSON.stringify(result))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)

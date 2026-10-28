extends "res://tools/check_creation_terrain_chunk_seams_live.gd"

func choose(field:String,index:int)->void:
	await ui_click(demo.tactile_dock.road_palette.heads[field])
	var option:Button=demo.tactile_dock.button_for(field,index)
	check(option!=null and option.is_visible_in_tree(),"real choice visible "+field+str(index))
	await ui_click(option)

func wheel(at:Vector2,index:int)->void:
	for down:bool in [true,false]:
		var event:=InputEventMouseButton.new();event.device=92;event.position=at;event.global_position=at;event.pressed=down;event.button_index=index;root.push_input(event);await process_frame

func run()->void:
	OUT="res://验证记录/M77/live"
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):OUT=arg.trim_prefix("--out-dir=")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));root.size=Vector2i(1440,900);Engine.max_fps=60
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle();isolate_input()
	var voices:=pool();road_tool=demo.get_meta("road_tool")
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await new_city();await settle()
		var palette=demo.tactile_dock.road_palette
		check(palette.row.get_child_count()==4 and not palette.menu.visible,"one row with four current controls "+str(size.x))
		for field:String in ["RoadStyle","RoadDecoration"]:
			for index:int in range(palette.source(field).item_count):
				await choose(field,index)
				check(palette.source(field).selected==index and not palette.menu.visible,"native selection updates single source "+field+str(index))
		await choose("RoadStyle",5);await choose("RoadSize",2)
		var width_before:float=demo.zoom
		await wheel(palette.heads.RoadSize.get_global_rect().get_center(),MOUSE_BUTTON_WHEEL_UP)
		check(demo.road_size==2 and demo.zoom==width_before,"width wheel changes width without zoom")
		await wheel(Vector2(800,150),MOUSE_BUTTON_WHEEL_UP)
		check(demo.zoom<width_before,"world wheel still zooms")
		await key(KEY_3)
		var a:=Vector2(-29,-19);var c:=Vector2(-29,-11);var b:=Vector2(-18,-11)
		await click_world(a);await click_world(c);await motion(b)
		var anchors:Array=[road_tool.start,road_tool.control,road_tool.phase]
		var old_width:float=road_tool.valid.width
		await key(KEY_BRACKETRIGHT)
		check(road_tool.active() and [road_tool.start,road_tool.control,road_tool.phase]==anchors and road_tool.valid.width>old_width,"active curve width rebuild keeps anchors")
		var rect:Rect2=demo.tactile_dock.bubble_rows.get_global_rect()
		check(Rect2(Vector2.ZERO,Vector2(size)).encloses(rect) and not rect.has_point(screen(a)) and not rect.has_point(screen(c)),"compact row fits and curve controls are visible")
		await capture("curve_width_"+str(size.x))
		await key(KEY_TAB);await key(KEY_TAB)
		check(road_tool.effective==2 and road_tool.control==anchors[1],"Tab preserves curve control")
		await motion(b);var preview:Array=demo.road_preview.duplicate();var width:float=road_tool.valid.width
		await click_world(b);await settle();quiet()
		check(demo.state.roads.size()==1 and exact(preview) and demo.state.roads[0].width==width,"curve commits exact visible path and width")
		var saved:Dictionary=demo.state.snapshot()
		await key(KEY_Z,true);await settle();check(demo.state.roads.is_empty(),"native Undo")
		await key(KEY_Y,true);await settle();check(demo.state.roads==saved.roads,"native Redo")
		var cold:=State.new();var path:=OUT+"/city_"+str(size.x)+".json"
		check(demo.state.save_city(path).ok and cold.load_city(path).ok and cold.roads==saved.roads,"disk cold load retains roads")
		await click_world(Vector2(-30,-22));await button(b,true,MOUSE_BUTTON_RIGHT);await button(b,false,MOUSE_BUTTON_RIGHT)
		check(not road_tool.active() and not demo.orbiting and demo.state.roads==saved.roads,"right cancel does not submit or orbit")
		var focus:=LineEdit.new();demo.ui_layer.add_child(focus);focus.position=Vector2(20,250);focus.grab_focus();var previous:int=demo.road_size
		await key(KEY_BRACKETLEFT);check(demo.road_size==previous,"text focus keeps bracket input");focus.release_focus();focus.queue_free()
		await ui_click(palette.heads.More);await capture("more_"+str(size.x));await ui_click(palette.heads.More)
	var frames:Array[float]=[];var last:=Time.get_ticks_usec()
	for ignored in range(60):await process_frame;var now:=Time.get_ticks_usec();frames.append((now-last)/1000.);last=now
	frames.sort();facts={"frames":{"p95_ms":frames[56],"max_ms":frames[-1]},"master":await Probe.record(OUT+"/Master.wav",3.2)}
	check(facts.master.ok and pool()==voices,"actual Master zero clips and same audio pool")
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save unchanged")
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"checks":checks,"ok":failures.is_empty(),"failures":failures,"facts":facts},"\t"))
	print("COMPACT_ROADS_LIVE ",JSON.stringify({"checks":checks,"ok":failures.is_empty(),"failures":failures,"facts":facts}))
	demo.queue_free();await process_frame;quit(0 if failures.is_empty() else 1)


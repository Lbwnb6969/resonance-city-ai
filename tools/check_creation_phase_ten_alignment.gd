extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Meadow=preload("res://scripts/visual/city_creation_meadow.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
const Fixture=preload("res://tools/fixtures/city_creation_botanical_fixture.gd")
const Quality=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
const Scene=preload("res://scenes/city_creation.tscn")
const OUT="res://验证记录/植物宫花海_2026-10-18"
var checks: Array=[]
var failures: Array[String]=[]
var facts: Dictionary={}
var demo

func _initialize()->void:_run.call_deferred()
func _check(ok: bool,label: String)->void:
	checks.append({"ok":ok,"label":label})
	if not ok:failures.append(label);push_error(label)
func _wait()->void:
	var deadline:=Time.get_ticks_msec()+45000
	while (demo.edit_pending() or demo._edit_ui_pending) and Time.get_ticks_msec()<deadline:await process_frame
	await physics_frame;await process_frame
func _camera(at: Vector2)->void:
	demo.focus=Vector3(at.x,.7,at.y);demo.zoom=20;demo.yaw=.4;demo.pitch=.85;demo._update_camera();demo.town.clear_preview()
func _capture(name_value: String)->void:
	await process_frame;await RenderingServer.frame_post_draw
	root.get_texture().get_image().save_png(OUT+"/"+name_value+".png")
func _extras(meadow: Node3D)->int:
	var count:=0
	for amount: int in meadow.palace_flower_counts.values():count+=amount
	return count
func _flowers(meadow: Node3D)->int:
	var count:=0
	for block: Node3D in meadow.blocks.values():
		var batch:=block.get_node_or_null("Meadow_flower") as MultiMeshInstance3D
		if batch!=null:count+=batch.multimesh.instance_count
	return count

func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var fixture:=Fixture.build(self);var city: RefCounted=fixture.city;var life: Node3D=fixture.life
	_check(fixture.tea and int(city.life_progress.tea_parties)==8 and city.Signatures.planted_count(city)==120,"real tea service and public planting/eraser APIs reach exactly eight tea tables and one hundred twenty player plants")
	_check(city.signature_unlocks.has("botanical_palace"),"actual eight-table and one-hundred-twenty-plant city earns the palace")
	var source: Dictionary=city.snapshot()
	for pair: Vector2i in [Vector2i(7,120),Vector2i(8,119),Vector2i(8,120)]:
		var boundary: Dictionary=fixture.before_eighth.duplicate(true) if pair.x==7 else source.duplicate(true)
		boundary.signature_unlocks.erase("botanical_palace")
		var kept: Array=[];var planted:=0
		for plant: Dictionary in boundary.plants:
			if plant.source=="player":
				planted+=1
				if planted>pair.y:continue
			kept.append(plant)
		boundary.plants=kept
		var loaded:=State.new();var restored: Dictionary=loaded.restore(boundary)
		print("PALACE_BOUNDARY ",JSON.stringify({"counts":pair,"restore":restored,"unlocks":loaded.signature_unlocks}))
		loaded.Signatures.refresh(loaded)
		_check(restored.ok and loaded.signature_unlocks.has("botanical_palace")==bool(pair.x>=8 and pair.y>=120),"validated milestone boundary "+str(pair)+" requires both counts and excludes seed plants")
	var palace: Dictionary=city.place_signature("botanical_palace",Vector2(-23,0))
	_check(palace.ok and city.signature_bonuses().afterglow_seconds==180.,"earned palace supplies its actual global three-minute afterglow")
	if not palace.ok:life.free();await _finish(personal);return
	life._sync();var before: int=city.life_progress.tea_parties
	_check(Quality.until(life,func():return int(city.life_progress.tea_parties)>before,700.),"ordinary connected cafe completes another actual tea gathering with palace active")
	var extended:=false
	for id: String in city.resonance_afterglow:
		if city.afterglow_remaining(id)>179.:extended=true
	_check(extended,"actual cafe guests receive the full one-hundred-eighty-second afterglow")
	var loaded:=State.new();var saved: Dictionary=city.snapshot()
	_check(loaded.restore(JSON.parse_string(JSON.stringify(saved))).ok,"eight-table earned palace and live service ledger restore through JSON")
	var invalid: Dictionary=saved.duplicate(true);invalid.life_progress.tea_parties=7
	_check(not loaded.restore(invalid).ok,"saved palace rights reject missing eight-table history")
	var meadow:=Meadow.new();meadow.setup(city);meadow.record_only=true
	var blocks: Array[Vector2i]=[]
	for x in range(-4,-1):
		for z in range(-1,2):blocks.append(Vector2i(x,z))
	meadow.rebuild({},blocks)
	var extras:=0;var expected:=0;var valid:=true;var unboosted:=0
	var center:=Vector2(-23,1.8)
	for block: Vector2i in meadow.prepared_blocks:
		var flowers: Array=meadow.prepared_blocks[block].flower
		var extra: int=meadow.palace_flower_counts[block]
		var original: int=flowers.size()-extra
		var mask:=Mask.new();mask.setup(city,block)
		for i in range(flowers.size()):
			var transform: Transform3D=flowers[i][0]
			var at:=Vector2(block)*8.+Vector2(transform.origin.x,transform.origin.z)
			if i<original:
				if at.distance_to(center)<=8.:expected+=1
				else:unboosted+=1
			else:valid=valid and mask.visible(at,.25) and absf(transform.origin.y-city.ground_height(at)-.014)<.001
		extras+=extra
	_check(extras>0 and extras==expected and unboosted>0,"every existing flower cluster inside eight metres receives exactly one companion while distant flowers retain their count")
	_check(valid,"all added flowers clear current house road and water masks and follow actual ground height")
	var fingerprint: Dictionary=meadow.fingerprints.duplicate();meadow.rebuild({},blocks)
	_check(meadow.last_changed==0 and meadow.fingerprints==fingerprint,"unchanged palace does not rebuild or reshuffle meadow blocks")
	city.remove_house(palace.house_id);meadow.rebuild({},[])
	_check(_extras(meadow)==0 and meadow.last_changed>0,"removal without caller dirty blocks invalidates and clears the whole old flower halo")
	city.undo();meadow.rebuild({},[])
	_check(_extras(meadow)==extras,"construction undo restores deterministic paired flowers")
	facts.cpu_flowers={"extra":extras,"expected":expected,"distant_original":unboosted};meadow.free();life.free()
	if "--live" not in OS.get_cmdline_user_args():await _finish(personal);return
	root.size=Vector2i(1440,900);Engine.max_fps=180;DisplayServer.window_set_vsync_mode(DisplayServer.VSYNC_DISABLED)
	city.remove_house(palace.house_id)
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/isolated_"+str(Time.get_ticks_usec());root.add_child(demo);demo.life.set_process(false)
	_check(demo.state.restore(city.snapshot()).ok,"production town restores earned palace right before placement")
	demo._after_edit({"ok":true,"message":"palace fixture"},"history");await _wait()
	demo.ui_layer.visible=false;_camera(Vector2(-23,1.8))
	var baseline:=_flowers(demo.town.meadow)
	await _capture("01_meadow_before_palace")
	var untouched: Node3D=demo.town.meadow.blocks[Vector2i(3,3)];var untouched_id:=untouched.get_instance_id()
	var built: Dictionary=demo.state.place_signature("botanical_palace",Vector2(-23,0));demo._after_edit(built,"house");await _wait()
	var boosted:=_extras(demo.town.meadow)
	var actual:=_flowers(demo.town.meadow)
	_check(built.ok and boosted>0 and actual>baseline and demo.town.meadow.palace_centers==[Vector2(-23,1.8)],"budget publication uploads additional real flower MultiMesh instances around the placed palace")
	var palace_root: Node3D=demo.town.buildings.get_node(str(built.house_id))
	var metadata: Dictionary=palace_root.get_meta("botanical_palace",{})
	_check(metadata.get("vaults",0)==3 and metadata.get("pick_cells",0)>=8 and metadata.get("plant_beds",0)==11 and metadata.get("fountain",false),"actual botanical palace publishes three curved glass vaults with retained picked cells fountain and rare plants")
	var ridge_picks:=true
	for ridge: Array in [[-1.54,2.72],[0.,3.15],[1.54,2.72]]:
		var at:=Vector2(-23.+ridge[0],1.8)
		var query:=PhysicsRayQueryParameters3D.create(Vector3(at.x,10,at.y),Vector3(at.x,0,at.y),1)
		var hit: Dictionary=demo.get_world_3d().direct_space_state.intersect_ray(query)
		ridge_picks=ridge_picks and not hit.is_empty() and hit.collider.get_meta("house_id","")==built.house_id and absf(hit.position.y-(ridge[1]+.19))<.01
	_check(ridge_picks,"real physics rays pick all three distinct glass ridges at their authored heights")
	_check(demo.town.meadow.blocks[Vector2i(3,3)].get_instance_id()==untouched_id,"palace edit preserves distant meadow GPU batch identity")
	await _capture("02_palace_double_wildflowers")
	while demo.light_phase!=2:demo._toggle_light()
	var glazing: MeshInstance3D=palace_root.get_node("CrystalBotanicalVaults/BotanicalVaultGlass")
	_check(glazing.material_override==demo.town.conservatory.palace_glass_material and glazing.material_override.get_shader_parameter("evening")==1. and glazing.material_override.get_shader_parameter("night_energy")==4.,"actual published glazing follows its live emerald night material owner")
	await _capture("03_warm_glass_palace_at_night")
	var frames: Array[float]=[];var previous:=Time.get_ticks_usec()
	for ignored in range(180):
		await process_frame
		var now:=Time.get_ticks_usec();frames.append(float(now-previous)/1000.);previous=now
	frames.sort();facts.live={"base_flowers":baseline,"palace_flowers":actual,"extra":boosted,"p95_ms":frames[170],"max_ms":frames[-1]}
	var moved: Dictionary=demo.state.place_signature("botanical_palace",Vector2(-31,18),built.house_id);demo._after_edit(moved,"house");await _wait()
	_check(moved.ok and demo.town.meadow.palace_centers==[Vector2(-31,19.8)] and demo.town.meadow.palace_flower_counts.get(Vector2i(-3,0),-1)==0,"budgeted palace movement retires old halo and publishes flowers at the new position")
	_camera(Vector2(-31,19.8));await _capture("04_moved_palace_flower_halo")
	demo._after_edit(demo.state.undo(),"history");await _wait()
	_check(_extras(demo.town.meadow)==boosted and _flowers(demo.town.meadow)==actual,"real construction undo restores exact original flower count")
	demo._after_edit(demo.state.remove_house(built.house_id),"erase");await _wait()
	_check(_extras(demo.town.meadow)==0 and _flowers(demo.town.meadow)==baseline,"budgeted palace recycling returns original meadow flower population")

	await _finish(personal)

func _finish(personal: PackedByteArray)->void:
	_check((FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray())==personal,"isolated validation preserves personal save bytes")
	var report: Dictionary={"ok":failures.is_empty(),"count":checks.size(),"checks":checks,"failures":failures,"facts":facts}
	var mode: String="live" if "--live" in OS.get_cmdline_user_args() else "cpu"
	FileAccess.open(OUT+"/"+mode+".json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t",true,true));print("PHASE_TEN ",JSON.stringify(report))
	if demo!=null:demo.queue_free();await process_frame
	quit(0 if failures.is_empty() else 1)

extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Ledger=preload("res://scripts/world/city_creation_progression_ledger.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
class TravelProbe:
	extends RefCounted
	var calls:=0
	func observe(_actor:String,_from:Vector2,_to:Vector2,_clock:float)->Array[Dictionary]:calls+=1;return []
var checks:=0
var failures:Array=[]
var out:=""
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func life_for(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func set_enabled(city:RefCounted,enabled:Variant,name:String)->Dictionary:
	return city.CreationPolicy.set_progression_enabled(city,enabled,out+"/"+name+".json")
func fixture()->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"pastoral","townhouse")
	var built:Array=[]
	for i in range(7):built.append(city.add_house(Vector2(-30+i*4.,-20)))
	check(built.all(func(row):return row.ok),"actual seven-house economy fixture")
	var assigned:Array=[]
	for pair:Array in [["h2","bakery"],["h4","workshop"],["h6","garden_cafe"],["h7","venue"]]:assigned.append(city.set_house_role(pair[0],pair[1]))
	check(assigned.all(func(row):return row.ok) and city.add_road([Vector2(-32,-18.1),Vector2(-4,-18.1)] as Array[Vector2],"path","none").ok,"real roles and service street")
	return city
func run()->void:
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):push_error("isolated session and new evidence directory required");quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()
	var city:=fixture();var life:=life_for(city)
	check(life.bakery.workers.size()==1 and life.workshop.workers.size()==1,"real baker and artisan started through normal Life setup")
	check(city.begin_progression_epoch(out+"/first.json").ok,"first epoch captures the registered live checkpoint")
	var epoch:Dictionary=city.cozy_progression.duplicate(true);var old:Dictionary=city.harmony_journey.duplicate(true)
	var ready:=false
	for i in range(1800):
		if not city.workshop_status("h4").transit.is_empty() and str(life.workshop.workers[0].phase) in ["delivering","installing"]:ready=true;break
		life._process(.1)
	check(ready,"actual crafting reserved real cargo and entered delivery")
	check(city.add_house(Vector2(-25,12)).ok,"uncollected real construction before disabling")
	life.checkpoint();var worker_id:int=life.workshop.workers[0].node.get_instance_id()
	var closed:=set_enabled(city,false,"closed")
	check(closed.ok and not closed.no_op and closed.earned>0 and city.cozy_progression.receipts.get("house_peak",0)==city.houses.size(),"disable settles pending real events before freezing")
	check(city.cozy_progression.epoch_id==epoch.epoch_id and city.cozy_progression.started_at==epoch.started_at and city.cozy_progression.origin_sha256==epoch.origin_sha256,"disable retains the epoch identity and original source")
	check(FileAccess.file_exists(closed.get("backup","")) and city.Serializer.read(city,closed.backup).ok,"disable creates a readable immutable active-state backup")
	check(city.harmony_journey.harmony_level==old.harmony_level and city.harmony_journey.pending_draft==old.pending_draft and city.harmony_journey.growth_cutoff==old.growth_cutoff,"disable never settles ordinary events into historical XP or offers")
	var checkpoint:Dictionary=life.checkpoint();var frozen:Dictionary=city.snapshot();var clock:float=life.time
	var cargo:Dictionary=city.workshop_status("h4").transit.duplicate(true)
	life._process(120.);life._tick_life(120.);life.bakery.tick(120.);life.workshop.tick(120.);life.cafe.tick(120.);life.matinee.tick(120.);life.site_wishes.poll(true)
	check(life.time==clock and life._budget_delta==0. and life.checkpoint()==checkpoint,"paused wall time never advances economic clock or deferred work")
	check(city.snapshot()==frozen and city.workshop_status("h4").transit==cargo and life.workshop.workers[0].node.get_instance_id()==worker_id,"stock, cargo, receipts and live worker identity survive the pause")
	var worker:Dictionary=life.workshop.workers[0];var home:=str(cargo.home_id);var target:=str(cargo.target_id)
	var results:Array=[city.produce_bread("h2",1),city.serve_bread("h2","h1"),city.produce_craft("h4",1),city.produce_workshop_batch("h4")>0,city.reserve_craft("h4",home,target),city.complete_craft("h4",home,target),city.complete_tea("h6",["h1","h3"]),city.reserve_matinee("h7",["h1","h3"]),city.complete_matinee("h7",["h1","h3"])]
	check(not results.has(true) and city.record_concert_completion("h7")==0. and city.snapshot()==frozen,"direct State economic operations obey the same pause and preserve real reserved cargo")
	check(not life.invite_concert("h7").ok and city.refresh_quality(life.connected_houses).is_empty(),"new invitations and quality progression pause without revoking earned quality")
	var real_travel:RefCounted=life.travel;var travel_probe:=TravelProbe.new();life.travel=travel_probe
	life.record_travel("resident/h1",Vector2.ZERO,Vector2.ONE);life.travel=real_travel
	check(travel_probe.calls==0,"paused deferred travel publication cannot dispatch sensors, afterglow rewards or short-sound callbacks")
	check(set_enabled(city,false,"unused_noop").no_op and not FileAccess.file_exists(out+"/unused_noop.json"),"repeated disable is an IO-free no-op")
	check(not set_enabled(city,1,"invalid_boolean").ok and city.snapshot()==frozen,"numeric flags cannot alter policy")
	var cold:=State.new();check(cold.load_city(out+"/closed.json").ok,"paused state cold-opens through the formal file path")
	var cold_life:=life_for(cold);var cold_checkpoint:Dictionary=cold_life.checkpoint();var cold_frozen:Dictionary=cold.snapshot()
	cold_life._process(60.)
	check(cold.workshop_status("h4").transit==cargo and cold_life.checkpoint()==cold_checkpoint and cold.snapshot()==cold_frozen,"cold paused checkpoint retains real delivery and advances nothing")
	check(cold_life.bakery.workers.size()==life.bakery.workers.size() and cold_life.workshop.workers.size()==life.workshop.workers.size(),"cold restore reuses saved task identities instead of issuing new work")
	var off:Dictionary=city.add_house(Vector2(-20,12));check(off.ok and city.remove_house(off.house_id).ok,"real off-period construction can be removed before any collection poll")
	var pure:Dictionary=city.cozy_progression.duplicate(true);var snapshot:Dictionary=city.snapshot()
	check(city.cozy_progression==pure and snapshot.cozy_progression.baseline.get("house/"+str(off.house_id),0)==1,"read-only snapshot carries off-period history high water without writing State")
	var quiet_home:Dictionary=city.add_house(Vector2(-38,-20));var quiet_shop:Dictionary=city.add_house(Vector2(-34,-20))
	check(quiet_home.ok and quiet_shop.ok and city.set_house_role(quiet_shop.house_id,"bakery").ok and city.add_road([Vector2(-40,-18.1),Vector2(-32,-18.1)] as Array[Vector2],"path","none").ok,"real new home and bakery built while disabled")
	var waiting:Dictionary=city.snapshot();var unready:=set_enabled(city,true,"unpublished_geometry")
	check(not unready.ok and unready.get("retry_after_geometry",false) and city.snapshot()==waiting,"stale geometry is rejected without synchronizing or settling live State inside the transaction")
	life._process(.1)
	var quiet:Dictionary={}
	for resident:Dictionary in life.residents:
		if resident.home_id==quiet_home.house_id:quiet=resident
	check(life.bakery.workers.size()==1 and not quiet.is_empty() and quiet.paused and quiet.stops==[quiet_home.house_id],"paused geometry publishes without issuing a new worker or daily shopping trip")
	var failed_path:=out+"/blocked.json";check(city.set_journey_checkpoint(life.checkpoint(false)).ok and city.save_city(failed_path).ok,"valid paused source for late resume failure")
	var quiet_copy:=State.new();quiet_copy.load_city(failed_path);var quiet_life:=life_for(quiet_copy);var parked:=false
	for resident:Dictionary in quiet_life.residents:
		if resident.home_id==quiet_home.house_id:parked=resident.paused and resident.stops==[quiet_home.house_id]
	check(parked and quiet_life.bakery.workers.size()==1,"cold paused opening retains the off-period home as idle and does not staff the new bakery")
	quiet_life.free()
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(failed_path+".tmp"));var original:=FileAccess.get_file_as_bytes(failed_path)
	life.checkpoint();var retained:Dictionary=city.snapshot()
	var failed:Dictionary=city.CreationPolicy.set_progression_enabled(city,true,failed_path)
	check(not failed.ok and city.snapshot()==retained and not city.cozy_progression.enabled and FileAccess.get_file_as_bytes(failed_path)==original,"failed resume publication leaves policy, earned balance and raw original intact")
	var resumed:=set_enabled(city,true,"resumed")
	check(resumed.ok and resumed.earned==0 and city.cozy_progression.epoch_id==epoch.epoch_id and city.cozy_progression.started_at==epoch.started_at,"resume reuses the same epoch without initial rewards")
	check(city.cozy_progression.baseline.get("house/"+str(off.house_id),0)==1 and Ledger.collect(city).earned==0,"resume excludes removed off-period identities without a full history scan")
	check(life.bakery.workers.any(func(w):return w.bakery_id==quiet_shop.house_id) and life.workshop.workers[0].node.get_instance_id()==worker_id,"resume immediately starts the off-period bakery and retains the original artisan and cargo")
	life.travel=travel_probe;life.record_travel("resident/h1",Vector2.ZERO,Vector2.ONE);life.travel=real_travel
	check(travel_probe.calls==1,"active travel keeps its original sensor dispatch path")
	check(city.undo().ok and Ledger.collect(city).earned==0 and city.redo().ok and Ledger.collect(city).earned==0,"Undo and Redo across the pause boundary never farm the off-period house")
	var added:Dictionary=city.add_house(Vector2(-16,12));check(added.ok and Ledger.collect(city).earned==2,"new real construction after resume earns normally")
	var held:float=life.time;life._process(120.)
	check(life.time==held,"first resumed frame discards any delta inherited from the paused interval")
	life._process(.1)
	check(is_equal_approx(life.time,held+.1) and life.workshop.workers[0].node.get_instance_id()==worker_id,"later resumed frames advance only new delta and retain the live artisan")
	var delivered:=false
	for i in range(1200):
		if city.workshop_status("h4").delivered>int(frozen.workshop_supply.h4.delivered):delivered=true;break
		life._process(.1)
	check(delivered,"the preserved real cargo reaches its original recipient after resume")
	readonly_checkpoint(life,city)
	var new_epoch:String=city.cozy_progression.epoch_id
	check(city.CreationPolicy.set_progression_enabled(city,true,"").no_op and city.cozy_progression.epoch_id==new_epoch,"repeated enable neither saves nor swallows new active events")
	check(not set_enabled(State.new(),false,"no_epoch").ok,"an unrelated empty state cannot implicitly create an epoch")
	failed_active_capture()
	deleted_job()
	check(personal==(FileAccess.get_file_as_bytes(State.DEFAULT_PATH) if FileAccess.file_exists(State.DEFAULT_PATH) else PackedByteArray()),"personal save bytes unchanged")
	cold_life.free();life.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"scope":"Backed-up enable/disable, real cargo/worker/checkpoint freeze and resume, direct economic API guards; quiet wandering and toggle UI pending"}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PROGRESSION_PAUSE ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func readonly_checkpoint(life:Node3D,city:RefCounted)->void:
	life._sync();var camera:=Camera3D.new();root.add_child(camera);camera.position=Vector3(300,80,300);camera.look_at(Vector3(400,80,400));life.view_camera=camera
	for i in range(8):life._process(.1)
	var workers:Array=life.bakery.workers+life.workshop.workers
	check(workers.any(func(w):return w.has("worker_motion") or w.has("worker_work")),"actual hidden worker has deferred motion or work debt")
	var before:Dictionary=city.snapshot();var publications:int=life.worker_lod.stats.publications
	var sampled:Dictionary=life.checkpoint(false)
	check(city.snapshot()==before and life.worker_lod.stats.publications==publications,"read-only checkpoint does not flush deferred jobs, publish actors or settle live rewards")
	var published:Dictionary=life.checkpoint();var matching:=true
	for field:String in ["bakery_workers","workshop_workers"]:
		for i in range(sampled[field].size()):
			var a:Dictionary=sampled[field][i].duplicate();var b:Dictionary=published[field][i].duplicate();matching=matching and is_equal_approx(float(a.yaw),float(b.yaw));a.erase("yaw");b.erase("yaw");matching=matching and a==b
	check(matching,"pure deferred position and work samples agree with normal flushed checkpoints")
	life.view_camera=null;camera.free()
func failed_active_capture()->void:
	var city:=State.new();city.initialize_empty()
	for at:Vector2 in [Vector2(-30,-22),Vector2(-26,-22),Vector2(-22,-22),Vector2(-30,-17),Vector2(-26,-17),Vector2(-22,-17)]:city.add_house(at)
	city.set_house_role("h1","bakery");city.set_house_role("h2","workshop")
	city.add_road([Vector2(-33,-20.45),Vector2(-33,-15.45)] as Array[Vector2])
	for z:float in [-20.45,-15.45]:city.add_road([Vector2(-33,z),Vector2(-22,z)] as Array[Vector2])
	check(city.CreationPolicy.convert(city,out+"/pending_wish_converted.json").ok,"known legacy terrain fixture converts through the backed-up free entry")
	var life:=life_for(city);check(city.begin_progression_epoch(out+"/active_capture_first.json").ok,"active failure fixture opens through the formal API")
	city.produce_craft("h2",city.workshop_status("h2").capacity);life.site_wishes.arm("h2","tree")
	for at:Vector2 in [Vector2(-26,-25),Vector2(-29,-25),Vector2(-23,-25)]:city.place_plant(at,"olive")
	life._sync()
	check(city.wish_rewards.is_empty() and not life.site_wishes.pending.has("h2"),"free policy does not arm an automatic first-craft promise")
	var artisan:Dictionary=life.workshop.workers[0]
	check(city.reserve_craft("h2",artisan.home_id,artisan.home_id),"real reservation creates room for the postponed craft")
	life.workshop._replan(artisan);city.set_house_name("h2","只读抓取失败保留");city.set_journey_checkpoint(life.checkpoint(false))
	var path:=out+"/active_late_failure.json";check(city.save_city(path).ok,"active original saved before deliberately blocking publication")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(path+".tmp"))
	var before:Dictionary=city.snapshot();var pending:Dictionary=life.site_wishes.pending.duplicate(true);var bytes:=FileAccess.get_file_as_bytes(path)
	var failed:Dictionary=city.CreationPolicy.set_progression_enabled(city,false,path)
	check(not failed.ok and city.snapshot()==before and life.site_wishes.pending==pending and FileAccess.get_file_as_bytes(path)==bytes,"failed active close cannot grant a deferred wish or mutate live State while capturing its checkpoint")
	var stock_before_poll:int=city.workshop_status("h2").stock;life.site_wishes.poll(true)
	check(city.wish_rewards.is_empty() and city.workshop_status("h2").stock==stock_before_poll,"free silent policy keeps ordinary wish polling from inventing a reward")
	life.free()
func deleted_job()->void:
	var city:=fixture();var life:=life_for(city);city.begin_progression_epoch(out+"/deleted_job_first.json");set_enabled(city,false,"deleted_job_closed")
	check(city.remove_house("h4").ok,"actual paused workshop deletion")
	var before:Dictionary=city.snapshot();var rejected:=set_enabled(city,true,"deleted_job_not_ready")
	check(not rejected.ok and rejected.get("retry_after_geometry",false) and city.snapshot()==before,"deleted job references cannot enter a transaction before geometry reconciliation")
	life._process(.1);var resumed:=set_enabled(city,true,"deleted_job_resumed")
	check(resumed.ok and life.workshop.workers.is_empty() and city.Serializer.read(city,out+"/deleted_job_resumed.json").ok,"paused Life reconciles deleted references and resumes without a dead end")
	life.free()

extends SceneTree
## Compare worker publication to the frozen pre-height-cache production owner.
const State := preload("res://scripts/world/city_creation_state.gd")
const Life := preload("res://scripts/world/city_creation_life.gd")
const OLD := "res://废弃/居民高度后台准备_前_2026-10-18_cc5e59b1/city_creation_life.gd.txt"
const SOURCE := "res://备份/自发巡演前_20261015/额外道路输入实窗/城市作品快照.json"
var failures: Array[String] = []
var checks := 0
var timings: Array[Dictionary] = []
var reference_script: GDScript

func _initialize() -> void: _run.call_deferred()

func _run() -> void:
	reference_script = GDScript.new()
	reference_script.source_code = FileAccess.get_file_as_string(OLD).replace("class_name CityCreationLife", "")
	_check(reference_script.reload()==OK,"archived exact synchronous source parses")
	var source: Dictionary = JSON.parse_string(FileAccess.get_file_as_string(SOURCE))
	var base := source.duplicate(true)
	base.roads = source.roads.slice(0,7).duplicate(true)
	base.next_road_id = 8
	base.high_watermark.road = 7
	base.journey_checkpoint = {}
	for house: Dictionary in base.houses: house.auto_matinee = false
	var a := State.new()
	var b := State.new()
	_check(a.restore(base).ok and b.restore(base).ok,"real player geometry restores")
	var old: Node3D = reference_script.new()
	var current := Life.new()
	root.add_child(old)
	root.add_child(current)
	old.set_process(false)
	current.set_process(false)
	old.setup(a)
	current.setup(b)
	for road: Dictionary in source.roads.slice(7):
		var points: Array[Vector2] = []
		for row: Array in road.points: points.append(Vector2(float(row[0]),float(row[1])))
		_check(a.add_road(points).ok and b.add_road(points).ok,"actual road commits "+str(road.id))
		var started := Time.get_ticks_usec()
		old._sync()
		var sync_ms := (Time.get_ticks_usec()-started)/1000.0
		current.set_budget_hold(true)
		started = Time.get_ticks_usec()
		_check(current.begin_budget_sync(),"network change starts private worker")
		var begin_ms := (Time.get_ticks_usec()-started)/1000.0
		var before := current.checkpoint()
		var supply := b.bakery_supply.duplicate(true)
		var max_poll := 0.0
		var held := 0.0
		while true:
			current._process(0.002)
			held += 0.002
			started = Time.get_ticks_usec()
			var finished := current.poll_budget_sync()
			max_poll = maxf(max_poll,(Time.get_ticks_usec()-started)/1000.0)
			if finished: break
			_check(current.checkpoint()==before and b.bakery_supply==supply,"preparation never moves actors or produces bread")
			await process_frame
		_check(current.graph==old.graph and current.positions==old.positions,"exact graph and bridge heights "+str(road.id))
		_check(current.connected_houses==old.connected_houses and current.selected_entrances==old.selected_entrances,"exact selected real doors "+str(road.id))
		_check(current.checkpoint()==old.checkpoint(),"exact routes, workers and dwell after atomic graph commit "+str(road.id))
		_check(current.bakery_status("h2")==old.bakery_status("h2"),"no production settlement at graph commit")
		current.set_budget_hold(false)
		old._process(held)
		_check(current.checkpoint()==old.checkpoint() and b.bakery_supply==a.bakery_supply,"held elapsed resumes against newly legal graph")
		timings.append({"road":road.id,"sync_ms":sync_ms,"begin_ms":begin_ms,"max_poll_ms":max_poll,"commit_ms":current.budget_commit_ms,"prepare_ms":current.budget_prepare_ms,"stages":current.budget_commit_stats})
	# Superseded work cannot install an earlier graph, including rapid undo.
	current.set_budget_hold(true)
	b.roads.clear()
	b.revision += 1
	_check(current.begin_budget_sync(),"disconnect begins")
	b.roads.assign(a.roads.duplicate(true))
	b.revision += 1
	_check(not current.begin_budget_sync(),"undo to current graph cancels without blocking")
	current.set_budget_hold(false)
	_check(current.graph==old.graph and current.checkpoint()==old.checkpoint(),"cancelled worker never replaces current graph")
	# Two changed snapshots while an old worker is running keep only the latest.
	a.roads.remove_at(a.roads.size()-1)
	a.revision += 1
	b.roads.remove_at(b.roads.size()-1)
	b.revision += 1
	current.set_budget_hold(true)
	_check(current.begin_budget_sync(),"new generation queues after cancellation")
	a.roads.remove_at(a.roads.size()-1)
	a.revision += 1
	b.roads.remove_at(b.roads.size()-1)
	b.revision += 1
	_check(current.begin_budget_sync(),"latest generation supersedes changed graph")
	old._sync()
	while not current.poll_budget_sync(): await process_frame
	_check(current.graph==old.graph and current.checkpoint()==old.checkpoint(),"only newest revision installs exact graph/journeys")
	current.set_budget_hold(false)
	# Existing people stay at their actual points when all roads disappear.
	var positions_before: Array[Vector3] = []
	for resident: Dictionary in current.residents: positions_before.append(resident.node.position)
	a.roads.clear()
	a.revision += 1
	b.roads.clear()
	b.revision += 1
	current.set_budget_hold(true)
	current.begin_budget_sync()
	old._sync()
	while not current.poll_budget_sync(): await process_frame
	_check(current.checkpoint()==old.checkpoint(),"full disconnect preserves exact paused daily/worker state")
	current.set_budget_hold(false)
	for index in range(current.residents.size()):
		_check(current.residents[index].paused and current.residents[index].node.position==positions_before[index],"disconnect never teleports a resident")
	for step in range(120):
		old._process(0.1)
		current._process(0.1)
	_check(current.checkpoint()==old.checkpoint() and b.bakery_supply==a.bakery_supply,"disconnected time never creates remote production/services")
	old.free()
	current.free()
	await _roles_and_completion()
	print("LIFE_BUDGET_TIMINGS ",JSON.stringify(timings))
	if failures.is_empty(): print("CITY_CREATION_LIFE_BUDGET PASS: %d assertions"%checks)
	else:
		for failure: String in failures: push_error(failure)
	quit(0 if failures.is_empty() else 1)

func _check(ok: bool, message: String) -> void:
	checks += 1
	if not ok: failures.append(message)

func _roles_and_completion() -> void:
	for mode: String in ["tea","cargo","concert","gathering"]:
		var a := State.new()
		var b := State.new()
		a.initialize()
		b.initialize()
		if mode == "tea":
			a.set_house_role("h4","garden_cafe")
			b.set_house_role("h4","garden_cafe")
		elif mode == "cargo":
			a.set_house_role("h2","workshop")
			b.set_house_role("h2","workshop")
		var old: Node3D = reference_script.new()
		var current := Life.new()
		root.add_child(old)
		root.add_child(current)
		old.set_process(false)
		current.set_process(false)
		old.setup(a)
		current.setup(b)
		if mode in ["concert","gathering"]:
			if mode == "gathering":
				old.concert_start_gate = func(): return false
				current.concert_start_gate = func(): return false
			_check(old.invite_concert("h4").ok and current.invite_concert("h4").ok,"manual invitation on actual connected graph")
		var reached := false
		for step in range(10000):
			if (mode == "tea" and old.cafe_status("h4").phase == "tea") or (mode == "cargo" and not old.workshop.workers.is_empty() and str(old.workshop.workers[0].phase)=="to_target") or (mode == "concert" and old.concert_status().phase=="playing") or (mode=="gathering" and int(old.concert_status().arrived)==int(old.concert_status().invited)):
				reached = true
				break
			old._process(0.05)
			current._process(0.05)
		_check(reached and old.checkpoint()==current.checkpoint(),mode+" physically reaches actual activity together")
		if mode == "cargo":
			var worker_id: int = current.workshop.workers[0].node.get_instance_id()
			current.set_budget_hold(true)
			_check(a.set_house_role("h2","residential").ok and b.set_house_role("h2","residential").ok and current.begin_budget_sync(),"temporary role removal prepares a new generation")
			# State immediately refunds cargo for an authored role change. The
			# prepared Life graph must add no extra worker/stock side effects.
			var supply_after_edit := b.workshop_supply.duplicate(true)
			while not current.poll_budget_sync(false): await process_frame
			_check(current.workshop.workers[0].node.get_instance_id()==worker_id and b.workshop_supply==supply_after_edit,"ready-but-unpublished graph never deletes worker or adds settlement beyond State transaction")
			a.undo()
			b.undo()
			_check(not current.begin_budget_sync(),"undo discards ready role-removal graph")
			current.set_budget_hold(false)
			old._sync()
			_check(current.workshop.workers[0].node.get_instance_id()==worker_id and b.workshop_supply==a.workshop_supply and old.checkpoint()==current.checkpoint(),"undo before atomic publish keeps original worker and existing State history semantics")
		if mode == "concert":
			for step in range(479):
				old._process(0.05)
				current._process(0.05)
			_check(old.concert_status().phase=="playing" and a.life_progress.concerts==0,"23.95s is no finished concert")
		await _edit_pair(old,current,a,b,func(city):
			var points: Array[Vector2] = [Vector2(-16,11),Vector2(-14,12)]
			return city.add_road(points).ok,mode+" during real activity",0.35)
		if mode == "concert":
			_check(a.life_progress.concerts==1 and b.life_progress.concerts==1 and current.concert_status().phase=="idle","held elapsed crosses full24s completion exactly once")
			_check(a.resonance_afterglow==b.resonance_afterglow and a.matinee_cooldown==b.matinee_cooldown,"exact completion remainder ages afterglow and cooldown")
		if mode == "gathering":
			_check(current.concert_status().phase=="gathering" and b.life_progress.concerts==0,"held elapsed is no new performance time")
			old.concert_start_gate = func(): return true
			current.concert_start_gate = func(): return true
			old._process(0.0)
			current._process(0.0)
			_check(current.concert_status().phase=="playing" and current.concert_status().elapsed==0.0,"new performance begins only at actual current boundary after debt")
			for step in range(479):
				old._process(0.05)
				current._process(0.05)
			_check(b.life_progress.concerts==0 and current.concert_status().phase=="playing","past hold cannot shorten new full24s performance")
			old._process(0.05)
			current._process(0.05)
			_check(b.life_progress.concerts==1 and old.checkpoint()==current.checkpoint(),"new full24s settles once after real new clock span")
		if mode == "cargo":
			var point: Vector3 = current.workshop.workers[0].node.position
			var before_delivered := int(b.workshop_status("h2").delivered)
			var previous: Array[Dictionary] = b.roads.duplicate(true)
			await _edit_pair(old,current,a,b,func(city):
				city.roads.clear()
				city.revision += 1
				return true,"reserved cargo disconnect",0.35)
			_check(current.workshop.workers[0].node.position==point and int(b.workshop_status("h2").delivered)==before_delivered and not b.workshop_status("h2").transit.is_empty(),"pending road removal never delivers/refunds carried item remotely")
			await _edit_pair(old,current,a,b,func(city):
				city.roads.assign(previous.duplicate(true))
				city.revision += 1
				return true,"reserved cargo repair",0.35)
		for step in range(300):
			old._process(0.05)
			current._process(0.05)
		_check(old.checkpoint()==current.checkpoint() and a.life_progress==b.life_progress and a.bakery_supply==b.bakery_supply and a.workshop_supply==b.workshop_supply and a.house_improvements==b.house_improvements,mode+" actual production, delivery, tea and daily state remain identical")
		old.free()
		current.free()

func _edit_pair(old: Node3D, current: Node3D, a: RefCounted, b: RefCounted, edit: Callable, label: String, elapsed: float) -> void:
	_check(edit.call(a) and edit.call(b),label+" actual edit accepted")
	old._sync()
	current.set_budget_hold(true)
	_check(current.begin_budget_sync(),label+" starts worker")
	var before: Dictionary = current.checkpoint()
	var inventory := [b.bakery_supply.duplicate(true),b.workshop_supply.duplicate(true),b.life_progress.duplicate(true)]
	current._process(elapsed)
	_check(current.checkpoint()==before and [b.bakery_supply,b.workshop_supply,b.life_progress]==inventory,label+" hold neither walks nor settles")
	while not current.poll_budget_sync(): await process_frame
	_check(current.graph==old.graph and current.checkpoint()==old.checkpoint(),label+" exact committed graph and real journeys")
	var paid := minf(0.1,float(current._budget_delta))
	current.set_budget_hold(false)
	old._process(paid)
	_check(current._budget_delta>0.2 and old.checkpoint()==current.checkpoint(),label+" release repays only one bounded step")
	while current._budget_delta>0.0:
		paid = minf(0.1,float(current._budget_delta))
		current._process(0.0)
		old._process(paid)
	_check(current.checkpoint()==old.checkpoint() and a.life_progress==b.life_progress and a.resonance_afterglow==b.resonance_afterglow,label+" all elapsed time conserved on legal new network")

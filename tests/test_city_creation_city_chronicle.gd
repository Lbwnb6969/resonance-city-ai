extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Chronicle=preload("res://scripts/world/city_creation_city_chronicle.gd")
const Plaza=preload("res://scripts/world/city_creation_plaza_loops.gd")
const Loops=preload("res://tests/test_city_creation_plaza_loops.gd")
const Court=preload("res://tools/fixtures/city_creation_space_contract_fixture.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var f:=Loops.fixture();var city:RefCounted=f.city;var memory:=Chronicle.new();var initial:=Chronicle.geometry(city);memory.start([],initial,city._undo.size(),city._redo.size());var id:String=Plaza.faces(city)[0].loop_key
	check(Plaza.choose(city,id,"fan_stone").ok,"real author paving supplies a chronicle candidate");var source:Dictionary=city.snapshot();var facts:=Chronicle.geometry(city);check(facts.first_plaza and city.snapshot()==source,"milestone projection observes actual paving without writing any author data")
	memory.observe(facts,city._undo.size(),city._redo.size(),false,420.);check(memory.rows().is_empty(),"unpublished author edit cannot create a false displayed memory");memory.observe(facts,city._undo.size(),city._redo.size(),true,421.);check(memory.rows().size()==1 and memory.rows()[0].kind=="first_plaza","published actual paving appends one real bounded memory")
	memory.observe(facts,city._undo.size(),city._redo.size(),true,422.);check(memory.rows().size()==1,"polling and readonly browsing do not repeat a milestone")
	check(city.undo().ok,"real Undo withdraws paving");memory.observe(Chronicle.geometry(city),city._undo.size(),city._redo.size(),true,423.);check(memory.rows().is_empty(),"immediate Undo removes an unpersisted memory with its actual geometry")
	check(city.redo().ok,"real Redo restores paving");memory.observe(Chronicle.geometry(city),city._undo.size(),city._redo.size(),true,424.);check(memory.rows().size()==1,"Redo can restore the actual pending memory once");var rows:Array=memory.rows();memory.persisted();city.undo();memory.observe(Chronicle.geometry(city),city._undo.size(),city._redo.size(),true,425.);check(memory.rows()==rows,"a memory already stored in an immutable work stays historic after later geometry Undo")
	city.redo();var old:=Chronicle.new();old.start([],Chronicle.geometry(city),city._undo.size(),city._redo.size());old.observe(Chronicle.geometry(city),city._undo.size(),city._redo.size(),true,426.);check(old.rows().is_empty(),"opening an existing city does not invent retroactive first-build events")
	var inherited:Array=[]
	for i in range(12):inherited.append({"kind":"event_"+str(i),"at_sec":i,"caption":"保留原作小记"+str(i)})
	var bounded:=Chronicle.new();bounded.start(inherited,initial,0,0);bounded.observe(facts,1,0,true,430.);check(bounded.rows().size()==12 and bounded.rows()[-1].kind=="first_plaza" and inherited.size()==12 and inherited[0].kind=="event_0","new version keeps the latest twelve while original inherited records remain untouched")
	var court:=Court.courtyard("ring","none");check(court.ok and Chronicle.geometry(court.city).first_courtyard,"courtyard milestone consumes a real full authored courtyard plan")
	var bridge:=State.new();bridge.initialize_free();check(bridge.add_water([Vector2(-28,-20)] as Array[Vector2],4.,"pond").ok and bridge.add_road([Vector2(-35,-20),Vector2(-21,-20)] as Array[Vector2],"promenade","none").ok,"real author pond and crossing road provide a stone bridge");check(Chronicle.geometry(bridge).first_bridge,"stone bridge milestone consumes actual structural bridge runs")
	var tea:=State.new();tea.initialize();check(tea.set_house_role("h4","garden_cafe").ok,"real default town supplies a legal three-seat cafe");var life:=preload("res://scripts/world/city_creation_life.gd").new();root.add_child(life);life.set_process(false);life.setup(tea);var tea_memory:=Chronicle.new();var tea_facts:=Chronicle.geometry(tea);tea_facts.first_tea=Chronicle.full_tea(life.cafe);tea_memory.start([],tea_facts,tea._undo.size(),tea._redo.size());var full:=false
	for i in range(5000):
		life._process(.05)
		if Chronicle.full_tea(life.cafe):full=true;break
	check(full and int(tea.life_progress.purchases)>=2,"actual bread purchases and real walking guests fill the real table without fabricated served or invitations");tea_facts.first_tea=Chronicle.full_tea(life.cafe);tea_memory.observe(tea_facts,tea._undo.size(),tea._redo.size(),true,500.);check(tea_memory.rows().any(func(row):return row.kind=="first_tea"),"genuine full-seat production status creates the readonly tea memory");life.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CITY_CHRONICLE_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

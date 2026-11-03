extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Library=preload("res://scripts/world/city_creation_collection.gd")
const Meta=Library.Metadata
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var out:="";var baseline_path:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
		if arg.begins_with("--baseline="):baseline_path=arg.trim_prefix("--baseline=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out) or (not baseline_path.is_empty() and not baseline_path.begins_with("res://验证记录/")):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var personal:=FileAccess.get_file_as_bytes(State.DEFAULT_PATH);var city:=State.new();city.initialize_free();city.add_house(Vector2(-28,-20));var world:Dictionary=city.snapshot();var view:={"focus":[-28.,.8,-20.],"yaw":.4,"pitch":.7,"zoom":12.,"evening":false,"light_phase":0};var cover:=Image.create(32,20,false,Image.FORMAT_RGBA8);cover.fill(Color("759774"))
	var library:=Library.new();library.directory=out+"/works";var original:Dictionary
	if not baseline_path.is_empty():
		var baseline:RefCounted=load(baseline_path).new();baseline.directory=library.directory;original=baseline.save("原作一",world,view,cover)
	else:
		DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(library.directory));var id:="w_1793736648480_7c5c6fc07018acd4"
		for extension:String in [".json",".png"]:DirAccess.copy_absolute(ProjectSettings.globalize_path("res://tests/fixtures/creation_work_v1/"+id+extension),ProjectSettings.globalize_path(library.directory+"/"+id+extension))
		original=library.read(id)
		if original.ok:world=original.world;view=original.view
	check(original.ok,"real previous work writer's v1 original stays independently reproducible")
	if not original.ok:quit(1);return
	var original_json:=FileAccess.get_file_as_bytes(original.path);var original_png:=FileAccess.get_file_as_bytes(original.path.trim_suffix(".json")+".png");var read:Dictionary=library.read(original.id)
	check(read.ok and Meta.fields(read)==Meta.defaults() and read.world==world and read.preview_valid,"new reader opens real v1 without inventing note lineage milestone or seal")
	var attrs:={"parent_work_id":original.id,"author_note":"把河岸的灯留给晚归的人。","chronicle":[{"kind":"first_plaza","at_sec":420.,"caption":"第一片石板广场铺成了"}],"gilded_seal":false};var saved:Dictionary=library.save("原作一 · 衍生版",world,view,cover,"manual",{},attrs);check(saved.ok and saved.id!=original.id,"same public save API creates a distinct immutable derived version")
	var loaded:Dictionary=library.read(saved.id);check(loaded.ok and Meta.fields(loaded)==attrs and loaded.world==world,"signed work-level authorship and unchanged city cold roundtrip exactly");check(JSON.parse_string(FileAccess.get_file_as_string(saved.path)).schema==Library.SCHEMA,"new signed envelope explicitly uses work v2 while city schema stays unchanged")
	check(Meta.FIELDS.all(func(key):return not loaded.world.has(key)) and loaded.world.schema==world.schema,"all four new fields live beside the world rather than inside city schema")
	var items:Dictionary=library.entries();check(items.ok and items.items.size()==2 and items.items.any(func(item):return item.id==saved.id and item.parent_work_id==original.id and item.author_note==attrs.author_note),"existing collection listing publishes actual lineage and note to cards")
	var invalid:Array=[{"author_note":"长".repeat(49)},{"author_note":"第一行\n第二行"},{"parent_work_id":"../outside"},{"parent_work_id":2},{"gilded_seal":1},{"gilded_seal":true},{"unknown_field":true},{"chronicle":[{"kind":"first_bridge","at_sec":-1,"caption":"桥"}]},{"chronicle":[{"kind":"first_bridge","at_sec":NAN,"caption":"桥"}]},{"chronicle":[{"kind":"first_bridge","at_sec":1,"caption":""}]}]
	var too_many:Array=[]
	for i in range(13):too_many.append({"kind":"event_"+str(i),"at_sec":i,"caption":"小记"})
	invalid.append({"chronicle":too_many});var file_count:=DirAccess.open(library.directory).get_files().size()
	for i in range(invalid.size()):check(not library.save("无效请求",world,view,cover,"manual",{},invalid[i]).ok and DirAccess.open(library.directory).get_files().size()==file_count,"invalid metadata rejects before publishing any file "+str(i))
	var max_note:Dictionary=library.save("四十八字",world,view,cover,"manual",{},{"author_note":"柳".repeat(48)});check(max_note.ok and library.read(max_note.id).author_note.length()==48,"actual Unicode note accepts exactly 48 characters")
	var empty:Dictionary=library.save("旧API继续用",world,view,cover);check(empty.ok and Meta.fields(library.read(empty.id))==Meta.defaults(),"unchanged caller arguments still save and load a valid unadorned work")
	var earned:=State.new();earned.initialize_free();check(earned.begin_progression_epoch(out+"/earned_epoch.json").ok,"isolated account fixture has a real backed schema-valid ledger");earned.cozy_progression.level=5;check(earned.CreationPolicy.set_progression_enabled(earned,false,out+"/paused_epoch.json").ok,"pausing retains the fixture's earned Lv5 level")
	var gilded:Dictionary=library.save("鎏金题跋",earned.snapshot(),view,cover,"manual",{},{"gilded_seal":true,"parent_work_id":saved.id});check(gilded.ok and library.read(gilded.id).gilded_seal,"paused earned Lv5 work can save its explicit gilded authorship frame")
	var broken:Dictionary=library.save("自建坏档夹具",world,view,cover,"manual",{},attrs);var envelope:Dictionary=JSON.parse_string(FileAccess.get_file_as_string(broken.path));var data:Dictionary=JSON.parse_string(envelope.payload);data.author_note="未重签的题跋";envelope.payload=JSON.stringify(data,"",true,true);FileAccess.open(broken.path,FileAccess.WRITE).store_string(JSON.stringify(envelope));check(not library.read(broken.id).ok,"metadata tamper without resigning is rejected by the same complete-payload SHA")
	data.parent_work_id=broken.id;envelope.payload=JSON.stringify(data,"",true,true);envelope.sha256=envelope.payload.sha256_text();FileAccess.open(broken.path,FileAccess.WRITE).store_string(JSON.stringify(envelope));check(not library.read(broken.id).ok,"self-parented work rejects even with a correctly signed payload")
	var bad_cover:Dictionary=library.save("自建坏封面夹具",world,view,cover,"manual",{},attrs);FileAccess.open(bad_cover.path.trim_suffix(".json")+".png",FileAccess.WRITE).store_buffer("broken-cover".to_utf8_buffer());var without_picture:Dictionary=library.read(bad_cover.id);check(without_picture.ok and not without_picture.preview_valid and without_picture.author_note==attrs.author_note,"bad cover keeps valid city and signed metadata readable with existing fallback")
	check(FileAccess.get_file_as_bytes(original.path)==original_json and FileAccess.get_file_as_bytes(original.path.trim_suffix(".json")+".png")==original_png,"all branch metadata failures and saves preserve both original JSON and original PNG bytes")
	check(personal==FileAccess.get_file_as_bytes(State.DEFAULT_PATH),"metadata storage tests leave the personal world untouched")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"original_id":original.id,"derived_id":saved.id,"original_json_sha256":library._digest(original_json),"works":library.directory};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WORK_METADATA_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

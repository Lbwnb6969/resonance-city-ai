extends SceneTree
const Whole=preload("res://scripts/audio/city_creation_master_performance.gd")
const Catalog=preload("res://scripts/audio/city_creation_master_catalog.gd")
const Import=preload("res://scripts/audio/city_creation_authored_score.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var began:=Time.get_ticks_msec();var old:=Whole.prepare(0);var candidate:=Whole.prepare(0,"pastoral_ab1")
	check(old.ok and candidate.ok and old.content_id=="baseline" and candidate.content_id=="pastoral_ab1","independent content identities preserve default baseline")
	check(old.signature!=candidate.signature and old.master_signature!=candidate.master_signature,"content signatures never alias baseline and candidate")
	check(not Whole.prepare(0,"../../candidate").ok and not Catalog.section("missing",0,0).ok,"unregistered identities cannot choose arbitrary source paths")
	check(not Catalog.section("pastoral_ab1",0,4).ok and not Import.request_master_continuous(null,4,"pastoral_ab1").ok,"unwritten candidate modes cannot masquerade as musical rewrites")
	var table:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/作曲候选/田园晨风_Gemini表格草案_v1.json"));var runtime:=Catalog.read("pastoral_ab1");var received:Dictionary=JSON.parse_string(FileAccess.get_file_as_string("res://数据/作曲候选/Gemini音乐续稿_素材目录_v1.json"));var counts:Dictionary={}
	check(table.runtime_ready==false and runtime.version==2 and runtime.id=="pastoral_arrangement_ab1","original table remains design-only; explicit version2 arrangement is separate")
	for p in range(6):
		var data:=Catalog.section("pastoral_ab1",p,0);check(data.ok,"candidate section validates existing eight-bar contract "+str(p))
		for role:String in ["foundation","pulse","answer","lead"]:
			var actual:Array=data.events.filter(func(e):return e.role==role).map(func(e):return [e.beat,e.beats,e.midi]);var expected:Array=table.sections[p].roles[role]
			check(actual.size()==expected.size() and range(actual.size()).all(func(i):return is_equal_approx(float(actual[i][0]),float(expected[i][0])) and is_equal_approx(float(actual[i][1]),float(expected[i][1])) and int(actual[i][2])==int(expected[i][2])),"written pitch timing and rests preserved "+str([p,role]))
			counts[role]=int(counts.get(role,0))+actual.size()
	check(counts=={"foundation":72,"pulse":106,"answer":72,"lead":138},"all 388 table events represented without invented completion")
	check(candidate.events.any(func(e):return e.role=="lead" and e.midi==86 and e.start>=108. and e.start<111.),"written Bar37 D6 survives the actual mode0 runtime register")
	check(range(6).all(func(p):var data:=Catalog.section("pastoral_ab1",p,0);var source:Array=received.merged_master_v2_proposal.sections[p].events;return data.events.size()==source.size() and range(source.size()).all(func(i):var e:Dictionary=data.events[i];var n:Array=source[i];return is_equal_approx(e.beat,float(n[0])) and is_equal_approx(e.beats,float(n[1])) and e.midi==int(n[2]) and is_equal_approx(e.gain,float(n[3])) and e.timbre==str(n[4]) and e.role==str(n[5]) and e.layer==int(n[6]))),"all seven delivered event fields survive the compatible runtime adapter")
	check(Whole.source_valid(old) and Whole.source_valid(candidate),"both exact content and DSP sources remain valid")
	var background:=Whole.prepare(0,"pastoral_background_ab2")
	check(background.ok and background.events==candidate.events and background.master_signature==candidate.master_signature,"background audition preserves all original candidate score events")
	check(background.signature!=candidate.signature and background.render_profile=="background_flute_v1" and candidate.render_profile=="original","articulation candidates remain independently selectable and signed")
	var wrong:=candidate.duplicate();wrong.content_id="missing";check(not Whole.source_valid(wrong),"stale content identity cannot publish")
	check(Whole.Master.read().signature=="99051799b81452b287234e509294ec300534ee49fa197f39bcb95936e261c0c0","original master bytes retained")
	check(Import.Document.read("res://数据/原创谱材/河湾练习_v1/score.json").ok,"old M80 document remains strict and readable")
	var result:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"counts":counts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M84/composition_ab_20261030"));FileAccess.open("res://验证记录/M84/composition_ab_20261030/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(result,"\t"));print("COMPOSITION_AB_CPU ",JSON.stringify(result));quit(0 if failures.is_empty() else 1)

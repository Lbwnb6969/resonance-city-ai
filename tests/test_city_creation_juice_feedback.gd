extends SceneTree
const Events=preload("res://scripts/ui/city_creation_juice_events.gd")
const Feedback=preload("res://scripts/ui/city_creation_juice_feedback.gd")
const Fixture=preload("res://tools/fixtures/city_creation_juice_fixture.gd")
const Ordinary=preload("res://tests/test_city_creation_signatures.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for kind:String in ["pastoral_triad","highland_fifth","renaissance_fugue","clockwork_waltz","chrono_counterpoint"]:
		var city:RefCounted=Fixture.city(kind);check(Fixture.apply(city,kind,false).ok,"break actual geometric recipe: "+kind)
		var detector:=Events.new();detector.rebase(city);check(detector.collect(city).is_empty(),"loading existing work is quiet")
		check(Fixture.apply(city,kind,true).ok,"finish with public authoring API: "+kind)
		var original:Dictionary=city.snapshot();var history:int=city._undo.size()
		var events:Array=detector.collect(city).filter(func(event):return event.kind=="chord" and event.key.contains(kind))
		check(not events.is_empty() and events.all(func(event):return event.members.size()>=1 and event.source in event.members),"new chord attributes only real involved homes")
		check(detector.collect(city).is_empty() and city.snapshot()==original and city._undo.size()==history,"no repeated event or save/history side effect")
		city.undo();detector.rebase(city);city.redo();detector.rebase(city)
		check(detector.collect(city).is_empty(),"undo/redo rebasing does not farm a celebration")
	var city:RefCounted=Ordinary.ordinary_city();city.set_house_role("h3","workshop");city.Signatures.refresh(city)
	var detector:=Events.new();detector.rebase(city)
	var keep:Dictionary=city.place_signature("bell_keep",Vector2(-18,0));check(keep.ok,"place an actually earned landmark")
	var events:Array=detector.collect(city).filter(func(event):return event.kind=="aura")
	check(not events.is_empty() and events.any(func(event):return event.source==keep.house_id and event.members.size()>1),"landmark aura groups actual local beneficiaries")
	var sequence:=Events.sequence(city,"h1",["h1","h2","h2","missing","h3"])
	check(sequence.size()==3 and sequence[0]=="h1" and not sequence.has("missing"),"domino order starts at source, deduplicates and excludes removed houses")
	check(is_equal_approx(Feedback.STEP,.1875),"chain subdivision agrees with the 80 BPM sixteenth note")
	var holder:=Node3D.new();root.add_child(holder)
	var arcs:=preload("res://scripts/visual/city_creation_juice_arcs.gd").new();arcs.setup(holder)
	var flat:RefCounted=Fixture.wishes();arcs.emit(flat,"h1","h2",0.)
	var mesh:ArrayMesh=arcs.slots[0].node.mesh;var arrays:Array=mesh.surface_get_arrays(0)
	var both:Dictionary={};var finite:=true;var peak:=0.
	for i in range(arrays[Mesh.ARRAY_VERTEX].size()):
		var at:Vector3=arrays[Mesh.ARRAY_VERTEX][i];var uv:Vector2=arrays[Mesh.ARRAY_TEX_UV][i]
		both[uv.y]=true;finite=finite and at.is_finite() and uv.is_finite()
		peak=maxf(peak,at.y-flat.street_height(Vector2(at.x,at.z)))
	check(both.has(0.) and both.has(1.) and both.size()==2,"actual transverse UV reaches both ink edges")
	check(finite and absf(peak-.22)<.005,"gold curve rises fourteen centimetres over eight centimetre clearance")
	check(arcs.slots[0].node.material_override.shader.code.contains("float core="),"flow material retains paper with dedicated two-tone cross-section")
	arcs.update(.325);check(arcs.slots[0].node.visible,"two-tone arc uses same temporal slot")
	arcs.clear();check(arcs.slots.all(func(row):return not row.node.visible),"all eight slots retire without nodes or audio allocation")
	holder.free()
	print("JUICE_FEEDBACK_CPU ",checks-failures.size(),"/",checks," ",failures);quit(0 if failures.is_empty() else 1)

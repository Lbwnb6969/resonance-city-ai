extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Terrain=preload("res://scripts/world/city_creation_terrain.gd")
const Smooth=preload("res://scripts/world/city_creation_terrain_smooth_rules.gd")
const OUT:="res://验证记录/M84/wide_smooth_20261031"
var checks:=0
var failures:Array=[]
var facts:Dictionary={}
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func cold(city:RefCounted,label:String)->void:
	city.prepare_ground_height();var other:=State.new();check(other.restore(JSON.parse_string(JSON.stringify(city.snapshot()))).ok,label+" restore")
	other.prepare_ground_height()
	for key:String in ["raw_vertices","raw_offsets","vertices","offsets"]:check(city._ground_terrain.get(key)==other._ground_terrain.get(key),label+" exact "+key)
	check(city._road_heights.profiles==other._road_heights.profiles,label+" road profiles")
func curvature(city:RefCounted,at:Vector2)->float:
	var total:=0.
	for i in range(-14,15):
		var p:=at+Vector2(i*.5,0);total+=pow(city.raw_terrain_height(p+Vector2(.5,0))-2.*city.raw_terrain_height(p)+city.raw_terrain_height(p-Vector2(.5,0)),2)
	return total
func public_case(free:bool)->void:
	var city:=State.new()
	if free:city.initialize_free()
	else:city.initialize_empty()
	var at:=Vector2(-24,-12);var p:Array[Vector2]=[at]
	check(city.add_terrain_stroke(p,"raise",3.,.8,1,true).ok,"old organic raise")
	check(city.add_terrain_stroke(p,"smooth",2.,.4).ok,"legacy cross blur stays callable")
	check(city.apply_terrain_target(city.plan_terrain_target(p,3.5,1.2)).ok,"target plateau fixture")
	check(city.add_house(at+Vector2(-5,-4)).ok,"protected house")
	check(city.add_road([at+Vector2(-7,-2),at+Vector2(7,-2)] as Array[Vector2],"path","none").ok,"real protected road")
	city.prepare_ground_height();var before:Dictionary=city.snapshot();var published:PackedFloat32Array=city._ground_terrain.raw_vertices.duplicate()
	var plan:=city.plan_terrain_smooth(p,5.)
	check(plan.ok and plan.changed_vertices>0,"wide blur changes actual candidate")
	check(city.snapshot()==before and city._ground_terrain.raw_vertices==published,"preview leaves original authorship and published raw field intact")
	var old:=State.new();old.restore(before);old.add_terrain_stroke(p,"smooth",5.,.65)
	var current:float=curvature(plan.candidate,at);var cross:float=curvature(old,at)
	check(current<cross,"world kernel reduces shoulder curvature more than old cross blur")
	facts["curvature_"+str(free)]={"old_cross":cross,"wide_disk":current,"plan_ms":plan.elapsed_ms}
	check(city.apply_terrain_target(plan).ok and city.snapshot().schema==22,"commit writes explicit schema22")
	check(city.terrain_strokes.slice(0,before.terrain_strokes.size())==before.terrain_strokes,"all previous old/v2 rows remain intact")
	check(city.CreationPolicy.is_free(city)==free and city.CreationPolicy.data_is_free(city.snapshot())==free,"schema22 keeps exact free/legacy policy")
	cold(city,"first wide smooth")
	for shift:Vector2 in [Vector2(1,0),Vector2(0,1),Vector2(1.5,1.5)]:
		check(city.apply_terrain_target(city.plan_terrain_smooth([at+shift] as Array[Vector2],3.)).ok,"overlapping ordered wide blur")
		cold(city,"multiple wide blur "+str(shift))
	check(city.add_terrain_stroke(p,"lower",2.,.3).ok,"legacy edit follows new blur");cold(city,"old after new")
	check(city.undo().ok and city.undo().ok,"Undo old edit and wide blur");cold(city,"Undo")
	check(city.redo().ok and city.redo().ok,"Redo wide blur and old edit");cold(city,"Redo")
	check(city.add_water([at+Vector2(3.5,0)] as Array[Vector2],2.,"pond").ok,"water edits invalidate complete ordered source");cold(city,"water replay")
	var data:Dictionary=city.snapshot();var stale:=city.plan_terrain_smooth(p,3.);city.add_house(Vector2(-34,-20));check(not city.apply_terrain_target(stale).ok,"stale plan rejected")
	var tampered:=city.plan_terrain_smooth(p,3.);tampered.row.strength=.2;check(not city.apply_terrain_target(tampered).ok,"mutated candidate row rejected")
	for mutate:Callable in [func(d):d.schema=21,func(d):d.terrain_strokes[3].erase("terrain_version"),func(d):d.terrain_strokes[3].erase("kernel_radius"),func(d):d.terrain_strokes[3].kernel_radius=.5,func(d):d.terrain_strokes[3].kernel_radius=NAN,func(d):d.terrain_strokes[3].target_y=1.,func(d):d.terrain_strokes[3].terrain_version=4]:
		var bad:Dictionary=data.duplicate(true);mutate.call(bad);check(not State.new().restore(bad).ok,"invalid or downgraded wide rule rejected")
	var path:=OUT+("/free.json" if free else "/legacy.json");check(city.save_city(path).ok,"atomic schema22 write")
	var disk:=State.new();check(disk.load_city(path).ok and disk.snapshot()==city.snapshot(),"schema22 exact disk roundtrip")
func local_and_replay()->void:
	var at:=Vector2(-24,-12);var p:Array=[[at.x,at.y]];var clear:=func(_p):return 100.
	var rows:Array=[{"mode":"raise","points":p,"radius":3.,"strength":.8}];var field:=Terrain.new();field.prepare_raw([],clear,rows)
	var times:Array=[]
	for i in range(3):
		rows.append(Smooth.row([[at.x+float(i)*.5,at.y]],2.,.65));var source:PackedFloat32Array=field.raw_vertices.duplicate();var began:=Time.get_ticks_usec()
		field.prepare_raw([],clear,rows);times.append((Time.get_ticks_usec()-began)/1000.)
		check(field.stats.raw_changed_vertices<Terrain.COLUMNS*Terrain.ROWS,"pure wide append writes local region")
		var write:Rect2=field.stats.smooth_write_bounds;var read:Rect2=field.stats.smooth_read_bounds
		check(read.encloses(write) and read.size.x>write.size.x and field.stats.smooth_kernel_samples==29,"read halo is distinct from write bounds and uses physical disk")
		var outside_equal:=true
		for z in range(Terrain.ROWS):
			for x in range(Terrain.COLUMNS):
				var v:Vector2=Terrain.LAND_RECT.position+Vector2(x,z)*Terrain.STEP
				if not write.grow(.0001).has_point(v) and source[z*Terrain.COLUMNS+x]!=field.raw_vertices[z*Terrain.COLUMNS+x]:outside_equal=false
		check(outside_equal,"reading the halo does not write its outside vertices")
		var full:=Terrain.new();full.prepare_raw([],clear,rows);check(field.raw_vertices==full.raw_vertices and field.raw_offsets==full.raw_offsets,"pure append equals independent full replay exactly")
	facts.append_ms=times
	for changed:Array in [rows.duplicate(true),rows.slice(0,2),rows.slice(0,1),rows.duplicate(true)]:
		changed[0].strength=.35;field.prepare_raw([],clear,changed);var full:=Terrain.new();full.prepare_raw([],clear,changed)
		check(field.raw_vertices==full.raw_vertices and field.raw_offsets==full.raw_offsets,"early edit/removal replays all overlapping dependent blurs")
	# A halo sample outside the brush must influence the inside without being edited.
	var source:=PackedFloat32Array();source.resize(Terrain.COLUMNS*Terrain.ROWS);source.fill(0.)
	var c:=Vector2i((at-Terrain.LAND_RECT.position)/Terrain.STEP);source[c.y*Terrain.COLUMNS+c.x+3]=1.
	var offsets:=source.duplicate();var untouched:float=source[c.y*Terrain.COLUMNS+c.x+3]
	Smooth.apply(field,source,offsets,Smooth.row(p,1.,1.),clear)
	check(source[c.y*Terrain.COLUMNS+c.x]>0. and source[c.y*Terrain.COLUMNS+c.x+3]==untouched,"full halo influences center while remaining untouched outside brush")
	source.fill(2.25);offsets.fill(0.);var level:=source.duplicate();Smooth.apply(field,source,offsets,Smooth.row(p,3.,1.),clear)
	check(source==level and offsets.count(0.)==offsets.size(),"wide smoothing preserves a level surface without introducing height or offset drift")
	var near_shore:=func(v:Vector2):return maxf(.4,3.+v.x*.1)
	var prefix:Array=[{"mode":"raise","points":p,"radius":3.,"strength":.65}]
	var mixed:Array=prefix+[{"mode":"lower","points":p,"radius":2.,"strength":.35},Smooth.row(p,2.,.65)]
	var batch:=Terrain.new();batch.prepare_raw([],near_shore,prefix);batch.prepare_raw([],near_shore,mixed)
	var complete:=Terrain.new();complete.prepare_raw([],near_shore,mixed)
	check(batch.raw_vertices==complete.raw_vertices and batch.raw_offsets==complete.raw_offsets,"legacy prefix plus first wide blur batch retains pre-storage arithmetic at shore fade")
func old_reference()->void:
	for arg:String in OS.get_cmdline_user_args():
		if not arg.begins_with("--baseline-terrain="):continue
		var city:=State.new();city.initialize_empty();var p:Array[Vector2]=[Vector2(-24,-12)]
		for mode:String in ["raise","plateau","smooth","lower","smooth","raise"]:city.add_terrain_stroke(p,mode,3.,.65)
		city.apply_terrain_target(city.plan_terrain_target(p,3.5,1.2));city.add_terrain_stroke(p,"smooth",3.,.65)
		city.add_water([Vector2(-21,-12)] as Array[Vector2],2.,"pond");city.prepare_ground_height()
		var old=load(arg.trim_prefix("--baseline-terrain=")).new();old.prepare_raw(city.waters,city.water_clearance,city.terrain_strokes)
		check(old.raw_vertices==city._ground_terrain.raw_vertices and old.raw_offsets==city._ground_terrain.raw_offsets,"old v1/v2 history including shore matches exact pre-change terrain source")
func run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));var began:=Time.get_ticks_msec()
	public_case(true);public_case(false);local_and_replay();old_reference()
	var city:=State.new();city.initialize_free();check(city.PlacedLandmarks.place(city,"artisan",Vector2(-24,-12)).ok,"independent landmark fixture")
	var before:Dictionary=city.snapshot();var history:int=city._undo.size();check(not city.plan_terrain_smooth([Vector2(-24,-12)] as Array[Vector2],3.).ok,"wide brush hard rejects independent landmark")
	check(city.snapshot()==before and city._undo.size()==history,"landmark rejection consumes no author data or history")
	var flat:=State.new();flat.initialize_free();var original:Dictionary=flat.snapshot();var no_change:=flat.plan_terrain_smooth([Vector2(-24,-12)] as Array[Vector2],3.)
	check(no_change.ok and no_change.changed_vertices==0 and flat.apply_terrain_target(no_change).get("no_op",false) and flat.snapshot()==original,"flat no-op consumes no schema, revision or history")
	flat.add_house(Vector2(-24,-12));flat.add_terrain_stroke([Vector2(-24,-12)] as Array[Vector2],"raise",1.,.8);flat.prepare_ground_height()
	var hidden:=flat.plan_terrain_smooth([Vector2(-24,-12)] as Array[Vector2],1.)
	check(hidden.ok and hidden.changed_vertices>0 and hidden.candidate.ground_height(Vector2(-24,-12))==flat.ground_height(Vector2(-24,-12)),"raw changes under a protected foundation are retained in the plan")
	check(flat.apply_terrain_target(hidden).ok and flat.snapshot().schema==22,"hidden raw edit is not discarded as a false no-op")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(OUT+"/cpu.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("TERRAIN_WIDE_SMOOTH ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

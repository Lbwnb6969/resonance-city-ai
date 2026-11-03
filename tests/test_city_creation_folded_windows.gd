extends "res://tests/test_city_creation_layered_windows.gd"
const Actions=preload("res://scripts/world/city_creation_hinge_actions.gd")
const Windows=preload("res://scripts/visual/city_creation_layered_windows.gd")
const Probe=preload("res://tools/fixtures/city_creation_transformed_window_probe.gd")
func folded(axis:Vector2i,key:String)->RefCounted:
	var city:=Fixture.State.new();city.initialize_free()
	check(Fixture.Brush.select(city,"pastoral","recessed_townhouse"),"select actual deep-window prototype")
	var cells:Array=[]
	for column in range(3):
		for level in range(2):cells.append({"x":axis.x*column,"z":axis.y*column,"level":level,"kind":"room"})
	check(city.add_house_stroke(Vector2(-28,-20),cells).ok and city.rotate_house("h1",.4).ok and city.set_house_architecture_variant("h1",key).ok,"public three-column two-storey authored fixture")
	return city
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for axis:Vector2i in [Vector2i.RIGHT,Vector2i.LEFT,Vector2i.UP,Vector2i.DOWN]:
		for key:String in ["timber_shutters","stone_pediment"]:
			var city:=folded(axis,key);var original:Dictionary=city.snapshot()
			for degrees:float in [-28.,28.]:
				check(Actions.set_angle(city,"h1",degrees).ok,"public extreme fold "+str(axis)+key+str(degrees));var saved:Dictionary=city.snapshot();var made:=build(city)
				var compact:=0;var pairs:=0;var expected:=true;var inward:=Vector2(axis.y,-axis.x)*signf(degrees)
				for wall:Node3D in made.house.find_children("*","Node3D",true,false):
					if not wall.has_meta("layered_window"):continue
					var plan:Dictionary=wall.get_meta("layered_window");var cell:Dictionary={}
					for candidate:Dictionary in city.houses[0].cells:
						if candidate.id==plan.cell_id:cell=candidate
					var along:=Vector2(cell.x,cell.z).dot(Vector2(axis));var side:=Vector2(wall.basis.z.x,wall.basis.z.z)
					var tight:=side.dot(inward)>.99 and along<=1.
					expected=expected and plan.openings.size()==(1 if tight else 2)
					if tight:compact+=1;expected=expected and is_zero_approx(float(plan.openings[0].x))
					else:pairs+=1
				check(expected and compact>0 and pairs>0,"only real seam-adjacent concave bays compact; convex, ends and far wing retain pairs")
				var result:=Probe.scan(made.house,city.houses[0]);result.axis=axis;result.degrees=degrees;result.recipe=key;facts.append(result)
				check(result.rays>0 and result.blocked==0 and result.glass==result.rays,"all final triangles leave true folded apertures clear and glass present "+str(axis)+key+str(degrees))
				check(city.snapshot()==saved and city.houses[0].architecture_variant==original.houses[0].architecture_variant and city.houses[0].seed==original.houses[0].seed,"read-only geometry preserves author slots, seed and folded snapshot")
				made.house.free();made.r.free();var undone:Dictionary=city.undo();var restored:Dictionary=city.snapshot();restored.revision=original.revision
				check(undone.ok and restored==original and city.revision>int(saved.revision),"Undo restores exact authorship while advancing revision")
			check(Windows.holes(0,city.houses[0],city.houses[0].cells[0],Vector2i(axis.y,-axis.x))==Windows.holes(0,city.houses[0]),"straight house retains exact original paired opening recipe")
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("FOLDED_WINDOWS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

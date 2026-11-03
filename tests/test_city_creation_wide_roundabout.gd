extends "res://tests/test_city_creation_roundabout_rails.gd"
const Width=preload("res://scripts/world/city_creation_roundabout_width.gd")
static func fixture(style:String="tram")->Dictionary:
	var city:=State.new();city.initialize_free();var center:=Vector2(-20,12)
	var ok:bool=city.add_road([center-Vector2(8,0),center+Vector2(8,0)] as Array[Vector2],style,"none").ok
	ok=city.add_road([center-Vector2(0,8),center+Vector2(0,8)] as Array[Vector2],style,"none").ok and ok
	return {"city":city,"center":center,"ok":ok}
func wide_coverage(city:RefCounted,parts:Array,center:Vector2)->Dictionary:
	var hulls:=footprints(parts);var missing:=0;var count:=0;var radius:float=city.Roundabouts.route_radius(city.Roundabouts.all(city.roads)[0])
	for side:float in [-1.,1.]:
		for i in range(720):
			count+=1
			if not covered(center+Vector2.from_angle(float(i)*TAU/720.)*(radius+.32*side),hulls):missing+=1
	return {"samples":count,"missing":missing,"route_radius":radius}
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var f:=fixture();var city:RefCounted=f.city;check(f.ok,"public free-city tram crossing")
	var original:Dictionary=city.snapshot();check(Width.add(city,f.center).ok and city.Roundabouts.all(city.roads)[0].radius==2.4,"old default remains actual 2.4 meters");check(city.Roundabouts.route_radius(city.Roundabouts.all(city.roads)[0])==1.82,"old authored ring retains original exact walking/rail radius")
	check(city.undo().ok and city.roads==original.roads,"old API adoption remains one transaction")
	check(Width.add(city,f.center,3.8).ok and city.snapshot().schema==34,"explicit free wide-ring adoption uses new schema34")
	var saved:Dictionary=city.snapshot();var town:=Renderer.new();town.state=city;city.prepare_ground_height();var parts:=compile(town);var measured:=wide_coverage(city,parts,f.center);facts.append(measured)
	check(parts.size()>100 and measured.missing==0 and is_equal_approx(measured.route_radius,2.51),"actual both steel rails cover all 1440 wide-circle sample points")
	var heads:=open_heads(parts,f.center);check(heads.open==0 and heads.tested>50,"actual wide ring and original approach rail ends meet without gaps")
	check(city.save_city(out+"/wide.json").ok,"wide ring saves through actual atomic API");var reader:=State.new();check(reader.load_city(out+"/wide.json").ok and reader.snapshot()==saved,"schema34 exact author disk cold read")
	check(city.remove_roundabout(f.center).ok and city.Roundabouts.all(city.roads).is_empty() and city.undo().ok,"native domain remove/Undo retains original wide radius");check(city.redo().ok and city.undo().ok and city.roads==saved.roads,"Redo/Undo restores exact marker owner and radius")
	var old:Dictionary=saved.duplicate(true);old.schema=33;check(not State.new().restore(old).ok,"old schema rejects newly authored wide radius")
	for radius:float in [2.6,3.,4.2]:
		var bad:Dictionary=saved.duplicate(true);bad.roads[0].roundabouts[0].radius=radius;check(not State.new().restore(bad).ok,"non-enum radius rejects without normalizing author data")
	var blocked:=fixture("path");check(blocked.city.add_house(Vector2(-15.6,13.8)).ok,"actual nearby house outside old default radius");check(not Width.add(blocked.city,blocked.center,3.8).ok,"entire widened circle keeps real house/door clearance")
	var legacy:=State.new();legacy.initialize_empty();check(not Width.add(legacy,Vector2.ZERO,3.8).ok,"legacy gets no silent new free-only field")
	Renderer.BudgetRebuild.new()._dispose_context(town)
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"facts":facts,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("WIDE_ROUNDABOUT_CPU ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)

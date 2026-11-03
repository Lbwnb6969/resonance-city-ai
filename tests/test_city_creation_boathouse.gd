extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_boathouse_plan.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Surface=preload("res://scripts/world/city_creation_activity_surface.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(value:bool,label:String)->void:
	checks+=1
	if not value:failures.append(label);push_error(label)
static func fixture(prototype:String="creek_boathouse")->RefCounted:
	var city:=State.new();city.initialize_free();city.add_water([Vector2(-32,-17.7),Vector2(-24,-17.7)] as Array[Vector2],2.4,"pond");Brush.select(city,"pastoral",prototype);city.add_house(Vector2(-28,-20));return city
func renderer(city:RefCounted)->Node3D:
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	return r
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var city:RefCounted=fixture();var plan:=Plan.find(city,"h1")
	check(city.houses.size()==1 and city.houses[0].get("architecture","")==Plan.ID,"public unlocked pastoral brush creates the explicit new boathouse")
	check(not plan.is_empty(),"real authored shore supports the wet-slip recipe")
	if plan.is_empty():print("BOATHOUSE_POSE ",JSON.stringify(city.snapshot()));quit(1);return
	var saved:Dictionary=city.snapshot();check(Plan.find(city,"h1")==plan and city.snapshot()==saved,"derivation and repeated reads never change the author world")
	check(is_nan(Plan.height(city,plan.boat)) and Plan.floor_support(city,plan.boat,.1).is_empty() and Surface.support(city,plan.boat,.1).is_empty(),"central mooring slot remains real unsupported water")
	for x:float in [-.80,.80]:
		var p:=Plan.at(plan,Vector2(x,1.));check(Plan.supported(plan,p,.12) and absf(city.street_height(p)-float(plan.top))<.00001 and not Surface.support(city,p,.12).is_empty(),"actual narrow pier supports a whole foot disk "+str(x))
	check(not Plan.supported(plan,Plan.at(plan,Vector2(-.59,.5)),.12),"foot disk spanning the inner wet corner is rejected")
	var proposed:Dictionary=city.houses[0].duplicate(true);proposed.origin=[-27.95,-20.];check(not Plan.preview(city,proposed).is_empty() and city.snapshot()==saved,"placement preview reads the same actual geometry without author writes")
	var road:Dictionary=city.add_road([Plan.at(plan,Vector2(-3.,1.)),Plan.at(plan,Vector2(3.,1.))] as Array[Vector2],"path","none")
	check(not road.ok and "船坞木架" in road.get("message","") and city.snapshot()==saved,"a real new road is rejected by the dock reservation rather than incidental water rules")
	var candidate:Dictionary=city.houses[0].duplicate(true);candidate.id="prospective_neighbor";candidate.origin=[float(plan.wall.x)+1.8,float(plan.wall.y)-.2];check(city._house_overlaps(candidate),"actual extra canopy width reserves a nearby otherwise separate house footprint")
	check(not city.place_plant(Plan.at(plan,Vector2(.9,.05)),"olive",.4).ok,"new plant placement preserves the existing boat canopy clearance")
	var r:=renderer(city);var house:Node3D=r._house(city.houses[0]);check(house.find_children("MooredWoodenSkiff","Node3D",true,false).size()==1 and house.get_meta("boathouse",{})==plan,"actual renderer publishes a real skiff under the exact plan")
	var triangles:=0;var zero:=0
	var dock:Node3D=house.find_child("CreekBoathouseDock",true,false)
	for mesh:MeshInstance3D in dock.find_children("*","MeshInstance3D",true,false):
		var faces:=mesh.mesh.get_faces();triangles+=faces.size()/3
		for i in range(0,faces.size(),3):
			if (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()<.0000000001:zero+=1
	check(triangles>0 and zero==0,"actual new dock, boat and canopy contain no zero-area triangles")
	check(dock.find_child("BoathouseDockSurface",true,false).shape is ConcavePolygonShape3D,"real slip collision follows the published mesh and its central water gap");house.free();r.free()
	check(city.remove_water_at(Vector2(-28,-17.7)).ok and Plan.find(city,"h1").is_empty() and city.houses==saved.houses,"filling real water withdraws only the derived dock and preserves the selected house")
	check(city.undo().ok and Plan.find(city,"h1")==plan,"one Undo restores exact private dock geometry")
	check(city.save_city(out+"/boathouse.json").ok,"ordinary atomic save accepts the new architecture ID")
	var cold:=State.new();check(cold.load_city(out+"/boathouse.json").ok and cold.houses==city.houses and Plan.find(cold,"h1")==plan,"cold file reader reproduces the exact supported dock")
	cold.initialize_free();check(Plan.all(cold).is_empty() and cold.restore(saved).ok and Plan.find(cold,"h1")==plan,"same object reset and restore never reuses obsolete dock metadata")
	var inland:=State.new();inland.initialize_free();Brush.select(inland,"pastoral",Plan.ID);inland.add_house(Vector2(-28,-20));r=renderer(inland);house=r._house(inland.houses[0]);check(Plan.find(inland,"h1").is_empty() and house.find_child("MooredWoodenSkiff",true,false)==null and "水岸或净空不足" in house.get_meta("prototype_caption",""),"inland choice keeps the timber house without a fake boat or water surface");house.free();r.free()
	var rotated:=State.new();rotated.initialize_free();Brush.select(rotated,"pastoral",Plan.ID);check(rotated.add_house(Vector2(-28,-20)).ok and rotated.rotate_house("h1",.4).ok,"public rotated timber house")
	var source:Dictionary=rotated.houses[0];var line:Array[Vector2]=[]
	for p:Vector2 in [Vector2(-32,-17.7),Vector2(-24,-17.7)]:line.append(Plan.Frame.point(source,p))
	check(rotated.add_water(line,2.4,"pond").ok and not Plan.find(rotated,"h1").is_empty(),"real correspondingly rotated water supports the same recipe")
	r=renderer(rotated);house=r._house(rotated.houses[0]);dock=house.find_child("CreekBoathouseDock",true,false);var pose:=Plan.find(rotated,"h1");var actual:Vector3=dock.to_global(Vector3(.8,0.,1.));check(Vector2(actual.x,actual.z).distance_to(Plan.at(pose,Vector2(.8,1.)))<.00001 and absf(actual.y-float(pose.top))<.00001,"actual rendered pier follows the rotated planner pose once, with no double rotation");house.free();r.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"triangles":triangles,"degenerates":zero,"plan":plan};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("BOATHOUSE_CPU ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)

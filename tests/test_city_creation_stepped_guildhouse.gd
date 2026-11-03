extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Plan=preload("res://scripts/world/city_creation_stepped_guildhouse.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
static func fixture(width:int=1,depth:int=1,floors:int=2,prototype:String="stepped_guildhouse")->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"renaissance",prototype);var cells:Array=[]
	for level in range(floors):
		for z in range(depth):
			for x in range(width):cells.append({"x":x,"z":z,"level":level,"kind":"room"})
	city.add_house_stroke(Vector2(-28,-20),cells);return city
func renderer(city:RefCounted)->Node3D:
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	return r
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec()
	var city:RefCounted=fixture();check(city.houses.size()==1 and city.houses[0].architecture==Plan.ID and Plan.active(city,city.houses[0]),"native construction brush creates the explicit stepped guildhouse")
	var saved:Dictionary=city.snapshot();var fresh:=State.new();check(fresh.restore(JSON.parse_string(JSON.stringify(saved))).ok and fresh.snapshot()==saved,"existing authored architecture format cold-restores the new stable recipe")
	var seed_value:int=city.houses[0].seed;var before:Array=city.house_entrances("h1").duplicate(true)
	check(city.set_house_architecture("h1","townhouse").ok and city.undo().ok and city.houses[0].seed==seed_value and city.house_entrances("h1")==before,"explicit choice Undo preserves original seed, rooms and entrances")
	for size:Vector3i in [Vector3i(1,1,1),Vector3i(2,1,2),Vector3i(3,2,3)]:
		var sample:RefCounted=fixture(size.x,size.y,size.z);var r:=renderer(sample);var house:Node3D=r._house(sample.houses[0]);var records:Array=house.get_meta("stepped_guildhouse",[])
		check(records.size()==size.x and house.find_children("SteppedParapet*","Node3D",true,false).size()==size.x*2,"actual roof has separate stepped front/back gables across "+str(size))
		check(house.find_children("GuildTilePitch*","MeshInstance3D",true,false).size()==size.x and house.find_children("RenaissanceDome*","Node3D",true,false).is_empty() and house.get_meta("tower_cells",[]).is_empty(),"stepped recipe replaces ordinary roof and bell/dome crown at "+str(size))
		var triangles:=0;var degenerate:=0
		for mesh:MeshInstance3D in house.find_children("Guild*","MeshInstance3D",true,false):
			var faces:=mesh.mesh.get_faces();triangles+=faces.size()/3
			for i in range(0,faces.size(),3):
				if (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()<.0000000001:degenerate+=1
		check(triangles>0 and degenerate==0,"real new geometry has no zero-area triangles at "+str(size));house.free();r.free()
	geometry_and_history(out)
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("STEPPED_GUILDHOUSE_CPU ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)
func hits(mesh:MeshInstance3D,wall:Node3D,a:Vector3,b:Vector3)->bool:
	var transform:Transform3D=mesh.global_transform.affine_inverse()*wall.global_transform;var faces:=mesh.mesh.get_faces()
	for i in range(0,faces.size(),3):
		if Geometry3D.segment_intersects_triangle(transform*a,transform*b,faces[i],faces[i+1],faces[i+2])!=null:return true
	return false
func geometry_and_history(out:String)->void:
	for sample:Vector3 in [Vector3(2,2,0.),Vector3(3,2,.4),Vector3(2,3,PI*.5)]:
		var city:RefCounted=fixture(int(sample.x),int(sample.y),2);check(city.rotate_house("h1",sample.z).ok,"authored rotation remains available")
		var saved:Dictionary=city.snapshot();var r:=renderer(city);var house:Node3D=r._house(city.houses[0]);var windows:=0;var clear:=true;var backed:=true
		for wall:Node3D in house.find_children("*","Node3D",true,false):
			if not wall.has_meta("guild_shop_window"):continue
			windows+=1;var glass:MeshInstance3D=wall.find_child("RecessedArchedGlass",true,false);var center:float=wall.get_meta("recessed_facade").holes[0].x
			for x:float in [center-.25,center+.25]:
				for y:float in [.66,.95,1.20]:
					backed=backed and hits(glass,wall,Vector3(x,y,.1),Vector3(x,y,-.1))
					for mesh:MeshInstance3D in wall.find_children("*","MeshInstance3D",true,false):
						if mesh.material_override.has_meta("creation_facade_glass"):continue
						clear=clear and not hits(mesh,wall,Vector3(x,y,.40),Vector3(x,y,-.02))
		check(windows>0 and clear and backed,"all actual wide shop arches have clear left/right quadrants and real recessed glass after rotation")
		for gable:Node3D in house.find_children("SteppedParapet*","Node3D",true,false):
			var body:Node3D=gable.get_parent();var profile:=true
			for i in range(4):
				var x:float=.7875-i*.225;var height:float=.38+i*.22;var solid:=false;var air:=false
				for mesh:MeshInstance3D in body.find_children("*","MeshInstance3D",true,false):
					solid=solid or hits(mesh,gable,Vector3(x,height-.10,.2),Vector3(x,height-.10,-.25))
					air=air or hits(mesh,gable,Vector3(x,height+.05,.2),Vector3(x,height+.05,-.25))
				profile=profile and solid and not air
			check(profile,"real triangle intersections prove all four physical step heights and empty space above the risers")
		check(city.snapshot()==saved,"read-only plan, roof geometry and exact collision leave authored state untouched");house.free();r.free()
	var city:RefCounted=fixture(2,2,2);var original:Dictionary=city.snapshot();check(city.add_cell("h1",0,0,2).ok and not Plan.active(city,city.houses[0]) and city.houses[0].architecture==Plan.ID,"partial higher room keeps explicit identity while switching to ordinary structural roof")
	var r:=renderer(city);var house:Node3D=r._house(city.houses[0]);check(not house.has_meta("stepped_guildhouse"),"irregular house really publishes the fallback instead of a false stepped caption");house.free();r.free()
	check(city.undo().ok and Plan.active(city,city.houses[0]) and city.houses==original.houses,"Undo restores complete rectangle and exact authorship")
	check(city.save_city(out+"/guild.json").ok,"new stable prototype writes through validated atomic save")
	var fresh:=State.new();check(fresh.load_city(out+"/guild.json").ok and fresh.houses==city.houses,"actual disk read preserves the explicit prototype")
	var neighbor:Dictionary=city.add_house_stroke(Vector2(-24.4,-20),[{"x":0,"z":0,"level":0,"kind":"room"},{"x":0,"z":0,"level":1,"kind":"room"}]);check(neighbor.ok and city.set_house_architecture(neighbor.house_id,"townhouse").ok,"public ordinary neighbor touches the new roof footprint")
	r=renderer(city);r.building_context.prepare(city.houses,city.roads);var patches:Array=r.building_context.roof_patches(neighbor.house_id)
	check(not patches.is_empty() and patches.all(func(p):return str(p.group_id).begins_with(neighbor.house_id+":")),"ordinary adjacent house keeps a separate complete roof group with no half-roof inherited from the guildhouse");r.free()
	var old:RefCounted=fixture(2,2,2,"townhouse");r=renderer(old);house=r._house(old.houses[0]);check(not house.has_meta("stepped_guildhouse") and house.find_children("SteppedParapet*","Node3D",true,false).is_empty(),"unmodified old prototype gets none of the new geometry");house.free();r.free()
	var born:=State.new();born.initialize_free();check(born.begin_progression_epoch(out+"/new_role.json").ok and Brush.select(born,"renaissance",Plan.ID) and born.add_house(Vector2(-28,-20)).ok and born.houses[0].role=="atelier","enabled optional economy seeds the matching atelier role only for actual new construction")
	var side:RefCounted=fixture(2,3,2);check(side.add_road([Vector2(-21,-18.2),Vector2(-24.8,-18.2)] as Array[Vector2],"path","none").ok,"real side street authors a reachable entrance")
	var bays:Array=Plan.bays(side,side.houses[0]);check(bays.size()==3 and bays.all(func(b):return is_equal_approx(b.angle,PI*.5)),"actual side entrance turns roof bays along the real frontage without changing room geometry")
	var previous_seed:int=side.houses[0].seed;check(side.set_house_style("h1","round_tower").ok and not Plan.active(side,side.houses[0]) and side.set_house_architecture("h1",Plan.ID).ok and Plan.active(side,side.houses[0]) and side.houses[0].seed==previous_seed,"explicitly choosing the same dormant prototype reactivates its actual recipe without rerolling author seed")
	var detailed:RefCounted=fixture(1,1,2,"recessed_townhouse");check(detailed.set_house_architecture_variant("h1","timber_shutters").ok,"existing independent window detail starts on its own actual mother")
	var detail:Dictionary=detailed.houses[0].architecture_variant.duplicate(true);check(detailed.set_house_architecture("h1",Plan.ID).ok and detailed.houses[0].architecture_variant==detail and detailed.set_house_architecture("h1","recessed_townhouse").ok and detailed.houses[0].architecture_variant==detail,"switching mothers retains and restores the original independent detail override")
	check(Brush.sample(side,"h1").ok and side.add_house(Vector2(-21,-22)).ok and side.houses[-1].architecture==Plan.ID,"public appearance sampling creates another real explicitly selected guildhouse")

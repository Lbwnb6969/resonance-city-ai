extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_layered_window_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Colors=preload("res://scripts/visual/city_creation_house_colors.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func crosses(mesh:MeshInstance3D,x:float,y:float)->bool:
	var faces:=mesh.mesh.get_faces()
	for i in range(0,faces.size(),3):
		if Geometry3D.segment_intersects_triangle(Vector3(x,y,.25),Vector3(x,y,-.1),faces[i],faces[i+1],faces[i+2])!=null:return true
	return false
func build(city:RefCounted)->Dictionary:
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for n in [r.shore,r.lilypads,r.wildlife]:r.add_child(n)
	var house:Node3D=r._house(city.houses[0]);return {"r":r,"house":house}
func decoration_clear(wall:Node3D)->bool:
	for h:Dictionary in wall.get_meta("recessed_facade").holes:
		for x:float in [float(h.x)-.07,float(h.x)+.07]:
			for y:float in [float(h.bottom)+.04,float(h.spring)-.03]:
				for mesh:MeshInstance3D in wall.find_children("*","MeshInstance3D",true,false):
					if mesh.material_override.has_meta("creation_facade_glass"):continue
					var transform:Transform3D=wall.global_transform.affine_inverse()*mesh.global_transform;var faces:=mesh.mesh.get_faces()
					for i in range(0,faces.size(),3):
						if Geometry3D.segment_intersects_triangle(Vector3(x,y,.4),Vector3(x,y,-.02),transform*faces[i],transform*faces[i+1],transform*faces[i+2])!=null:return false
	return true
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var windows:=0
	for era:String in ["pastoral","renaissance"]:
		for yaw:float in [0.,.4]:
			var f:=Fixture.build(era,yaw);var city:RefCounted=f.city;check(f.ok and city.houses[0].architecture=="recessed_townhouse","public brush creates explicit deep window architecture")
			var seed_value:int=city.houses[0].seed;var original:Dictionary=city.snapshot();var original_entries:Array=city.house_entrances("h1").duplicate(true);var built:=build(city);var r:Node3D=built.r;var house:Node3D=built.house;var clear:=true;var finite:=true;var layers:=true;var count:=0
			for node:Node3D in house.find_children("*","Node3D",true,false):
				if not node.has_meta("layered_window"):continue
				count+=1;var shell:MeshInstance3D=node.get_node("RecessedFacadeShell");var plan:Dictionary=node.get_meta("recessed_facade")
				for hole:Dictionary in plan.holes:
					clear=clear and not crosses(shell,hole.x,(hole.bottom+hole.spring)*.5) and crosses(shell,hole.x+hole.radius+.035,(hole.bottom+hole.spring)*.5)
					windows+=1
				var faces:=shell.mesh.get_faces()
				for i in range(0,faces.size(),3):finite=finite and faces[i].is_finite() and (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()>1e-12
				layers=layers and node.find_children("LayeredWindowGlass*","MeshInstance3D",true,false).all(func(m):return m.position.z<-.02 and m.material_override.has_meta("creation_facade_glass")) and node.find_children("LayeredInnerFrame*","MeshInstance3D",true,false).size()==4 and node.find_children("LayeredStoneJamb*","MeshInstance3D",true,false).size()==4
				check(decoration_clear(node),"complete wall decoration leaves upper and lower window quadrants clear")
			print("WINDOW_CASE ",era," ",yaw," walls ",count," entries ",original_entries.size()," cells ",JSON.stringify(city.houses[0].cells)," clear ",clear)
			check(count==(4 if era=="renaissance" else 7) and clear,"all full-width sample facades have real clear windows and solid adjacent wall")
			check(finite and layers,"four layers have finite nondegenerate shell geometry and independent glass routing")
			Colors.prepare(r,house,city.houses[0]);check(not house.get_meta("house_color_cache").materials.any(func(row):return row.material.has_meta("creation_facade_glass")),"glass stays outside author recolor recipes")
			check(city.snapshot()==original and city.houses[0].seed==seed_value and city.house_entrances("h1")==original_entries,"window construction changes no authorship seed or entrances")
			var cold:=Fixture.State.new();check(cold.restore(JSON.parse_string(JSON.stringify(original))).ok and cold.houses[0].architecture=="recessed_townhouse","existing schema serializes explicit choice")
			check(city.set_house_architecture("h1","townhouse").ok and city.undo().ok and city.houses[0].architecture=="recessed_townhouse" and city.redo().ok,"explicit architectural choice supports Undo Redo")
			house.free();r.free()
	var old:=Fixture.build("renaissance",0.,false);var built:=build(old.city);check(built.house.find_children("LayeredWindowGlass*","MeshInstance3D",true,false).is_empty(),"old townhouse recipe receives no new window pieces");built.house.free();built.r.free()
	for special:Array in [["pastoral",1,false],["renaissance",2,true]]:
		var f:=Fixture.build(special[0],.4,true,special[1],special[2]);check(f.ok,"single-level or terrace-adjacent sample uses public authoring")
		built=build(f.city);var marked:=0;var clear:=true
		for node:Node3D in built.house.find_children("*","Node3D",true,false):
			if node.has_meta("layered_window"):marked+=1;clear=clear and decoration_clear(node)
		check(marked>0 and clear,"single-level and terrace lintels do not obstruct complete deep windows")
		check(built.house.find_children("GreekTempleMassing*","Node3D",true,false).is_empty(),"explicit street house does not inherit automatic temple massing")
		built.house.free();built.r.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"windows":windows,"seconds":(Time.get_ticks_msec()-began)/1000.}
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("LAYERED_WINDOWS ",JSON.stringify(report));quit(0 if failures.is_empty() else 1)

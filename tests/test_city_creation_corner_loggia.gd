extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Plan=preload("res://scripts/world/city_creation_corner_loggia.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Guild=preload("res://tests/test_city_creation_stepped_guildhouse.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(value:bool,label:String)->void:
	checks+=1
	if not value:failures.append(label);push_error(label)
static func fixture(width:int=2,depth:int=2,floors:int=2)->RefCounted:return Guild.fixture(width,depth,floors,Plan.ID)
func renderer(city:RefCounted)->Node3D:
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	return r
static func hits(mesh:MeshInstance3D,wall:Node3D,a:Vector3,b:Vector3)->bool:
	var inverse:Transform3D=mesh.global_transform.affine_inverse()*wall.global_transform;var faces:=mesh.mesh.get_faces()
	for i in range(0,faces.size(),3):
		if Geometry3D.segment_intersects_triangle(inverse*a,inverse*b,faces[i],faces[i+1],faces[i+2])!=null:return true
	return false
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for size:Vector3i in [Vector3i(1,1,1),Vector3i(2,2,2),Vector3i(3,2,3)]:
		var city:RefCounted=fixture(size.x,size.y,size.z);check(city.houses.size()==1 and city.houses[0].get("architecture","")==Plan.ID,"public brush stamps the new unlocked Renaissance prototype "+str(size))
		var saved:Dictionary=city.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok and cold.snapshot()==saved,"existing authored architecture field round-trips without new schema "+str(size))
		var old:Dictionary=saved.houses[0].duplicate(true);check(city.set_house_architecture("h1","townhouse").ok and city.undo().ok and city.houses[0]==old,"explicit choice Undo restores seed, cells and original author fields "+str(size))
		var r:=renderer(city);var built:Node3D=r._house(city.houses[0]);var rows:Array=built.get_meta("corner_loggia",[])
		check(rows.size()==size.x*size.y and rows.filter(func(row):return row.crown).size()==1,"one highest external corner crown plus real roof terraces "+str(size))
		check(built.find_children("TwoSidedLoggia","Node3D",true,false).size()==1 and built.find_children("OpenTripleArcade*","Node3D",true,false).size()==2,"two perpendicular open triple arcades "+str(size))
		check(built.get_meta("tower_cells",[]).is_empty() and built.find_children("RenaissanceDome*","Node3D",true,false).is_empty(),"explicit crown replaces automatic bell/dome geometry "+str(size))
		var blocked:=0;var rays:=0;var solid:=0
		for wall:Node3D in built.find_children("OpenTripleArcade*","Node3D",true,false):
			for hole:Dictionary in wall.get_meta("loggia_holes"):
				for dx:float in [-.11,0.,.11]:
					var a:=Vector3(float(hole.x)+dx,.78,.25);var b:=Vector3(a.x,a.y,-.25);rays+=1
					for mesh:MeshInstance3D in built.find_children("*","MeshInstance3D",true,false):
						if hits(mesh,wall,a,b):blocked+=1;break
			var pier:MeshInstance3D=wall.find_child("LoggiaPierAndArch",true,false)
			if hits(pier,wall,Vector3(.235,.78,.2),Vector3(.235,.78,-.2)):solid+=1
		check(rays==18 and blocked==0 and solid==2,"all six real arch holes clear while the inter-arch piers remain solid "+str(size))
		var triangles:=0;var degenerates:=0;var overflow:=0
		for node:Node3D in built.find_children("CornerLoggiaRoof_*","Node3D",true,false):
			for mesh:MeshInstance3D in node.find_children("*","MeshInstance3D",true,false):
				var transform:Transform3D=node.global_transform.affine_inverse()*mesh.global_transform;var faces:=mesh.mesh.get_faces();triangles+=faces.size()/3
				for i in range(0,faces.size(),3):
					if (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()<.0000000001:degenerates+=1
				for vertex:Vector3 in faces:
					var at:Vector3=transform*vertex
					if absf(at.x)>.9001 or absf(at.z)>.9001:overflow+=1
		check(triangles>0 and degenerates==0 and overflow==0,"actual meshes are nondegenerate and stay inside their owned cell footprints "+str(size))
		check(built.find_children("CornerLoggiaSurface","CollisionShape3D",true,false).all(func(shape):return shape.shape is ConcavePolygonShape3D),"actual crown and terrace collision follows the mesh instead of closing arches with a box")
		facts.append({"size":size,"rays":rays,"blocked":blocked,"triangles":triangles,"degenerates":degenerates,"overflow":overflow});built.free();r.free()
	var city:RefCounted=fixture(1,1,1);var original:Dictionary=city.snapshot();check(city.add_cell("h1",0,1,0,"room").ok and city.add_cell("h1",1,0,0,"room").ok,"same house retains native vertical and horizontal modular extension")
	check(city.houses[0].architecture==Plan.ID and city.undo().ok and city.undo().ok and city.houses[0]==original.houses[0],"modular add/Undo never changes prototype or house seed")
	check(city.rotate_house("h1",.4).ok,"authored rotation remains available");var r:=renderer(city);var h:Node3D=r._house(city.houses[0]);check(is_equal_approx(float(h.get_meta("house_yaw")),.4) and h.get_meta("corner_loggia_clear"),"ordinary house transform rotates the actual new gallery and collision together");h.free();r.free()
	var enclosed:RefCounted=fixture(1,1,1);Brush.select(enclosed,"renaissance","townhouse")
	for side:Vector2i in Plan.SIDES:check(enclosed.add_house(Vector2(-28,-20)+Vector2(side)*1.8).ok,"actual neighboring room occupies an external roof face "+str(side))
	r=renderer(enclosed);h=r._house(enclosed.houses[0]);check(not h.get_meta("corner_loggia_clear",true) and "净空不足" in h.get_meta("prototype_caption","") and enclosed.houses[0].architecture==Plan.ID,"fully surrounded roof retains the author's choice and honestly exposes its missing external corner");h.free();r.free()
	var hinged:RefCounted=fixture(2,1,1);var before_hinge:Dictionary=hinged.snapshot();check(preload("res://scripts/world/city_creation_hinge_actions.gd").set_angle(hinged,"h1",18.).ok and not Plan.active(hinged,hinged.houses[0]),"actual authored hinge keeps the choice while suspending the undeformed gallery recipe")
	r=renderer(hinged);h=r._house(hinged.houses[0]);check(h.find_children("TwoSidedLoggia","Node3D",true,false).is_empty() and hinged.undo().ok and hinged.houses[0]==before_hinge.houses[0],"hinged roof falls back to existing shape rendering and one Undo restores the complete author record");h.free();r.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("CORNER_LOGGIA_CPU ",JSON.stringify({"ok":report.ok,"checks":checks,"failures":failures,"seconds":report.seconds}));quit(0 if report.ok else 1)

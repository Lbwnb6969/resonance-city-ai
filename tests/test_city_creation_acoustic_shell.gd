extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Brush=preload("res://scripts/world/city_creation_build_brush.gd")
const Plan=preload("res://scripts/world/city_creation_acoustic_shell.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Hits=preload("res://tests/test_city_creation_corner_loggia.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(value:bool,label:String)->void:
	checks+=1
	if not value:failures.append(label);push_error(label)
static func fixture(width:int=2,depth:int=2,floors:int=1,prototype:String="timber_acoustic_shell")->RefCounted:
	var city:=State.new();city.initialize_free();Brush.select(city,"modern_eco",prototype);var rooms:Array=[]
	for level in range(floors):
		for z in range(depth):
			for x in range(width):rooms.append({"x":x,"z":z,"level":level,"kind":"room"})
	city.add_house_stroke(Vector2(-28,-20),rooms);return city
func renderer(city:RefCounted)->Node3D:
	var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
	for node in [r.shore,r.lilypads,r.wildlife]:r.add_child(node)
	return r
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for size:Vector3i in [Vector3i(1,1,1),Vector3i(2,2,1),Vector3i(3,2,2)]:
		var city:RefCounted=fixture(size.x,size.y,size.z);check(city.houses.size()==1 and city.houses[0].architecture==Plan.ID,"public modern brush constructs the unlocked shell "+str(size))
		var saved:Dictionary=city.snapshot();var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(saved))).ok and cold.snapshot()==saved,"existing architecture field round-trips without new schema "+str(size))
		var old:Dictionary=city.houses[0].duplicate(true);check(city.set_house_architecture("h1","chalet").ok and city.undo().ok and city.houses[0]==old,"choice Undo preserves every original cell and seed "+str(size))
		var plan:=Plan.for_house(city,city.houses[0]);var r:=renderer(city);var h:Node3D=r._house(city.houses[0]);var stage:Node3D=h.find_child("TimberAcousticHall",true,false)
		check(stage!=null and h.get_meta("acoustic_shell",{})==plan,"real curved shell consumes the same city geometry "+str(size))
		check(h.get_meta("modern_roofs",[]).is_empty() and h.find_children("AlpineRoof*","Node3D",true,false).is_empty(),"curved hall replaces ordinary house roof and hidden full wall volume "+str(size))
		var triangles:=0;var zero:=0;var outside:=0
		for mesh:MeshInstance3D in stage.find_children("*","MeshInstance3D",true,false):
			var transform:Transform3D=stage.global_transform.affine_inverse()*mesh.global_transform;var faces:=mesh.mesh.get_faces();triangles+=faces.size()/3
			for i in range(0,faces.size(),3):
				if (faces[i+1]-faces[i]).cross(faces[i+2]-faces[i]).length_squared()<.0000000001:zero+=1
			for p:Vector3 in faces:
				var at:Vector3=transform*p
				if absf(at.x)>float(plan.width)*.5+.001 or absf(at.z)>float(plan.depth)*.5+.001:outside+=1
		check(triangles>0 and zero==0 and outside==0,"actual curved panels and ribs remain finite, nondegenerate and inside owned footprints "+str(size))
		var blocked:=0
		for x:float in [-.25,0.,.25]:
			for y:float in [.55,1.1]:
				var a:=Vector3(x,y,float(plan.depth)*.5+.12);var b:=Vector3(x,y,float(plan.depth)*.5-.32)
				for mesh:MeshInstance3D in h.find_children("*","MeshInstance3D",true,false):
					if Hits.hits(mesh,stage,a,b):blocked+=1;break
		check(blocked==0,"actual front mouth has no concealed facade mesh "+str(size))
		check(h.find_children("AcousticSkinSurface","CollisionShape3D",true,false).size()==int(h.get_meta("acoustic_shell_stats").lanes)*int(h.get_meta("acoustic_shell_stats").curve_steps),"skin picking follows exact panels and original top-cell identities "+str(size))
		facts.append({"size":size,"triangles":triangles,"degenerates":zero,"outside":outside,"blocked":blocked});h.free();r.free()
	var city:RefCounted=fixture();var source:Dictionary=city.houses[0].duplicate(true);var entries:Array=city.house_entrances("h1");check(entries.all(func(e):return e.side==Plan.for_house(city,source).front),"published entrance ports share the actual open face")
	check(city.add_cell("h1",0,0,1).ok and not Plan.active(city,city.houses[0]) and city.houses[0].architecture==Plan.ID,"partial upper-story edit preserves choice and selects existing fallback geometry")
	check(city.undo().ok and city.houses[0]==source and Plan.active(city,city.houses[0]),"one Undo restores complete curved shell and author state")
	var side:=Vector2(-29.45,-20.);check(city.add_road([Vector2(-32,-20),side] as Array[Vector2],"path","none").ok,"actual side street endpoint reaches an authored room entrance")
	var side_plan:=Plan.for_house(city,city.houses[0]);check(side_plan.front==Vector2i.LEFT and city.house_entrances("h1").all(func(e):return e.side==Vector2i.LEFT),"street edit rotates the mouth and withdraws rear phantom entrance ports")
	var rotated:RefCounted=fixture();check(rotated.rotate_house("h1",.4).ok,"normal authored house rotation remains available on clear land");var r:=renderer(rotated);var h:Node3D=r._house(rotated.houses[0]);check(is_equal_approx(float(h.get_meta("house_yaw")),.4) and h.get_meta("rigid_architecture",false),"new shell follows one normal authored root transform");h.free();r.free()
	var record:={"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(record,"\t"));print("ACOUSTIC_SHELL_CPU ",JSON.stringify({"ok":record.ok,"checks":checks,"failures":failures,"seconds":record.seconds}));quit(0 if record.ok else 1)

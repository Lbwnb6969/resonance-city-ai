extends SceneTree
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Styles=preload("res://scripts/visual/city_creation_house_styles.gd")
const OUT="res://验证记录/木构与石屋_2026-10-16/style_geometry.json"
var checks:Array=[]
var failures:Array=[]
func _initialize() -> void: _run.call_deferred()
func _signature(wall:Node3D)->Dictionary:
	var triangles:PackedStringArray=[]
	var meshes=wall.find_children("*","MeshInstance3D",true,false)
	for mesh:MeshInstance3D in meshes:
		var color:Color=mesh.material_override.albedo_color
		var faces:PackedVector3Array=mesh.mesh.get_faces()
		for i in range(0,faces.size(),3):
			var points:PackedStringArray=[]
			for j in range(3):
				var at:Vector3=mesh.transform*faces[i+j]
				points.append(str(Vector3i(roundi(at.x*10000),roundi(at.y*10000),roundi(at.z*10000))))
			points.sort()
			triangles.append(str(points)+color.to_html())
	triangles.sort()
	return {"triangles":triangles.size(),"digest":str(triangles).sha256_text(),"meshes":meshes.size()}
func _run()->void:
	var script=GDScript.new()
	script.source_code=FileAccess.get_file_as_string("res://验证记录/木构与石屋_2026-10-16/逐块对照Helper.gd.txt")
	assert(script.reload()==OK)
	var before=script.new()
	var renderer=Renderer.new();root.add_child(renderer);renderer.add_child(renderer.shore)
	for style:String in ["timber","stone"]:
		for door:bool in [false,true]:
			var a=Node3D.new();renderer.add_child(a)
			var b=Node3D.new();renderer.add_child(b)
			before.build_details(renderer,a,Renderer.PALETTES[0],door,style,81977)
			Styles.build_details(renderer,b,Renderer.PALETTES[0],door,style,81977)
			var old=_signature(a);var current=_signature(b)
			var ok=old.triangles==current.triangles and old.digest==current.digest and current.meshes<old.meshes and a.get_meta("style_details")==b.get_meta("style_details")
			var label=style+" door="+str(door)
			checks.append({"label":label,"passed":ok,"old":old,"current":current})
			if not ok: failures.append(label);push_error(label)
			a.free();b.free()
	renderer.free();before=null;script=null
	FileAccess.open(OUT,FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"scope":"Old per-piece Helper reconstructed from the original tool transcript, compared with optimized production geometry: triangles at 0.1mm position resolution, material colors and metadata; node count reduction. Old source is a transcript reconstruction, not an automatic pre-change snapshot."},"\t",true,true))
	await process_frame
	print("STYLE_BATCH_GEOMETRY ","PASS" if failures.is_empty() else "FAIL"," checks=",checks.size())
	quit(0 if failures.is_empty() else 1)

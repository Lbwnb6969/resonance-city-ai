extends SceneTree
const Capture=preload("res://scripts/ui/city_creation_render_capture.gd")
const OUT="res://验证记录/彩色面与舞台重叠_2026-10-19/isolation_test"
class Demo extends Node3D:
	var town:Node3D
	var life:Node3D
func _initialize()->void:_run.call_deferred()
func _run()->void:
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT))
	root.size=Vector2i(720,450);Engine.max_fps=120
	var demo:=Demo.new();root.add_child(demo)
	demo.town=Node3D.new();demo.town.name="Town";demo.add_child(demo.town)
	demo.life=Node3D.new();demo.life.name="Life";demo.add_child(demo.life)
	var group:=Node3D.new();group.name="KnownFaultLayer";demo.town.add_child(group)
	var cube:=MeshInstance3D.new();cube.name="KnownGreenMesh";cube.mesh=BoxMesh.new();cube.position.z=-4.
	var mat:=StandardMaterial3D.new();mat.shading_mode=BaseMaterial3D.SHADING_MODE_UNSHADED;mat.albedo_color=Color.GREEN;cube.material_override=mat;group.add_child(cube)
	var hidden:=Node3D.new();hidden.name="OriginallyHidden";hidden.hide();demo.town.add_child(hidden)
	var camera:=Camera3D.new();demo.add_child(camera);camera.current=true
	for i in range(6):await process_frame
	var result:Dictionary=await Capture.isolate(demo,OUT+"/known")
	var found:=false
	for row:Dictionary in result.layers:
		if str(row.path).ends_with("KnownGreenMesh"):found=true
	var ok:bool=DisplayServer.get_name()!="headless" and result.baseline_pixels>20 and result.suspects==["Town/KnownFaultLayer"] and found and group.visible and cube.visible and not hidden.visible and not paused
	print("CAPTURE_ISOLATION ",JSON.stringify({"ok":ok,"facts":result}))
	var file:=FileAccess.open(OUT+"/report.json",FileAccess.WRITE);file.store_string(JSON.stringify({"ok":ok,"facts":result},"\t",true,true));file.close()
	demo.queue_free();await process_frame;quit(0 if ok else 1)

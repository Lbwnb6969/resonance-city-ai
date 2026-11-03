extends "res://tests/test_city_creation_dormer_slots.gd"
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
func complete_clear(house:Node3D)->bool:
	var meshes:Array=house.find_children("*","MeshInstance3D",true,false)
	for wall:Node3D in house.find_children("*","Node3D",true,false):
		if not wall.has_meta("layered_window"):continue
		for h:Dictionary in wall.get_meta("layered_window").openings:
			for x:float in [float(h.x)-.07,float(h.x)+.07]:
				for y:float in [float(h.bottom)+.04,float(h.spring)-.03]:
					var a:=wall.to_global(Vector3(x,y,.40));var b:=wall.to_global(Vector3(x,y,-.02))
					for mesh:MeshInstance3D in meshes:
						if mesh.material_override.has_meta("creation_facade_glass"):continue
						var inverse:=mesh.global_transform.affine_inverse();var faces:=mesh.mesh.get_faces()
						for i in range(0,faces.size(),3):
							if Geometry3D.segment_intersects_triangle(inverse*a,inverse*b,faces[i],faces[i+1],faces[i+2])!=null:return false
	return true
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out));var began:=Time.get_ticks_msec();var facts:Array=[]
	for era:String in ["pastoral","renaissance","clockwork","modern_eco"]:
		for recipe:int in [0,1]:
			var city:RefCounted=fixture(era,0.,3,2);var before:Dictionary=city.snapshot();var house:Dictionary=city.houses[0]
			check(house.get("architecture")=="recessed_townhouse" and city.house_era(house)==era,"explicit original deep street prototype selectable in "+era)
			var window:String=["timber_shutters","stone_pediment"][recipe];var dormer:String=["gable_light","shed_light"][recipe];var chimney:String=["brick_twin_pots","copper_cowl"][recipe];var trim:String=["timber_verge","stone_dentils"][recipe];var porch:String=["flower_pots","firewood_crate"][recipe]
			check(city.set_house_architecture_variant("h1",window).ok and city.set_house_dormer("h1",dormer).ok and city.set_house_chimney("h1",chimney).ok and Choice.set_trim(city,"h1",trim).ok and Choice.set_porch(city,"h1",porch).ok,"original five-slot choices accepted in "+era+str(recipe))
			var made:=build(city);var packet:Dictionary=made.house.get_meta("architecture_detail_status",{});facts.append({"era":era,"recipe":recipe,"status":packet})
			for slot:String in ["windows","dormer","chimney","gable_trim","porch"]:check(packet.get(slot,{}).get("active",false),"actual five-slot geometry active "+era+str(recipe)+slot+" "+JSON.stringify(packet.get(slot,{})))
			var clear:=true;var holes:=0
			for wall:Node3D in made.house.find_children("*","Node3D",true,false):
				if not wall.has_meta("layered_window"):continue
				holes+=1;clear=clear and decoration_clear(wall)
			check(holes>0 and clear and complete_clear(made.house),"real open facade has unobstructed glass across complete house and arcades "+era+str(recipe))
			if era in ["clockwork","modern_eco"]:
				var roofs:Array=made.house.find_children("DormerTilePitch","MeshInstance3D",true,false)
				if recipe==0:check(not roofs.is_empty() and int(roofs[0].material_override.get_meta("creation_surface_kind"))==Wall.Kind.SLATE,"new era dormer uses real slate material "+era)
			check(house.seed==before.houses[0].seed and house.cells==before.houses[0].cells,"no seed reroll or geometry author mutation "+era+str(recipe))
			made.house.free();made.r.free()
	FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.,"facts":facts},"\t"));print("DETAIL_ERAS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"seconds":(Time.get_ticks_msec()-began)/1000.}));quit(0 if failures.is_empty() else 1)

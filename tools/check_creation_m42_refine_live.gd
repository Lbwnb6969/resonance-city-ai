extends "res://tools/check_creation_music_experience_live.gd"
func run()->void:
	OUT="res://验证记录/M42/refine";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(OUT));Engine.max_fps=100
	demo=Scene.instantiate();demo.persistence=false;demo.collection_directory=OUT+"/works";root.add_child(demo);await settle()
	var groups:Array=preload("res://tools/fixtures/city_creation_critic_visuals.gd").groups()
	for row:Array in [[3,"venetian_loggia",Vector2i(1024,768),2,true],[2,"iron_conservatory",Vector2i(1024,768),2,false],[1,"panorama",Vector2i(1440,900),1,false]]:
		var group:Dictionary=groups[row[0]];var index:int=group.keys.find(row[1]);check(index>=0,"fixture actual recipe "+row[1])
		demo.set_process(true);await settle();demo._after_edit(demo.state.restore(group.city.snapshot()),"history");await settle();demo.life.set_process(false)
		for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).poll();demo.get_meta(meta).set_process(false)
		demo.set_process(false);root.size=row[2];var id:String=group.ids[index];var h:Dictionary=demo.town._house_record(id)
		demo.focus=Vector3(h.origin[0],1.7,h.origin[1]);demo.zoom=25. if row[4] else 11.;demo.pitch=.8 if row[4] else deg_to_rad(15.);demo.yaw=.62;demo._update_camera();demo._set_light_phase(row[3])
		if row[4]:demo.spatial_popover.open_for_house(id);await create_timer(.25).timeout;demo.spatial_popover.refresh();demo.intuitive_guidance.update_guidance(0.)
		else:demo.ui_layer.hide()
		await capture(row[1]);demo.spatial_popover.close();demo.ui_layer.show();demo.set_process(true)
		for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).set_process(true)
	FileAccess.open(OUT+"/report.json",FileAccess.WRITE).store_string(JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}))
	print("M42_REFINE ",checks," ",failures);quit(0 if failures.is_empty() else 1)


extends RefCounted
const Final=preload("res://tools/fixtures/city_creation_final_prototypes_live.gd")
const Alpine=preload("res://tools/fixtures/city_creation_alpine_fixture.gd")
static func groups()->Array:
	var a:=Alpine.build()
	for i in range(6):assert(a.city.set_house_architecture(a.flat[i],Final.Choice.ALPINE[i]).ok)
	var result:Array=[Final.neoclassical_fixture(),{"city":a.city,"ids":a.flat,"keys":Final.Choice.ALPINE}]
	for fixture in [preload("res://tools/fixtures/city_creation_clockwork_prototypes_fixture.gd"),preload("res://tools/fixtures/city_creation_renaissance_prototypes_fixture.gd")]:
		var built:Dictionary=fixture.build();var ids:Array=[]
		for key:String in built.groups:ids.append(built.groups[key][1])
		result.append({"city":built.city,"ids":ids,"keys":built.groups.keys()})
	return result
static func capture(c,full:bool=false)->Dictionary:
	var demo=c.demo;var tree:SceneTree=demo.get_tree();var out:String=c.OUT+"/architecture";DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var files:Array=[];var seen:Dictionary={}
	for group:Dictionary in groups():
		await c.show(group.city,Vector2.ZERO,"architecture")
		for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).poll();demo.get_meta(meta).set_process(false)
		demo.set_process(false)
		for i in range(group.ids.size()):
			var key:String=group.keys[i];var id:String=group.ids[i];var house:Dictionary=demo.town._house_record(id)
			for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
				tree.root.size=size;demo.ui_layer.show();demo.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
				demo.focus=Vector3(house.origin[0],1.7,house.origin[1]);demo.zoom=25.;demo.pitch=.8;demo.yaw=.62;demo._update_camera();demo._set_light_phase(2 if size.x==1024 else 0)
				demo.spatial_popover.open_for_house(id);await tree.create_timer(.21).timeout;demo.spatial_popover.refresh();demo.intuitive_guidance.update_guidance(0.)
				c.check(demo.spatial_popover.architecture_button.kind=="prototype/"+key and demo.spatial_popover.ring.placement_ok,"native actual recipe and compass "+key+str(size.x))
				await _shot(c,out,"%d_%s_compass"%[size.x,key],files)
				demo.spatial_popover.close();demo.ui_layer.hide();demo.zoom=11.
				for phase in range(3):
					demo._set_light_phase(phase)
					for angle:int in ([5,10,15,35] if full or i==0 else [35]):
						demo.pitch=deg_to_rad(angle);demo._update_camera();await _shot(c,out,"%d_%s_%d_phase%d"%[size.x,key,angle,phase],files)
			seen[key]=true
		demo.set_process(true)
		for meta:String in ["inspiration_draft","vignette_journey"]:demo.get_meta(meta).set_process(true)
	c.check(seen.size()==18,"eighteen actual recipes in critic image manifest")
	demo.ui_layer.show();return {"recipes":seen.keys(),"files":files,"full_angles":full}
static func _shot(c,out:String,label:String,files:Array)->void:
	c.demo.toast.hide();c.demo.toast_time=0.;c.demo.town.clear_preview();await RenderingServer.frame_post_draw
	var path:String=out+"/"+label+".png";c.check(c.root.get_texture().get_image().save_png(path)==OK,"critic native image "+label);files.append(path)

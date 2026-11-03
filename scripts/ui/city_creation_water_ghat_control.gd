extends Node
const Plan=preload("res://scripts/world/city_creation_water_ghat.gd")
var demo
var button:Button
var road_id:=""
var busy:=false
var last_backup:Dictionary={}
var cache_key:Array=[]
var candidates:Dictionary={}
func setup(owner)->void:
	demo=owner;demo.add_child(self);demo.set_meta("water_ghat_control",self);button=demo._button("亲水石埠",choose);button.name="WaterGhatChoice";demo.add_child(button);button.hide()
func _process(_delta:float)->void:
	if busy:return
	var key:=[demo.state.get_instance_id(),demo.state.revision]
	if key!=cache_key:cache_key=key;candidates.clear()
	if demo.tool!=2 or demo.edit_pending() or demo.get_meta("road_tool").active() or demo.get_meta("road_tool").blocked() or not demo.state.CreationPolicy.is_free(demo.state):button.hide();road_id="";return
	if button.visible and button.get_global_rect().grow(12).has_point(demo.pointer):return
	var best:=52.;var chosen:Dictionary={};var at:=Vector2.ZERO
	for road:Dictionary in demo.state.roads:
		for first:bool in [true,false]:
			var p:Array=road.points[0 if first else road.points.size()-1];var point:=Vector3(p[0],demo.state.street_height(Vector2(p[0],p[1])),p[1]);var screen:Vector2=demo.camera.unproject_position(point);var distance:=screen.distance_to(demo.pointer)
			if distance>=best or demo.camera.is_position_behind(point):continue
			if not road.get("water_ghat",false):
				if not candidates.has(str(road.id)):candidates[str(road.id)]=not Plan.preview(demo.state,road).plans.is_empty()
				if not candidates[str(road.id)]:continue
			best=distance;chosen=road;at=screen
	if chosen.is_empty():button.hide();road_id="";return
	road_id=str(chosen.id);button.text="收起石埠 · 退回干岸" if chosen.get("water_ghat",false) else "接到水际 · 亲水石埠";button.reset_size();button.position=(at+Vector2(12,-button.size.y-12)).clamp(Vector2(8,8),demo.get_viewport().get_visible_rect().size-button.size-Vector2(8,8));button.show()
func choose()->void:
	if busy or road_id.is_empty() or demo.save_blocked:return
	var city:RefCounted=demo.state;var revision:int=city.revision;var epoch:int=city._wish_epoch;var id:=road_id;var original:Dictionary={}
	for road:Dictionary in city.roads:
		if str(road.id)==id:original=road;break
	if original.is_empty():return
	var enabled:bool=not original.get("water_ghat",false);busy=true;button.disabled=true
	if enabled and city.snapshot().schema<Plan.SCHEMA:
		demo.gallery._set_busy(true);last_backup=await demo.gallery._capture("开启亲水石埠前的城市","before_plaza_or_ghat_rules");demo.gallery._set_busy(false)
		if not last_backup.ok or demo.state!=city or city.revision!=revision or city._wish_epoch!=epoch:busy=false;button.disabled=false;return
	var result:=Plan.choose(city,id,enabled);busy=false;button.disabled=false;demo._after_edit(result,"history")

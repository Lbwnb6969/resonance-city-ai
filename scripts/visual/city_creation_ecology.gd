extends RefCounted
## Independent derived views of the same completed household services.
## Geometry changes retire all placement caches; rewards change only consumers.
const Bunting=preload("res://scripts/visual/city_creation_bunting.gd")
const Flora=preload("res://scripts/visual/city_creation_harmony_flora.gd")
var geometry_key: Variant=null
var habitat_key: Variant=null
var bunting_key: Variant=null
var flora_key: Variant=null
var wire_key: Variant=null
var wire_context: Dictionary={}
var flora_records: Dictionary={}
var stats: Dictionary={"refreshes":0,"habitat_updates":0,"bunting_queries":0,"bunting_updates":0,"flora_updates":0,"max_refresh_us":0}

func _remove(parent: Node3D,names: Array[String])->void:
	for child: Node in parent.get_children():
		if str(child.name) in names:parent.remove_child(child);child.queue_free()

func refresh(renderer: Node3D)->void:
	var began:=Time.get_ticks_usec()
	var city: RefCounted=renderer.state;var parent: Node3D=renderer.ecology_layer
	var geometry:=hash([city.houses,city.roads,city.waters,city.districts,city.terrain_strokes])
	var geometry_changed:bool=geometry_key!=geometry
	if geometry_key!=geometry:
		geometry_key=geometry;habitat_key=null;bunting_key=null;flora_key=null
		wire_context.clear();flora_records.clear()
	var nectar: Array=[];var festive: Array=[];var flowers: Array=[];var festive_houses:Dictionary={}
	for house: Dictionary in city.houses:
		var id:=str(house.id);var tier: int=city.house_harmony_tier(id);var role:=str(house.role)
		nectar.append(role in ["garden_cafe","venue"] or tier>0)
		festive.append(city.improvement_level(id)>=1 or tier>=2 or role in ["venue","garden_cafe","bakery","workshop"])
		festive_houses[id]=festive[-1]
		flowers.append(tier if role=="residential" else 0)
		if renderer.resonance.rigs.has(id):
			var rig: Dictionary=renderer.resonance.rigs[id];var amount:=float(tier)/3.
			if not is_equal_approx(float(rig.get("harmony",-1.)),amount):
				rig.harmony=amount;rig.material.set_shader_parameter("harmony",amount)
	var wildlife_signature:=hash([geometry,city.plants,nectar])
	var festive_signature:=hash([geometry,festive])
	var flower_signature:=hash([geometry,flowers])
	stats.habitats_us=0;stats.bunting_us=0;stats.flowers_us=0
	stats.anchor_us=0;stats.pair_us=0;stats.wire_mesh_us=0
	var step:=Time.get_ticks_usec()
	if habitat_key!=wildlife_signature:
		habitat_key=wildlife_signature;renderer.wildlife.refresh_habitats(renderer)
		stats.habitat_updates+=1;stats.habitats_us=Time.get_ticks_usec()-step
	step=Time.get_ticks_usec()
	if bunting_key!=festive_signature:
		bunting_key=festive_signature;stats.bunting_queries+=1
		if not wire_context.has("anchors"):wire_context.anchors=Bunting._anchors(renderer)
		var anchors:Array[Dictionary]=wire_context.anchors
		for anchor:Dictionary in anchors:anchor.festive=festive_houses[str(anchor.house_id)]
		stats.anchor_us=Time.get_ticks_usec()-step
		var pair_started:=Time.get_ticks_usec()
		var pairs: Array[Dictionary]=Bunting._pairs(city,anchors,wire_context)
		stats.pair_us=Time.get_ticks_usec()-pair_started
		var rendered: Array=[]
		for pair: Dictionary in pairs:rendered.append([pair.a.pos,pair.b.pos,pair.a.color_a,pair.b.color_b,pair.length])
		var signature:=hash(rendered)
		if wire_key!=signature:
			var mesh_started:=Time.get_ticks_usec()
			wire_key=signature;_remove(parent,["StreetBunting"])
			parent.set_meta("bunting_count",Bunting.build_pairs(renderer,parent,pairs))
			Bunting.set_light(parent,renderer.light_phase);stats.bunting_updates+=1
			stats.wire_mesh_us=Time.get_ticks_usec()-mesh_started
		stats.bunting_us=Time.get_ticks_usec()-step
	step=Time.get_ticks_usec()
	if flora_key!=flower_signature:
		flora_key=flower_signature;_remove(parent,["HarmonyPots","HarmonyFlowers"])
		parent.set_meta("harmony_flowerpots",Flora.build(renderer,parent,flora_records))
		stats.flora_updates+=1;stats.flowers_us=Time.get_ticks_usec()-step
	stats.refreshes+=1;stats.last_refresh_us=Time.get_ticks_usec()-began
	if int(stats.last_refresh_us)>int(stats.max_refresh_us):stats.peak={"total_us":stats.last_refresh_us,"habitats_us":stats.habitats_us,"bunting_us":stats.bunting_us,"anchor_us":stats.anchor_us,"pair_us":stats.pair_us,"wire_mesh_us":stats.wire_mesh_us,"flowers_us":stats.flowers_us,"bunting_count":parent.get_meta("bunting_count",0),"flowerpots":parent.get_meta("harmony_flowerpots",0),"geometry_changed":geometry_changed,"habitats":renderer.wildlife.habitat_stats.duplicate(),"porches":renderer.wildlife._porch_habitats.size(),"flower_records":flora_records.size()}
	stats.max_refresh_us=maxi(int(stats.max_refresh_us),int(stats.last_refresh_us))

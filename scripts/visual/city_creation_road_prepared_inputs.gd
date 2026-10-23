extends RefCounted
## A bounded, one-road handoff from the fingerprint to the immediately following
## compiler. Private worker Nodes own their own slot; published maps never share it.
static func key(renderer,road:Dictionary)->Array:
	return [renderer.state.get_instance_id(),renderer.state.revision,hash(road)]
static func take(renderer,road:Dictionary)->Dictionary:
	var ready:Dictionary=renderer.get_meta("next_road_decoration",{})
	if not ready.is_empty():renderer.remove_meta("next_road_decoration")
	if ready.get("key")==key(renderer,road):
		renderer.rebuild_stats["road_decoration_handoffs"]=int(renderer.rebuild_stats.get("road_decoration_handoffs",0))+1
		return ready
	return {"walk":renderer.promenade.prepare(renderer,road),"era":renderer.era_streets.prepare(renderer,road)}
static func fingerprint(renderer,road:Dictionary)->int:
	var bounds := Rect2(Vector2(road.points[0][0],road.points[0][1]),Vector2.ZERO)
	for point: Array in road.points: bounds=bounds.expand(Vector2(point[0],point[1]))
	var shoulder_signature: int=renderer.state._ground_terrain.region_signature(bounds.grow(float(road.width)*0.5+1.6),true)
	var part_started:=Time.get_ticks_usec()
	var walk:Array=renderer.promenade.prepare(renderer,road)
	renderer.rebuild_stats["road_fingerprint_promenade_ms"]=float(renderer.rebuild_stats.get("road_fingerprint_promenade_ms",0.))+float(Time.get_ticks_usec()-part_started)/1000.;part_started=Time.get_ticks_usec()
	var era:Dictionary=renderer.era_streets.prepare(renderer,road)
	renderer.rebuild_stats["road_fingerprint_era_ms"]=float(renderer.rebuild_stats.get("road_fingerprint_era_ms",0.))+float(Time.get_ticks_usec()-part_started)/1000.;part_started=Time.get_ticks_usec()
	var tram:Array=renderer.TramTracks.signature(renderer.state,road)
	var profile:int=renderer.state.road_profile(road).signature
	renderer.rebuild_stats["road_fingerprint_tram_ms"]=float(renderer.rebuild_stats.get("road_fingerprint_tram_ms",0.))+float(Time.get_ticks_usec()-part_started)/1000.;part_started=Time.get_ticks_usec()
	var water:Array=renderer._road_water_signature(road)
	renderer.rebuild_stats["road_fingerprint_water_ms"]=float(renderer.rebuild_stats.get("road_fingerprint_water_ms",0.))+float(Time.get_ticks_usec()-part_started)/1000.;part_started=Time.get_ticks_usec()
	var joins:Array=renderer._road_join_signature(road)
	renderer.rebuild_stats["road_fingerprint_joins_ms"]=float(renderer.rebuild_stats.get("road_fingerprint_joins_ms",0.))+float(Time.get_ticks_usec()-part_started)/1000.
	renderer.set_meta("next_road_decoration",{"key":key(renderer,road),"walk":walk,"era":era})
	return hash([road.points,road.get("width",1.1),road.get("style","path"),renderer.state.biome_seed,renderer.state.music_mode,preload("res://scripts/world/city_creation_tradition_rules.gd").stair_rise(renderer.state),walk,era,tram,profile,shoulder_signature,water,joins,renderer.state._junctions.signature(str(road.id))])

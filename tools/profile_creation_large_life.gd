extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_large_town_fixture.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
func _initialize()->void:_run.call_deferred()
func _run()->void:
	var started:=Time.get_ticks_usec();var city:=Fixture.build(300,"--four-eras" in OS.get_cmdline_user_args());print("FIXTURE_READY ",city.houses.size()," ",(Time.get_ticks_usec()-started)/1000.)
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city)
	var moving:=0
	for resident:Dictionary in life.residents:
		if not resident.paused and resident.route.size()>1:resident.wait=0.;moving+=1
	var camera:=Camera3D.new();root.add_child(camera);camera.projection=Camera3D.PROJECTION_ORTHOGONAL;camera.size=12;camera.position=Vector3(-25,30,-5);camera.look_at(Vector3(-25,0,-25));camera.current=true;life.view_camera=camera
	print("LIFE_READY ",life.residents.size()," moving=",moving," ms=",(Time.get_ticks_usec()-started)/1000.)
	life.profile_tick=true;var stages:Dictionary={}
	var samples:Array[float]=[];var moved:=0;var before:Dictionary={}
	for resident:Dictionary in life.residents:before[resident.home_id]=resident.node.position
	for i in range(600):
		var began:=Time.get_ticks_usec();life._process(1./180.);samples.append((Time.get_ticks_usec()-began)/1000.)
		for key:String in life.tick_profile:stages[key]=float(stages.get(key,0.))+float(life.tick_profile[key])/600000.
	for resident:Dictionary in life.residents:
		if Vector3(before[resident.home_id]).distance_to(life.citizen_position(resident))>.1:moved+=1
	samples.sort();var sum:=0.
	for value:float in samples:sum+=value
	var report:Dictionary={"stages_ms":stages,"lod":life.citizen_lod_stats,"houses":city.houses.size(),"actors":life.residents.size(),"moving":moving,"actually_moved":moved,"mean_ms":sum/samples.size(),"p95_ms":samples[int(samples.size()*.95)],"max_ms":samples[-1]}
	print("LARGE_LIFE ",JSON.stringify(report));quit(0 if moving>=200 and moved>=200 else 1)

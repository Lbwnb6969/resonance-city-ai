extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Life=preload("res://scripts/world/city_creation_life.gd")
const Chords=preload("res://tools/fixtures/city_creation_chord_fixture.gd")
const Modern=preload("res://tools/fixtures/city_creation_modern_fixture.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _life(city:RefCounted)->Node3D:
	var life:=Life.new();root.add_child(life);life.set_process(false);life.setup(city);return life
func _roundtrip(city:RefCounted,label:String)->void:
	var copy:=State.new();var result:Dictionary=copy.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true)))
	_check(result.ok,label+": "+str(result.get("message","")))
func _basic()->void:
	var city:=State.new();var oven:Dictionary=city.add_house(Vector2(-20,-16));assert(oven.ok);assert(city.set_house_role(oven.house_id,"bakery").ok)
	_check(city.bakery_batch_size(oven.house_id)==2,"ordinary one-room oven makes two conserved loaves per batch")
	var points:Array[Vector2]=[Vector2(-16,-16)];assert(city.add_water(points,2.4,"pond").ok)
	_check(city.bakery_batch_size(oven.house_id)==3 and is_equal_approx(city.site_production_multiplier(oven.house_id),1.35),"actual pond blessing makes three loaves at thirty-five percent faster baking")
	_check(city.produce_bread(oven.house_id,3) and city.bakery_status(oven.house_id).stock==3,"the full blessed batch enters actual inventory")
	var cafe:Dictionary=city.add_house(Vector2(-20,-8));assert(cafe.ok);assert(city.set_house_role(cafe.house_id,"garden_cafe").ok)
	points=[Vector2(-25,-6),Vector2(-15,-6)];var road:Dictionary=city.add_road(points,"path");assert(road.ok)
	_check(city.cafe_afterglow_extension(cafe.house_id)==30.,"an ordinary dirt path does not create a scenic tea blessing")
	var avenue:Dictionary=city.add_road(points,"avenue");assert(avenue.ok)
	_check(city.cafe_afterglow_extension(cafe.house_id)==45.,"actual wide tree-lined avenue grants forty-five-second tea afterglow")
	_roundtrip(city,"new ordinary and blessed bread quantities preserve old supply conservation")
func _highland()->void:
	var city:RefCounted=Chords.highland();assert(city.set_house_role("h2","venue").ok)
	_check(city.special_site("h1").lookout and is_equal_approx(city.walking_multiplier("h4"),1.25*1.1),"real isolated three-storey highland bell tower compounds district lookout and highland walking")
	_check(city.concert_radius("h2")==28.,"raised real music courtyard expands its invitation radius to twenty-eight metres")
	city.rest_after_concert("h2");_check(city.matinee_cooldown==45.,"actual raised venue rest is forty-five seconds")
	assert(city.add_cell("h3",0,0,1).ok and city.add_cell("h3",0,0,2).ok)
	_check(not city.special_site("h1").lookout and is_equal_approx(city.walking_multiplier("h4"),1.25),"an equally tall neighbour within eight metres withdraws the viewpoint bonus")
	assert(city.undo().ok)
	_check(city.special_site("h1").lookout,"removing the neighbour's top storey restores the full one-storey height advantage")
	_roundtrip(city,"physical bell tower and matinee cooldown restore normally")
func _atelier()->void:
	var city:RefCounted=Chords.renaissance();var life:=_life(city)
	_check(city.special_site("h2").arcade_street and is_equal_approx(city.installation_multiplier("h2","h1"),1.4),"two real columned neighbours on the same published street graph grant forty percent faster art installation")
	var before:=0
	for level:int in city.house_culture.values():before+=level
	for i in range(3000):
		life._process(.05)
		if city.workshop_status("h2").delivered>0:break
	var after:=0
	for level:int in city.house_culture.values():after+=level
	_check(city.workshop_status("h2").delivered>0 and after>before,"a real artist crafts carries and installs the culture record")
	var main:=""
	for road:Dictionary in city.roads:
		if road.get("style","")=="promenade" and float(road.points[0][1])==0. and float(road.points[-1][1])==0.:main=str(road.id);break
	_check(not main.is_empty() and city.remove_road(main).ok,"actual arcade street can be removed")
	var removed:=1
	for road:Dictionary in city.roads.duplicate():
		assert(city.remove_road(str(road.id)).ok);removed+=1
	life._sync();_check(not city.special_site("h2").arcade_street,"disconnected decorative arches cannot grant delivery speed")
	for i in range(removed):assert(city.undo().ok)
	life._sync();_check(city.special_site("h2").arcade_street,"undo restores the actual connected colonnade blessing")
	_roundtrip(city,"art deliveries and connected colonnades retain valid saved culture evidence");life.free()
func _clockwork()->void:
	var city:RefCounted=Chords.clockwork();var life:=_life(city);var tram:RefCounted=life.tram
	_check(city.special_site("h2").clock_hub and city.craft_radius("h2")==30.,"real wide tram frontage activates the thirty-metre music-box delivery range")
	_check(tram._clock_speed_edges.size()>0 and not tram.cars.is_empty(),"clockwork hub publishes actual accelerated rail edges")
	var car:Dictionary=tram.cars[0];var tour:Array=car.line.tour;var selected:=-1
	for i in range(1,tour.size()):
		if tram._clock_speed_edges.has(str(tour[i-1])+":"+str(tour[i])):selected=i;break
	if selected>=1:
		var a:=str(tour[selected-1]);var b:=str(tour[selected]);car.key=a;car.cursor=selected;car.node.position=tram.plan.positions[a];car.wait=.9
		var expected:float=.9+float(tram.plan.graph[a][b])/(tram.speed()*1.15)
		var forecast:Dictionary=tram._forecast(car,a,b,0.)
		_check(is_equal_approx(float(forecast.exit_time),expected),"arrival forecast integrates the exact same fifteen-percent segment speed as movement")
		tram.tick(expected)
		_check(car.key==b and car.node.position.distance_to(tram.plan.positions[b])<.001,"the production tram reaches its forecast endpoint at the predicted time")
	assert(city.set_house_role("h2","residential").ok);life._sync()
	_check(tram._clock_speed_edges.is_empty(),"recycling the clockmaker withdraws the actual local tram speed boost")
	assert(city.undo().ok);life._sync();_check(not tram._clock_speed_edges.is_empty(),"undo restores hub speed without a second tram network")
	_roundtrip(city,"clockmaker speed and delivery planning preserve the original transport save contract");life.free()
func _hall()->void:
	var city:RefCounted=Modern.architecture();assert(city.set_house_role("h2","symphony_hall").ok)
	_check(city.special_site("h2").hall_ecology and city.concert_radius("h2")==32.,"actual incoming second/third-floor glass bridge qualifies the ecological music hall")
	assert(city.set_house_era("h1","pastoral").ok)
	_check(not city.special_site("h2").hall_ecology and city.concert_radius("h2")==22.,"removing the real bridge removes the hall's extra coverage")
	assert(city.undo().ok)
	city.grant_concert_afterglow("h2",["h1","h2","h3"],90.)
	_check(city.afterglow_remaining("h1")==180. and city.afterglow_remaining("h3")==180. and city.afterglow_remaining("h2")==90.,"ecological hall doubles actual residential afterglow while facilities keep the base performance reward")
	_check(city.snapshot().schema==18,"extended double-afterglow rights use optional schema eighteen")
	_roundtrip(city,"extended hall afterglow and incoming bridge survive JSON round-trip")
func _run()->void:
	_basic();_highland();_atelier();_clockwork();_hall()
	print("SITE_SPECIALIZATION ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

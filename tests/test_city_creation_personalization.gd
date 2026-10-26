extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Choir=preload("res://scripts/audio/city_creation_cluster_choir.gd")
const Catalog=preload("res://scripts/audio/city_creation_music_catalog.gd")
const Emergence=preload("res://scripts/audio/city_creation_harmonic_emergence.gd")
const Acoustic=preload("res://scripts/audio/city_creation_acoustic_field.gd")
const Gesture=preload("res://scripts/ui/city_creation_road_gesture.gd")
const Tracks=preload("res://scripts/visual/city_creation_tram_tracks.gd")
var checks:=0
var failures:Array[String]=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func clean()->RefCounted:
	var city:=State.new();city.initialize()
	city.houses.clear();city.roads.clear();city.plants.clear();city.districts.clear();city.revision+=1
	return city
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=clean();var added:Dictionary=city.add_house(Vector2(-22,-14));check(added.ok,"house fixture")
	var id:String=added.house_id
	var result:Dictionary=city.set_house_colors(id,Color("538fc3"),Color("7d4569"))
	check(result.ok and result.appearance_house_id==id,"custom color uses appearance transaction")
	var colored:Dictionary=city.snapshot();check(colored.schema==19,"custom colors declare schema19")
	var copy:=State.new();check(copy.restore(colored).ok and copy.houses==city.houses,"custom colors round trip")
	check(city.undo().ok and not city.houses[0].has("custom_colors"),"custom color undo")
	check(city.redo().ok and city.houses[0].custom_colors.roof=="7d4569","custom color redo")
	result=city.set_house_palette(id,2);check(result.ok and not city.houses[0].has("custom_colors"),"base swatch replaces custom colors")
	var invalid:Dictionary=colored.duplicate(true);invalid.houses[0].custom_colors.wall="zzzzzz"
	check(not copy.restore(invalid).ok and copy.snapshot()==colored,"invalid custom colors reject atomically")
	invalid=colored.duplicate(true);invalid.schema=18;check(not copy.restore(invalid).ok,"old schemas cannot disguise custom fields")
	var version18:Dictionary=city.snapshot();check(version18.schema<=18 and copy.restore(version18).ok,"ordinary old schema remains unchanged")
	for i:int in range(State.GardenSpecies.IDS.size()):
		var kind:String=State.GardenSpecies.IDS[i];var at:=Vector2(-33+i*3.6,10)
		result=city.place_plant(at,kind)
		check(result.ok,"place "+kind)
		if result.ok:check(Vector2(city.plants[-1].position[0],city.plants[-1].position[1])==at,"exact position "+kind)
	check(not city.place_plant(Vector2(-22,-14),"pink_flower").ok,"plant respects building footprint")
	var garden:Dictionary=city.snapshot();check(copy.restore(garden).ok and copy.plants==city.plants,"all species round trip")
	var plants:int=city.plants.size();check(city.undo().ok and city.plants.size()==plants-1 and city.redo().ok and city.plants.size()==plants,"plant undo redo")
	for style:String in ["path","promenade","avenue","tram"]:
		var roads:=clean();var pts:Array[Vector2]=[Vector2(-30,-26),Vector2(-18,-26)]
		for width:float in State.RoadUpgrade.sizes_for(style):
			var candidate:=clean();result=candidate.add_road(pts,style,"none",width)
			check(result.ok and is_equal_approx(float(candidate.roads[0].width),width),style+" authored width "+str(width))
			check(copy.restore(candidate.snapshot()).ok,style+" width save read")
		check(not roads.add_road(pts,style,"none",100.).ok,"reject invalid "+style+" width")
	var gesture:=Gesture.new();gesture.move(Vector2(-30,-25));gesture.move(Vector2(-27,-24));gesture.move(Vector2(-25,-20))
	check(gesture.points.size()>3 and gesture.points[0]==Vector2(-30,-25) and gesture.points[-1]==Vector2(-25,-20),"freehand curve retains exact endpoints")
	var choir_city:=clean()
	for i:int in range(5):check(choir_city.add_house(Vector2(-28+i*3.,-8)).ok,"cluster member")
	check(choir_city.add_house(Vector2(-12,20)).ok,"isolated house")
	var clusters:Dictionary=Choir.derive(choir_city.houses)
	check(int(clusters[str(choir_city.houses[0].id)].size)==5 and int(clusters[str(choir_city.houses[-1].id)].size)==1,"spatial clusters remain distinct")
	var reversed:Array=choir_city.houses.duplicate();reversed.reverse();check(Choir.derive(reversed)==clusters,"cluster identity independent of insertion order")
	var data:Dictionary=Catalog.prepare(choir_city);var acoustic:=Acoustic.new()
	acoustic.focus=Vector2(-22,-8);acoustic.zoom=30.;acoustic.evaluate(data.houses,[],[])
	var score:Dictionary=Emergence.evaluate(data.houses,acoustic,[],0,false)
	check(score.largest_cluster==5 and score.targets.wood>-30.,"group enters shared lead")
	var solo:=clean();solo.add_house(Vector2(-22,-8));data=Catalog.prepare(solo)
	acoustic.evaluate(data.houses,[],[]);score=Emergence.evaluate(data.houses,acoustic,[],0,false)
	check(score.lead_track=="wood" and score.targets.wood>-60. and score.secondary_track.is_empty() and Emergence.LEADS.filter(func(track):return float(score.targets[track])>-60.).size()==1,"single house keeps the existing first-home melody with one melodic voice")
	var tram:Dictionary={"style":"tram"};var before:Array=Tracks.signature(choir_city,tram)
	var h:Dictionary=choir_city.houses[0];result=choir_city.add_cell(str(h.id),0,0,1)
	check(result.ok and Tracks.signature(choir_city,tram)==before,"upper module does not rebuild rail stops or wires")
	print("PERSONALIZATION ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)

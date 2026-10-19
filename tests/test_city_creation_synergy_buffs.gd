extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Buffs=preload("res://scripts/world/city_creation_synergy_buffs.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:_run.call_deferred()
func _check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _run()->void:
	var city:=State.new();var west:Array[String]=[]
	for x:float in [-24.,-20.]:
		for z:float in [-9.,-5.,-1.,3.]:
			var result:Dictionary=city.add_house(Vector2(x,z));_check(result.ok,"real west house builds");west.append(str(result.get("house_id","")))
	_check(city.set_house_role(west[0],"bakery").ok,"real oven opens")
	var plain:float=city.site_production_multiplier(west[0])
	var points:Array[Vector2]=[Vector2(-22,-9),Vector2(-22,3)]
	var d1:Dictionary=city.add_district(points,8.,"warm");_check(d1.ok,"west score is painted")
	_check(city.synergy_buffs().districts[d1.district_id].pure and is_equal_approx(city.site_production_multiplier(west[0])/plain,1.25),"eight matching real homes activate exact 25 percent production")
	city.era_unlocks.append("renaissance")
	_check(city.set_house_era(west[1],"renaissance").ok and not city.synergy_buffs().districts[d1.district_id].pure,"mixed eras lose only the positive purity bonus")
	_check(city.undo().ok and city.synergy_buffs().districts[d1.district_id].pure,"undo restores cached score purity")
	# The preceding mixed-era case temporarily enabled an era in this fixture.
	# Its only Renaissance house has now been undone; serialize a valid old city.
	city.era_unlocks.erase("renaissance")
	for at:Vector2 in [Vector2(20,-9),Vector2(20,-5)]:_check(city.add_house(at).ok,"actual opposite-bank home builds")
	points=[Vector2(20,-9),Vector2(20,-5)]
	var d2:Dictionary=city.add_district(points,8.,"deep");_check(d2.ok,"east score is painted")
	_check(is_equal_approx(city.synergy_buffs().expansion_multiplier,1.),"disconnected districts do not mint expansion rewards")
	_check(city.link_districts(d1.district_id,d2.district_id).ok and is_equal_approx(city.synergy_buffs().expansion_multiplier,1.12),"manual connection between two occupied voices grants exact 12 percent")
	_check(is_equal_approx(city.site_production_multiplier(west[0])/plain,1.25*1.12),"actual oven compounds local purity and global expansion")
	_check(city.set_district_style(d2.district_id,"warm").ok and is_equal_approx(city.synergy_buffs().expansion_multiplier,1.),"duplicating the same voice cannot farm the region bonus")
	_check(city.undo().ok and is_equal_approx(city.synergy_buffs().expansion_multiplier,1.12),"undo restores expansion")
	_check(city.unlink_districts(d1.district_id,d2.district_id).ok and is_equal_approx(city.synergy_buffs().expansion_multiplier,1.),"removing a link immediately removes expansion")
	_check(city.undo().ok and city.redo().ok and is_equal_approx(city.synergy_buffs().expansion_multiplier,1.),"redo follows authored links rather than stale bonus data")
	points=[Vector2(-30,20)]
	var empty:Dictionary=city.add_district(points,4.,"weave")
	_check(empty.ok and city.link_districts(d1.district_id,empty.district_id).ok and is_equal_approx(city.synergy_buffs().expansion_multiplier,1.),"painting and linking an empty score never grants a production bonus")
	var saved:Dictionary=city.snapshot();var cold:=State.new();var loaded:Dictionary=cold.restore(saved)
	_check(loaded.ok and cold.synergy_buffs()==city.synergy_buffs(),"save restores identical derived planning without adding schema fields: "+str(loaded.get("message","")))
	var same:Dictionary={"origin":[-22.,0.]};var mill:Dictionary={"origin":[-22.,18.]}
	_check(Buffs._same_bank_band(city,same,mill),"water drive includes the eighteen metre boundary")
	mill.origin[1]=18.001;_check(not Buffs._same_bank_band(city,same,mill),"water drive excludes beyond eighteen metres")
	var river:float=State.river_x(0.)
	_check(not Buffs._same_bank_band(city,{"origin":[river-4.,0.]},{"origin":[river+4.,0.]}),"close opposite riverbanks cannot share the local water drive")
	city.waters.append({"id":"w99","kind":"channel","points":[[-25.,8.],[-19.,8.]],"width":1.})
	_check(not Buffs._same_bank_band(city,same,{"origin":[-22.,17.]}),"authored channels also interrupt a local drive")
	_check(city.snapshot().houses==saved.houses and city.snapshot().life_progress==saved.life_progress,"evaluation never grants stock or household progress")
	var counts:=State.new();points=[Vector2(-22,-31),Vector2(-22,3)]
	var district:Dictionary=counts.add_district(points,8.,"warm");var built:=0
	for x:float in [-24.,-20.]:
		for z:float in [-30.,-26.,-22.,-18.,-14.,-10.,-6.,-2.,2.]:
			if built==17:break
			if counts.add_house(Vector2(x,z)).ok:built+=1
			if built in [7,8,16,17]:_check(counts.synergy_buffs().districts[district.district_id].pure==(built in [8,16]),"real district purity boundary at %d houses"%built)
	_check(built==17,"all seventeen boundary homes were actually authored")
	print("SYNERGY_BUFFS ",JSON.stringify({"ok":failures.is_empty(),"count":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

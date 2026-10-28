extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Footprints=preload("res://scripts/visual/city_creation_street_furniture_footprints.gd")
const Meadow=preload("res://scripts/visual/city_creation_meadow.gd")
var checks:=0
var failures:Array=[]
var blocks:Array[Vector2i]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func fresh(city)->Node3D:
	var result:=Meadow.new();result.record_only=true;result.setup(city);return result
func compare(city,meadow,label:String)->void:
	var cold:=State.new();check(cold.restore(JSON.parse_string(JSON.stringify(city.snapshot(),"",true,true))).ok,"cold authored JSON "+label)
	var other=fresh(cold);other.rebuild({},blocks)
	check(meadow.base_records==other.base_records and meadow.base_accents==other.base_accents,"incremental lawn and accents equal cold record solver "+label)
	check(Footprints.plans(city)==Footprints.plans(cold),"exact furniture world footprints cold derive "+label)
	other.free()
func run()->void:
	for x in range(-5,-1):
		for z in range(-3,-1):blocks.append(Vector2i(x,z))
	blocks.append(Vector2i(3,3))
	var city:=State.new();city.initialize_free()
	var path:Array[Vector2]=[Vector2(-31,-20),Vector2(-25,-19),Vector2(-18,-21)]
	check(city.add_road(path,"gravel","none",1.25,"none").ok,"actual curved road")
	var meadow=fresh(city);meadow.rebuild({},blocks)
	var far:Array=meadow.base_records[Vector2i(3,3)]
	for choice:String in ["trees","benches","flowers","lamps","none"]:
		check(city.add_road(path,"gravel","none",1.25,choice).ok,"actual furniture-only replacement "+choice)
		meadow.rebuild({},blocks)
		check(is_same(meadow.base_records[Vector2i(3,3)],far),"unaffected distant lawn keeps published record identity "+choice)
		var footprints:=Footprints.plans(city)
		check(footprints.is_empty() if choice=="none" else not footprints.is_empty(),"only actual selected furniture affects grass "+choice)
		var masked:=true
		for fp:Variant in footprints:
			var bounds:=Footprints.Frame.bounds(fp)
			for x in range(5):
				for z in range(5):
					var at:Vector2=bounds.position+bounds.size*Vector2((x+.5)/5.,(z+.5)/5.)
					if not Footprints.Frame.contains(fp,at):continue
					var block:=Vector2i(floori(at.x/8.),floori(at.y/8.))
					masked=masked and not meadow.query_masks[block].visible(at,.18)
		check(masked,"all sampled real solids exclude grass on bent road "+choice)
		compare(city,meadow,choice)
	check(city.undo().ok,"actual Undo restores previous furniture");meadow.rebuild({},blocks);compare(city,meadow,"Undo")
	check(city.redo().ok,"actual Redo removes it again");meadow.rebuild({},blocks);compare(city,meadow,"Redo")
	check(city.remove_road(str(city.roads[0].id)).ok,"actual road deletion");meadow.rebuild({},blocks);compare(city,meadow,"deleted")
	check(Footprints.plans(city).is_empty() and city.snapshot().get("street_furniture_footprints",null)==null,"no deleted or runtime footprint content leaks into save")
	meadow.free();print("STREET_FURNITURE_FOOTPRINTS ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

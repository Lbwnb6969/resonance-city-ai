extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Wishes=preload("res://scripts/ui/city_creation_wish_pins.gd")
class Owner extends RefCounted:
	var state:RefCounted
	var water_width:=1.8
var checks:=0
var failures:Array[String]=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func fixture(crowded:bool)->RefCounted:
	var city:=State.new();city.initialize_empty()
	check(city.add_house(Vector2(-25,-20)).ok and city.set_house_role("h1","bakery").ok,"real dry bakery")
	if crowded:
		for offset:Vector2 in [Vector2(-1,0),Vector2(1,0),Vector2(0,-1),Vector2(0,1),Vector2(-1,-1),Vector2(-1,1),Vector2(1,-1),Vector2(1,1)]:
			check(city.add_house(Vector2(-25,-20)+offset*3.2).ok,"real surrounding building")
	return city
func run()->void:
	var owner:=Owner.new();owner.state=fixture(true)
	var source:Dictionary=owner.state.snapshot()
	# The previous twelve-direction search selected this exact legal pond.
	var old_site:=Vector2(-19,-20)
	check(owner.state.preview_water([old_site] as Array[Vector2],1.8,"pond").ok,"crowded fixture retains an actually legal pond outside blessing reach")
	var copy:=State.new();copy.restore(source);copy.add_water([old_site] as Array[Vector2],1.8,"pond")
	check(not bool(copy.site_blessing("h1").get("blessed",false)) and is_equal_approx(copy.water_clearance(Vector2(-25,-20)),5.1),"old legal site really fails the requested baking bonus")
	var wishes:=Wishes.new();wishes.demo=owner
	check(not wishes._site(Vector2(-25,-20),"water").is_finite(),"no misleading marker when every searched legal pond lies beyond reach")
	owner.water_width=3.2
	var larger:Vector2=wishes._site(Vector2(-25,-20),"water")
	check(larger.is_finite(),"wider pond can satisfy the same real occupied neighbourhood")
	copy=State.new();copy.restore(source)
	check(copy.add_water([larger] as Array[Vector2],3.2,"pond").ok and bool(copy.site_blessing("h1").get("blessed",false)),"suggested wider pond activates actual State blessing")
	check(owner.state.snapshot()==source,"query never changes geometry, progress or inventory")
	owner.state=fixture(false)
	for width:float in [1.8,3.2,5.]:
		owner.water_width=width
		var site:Vector2=wishes._site(Vector2(-25,-20),"water")
		copy=State.new();copy.restore(owner.state.snapshot())
		check(site.is_finite() and copy.add_water([site] as Array[Vector2],width,"pond").ok and bool(copy.site_blessing("h1").get("blessed",false)),"actual pond width remains legal and useful: "+str(width))
	wishes.free()
	print("WISH_SITES ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}));quit(0 if failures.is_empty() else 1)

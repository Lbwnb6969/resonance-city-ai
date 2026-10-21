extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var city:=State.new();check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"four-era fixture")
	var town:=Renderer.new();town.state=city;town.building_context.prepare(city.houses,city.roads)
	var seen:Dictionary={}
	for house:Dictionary in city.houses:
		var era:String=city.house_era(house)
		if seen.has(era) or house.has("signature"):continue
		var plan:Dictionary=town._prepare_house_assembly(house)
		if plan.get("round",false):continue
		check(city.set_house_colors(str(house.id),Color("5793b8"),Color("79506e")).ok,"choose color in "+era)
		plan=town._prepare_house_assembly(house)
		check(plan.palette[0]==Color("5793b8") and plan.palette[1]==Color("79506e"),"actual assembly keeps selected colors in "+era)
		seen[era]=true
	check(seen.size()==4,"all four construction eras covered")
	var single:=State.new();single.initialize();single.houses.clear();single.roads.clear();single.plants.clear();single.revision+=1
	var placed:Dictionary=single.add_house(Vector2(-22,-10));var id:String=placed.house_id
	check(single.set_house_style(id,"round_tower").ok and single.set_house_colors(id,Color("5793b8"),Color("79506e")).ok,"round tower custom colors")
	town.state=single;town.building_context.prepare(single.houses,single.roads)
	var tower:Node3D=town.RoundTower.build(town,single.houses[0])
	check(tower!=null and tower.get_meta("palette_colors")[0]==Color("5793b8") and tower.get_meta("palette_colors")[1]==Color("79506e"),"actual round tower geometry receives chosen colors")
	if tower!=null:tower.free()
	for component:Node in [town.shore,town.lilypads,town.wildlife]:component.free()
	town.free()
	print("CUSTOM_COLOR_MESH ",JSON.stringify({"checks":checks,"failures":failures,"ok":failures.is_empty()}))
	quit(0 if failures.is_empty() else 1)

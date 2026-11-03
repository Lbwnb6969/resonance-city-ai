extends RefCounted
## v1: one open hall inside the exact authored rectangular room prism.
const ID:="timber_acoustic_shell"
const VERSION:=1
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Rectangle=preload("res://scripts/world/city_creation_ancient_extension_plan.gd")
const Passage=preload("res://scripts/world/city_creation_passage.gd")
static func selected(house:Dictionary)->bool:return house.get("architecture","")==ID and not house.has("signature")
static func layout(house:Dictionary)->Dictionary:
	return Rectangle.rectangle(house) if selected(house) else {}
static func active(city:RefCounted,house:Dictionary)->bool:
	return city.house_era(house)=="modern_eco" and not layout(house).is_empty() and Passage.for_house(house,city.roads).is_empty()
static func frontage_key(house:Dictionary)->Array:
	return [ID,house.cells] if selected(house) else []
static func entrances(house:Dictionary,roads:Array,entries:Array[Dictionary])->Array[Dictionary]:
	if layout(house).is_empty() or not Passage.for_house(house,roads).is_empty() or entries.is_empty():return entries
	var chosen:Dictionary=entries[0]
	for row:Dictionary in entries:
		if row.active:chosen=row;break
	return entries.filter(func(row):return row.side==chosen.side)
static func for_house(city:RefCounted,house:Dictionary)->Dictionary:
	if not active(city,house):return {}
	var plan:=layout(house);var entries:Array=preload("res://scripts/world/city_creation_frontage.gd").entrances(house,city.roads,city.houses)
	var side:Vector2i=entries[0].side if not entries.is_empty() else Vector2i.DOWN
	if side.x!=0:var width:float=plan.width;plan.width=plan.depth;plan.depth=width
	plan.angle=atan2(float(side.x),float(side.y));plan.front=side;plan.base_y=float(house.get("base_y",0.));plan.version=VERSION
	return plan
static func point(plan:Dictionary,t:float)->Vector2:
	return Vector2(.18+float(plan.height)*sin(t*PI*.5),-float(plan.depth)*.5+.04+(float(plan.depth)-.08)*(1.-cos(t*PI*.5)))
static func cell_at(house:Dictionary,plan:Dictionary,local:Vector2)->Dictionary:
	var design:Vector2=plan.center+local.rotated(-float(plan.angle));var nearest:Dictionary={};var distance:=INF
	for cell:Dictionary in house.cells:
		if int(cell.level)!=int(plan.floors)-1:continue
		var d:float=(Frame.origin(house)+Vector2(cell.x,cell.z)*1.8).distance_squared_to(design)
		if d<distance:distance=d;nearest=cell
	return nearest

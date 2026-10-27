extends RefCounted
const Plan=preload("res://scripts/world/city_creation_ancient_extension_plan.gd")
const Stoa=preload("res://scripts/visual/city_creation_ionic_stoa.gd")
const Basilica=preload("res://scripts/visual/city_creation_roman_basilica.gd")
static func roofs(r,parent:Node3D,house:Dictionary,palette:Array)->bool:
	if not Plan.selected(house):return false
	var plan:=Plan.massing(r.state,house)
	if plan.is_empty():return false
	if house.architecture=="ionic_stoa":Stoa.roof(r,parent,house,palette,plan)
	# Basilica replaces its complete shell at finish, including the nave roof.
	return true
static func finish(r,parent:Node3D,house:Dictionary,palette:Array)->bool:
	if not Plan.selected(house):return false
	var plan:=Plan.massing(r.state,house)
	parent.set_meta("prototype_caption",Plan.NAMES[Plan.IDS.find(house.architecture)]+(" · 随形" if plan.is_empty() else ""))
	parent.set_meta("ancient_extension",{"kind":house.architecture,"rectangular":not plan.is_empty(),"saved_cells":house.cells.size()})
	if plan.is_empty():return true
	if house.architecture=="ionic_stoa":Stoa.build(r,parent,house,palette,plan)
	else:Basilica.build(r,parent,house,palette,plan)
	preload("res://scripts/visual/city_creation_civic_glow.gd").record(parent)
	return true

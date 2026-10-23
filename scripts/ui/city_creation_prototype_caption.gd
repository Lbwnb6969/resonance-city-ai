extends RefCounted
## Read the published building's actual recipes, including automatic old works.
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
static func caption(pop,house:Dictionary)->String:
	var root:Node3D=pop.demo.town.house_roots.get(str(house.id))
	if root==null:return "营建中"
	if root.has_meta("prototype_caption"):return root.get_meta("prototype_caption")
	var label:="";var civic:Array=[];var neo:=-1
	for node:Node in root.find_children("*","Node3D",true,false):
		if node.has_meta("civic_archetype"):civic.append(str(node.get_meta("civic_archetype")))
		if node.has_meta("neoclassical_kind"):neo=maxi(neo,int(node.get_meta("neoclassical_kind")))
	for key:String in ["guildhall","rotunda","peristyle"]:
		if key in civic:label=Choice.label(key);break
	if label.is_empty() and not root.get_meta("modern_roofs",[]).is_empty():
		label=Choice.label(Choice.ALPINE[preload("res://scripts/world/city_creation_alpine_plan.gd").kind_for(house)])
	if label.is_empty() and neo>=0:label=Choice.label(["portico","townhouse","oriel"][neo])
	if label.is_empty():label={"timber":"木构小屋","round_tower":"圆塔居所","stone":"石砌居所"}.get(house.get("style","classic"),"暖石居所")
	if house.has("signature"):label="地标名胜"
	root.set_meta("prototype_caption",label);return label

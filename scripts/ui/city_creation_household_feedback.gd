extends RefCounted
## Foundation needs/fulfilled-household feedback, using our existing earned
## visit credits and delivery rules. Presentation only; no new economy state.
const Workshop = preload("res://scripts/world/city_creation_workshop.gd")

static func describe(city: RefCounted,life: Node3D,home_id: String) -> String:
	var harmony: Dictionary = city.house_harmony(home_id)
	var text := "♫ 居所共鸣 %d / 3 阶 · %s\n%s 麦香  %s 茶叙  %s 匠心" % [int(harmony.tier),str(harmony.title),"●" if harmony.food else "○","●" if harmony.social else "○","●" if harmony.craft else "○"]
	var next: String
	if not life.house_connected(home_id):
		next="先把小路接到这户门前，再通往店家。"
	elif not harmony.food:
		next=_service_step(city,life,home_id,"bakery")
	elif not harmony.social:
		next=_service_step(city,life,home_id,"garden_cafe")
	elif not harmony.craft:
		next=_service_step(city,life,home_id,"workshop")
	else:
		next="三项日常已满足，继续让街坊相聚奏乐。"
	return text+"\n下一步 · "+next

static func _service_step(city: RefCounted,life: Node3D,home_id: String,role: String) -> String:
	var name_value: String={"bakery":"面包坊","garden_cafe":"花圃茶座","workshop":"制琴坊"}[role]
	var exists := false
	var connected := false
	var in_range := false
	var home_key: String=str(life.connected_houses[home_id])
	var component: String=str(life._network.component_of[home_key])
	for house: Dictionary in city.houses:
		if str(house.role)!=role: continue
		exists=true
		var id := str(house.id)
		if not life.house_connected(id): continue
		var key: String=str(life.connected_houses[id])
		if str(life._network.component_of[key])!=component: continue
		connected=true
		if role=="workshop" and life.positions[home_key].distance_to(life.positions[key])>Workshop.RANGE: continue
		in_range=true
	if not exists: return "再建一间房屋，把用途设为%s。" % name_value
	if not connected: return "把这户与%s接到同一条能步行相通的小路。" % name_value
	if not in_range: return "在这户22米内设一处制琴坊，并用小路接通。"
	match role:
		"bakery": return "让面包坊开炉备货，街坊沿路买到面包后点亮麦香。"
		"garden_cafe": return "让两位买过面包的街坊沿路到茶座，喝完一盏茶。"
		"workshop": return "让制琴坊开工，匠人把第一件木饰送装到这户。"
	return ""

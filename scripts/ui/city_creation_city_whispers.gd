extends RefCounted
## Optional mature-town invitations read actual experiences, never award progress.
const Supply=preload("res://scripts/world/city_creation_civic_supply.gd")
const Streets=preload("res://scripts/world/city_creation_street_wonder_plan.gd")
static func text(city:RefCounted)->String:
	var food:=false;var instruments:=false;var clock:=false;var roles:Dictionary={}
	for house:Dictionary in city.houses:
		roles[str(house.role)]=true
		var view:=Supply.status(city,str(house.id))
		if house.role=="garden_cafe" and view.tier==2:food=true
		if house.role=="atelier" and view.tier==2:instruments=true
		clock=clock or float(view.tempo_mult)>1.
	if not food:return "让面包坊与茶座沿小路相邻，听第一桌茶点唤起双声部。"
	if not instruments:return "给制琴坊添一间相通的书院，让做好的乐器留在邻家。"
	if not clock:return "在街坊身旁留一间钟表铺，让整条街轻轻提速。"
	var scenery:=Streets.derive(city)
	if scenery.pockets.is_empty():return "试着把小屋转一个角度，给街角留出长椅与野花。"
	if scenery.piers.is_empty():return "沿水岸留一座小屋，看木栈桥朝流水慢慢长出。"
	if scenery.fountains.is_empty():return "在两户相伴的路口点一座环岛，让涌泉与花坛相遇。"
	if city.harmony_journey.get("vignette_blessings",{}).is_empty():return "翻开一首风物诗，让喜欢的街坊留下永久的小小纪念。"
	return "不妨沿街慢走，听水岸、茶席与工坊轮流接过旋律。"

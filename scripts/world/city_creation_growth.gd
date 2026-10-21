extends RefCounted
## Read-only journal goals derived from current structures and real life ledgers.
const Towers = preload("res://scripts/world/city_creation_towers.gd")
const RoundTower = preload("res://scripts/world/city_creation_round_tower_plan.gd")
const Conservatory = preload("res://scripts/world/city_creation_conservatory_plan.gd")
const Arcade = preload("res://scripts/world/city_creation_arcade_plan.gd")
const Stepping = preload("res://scripts/world/city_creation_stepping_plan.gd")
const CHAPTERS := ["dawn", "tide", "festival", "nocturne"]
const FINISHES := {
	"dawn":{"name":"晨杏与陶红","chapter":"dawn"},
	"tide":{"name":"海盐与青瓦","chapter":"tide"},
	"festival":{"name":"夜蓝与金穗","chapter":"festival"},
	"nocturne":{"name":"星夜鎏金与月白","chapter":"nocturne"},
	"river_jade":{"name":"青瓷与黛瓦","chapter":"","achievement":"five_chords"},
	"opal":{"name":"月石与鸢尾","chapter":"","achievement":"century_symphony"}}


static func report(state) -> Array[Dictionary]:
	var geometry:Dictionary=state.growth_geometry_summary()
	var bridges:int=geometry.bridges;var styles:int=geometry.styles
	var towers:int=geometry.towers;var tower_home:String=geometry.tower_home
	var homes:Dictionary=geometry.homes
	var home:String=homes.get("residential","");var venue:String=homes.get("venue","")
	var rows: Array[Dictionary] = []
	rows.append(_chapter(state,"dawn","晨光初聚",[
		_goal("连起一座跨水的桥",bridges,1,2,"","bridge"),
		_goal("烤出第一份面包",_sum(state.bakery_supply,"produced"),1,4,homes.get("bakery",""),"bread"),
		_goal("完成一场街坊演出",int(state.life_progress.concerts),1,4,venue,"concert")]))
	rows.append(_chapter(state,"tide","街坊成歌",[
		_goal("记下晨光初聚",1 if "dawn" in state.growth_memories else 0,1,0,home,"chapter:dawn"),
		_goal("留下九座房屋",state.houses.size(),9,0,home,"houses"),
		_goal("完成一次花下茶聚",int(state.life_progress.tea_parties),1,4,homes.get("garden_cafe",""),"tea"),
		_goal("送装一件制琴坊木饰",_sum(state.workshop_supply,"delivered"),1,4,homes.get("workshop",""),"craft"),
		_goal("让两种街坊声音都有住户",styles,2,7,home,"districts")]))
	rows.append(_chapter(state,"festival","河湾交响城",[
		_goal("记下街坊成歌",1 if "tide" in state.growth_memories else 0,1,0,home,"chapter:tide"),
		_goal("留下二十六座房屋",state.houses.size(),26,0,home,"houses"),
		_goal("长出一座独立钟楼",towers,1,0,tower_home if not tower_home.is_empty() else home,"tower"),
		_goal("在成功演出中用上一份节庆布置",_sum(state.venue_commissions,"used"),1,4,venue,"festival")]))
	var high_home: String = geometry.high_home
	var landmark_home: String = geometry.landmark_home
	rows.append(_chapter(state,"nocturne","星夜百鸟与立体交响",[
		_goal("记下河湾交响城",1 if "festival" in state.growth_memories else 0,1,0,home,"chapter:festival"),
		_goal("在山坡或台地留下一座高地房屋",0 if high_home.is_empty() else 1,1,8,high_home,"highland"),
		_goal("铺设一段石板灯街或浅水汀步",int(geometry.scenic_route),1,2,home,"scenic_route"),
		_goal("长出圆塔、玻璃花房或连拱柱廊",0 if landmark_home.is_empty() else 1,1,4,landmark_home,"landmark"),
		_goal("连起一条跨区共鸣音弧",state.musical_links.size(),1,7,home,"musical_link")]))
	return rows


static func geometry_summary(state) -> Dictionary:
	var bridges:=0;var styles:Dictionary={};var homes:Dictionary={};var towers:=0;var tower_home:=""
	for road:Dictionary in state.roads:
		if bool(road.get("bridge",false)):bridges+=1
	# Journal crowns historically use the no-road derivation. Keep this
	# semantic distinct from the rendered bell catalogue's road-aware plan.
	var derived:Dictionary=Towers.derive(state.houses)
	for house:Dictionary in state.houses:
		var district:Dictionary=state.district_for_house(str(house.id))
		if not district.is_empty():styles[str(district.style)]=true
		var role:=str(house.role)
		if not homes.has(role):homes[role]=str(house.id)
		var count:int=derived[str(house.id)].size();towers+=count
		if count>0 and tower_home.is_empty():tower_home=str(house.id)
	var high_home := ""
	var landmark_home := ""
	for house: Dictionary in state.houses:
		if float(house.get("base_y",0.0)) >= 0.8 and high_home.is_empty(): high_home = str(house.id)
		if landmark_home.is_empty() and _landmark(state,house):
			landmark_home = str(house.id)
	var scenic_route := false
	for road: Dictionary in state.roads:
		if str(road.get("style","path"))=="promenade" or not Stepping.for_road(state,road).is_empty():
			scenic_route = true
			break
	return {"high_home":high_home,"landmark_home":landmark_home,"scenic_route":scenic_route,"bridges":bridges,"styles":styles.size(),"homes":homes,"towers":towers,"tower_home":tower_home}


static func _landmark(state, house: Dictionary) -> bool:
	if not RoundTower.for_house(house,state.houses,state.roads).is_empty(): return true
	if not Conservatory.choose(state.houses,house).is_empty(): return true
	# A single-floor home cannot form an arcade; avoid a courtyard/topology
	# query for each such home when the journal refreshes after an edit.
	for cell: Dictionary in house.cells:
		if str(cell.kind)=="room" and int(cell.level)==1:
			return not Arcade.for_house(state,house).is_empty()
	return false


static func _chapter(state, id: String, title: String, goals: Array) -> Dictionary:
	var earned: bool = id in state.growth_memories
	var ready := not earned
	for goal: Dictionary in goals: ready = ready and bool(goal.done)
	return {"id":id,"title":title,"reward_id":id,"reward_name":FINISHES[id].name,"earned":earned,"ready":ready,"goals":goals}


static func _goal(label: String, value: int, target: int, tool: int, house_id: String, action: String = "") -> Dictionary:
	return {"label":label,"value":value,"target":target,"done":value>=target,"tool":tool,"house_id":house_id,"action":action}


static func _sum(ledger: Dictionary, key: String) -> int:
	var value := 0
	for row: Dictionary in ledger.values(): value += int(row.get(key,0))
	return value


static func _home(state, role: String) -> String:
	for house: Dictionary in state.houses:
		if str(house.role)==role: return str(house.id)
	return ""

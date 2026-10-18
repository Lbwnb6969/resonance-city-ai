extends RefCounted
## Actionable journal guidance over real construction/production conditions.
## Foundation's quest/condition assets distinguish prerequisites from rewards;
## our instructions prepare tools and views, never complete a goal for the player.
const ACTIONS := {
	"bridge": ["画一座桥", "从这一岸按住左键，拖到对岸的空地再松开。\n路会自动搭桥，再把桥头接到原有小路。"],
	"bread": ["查看炉火", "在右侧把房屋用途设为面包坊。\n把门前小路接到居所所在的路网，面包师到岗就会开炉。"],
	"concert": ["邀请演出", "在右侧选择演奏庭，点「邀请街坊演出」。\n门前接路，让住户沿同一条路网走来，等一曲完整落幕。"],
	"houses": ["添些新屋", "在小路旁的空地点击或拖动，添上几座新屋。\n扩房增加房间；在空地建造才会增加房屋数量。"],
	"tea": ["安排茶座", "把右侧用途设为花圃茶座，门外留空地。\n让茶座、面包坊与居所路网相通，等两位买过面包的住户来喝茶。"],
	"craft": ["查看制琴坊", "把右侧用途设为制琴坊，并接通居所所在的路网。\n匠人到岗后制作木饰，沿小路送到周围22米内的邻屋。"],
	"districts": ["画新街坊", "选一种尚未使用的街坊声音，拖过一片住户。\n再用另一种声音画另一片住户，两种声音都要有房屋。"],
	"tower": ["长出钟楼", "在这座独立小屋的屋顶继续加层，叠满三层。\n顶层留成单格房间，避开邻屋屋顶，便会长出尖顶钟楼。"],
	"festival": ["查看节庆委托", "让演奏庭先完整演出一场，发出节庆委托。\n有匠人和成品的制琴坊会沿相通路网送来；布置就绪后再演一场。"],
	"highland": ["刷一处台地", "先在这片空地刷出一处「平顶·台地」。\n再切到房屋工具，在台地顶上建一座新屋；原有房屋不会被地面顶起。"],
	"scenic_route": ["铺一段灯街", "「石板宽街」已选好。沿原有小路再描一笔，或拖出新路。\n切换夕照或星夜，看路旁的灯盏亮起。"],
	"landmark": ["选择建筑样式", "在右侧建筑样式中选择「圆塔·望楼」。\n独立的一柱房间会长成圆塔；也可建玻璃花房或连拱柱廊。"],
	"musical_link": ["牵起共鸣音弧", "「连接共鸣街坊」已开启，从一片街坊拖向另一片。\n至少先画出两片有住户的街坊；连接可以跨过河流。"],
}

static func caption(goal: Dictionary) -> String:
	if bool(goal.done): return "去看看"
	if str(goal.get("action", "")).begins_with("chapter:"): return "先写上一章"
	return str(ACTIONS.get(str(goal.get("action", "")), ["回到河湾", ""])[0])

static func instruction(goal: Dictionary) -> String:
	if str(goal.get("action", "")).begins_with("chapter:"): return "先完成上一章的桥、街坊生活与演出；手记会自动收录。"
	return str(ACTIONS.get(str(goal.get("action", "")), ["", str(goal.label)])[1])

static func apply(demo: Node3D, goal: Dictionary) -> void:
	if demo.camera_rig.strolling: demo.camera_rig.toggle(demo)
	var action := str(goal.get("action", ""))
	var id := str(goal.house_id)
	if id.is_empty() and action in ["bread", "concert", "tea", "craft", "festival"]:
		id = _home(demo.state, "residential")
		if id.is_empty():
			demo.select_tool(0)
			demo.guided_hint = "先在小路旁建一座新屋，再回来安排这项生活。\n保留一些居所，店家才有工人和客人。"
			demo._refresh_ui()
			return
	if action in ["landmark", "tower"] and not bool(goal.done): id = _column_home(demo.state)
	if not id.is_empty():
		var house: Dictionary = demo.town._house_record(id)
		if not house.is_empty():
			demo.selected_house = id
			demo.focus = Vector3(house.origin[0], float(house.get("base_y", 0.0)) + 1.0, house.origin[1])
			demo.zoom = minf(float(demo.zoom), 20.0)
	if action == "bridge" and not bool(goal.done):
		demo.focus = Vector3(demo.state.river_x(2.0), 0.7, 2.0)
		demo.zoom = 24.0
	if action == "highland" and not bool(goal.done):
		var at := _empty_highland(demo.state)
		demo.focus = Vector3(at.x, float(demo.state.ground_height(at)) + 0.5, at.y)
		demo.zoom = 16.0
	demo._update_camera()
	demo.select_tool(int(goal.tool))
	if not bool(goal.done):
		match action:
			"bridge", "scenic_route":
				demo.road_style = "promenade" if action == "scenic_route" else "path"
				var button: CheckButton = demo.road_panel.find_child("RoadPromenade", true, false)
				if button != null:
					button.set_pressed_no_signal(action == "scenic_route")
				var styles: OptionButton = demo.road_panel.find_child("RoadStyle", true, false)
				if styles != null:
					styles.select(1 if action == "scenic_route" else 0)
			"highland":
				demo.terrain_brush.mode = "plateau"
				demo.terrain_brush.mode_picker.select(demo.terrain_brush.MODES.find("plateau"))
				demo.terrain_brush.radius = 3.5
				demo.terrain_brush.radius_picker.select(1)
			"districts":
				demo.district_link_mode = false
				demo.district_link_button.set_pressed_no_signal(false)
				demo.selected_district = ""
				var used := {}
				for house: Dictionary in demo.state.houses:
					var district: Dictionary = demo.state.district_for_house(str(house.id))
					if not district.is_empty(): used[str(district.style)] = true
				for style: String in demo.DISTRICT_STYLES:
					if not used.has(style):
						demo.district_style = style
						break
				demo.district_style_picker.select(demo.DISTRICT_STYLES.find(demo.district_style))
			"musical_link":
				demo.district_link_mode = true
				demo.district_link_button.set_pressed_no_signal(true)
				demo.selected_district = ""
		demo.guided_hint = instruction(goal)
		demo._refresh_ui()
	demo._message(str(goal.label))

static func _home(state: RefCounted, role: String) -> String:
	for house: Dictionary in state.houses:
		if str(house.role) == role: return str(house.id)
	return ""

static func _column_home(state: RefCounted) -> String:
	for house: Dictionary in state.houses:
		var column := true
		for cell: Dictionary in house.cells:
			if int(cell.x) != 0 or int(cell.z) != 0 or str(cell.kind) != "room": column = false
		if column and str(house.role) == "residential": return str(house.id)
	return _home(state, "residential")

static func _empty_highland(state: RefCounted) -> Vector2:
	# Pick a usable, visible brush site in the actual 80m parcel.
	for at: Vector2 in [Vector2(18, -18), Vector2(-22, -18), Vector2(24, 20), Vector2(-24, 22), Vector2(30, -27)]:
		if state.water_clearance(at) < 5.0: continue
		var clear := true
		for house: Dictionary in state.houses:
			for cell: Dictionary in house.cells:
				var p := Vector2(house.origin[0], house.origin[1]) + Vector2(cell.x, cell.z) * 1.8
				if p.distance_to(at) < 6.0: clear = false
		for road: Dictionary in state.roads:
			for i in range(road.points.size() - 1):
				var a := Vector2(road.points[i][0], road.points[i][1])
				var b := Vector2(road.points[i + 1][0], road.points[i + 1][1])
				if at.distance_to(Geometry2D.get_closest_point_to_segment(at, a, b)) < 5.0: clear = false
		if clear: return at
	return Vector2(18, -18)

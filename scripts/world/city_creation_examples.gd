extends RefCounted
## Packaged, read-only starting points. Opening always validates a fresh State;
## no personal collection file or currently open city is touched here.
const State := preload("res://scripts/world/city_creation_state.gd")
const COVER_DIRECTORY := "res://资源/界面/示范河湾/"
const CATALOG := [
	{"id":"example_flagship","file":"四库共鸣交响大城样例.json","title":"四库共鸣交响大城","summary":"127座建筑、四时代街区与六座地标，沿电车与石阶巡游两岸。","focus":[0.0,1.2,2.0],"zoom":88.0,"pitch":0.86,"yaw":0.34},
	{"id":"example_creation","file":"创作河湾样例.json","title":"创作河湾","summary":"从小屋与街道开始，接着画出自己的河湾。","focus":[-3.0,0.7,0.0],"zoom":25.0,"pitch":0.64},
	{"id":"example_highland","file":"高地河湾样例.json","title":"高地小城","summary":"沿石阶登上高庭，在台地上继续建房。","focus":[-13.0,1.0,-0.5],"zoom":20.0,"pitch":0.80},
	{"id":"example_promenade","file":"灯街河湾样例.json","title":"暮色灯街","summary":"石板宽街、暖光灯盏与路旁花箱。","focus":[-6.0,0.7,0.0],"zoom":24.0,"pitch":0.80,"evening":true},
	{"id":"example_round_tower","file":"圆塔河湾样例.json","title":"圆塔望楼","summary":"圆润石塔与曲面锥顶，俯望河湾街坊。","focus":[-8.0,1.0,0.0],"zoom":27.0,"pitch":0.80},
	{"id":"example_conservatory","file":"花房河湾样例.json","title":"屋顶花房","summary":"连续露台长出玻璃穹顶与墨绿花架。","focus":[-7.0,1.7,-4.0],"zoom":22.0,"pitch":0.80},
	{"id":"example_arcade","file":"柱廊河湾样例.json","title":"临街连拱","summary":"石柱与拱券留出廊下净空，门窗退入内墙。","focus":[-7.0,0.9,-4.5],"zoom":18.0,"pitch":0.74},
	{"id":"example_stepping","file":"汀步河湾样例.json","title":"浅渠汀步","summary":"看居民踩过水中青石，听轻巧的水滴短音。","focus":[-8.0,0.7,-11.0],"zoom":16.0,"pitch":0.80},
	{"id":"example_manual_links","file":"跨河共鸣样例.json","title":"跨河共鸣","summary":"没有桥也能连起街坊，让两岸隔水对答。","focus":[0.5,0.7,-1.5],"zoom":27.0,"pitch":0.85},
	{"id":"example_courtyard","file":"庭院河湾样例.json","title":"喷泉内院","summary":"围合房屋留下露天石铺庭院与喷泉。","focus":[10.5,0.7,-8.5],"zoom":20.0,"pitch":0.82},
	{"id":"example_terrace","file":"露台花架样例.json","title":"露台花架","summary":"退台上的轻木花架、奶油布篷与绿意。","focus":[-5.5,1.3,0.0],"zoom":24.0,"pitch":0.75},
	{"id":"example_styles","file":"建筑街景样例.json","title":"木构与石屋","summary":"经典灰泥、深色木梁与石砌街屋同街相伴。","focus":[-5.5,0.7,0.0],"zoom":24.0,"pitch":0.75},
	{"id":"example_landform","file":"地貌河湾样例.json","title":"露岩草丘","summary":"草丘、坡面露岩与伴石，试着再添一道起伏。","focus":[10.5,0.7,9.5],"zoom":22.0,"pitch":0.80},
	{"id":"example_plateau","file":"台地河湾样例.json","title":"平顶台地","summary":"平缓台顶与层理陡坡，探索另一种地貌轮廓。","focus":[-12.0,1.0,-2.0],"zoom":22.0,"pitch":0.78},
	{"id":"example_pond","file":"睡莲池塘样例.json","title":"睡莲池塘","summary":"近看水面叶片与小花，沿湿砂岸边继续布置。","focus":[-14.5,0.2,4.0],"zoom":12.0,"pitch":1.0,"yaw":-0.6},
	{"id":"example_reply","file":"街坊连奏样例.json","title":"街坊连奏","summary":"相邻主题沿真实路网轮流接起短句。","focus":[-5.2,0.7,-3.5],"zoom":22.0,"pitch":0.78},
	{"id":"example_town","file":"经营河湾样例.json","title":"忙碌的河湾","summary":"面包、茶聚、匠作与演出在同一座小城运转。","focus":[-1.0,0.7,0.0],"zoom":43.0,"pitch":0.85},
	{"id":"example_relay","file":"庆典接力样例.json","title":"庆典接力","summary":"多座演奏庭依次开演，跟随真实到场的居民。","focus":[-10.0,0.7,-0.5],"zoom":22.0,"pitch":0.80},
]
static var _entries_cache: Array[Dictionary] = []


static func entries() -> Array[Dictionary]:
	# These bundled resources are immutable during a play session. Validate each
	# once for the gallery; selected entries are re-read and validated on opening.
	if _entries_cache.is_empty():
		for row: Dictionary in CATALOG:
			var loaded := read(str(row.id))
			_entries_cache.append({"id":str(row.id),"title":str(row.title),"summary":str(row.summary),
				"cover_path":COVER_DIRECTORY + str(row.id) + ".png","valid":bool(loaded.ok)})
	return _entries_cache.duplicate(true)


static func read(id: String) -> Dictionary:
	var row: Dictionary = {}
	for candidate: Dictionary in CATALOG:
		if candidate.id == id:
			row = candidate
			break
	if row.is_empty(): return {"ok":false,"message":"示范河湾不存在"}
	var path: String = "res://数据/" + str(row.file)
	var file := FileAccess.open(path, FileAccess.READ)
	if file == null: return {"ok":false,"message":"无法读取示范河湾：" + str(row.title)}
	var json := JSON.new()
	var parse_error := json.parse(file.get_as_text())
	file.close()
	if parse_error != OK or not json.data is Dictionary:
		return {"ok":false,"message":"示范河湾数据格式无效：" + str(row.title)}
	var city := State.new()
	var restored: Dictionary = city.restore(json.data)
	if not restored.ok: return {"ok":false,"message":"示范河湾校验失败：" + str(restored.message)}
	var view := {"focus":row.focus.duplicate(),"yaw":float(row.get("yaw",0.62)),
		"pitch":float(row.pitch),"zoom":float(row.zoom),"evening":bool(row.get("evening",false)),
		"light_phase":int(row.get("light_phase",1 if bool(row.get("evening",false)) else 0))}
	return {"ok":true,"message":"示范河湾已读取","world":city.snapshot(),"view":view,"title":str(row.title),"id":id}

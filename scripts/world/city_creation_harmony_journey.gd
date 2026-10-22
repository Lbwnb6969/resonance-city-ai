class_name CityCreationHarmonyJourney
extends RefCounted
## 长线陪伴城建 × 嵌入式轻肉鸽灵感奇遇引擎 (Persistent Cozy City Builder + Roguelite Journey)
## 1. 绝不限制玩家自由建房与自由设置 6 种生活工坊（零卡手、随时存档接着玩）。
## 2. 随着城市真实烟火运转（面包出炉、茶聚、送装、心愿完成、和弦点亮），自然累积河湾共鸣经验 `harmony_xp`。
## 3. 每升 1 级触发「河湾灵感手札三选一（Inspiration Draft）」，从传世声学赐福池中选 1 项永久融入本城存档。
## 4. 动态根据当前城市地形生成无倒计时压力的「林间微缩造景奇遇（Acoustic Vignettes）」，牵引玩家每次上线扩建新街区。

const BASE_XP_THRESHOLD := 100
const XP_STEP_GROWTH := 65

## 6 张通用街坊声学秘方手札（与 city_creation_score_modifiers.gd 的 12 枚时代铭牌共同组成 18 项轻肉鸽构筑池）
const TRADITION_CARDS := {
	"warm_hearth_ballad": {
		"name": "🥐 暖炉晨曲手札",
		"desc": "所有临水面包坊每出炉 2 炉热面包，自动额外赠予 1 户远方民居，并使低音大提琴伴奏温暖度 +20%。",
		"bakery_speed_mult": 1.20,
		"extra_gift": true
	},
	"sylvan_luthier_guild": {
		"name": "🎻 林间琴社手札",
		"desc": "周围 8m 内有至少 4 棵树木的制琴木工坊，匠人步速 +25%，送出的铜风铃附带双声部五声泛音。",
		"workshop_speed_mult": 1.25,
		"double_chime": true
	},
	"twilight_tea_pavilion": {
		"name": "🍵 夕照茶亭手札",
		"desc": "花圃茶座每次完成围坐品茶，为所在聚落所有房屋额外延长 35 秒茶叙余韵，长笛副旋律更加悠扬。",
		"tea_afterglow_bonus": 35.0
	},
	"stone_step_carillon": {
		"name": "⛰️ 千阶石琴手札",
		"desc": "居民每次踏过 3D 石阶路奏响石板琴键时，步速额外 +20%，并为连接的台地房屋积攒共鸣经验。",
		"stair_speed_mult": 1.20,
		"stair_xp_bonus": 2
	},
	"lantern_bridge_echo": {
		"name": "🌉 提灯桥影手札",
		"desc": "跨河石拱桥与汀步石两侧 12m 内的房屋，跨岸器乐问答响应速度翻倍，夜间暖窗声域扩大 35%。",
		"bridge_aura_mult": 1.35
	},
	"courtyard_canon_spring": {
		"name": "⛲ 围院清泉手札",
		"desc": "闭合内院喷泉直接视同天然活水（可激活水力面包坊），且围院顺时针卡农轮唱的余韵收益 +30%。",
		"courtyard_counts_as_water": true,
		"canon_bonus_mult": 1.30
	}
}

## 动态微缩声学奇遇模板（无倒计时、可随时完成或一键刷新，提供“每次上线再造一小片”的温柔目标）
const VIGNETTE_TEMPLATES := [
	{
		"id": "vignette_river_bend_choir",
		"title": "✨ 河湾浅滩的游吟诗社",
		"prompt": "在河对岸或水畔空地新聚拢 4 座小屋并接通小路，唤醒一片新的岸边伴奏聚落。",
		"reward_xp": 85,
		"reward_desc": "奖励 +85 ♪ 共鸣度，并立刻触发一次【河湾灵感手札三选一】"
	},
	{
		"id": "vignette_highland_terrace",
		"title": "⛰️ 登高望远的石阶茶席",
		"prompt": "在海拔 >=1.0m 的台地上建起 3 座小屋并拉一条石阶路下山，让居民踩响石阶琴键。",
		"reward_xp": 95,
		"reward_desc": "奖励 +95 ♪ 共鸣度，台地街坊永久解锁高空木管五度延音"
	},
	{
		"id": "vignette_courtyard_fountain",
		"title": "⛲ 合围内院的顺时针轮唱",
		"prompt": "用连排房屋围合出一处闭合石铺内院，唤醒内院喷泉与顺时针窗光卡农轮唱。",
		"reward_xp": 110,
		"reward_desc": "奖励 +110 ♪ 共鸣度，内院周围民居直接获得 60 秒黄金余韵"
	},
	{
		"id": "vignette_olive_grove_craft",
		"title": "🌲 橄榄林间的制琴木香",
		"prompt": "在一处制琴坊周围种满 4 棵橄榄树或金叶树，让匠人为邻屋挂上铜风铃。",
		"reward_xp": 90,
		"reward_desc": "奖励 +90 ♪ 共鸣度，全城制琴坊立即额外产出 1 件木饰"
	}
]

static func default_state() -> Dictionary:
	return {
		"harmony_xp": 0,
		"harmony_level": 1,
		"traditions": [],
		"pending_draft": [],
		"active_vignette": "vignette_river_bend_choir",
		"completed_vignettes": []
	}

static func xp_for_next_level(level: int) -> int:
	return BASE_XP_THRESHOLD + maxi(0, level - 1) * XP_STEP_GROWTH

static func add_harmony_xp(journey: Dictionary, amount: int, rng_seed: int = 74001) -> Dictionary:
	if amount <= 0:
		return {"leveled_up": false, "journey": journey}
	var cur_xp := int(journey.get("harmony_xp", 0)) + amount
	var cur_lvl := maxi(1, int(journey.get("harmony_level", 1)))
	var needed := xp_for_next_level(cur_lvl)
	var leveled := false
	while cur_xp >= needed:
		cur_xp -= needed
		cur_lvl += 1
		leveled = true
		needed = xp_for_next_level(cur_lvl)
	journey["harmony_xp"] = cur_xp
	journey["harmony_level"] = cur_lvl
	if leveled and Array(journey.get("pending_draft", [])).is_empty():
		journey["pending_draft"] = roll_inspiration_draft(journey, cur_lvl, rng_seed)
	return {"leveled_up": leveled, "level": cur_lvl, "journey": journey}

static func roll_inspiration_draft(journey: Dictionary, level: int, rng_seed: int) -> Array[String]:
	var owned: Array = journey.get("traditions", [])
	var pool: Array[String] = []
	for k: String in TRADITION_CARDS.keys():
		if k not in owned:
			pool.append(k)
	if pool.size() <= 3:
		return pool
	var rng := RandomNumberGenerator.new()
	rng.seed = int(rng_seed) + level * 19937
	var picked: Array[String] = []
	while picked.size() < 3 and not pool.is_empty():
		var idx := rng.randi() % pool.size()
		picked.append(pool[idx])
		pool.remove_at(idx)
	return picked

static func choose_inspiration(journey: Dictionary, card_id: String) -> bool:
	var pending: Array = journey.get("pending_draft", [])
	if card_id not in TRADITION_CARDS or (not pending.is_empty() and card_id not in pending):
		return false
	var owned: Array = journey.get("traditions", [])
	if card_id not in owned:
		owned.append(card_id)
	journey["traditions"] = owned
	journey["pending_draft"] = []
	return true

static func validate(data: Variant) -> bool:
	if not data is Dictionary:
		return false
	var xp: Variant = data.get("harmony_xp", 0)
	var lvl: Variant = data.get("harmony_level", 1)
	if not (xp is int or xp is float) or int(xp) < 0 or int(lvl) < 1:
		return false
	var trads: Variant = data.get("traditions", [])
	if not trads is Array:
		return false
	for t: Variant in trads:
		if not t is String or not TRADITION_CARDS.has(t):
			return false
	return true

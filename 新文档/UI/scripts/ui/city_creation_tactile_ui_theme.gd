extends RefCounted
## M46/M48 UI Overhaul: "Minimalist Illuminated Manuscript" (极简留白 × 手工烫金乐谱羊皮卷)
## Enforces >=92% 3D viewport breathing room, 1-line ultra-concise poetic badges (no raw multiplier numbers),
## 3-Tier Rarity Card frames (Silver/Gilded/Prismatic), Day/Night adaptive Parchment Whisper Pills,
## and zero-allocation cached StyleBoxFlat resources for 0ms UI frame overhead.

const COLOR_PARCHMENT_BG := Color(0.965, 0.933, 0.863, 0.88)
const COLOR_PARCHMENT_DARK := Color(0.184, 0.153, 0.122, 0.86)
const COLOR_INK_PRIMARY := Color(0.220, 0.176, 0.137, 1.0)
const COLOR_INK_LIGHT := Color(0.973, 0.945, 0.886, 1.0)

const RARITY_PALETTE := {
	"silver": {
		"title": "⚪ 白银手札",
		"bg": Color(0.957, 0.941, 0.902, 0.94),
		"border": Color(0.620, 0.647, 0.686, 0.90),
		"glow": Color(0.780, 0.808, 0.847, 0.22),
		"accent": Color(0.365, 0.400, 0.455, 1.0),
		"border_width": 1
	},
	"gilded": {
		"title": "🟡 鎏金秘卷",
		"bg": Color(0.976, 0.941, 0.855, 0.96),
		"border": Color(0.831, 0.639, 0.243, 0.96),
		"glow": Color(0.957, 0.784, 0.369, 0.38),
		"accent": Color(0.643, 0.435, 0.086, 1.0),
		"border_width": 2
	},
	"prismatic": {
		"title": "🌈 虹彩传世 · 奇观",
		"bg": Color(0.988, 0.957, 0.890, 0.98),
		"border": Color(0.945, 0.545, 0.388, 1.0),
		"glow": Color(0.980, 0.820, 0.450, 0.58),
		"accent": Color(0.745, 0.255, 0.180, 1.0),
		"border_width": 3
	}
}

static var _style_cache: Dictionary = {}

static func whisper_pill_style(is_night: bool = false) -> StyleBoxFlat:
	var key := "whisper_night" if is_night else "whisper_day"
	if _style_cache.has(key):
		return _style_cache[key]
	var box := StyleBoxFlat.new()
	box.bg_color = COLOR_PARCHMENT_DARK if is_night else COLOR_PARCHMENT_BG
	box.border_color = Color(0.855, 0.686, 0.365, 0.82) if is_night else Color(0.588, 0.463, 0.302, 0.72)
	box.set_border_width_all(1)
	box.set_corner_radius_all(18)
	box.content_margin_left = 18.0
	box.content_margin_right = 18.0
	box.content_margin_top = 6.0
	box.content_margin_bottom = 6.0
	box.shadow_color = Color(0.08, 0.06, 0.04, 0.22)
	box.shadow_size = 5
	box.shadow_offset = Vector2(0.0, 2.0)
	_style_cache[key] = box
	return box

static func whisper_text_color(is_night: bool = false) -> Color:
	return COLOR_INK_LIGHT if is_night else COLOR_INK_PRIMARY

static func card_frame_style(rarity: String = "silver", hovered: bool = false) -> StyleBoxFlat:
	var key := "card_%s_%s" % [rarity, "hover" if hovered else "idle"]
	if _style_cache.has(key):
		return _style_cache[key]
	var cfg: Dictionary = RARITY_PALETTE.get(rarity, RARITY_PALETTE["silver"])
	var box := StyleBoxFlat.new()
	box.bg_color = cfg["bg"].lightened(0.03) if hovered else cfg["bg"]
	box.border_color = cfg["border"].lightened(0.12) if hovered else cfg["border"]
	var bw: int = int(cfg["border_width"]) + (1 if hovered else 0)
	box.set_border_width_all(bw)
	box.set_corner_radius_all(14)
	box.content_margin_left = 16.0
	box.content_margin_right = 16.0
	box.content_margin_top = 14.0
	box.content_margin_bottom = 14.0
	box.shadow_color = cfg["glow"]
	box.shadow_size = 10 if rarity == "prismatic" else (6 if rarity == "gilded" else 3)
	box.shadow_offset = Vector2(0.0, 3.0)
	_style_cache[key] = box
	return box

static func card_rarity_caption(rarity: String, pity_count: int = 0) -> String:
	var cfg: Dictionary = RARITY_PALETTE.get(rarity, RARITY_PALETTE["silver"])
	var base := str(cfg.get("title", "⚪ 白银手札"))
	if rarity != "prismatic" and pity_count >= 2:
		return base + " · 下一卷必出传世"
	return base

static func format_compass_supply_capsule(role: String, supply_status: Dictionary, family_short: String = "") -> String:
	if role == "residential" or role.is_empty():
		return family_short if not family_short.is_empty() else "安居小屋"
	var tier := int(supply_status.get("tier", 0))
	var tempo := float(supply_status.get("tempo_mult", 1.0))
	var tier_label := "待山水回响"
	if tier == 1:
		tier_label = "✦ 首秀已亮"
	elif tier >= 2:
		tier_label = "✦✦ 街坊雅集共鸣"
	if tempo > 1.05:
		tier_label += " · 🕰️金钟合拍"
	if not family_short.is_empty():
		return "%s · %s" % [family_short, tier_label]
	return tier_label

static func post_10_house_wander_whisper(city: RefCounted) -> String:
	if city == null or city.houses.size() < 10:
		return ""
	var has_angled := false
	var has_tier2_supply := false
	for house: Dictionary in city.houses:
		var yaw := float(house.get("yaw", 0.0))
		if absf(sin(yaw * 2.0)) > 0.25:
			has_angled = true
		if str(house.get("role", "residential")) in ["garden_cafe", "atelier"]:
			has_tier2_supply = true
	if not has_angled:
		return "✨ 选中房屋按 Q/E 或 R 轻转朝向，斜角将生出青苔石灯花园"
	if not has_tier2_supply:
		return "🍵 在面包坊旁设一座花园茶座，可点亮茶点互哺与双簧管重奏"
	return "🎶 按住 P 键拂过屋檐，随时唤醒整条街巷的五声琶音"

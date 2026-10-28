extends RefCounted
## Minimalist Illuminated Manuscript UI Theme & Zero-Allocation StyleBox Cache.
## Keeps >=92% viewport open, replaces raw multiplier numbers with poetic star badges (✦ / ✦✦),
## and caches all StyleBoxFlat instances statically so UI updates allocate zero heap memory.
const UI = preload("res://scripts/ui/valley_ui_theme.gd")

const COLOR_PARCHMENT_DAY := Color(0.965, 0.941, 0.882, 0.88)
const COLOR_PARCHMENT_NIGHT := Color(0.165, 0.220, 0.204, 0.88)
const COLOR_INK_DAY := Color("243f3a")
const COLOR_INK_NIGHT := Color("f6f0e1")

const TIER_STYLES := {
	1: {
		"title": "⚪ 白银手札",
		"bg": Color(0.957, 0.941, 0.902, 0.95),
		"border": Color("65796f"),
		"glow": Color(0.396, 0.475, 0.435, 0.16),
		"border_width": 1,
		"shadow_size": 3
	},
	2: {
		"title": "🟡 鎏金秘卷 · 余韵悠长",
		"bg": Color(0.976, 0.945, 0.867, 0.97),
		"border": Color("c4a568"),
		"glow": Color(0.769, 0.647, 0.408, 0.34),
		"border_width": 2,
		"shadow_size": 7
	},
	3: {
		"title": "🌈 虹彩传世 · 奇观冠冕",
		"bg": Color(0.988, 0.957, 0.898, 0.99),
		"border": Color("87588f"),
		"glow": Color(0.855, 0.620, 0.420, 0.52),
		"border_width": 3,
		"shadow_size": 11
	}
}

static var _cache: Dictionary = {}

static func whisper_pill_style(is_night: bool = false) -> StyleBoxFlat:
	var key := "whisper_night" if is_night else "whisper_day"
	if _cache.has(key):
		return _cache[key]
	var box := UI.panel(10.0)
	box.bg_color = COLOR_PARCHMENT_NIGHT if is_night else COLOR_PARCHMENT_DAY
	box.border_color = UI.GOLD if is_night else UI.BORDER
	box.set_border_width_all(1)
	box.set_corner_radius_all(18)
	box.content_margin_left = 18.0
	box.content_margin_right = 18.0
	box.content_margin_top = 7.0
	box.content_margin_bottom = 7.0
	box.shadow_color = Color(0.06, 0.11, 0.09, 0.22)
	box.shadow_size = 5
	box.shadow_offset = Vector2(0.0, 2.0)
	_cache[key] = box
	return box

static func whisper_text_color(is_night: bool = false) -> Color:
	return COLOR_INK_NIGHT if is_night else COLOR_INK_DAY

static func card_frame_style(tier: int = 1) -> StyleBoxFlat:
	var key := "draft_card_%d" % clampi(tier, 1, 3)
	if _cache.has(key):
		return _cache[key]
	var cfg: Dictionary = TIER_STYLES.get(clampi(tier, 1, 3), TIER_STYLES[1])
	var box := UI.card(14.0)
	box.bg_color = cfg["bg"]
	box.border_color = cfg["border"]
	box.set_border_width_all(int(cfg["border_width"]))
	box.set_corner_radius_all(12)
	box.shadow_color = cfg["glow"]
	box.shadow_size = int(cfg["shadow_size"])
	box.shadow_offset = Vector2(0.0, 3.0)
	_cache[key] = box
	return box

static func rarity_label_text(tier: int, pity_drought: int = 0) -> String:
	var cfg: Dictionary = TIER_STYLES.get(clampi(tier, 1, 3), TIER_STYLES[1])
	var text := str(cfg.get("title", "⚪ 白银手札"))
	if tier < 3 and pity_drought >= 2:
		text += " · 下一卷必逢传世"
	return text

static func compass_status_caption(family_caption: String, role: String, harmony_tier: int, level: int, civic: Dictionary, connected: bool) -> String:
	if role == "residential":
		var stars := "✦".repeat(clampi(harmony_tier, 1, 3)) if harmony_tier > 0 else "○"
		return "%s · %s 安居 · ★%d\n↻ Q/E 转90° · R 自由转向" % [family_caption, stars, level]
	var tier := int(civic.get("tier", 0))
	if tier > 0:
		var stage_label := "🕰️ 律动中枢" if role == "clockmaker" else ("✦✦ 街坊雅集" if tier == 2 else "✦ 晨炉初鸣")
		var tempo_label := " · 🕰️金钟合拍" if float(civic.get("tempo_mult", 1.0)) > 1.0 else ""
		return "%s · %s%s\n↻ Q/E 转90° · R 自由转向" % [family_caption, stage_label, tempo_label]
	return "%s · ★%d · %s\n↻ Q/E 转90° · R 自由转向" % [family_caption, level, "门路已通" if connected else "静候接路"]

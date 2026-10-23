extends RefCounted
const TEMPLATES := [
	{
		"id": "vignette_river_bend_choir",
		"title": "✨ 河湾浅滩的游吟诗社",
		"prompt": "在河对岸或水畔空地新聚拢 4 座小屋并接通小路，唤醒一片新的岸边伴奏聚落。",
		"reward_xp": 85,
		"reward_desc": "奖励85共鸣度，街坊永久制作+10%与领奏+0.6dB"
	},
	{
		"id": "vignette_highland_terrace",
		"title": "⛰️ 登高望远的石阶茶席",
		"prompt": "在海拔 >=1.0m 的台地上建起 3 座小屋并拉一条石阶路下山，让居民踩响石阶琴键。",
		"reward_xp": 95,
		"reward_desc": "奖励95共鸣度，台地街坊永久步速+8%、制作+10%与领奏+0.6dB"
	},
	{
		"id": "vignette_courtyard_fountain",
		"title": "⛲ 合围内院的顺时针轮唱",
		"prompt": "用连排房屋围合出一处闭合石铺内院，唤醒内院喷泉与顺时针窗光卡农轮唱。",
		"reward_xp": 110,
		"reward_desc": "奖励110共鸣度，内院街坊永久制作+10%与领奏+0.6dB"
	},
	{
		"id": "vignette_olive_grove_craft",
		"title": "🌲 橄榄林间的制琴木香",
		"prompt": "在一处制琴坊周围种满 4 棵橄榄树或金叶树，让匠人为邻屋挂上铜风铃。",
		"reward_xp": 90,
		"reward_desc": "奖励90共鸣度，林间街坊永久制作+10%与领奏+0.6dB"
	},
	{"id":"vignette_double_arch_song","era":"pastoral","title":"晴川双拱的跨水对歌","prompt":"拉一条跨水石板路，让双孔石桥连接两岸已通路的街坊。","reward_xp":100,"reward_desc":"双拱桥畔留下永久街坊回响"},
	{"id":"vignette_lily_hearth","era":"pastoral","title":"睡莲池畔的暖炉麦香","prompt":"在面包坊旁挖一方池塘，让睡莲与第一炉热面包相伴。","reward_xp":95,"reward_desc":"池畔暖炉留下永久街坊回响"},
	{"id":"vignette_golden_promenade","era":"pastoral","title":"金叶林荫的秋日漫步","prompt":"沿一段小径种下四株金叶树与花丛，让街坊走过金色树影。","reward_xp":100,"reward_desc":"金色林荫留下永久街坊回响"},
	{"id":"vignette_florentine_arcades","era":"renaissance","title":"佛罗伦萨的石柱连拱廊","prompt":"沿宽街建两座二层文艺复兴住宅，让石柱连拱廊并肩迎客。","reward_xp":120,"reward_desc":"连拱街坊留下永久室内乐回响"},
	{"id":"vignette_octagonal_salon","era":"renaissance","title":"八角穹顶下的人文雅集","prompt":"为文艺复兴高屋筑起八角采光穹顶，让小路通向人文雅集。","reward_xp":125,"reward_desc":"穹顶街坊留下永久人文回响"},
	{"id":"vignette_glasshouse_afternoon","era":"clockwork","title":"铁艺花房的午后阳光","prompt":"为蒸汽屋舍添连格二楼或露台，让铁艺玻璃花房迎接午后阳光。","reward_xp":130,"reward_desc":"玻璃花房留下永久街坊回响"},
	{"id":"vignette_tram_watchmaker","era":"clockwork","title":"叮当轨街与钟表匠街角","prompt":"铺一段黄铜轨街，在街旁安放钟表工坊，连接叮当日常。","reward_xp":130,"reward_desc":"轨街工坊留下永久钟表回响"},
	{"id":"vignette_canopy_twins","era":"modern_eco","title":"云端连廊的生态双子楼","prompt":"隔街筑两座现代高屋，让二三层的透明空廊相接，接通街坊小路。","reward_xp":145,"reward_desc":"云端双子楼留下永久生态回响"}
]

extends RefCounted
## Authored choices, one per earned era. Effects consume real city operations.
const ERAS := ["renaissance", "clockwork", "modern_eco"]
const CHOICES := {
	"arcade_market":{"era":"renaissance","name":"连拱市集章程","text":"底层连拱兼作路边茶廊。居民实际穿过连拱，恢复30秒茶叙余韵。"},
	"polyphonic_academy":{"era":"renaissance","name":"复调学院章程","text":"书院送画不受距离限制，仍需路网可达。相邻聚落每两乐句连续问答。"},
	"hydraulic_guild":{"era":"clockwork","name":"水力工匠章程","text":"距活水4.5米内的面包坊、制琴坊制作提速25%。"},
	"tram_promenade":{"era":"clockwork","name":"轨街漫游章程","text":"电车总站实际连通的黄金走廊，工坊与茶座额外提速25%。"},
	"lasting_resonance":{"era":"modern_eco","name":"长鸣花园章程","text":"演出与真实茶聚获得的余韵延长50%，同时提高余韵上限。"},
	"craft_federation":{"era":"modern_eco","name":"百工共生章程","text":"制琴坊、书院与钟表坊的制作及实际送装提速25%。"}
}
const PAIRS := [["arcade_market","polyphonic_academy"],["hydraulic_guild","tram_promenade"],["lasting_resonance","craft_federation"]]

static func selected(city:RefCounted,era:String)->String:
	for id:String in city.era_modifiers:
		if CHOICES[id].era==era:return id
	return ""

static func valid(value:Variant,unlocks:Array)->bool:
	if not value is Array or value.size()>3:return false
	var seen:Array[String]=[]
	for id:Variant in value:
		if not id is String or not CHOICES.has(id) or CHOICES[id].is_empty():return false
		var era:String=CHOICES[id].era
		if era not in unlocks or era in seen:return false
		seen.append(era)
	return true

static func production(city:RefCounted,house:Dictionary)->float:
	var role:=str(house.role)
	var result:=1.
	if city.era_modifiers.has("hydraulic_guild") and role in ["bakery","workshop"] and city.water_clearance(Vector2(house.origin[0],house.origin[1]))<4.5:result*=1.25
	if city.era_modifiers.has("tram_promenade") and city.transit_efficiency(str(house.id))>1.:result*=1.25
	if city.era_modifiers.has("craft_federation") and role in ["workshop","atelier","clockmaker"]:result*=1.25
	return result

static func afterglow(city:RefCounted)->float:
	return 1.5 if city.era_modifiers.has("lasting_resonance") else 1.

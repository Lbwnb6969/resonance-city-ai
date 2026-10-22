extends RefCounted
## Legacy era choices and journey-earned charters consume real city operations.
const ERAS := ["renaissance", "clockwork", "modern_eco"]
const CHOICES := {
	"hearth_neighbors":{"era":"pastoral","name":"炉边邻里章程","text":"面包坊制作提速10%。"},
	"garden_salons":{"era":"pastoral","name":"花下茶席章程","text":"茶座围坐耗时缩短10%。"},
	"woodland_workbench":{"era":"pastoral","name":"林木作坊章程","text":"制琴坊制作提速15%。"},
	"illuminated_atelier":{"era":"renaissance","name":"采光画室章程","text":"人文书院制作提速15%。"},
	"brass_orchard":{"era":"clockwork","name":"黄铜果园章程","text":"钟表坊制作提速15%。"},
	"cloud_gallery":{"era":"modern_eco","name":"云廊和鸣章程","text":"所有生活工坊制作提速10%。"},
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

static func valid(value:Variant,unlocks:Array,journey:Dictionary={})->bool:
	if not value is Array or value.size()>12:return false
	var seen:Array[String]=[];var ids:Array[String]=[]
	for id:Variant in value:
		if not id is String or not CHOICES.has(id) or CHOICES[id].is_empty():return false
		var era:String=CHOICES[id].era
		if era not in unlocks or id in ids:return false
		ids.append(id)
		if id not in journey.get("traditions",[]):
			if era in seen:return false
			seen.append(era)
	return true

static func production(city:RefCounted,house:Dictionary)->float:
	var role:=str(house.role)
	var result:=1.
	if city.era_modifiers.has("hydraulic_guild") and role in ["bakery","workshop"] and city.water_clearance(Vector2(house.origin[0],house.origin[1]))<4.5:result*=1.25
	if city.era_modifiers.has("tram_promenade") and city.transit_efficiency(str(house.id))>1.:result*=1.25
	if city.era_modifiers.has("craft_federation") and role in ["workshop","atelier","clockmaker"]:result*=1.25
	var owned:Array=city.harmony_journey.get("traditions",[])
	if role=="bakery":
		if "warm_hearth_ballad" in owned:result*=1.2
		if "hearth_neighbors" in city.era_modifiers:result*=1.1
	if role=="workshop":
		if "sylvan_luthier_guild" in owned:result*=1.25
		if "woodland_workbench" in city.era_modifiers:result*=1.15
	if role=="atelier" and "illuminated_atelier" in city.era_modifiers:result*=1.15
	if role=="clockmaker" and "brass_orchard" in city.era_modifiers:result*=1.15
	if "cloud_gallery" in city.era_modifiers:result*=1.1
	if "lantern_bridge_echo" in owned and city.water_clearance(Vector2(house.origin[0],house.origin[1]))<4.5:result*=1.15
	if "courtyard_canon_spring" in owned:
		for court:Dictionary in city.courtyard_plans():
			if str(house.id) in court.get("members",[]):result*=1.3;break
	return result

static func walking(city:RefCounted,id:String)->float:
	var index:int=city._house_index(id)
	return 1.2 if index>=0 and "stone_step_carillon" in city.harmony_journey.get("traditions",[]) and float(city.houses[index].get("base_y",0.))>=1. else 1.
static func afterglow(city:RefCounted)->float:
	return (1.5 if city.era_modifiers.has("lasting_resonance") else 1.)*(1.25 if "twilight_tea_pavilion" in city.harmony_journey.get("traditions",[]) else 1.)

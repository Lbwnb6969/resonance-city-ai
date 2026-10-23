extends RefCounted
## Legacy era choices and journey-earned charters consume real city operations.
const Families=preload("res://scripts/world/city_creation_tradition_synergy.gd")
const Vignettes=preload("res://scripts/world/city_creation_vignettes.gd")
const ERAS := ["renaissance", "clockwork", "modern_eco"]
const CHOICES := {
	"hearth_neighbors":{"era":"pastoral","name":"炉边邻里章程","text":"邻里茶访可沿路走到40米，让台地两端的邻居也能围坐炉边。"},
	"garden_salons":{"era":"pastoral","name":"花下茶席章程","text":"茶座旁多长一簇野花，保留迎客小径，花下茶席更常相聚。"},
	"woodland_workbench":{"era":"pastoral","name":"林木作坊章程","text":"工坊良木圈延至10米，远一点的橄榄树与金叶树也能滋养木香。"},
	"illuminated_atelier":{"era":"renaissance","name":"采光画室章程","text":"画师一次送来织锦与彩绘玻璃，让住宅一齐挂上双层人文装饰。"},
	"brass_orchard":{"era":"clockwork","name":"黄铜果园章程","text":"受赠八音盒的屋檐把铜风铃声浪传至邻舍，整片街巷随乐轻摇。"},
	"cloud_gallery":{"era":"modern_eco","name":"云廊和鸣章程","text":"现代高屋可隔9米相接空廊，两端共享较高的烟火品质。"},
	"arcade_market":{"era":"renaissance","name":"连拱市集章程","text":"底层连拱兼作路边茶廊。居民实际穿过连拱，恢复30秒茶叙余韵。"},
	"polyphonic_academy":{"era":"renaissance","name":"复调学院章程","text":"书院送画不受距离限制，仍需路网可达。相邻聚落每两乐句连续问答。"},
	"hydraulic_guild":{"era":"clockwork","name":"水力工匠章程","text":"临水工坊每三炉多做一份邻里赠礼，实物入库后随街坊送达。"},
	"tram_promenade":{"era":"clockwork","name":"轨街漫游章程","text":"总站走廊延至轨旁8米，电车上坡也能轻快前行。"},
	"lasting_resonance":{"era":"modern_eco","name":"长鸣花园章程","text":"水畔住宅也算天然花园，茶叙与演出余韵久久留在岸边。"},
	"craft_federation":{"era":"modern_eco","name":"百工共生章程","text":"琴坊、书院与钟表坊相邻结成百工街，金色合作路标串起三家。"}
}
const PAIRS := [["arcade_market","polyphonic_academy","illuminated_atelier"],["hydraulic_guild","tram_promenade","brass_orchard"],["lasting_resonance","craft_federation","cloud_gallery"]]

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
	if city.era_modifiers.has("hydraulic_guild") and role in ["bakery","workshop"] and city.water_clearance(Vector2(house.origin[0],house.origin[1]))<preload("res://scripts/world/city_creation_tradition_rules.gd").water_radius(city):result*=1.25
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
	if "lantern_bridge_echo" in owned and city.water_clearance(Vector2(house.origin[0],house.origin[1]))<preload("res://scripts/world/city_creation_tradition_rules.gd").water_radius(city):result*=1.15
	if "courtyard_canon_spring" in owned:
		for court:Dictionary in city.courtyard_plans():
			if str(house.id) in court.get("members",[]):result*=1.3;break
	return result*Vignettes.production(city,str(house.id))*Families.production_multiplier(city,house)

static func walking(city:RefCounted,id:String)->float:
	var index:int=city._house_index(id)
	return (Families.walking_multiplier(city,city.houses[index]) if index>=0 else 1.)*Vignettes.walking(city,id)*(1.2 if index>=0 and "stone_step_carillon" in city.harmony_journey.get("traditions",[]) and float(city.houses[index].get("base_y",0.))>=.65 else 1.)
static func afterglow(city:RefCounted)->float:
	return Families.afterglow_multiplier(city)*(1.5 if city.era_modifiers.has("lasting_resonance") else 1.)*(1.25 if "twilight_tea_pavilion" in city.harmony_journey.get("traditions",[]) else 1.)

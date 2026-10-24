extends RefCounted
## Derived architectural traits; authored rooms, old saves and stock stay intact.
const Choice=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Neo=preload("res://scripts/visual/city_creation_neoclassical.gd")
const Civic=preload("res://scripts/world/city_creation_neoclassical_civic_plan.gd")
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
const ECHO_ARCADE=["portico","peristyle","venetian_loggia","iron_conservatory","pavilion","green_lodge"]
const BELVEDERE_TERRACE=["oriel","belvedere_villa","clock_turret","terrace","panorama","chalet"]
const CHAMBER_ATELIER=["townhouse","rotunda","guildhall","sawtooth_atrium","guild_arcade","twin_gable"]
static func family_for(key:String)->String:
	if key in ECHO_ARCADE:return "echo_arcade"
	if key in BELVEDERE_TERRACE:return "belvedere_terrace"
	if key in CHAMBER_ATELIER:return "chamber_atelier"
	return "natural"
static func family_caption(key:String)->String:
	return {"echo_arcade":"廊院回声","belvedere_terrace":"登高揽胜","chamber_atelier":"百工雅集"}.get(family_for(key),"随形共鸣")
static func echo_radius_bonus(key:String)->float:return 1.2 if key in ECHO_ARCADE else 0.
static func octave_dyad_db_bonus(key:String)->float:return 1.2 if key in BELVEDERE_TERRACE else 0.
static func chamber_warmth_db_bonus(key:String)->float:return 1.5 if key in CHAMBER_ATELIER else 0.
static func satisfies_scenic_belvedere(key:String)->bool:return key in BELVEDERE_TERRACE
static func domino_extra_hops(key:String)->int:return 1 if key in CHAMBER_ATELIER else 0
static func prototype(city,house:Dictionary)->String:
	if house.has("signature"):return ""
	var era:String=city.house_era(house);var selected:String=house.get("architecture","")
	if era=="modern_eco":return Choice.ALPINE[preload("res://scripts/world/city_creation_alpine_plan.gd").kind_for(house)]
	if era=="clockwork":return selected if selected in Choice.CLOCKWORK else ""
	if house.get("style","") in ["timber","round_tower"]:return ""
	if era=="renaissance" and selected in Choice.RENAISSANCE:return selected
	if not Civic.guild(city,house).is_empty():return "guildhall"
	if era=="renaissance" and not preload("res://scripts/world/city_creation_renaissance_plan.gd").for_house(city,house).is_empty():return "rotunda"
	if not Civic.terraces(house,Arcade.for_house(city,house)).is_empty():return "peristyle"
	var highest:=0;var corner:=false
	for cell:Dictionary in house.cells:
		if cell.kind!="room":continue
		highest=maxi(highest,int(cell.level))
		if int(cell.level)>0 and not Neo.corner_sides(city,house,cell).is_empty():corner=true
	if selected in ["portico","townhouse"]:return selected
	return "oriel" if corner else "townhouse" if highest>0 else "portico"
static func scenic_needed(city,house:Dictionary)->bool:
	if house.role!="residential" or satisfies_scenic_belvedere(prototype(city,house)):return false
	if not house.cells.any(func(c):return int(c.level)>0) and float(house.get("base_y",0.))<.8:return false
	return Choice.choices(city,house).any(func(key):return satisfies_scenic_belvedere(key))

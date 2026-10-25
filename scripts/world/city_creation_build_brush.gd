extends RefCounted
## Transient authoring choice. Only the resulting house fields enter Schema19.
const Architecture=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Seed=preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd")
static func prototypes(era:String)->Array:
 match era:
  "pastoral":return ["portico","townhouse","rotunda"]
  "renaissance":return ["portico","townhouse","rotunda"]+Architecture.RENAISSANCE
  "clockwork":return Architecture.CLOCKWORK
  "modern_eco":return Architecture.ALPINE
 return []
static func select(city:RefCounted,era:String,prototype:String="")->bool:
 if era not in city.era_unlocks or (not prototype.is_empty() and prototype not in prototypes(era)):return false
 city.set_meta("new_house_brush",{"era":era,"prototype":prototype});return true
static func current(city:RefCounted)->Dictionary:
 return city.get_meta("new_house_brush",{"era":"pastoral","prototype":""})
static func apply(city:RefCounted,house:Dictionary)->void:
 if city.has_meta("new_house_brush"):
  var brush:=current(city)
  if brush.era in city.era_unlocks:house.era_theme=brush.era
  Seed.seed_new(city,house)
  if not str(brush.prototype).is_empty() and brush.prototype in Architecture.choices(city,house):house.architecture=brush.prototype
 else:Seed.seed_new(city,house)
static func align_selected_era(city:RefCounted,house:Dictionary)->void:
 if house.has("architecture") and house.architecture not in Architecture.choices(city,house):house.erase("architecture")

extends RefCounted
## Transient authoring choice. Only the resulting house fields enter Schema19.
const Architecture=preload("res://scripts/world/city_creation_architecture_choice.gd")
const Seed=preload("res://scripts/world/city_creation_renaissance_prototype_plan.gd")
static func prototypes(era:String)->Array:
 match era:
  "pastoral":return ["portico","townhouse","rotunda"]+Architecture.ANCIENT.IDS
  "renaissance":return ["portico","townhouse","rotunda"]+Architecture.RENAISSANCE
  "clockwork":return Architecture.CLOCKWORK
  "modern_eco":return Architecture.ALPINE
 return []
static func select(city:RefCounted,era:String,prototype:String="")->bool:
 if not city.can_build_era(era) or (not prototype.is_empty() and prototype not in prototypes(era)):return false
 var brush:=current(city).duplicate(true);brush.era=era;brush.prototype=prototype
 if not prototype.is_empty() and era in ["pastoral","renaissance"] and brush.get("appearance",{}).get("style","") in ["timber","round_tower"]:brush.appearance.style="classic"
 city.set_meta("new_house_brush",brush);return true
static func current(city:RefCounted)->Dictionary:
 return city.get_meta("new_house_brush",{"era":"pastoral","prototype":""})
static func apply(city:RefCounted,house:Dictionary)->void:
 if city.has_meta("new_house_brush"):
  var brush:=current(city)
  if city.can_build_era(brush.era):house.era_theme=brush.era
  for field:String in brush.get("appearance",{}):house[field]=brush.appearance[field].duplicate(true) if brush.appearance[field] is Dictionary else brush.appearance[field]
  Seed.seed_new(city,house)
  if not str(brush.prototype).is_empty() and brush.prototype in Architecture.choices(city,house):house.architecture=brush.prototype
 else:Seed.seed_new(city,house)
static func align_selected_era(city:RefCounted,house:Dictionary)->void:
 if house.has("architecture") and house.architecture not in Architecture.choices(city,house):house.erase("architecture")
static func sample(city:RefCounted,id:String)->Dictionary:
 var index:int=city._house_index(id)
 if index<0 or city.houses[index].has("signature"):return {"ok":false,"message":"选择一栋普通房屋沿用外观。"}
 var house:Dictionary=city.houses[index];var era:String=city.house_era(house);var prototype:=str(house.get("architecture",""))
 var structural:=prototype not in prototypes(era) and not prototype.is_empty()
 select(city,era,"" if structural else prototype)
 var appearance:Dictionary={"style":house.get("style","classic"),"palette":int(house.get("palette",0))}
 for field:String in ["finish","custom_colors"]:
  if house.has(field):appearance[field]=house[field].duplicate(true) if house[field] is Dictionary else house[field]
 var brush:=current(city);brush.appearance=appearance;brush.source_id=id
 return {"ok":true,"message":"已沿用时代、材质与配色；此原型需加建后选择。" if structural else "已沿用此屋外观，接下来新造的房屋持续使用。"}

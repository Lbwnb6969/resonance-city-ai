extends RefCounted
## Acoustic defaults follow real surroundings; authored overrides stay authoritative.
static func rows(city:RefCounted)->Dictionary:
 var key:=[city.revision,city._wish_epoch]
 var cached:Dictionary=city.get_meta("spatial_voice",{})
 if cached.get("key",[])==key:return cached.rows
 var clusters:Dictionary=city.natural_clusters();var groups:Dictionary={};var result:Dictionary={};var bins:Dictionary={}
 for plant:Dictionary in city.plants:
  if plant.kind not in ["olive","cypress"] or not city.vegetation_visible(plant):continue
  var at:=Vector2(plant.position[0],plant.position[1]);var bin:=Vector2i(floori(at.x/8.),floori(at.y/8.))
  if not bins.has(bin):bins[bin]=[]
  bins[bin].append(at)
 var circles:Array=city.Roundabouts.all(city.roads)
 for house:Dictionary in city.houses:
  var id:=str(house.id);var group:String=clusters[id].id
  if not groups.has(group):groups[group]={"water":false,"social":false,"clock":false,"craft":false,"forest":false}
  var row:Dictionary=groups[group];var at:=Vector2(house.origin[0],house.origin[1]);var bin:=Vector2i(floori(at.x/8.),floori(at.y/8.));var trees:=0
  for dx in range(-1,2):
   for dz in range(-1,2):
    for tree:Vector2 in bins.get(bin+Vector2i(dx,dz),[]):trees+=int(at.distance_squared_to(tree)<=64.)
  row.water=row.water or city.water_clearance(at)<=4.5;row.social=row.social or house.role=="garden_cafe";row.clock=row.clock or house.role=="clockmaker";row.craft=row.craft or house.role=="workshop";row.forest=row.forest or trees>=2
  for circle:Dictionary in circles:
   if at.distance_to(circle.center)<=float(circle.radius)+6.5:row.social=true
 for house:Dictionary in city.houses:
  var id:=str(house.id);var row:Dictionary=groups[clusters[id].id]
  var style:String="market" if row.clock else "deep" if row.water else "market" if row.social else "sylvan" if row.craft and row.forest else "warm"
  result[id]={"style":style,"motion":"allegro" if row.clock or row.social else "largo" if row.water else "andante"}
 city.set_meta("spatial_voice",{"key":key,"rows":result});return result
static func style(city:RefCounted,house:Dictionary)->String:
 if house.has("acoustic_style"):return str(house.acoustic_style)
 var district:Dictionary=city.district_for_house(str(house.id))
 if not city.automatic_neighborhoods or (not district.is_empty() and not district.has("auto_members")):return str(district.get("style","warm"))
 return str(rows(city).get(str(house.id),{}).get("style","warm"))
static func motion(city:RefCounted,house:Dictionary)->String:
 if house.has("temperament"):return str(house.temperament)
 if not city.automatic_neighborhoods:return "andante"
 return str(rows(city).get(str(house.id),{}).get("motion","andante"))
static func authored_signature(city:RefCounted)->int:
 var key:=[city.revision,city._wish_epoch];var cached:Dictionary=city.get_meta("authored_voice_key",{})
 if cached.get("key",[])==key:return int(cached.value)
 var value:=hash([city.automatic_neighborhoods,city.houses.map(func(h):return [h.id,h.get("acoustic_style",""),h.get("era_theme","")])])
 city.set_meta("authored_voice_key",{"key":key,"value":value});return value

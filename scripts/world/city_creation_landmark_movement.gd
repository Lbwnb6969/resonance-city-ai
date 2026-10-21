extends RefCounted
## One 24-second movement uses the existing attendance, reward and audio clocks.
## Six opening phrases pass through formed clusters; the last two unite them.
const ERAS:=["pastoral","renaissance","clockwork","modern_eco"]

static func order(city:RefCounted)->Array[String]:
	var groups:Dictionary=city.natural_clusters();var representatives:Dictionary={}
	for house:Dictionary in city.houses:
		var id:=str(house.id);var group:Dictionary=groups[id]
		if int(group.size)<3:continue
		var key:String=str(group.id)+"/"+city.house_era(house)
		if not representatives.has(key) or id<str(representatives[key]):representatives[key]=id
	var result:Array[String]=[];result.assign(representatives.values())
	result.sort_custom(func(a:String,b:String)->bool:
		var ea:=ERAS.find(city.house_era(city.houses[city._house_index(a)]))
		var eb:=ERAS.find(city.house_era(city.houses[city._house_index(b)]))
		return a<b if ea==eb else ea<eb)
	return result

static func source(sequence:Array,records:Dictionary,venue:String,phrase:int)->Dictionary:
	var finale:=phrase>=6
	var id:=venue if finale else str(sequence[mini(sequence.size()-1,int(phrase*sequence.size()/6))])
	var row:Dictionary=records.get(id,{})
	var era:="tutti" if finale else str(row.get("era_theme","pastoral"))
	return {"source_id":id,"phrase":phrase,"role":"finale" if finale else "cluster_lead","era":era,"finale":finale,
		"timbre":{"pastoral":"wood","renaissance":"strings","clockwork":"horn","modern_eco":"warm_pad","tutti":"orchestra"}[era],
		"start":phrase*3.,"duration":3.,"style":str(row.get("style","warm")),"improvement":int(row.get("improvement",0)),"mix":row.get("mix",{})}

static func validate(city:RefCounted,data:Dictionary)->Dictionary:
	var concert:Dictionary=data.get("journey_checkpoint",{}).get("concert",{})
	if not concert.has("landmark_movement") and not concert.has("movement_order"):return {"ok":true}
	if int(data.schema)<19 or concert.get("landmark_movement")!=true or concert.get("source")!="manual" or concert.get("duration")!=24.:
		return city._fail("地标乐章来源或时间无效")
	var rows:Dictionary={}
	for house:Dictionary in data.houses:rows[house.id]=house
	if rows.get(concert.get("venue_id",""),{}).get("signature","") not in city.Signatures.IDS:return city._fail("传世乐章需要真实地标")
	var sequence:Variant=concert.get("movement_order")
	if not sequence is Array or sequence.is_empty():return city._fail("地标乐章缺少聚落声部")
	var groups:Dictionary=city.NaturalClusters.derive(data.houses,city.NaturalClusters.street_members(data.houses,data.roads));var seen:Dictionary={}
	for id:Variant in sequence:
		if not id is String or not rows.has(id) or seen.has(id) or int(groups[id].size)<3:return city._fail("地标乐章聚落声部无效")
		seen[id]=true
	return {"ok":true}

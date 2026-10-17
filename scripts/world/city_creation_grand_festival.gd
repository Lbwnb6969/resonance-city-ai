extends RefCounted
const ERAS:=["pastoral","renaissance","clockwork","modern_eco"]
const PHRASES:=["pastoral","pastoral","renaissance","renaissance","clockwork","clockwork","modern_eco","tutti"]
static func cast(life:Node3D,venue:String)->Dictionary:
	var result:Dictionary={}
	for house:Dictionary in life.state.houses:
		var id:String=house.id
		if not life.connected_houses.has(id) or life._route(str(life.connected_houses[id]),str(life.connected_houses[venue])).is_empty():continue
		var era:String=life.state.house_era(house)
		if not result.has(era):result[era]=id
	return result
static func snapshot_era(city:RefCounted,house:Dictionary,districts:Array)->String:
	var special:Dictionary={"bell_keep":"pastoral","watermill":"pastoral","music_academy":"renaissance","botanical_palace":"pastoral","clockwork_depot":"clockwork","floating_amphitheater":"modern_eco"}
	if special.has(house.get("signature","")):return special[house.signature]
	if house.has("era_theme"):return house.era_theme
	var at:=Vector2(house.origin[0],house.origin[1])
	for i in range(districts.size()-1,-1,-1):
		if city._water_stroke_distance(at,districts[i].points)<=float(districts[i].width)*.5:return str(districts[i].get("era_theme","pastoral"))
	return "pastoral"
static func validate(city:RefCounted,data:Dictionary)->Dictionary:
	var concert:Dictionary=data.get("journey_checkpoint",{}).get("concert",{})
	if not concert.has("grand_festival") and not concert.has("era_cast"):return {"ok":true}
	if int(data.schema)<city.MODERN_SCHEMA or concert.get("grand_festival")!=true or concert.get("source","manual")!="manual" or concert.get("duration")!=24.:return city._fail("跨时代盛典来源或时间无效")
	var cast_rows:Variant=concert.get("era_cast")
	if not cast_rows is Dictionary or cast_rows.size()!=4 or not data.get("era_unlocks",[]).has("modern_eco"):return city._fail("跨时代盛典缺少四时代编制")
	var houses:Dictionary={}
	for house:Dictionary in data.houses:houses[str(house.id)]=house
	if houses.get(concert.get("venue_id",""),{}).get("role","")!="symphony_hall":return city._fail("盛典需要真实交响音乐厅")
	var used:Dictionary={}
	for era:String in ERAS:
		var id:Variant=cast_rows.get(era)
		if not id is String or not houses.has(id) or used.has(id):return city._fail("盛典声部房屋身份无效")
		used[id]=true
		if snapshot_era(city,houses[id],data.get("districts",[]))!=era:return city._fail("盛典声部房屋时代已改变")
	return {"ok":true}
static func gain(key:String,phrase:int)->float:
	var era:String=PHRASES[clampi(phrase,0,7)]
	if era=="tutti":return {"foundation":-12.,"wood":-17.,"air":-20.,"terrace":-21.,"concert":-12.,"renaissance_fugue":-20.,"clockwork_waltz":-21.,"modern_symphony":-21.}.get(key,-60.)
	if key=="foundation":return -18.
	if era=="pastoral":return {"wood":-10.,"air":-17.,"terrace":-28.}.get(key,-60.)
	if era=="renaissance" and key=="renaissance_fugue":return -18.
	if era=="clockwork" and key=="clockwork_waltz":return -18.
	if era=="modern_eco" and key=="modern_symphony":return -18.
	return -60.

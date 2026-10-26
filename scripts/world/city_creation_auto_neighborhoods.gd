extends RefCounted
## Automatic districts use the existing persistent d identities so era replies,
## links, local services and saved history remain real without painted strokes.
static func refresh(city:RefCounted)->void:
	if not city.automatic_neighborhoods:return
	city.set_meta("spatial_voice",{})
	var previous:Array=[];var manual:Array[Dictionary]=[]
	for district:Dictionary in city.districts:
		if district.has("auto_members"):previous.append(district)
		else:manual.append(district)
	var groups:Dictionary=city.natural_clusters();var seen:Dictionary={};var used:Dictionary={};var records:Array[Dictionary]=[]
	var ids:Array=groups.keys();ids.sort()
	for id:String in ids:
		var group:Dictionary=groups[id]
		if seen.has(group.id) or int(group.size)<3:continue
		seen[group.id]=true
		var chosen:Dictionary={};var overlap:=0
		for old:Dictionary in previous:
			if used.has(old.id):continue
			var matching:=0
			for member:String in group.members:
				if member in old.auto_members:matching+=1
			if matching>overlap:overlap=matching;chosen=old
		var first:Dictionary=city.houses[city._house_index(str(group.members[0]))]
		var district_id:=str(chosen.get("id",""))
		if district_id.is_empty():
			var number:=maxi(city._next_district_id,int(city._high_watermark.district)+1)
			district_id="d%d"%number;city._next_district_id=number+1;city._high_watermark.district=number
		used[district_id]=true
		var points:Array=[]
		for member:String in group.members:points.append(city.houses[city._house_index(member)].origin.duplicate())
		records.append({"id":district_id,"name":str(chosen.get("name","自然街坊 "+district_id.substr(1))),"style":city.house_acoustic_style(first),"era_theme":city.house_era(first),"adaptive":bool(chosen.get("adaptive",false)),"width":4.0,"points":points,"auto_members":group.members.duplicate()})
	city.districts.assign(manual);city.districts.append_array(records)
	for index:int in range(city.musical_links.size()-1,-1,-1):
		var link:Dictionary=city.musical_links[index]
		if city._district_index(str(link.from))<0 or city._district_index(str(link.to))<0:city.musical_links.remove_at(index)

static func validate(city:RefCounted,data:Dictionary)->Dictionary:
	if data.has("automatic_neighborhoods") and (data.schema<19 or data.automatic_neighborhoods!=true):return city._fail("自动街坊版本或开关无效")
	var groups:Dictionary={};var covered:Dictionary={}
	for district:Dictionary in data.get("districts",[]):
		if not district.has("auto_members"):continue
		if data.schema<19 or data.get("automatic_neighborhoods",false)!=true:return city._fail("自动街坊需要新版本")
		if not district.auto_members is Array or district.auto_members.size()<3:return city._fail("自动街坊缺少真实聚落")
		if groups.is_empty():groups=city.NaturalClusters.derive(data.houses,city.NaturalClusters.street_members(data.houses,data.roads))
		var seen:Dictionary={};var expected:Array=[]
		for id:Variant in district.auto_members:
			if not id is String or not groups.has(id) or seen.has(id) or covered.has(id):return city._fail("自动街坊房屋身份无效")
			if expected.is_empty():expected=groups[id].members
			if not id in expected:return city._fail("自动街坊不能跨越不相连聚落")
			seen[id]=true;covered[id]=true
		if seen.size()!=expected.size():return city._fail("自动街坊缺少聚落成员")
	return {"ok":true}

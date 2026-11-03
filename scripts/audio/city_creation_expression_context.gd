extends RefCounted
## Runtime activity and terrain contour are read-only inputs, never service eligibility.
const Arcade=preload("res://scripts/world/city_creation_arcade_plan.gd")
static func architecture(city:RefCounted,house:Dictionary)->bool:
	return not Arcade.for_house(city,house).is_empty()
static func quantile(rows:Array,percent:float)->float:
	var sum:=0.
	for row:Dictionary in rows:
		sum+=float(row.weight)
		if sum>=percent:return float(row.y)
	return float(rows[-1].y) if not rows.is_empty() else 0.
static func contour(records:Dictionary,weights:Dictionary)->Dictionary:
	var rows:Array=[];var ids:Array=[]
	for id:String in weights:
		if float(weights[id])<=0.:continue
		rows.append({"y":records[id].base_y,"weight":weights[id]});ids.append(id)
	rows.sort_custom(func(a,b):return a.y<b.y)
	var span:=quantile(rows,.9)-quantile(rows,.1);ids.sort()
	return {"value":clampf((span-.8)/2.4,0.,1.),"span_m":span,"source_ids":ids}
static func activity(music:Node,weights:Dictionary)->Dictionary:
	var result:={"value":0.,"source_ids":[]};var demo:=music.get_parent()
	var life:Node=demo.get("life")
	if life==null or life.state!=music._pluck_city:return result
	var contributions:Dictionary={}
	for r:Dictionary in life.residents:
		var visit:Dictionary=r.get("cafe_visit",{})
		if visit.get("phase","")!="seated" or not r.node.visible:continue
		if life.view_camera!=null and not life.view_camera.is_position_in_frustum(r.node.global_position+Vector3.UP*.35):continue
		var id:=str(visit.get("cafe_id",""))
		if not weights.has(id):continue
		contributions[id]=true
	for id:String in contributions:
		result.value+=float(weights[id]);result.source_ids.append(id)
	result.source_ids.sort();return result
static func merge_activity(facts:Dictionary,activity:Dictionary)->Dictionary:
	var result:=facts.duplicate(true);result.craft=clampf(float(facts.craft)+.35*float(activity.value),0.,1.)
	for id:String in activity.source_ids:
		if not result.craft_sources.has(id):result.craft_sources.append(id)
	result.craft_sources.sort();result.visible_activity=activity;return result

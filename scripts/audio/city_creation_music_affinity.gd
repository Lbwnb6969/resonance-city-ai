extends RefCounted
## Music reads shape, never district/road eligibility. One budget per house.
var _city:=0
var _revision:=-1
var records:Array=[]
var rebuilds:=0
func refresh(city:RefCounted)->void:
	if _city==city.get_instance_id() and _revision==city.revision:return
	_city=city.get_instance_id();_revision=city.revision;rebuilds+=1;records=[]
	var memberships:Dictionary={};var values:Dictionary={}
	for court:Dictionary in city.courtyard_plans():
		for id:String in court.members:
			if not memberships.has(id):memberships[id]=[]
			if not memberships[id].has(court.id):memberships[id].append(court.id)
			values[id]=1.
	for space:Dictionary in city.functional_zones().spaces:
		var geometry:=str(space.evidence.geometry)
		if geometry not in ["half_enclosure","narrow_lane"]:continue
		var amount:=.65 if geometry=="narrow_lane" else .70
		for id:String in space.members:
			values[id]=maxf(float(values.get(id,0.)),amount)
			if not memberships.has(id):memberships[id]=[]
			for source:String in space.source_ids:
				if not memberships[id].has(source):memberships[id].append(source)
	for house:Dictionary in city.houses:
		var sources:Array=memberships.get(house.id,[]).duplicate();sources.sort()
		records.append({"id":str(house.id),"at":Vector2(house.origin[0],house.origin[1]),"enclosure":float(values.get(house.id,0.)),"sources":sources})
	records.sort_custom(func(a,b):return a.id<b.id)
func sample(focus:Vector2,zoom:float)->Dictionary:
	var weights:Dictionary={};var source_ids:Array=[];var enclosure:=0.
	var radius:=clampf(zoom*.75,12.,28.);var local:Array=[];var total:=0.
	for row:Dictionary in records:
		var q:=1.-smoothstep(.25,1.,focus.distance_to(row.at)/radius);local.append(q);total+=q
	var near:=1.-smoothstep(18.,48.,zoom)
	for i in range(records.size()):
		var row:Dictionary=records[i];var global_weight:=1./records.size()
		var weight:=lerpf(global_weight,local[i]/total,near) if total>0. else global_weight
		weights[row.id]=weight;enclosure+=weight*float(row.enclosure)
		if weight>0. and row.enclosure>0.:
			for id:String in row.sources:
				if not source_ids.has(id):source_ids.append(id)
			if not source_ids.has(row.id):source_ids.append(row.id)
	source_ids.sort()
	return {"enclosure":enclosure,"weights":weights,"source_ids":source_ids,"empty":records.is_empty(),"city":_city,"revision":_revision}

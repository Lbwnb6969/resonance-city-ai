extends RefCounted
## Durable academy instruments are a new destination in the same craft ledger.
static func valid(data:Dictionary,issued:int)->Dictionary:
	var journey:Variant=data.get("harmony_journey",{})
	if not journey is Dictionary or not journey.get("receipts",{}) is Dictionary:return {"ok":false,"instruments":0}
	var receipts:Dictionary=journey.get("receipts",{});var total:=0;var sources:Dictionary={}
	for key:Variant in receipts:
		if not key is String:return {"ok":false,"instruments":0}
		if not key.begins_with("civic_instrument/") and not key.begins_with("debut/"):continue
		var parts:PackedStringArray=key.split("/");var value:Variant=receipts[key]
		if int(data.schema)<19 or parts.size()!=3 or not _id(parts[1],issued) or not _one(value):return {"ok":false,"instruments":0}
		if parts[0]=="debut":
			if parts[2] not in ["bloom","arcade","chime"]:return {"ok":false,"instruments":0}
			if parts[2]!="bloom" and int(data.get("workshop_supply",{}).get(parts[1],{}).get("produced",0))<1:return {"ok":false,"instruments":0}
			continue
		if not _id(parts[2],issued) or parts[1]==parts[2]:return {"ok":false,"instruments":0}
		if int(receipts.get("civic_received/"+parts[1]+"/"+parts[2],0))<1:return {"ok":false,"instruments":0}
		sources[parts[2]]=int(sources.get(parts[2],0))+1;total+=1
	for source:String in sources:
		if int(data.get("workshop_supply",{}).get(source,{}).get("delivered",0))<int(sources[source]):return {"ok":false,"instruments":0}
	return {"ok":true,"instruments":total}
static func _one(value:Variant)->bool:
	return (value is int or value is float) and is_finite(float(value)) and float(value)==1.
static func _id(value:String,issued:int)->bool:
	return value.begins_with("h") and value.substr(1).is_valid_int() and int(value.substr(1))>=1 and int(value.substr(1))<=issued and value=="h"+str(int(value.substr(1)))

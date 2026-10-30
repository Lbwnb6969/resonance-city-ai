extends RefCounted
const IDS:=["five_chords","century_symphony"]
const NAMES:={"five_chords":"五和弦手札","century_symphony":"百屋跨时代交响"}
const MODE_NAMES:={"gong_pentatonic":"宫商河韵 · C宫五声","impressionist_major7":"印象水光 · F大七"}
const MODES:={"gong_pentatonic":"five_chords","impressionist_major7":"century_symphony"}
const FINISHES:={"river_jade":"five_chords","opal":"century_symphony"}
const Growth=preload("res://scripts/world/city_creation_growth.gd")
static func heritage_available(rewards:Array)->bool:
	return rewards.any(func(id):return id in IDS)
static func finish_available(id:String,memories:Array,rewards:Array,free:bool=false)->bool:
	return Growth.FINISHES.has(id) and (free or (FINISHES[id] in rewards if FINISHES.has(id) else id in memories))
static func mode_available(id:String,rewards:Array)->bool:
	return MODES.has(id) and MODES[id] in rewards
static func validate(data:Dictionary)->Dictionary:
	var ids:Variant=data.get("archive_unlocks",[])
	if not ids is Array or ids.size()>2:return {"ok":false,"message":"声学图鉴奖励结构无效"}
	var seen:Array=[]
	for id:Variant in ids:
		if not id is String or id not in IDS or id in seen:return {"ok":false,"message":"声学图鉴奖励身份无效"}
		seen.append(id)
	var mode:Variant=data.get("music_mode","")
	if not mode is String or (mode!="" and not mode_available(mode,ids)):return {"ok":false,"message":"河湾调式尚未获得"}
	if (data.has("archive_unlocks") or data.has("music_mode")) and int(data.schema)<19:return {"ok":false,"message":"声学图鉴需要新存档版本"}
	var gift:Variant=data.get("harmony_journey",{}).get("heritage_credit",0) if data.get("harmony_journey",{}) is Dictionary else 0
	if gift==1 and (not heritage_available(ids) or not data.get("biome_seed") is Dictionary or data.biome_seed.is_empty() or data.harmony_journey.get("receipts",{}).get("heritage/draft",0)!=1):return {"ok":false,"message":"传承手札需要已获得的图鉴与新河湾印记"}
	return {"ok":true}

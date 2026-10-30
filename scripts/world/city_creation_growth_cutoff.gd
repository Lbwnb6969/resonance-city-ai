extends RefCounted
## Persisted boundary, independent of creative policy migration_version.
const SOURCES:=["new_free","migrated_free","converted_legacy"]
const Catalog=preload("res://scripts/world/city_creation_vignette_catalog.gd")
static func record(journey:Dictionary,source:String)->void:
	var quest:Dictionary=journey.get("active_vignette",{})
	var claim:Dictionary={} if quest.is_empty() else {"id":quest.id,"serial":quest.serial,"claimed":false}
	journey.growth_cutoff={"version":1,"source":source,"vignette":claim}
static func integer(value:Variant)->bool:
	return (value is int or value is float) and is_finite(float(value)) and float(value)==floorf(float(value)) and value>=0 and value<=9007199254740991.
static func valid(journey:Dictionary)->bool:
	if not journey.has("growth_cutoff"):return true
	var value:Variant=journey.growth_cutoff
	if not value is Dictionary or value.size()!=3 or not integer(value.get("version")) or value.version!=1 or value.get("source") not in SOURCES:return false
	var claim:Variant=value.get("vignette");var active:Variant=journey.get("active_vignette",{})
	if not claim is Dictionary or not active is Dictionary:return false
	if claim.is_empty():return active.is_empty()
	if value.source=="new_free":return false
	if claim.size()!=3 or not claim.get("claimed") is bool or not integer(claim.get("serial")) or claim.serial<1:return false
	if not Catalog.TEMPLATES.any(func(row):return row.id==claim.get("id")):return false
	if claim.claimed:return active.is_empty() and int(journey.get("completed_vignettes",{}).get(claim.id,0))>0 and claim.serial==int(journey.get("vignette_serial",0))
	return active.get("id")==claim.id and active.get("serial")==claim.serial
static func pending(journey:Dictionary,quest:Dictionary)->bool:
	var claim:Dictionary=journey.get("growth_cutoff",{}).get("vignette",{})
	return not claim.is_empty() and not claim.claimed and quest.get("id")==claim.id and quest.get("serial")==claim.serial

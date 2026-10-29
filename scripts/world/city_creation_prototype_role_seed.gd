extends RefCounted
## A one-time default inside new-house transactions, never a load-time migration.
## Existing/manual roles remain authoritative; spatial neighbourhoods come later.
const ROLES := {
	"sawtooth_atrium":"workshop", "clock_turret":"clockmaker",
	"iron_conservatory":"workshop", "twin_gable":"workshop",
	"rotunda":"atelier", "guildhall":"venue",
	"ionic_stoa":"venue", "roman_basilica":"venue"
}
static func apply(city:RefCounted, house:Dictionary)->void:
	if not city.CreationPolicy.is_free(city) or house.has("signature"):return
	var role:String=ROLES.get(str(house.get("architecture","")), "")
	if not role.is_empty() and city.can_assign_role(role):house.role=role

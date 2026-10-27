extends RefCounted
## The existing choir and spatial pool share one measured headroom budget.
const SCULPT_DUCK_DB := -1.2
const MASTER_LIFT_DB := 20.5
const LONG_PEAK_BUDGET := .56
static func solo(houses: Dictionary, acoustic: RefCounted, targets: Dictionary, sources: Dictionary) -> Dictionary:
	var best := ""; var weight := 0.
	for id: String in acoustic.focus_ids:
		var w: float = acoustic.focus_weight(id)
		if w > weight or (is_equal_approx(w, weight) and (best.is_empty() or id < best)):
			best = id; weight = w
	if best.is_empty(): return {}
	var row: Dictionary = houses[best]
	var era:=str(row.get("era_theme","pastoral"))
	var track: String = {"warm":"wood","deep":"wood_deep","weave":"wood_weave","market":"wood_market","sylvan":"wood_sylvan"}.get(str(row.get("style","warm")),"wood") if era=="pastoral" else {"renaissance":"renaissance_fugue","clockwork":"clockwork_waltz","modern_eco":"modern_symphony"}.get(era,"wood")
	targets[track] = -14.5; targets.foundation = -17.
	sources[track] = best
	return {"lead_track": track, "source_id": best}
static func lift(owner: Node) -> float:
	if str(owner.emergence.score.get("lead_track","")).is_empty() and not owner.acoustic.focus_ids.is_empty():
		owner._daily_phrase=-1;owner.emergence.phrase=-1
		owner._advance_daily_phrase(floori(owner._playback_clock()/3.))
	var bound := 0.
	for key: String in owner._players:
		var db: float = owner.target_gain_db(key, false)
		db+=float(owner.get_meta("solo_duck_db",0.))
		db-=preload("res://scripts/audio/city_creation_long_form.gd").gain(key,owner.emergence.score,owner._playback_clock())
		if db <= -55.: continue
		var peak := .18
		var id: String = owner._variation_active.get(key, "")
		peak = float(owner.audio_report.get("variation_peaks", {}).get(id, owner.audio_report.get("harmony_peaks", {}).get(id, owner.audio_report.get("peaks", {}).get(key, .18))))
		bound += peak * db_to_linear(db) * owner._long_acoustic_weight(key)
	return minf(MASTER_LIFT_DB, linear_to_db(LONG_PEAK_BUDGET / maxf(.000001, bound * 1.65)))
static func allows(owner: Node, category: String) -> bool:
	if owner.muted or owner.concert_active: return false
	return owner.acoustic.zoom <= (42. if category in ["tower_bell", "tram_chime", "quality_upgrade", "district_reply"] else 30.)
static func bakery(owner: Node, kind: String, shop: String, home: String) -> bool:
	owner.record_life_activity(kind, shop)
	return owner.bakery_cues.queue(kind, shop, home) if allows(owner, "bakery_cue") else false

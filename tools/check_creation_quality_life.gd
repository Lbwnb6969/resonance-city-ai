extends SceneTree
const Fixture=preload("res://tools/fixtures/city_creation_quality_fixture.gd")
func _initialize()->void:_run.call_deferred()
func _run()->void:
	var result: Dictionary=Fixture.build(self)
	var facts: Dictionary=result.facts
	var ok: bool=facts.bakery and facts.first_invite and facts.first_concert and facts.tea and facts.culture and facts.before_relay_tier==4 and facts.relay_invite and facts.relay and facts.final_tier==5 and facts.save_valid and facts.checkpoint
	print("QUALITY_LIFE ",JSON.stringify({"ok":ok,"facts":facts}))
	result.life.free();quit(0 if ok else 1)

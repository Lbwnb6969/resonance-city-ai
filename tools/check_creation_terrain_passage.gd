extends "res://tools/check_creation_passage.gd"
## Reuse real mouse/physics arch coverage with the current staged edit contract.
## Write this run separately so the original proof images remain intact.
func _initialize() -> void:
	output = "res://验证记录/河谷地貌_2026-10-16/passage"
	_run.call_deferred()

func _wait_latest() -> void:
	var until := Time.get_ticks_msec()+20000
	while demo.edit_pending() and Time.get_ticks_msec()<until: await process_frame
	_check(not demo.edit_pending(),"latest staged terrain and architecture edit publishes")
	await physics_frame
	await physics_frame

func _button(at: Vector3, pressed: bool, shift := false) -> void:
	await super._button(at,pressed,shift)
	await _wait_latest()

func _key(code: int, ctrl := false, shift := false) -> void:
	await super._key(code,ctrl,shift)
	await _wait_latest()

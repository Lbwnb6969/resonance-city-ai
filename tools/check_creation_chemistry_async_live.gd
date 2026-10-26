extends SceneTree
func _initialize()->void:run.call_deferred()
func run()->void:
 await preload("res://tools/fixtures/city_creation_chemistry_live_probe.gd").run(self,true,"res://验证记录/RF08/async_shapes")

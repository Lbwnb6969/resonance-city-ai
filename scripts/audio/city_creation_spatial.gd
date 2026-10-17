extends RefCounted
## Main-thread stereo routing for the existing players, without new voices.
const PAN_RADIUS := 14.0
const PAN_LIMIT := 0.65
const SMOOTH_RATE := 4.0
var _focus := Vector2.ZERO
var _right := Vector2.RIGHT
var _theme: AudioEffectPanner
var _concert: AudioEffectPanner
var _effect_panners: Dictionary = {}
var _effect_sources: Dictionary = {}
var _effect_players: Dictionary = {}
var _names: Array[StringName] = []
var _routes: Array[Dictionary] = []
var _filters: Dictionary={}
var _concert_filter: AudioEffectLowPassFilter

func setup(owner: Node, theme_players: Array, concert_player: AudioStreamPlayer, effects: Array) -> void:
	close()
	var prefix := "RCSpatial_%d_%d_" % [owner.get_instance_id(),get_instance_id()]
	# The five theme players share the same original output in Music. Their
	# common panner keeps the adaptive arrangement's relative gains intact.
	var theme_bus := _make_bus(prefix+"Theme",theme_players[0].bus)
	_theme=theme_bus.effect
	for player: AudioStreamPlayer in theme_players: _route(player,theme_bus.name)
	var concert_bus := _make_bus(prefix+"Concert",concert_player.bus)
	_concert=concert_bus.effect
	_concert_filter=concert_bus.filter
	_route(concert_player,concert_bus.name)
	for index in range(effects.size()):
		var player: AudioStreamPlayer = effects[index]
		var short_bus := _make_bus(prefix+"Short%d" % index,player.bus)
		_effect_panners[player.get_instance_id()]=short_bus.effect
		_effect_sources[player.get_instance_id()]=Vector2.INF
		_effect_players[player.get_instance_id()]=player
		_filters[player.get_instance_id()]={"filter":short_bus.filter,"bus":short_bus.name}
		_route(player,short_bus.name)

func _make_bus(bus_name: String, send_to: StringName) -> Dictionary:
	AudioServer.add_bus()
	var index := AudioServer.bus_count-1
	AudioServer.set_bus_name(index,bus_name)
	AudioServer.set_bus_send(index,send_to)
	var effect := AudioEffectPanner.new()
	effect.pan=0.0
	AudioServer.add_bus_effect(index,effect)
	var filter:=AudioEffectLowPassFilter.new();filter.cutoff_hz=1800.0
	AudioServer.add_bus_effect(index,filter);AudioServer.set_bus_effect_enabled(index,1,false)
	var name_value := StringName(bus_name)
	_names.append(name_value)
	return {"name":name_value,"effect":effect,"filter":filter}

func _route(player: AudioStreamPlayer, to_bus: StringName) -> void:
	_routes.append({"player":player,"original":player.bus,"spatial":to_bus})
	player.bus=to_bus

func set_listener(at: Vector2, right: Vector2) -> void:
	_focus=at
	_right=right.normalized()

func map_pan(at: Vector2) -> float:
	if at==Vector2.INF: return 0.0
	return clampf((at-_focus).dot(_right)/PAN_RADIUS,-PAN_LIMIT,PAN_LIMIT)

func update(delta: float, theme_at: Vector2, concert_at: Vector2) -> void:
	var blend := 1.0-exp(-delta*SMOOTH_RATE)
	if _theme!=null: _theme.pan=lerpf(_theme.pan,map_pan(theme_at),blend)
	if _concert!=null: _concert.pan=lerpf(_concert.pan,map_pan(concert_at),blend)
	for id: int in _effect_players:
		var player: AudioStreamPlayer=_effect_players[id]
		if player.playing:
			var panner: AudioEffectPanner=_effect_panners[id]
			panner.pan=lerpf(panner.pan,map_pan(_effect_sources[id]),blend)

func place_effect(effect: AudioStreamPlayer, at: Vector2 = Vector2.INF,remote: bool=false) -> void:
	var panner: AudioEffectPanner = _effect_panners.get(effect.get_instance_id())
	if panner!=null:
		_effect_sources[effect.get_instance_id()]=at
		panner.pan=map_pan(at)
	if _filters.has(effect.get_instance_id()):
		var index:=AudioServer.get_bus_index(_filters[effect.get_instance_id()].bus)
		if index>=0: AudioServer.set_bus_effect_enabled(index,1,remote)

func set_concert_remote(remote: bool)->void:
	if _names.size()<2: return
	var index:=AudioServer.get_bus_index(_names[1])
	if index>=0: AudioServer.set_bus_effect_enabled(index,1,remote)

func set_theme_remote(remote:bool)->void:
	if _names.is_empty():return
	var index:=AudioServer.get_bus_index(_names[0])
	if index>=0:AudioServer.set_bus_effect_enabled(index,1,remote)

func report() -> Dictionary:
	var short_pans: Array[float] = []
	for panner: AudioEffectPanner in _effect_panners.values(): short_pans.append(panner.pan)
	return {"bus_count":_names.size(),"theme_pan":_theme.pan if _theme!=null else 0.0,
		"concert_pan":_concert.pan if _concert!=null else 0.0,"effect_pans":short_pans,
		"focus":_focus,"right":_right,"bus_names":_names.duplicate(),"radius":PAN_RADIUS,"limit":PAN_LIMIT,"smooth_rate":SMOOTH_RATE}

func close() -> void:
	for route: Dictionary in _routes:
		var player: AudioStreamPlayer = route.player
		# Another owner may have rerouted a still-live player since setup.
		# Restore only the routing this helper still owns.
		if is_instance_valid(player) and player.bus==route.spatial: player.bus=route.original
	_routes.clear()
	for index in range(_names.size()-1,-1,-1):
		var bus_index := AudioServer.get_bus_index(_names[index])
		if bus_index>=0: AudioServer.remove_bus(bus_index)
	_names.clear()
	_effect_panners.clear()
	_effect_sources.clear()
	_effect_players.clear()
	_filters.clear();_concert_filter=null
	_theme=null
	_concert=null

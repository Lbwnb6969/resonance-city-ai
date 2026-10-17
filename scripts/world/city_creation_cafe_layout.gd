extends RefCounted
## Main-thread compatibility facade. Each CPU worker creates its own instance
## context, so a background edit never mutates the live tea-route caches.
const Context = preload("res://scripts/world/city_creation_cafe_layout_context.gd")
const Frontage = preload("res://scripts/world/city_creation_frontage.gd")
const SEAT_RADIUS := 0.90
const TABLE_RADIUS := 0.43
const CHAIR_RADIUS := 0.29
const GUEST_RADIUS := 0.14
static var _default = Context.new()
# Preserve the existing cache inspection/clear contract.
static var _cache: Dictionary = _default._cache
static var _contexts: Dictionary = _default._contexts

static func create_context() -> RefCounted:
	return Context.new()

static func _context(city) -> Dictionary:
	return _default._context(city)

static func layout(city, id: String) -> Dictionary:
	return _default.layout(city,id)

static func clear(city, at: Vector2, radius: float) -> bool:
	return _default.clear(city,at,radius)

static func _clear(city, context: Dictionary, at: Vector2, radius: float) -> bool:
	return _default._clear(city,context,at,radius)

static func route(city, id: String, from: Vector2, to: Vector2) -> Array[Vector2]:
	return _default.route(city,id,from,to)

static func route_with_plan(city, id: String, plan: Dictionary, from: Vector2, to: Vector2) -> Array[Vector2]:
	return _default.route_with_plan(city,id,plan,from,to)

static func _other_plans(city, id: String) -> Array:
	return _default._other_plans(city,id)

static func _house(city, id: String) -> Dictionary:
	return _default._house(city,id)

static func _route(city, house: Dictionary, plan: Dictionary, from: Vector2, to: Vector2, other_plans: Array=[], context: Dictionary={}) -> Array[Vector2]:
	return _default._route(city,house,plan,from,to,other_plans,context)

static func _leg(city, plan: Dictionary, a: Vector2, b: Vector2, from: Vector2, to: Vector2, obstacles: Array, other_plans: Array) -> bool:
	return _default._leg(city,plan,a,b,from,to,obstacles,other_plans)

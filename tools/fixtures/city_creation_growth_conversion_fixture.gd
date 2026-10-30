extends RefCounted
const State=preload("res://scripts/world/city_creation_state.gd")
const Receipts=preload("res://scripts/world/city_creation_harmony_receipts.gd")
const Journey=preload("res://scripts/world/city_creation_harmony_journey.gd")
static func legacy_pending()->RefCounted:
	var city:=State.new();city.initialize_empty();Receipts.initialize(city)
	for i in range(50):assert(city.add_house(Vector2(-35+(i%10)*3.,-35+(i/10)*3.)).ok)
	assert(Receipts.collect(city).earned==100)
	assert(city.add_house(Vector2(-35,-14)).ok)
	assert(city.add_house(Vector2(-32,-14)).ok)
	return city

extends RefCounted
## Fixtures and water-edge decks install after the road's structural surface.
static func install(r,parent:Node3D,road:Dictionary,data:Dictionary)->void:
	r.promenade.install(r,parent,data.promenade)
	preload("res://scripts/visual/city_creation_water_ghat.gd").install(r,parent,road)
	r.era_streets.install(r,parent,data.get("era_streets",{"notes":[],"water":[],"gateways":[]}))
	r.Bridges.install(r,parent,data.get("bridges",{"faces":[]}),road)

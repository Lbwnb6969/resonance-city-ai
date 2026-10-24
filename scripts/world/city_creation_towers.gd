extends RefCounted
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
## A derived crown never changes the authored room, role or house identity.
## Global occupancy follows the same Townscaper-derived context principle as
## joined roofs; the three-storey rule and crown clearance are this game's.
const UNIT := 1.8
const CLEARANCE := UNIT+0.35
const EPS := 0.002
const BIN_SIZE := CLEARANCE+EPS
const FLOOR := 1.7
const RoundTower = preload("res://scripts/world/city_creation_round_tower_plan.gd")

static func derive(houses: Array, roads: Array = []) -> Dictionary:
	var bins: Dictionary = {}
	var supports: Dictionary = {}
	var result: Dictionary = {}
	for house: Dictionary in houses:
		var occupied: Dictionary = {}
		result[str(house.id)] = []
		for cell: Dictionary in house.cells:
			occupied[Vector3i(int(cell.x),int(cell.level),int(cell.z))] = cell
			var at := Frame.center(house,cell)
			var key := Vector2i(floori(at.x/BIN_SIZE),floori(at.y/BIN_SIZE))
			if not bins.has(key): bins[key] = []
			bins[key].append({"house_id":str(house.id),"cell_id":str(cell.id),"at":at,"bottom":float(house.get("base_y",0.0))+int(cell.level)*FLOOR})
		supports[str(house.id)] = occupied
	for house: Dictionary in houses:
		# A sealed lookout has no visible bell. Ineligible styled houses keep
		# the ordinary architecture's existing three-storey bell rule.
		if not RoundTower.for_house(house,houses,roads).is_empty(): continue
		var occupied: Dictionary = supports[str(house.id)]
		for cell: Dictionary in house.cells:
			var level := int(cell.level)
			if str(cell.kind)!="room" or level<2: continue
			var supported := true
			for lower in range(level):
				var below: Dictionary = occupied.get(Vector3i(int(cell.x),lower,int(cell.z)),{})
				if below.is_empty() or str(below.kind)!="room":
					supported = false
					break
			if not supported: continue
			var at := Frame.center(house,cell)
			var bin := Vector2i(floori(at.x/BIN_SIZE),floori(at.y/BIN_SIZE))
			var clear := true
			# Full and partial face contacts, terraces, diagonal neighbors and
			# roof-only micro-gaps all need crown clearance. No axis alignment
			# assumption: free placement must invalidate the same eligibility.
			var bottom := float(house.get("base_y",0.0))+level*FLOOR
			for x in range(-1,2):
				for z in range(-1,2):
					for other: Dictionary in bins.get(bin+Vector2i(x,z),[]):
						if other.house_id==str(house.id) and other.cell_id==str(cell.id): continue
						if float(other.bottom)+FLOOR<=bottom+EPS or float(other.bottom)>=bottom+2.0*FLOOR-EPS: continue
						var delta: Vector2 = (other.at-at).abs()
						if delta.x<=CLEARANCE+EPS and delta.y<=CLEARANCE+EPS: clear=false
			if clear: result[str(house.id)].append(cell)
		result[str(house.id)].sort_custom(func(a,b): return str(a.id).naturalnocasecmp_to(str(b.id))<0)
	return result

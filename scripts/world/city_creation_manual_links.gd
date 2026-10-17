extends RefCounted
## Authored musical intent only. A cross-river duet creates no walking route,
## component or resident journey. Membership follows the current painted zones.

static func derive(city: RefCounted) -> Array[Dictionary]:
	var districts := {}
	var houses := {}
	for district: Dictionary in city.districts:
		districts[str(district.id)] = district
	for house: Dictionary in city.houses:
		houses[str(house.id)] = house
	var members := {}
	var result: Array[Dictionary] = []
	for link: Dictionary in city.musical_links:
		var from_district: String = link.from
		var to_district: String = link.to
		for district_id: String in [from_district, to_district]:
			if members.has(district_id): continue
			var rows: Array[String] = city.district_members(district_id)
			rows.sort_custom(func(a: String, b: String) -> bool: return int(a.substr(1)) < int(b.substr(1)))
			members[district_id] = rows
		var from_members: Array[String] = members[from_district]
		var to_members: Array[String] = members[to_district]
		if from_members.is_empty() or to_members.is_empty(): continue
		var from_house: Dictionary = houses[from_members[0]]
		var to_house: Dictionary = houses[to_members[0]]
		var from_position := Vector2(float(from_house.origin[0]), float(from_house.origin[1]))
		var to_position := Vector2(float(to_house.origin[0]), float(to_house.origin[1]))
		result.append({"id":"manual_" + from_district + "_" + to_district, "manual":true,
			"from_id":from_members[0], "to_id":to_members[0],
			"from_district":from_district, "to_district":to_district,
			"from_style":str(districts[from_district].style), "to_style":str(districts[to_district].style),
			"from_position":from_position, "to_position":to_position,
			"distance":from_position.distance_to(to_position),
			"from_members":from_members.duplicate(), "to_members":to_members.duplicate()})
	result.sort_custom(func(a: Dictionary, b: Dictionary) -> bool:
		if a.from_district != b.from_district: return int(str(a.from_district).substr(1)) < int(str(b.from_district).substr(1))
		return int(str(a.to_district).substr(1)) < int(str(b.to_district).substr(1)))
	return result

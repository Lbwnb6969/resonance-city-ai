extends RefCounted
## Pure role-to-timbre arrangement. Weights are linear amplitudes, never dB.
const STYLES := ["warm","deep","weave","market","sylvan"]
const ROLE_STYLES := {"residential":"warm","venue":"deep","workshop":"weave","bakery":"market","garden_cafe":"sylvan","atelier":"deep","clockmaker":"weave","symphony_hall":"deep"}

static func compose(houses: Array,base_style: String,adaptive: bool) -> Dictionary:
	var result := {"adaptive":adaptive,"base_style":base_style,"weights":{base_style:1.0},
		"roles":{},"scores":{},"secondary":"","secondary_weight":0.0}
	for role: String in ROLE_STYLES: result.roles[role] = 0
	for style: String in STYLES: result.scores[style] = 0.0
	if not adaptive or houses.is_empty(): return result
	var total := 0.0
	for house: Dictionary in houses:
		var role := str(house.get("role","residential"))
		var style: String = ROLE_STYLES[role]
		var rooms := 0
		for cell: Dictionary in house.cells:
			if str(cell.kind)=="room": rooms += 1
		var score := 1.0+0.2*clampi(rooms-1,0,4)
		if (role=="bakery" and not bool(house.get("bakery_open",true))) or (role=="workshop" and not bool(house.get("workshop_open",true))): score *= 0.35
		result.roles[role] += 1
		result.scores[style] += score
		total += score
	var secondary := ""
	var best := 0.0
	# Strict comparison makes the declared style order resolve every tie.
	for style: String in STYLES:
		var score: float = result.scores[style]
		if style!=base_style and score>best:
			secondary = style
			best = score
	if not secondary.is_empty():
		var weight := minf(0.45,best/total)
		result.secondary = secondary
		result.secondary_weight = weight
		result.weights[base_style] = 1.0-weight
		result.weights[secondary] = weight
	return result

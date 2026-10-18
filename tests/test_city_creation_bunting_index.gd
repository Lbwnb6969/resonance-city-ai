extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const Bunting=preload("res://scripts/visual/city_creation_bunting.gd")
class RoofView:
	extends Node3D
	const PALETTES=Renderer.PALETTES
	const FINISH_PALETTES=Renderer.FINISH_PALETTES
	var state: RefCounted
	var building_context=preload("res://scripts/visual/city_creation_building_context.gd").new()
	func _neighbor_cell(house: Dictionary,cell: Dictionary,side: Vector2i)->Dictionary:
		var row: Dictionary=building_context.neighbor(house,cell,side)
		return row.cell if not row.is_empty() else {}
const MIN_SPAN=Bunting.MIN_SPAN
const MAX_SPAN=Bunting.MAX_SPAN
const SAG_RATIO=Bunting.SAG_RATIO
var failures: Array[String]=[]
var checks:=0
func _initialize()->void:_run.call_deferred()
func check(ok: bool,label: String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func original_pairs(state,anchors: Array[Dictionary])->Array[Dictionary]:
	var pairs: Array[Dictionary] = []
	var used_anchors: Dictionary = {}
	for i in range(anchors.size()):
		if used_anchors.has(i):
			continue
		var a: Dictionary = anchors[i]
		var best_j := -1
		var best_dist := INF
		for j in range(i + 1, anchors.size()):
			if used_anchors.has(j):
				continue
			var b: Dictionary = anchors[j]
			if str(a.house_id) == str(b.house_id):
				continue
			if not (bool(a.festive) or bool(b.festive)):
				continue
			if absf(float(a.pos.y) - float(b.pos.y)) > 1.25:
				continue
			var delta_xz := Vector2(b.pos.x - a.pos.x, b.pos.z - a.pos.z)
			var dist := delta_xz.length()
			if dist < MIN_SPAN or dist > MAX_SPAN:
				continue
			var dir := delta_xz / dist
			# Exact Townscaper PropWireAnchor directional thresholds (758e50.c)
			if dir.dot(a.normal) < 0.30 or (-dir).dot(b.normal) < 0.30:
				continue
			if (-Vector2(b.normal)).dot(a.normal) < 0.50:
				continue
			if dist < best_dist and original_span_clear(state, a.pos, b.pos):
				best_dist = dist
				best_j = j
		if best_j >= 0:
			used_anchors[i] = true
			used_anchors[best_j] = true
			pairs.append({"a": a, "b": anchors[best_j], "length": best_dist})
			if pairs.size() >= 24:
				break

	return pairs
func original_span_clear(state, a: Vector3, b: Vector3) -> bool:
	var sag := a.distance_to(b) * SAG_RATIO
	for i in range(1, 16):
		var t := float(i) / 16.0
		var p := a.lerp(b, t) - Vector3.UP * (4.0 * sag * t * (1.0-t) + 0.22)
		if p.y < state.ground_height(Vector2(p.x,p.z)) + 1.9: return false
		for house: Dictionary in state.houses:
			for cell: Dictionary in house.cells:
				if str(cell.kind) != "room": continue
				var x := float(house.origin[0]) + float(cell.x)*1.8
				var z := float(house.origin[1]) + float(cell.z)*1.8
				var bottom := float(house.get("base_y",0.0)) + float(cell.level)*1.7
				if absf(p.x-x)<0.91 and absf(p.z-z)<0.91 and p.y>bottom-0.1 and p.y<bottom+2.35: return false
	return true

func _run()->void:
	var renderer:=RoofView.new();var samples: Array=[]
	for name: String in ["seed","flagship","flagship_empty_rewards"]:
		var city:=State.new()
		if name=="seed":city.initialize()
		else:
			check(city.restore(JSON.parse_string(FileAccess.get_file_as_string("res://数据/四库共鸣交响大城样例.json"))).ok,"flagship restores for "+name)
			if name.ends_with("empty_rewards"):city.house_improvements.clear();city.cafe_credits.clear();city.matinee_credits.clear();city.resonance_afterglow.clear()
		renderer.state=city;renderer.building_context.prepare(city.houses,city.roads);city.prepare_ground_height()
		var anchors:=Bunting._anchors(renderer)
		var started:=Time.get_ticks_usec();var expected:=original_pairs(city,anchors);var old_us:=Time.get_ticks_usec()-started
		started=Time.get_ticks_usec();var actual:=Bunting._pairs(city,anchors);var new_us:=Time.get_ticks_usec()-started
		check(expected==actual,"exact original greedy anchors, strict ties, clearance and pair order: "+name)
		samples.append({"name":name,"anchors":anchors.size(),"wires":actual.size(),"original_us":old_us,"indexed_us":new_us})
		var rooms:=Bunting._room_bins(city);var ok:=true;var count:=0
		for house: Dictionary in city.houses.slice(0,24):
			for cell: Dictionary in house.cells:
				if str(cell.kind)!="room":continue
				var x:=float(house.origin[0])+float(cell.x)*1.8;var z:=float(house.origin[1])+float(cell.z)*1.8
				var y:=float(house.get("base_y",0.))+float(cell.level)*1.7
				for offset: float in [-.910001,-.91,-.909999,0.,.909999,.91,.910001]:
					for dy: float in [-.100001,-.1,-.099999,1.,2.349999,2.35,2.350001]:
						var p:=Vector3(x+offset,y+dy,z+offset);var before:=false;var after:=false
						for other: Dictionary in city.houses:
							for room: Dictionary in other.cells:
								if str(room.kind)!="room":continue
								var cx:=float(other.origin[0])+float(room.x)*1.8;var cz:=float(other.origin[1])+float(room.z)*1.8
								var bottom:=float(other.get("base_y",0.))+float(room.level)*1.7
								if absf(p.x-cx)<.91 and absf(p.z-cz)<.91 and p.y>bottom-.1 and p.y<bottom+2.35:before=true
						for row: PackedFloat64Array in rooms.get(Vector2i(floori(p.x/2.),floori(p.z/2.)),[]):
							if absf(p.x-row[0])<.91 and absf(p.z-row[2])<.91 and p.y>row[1]-.1 and p.y<row[1]+2.35:after=true
						ok=ok and before==after;count+=1
		check(ok,"all strict room bounds, highland base and upper floors match original cell scan: "+name)
		samples[-1].room_queries=count
	renderer.free();print("BUNTING_INDEX ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"samples":samples,"failures":failures}));quit(0 if failures.is_empty() else 1)

extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Paving=preload("res://scripts/world/city_creation_road_paving.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	for style:String in Paving.UI_STYLES:
		for width:float in State.RoadUpgrade.sizes_for(style):
			var city:=State.new();city.initialize_empty()
			var points:Array[Vector2]=[Vector2(-30,-20),Vector2(-25,-19),Vector2(-18,-20)]
			var preview:Dictionary=city.preview_road(points,style,"none",width)
			var result:Dictionary=city.add_road(points,style,"none",width)
			check(preview.ok and result.ok and city.roads[0].width==width,"real width "+str([style,width]))
			check(preview.points==points and city.roads[0].points==[[-30.,-20.],[-25.,-19.],[-18.,-20.]],"curve preview preserves committed centerline")
			var original:Dictionary=city.snapshot();var cold:=State.new()
			check(original.schema==19 and cold.restore(JSON.parse_string(JSON.stringify(original))).ok and cold.roads==city.roads,"sized surface cold JSON exact")
			check(city.undo().ok and city.roads.is_empty() and city.redo().ok and city.roads==cold.roads,"width/surface one Undo transaction")
			var upgraded:Dictionary=city.add_road(points,"fanstone","none",4.8)
			check(upgraded.ok and city.roads.size()==1 and city.roads[0].id==original.roads[0].id and city.roads[0].points==original.roads[0].points,"replacement retains actual road identity and curve")
			if upgraded.no_op:check(city.roads==original.roads,"identical retrace is a real no-op")
			else:check(city.undo().ok and city.roads==original.roads,"replacement Undo exact")
			check(not city.add_road(points,style,"none",8.).ok,"unsupported width rejected")
	for style:String in Paving.NEW_STYLES:
		var city:=State.new();city.initialize_empty();var points:Array[Vector2]=[Vector2(-30,-20),Vector2(-18,-20)]
		check(city.add_road(points,style,"none").ok,"default new paving")
		var world:Dictionary=city.snapshot();var cold:=State.new()
		check(world.schema==19 and cold.restore(world).ok,"new surface auto declares Schema19")
		world.schema=18;check(not cold.restore(world).ok,"new paving cannot disguise as an old schema")
	check(Paving.code({})==0. and Paving.code({"style":"cobble"})==.25 and Paving.code({"style":"gravel"})==1.,"legacy fallback and distinct material codes")
	var wide:=State.new();wide.initialize_empty();var line:Array[Vector2]=[Vector2(-30,-20),Vector2(-18,-20)]
	check(wide.add_road(line,"brick","none",4.8).ok and wide.road_at(Vector2(-24,-17.61))==wide.roads[0].id and wide.road_at(Vector2(-24,-17.3)).is_empty(),"actual picking uses broad physical footprint")
	print("ROAD_PAVING ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

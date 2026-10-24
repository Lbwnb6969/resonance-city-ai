extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=State.new();city.initialize_empty();var made:Dictionary=city.add_house(Vector2(-25,-17));check(made.ok,"public create")
	var id:String=made.house_id;check(city.add_cell(id,1,0,0).ok,"asymmetric actual authored two-room footprint")
	var initial:Dictionary=city.houses[0].duplicate(true);var history:int=city._undo.size()
	for i in range(1,5):check(city.rotate_house(id,i*PI*.5).ok,"quarter turn "+str(i))
	check(city._undo.size()==history+4 and city.houses[0]==initial,"four quarters preserve exact authored data and no yaw0 field")
	check(city.rotate_house(id,deg_to_rad(33.)).ok,"arbitrary yaw transaction")
	var h:Dictionary=city.houses[0];var expected:=Vector2(-25,-17)+Vector2(1.8,0).rotated(-deg_to_rad(33.))
	check(Frame.center(h,h.cells[1]).distance_to(expected)<.00001,"actual rotated second cell center")
	check(Frame.inverse(h,Frame.center(h,h.cells[1])).distance_to(Vector2(-23.2,-17))<.00001,"inverse interaction frame")
	var previous:Dictionary=city.snapshot();check(city.undo().ok and not city.houses[0].has("yaw") and city.redo().ok and city.houses==previous.houses,"undo redo angle and cell IDs")
	var snapshot:Dictionary=city.snapshot();var reader:=State.new()
	check(snapshot.schema==19 and reader.restore(JSON.parse_string(JSON.stringify(snapshot,"",true,true))).ok and reader.snapshot()==snapshot,"angle cold JSON roundtrip Schema19")
	for value in [INF,NAN]:check(not city.rotate_house(id,value).ok and city.snapshot()==snapshot,"nonfinite angle rejected atomically")
	for value in ["33",INF,PI,-PI-.1]:
		var corrupt:=snapshot.duplicate(true);corrupt.houses[0].yaw=value;check(not reader.restore(corrupt).ok,"malformed saved yaw rejected "+str(value))
	var a:Dictionary=initial.duplicate(true);a.cells=[a.cells[0]];a.origin=[0.,0.];a.yaw=PI*.25
	var b:Dictionary=initial.duplicate(true);b.cells=[b.cells[0]];b.origin=[2.1,2.1]
	check(Frame.bounds(Frame.footprint(a,a.cells[0])).intersects(Frame.bounds(Frame.footprint(b,b.cells[0]))) and not Frame.overlaps(a,b),"SAT rejects AABB false positive in free angle empty corner")
	b.origin=[1.5,.2];check(Frame.overlaps(a,b),"SAT detects true slanted wall overlap")
	var box:Variant=Frame.footprint(h,h.cells[1]);check(Frame.contains(box,expected) and not Frame.contains(box,Vector2(-23.2,-17)+Vector2(.85,.85)),"oriented footprint follows actual center")
	var entry:Dictionary=city.house_entrances(id).filter(func(e):return e.cell_id==h.cells[0].id)[0]
	var normal:=Frame.normal(entry);check(normal.distance_to(Vector2.DOWN.rotated(-Frame.yaw(h)))<.000001,"outward door vector rotates while local side identity stays")
	var points:Array[Vector2]=[entry.wall_at+normal*.10,entry.wall_at+normal*4.]
	var road:Dictionary=city.add_road(points)
	check(road.ok,"public diagonal street attaches to actual rotated door: "+str(road))
	check(city.house_entrances(id).any(func(e):return e.active and e.cell_id==entry.cell_id and e.side==entry.side),"rotated door active after real road")
	var after:Dictionary=city.snapshot();check(reader.restore(JSON.parse_string(JSON.stringify(after,"",true,true))).ok,"rotated door road save validation")
	var blocker:Dictionary=city.add_house(Vector2(-27,-20));check(blocker.ok,"nearby real blocker")
	var before:Dictionary=city.snapshot();var failed:=false
	for angle in [PI*.5,PI,PI*1.5]:
		if not State.Rotation.candidate(city,id,angle).ok:failed=true;break
	check(failed,"at least one actual rotated room conflicts with fixed neighbor")
	check(city.snapshot()==before,"preview validation has no history or save mutation")

	var ring:=State.new();ring.initialize_empty();var ring_id:String=ring.add_house(Vector2(-25,-6)).house_id
	for cell:Vector2i in [Vector2i(1,0),Vector2i(2,0),Vector2i(3,0),Vector2i(3,1),Vector2i(3,2),Vector2i(3,3),Vector2i(2,3),Vector2i(1,3),Vector2i(0,3),Vector2i(0,2),Vector2i(0,1)]:check(ring.add_cell(ring_id,cell.x,cell.y,0).ok,"real ring module")
	var courts:Array=ring.courtyard_plans();check(courts.size()==1 and courts[0].tiles.size()==4,"real4tile empty courtyard before rotation")
	var old_center:Vector2=courts[0].center;check(ring.rotate_house(ring_id,.43).ok,"arbitrary full courtyard rotation")
	var ring_house:Dictionary=ring.houses[0];courts=ring.courtyard_plans()
	check(courts.size()==1 and courts[0].tiles.size()==4 and Vector2(courts[0].center).distance_to(Frame.point(ring_house,old_center))<.00001,"courtyard topology and paving follow whole house frame")
	var clear_tiles:=true
	for tile:Variant in courts[0].tiles:
		for cell:Dictionary in ring_house.cells:
			if Frame.boxes_overlap(Frame.grow(tile,-.003),Frame.footprint(ring_house,cell)):clear_tiles=false
	check(clear_tiles,"oriented court never paves through actual walls")
	var cafe:=State.new();cafe.initialize_empty();var cafe_id:String=cafe.add_house(Vector2(-25,-17)).house_id
	check(cafe.set_house_role(cafe_id,"garden_cafe").ok and cafe.rotate_house(cafe_id,.37).ok,"real oblique tea house")
	var layout:Dictionary=preload("res://scripts/world/city_creation_cafe_layout.gd").layout(cafe,cafe_id)
	check(not layout.is_empty(),"oblique actual cafe retains table/chair plan")
	var seats_clear:=not layout.is_empty()
	for at:Vector2 in layout.get("seats",[]):
		if Frame.distance(Frame.footprint(cafe.houses[0],cafe.houses[0].cells[0]),at)<.29:seats_clear=false
	check(seats_clear,"seats clear exact rotated footprint")

	var plaza:=State.new();plaza.initialize_empty()
	check(plaza.add_road([Vector2(-20,-17),Vector2(-10,-17)] as Array[Vector2]).ok and plaza.add_road([Vector2(-15,-22),Vector2(-15,-12)] as Array[Vector2]).ok,"actual crossing for cold-save regression")
	check(plaza.add_roundabout(Vector2(-15,-17)).ok,"actual roundabout")
	var long_id:String=plaza.add_house(Vector2(-25,-17)).house_id
	check(plaza.rotate_house(long_id,PI*.5).ok,"turn long house away from plaza")
	for x in range(1,6):check(plaza.add_cell(long_id,x,0,0).ok,"actual rotated extension avoids plaza "+str(x))
	check(State.new().restore(plaza.snapshot()).ok,"public valid rotated long house cold-restores beside roundabout")
	print("HOUSE_ROTATION ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)


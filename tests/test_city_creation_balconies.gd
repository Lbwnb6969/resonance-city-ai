extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Plan=preload("res://scripts/world/city_creation_balcony_plan.gd")
const Shell=preload("res://scripts/visual/city_creation_balcony_shell.gd")
const Visit=preload("res://scripts/world/city_creation_balcony_visits.gd")
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func run()->void:
	var city:=State.new();city.initialize_empty();city.add_house(Vector2(-25,-12));city.houses[0].style="timber"
	check(not Plan.set_mode(city,"h1",1).ok,"single floor cannot grow a floating upper facade")
	check(city.add_cell("h1",0,0,1).ok,"real supported upper room")
	city.add_road([Vector2(-28,-9),Vector2(-22,-9)])
	city.add_road([Vector2(-25,-11),Vector2(-25,-9)])
	var baseline:=city.houses[0].duplicate(true)
	for mode in range(1,5):
		var undo_count:int=city._undo.size();var result:=Plan.set_mode(city,"h1",mode)
		check(result.ok and city._undo.size()==undo_count+1,"one transaction for facade "+str(mode))
		var data:=Plan.plan(city,city.houses[0]);check(not data.is_empty() and data.mode==mode and data.side==Vector2i.DOWN,"actual upper host and connected lower entrance "+str(mode))
		check(city.houses[0].cells==baseline.cells and city.houses[0].role==baseline.role,"facade preserves identities and role")
		var saved:=city.snapshot();var read:=State.new();var loaded:=read.restore(JSON.parse_string(JSON.stringify(saved,"",true,true)))
		check(saved.schema==19 and loaded.ok and read.houses==city.houses,"full precision Schema19 JSON cold read")
		check(city.undo().ok and city.redo().ok and city.houses==saved.houses,"undo and redo keep actual facade and stable side")
		if mode>=3:
			var route:=Plan.route(city.houses[0],data,Vector3(-25,.1,-10.48));var raised:=0;var max_step:=0.
			for i in range(1,route.size()):max_step=maxf(max_step,absf(route[i].y-route[i-1].y));raised+=int(route[i].y>1.)
			check(raised>=9 and max_step<.16 and is_equal_approx(route[-1].y,1.95),"continuous two flight stair route reaches actual deck")
			var local:=Plan.Frame.design3(city.houses[0],route[-1]);var poly:=Plan.outline(data)
			check(Geometry2D.is_point_in_polygon(Vector2(local.x+25.,local.z+12.),poly),"listener stands on the authored slab")
	var saved:=city.snapshot();var reader:=State.new();reader.restore(saved)
	var upper_id:=str(city.houses[0].organic_cell_id)
	check(city.remove_cell("h1",upper_id).ok and not city.houses[0].has("balcony_arc"),"removing the actual upper host prunes its facade in the same transaction")
	check(city.undo().ok and city.houses==saved.houses,"undo upper removal restores the exact facade host")
	var neighbour:=State.new();neighbour.initialize_empty();neighbour.add_house(Vector2(-25,-9.7));neighbour.houses[0].id="h2";neighbour.add_cell("h2",0,0,1)
	check(Plan.conflict(city,city.houses[0],neighbour.houses[0]),"270degree projection reserves its real upper volume against a neighbour")
	neighbour.remove_cell("h2",str(neighbour.houses[0].cells[-1].id))
	check(Plan.conflict(city,city.houses[0],neighbour.houses[0]),"even a low neighbour's actual pitched roof and eave reserve the projection")
	var probe:=city.houses[0].duplicate(true);probe.erase("balcony_arc");probe.erase("organic_cell_id");probe.erase("organic_facade")
	check(not Plan.conflict(city,probe,neighbour.houses[0]),"default unextended host leaves that same volume free")
	var own:=State.new();own.initialize_empty();own.add_house(Vector2(-25,-12));own.houses[0].style="timber";own.add_cell("h1",0,0,1);own.add_cell("h1",1,0,0);own.add_cell("h1",1,1,0);own.add_cell("h1",1,1,1)
	check(Plan.set_mode(own,"h1",4).ok,"corner facade finds a clear actual side among own rooms")
	var own_plan:=Plan.plan(own,own.houses[0]);var own_poly:=Plan.polygon(own.houses[0],own_plan);var diagonal:=Plan.cell_at(own.houses[0],1,1,1)
	check(Geometry2D.intersect_polygons(own_poly,Plan.Frame.corners(Plan.Frame.footprint(own.houses[0],diagonal))).is_empty(),"chosen270degree slab avoids the same host's diagonal upper room")
	for field:String in ["organic_facade","organic_cell_id"]:
		var invalid:=saved.duplicate(true);invalid.houses[0][field]=-1 if field=="organic_facade" else "missing"
		check(not reader.restore(invalid).ok and reader.houses==saved.houses,"invalid stable facade identity rejected atomically")
	var old:=saved.duplicate(true);old.schema=18;check(not reader.restore(old).ok,"new facade requires optional Schema19")
	for field:String in ["overhang","balcony_arc"]:
		for bad:Variant in [-1,3,"1",true,1.5]:
			var invalid:=saved.duplicate(true);invalid.houses[0][field]=bad
			check(not reader.restore(invalid).ok and reader.houses==saved.houses,"invalid gene rejected atomically "+field+str(bad))
	check(Plan.set_mode(city,"h1",0).ok and not city.houses[0].has("overhang") and not city.houses[0].has("balcony_arc") and city.houses[0].cells==baseline.cells,"return to original shell without default fields")
	print("BALCONIES ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

extends SceneTree
const Popover=preload("res://scripts/ui/city_creation_spatial_popover.gd")
const Book=preload("res://scripts/ui/city_creation_paper_scroll.gd")
class Host extends Node3D:
	const TownRenderer=preload("res://scripts/visual/city_creation_renderer.gd")
	var state=preload("res://scripts/world/city_creation_state.gd").new()
	var camera:Camera3D
	var preview_key:=""
	var journal:RefCounted
	var signatures:RefCounted
	var ledger:RefCounted
	var tool:=0
class Presenter extends RefCounted:
	var calls:=0
	func refresh()->void:calls+=1
var failures:Array[String]=[]
var checks:=0
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func run()->void:
	var host:=Host.new();root.add_child(host)
	host.camera=Camera3D.new();host.add_child(host.camera);host.camera.projection=Camera3D.PROJECTION_ORTHOGONAL
	host.journal=Presenter.new();host.signatures=Presenter.new();host.ledger=Presenter.new()
	var canvas:=Control.new();root.add_child(canvas);canvas.set_anchors_and_offsets_preset(Control.PRESET_FULL_RECT)
	var pop:=Popover.new();pop.setup(host,canvas)
	var house:={"id":"selected","origin":[0.,0.],"cells":[{"x":0,"z":0,"level":0},{"x":0,"z":0,"level":3}]}
	var neighbor:Dictionary={"id":"neighbor","origin":[0.,4.],"cells":[{"x":0,"z":0,"level":0}]}
	host.state.houses.assign([house,neighbor]);var metrics:Array=[]
	for size:Vector2i in [Vector2i(1440,900),Vector2i(1024,768)]:
		root.size=size;await process_frame;await process_frame
		for yaw:float in [0.,.62,1.5]:
			host.camera.position=Vector3(sin(yaw)*32.,30.,cos(yaw)*32.);host.camera.look_at(Vector3(0.,3.,0.))
			host.camera.size=28.;pop.ring.follow(pop,house);await process_frame
			var actual:Rect2=pop.ring.house_rect;var empty:Rect2=pop.ring.hole;empty.position+=pop.card.global_position
			check(empty.encloses(actual),"the hollow contains projected ground through fourth-storey roof "+str(size)+"/"+str(yaw))
			var overlap:=false;var enclosed:=true
			for item:Control in pop.ring.controls():
				overlap=overlap or item.get_global_rect().intersects(actual)
				enclosed=enclosed and Rect2(Vector2.ZERO,Vector2(size)).encloses(item.get_global_rect())
			check(not overlap and enclosed,"all interactive wings and seals remain around the model and within the viewport")
			check(not pop.ring.bottom.get_global_rect().intersects(pop.ring.project(pop,neighbor)),"status capsule clears the adjacent house")
			metrics.append({"size":size,"yaw":yaw,"house":actual,"hole":empty,"card":pop.card.get_global_rect()})
		for origin:Vector2 in [Vector2(-9,0),Vector2(9,0)]:
			house.origin=[origin.x,origin.y];host.camera.size=36.;pop.ring.follow(pop,house);await process_frame
			check(pop.ring.placement_ok and pop.ring.controls().all(func(item:Control)->bool:return not item.get_global_rect().intersects(pop.ring.house_rect)),"edge selection keeps islands off actual projected building "+str(origin))
		house.origin=[0.,0.]
	var book=Book.obtain(host,canvas);check(Book.obtain(host,canvas)==book,"three pages share exactly one sheet")
	for id:String in ["journal","landmarks","ledger"]:
		book.attach(Control.new(),id);book.show_page(id);await process_frame
		check(book.current==id and book.pages.values().filter(func(page):return page.visible).size()==1,"switch exposes one page: "+id)
	await create_timer(.3).timeout
	check(book.size.x==310. and book.position.x==0.,"real tween settles at left with fixed 310px width")
	var inside:=InputEventMouseButton.new();inside.position=Vector2(80,160)
	var outside:=InputEventMouseButton.new();outside.position=Vector2(700,350)
	check(book.blocks_world(inside) and not book.blocks_world(outside),"only the paper footprint consumes world pointer input")
	book.close_page("journal");check(book.visible,"old journal link callback cannot close a newly selected other tab")
	book.close_all();check(not book.visible and not book.blocks_world(inside),"closing releases the entire city")
	FileAccess.open("res://验证记录/M08_cpu_geometry.json",FileAccess.WRITE).store_string(JSON.stringify({"checks":checks,"failures":failures,"metrics":metrics},"\t"))
	print("SPATIAL_SCROLL_CPU ",checks-failures.size(),"/",checks," ",failures)
	host.free();canvas.free();await process_frame;quit(0 if failures.is_empty() else 1)

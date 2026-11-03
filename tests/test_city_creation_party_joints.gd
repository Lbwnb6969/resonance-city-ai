extends SceneTree
const Context=preload("res://scripts/visual/city_creation_building_context.gd")
const Joints=preload("res://scripts/visual/city_creation_party_joints.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Fixture=preload("res://tools/fixtures/city_creation_layered_window_fixture.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
var checks:=0
var failures:Array=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func house(id:String,origin:Vector2,base:float=0.,yaw:float=0.,levels:int=1)->Dictionary:
	var cells:Array=[]
	for level in range(levels):cells.append({"id":id+"_"+str(level),"x":0,"z":0,"level":level,"kind":"room"})
	return {"id":id,"origin":[origin.x,origin.y],"base_y":base,"yaw":yaw,"cells":cells,"style":"classic","architecture":"recessed_townhouse","era_theme":"pastoral","seed":7}
func run()->void:
	var out:=""
	for arg:String in OS.get_cmdline_user_args():
		if arg.begins_with("--out-dir="):out=arg.trim_prefix("--out-dir=")
	if not OS.get_cmdline_user_args().has("--isolated-session") or not out.begins_with("res://验证记录/") or DirAccess.dir_exists_absolute(out):quit(1);return
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path(out))
	var a:=house("a",Vector2(0,0),0.,0.,1);var b:=house("b",Vector2(1.8,0),.2,0.,2)
	var context:=Context.new();context.prepare([a,b],[]);var plans:Array=context.party_joints.a
	check(not plans.is_empty(),"aligned neighboring houses derive a party seam")
	check(context.party_joints==Joints.derive([b,a]),"authored array order cannot duplicate or reassign seams")
	check(context.party_joints.b.is_empty(),"one stable owner publishes each physical seam")
	var original_signature:Variant=context.signature("a");var far:=house("far",Vector2(30,30));context.prepare([a,b,far],[]);check(context.signature("a")==original_signature,"remote unrelated house preserves local seam dependency")
	b.base_y=.4;context.prepare([a,b],[]);check(context.signature("a")!=original_signature,"neighbor base change invalidates actual seam dependency");b.base_y=.2
	b.origin=[5.,0.];check(Joints.derive([a,b]).a.is_empty(),"separated walls cannot bridge an authored alley");b.origin=[1.8,0.]
	if not plans.is_empty():
		var plan:Dictionary=plans[0];check(plan.kind=="party_wall_pier","parallel seam uses party wall pier");check(float(plan.high)-float(plan.low)>.5,"mixed floor counts retain the shared vertical overlap")
		check(not plan.has("schema") and not plan.has("save") and not plan.has("seed"),"derived seam has no authored persistence fields")
	var short_a:Dictionary={"house_id":"a","cell_id":"a_0","a":Vector2(0,0),"b":Vector2(1.8,0),"normal":Vector2(0,1),"low":0.,"high":1.7,"era":"pastoral"}
	var short_b:Dictionary=short_a.duplicate(true);short_b.house_id="b";short_b.a=Vector2(1.8,0);short_b.b=Vector2(0,0);short_b.normal=Vector2(0,-1);short_b.low=.25;short_b.high=1.2
	check(not Joints.pair(short_a,short_b).is_empty(),"same wall with half-meter vertical overlap remains valid")
	short_b.high=.2;check(Joints.pair(short_a,short_b).is_empty(),"insufficient vertical overlap rejects a floating pier")
	short_b.high=1.2;short_b.normal=Vector2(0,-1).rotated(.3);check(Joints.pair(short_a,short_b).any(func(row):return row.kind=="wedge_hinge_joint"),"17 degree seam derives a wedge hinge joint")
	short_b.normal=Vector2(0,-1).rotated(deg_to_rad(28.));check(Joints.pair(short_a,short_b).is_empty(),"28 degree authored fold remains outside the new wedge limit")
	var rotated:=house("rot",Vector2(3.6,0),0.,.4,1);var at:=Vector2(4.2,.3);var local:=Frame.inverse(rotated,at);check(Frame.point(rotated,local).distance_to(at)<.0001,"hinge/yaw seam conversion round trips in design space")
	for degrees:float in [-28.,-22.5,-17.,17.,22.5,28.]:
		var folded:=house("fold",Vector2.ZERO,0.,.4,2)
		for level:int in [0,1]:folded.cells.append({"id":"wing"+str(level),"x":1,"z":0,"level":level,"kind":"room"})
		folded.bend_angle_deg=degrees;var rows:=Joints.hinge(folded)
		check((not rows.is_empty())== (absf(degrees)<=22.5),"actual authored hinge seam threshold "+str(degrees))
	var fixture:=Fixture.build("pastoral",0.,true,1, false);var city:RefCounted=fixture.city;var add:Dictionary=city.add_house_stroke(Vector2(-26.2,-20),[{"x":0,"z":0,"level":0,"kind":"room"}]);check(add.ok,"public neighboring construction creates a second authored house")
	if add.ok:
		var r:=Renderer.new();root.add_child(r);r.state=city;r.buildings=Node3D.new();r.add_child(r.buildings)
		for n in [r.shore,r.lilypads,r.wildlife]:r.add_child(n)
		r.building_context.prepare(city.houses,city.roads);var before:Dictionary=city.snapshot();var made:=r._house(city.houses[0]);var packet:Dictionary=made.get_meta("party_joints",{});check(not packet.get("active",[]).is_empty() and city.snapshot()==before,"actual renderer publishes active seams without author mutation");check(city.snapshot().schema<31,"derived seam leaves schema unchanged")
		if not packet.get("active",[]).is_empty():
			var plan:Dictionary=packet.active[0];var center:Vector2=plan.center;city.roads.clear();city.roads.append({"id":"probe","width":1.4,"points":[[center.x-2.,center.y],[center.x+2.,center.y]]})
			check(not preload("res://scripts/visual/city_creation_party_joint_details.gd").clear(city,plan),"full-width road capsule suppresses a column rather than blocking the route")
		made.free();r.free()
	var report:={"ok":failures.is_empty(),"checks":checks,"failures":failures};FileAccess.open(out+"/report.json",FileAccess.WRITE).store_string(JSON.stringify(report,"\t"));print("PARTY_JOINTS_CPU ",JSON.stringify(report));quit(0 if report.ok else 1)

extends SceneTree
const State=preload("res://scripts/world/city_creation_state.gd")
const Frame=preload("res://scripts/world/city_creation_house_frame.gd")
const Actions=preload("res://scripts/world/city_creation_hinge_actions.gd")
const Hug=preload("res://scripts/world/city_creation_curve_hug.gd")
const Form=preload("res://scripts/world/city_creation_organic_form.gd")
const MeshCut=preload("res://scripts/visual/city_creation_hinge_mesh.gd")
const Mask=preload("res://scripts/visual/city_creation_grass_mask.gd")
class PreviewRenderer extends RefCounted:
	var state:RefCounted
var checks:=0
var failures:Array=[]
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func _initialize()->void:run.call_deferred()
func curve()->Array[Vector2]:
	var points:Array[Vector2]=[]
	for i in range(61):var x:float=-30.+i*.25;points.append(Vector2(x,-18.+.05*pow(x+24.,2.)))
	return points
func home(city,at:Vector2=Vector2(-25,-14.3))->String:
	var result:Dictionary=city.add_house(at);check(result.ok,"real authored household");return str(result.get("house_id",""))
func run()->void:
	var city:=State.new();city.initialize_empty();check(city.add_road(curve(),"promenade","none").ok,"actual polyline curved road")
	var id:=home(city);var original:=city.snapshot();check(city.add_cell(id,1,0,0).ok,"extend real room beside curved street")
	var house:Dictionary=city.houses[0];var sample:=Hug.sample(city,house);print("CURVE_HUG_SAMPLE ",sample)
	check(not sample.is_empty() and absf(float(sample.get("angle",0.)))>=8.,"both endpoints sample different real tangents on one curved road")
	check(house.has("bend_angle_deg") and house.get("corner_bevel",0)==2,"same placement transaction adopts actual curve bend and rounded corners")
	check(city.undo().ok and city.houses[0].cells==original.houses[0].cells and not city.houses[0].has("bend_angle_deg"),"one undo removes extension and derived bend together")
	check(city.redo().ok and city.houses[0].has("bend_angle_deg"),"one redo restores extension plus bend")
	house=city.houses[0]
	var saved:=city.snapshot();var reader:=State.new();var loaded:Dictionary=reader.restore(JSON.parse_string(JSON.stringify(saved,"",true,true)));print("HINGE_COLD ",loaded);check(saved.schema==19 and loaded.ok and reader.houses==city.houses,"optional float angle JSON cold read")
	DirAccess.make_dir_recursive_absolute(ProjectSettings.globalize_path("res://验证记录/M63/cpu"))
	var disk_path:="res://验证记录/M63/cpu/bent_city.json";var disk:=State.new()
	check(city.save_city(disk_path).ok and disk.load_city(disk_path).ok and disk.houses==city.houses,"real isolated disk save and full-precision cold load preserve the exact angle")
	var reversed:=State.new();reversed.initialize_empty();var path:=curve();path.reverse();reversed.add_road(path,"promenade","none");var reverse_id:=home(reversed);reversed.add_cell(reverse_id,1,0,0)
	check(is_equal_approx(float(reversed.houses[0].get("bend_angle_deg",0.)),float(house.get("bend_angle_deg",0.))),"road point order cannot flip curve hugging")
	var manual:=State.new();manual.initialize_empty();manual.add_road(curve(),"promenade","none");var manual_id:=home(manual);check(Form.set_corner(manual,manual_id,0).ok,"player explicitly chooses straight wall")
	check(manual.add_cell(manual_id,1,0,0).ok and not manual.houses[0].has("bend_angle_deg"),"later extension respects player chosen straight form")
	var before:=city.houses[0].duplicate(true);check(city.add_road([Vector2(-33,-23),Vector2(-28,-23)]).ok and city.houses[0]==before,"editing unrelated roads never rewrites an existing bend")
	for value:Variant in [-29.,29.,"15",true,INF]:
		var bad:=saved.duplicate(true);bad.houses[0].bend_angle_deg=value
		check(not reader.restore(bad).ok and reader.houses==saved.houses,"invalid bend rejected atomically: "+str(value))
	var bad:=saved.duplicate(true);bad.schema=18;check(not reader.restore(bad).ok,"angle needs optional Schema19")
	bad=saved.duplicate(true);bad.houses[0].organic_manual=1;check(not reader.restore(bad).ok,"manual opt-out must be a real boolean")
	bad=saved.duplicate(true);bad.houses[0].bend_axis=4;check(not reader.restore(bad).ok,"invalid authored hinge axis is rejected")
	var left:=State.new();left.initialize_empty();var left_id:=home(left,Vector2(-25,-10));left.add_cell(left_id,-1,0,0);check(Actions.set_angle(left,left_id,24.).ok,"authored negative wing")
	var left_cell:Dictionary=left.houses[0].cells[-1];var left_center:=Frame.center(left.houses[0],left_cell)
	check(left.add_cell(left_id,1,0,0).ok and left.houses[0].bend_axis==1 and Frame.center(left.houses[0],left_cell).distance_to(left_center)<.00001,"opposite-side extension cannot silently switch the player's hinge axis")
	check(Actions.set_angle(left,left_id,0.).ok and Actions.set_angle(left,left_id,5.).ok and left.houses[0].bend_axis==1,"fine adjustment through zero preserves the original hinge side")
	var bent:=State.new();bent.initialize_empty();var bid:=home(bent,Vector2(-25,-12))
	check(bent.add_cell(bid,1,0,0).ok and bent.add_cell(bid,2,0,0).ok and bent.add_cell(bid,3,0,0).ok,"four real cells retain original owner")
	var baseline:=bent.snapshot()
	for degrees:float in [-28.,-15.,15.,28.]:
		check(Actions.set_angle(bent,bid,degrees).ok,"legal authored hinge "+str(degrees))
		var h:Dictionary=bent.houses[0];var wing:Dictionary=h.cells[-1];var center:=Frame.center(h,wing);var design:=Vector2(h.origin[0],h.origin[1])+Vector2(wing.x,wing.z)*1.8
		check(center.distance_to(design)>.8 and Frame.cell_inverse(h,wing,center).distance_to(design)<.00001,"actual wing footprint and per-cell inverse agree")
		check(Frame.boxes_overlap(Frame.footprint(h,wing),Rect2(center-Vector2.ONE*.8,Vector2.ONE*1.6)),"true turned far wing blocks another house")
		var plan:=Frame.Hinge.layout(h);plan.angle=deg_to_rad(degrees)
		var across:=Vector2(-plan.axis.y,plan.axis.x)*signf(degrees);var edge:Vector2=Vector2(plan.pivot)+across*.85;var rotated:=Frame.Hinge.rotate(h,edge);var gap:Vector2=(Vector2(plan.pivot)+edge+rotated)/3.
		check(Frame.contains(Frame.footprint(h,h.cells[0]),gap),"joint footprint includes the filled triangular gap")
		var mask:=Mask.new();var field:Vector3=mask._rect_edge(gap,Frame.footprint(h,h.cells[0]));check(field.is_finite() and field.z<0. and Vector2(field.x,field.y).length()>.9,"grass signed edge sampling follows the actual filled polygon")
		check(bent.Passage.segment_blocked(h,h.cells[0],gap-Vector2.ONE*.01,gap+Vector2.ONE*.01,[]),"real route blocker includes the sealed joint")
		var normal:=Frame.direction(h,Vector2.DOWN,wing);var wall_at:=center+normal*.9
		var points:Array=[[wall_at.x+normal.x*.02,wall_at.y+normal.y*.02],[wall_at.x+normal.x*2.,wall_at.y+normal.y*2.]]
		check(not bent.Frontage.terminal(h,wing,points,true).is_empty() and not bent.Frontage.road_cell_conflict(h,wing,points,1.1),"rotated terminal can legally meet the actual wing door")
		check(bent.Frontage.road_cell_conflict(h,wing,[[center.x-3.,center.y],[center.x+3.,center.y]],1.1),"bent wings do not invent an archway through solid rooms")
	var authored:=bent.snapshot();check(bent.undo().ok and bent.redo().ok and bent.houses==authored.houses,"manual hinge undo redo retains all cells and float angle")
	check(Actions.corner(bent,bid,0,"直墙").ok and not bent.houses[0].has("bend_angle_deg"),"return to exact unbent room positions")
	check(bent.houses[0].cells==baseline.houses[0].cells and bent.houses[0].organic_manual,"manual choice persists without changing room identities")
	var box:=BoxMesh.new();box.size=Vector3(3.6,1.7,1.8);var plan:={"axis":Vector2.RIGHT,"pivot":Vector2(.9,0),"angle":deg_to_rad(25.)};var transform:=Transform3D(Basis.IDENTITY,Vector3(.9,.85,0))
	var mesh:=MeshCut.build(box,transform,plan,false);var faces:=mesh.get_faces();var hits:=0
	for t:float in [.2,.4,.6,.8]:
		var edge:=Vector3(.9,0,.9*t);var moved:=MeshCut.moved(edge,plan);var at:=(edge+moved)*.5;var a:=transform.affine_inverse()*Vector3(at.x,3.,at.z);var b:=transform.affine_inverse()*Vector3(at.x,-1.,at.z)
		for i in range(0,faces.size(),3):
			if Geometry3D.segment_intersects_triangle(a,b,faces[i],faces[i+1],faces[i+2])!=null:hits+=1;break
	check(hits==4 and faces.size()>box.get_faces().size(),"actual seam fan triangles seal the roof across the full opening")
	var normals:PackedVector3Array=mesh.surface_get_arrays(0)[Mesh.ARRAY_NORMAL];check(Array(normals).all(func(n:Vector3):return n.is_finite() and absf(n.length()-1.)<.0001),"rigid and wedge mesh normals remain finite unit vectors")
	var preview_city:=State.new();preview_city.initialize_empty();preview_city.era_unlocks.assign(["pastoral","renaissance"]);preview_city.growth_memories.assign(["dawn"])
	preload("res://scripts/world/city_creation_build_brush.gd").select(preview_city,"renaissance","townhouse")
	var renderer:=PreviewRenderer.new();renderer.state=preview_city;var preview:=Node3D.new();var revision:int=preview_city.revision
	preload("res://scripts/visual/city_creation_hinge_preview.gd").apply(renderer,preview,{"origin":[-25.,-12.],"base_y":0.},[{"id":"preview","x":0,"z":0,"level":0,"kind":"room"}])
	var proposed:Dictionary=preview.get_meta("hinge_preview").house
	check(proposed.cells.size()==1 and proposed.era_theme=="renaissance" and proposed.architecture=="townhouse","fresh Renaissance hinge preview populates the real room before seeding its architecture")
	check(preview_city.houses.is_empty() and preview_city.revision==revision,"hovering the authoring brush never writes a real house or journal transaction")
	preview.free()
	print("HINGED_WING ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures}));quit(0 if failures.is_empty() else 1)

extends SceneTree
const Batcher=preload("res://scripts/visual/city_creation_mesh_batcher.gd")
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
const Renderer=preload("res://scripts/visual/city_creation_renderer.gd")
const State=preload("res://scripts/world/city_creation_state.gd")
var checks:=0
var failures:Array[String]=[]
func _initialize()->void:run.call_deferred()
func check(ok:bool,label:String)->void:
	checks+=1
	if not ok:failures.append(label);push_error(label)
func fixture()->Node3D:
	var parent:=Node3D.new();root.add_child(parent);parent.visible=false
	parent.transform=Transform3D(Basis.from_euler(Vector3(.05,.4,0)),Vector3(3,2,-4))
	parent.set_meta("palette_colors",[Color("e9dfc8")]);parent.set_meta("creation_wall_base_y",1.2);parent.set_meta("creation_wall_story_height",1.7)
	var solid:=StandardMaterial3D.new();solid.albedo_color=Color("d2b88e");solid.set_meta("creation_solid",true)
	for i in range(36):
		var frame:=Node3D.new();frame.position=Vector3(i%6,0,i/6);parent.add_child(frame)
		var node:=MeshInstance3D.new();var box:=BoxMesh.new();box.size=Vector3(.21,.30,.17);node.mesh=box
		node.material_override=Wall.source(Color("e9dfc8")) if i%3==0 else solid
		node.transform=Transform3D(Basis.from_euler(Vector3(.1*i,.2,0)),Vector3(.1*i,.4,0));node.layers=2 if i%4==0 else 1
		node.visibility_range_end=30. if i%5==0 else 0.;node.extra_cull_margin=.1+i*.01;frame.add_child(node)
	var pivot:=Node3D.new();pivot.name="ResonanceVisualPivot";parent.add_child(pivot)
	var live:=MeshInstance3D.new();live.name="LiveWindow";live.mesh=BoxMesh.new();live.material_override=solid;pivot.add_child(live)
	var skipped:=MeshInstance3D.new();skipped.name="InvisiblePiece";skipped.mesh=BoxMesh.new();skipped.material_override=solid;skipped.visible=false;parent.add_child(skipped)
	return parent
func signature(parent:Node3D)->Array:
	var result:Array=[]
	for node:MeshInstance3D in parent.find_children("*","MeshInstance3D",true,false):
		var material:Material=node.material_override;var appearance:Array=[]
		if material is StandardMaterial3D:appearance=[material.albedo_color,material.roughness,material.vertex_color_use_as_albedo,material.cull_mode]
		elif material is ShaderMaterial:
			appearance=[material.shader.code]
			for row:Dictionary in material.shader.get_shader_uniform_list():appearance.append([row.name,material.get_shader_parameter(row.name)])
		var geometry:Array=[]
		for i in range(node.mesh.get_surface_count()):geometry.append(node.mesh.surface_get_arrays(i))
		result.append([parent.global_transform.affine_inverse()*node.global_transform,geometry,appearance,node.layers,node.cast_shadow,node.gi_mode,node.ignore_occlusion_culling,node.visibility_range_end,node.extra_cull_margin,node.visible])
	return result
func cancellation()->void:
	var city:=State.new();city.initialize();var house:Dictionary=city.houses[0];var id:=str(house.id)
	for level in range(4):
		for x in range(2):
			var present:=false
			for cell:Dictionary in city.houses[0].cells:
				if int(cell.x)==x and int(cell.z)==0 and int(cell.level)==level:present=true
			if not present:assert(city.add_cell(id,x,0,level).ok)
	var town:=Renderer.new();root.add_child(town);town.setup(city)
	var original:Node3D=town.house_roots[id];var original_id:=original.get_instance_id()
	var far:RefCounted=town.meadow.query_masks[Vector2i(4,4)]
	check(city.add_cell(id,0,0,4).ok,"actual multi-cell city edit creates a new generation")
	town.request_budget_rebuild();var deadline:=Time.get_ticks_msec()+15000;var partial:=false
	while Time.get_ticks_msec()<deadline:
		town.poll_budget_rebuild(3.5,false)
		var staging:Node3D=town.budget_rebuild.staging
		if staging!=null and not staging.mesh_batcher.pending_merges.is_empty():partial=true;break
		await process_frame
	check(partial and town.house_roots[id].get_instance_id()==original_id,"actual unfinished staging merge retains the original published house")
	check(town.budget_rebuild.staging.meadow.query_masks[Vector2i(4,4)]==far,"private worker map reuses the immutable unchanged far grass index")
	var staged:WeakRef=weakref(town.budget_rebuild.staging)
	town.cancel_budget_rebuild()
	check(staged.get_ref()==null and town.budget_rebuild.staging==null and town.house_roots[id].get_instance_id()==original_id,"cancel destroys the incomplete merge generation without replacing the visible house")
	check(city.undo().ok and city.redo().ok,"normal construction undo and redo remain available after cancellation")
	town.request_budget_rebuild();deadline=Time.get_ticks_msec()+15000;var finished:=false
	while Time.get_ticks_msec()<deadline:
		var progress:Dictionary=town.poll_budget_rebuild(3.5,true)
		if not progress.pending:finished=true;break
		await process_frame
	check(finished and town.house_roots[id].get_instance_id()!=original_id and int(town.house_roots[id].get_meta("material_batching").steps)>1,"the replacement generation completes its own full incremental mesh and publishes after cancellation")
	check(town.meadow.query_masks[Vector2i(4,4)]==far and town.meadow.query_masks.size()==100,"atomic publication preserves reusable grass indices across the full canvas")
	var before_mask:RefCounted=town.meadow.query_masks[Vector2i(-2,1)]
	var at:=Vector2(-12,12)
	var stroke:Array[Vector2]=[Vector2(-15,12),Vector2(-8,12)]
	check(before_mask.visible(at,.2) and city.add_road(stroke).ok,"real dry ground is plantable before a new ordinary road is authored")
	town.request_budget_rebuild();deadline=Time.get_ticks_msec()+15000;finished=false
	while Time.get_ticks_msec()<deadline:
		var progress:Dictionary=town.poll_budget_rebuild(3.5,true)
		if not progress.pending:finished=true;break
		await process_frame
	check(finished and town.meadow.query_masks[Vector2i(-2,1)]!=before_mask and not town.meadow.query_masks[Vector2i(-2,1)].visible(at,.2) and town.meadow.query_masks[Vector2i(4,4)]==far,"a real road replaces the affected grass index while preserving the distant one")
	town.queue_free();await process_frame

func run()->void:
	var a:=fixture();var b:=fixture();var reference:=Batcher.new();var incremental:=Batcher.new()
	var expected:Dictionary=reference.merge(a)
	var live:Node=b.get_node("ResonanceVisualPivot/LiveWindow");var hidden:Node=b.get_node("InvisiblePiece");var live_id:=live.get_instance_id();var hidden_id:=hidden.get_instance_id()
	check(not incremental.merge_budgeted(b,.0001) and incremental.pending_merges.size()==1,"first short slice retains an unfinished merge instead of publishing it")
	var slices:=1
	while not incremental.merge_budgeted(b,.0001):
		slices+=1;await process_frame
	check(incremental.pending_merges.is_empty() and slices>20,"the real source mesh list and final batches complete across many frames and release their job")
	check(signature(a)==signature(b),"full vertex normal UV index color material transform layer range and cull data match synchronous output")
	var actual:Dictionary=b.get_meta("material_batching")
	check(actual.source_instances==36 and actual.skipped_instances==2 and actual.output_batches==expected.output_batches and actual.colored_surfaces==expected.colored_surfaces,"incremental batching retains every eligible surface and original batch grouping")
	check(live.get_instance_id()==live_id and hidden.get_instance_id()==hidden_id and live.get_parent().name=="ResonanceVisualPivot","live and invisible meshes preserve identity and ownership")
	var c:=fixture();var cancel:=Batcher.new();check(not cancel.merge_budgeted(c,.0001),"a second actual merge can stop before completion")
	c.free();cancel=null;await process_frame
	check(is_instance_valid(live) and is_instance_valid(hidden),"discarding an unfinished private root leaves completed independent roots intact")
	a.queue_free();b.queue_free();await process_frame
	await cancellation()
	print("INCREMENTAL_MESH_BATCH ",JSON.stringify({"ok":failures.is_empty(),"checks":checks,"failures":failures,"slices":slices}));quit(0 if failures.is_empty() else 1)

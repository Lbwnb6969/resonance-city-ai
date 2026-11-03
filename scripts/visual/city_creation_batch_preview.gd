extends RefCounted
## The regular house builder draws detached candidate records. Published State,
## collision bodies, material caches and music remain owned by the real town.
var demo
var renderer:Node3D
var ids:Array=[]
var cursor:=0
var merging:=false
var ready:=false
var hidden:Array=[]
func clear()->void:
	for node:Node3D in hidden:
		if is_instance_valid(node):node.show()
	hidden.clear();ids.clear();cursor=0;ready=false;merging=false
	if is_instance_valid(renderer):renderer.queue_free()
	renderer=null;demo=null
func start(owner,plan:Dictionary)->void:
	clear();demo=owner;ids=plan.changed.duplicate()
	if ids.is_empty():return
	renderer=demo.town.get_script().new();renderer.state=plan.city;renderer.name="BatchAppearancePreview";renderer.visible=false
	demo.add_child(renderer);renderer.set_process(false)
	for component:Node in [renderer.shore,renderer.lilypads,renderer.wildlife]:component.set_process(false);renderer.add_child(component)
	renderer.state._ground_terrain.copy_cache_from(demo.state._ground_terrain)
	renderer.state._ground_revision=renderer.state.revision;renderer.state._raw_ground_revision=renderer.state.revision
	renderer.water_field.texture=demo.town.water_field.texture
	renderer.light_phase=demo.light_phase
	renderer.buildings=Node3D.new();renderer.add_child(renderer.buildings)
	renderer.building_context.prepare(renderer.state.houses,renderer.state.roads)
	renderer.craft.setup(renderer);renderer.quality_visual.setup(renderer)
func step()->void:
	if renderer==null or ready:return
	if cursor<ids.size():
		var id:String=ids[cursor];var house:Dictionary=renderer.state.houses[renderer.state._house_index(id)]
		if not merging:
			if not renderer._house_budgeted(house,3.):return
			merging=true
		if not renderer._merge_meshes(renderer.house_roots[id],true,3.):return
		var root:Node3D=renderer.house_roots[id]
		for body:CollisionObject3D in root.find_children("*","CollisionObject3D",true,false):body.collision_layer=0;body.collision_mask=0
		merging=false;cursor+=1
		return
	for id:String in ids:
		if demo.town.house_roots.has(id):var root:Node3D=demo.town.house_roots[id];hidden.append(root);root.hide()
	renderer.visible=true;ready=true

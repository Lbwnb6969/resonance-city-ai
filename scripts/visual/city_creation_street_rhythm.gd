extends RefCounted
## End walls, inner bays and courtyard faces derive from real adjacent cells.
const Wall=preload("res://scripts/visual/city_creation_wall_material.gd")
static func room(row:Dictionary)->bool:return not row.is_empty() and row.cell.kind=="room"
static func profile(context:RefCounted,house:Dictionary,cell:Dictionary,direction:Vector2i)->Dictionary:
 var tangent:=Vector2i(direction.y,-direction.x)
 var left:bool=room(context.neighbor(house,cell,-tangent));var right:bool=room(context.neighbor(house,cell,tangent))
 var back:bool=room(context.neighbor(house,cell,-direction))
 var front:Dictionary=context.neighbor(house,cell,direction)
 var court:bool=not front.is_empty() and front.cell.kind=="terrace"
 var top:bool=not room(context.neighbor(house,cell,Vector2i.ZERO,1))
 return {"left":left,"right":right,"back":back,"top":top,"court":court,"kind":"courtyard" if court else "gable_end" if back and not left and not right else "inner_row" if left and right else "row_end" if left or right else "detached"}
static func opening(renderer,house:Dictionary,cell:Dictionary,wall:Node3D)->Dictionary:
 var outward:=Vector2i(roundi(wall.basis.z.x),roundi(wall.basis.z.z))
 var view:=profile(renderer.building_context,house,cell,outward)
 view.positions=[0.] if view.kind=="gable_end" else [-.43,.43]
 view.radius=.24 if view.kind=="gable_end" else .17 if view.kind=="inner_row" else .19
 return view
static func decorate(renderer,job,frame,wall:Node3D,direction:Vector2i,width:float)->void:
 if job.house.has("signature") or width<1.79 or not frame.retreats.is_empty():return
 var view:=profile(renderer.building_context,job.house,frame.cell,direction)
 var node:=Node3D.new();node.name="StreetRhythm_"+str(view.kind);node.set_meta("street_rhythm",view);node.set_meta("era",job.era);wall.add_child(node)
 var kind:int=Wall.Kind.CANTILEVER if job.era=="modern_eco" else Wall.Kind.STONE
 var color:Color=job.palette[2].lerp(Color("94724e"),.35) if job.era=="modern_eco" else job.palette[0].lerp(Color("d9c7a2"),.55)
 var key:="rhythm/"+str(kind)+"/"+color.to_html()
 if not renderer.materials.has(key):renderer.materials[key]=Wall.source(color,null,"component",kind)
 var material:Material=renderer.materials[key]
 # Shallow terminal details stay on the existing facade; entrances are untouched.
 for index in range(2):
  if view.left if index==0 else view.right:continue
  var x:float=-.83 if index==0 else .83
  if job.era=="modern_eco":
   var brace:MeshInstance3D=renderer._box(node,Vector3(.055,.35,.07),Vector3(x*.80,1.34,.16),material);brace.rotation.z=.65 if index==0 else -.65;brace.name="TerminalTimberBrace"
  elif job.era=="clockwork":
   renderer._box(node,Vector3(.08,1.4,.07),Vector3(x,.83,.14),material).name="EndBrickPier"
   for y:float in [.35,.85,1.35]:renderer._box(node,Vector3(.12,.035,.10),Vector3(x,y,.15),material).name="IronCourseTie"
  else:
   for band in range(4 if job.era=="renaissance" else 3):
    renderer._box(node,Vector3(.12,.22,.085),Vector3(x,.35+band*.32,.13),material).name="TerminalStoneQuoin"
 if view.top and view.kind in ["gable_end","row_end"]:
  renderer._box(node,Vector3(width-.12,.065,.12),Vector3(0,1.49,.17),material).name="TerminalCorniceReturn"
 if view.court:
  renderer._box(node,Vector3(width-.25,.06,.12),Vector3(0,1.30,.17),material).name="CourtyardLintel"
